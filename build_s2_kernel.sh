#!/bin/sh
export KERNELDIR=`readlink -f .`
export INITRAMFS_SOURCE=`readlink -f $KERNELDIR/../s2`
export PARENT_DIR=`readlink -f ..`
export USE_SEC_FIPS_MODE=true

if [ "${1}" != "" ];then
  export KERNELDIR=`readlink -f ${1}`
fi

INITRAMFS_TMP="/tmp/initramfs-source"

if [ ! -f $KERNELDIR/.config ];
then
  make u1_defconfig
fi

. $KERNELDIR/.config

export ARCH=arm
export SUBARCH=arm
export CROSS_COMPILE=arm-eabi-
export PATH=~/arm-eabi-4.6/bin:$PATH

cd $KERNELDIR/
nice -n 10 make -j8 || exit 1

#remove previous initramfs files
rm -rf $INITRAMFS_TMP
rm -rf $INITRAMFS_TMP.cpio
#copy initramfs files to tmp directory
cp -ax $INITRAMFS_SOURCE $INITRAMFS_TMP
#clear git repositories in initramfs
find $INITRAMFS_TMP -name ".git*" -exec rm -rf {} \;
#remove empty directory placeholders
find $INITRAMFS_TMP -name EMPTY_DIRECTORY -exec rm -rf {} \;
rm -rf $INITRAMFS_TMP/tmp/*
#remove mercurial repository
rm -rf $INITRAMFS_TMP/.hg
#copy modules into initramfs
rm $INITRAMFS_TMP/lib/modules/*
find -name '*.ko' -exec cp -av {} $INITRAMFS_TMP/lib/modules/ \;
chmod 644 $INITRAMFS_TMP/lib/modules/*
arm-eabi-strip --strip-unneeded $INITRAMFS_TMP/lib/modules/*
# ./gen_initramfs.sh -o $INITRAMFS_TMP.cpio -u 0 -g 0 $INITRAMFS_TMP

nice -n 10 make -j8 CONFIG_INITRAMFS_SOURCE="$INITRAMFS_TMP" zImage || exit 1

#cp $KERNELDIR/arch/arm/boot/zImage zImage
if [ -f $KERNELDIR/update/zImage ]; 
then
	rm $KERNELDIR/update/zImage
fi
if [ -f $KERNELDIR/FalcoKernel_signed.zip ]; 
then
	rm $KERNELDIR/FalcoKernel_signed.zip
fi
	
$KERNELDIR/mkshbootimg.py $KERNELDIR/update/zImage $KERNELDIR/arch/arm/boot/zImage $KERNELDIR/boot.tar.xz $KERNELDIR/recovery.tar.xz

cd $KERNELDIR/update
jar c * > ../update.jar
cd ..
java -jar signapk.jar testkey.x509.pem testkey.pk8 update.jar FalcoKernel_signed.zip

rm update.jar