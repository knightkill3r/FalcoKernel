cmd_fs/cifs/cifs.ko := arm-eabi-ld -EL -r  -T /home/pasquale/s2/kernel/scripts/module-common.lds --build-id  -o fs/cifs/cifs.ko fs/cifs/cifs.o fs/cifs/cifs.mod.o
