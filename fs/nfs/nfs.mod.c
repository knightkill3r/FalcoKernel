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
	{ 0xc561cc84, "__kmap_atomic" },
	{ 0x49da4da3, "kmem_cache_destroy" },
	{ 0xfdc77238, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x405c1144, "get_seconds" },
	{ 0xd5b037e1, "kref_put" },
	{ 0x9395fd5e, "set_anon_super" },
	{ 0x706786b0, "sunrpc_cache_update" },
	{ 0xcae15792, "call_usermodehelper_setfns" },
	{ 0x85b87d7c, "up_read" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0xe4480052, "rpcauth_create" },
	{ 0xf7df4928, "call_usermodehelper_exec" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0x970d71c3, "__mark_inode_dirty" },
	{ 0x8dd002e1, "__percpu_counter_add" },
	{  0x80dd4, "__set_page_dirty_nobuffers" },
	{ 0x3cc9c214, "filemap_fault" },
	{ 0x349cba85, "strchr" },
	{ 0x1f16554c, "register_sysctl_table" },
	{ 0x576e568d, "mntget" },
	{ 0x47d8382e, "generic_write_checks" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x97255bdf, "strlen" },
	{ 0xce83578d, "nlmclnt_done" },
	{ 0x11a3c025, "page_address" },
	{ 0x520f56cf, "__alloc_workqueue_key" },
	{ 0x4a2555a3, "iget5_locked" },
	{ 0xfe222c4c, "kill_anon_super" },
	{ 0xd4302c72, "dec_zone_page_state" },
	{ 0xf3e48b20, "nlmclnt_init" },
	{ 0x12c9a440, "dget_parent" },
	{ 0x190e6768, "seq_open" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x99048b99, "seq_escape" },
	{ 0x732a5996, "sunrpc_cache_pipe_upcall" },
	{ 0x11e51a34, "seq_puts" },
	{ 0x7db57751, "proc_dointvec" },
	{ 0x632a220d, "is_bad_inode" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xa693fc06, "sunrpc_cache_unregister_pipefs" },
	{ 0x844dc0ab, "test_set_page_writeback" },
	{ 0x783a0105, "vfs_kern_mount" },
	{ 0x6cbf2dab, "__lock_page" },
	{ 0x5da61152, "filemap_write_and_wait" },
	{ 0xb71e85c, "put_rpccred" },
	{ 0x7924267a, "deactivate_locked_super" },
	{ 0x36c620e3, "generic_file_aio_read" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0xbf7fd2f5, "schedule_timeout_killable" },
	{ 0x415ef1d8, "dput" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x84b75602, "____pagevec_lru_add" },
	{ 0xa0eac20, "seq_printf" },
	{ 0x5071e0e2, "radix_tree_tagged" },
	{ 0xb9d45dbf, "remove_proc_entry" },
	{ 0xfed1e0d6, "mempool_destroy" },
	{ 0x44e9a829, "match_token" },
	{ 0xadd1f4a2, "xdr_inline_pages" },
	{ 0x471a2263, "d_materialise_unique" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xf9ed677d, "invalidate_inode_pages2" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x8372ab4, "vfs_path_lookup" },
	{ 0x84bee86b, "rpc_restart_call" },
	{ 0xb78c61e8, "param_ops_bool" },
	{ 0x749aa4d2, "end_writeback" },
	{ 0xad3674de, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe55adb4b, "vfs_fsync" },
	{ 0xec26befa, "rename_lock" },
	{ 0x62d5be6e, "have_submounts" },
	{ 0xdb17e2fd, "generic_read_dir" },
	{ 0xcf145048, "igrab" },
	{ 0x1251d30f, "call_rcu" },
	{ 0x6f785b52, "path_get" },
	{ 0x6e954f71, "redirty_page_for_writepage" },
	{ 0x3c2c5af5, "sprintf" },
	{ 0x2cebe266, "generic_file_aio_write" },
	{ 0x64a5cae3, "seq_read" },
	{ 0xaf5e12f5, "__alloc_pages_nodemask" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x57174d0f, "set_page_dirty" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x6bcb6e07, "__might_sleep" },
	{ 0xd91f120f, "cancel_dirty_page" },
	{ 0x44b911c3, "rb_replace_node" },
	{ 0xa3ae0bec, "xdr_reserve_space" },
	{ 0x1907c2a2, "down_read" },
	{ 0xa20b1eda, "rpc_killall_tasks" },
	{ 0xfcaa04a0, "out_of_line_wait_on_bit_lock" },
	{ 0xa14edf8c, "end_page_writeback" },
	{ 0x810b3618, "param_ops_string" },
	{ 0xde9360ba, "totalram_pages" },
	{ 0xa151cc7b, "flock_lock_file_wait" },
	{ 0x7e850d11, "d_delete" },
	{ 0xa64cc9e6, "complete_all" },
	{ 0xfbe27a1c, "rb_first" },
	{ 0x2fb2759b, "_atomic_dec_and_lock" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0xfe7c4287, "nr_cpu_ids" },
	{ 0x183fa88b, "mempool_alloc_slab" },
	{ 0xa3c6dcbe, "rpc_delay" },
	{ 0x5634bbd8, "cache_check" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xa4476cec, "del_timer_sync" },
	{ 0x924c77a7, "xdr_terminate_string" },
	{ 0x5f754e5a, "memset" },
	{ 0xf62f4d2a, "xdr_init_decode_pages" },
	{ 0x7fc3d3ce, "rpc_put_task_async" },
	{ 0x5ddbf48b, "proc_mkdir" },
	{ 0xff44b7a9, "rpc_call_sync" },
	{ 0xfcdb2110, "rpc_create" },
	{ 0x4f631ce5, "wait_for_completion_killable" },
	{ 0xde4e23ef, "sync_inode" },
	{ 0x27e1a049, "printk" },
	{ 0x9e03656d, "d_rehash" },
	{ 0xe388b207, "sunrpc_cache_lookup" },
	{ 0x351300c3, "d_obtain_alias" },
	{ 0x71c90087, "memcmp" },
	{ 0x62c0656a, "write_inode_now" },
	{ 0xc0c48646, "sget" },
	{ 0xf528d7c1, "d_alloc_root" },
	{ 0x1aa4125d, "kunmap" },
	{ 0x64db9a5, "mark_mounts_for_expiry" },
	{ 0xc0580937, "rb_erase" },
	{ 0x5bd26000, "rpc_proc_unregister" },
	{ 0x8b522e9b, "d_move" },
	{ 0x82d79b51, "sysctl_vfs_cache_pressure" },
	{ 0x3103b232, "bdi_init" },
	{ 0x891840f3, "rpc_max_payload" },
	{ 0x270a054b, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xfa4766c6, "sunrpc_cache_register_pipefs" },
	{ 0x1a5747c, "mutex_lock" },
	{ 0x8f6057d9, "write_cache_pages" },
	{ 0xed93f29e, "__kunmap_atomic" },
	{ 0x7a2f244a, "destroy_workqueue" },
	{ 0x1d21bdcb, "rpc_lookup_machine_cred" },
	{ 0x97e0f6a5, "radix_tree_gang_lookup_tag" },
	{ 0xe97f4ce5, "qword_get" },
	{ 0x6aa2e42c, "rpc_lookup_cred" },
	{ 0xa5bb2b0d, "rpc_peeraddr2str" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x2e3f839b, "truncate_pagecache" },
	{ 0x60d0417f, "clear_bdi_congested" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x1c987efa, "wait_on_page_bit" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x4a5495a4, "rpc_clone_client" },
	{ 0x518319d5, "inc_zone_page_state" },
	{ 0xc4a523b0, "unlock_page" },
	{ 0x722618e1, "init_net" },
	{ 0xcb0fe2a5, "__get_page_tail" },
	{ 0xcee467f3, "xprt_load_transport" },
	{ 0x7f5d3300, "contig_page_data" },
	{ 0x8ace755d, "radix_tree_delete" },
	{ 0xb2038037, "generic_file_llseek_unlocked" },
	{ 0x51ef33b8, "kstrndup" },
	{ 0xedcf6be4, "qword_add" },
	{ 0x69f0c34e, "boot_tvec_bases" },
	{ 0x736d2d6, "inode_init_once" },
	{ 0xa79addf2, "rpc_setbufsize" },
	{ 0xc649d518, "__rpc_wait_for_completion_task" },
	{ 0xba00e1c4, "posix_lock_file_wait" },
	{ 0x5f9f2758, "__cond_resched_lock" },
	{ 0xa08f4fdf, "kmem_cache_alloc" },
	{ 0xed3443d5, "__free_pages" },
	{ 0xf413b36, "unregister_shrinker" },
	{ 0x3587e424, "mempool_alloc" },
	{ 0xaddfbf62, "radix_tree_tag_set" },
	{ 0xebeec705, "generic_file_mmap" },
	{ 0xb86799f3, "bdi_register_dev" },
	{ 0x5f07707e, "kmap" },
	{ 0x176c9b00, "d_alloc" },
	{ 0xfa5fa76c, "rpc_get_mount" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xd415642e, "unregister_sysctl_table" },
	{ 0x7c62d042, "cpu_possible_mask" },
	{ 0xce681711, "get_user_pages" },
	{ 0x31bd442e, "schedule_delayed_work" },
	{ 0x1000e51, "schedule" },
	{ 0x619ca8a, "getboottime" },
	{ 0x926f5b3d, "rpc_print_iostats" },
	{ 0x4277bf88, "mempool_create" },
	{ 0x336658f4, "do_sync_read" },
	{ 0x9ecf097f, "unlock_new_inode" },
	{ 0xf45c0539, "deactivate_super" },
	{ 0x1725a7ae, "d_drop" },
	{ 0x5eaf33a3, "inode_newsize_ok" },
	{ 0x996bdb64, "_kstrtoul" },
	{ 0x5e95b1cd, "current_umask" },
	{ 0xb678366f, "int_sqrt" },
	{ 0xc27487dd, "__bug" },
	{ 0x7536ce08, "shrink_dcache_parent" },
	{ 0x505c03b1, "clear_page_dirty_for_io" },
	{ 0xcff32acb, "rpc_run_task" },
	{ 0xaa6b2793, "path_put" },
	{ 0x2a4975f3, "mempool_free" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0xee986d8c, "xdr_read_pages" },
	{ 0xf280bf47, "read_cache_pages" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x87d67abb, "radix_tree_tag_clear" },
	{ 0xa6dcc773, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x18dacd2c, "kmem_cache_create" },
	{ 0xc5cc5004, "register_filesystem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x72542c85, "__wake_up" },
	{ 0x9d923e2d, "d_lookup" },
	{ 0x95895440, "call_usermodehelper_setup" },
	{ 0xfff83bf9, "add_to_page_cache_locked" },
	{ 0xa0ceef51, "out_of_line_wait_on_bit" },
	{ 0xf9fd9c0, "rpc_ntop" },
	{ 0xccc2372e, "rpc_pton" },
	{ 0x9f0e0a38, "proc_create_data" },
	{ 0x7a2bda81, "seq_lseek" },
	{ 0xc40ff70c, "iput" },
	{ 0x83800bfa, "kref_init" },
	{ 0xb69818b3, "read_cache_page" },
	{ 0x768874c0, "invalidate_inode_pages2_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x9dd2ca85, "generic_permission" },
	{ 0xdad3f97f, "do_sync_write" },
	{ 0xee0abad0, "ihold" },
	{ 0x34b70f84, "generic_file_splice_write" },
	{ 0x768c1ddb, "unmap_mapping_range" },
	{ 0x9d669763, "memcpy" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0xb11cd4ee, "generic_error_remove_page" },
	{ 0x5a428fee, "register_shrinker" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x9775cdc, "kref_get" },
	{ 0x9754ec10, "radix_tree_preload" },
	{ 0xdc0e0504, "generic_readlink" },
	{ 0x2d9fb654, "put_page" },
	{ 0xf83178bd, "finish_wait" },
	{ 0x4f0e8bdc, "bdi_destroy" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x52a170a1, "unregister_filesystem" },
	{ 0xc78227a3, "init_special_inode" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x6fd4426a, "xdr_inline_decode" },
	{ 0x701d0ebd, "snprintf" },
	{ 0xf6aa4605, "seq_release" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x979898eb, "generic_file_splice_read" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xbf04b7f1, "lookup_one_len" },
	{ 0xf436da7f, "mnt_set_expiry" },
	{ 0xeb070c6, "bdi_unregister" },
	{ 0x5c00e6c0, "rpc_shutdown_client" },
	{ 0xe45e7995, "xdr_write_pages" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x40326461, "rpc_proc_register" },
	{ 0x48d316aa, "wait_for_completion_timeout" },
	{ 0xc8033012, "proc_dointvec_jiffies" },
	{ 0x9b81d490, "grab_cache_page_write_begin" },
	{ 0xa0f74ce7, "radix_tree_insert" },
	{ 0xa2c56c31, "param_ops_ulong" },
	{ 0x826725bc, "xdr_set_scratch_buffer" },
	{ 0x2152394a, "page_put_link" },
	{ 0xd93e4795, "d_instantiate" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xc5ee1414, "flush_dcache_page" },
	{ 0xd9069349, "__d_drop" },
	{ 0xd4718f5, "generic_fillattr" },
	{ 0x417998dc, "nlmclnt_proc" },
	{ 0x2d8c878, "set_bdi_congested" },
	{ 0x5b14ec1a, "rpc_put_mount" },
	{ 0x32847b96, "truncate_inode_pages" },
	{ 0xf6f8ca18, "posix_test_lock" },
	{ 0xfe56ef8e, "rpc_put_task" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sunrpc,lockd";

