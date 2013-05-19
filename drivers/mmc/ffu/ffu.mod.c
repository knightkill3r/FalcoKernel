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
	{ 0x6eb7ec14, "platform_bus_type" },
	{ 0x47f31995, "dev_get_drvdata" },
	{ 0xf4c8d4b6, "bus_find_device_by_name" },
	{ 0xaa5612a8, "driver_find" },
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9cd60539, "sg_free_table" },
	{ 0x6ccf7bd7, "__pv_phys_offset" },
	{ 0xa85f32d0, "mem_map" },
	{ 0xd5152710, "sg_next" },
	{ 0xf88c3301, "sg_init_table" },
	{ 0xcdd158d, "sg_alloc_table" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xfdc77238, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xa08f4fdf, "kmem_cache_alloc" },
	{ 0xa4749701, "mmc_release_host" },
	{ 0x448251cb, "mmc_wait_for_req" },
	{ 0x9a666ce7, "__mmc_claim_host" },
	{ 0xefdd2345, "sg_init_one" },
	{ 0x1c1a4b8e, "mmc_set_data_timeout" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xd025e0f7, "system_nrt_wq" },
	{ 0x571a3be2, "queue_delayed_work" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xad3674de, "mutex_unlock" },
	{ 0x1a5747c, "mutex_lock" },
	{ 0xe1d61c3a, "cancel_delayed_work_sync" },
	{ 0x74c97f9c, "_raw_spin_unlock_irqrestore" },
	{ 0xbd7083bc, "_raw_spin_lock_irqsave" },
	{ 0x27e1a049, "printk" },
	{ 0x9d669763, "memcpy" },
	{ 0xc27487dd, "__bug" },
	{ 0x60bb93aa, "mmc_wait_for_cmd" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

