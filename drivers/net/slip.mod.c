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
	{ 0x3ec8886f, "param_ops_int" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x57b2cf94, "tty_register_ldisc" },
	{ 0xfdc77238, "kmalloc_caches" },
	{ 0x37accc28, "register_netdevice" },
	{ 0xdfc5169b, "slhc_init" },
	{ 0xa08f4fdf, "kmem_cache_alloc" },
	{ 0x8a7c6f1, "add_timer" },
	{ 0x7426f76c, "init_timer_key" },
	{ 0xd9c45124, "alloc_netdev_mqs" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x8d0ed851, "tty_devnum" },
	{ 0x39983a2f, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb5ca1c46, "slhc_free" },
	{ 0xa20e4a5c, "free_netdev" },
	{ 0xff2b602, "slhc_compress" },
	{ 0xa7756797, "consume_skb" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x37a0cba, "kfree" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x41d546a6, "tty_chars_in_buffer" },
	{ 0x9a217c54, "dev_trans_start" },
	{ 0x10d5fd50, "tty_hangup" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x8b8a76db, "unregister_netdev" },
	{ 0xa4476cec, "del_timer_sync" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x97255bdf, "strlen" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xcfeaf304, "tty_mode_ioctl" },
	{ 0x7d11c268, "jiffies" },
	{ 0x1b945caf, "del_timer" },
	{ 0xb368ec89, "_raw_spin_unlock_bh" },
	{ 0x53985936, "mod_timer" },
	{ 0x8bd94317, "_raw_spin_lock_bh" },
	{ 0x27e1a049, "printk" },
	{ 0x23c8f257, "slhc_uncompress" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x9d00112b, "netif_rx" },
	{ 0x9d669763, "memcpy" },
	{ 0xdc7a62d3, "skb_put" },
	{ 0x759b5e54, "dev_alloc_skb" },
	{ 0xa63d85ab, "slhc_remember" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x81840a7, "__netif_schedule" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x49ebacbd, "_clear_bit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

