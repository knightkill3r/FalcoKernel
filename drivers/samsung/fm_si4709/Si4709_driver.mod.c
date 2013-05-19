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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcfb583, "i2c_master_send" },
	{ 0xfdc77238, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x32152568, "dev_set_drvdata" },
	{ 0x520f56cf, "__alloc_workqueue_key" },
	{ 0x8e7c9239, "i2c_del_driver" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x5945e7f8, "queue_work" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xad3674de, "mutex_unlock" },
	{ 0xaf8aa518, "system_rev" },
	{ 0xb2b4635d, "nonseekable_open" },
	{ 0xc8c71d87, "s3c_gpio_setpull" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x18377811, "misc_register" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x3297361b, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xa8f59416, "gpio_direction_output" },
	{ 0x1a5747c, "mutex_lock" },
	{ 0x7a2f244a, "destroy_workqueue" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xaa04fc9a, "i2c_register_driver" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xa08f4fdf, "kmem_cache_alloc" },
	{ 0x11f447ce, "__gpio_to_irq" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x1000e51, "schedule" },
	{ 0x845e3405, "i2c_master_recv" },
	{ 0x72542c85, "__wake_up" },
	{ 0x6d4d6df5, "s3c_gpio_cfgpin" },
	{ 0xfe990052, "gpio_free" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0xf83178bd, "finish_wait" },
	{ 0x47f31995, "dev_get_drvdata" },
	{ 0x310e39bf, "misc_deregister" },
	{ 0xf20dabd8, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:Si4709");
