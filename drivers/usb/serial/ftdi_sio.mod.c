#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd11d5bbf, "module_layout" },
	{ 0xb78c61e8, "param_ops_bool" },
	{ 0x8436f8e3, "param_ops_ushort" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0xb6b100cb, "usb_serial_disconnect" },
	{ 0x7ba70524, "usb_serial_probe" },
	{ 0x4caa0973, "usb_serial_generic_unthrottle" },
	{ 0x5fc44181, "usb_serial_generic_throttle" },
	{ 0xeee0941f, "usb_deregister" },
	{ 0x9e0906b4, "usb_serial_deregister" },
	{ 0xbb484ba4, "usb_register_driver" },
	{ 0xb20fa6b, "usb_serial_register" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x5ba0bf59, "device_create_file" },
	{ 0x32152568, "dev_set_drvdata" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0x3297361b, "__mutex_init" },
	{ 0x83800bfa, "kref_init" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x5f9c7d00, "device_remove_file" },
	{ 0x9775cdc, "kref_get" },
	{ 0x3ff73eb3, "usb_serial_generic_open" },
	{ 0xd5b037e1, "kref_put" },
	{ 0x6f973669, "usb_serial_generic_close" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x3a8ad4dc, "interruptible_sleep_on" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9d669763, "memcpy" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x6636f2c8, "tty_encode_baud_rate" },
	{ 0x495b7c42, "tty_get_baud_rate" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfdc77238, "kmalloc_caches" },
	{ 0xa08f4fdf, "kmem_cache_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xad3674de, "mutex_unlock" },
	{ 0x1a5747c, "mutex_lock" },
	{ 0xb67cd057, "dev_err" },
	{ 0x64785f62, "tty_flip_buffer_push" },
	{ 0xf6d0100a, "usb_serial_handle_break" },
	{ 0xfc5c2941, "tty_insert_flip_string_fixed_flag" },
	{ 0xbf5cb430, "tty_kref_put" },
	{ 0x716708ab, "tty_insert_flip_string_flags" },
	{ 0x26707cfa, "usb_serial_handle_sysrq_char" },
	{ 0x72542c85, "__wake_up" },
	{ 0xc97f51, "tty_port_tty_get" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0x47f31995, "dev_get_drvdata" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x44209a88, "usb_control_msg" },
	{ 0x5a532de4, "_dev_info" },
	{ 0x27e1a049, "printk" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0403pF7C0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF608d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF60Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFF00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFFA8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p9F80d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pABB8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD011d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD012d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD013d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD014d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD015d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD016d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD017d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pB810d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pB811d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pB812d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF2D0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC60d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD070d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD071d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pC850d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p8372d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p6001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p6006d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFBFAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p6010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p6011d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p6014d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p6015d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pCAA0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA10d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pBFD8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pBFD9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pBFDAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pBFDBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pBFDCd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1209p1002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1209p1006d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF0C8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD780d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC08d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC09d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC0Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC0Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC0Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC0Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC0Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC0Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC82d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC8Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC8Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DCDp0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFE38d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA01d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA02d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA03d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA04d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA05d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA06d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFB80d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF070d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0101d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0103d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0104d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0105d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0106d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0107d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0108d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0109d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp010Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp010Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp010Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp010Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp010Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp010Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0110d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0111d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0112d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0113d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0114d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0115d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0116d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0117d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0118d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0119d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp011Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp011Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp011Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp011Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp011Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp011Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0120d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0121d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0122d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0123d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0124d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0125d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0126d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0127d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0128d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0129d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp012Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp012Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp012Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp012Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp012Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp012Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0130d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0131d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0132d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0133d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0134d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0135d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0136d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0137d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0138d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0139d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp013Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp013Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp013Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp013Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp013Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp013Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0140d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0141d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0142d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0143d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0144d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0145d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0146d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0147d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0148d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0149d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp014Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp014Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp014Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp014Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp014Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp014Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0150d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0151d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0152d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0153d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0154d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0155d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0156d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0157d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0158d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0159d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp015Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp015Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp015Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp015Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp015Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp015Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0160d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0161d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0162d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0163d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0164d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0165d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0166d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0167d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0168d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0169d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp016Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp016Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp016Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp016Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp016Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp016Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0170d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0171d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0172d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0173d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0174d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0175d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0176d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0177d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0178d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0179d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp017Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp017Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp017Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp017Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp017Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp017Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0180d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0181d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0182d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0183d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0184d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0185d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0186d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0187d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0188d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0189d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp018Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp018Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp018Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp018Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp018Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp018Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0190d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0191d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0192d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0193d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0194d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0195d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0196d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0197d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0198d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp0199d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp019Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp019Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp019Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp019Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp019Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp019Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01A0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01A1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01A2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01A3d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01A4d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01A5d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01A6d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01A7d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01A8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01A9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01AAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01ABd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01ACd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01ADd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01AEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01AFd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01B0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01B1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01B2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01B3d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01B4d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01B5d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01B6d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01B7d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01B8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01B9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01BAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01BBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01BCd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01BDd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01BEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01BFd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01C0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01C1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01C2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01C3d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01C4d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01C5d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01C6d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01C7d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01C8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01C9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01CAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01CBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01CCd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01CDd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01CEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01CFd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01D0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01D1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01D2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01D3d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01D4d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01D5d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01D6d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01D7d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01D8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01D9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01DAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01DBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01DCd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01DDd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01DEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01DFd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01E0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01E1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01E2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01E3d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01E4d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01E5d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01E6d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01E7d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01E8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01E9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01EAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01EBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01ECd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01EDd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01EEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01EFd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01F0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01F1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01F2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01F3d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01F4d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01F5d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01F6d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01F7d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01F8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01F9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01FAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01FBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01FCd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01FDd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01FEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B3Dp01FFd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF0C0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF208d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEBE0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF857d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2101d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2103d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2104d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p9020d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2211d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2221d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2212d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2222d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2213d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2223d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2411d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2421d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2431d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2441d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2412d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2422d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2432d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2442d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2413d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2423d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2433d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2443d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2811d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2821d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2831d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2841d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2851d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2861d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2871d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2881d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2812d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2822d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2832d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2842d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2852d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2862d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2872d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2882d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2813d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2823d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2833d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2843d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2853d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2863d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2873d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52p2883d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52pA02Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52pA02Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52pA02Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C52pA02Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0ACDp0300d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B39p0421d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B39p0103d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA78d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF850d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC70d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC71d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC72d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFC73d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE808d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE809d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE80Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE80Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE80Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE80Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE80Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE80Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE888d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE889d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE88Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE88Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE88Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE88Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE88Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE88Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFB5Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFB5Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFB58d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF06Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE6C8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF06Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFF38d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFF39d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFF3Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFF3Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFF3Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFF3Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFF3Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFF3Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA33d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE006d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE009d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE00Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFB59d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFB5Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFB5Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFB5Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFB5Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF068d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF069d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF06Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF06Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF06Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF06Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE0F0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE0F1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE0F2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE0F3d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE0F4d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE0F5d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE0F6d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE0F7d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE0E8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE0EFd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE0E9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE0EAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE0EBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE0ECd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE0EDd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE0EEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF448d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF449d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF44Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF44Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF44Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF9D0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF9D1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF9D2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF9D3d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF9D4d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF9D5d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFAD0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v093Cp0601d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v093Cp0701d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F94p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F94p0005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF680d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF460d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v103Ep03E8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFD60d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0647p0100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v06CEp8311d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC01d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC02d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC03d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC11d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC12d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC16d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC17d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC18d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC19d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC25d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC26d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC27d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC33d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC34d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC49d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pAC50d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0856pBA02d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE520d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF3C0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF3C1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pF3C2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD388d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD389d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD38Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD38Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD38Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD38Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD38Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD38Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1342p0202d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE548d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEEE8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEEE9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEEEAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEEEBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEEECd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEEEDd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEEEEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEEEFd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEC88d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEC89d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:vDEEEp0300d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:vDEEEp0302d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:vDEEEp0303d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDF28d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDF30d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDF32d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDF31d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDF33d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDF35d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D46p2020d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D46p2021d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0D3Ap0300d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFF20d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEA90d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDC00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDC01d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFA88d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pC7D0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pC991d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C26p0004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C26p0018d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C26p0009d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C26p000Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C26p000Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C26p000Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C26p000Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C26p0010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C26p0011d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C26p0012d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C26p0013d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDD20d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE050d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFAF0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v128Dp0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD678d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pCC48d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pCC49d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pCC4Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C7Dp0005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDA70d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDA71d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDA72d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDA73d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDA74d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1781p0C30d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2100p9E52d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2100p9E54d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEE18d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE40Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1B91p0064d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE700d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD738d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD739d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v15BAp0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v15BAp002Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1457p5118d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pBAF8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pBCD8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pBCD9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pBCDAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pBDC8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0584pB020d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pED22d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0101d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0103d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0104d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0105d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0106d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0107d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0300d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0301d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0400d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0500d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0700d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0800d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0900d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0A00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0B00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0C00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0D00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0E00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p0F00d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p1000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p8000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p8001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p8002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p8003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p8004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5050p8005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEF50d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pEF51d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1BC9p6001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFB99d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03EBp2109d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1CF1p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1CF1p0004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0456pF000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0456pF001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04D8p000Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C6Cp04B2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v9E88p9E8Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0FD8p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C33p0010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A79p6001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p9E90d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pA6D0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pED74d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pED72d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pED73d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pED71d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p9378d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p9379d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p937Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p937Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pBCA0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pBCA1d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pBCA2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pBCA4d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pE729d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pD578d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1C0Cp0102d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDAF8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDAF9d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDAFAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDAFBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDAFCd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDAFDd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDAFEd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pDAFFd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFF18d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFF1Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pFF1Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pA951d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p9868d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v20B7p0713d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0483p3747d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p8A28d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403pCFF8d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0403p6002d*dc*dsc*dp*ic*isc*ip*");
