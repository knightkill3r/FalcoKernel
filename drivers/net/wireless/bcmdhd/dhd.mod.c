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
	{ 0x37accc28, "register_netdevice" },
	{ 0x383dd873, "sdio_writeb" },
	{ 0xce34e81a, "sdio_readb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfdc77238, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd4fab16, "complete_and_exit" },
	{ 0xc1b893c2, "wiphy_free" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xa85f32d0, "mem_map" },
	{ 0x349cba85, "strchr" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x97255bdf, "strlen" },
	{ 0xc7ec6c27, "strspn" },
	{ 0x89177421, "wake_lock_destroy" },
	{ 0x32152568, "dev_set_drvdata" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x3e45e9ff, "register_inetaddr_notifier" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xbffd901, "send_sig" },
	{ 0x718565d5, "remove_wait_queue" },
	{ 0x83ce82eb, "get_monotonic_boottime" },
	{ 0xddabb5fb, "cfg80211_inform_bss_frame" },
	{ 0xca26fbfb, "sdio_enable_func" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8bd94317, "_raw_spin_lock_bh" },
	{ 0x30dff9c1, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x8949858b, "schedule_work" },
	{ 0x1c3f30f, "down_interruptible" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xdda9e423, "wake_lock" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xe9584860, "cfg80211_rx_mgmt" },
	{ 0xcd1cbe9d, "filp_close" },
	{ 0x7513e94e, "ieee80211_channel_to_frequency" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7426f76c, "init_timer_key" },
	{ 0xad3674de, "mutex_unlock" },
	{ 0xf71fd0a9, "rfkill_register" },
	{ 0x4a37af33, "___dma_single_cpu_to_dev" },
	{ 0x4e60d494, "cfg80211_del_sta" },
	{ 0x55b74b46, "wake_unlock" },
	{ 0x7fe1a403, "cfg80211_find_ie" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0xacc708bf, "skb_realloc_headroom" },
	{ 0xddcdd51c, "kthread_create_on_node" },
	{ 0x6ccf7bd7, "__pv_phys_offset" },
	{ 0x7d11c268, "jiffies" },
	{ 0xa9876f24, "sdio_get_host_pm_caps" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbaf957d5, "cfg80211_mgmt_tx_status" },
	{ 0x810b3618, "param_ops_string" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x9d00112b, "netif_rx" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x448251cb, "mmc_wait_for_req" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2fd61cd, "wait_for_completion" },
	{ 0x31f2c624, "kernel_read" },
	{ 0x934c9140, "sdio_writel" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xa4476cec, "del_timer_sync" },
	{ 0xb5eeb329, "register_early_suspend" },
	{ 0x5f754e5a, "memset" },
	{ 0x5fb0d29d, "netif_rx_ni" },
	{ 0x521c6b16, "__ieee80211_get_channel" },
	{ 0xb86e4ab9, "random32" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0x6d2184c, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb1e5409f, "rfkill_alloc" },
	{ 0x3297361b, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x42224298, "sscanf" },
	{ 0xe569aed4, "kthread_stop" },
	{ 0xdb3877d, "___dma_single_dev_to_cpu" },
	{ 0x71c90087, "memcmp" },
	{ 0xa20e4a5c, "free_netdev" },
	{ 0x14d4a9c5, "_change_bit" },
	{ 0xf8d16784, "wiphy_unregister" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x328a05f1, "strncpy" },
	{ 0x7c4a0df4, "register_netdev" },
	{ 0x9d1569ae, "dma_free_coherent" },
	{ 0x1c1a4b8e, "mmc_set_data_timeout" },
	{ 0x1308a3e6, "sdio_readl" },
	{ 0x3cfedb3f, "register_pm_notifier" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x752829d, "skb_push" },
	{ 0x1a5747c, "mutex_lock" },
	{ 0xea5b40cf, "cfg80211_connect_result" },
	{ 0xb0641b9e, "wake_lock_active" },
	{ 0x39983a2f, "dev_close" },
	{ 0x86e6f4c4, "cfg80211_michael_mic_failure" },
	{ 0xe67c8533, "wiphy_apply_custom_regulatory" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xb5a0e267, "down" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x53985936, "mod_timer" },
	{ 0x8a7c6f1, "add_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x654ba8f1, "platform_driver_register" },
	{ 0x2552a98a, "skb_pull" },
	{ 0xdbaa69e0, "cfg80211_ibss_joined" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x7a1e21d0, "dev_kfree_skb_any" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0xb905dc29, "dma_alloc_coherent" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x5821ca54, "sdio_readsb" },
	{ 0xa569a94, "sdio_unregister_driver" },
	{ 0xfae407c9, "sdio_f0_writeb" },
	{ 0x77ba0bfa, "sdio_set_host_pm_flags" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9f984513, "strrchr" },
	{ 0xa08f4fdf, "kmem_cache_alloc" },
	{ 0x80d3541b, "cfg80211_roamed" },
	{ 0xd7779230, "cfg80211_put_bss" },
	{ 0xc2d24c89, "__alloc_skb" },
	{ 0x76502ae0, "wiphy_new" },
	{ 0x760b437a, "unregister_inetaddr_notifier" },
	{ 0x326784ea, "wiphy_register" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xb368ec89, "_raw_spin_unlock_bh" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xf045cd70, "wake_lock_timeout" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x58340987, "cfg80211_ready_on_channel" },
	{ 0x545a86a, "eth_type_trans" },
	{ 0xc27487dd, "__bug" },
	{ 0xf9d090e, "sdio_f0_readb" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x5129d151, "wake_up_process" },
	{ 0x9878383b, "cfg80211_disconnected" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0x24cb19b6, "platform_get_resource_byname" },
	{ 0x57a6504e, "vsnprintf" },
	{ 0x61dbfa4f, "cfg80211_new_sta" },
	{ 0x258dda91, "sched_setscheduler" },
	{ 0x72542c85, "__wake_up" },
	{ 0x74834a9b, "sdio_memcpy_toio" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0xf92455cf, "sdio_writew" },
	{ 0x3fdacc6f, "add_wait_queue" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x4578f29b, "rfkill_destroy" },
	{ 0x9d669763, "memcpy" },
	{ 0xde5d1761, "wake_lock_init" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0x7a728ef4, "up" },
	{ 0x6892088c, "unregister_pm_notifier" },
	{ 0x45a55ec8, "__iounmap" },
	{ 0xf83178bd, "finish_wait" },
	{ 0x1ee32636, "sdio_reset_comm" },
	{ 0xb227ae83, "unregister_early_suspend" },
	{ 0x5c5b1fad, "cfg80211_remain_on_channel_expired" },
	{ 0x8b8a76db, "unregister_netdev" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4f7f2d1b, "complete" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x81840a7, "__netif_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x7d774593, "sdio_readw" },
	{ 0x7ae018af, "sdio_register_driver" },
	{ 0xa7756797, "consume_skb" },
	{ 0x2cf0ca63, "sdio_memcpy_fromio" },
	{ 0x91a8ddd8, "sdio_claim_host" },
	{ 0x82b7edfe, "platform_driver_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xdbb1c091, "cfg80211_scan_done" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xdc7a62d3, "skb_put" },
	{ 0x15861288, "rfkill_unregister" },
	{ 0x48d316aa, "wait_for_completion_timeout" },
	{ 0xc3fe87c8, "param_ops_uint" },
	{ 0x587df050, "outer_cache" },
	{ 0x47f31995, "dev_get_drvdata" },
	{ 0x6b6bee11, "down_timeout" },
	{ 0x4a17f7ab, "sdio_set_block_size" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa4f8e8d7, "sdio_disable_func" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xb97dac27, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4a99782b, "filp_open" },
	{ 0x314a38a0, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v02D0d0000*");
MODULE_ALIAS("sdio:c*v02D0d0492*");
MODULE_ALIAS("sdio:c*v02D0d0493*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4319*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0dA8E7*");
MODULE_ALIAS("sdio:c00v*d*");
