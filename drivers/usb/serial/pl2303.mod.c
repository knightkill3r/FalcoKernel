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
	{ 0x42e7557e, "usb_serial_resume" },
	{ 0xa1ed5dcd, "usb_serial_suspend" },
	{ 0xb6b100cb, "usb_serial_disconnect" },
	{ 0x7ba70524, "usb_serial_probe" },
	{ 0xeee0941f, "usb_deregister" },
	{ 0x9e0906b4, "usb_serial_deregister" },
	{ 0xbb484ba4, "usb_register_driver" },
	{ 0xb20fa6b, "usb_serial_register" },
	{ 0x32152568, "dev_set_drvdata" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0x36380995, "usb_serial_generic_submit_read_urb" },
	{ 0xe98411d3, "usb_clear_halt" },
	{ 0x23b81644, "usb_kill_urb" },
	{ 0x6f973669, "usb_serial_generic_close" },
	{ 0x3a8ad4dc, "interruptible_sleep_on" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xfdc77238, "kmalloc_caches" },
	{ 0x6636f2c8, "tty_encode_baud_rate" },
	{ 0x495b7c42, "tty_get_baud_rate" },
	{ 0xa08f4fdf, "kmem_cache_alloc" },
	{ 0xf2997713, "tty_termios_hw_change" },
	{ 0x9d669763, "memcpy" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x37a0cba, "kfree" },
	{ 0x44209a88, "usb_control_msg" },
	{ 0xfec956da, "dev_printk" },
	{ 0x860437a6, "usb_serial_handle_dcd_change" },
	{ 0xf6d0100a, "usb_serial_handle_break" },
	{ 0xb67cd057, "dev_err" },
	{ 0x5dc810f5, "usb_submit_urb" },
	{ 0xbf5cb430, "tty_kref_put" },
	{ 0x64785f62, "tty_flip_buffer_push" },
	{ 0xfc5c2941, "tty_insert_flip_string_fixed_flag" },
	{ 0x716708ab, "tty_insert_flip_string_flags" },
	{ 0x26707cfa, "usb_serial_handle_sysrq_char" },
	{ 0xc97f51, "tty_port_tty_get" },
	{ 0x72542c85, "__wake_up" },
	{ 0x27e1a049, "printk" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0x47f31995, "dev_get_drvdata" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v067Bp2303d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp04BBd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp1234d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067BpAAA2d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067BpAAA0d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp0611d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp0612d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp0609d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp331Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v067Bp0307d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0A03d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04BBp0A0Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0557p2008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0547p2008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056Ep5003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v056Ep5004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EBAp1080d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EBAp2080d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0DF7p0620d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0584pB000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v2478p2008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1453p4026d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0731p0528d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v6189p2068d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11F7p02DFd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04E8p8001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11F5p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11F5p0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11F5p0004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11F5p0005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04A5p4027d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0745p0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v078Bp1234d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v10B5pAC70d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v079Bp0027d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0413p2101d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0E55p110Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0731p2003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v050Dp0257d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v058Fp9720d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11F6p2001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v07AAp002Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05ADp0FBAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v5372p2303d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v03F0p3524d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04B8p0521d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v04B8p0522d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v054Cp0437d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v11ADp0001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B63p6530d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0B8Cp2303d*dc*dsc*dp*ic*isc*ip*");
