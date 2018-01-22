/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM THE FOLLOWING FILES:
 *          generator/erlang.ml
 *          and from the code in the generator/ subdirectory.
 * ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
 *
 * Copyright (C) 2009-2017 Red Hat Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef GUESTFS_ERLANG_ACTIONS_H_
#define GUESTFS_ERLANG_ACTIONS_H_

extern guestfs_h *g;

extern ETERM *dispatch (ETERM *args_tuple);
extern int atom_equals (ETERM *atom, const char *name);
extern ETERM *make_error (const char *funname);
extern ETERM *unknown_optarg (const char *funname, ETERM *optargname);
extern ETERM *unknown_function (ETERM *fun);
extern ETERM *make_string_list (char **r);
extern ETERM *make_table (char **r);
extern ETERM *make_bool (int r);
extern char **get_string_list (ETERM *term);
extern int get_bool (ETERM *term);
extern int get_int (ETERM *term);
extern int64_t get_int64 (ETERM *term);

#define ARG(i) (ERL_TUPLE_ELEMENT(args_tuple,(i)+1))

ETERM *make_application (const struct guestfs_application *application);
ETERM *make_application2 (const struct guestfs_application2 *application2);
ETERM *make_btrfsbalance (const struct guestfs_btrfsbalance *btrfsbalance);
ETERM *make_btrfsqgroup (const struct guestfs_btrfsqgroup *btrfsqgroup);
ETERM *make_btrfsscrub (const struct guestfs_btrfsscrub *btrfsscrub);
ETERM *make_btrfssubvolume (const struct guestfs_btrfssubvolume *btrfssubvolume);
ETERM *make_dirent (const struct guestfs_dirent *dirent);
ETERM *make_hivex_node (const struct guestfs_hivex_node *hivex_node);
ETERM *make_hivex_value (const struct guestfs_hivex_value *hivex_value);
ETERM *make_inotify_event (const struct guestfs_inotify_event *inotify_event);
ETERM *make_int_bool (const struct guestfs_int_bool *int_bool);
ETERM *make_isoinfo (const struct guestfs_isoinfo *isoinfo);
ETERM *make_lvm_lv (const struct guestfs_lvm_lv *lvm_lv);
ETERM *make_lvm_pv (const struct guestfs_lvm_pv *lvm_pv);
ETERM *make_lvm_vg (const struct guestfs_lvm_vg *lvm_vg);
ETERM *make_mdstat (const struct guestfs_mdstat *mdstat);
ETERM *make_partition (const struct guestfs_partition *partition);
ETERM *make_stat (const struct guestfs_stat *stat);
ETERM *make_statns (const struct guestfs_statns *statns);
ETERM *make_statvfs (const struct guestfs_statvfs *statvfs);
ETERM *make_tsk_dirent (const struct guestfs_tsk_dirent *tsk_dirent);
ETERM *make_utsname (const struct guestfs_utsname *utsname);
ETERM *make_version (const struct guestfs_version *version);
ETERM *make_xattr (const struct guestfs_xattr *xattr);
ETERM *make_xfsinfo (const struct guestfs_xfsinfo *xfsinfo);
ETERM *make_lvm_lv_list (const struct guestfs_lvm_lv_list *lvm_lvs);
ETERM *make_dirent_list (const struct guestfs_dirent_list *dirents);
ETERM *make_btrfsqgroup_list (const struct guestfs_btrfsqgroup_list *btrfsqgroups);
ETERM *make_tsk_dirent_list (const struct guestfs_tsk_dirent_list *tsk_dirents);
ETERM *make_partition_list (const struct guestfs_partition_list *partitions);
ETERM *make_statns_list (const struct guestfs_statns_list *statnss);
ETERM *make_application2_list (const struct guestfs_application2_list *application2s);
ETERM *make_inotify_event_list (const struct guestfs_inotify_event_list *inotify_events);
ETERM *make_application_list (const struct guestfs_application_list *applications);
ETERM *make_hivex_value_list (const struct guestfs_hivex_value_list *hivex_values);
ETERM *make_xattr_list (const struct guestfs_xattr_list *xattrs);
ETERM *make_lvm_pv_list (const struct guestfs_lvm_pv_list *lvm_pvs);
ETERM *make_lvm_vg_list (const struct guestfs_lvm_vg_list *lvm_vgs);
ETERM *make_btrfssubvolume_list (const struct guestfs_btrfssubvolume_list *btrfssubvolumes);
ETERM *make_mdstat_list (const struct guestfs_mdstat_list *mdstats);
ETERM *make_hivex_node_list (const struct guestfs_hivex_node_list *hivex_nodes);
ETERM *make_stat_list (const struct guestfs_stat_list *stats);

ETERM *run_acl_delete_def_file (ETERM *args_tuple);
ETERM *run_acl_get_file (ETERM *args_tuple);
ETERM *run_acl_set_file (ETERM *args_tuple);
ETERM *run_add_cdrom (ETERM *args_tuple);
ETERM *run_add_domain (ETERM *args_tuple);
ETERM *run_add_drive (ETERM *args_tuple);
ETERM *run_add_drive_ro (ETERM *args_tuple);
ETERM *run_add_drive_ro_with_if (ETERM *args_tuple);
ETERM *run_add_drive_scratch (ETERM *args_tuple);
ETERM *run_add_drive_with_if (ETERM *args_tuple);
ETERM *run_add_libvirt_dom (ETERM *args_tuple);
ETERM *run_aug_clear (ETERM *args_tuple);
ETERM *run_aug_close (ETERM *args_tuple);
ETERM *run_aug_defnode (ETERM *args_tuple);
ETERM *run_aug_defvar (ETERM *args_tuple);
ETERM *run_aug_get (ETERM *args_tuple);
ETERM *run_aug_init (ETERM *args_tuple);
ETERM *run_aug_insert (ETERM *args_tuple);
ETERM *run_aug_label (ETERM *args_tuple);
ETERM *run_aug_load (ETERM *args_tuple);
ETERM *run_aug_ls (ETERM *args_tuple);
ETERM *run_aug_match (ETERM *args_tuple);
ETERM *run_aug_mv (ETERM *args_tuple);
ETERM *run_aug_rm (ETERM *args_tuple);
ETERM *run_aug_save (ETERM *args_tuple);
ETERM *run_aug_set (ETERM *args_tuple);
ETERM *run_aug_setm (ETERM *args_tuple);
ETERM *run_aug_transform (ETERM *args_tuple);
ETERM *run_available (ETERM *args_tuple);
ETERM *run_available_all_groups (ETERM *args_tuple);
ETERM *run_base64_in (ETERM *args_tuple);
ETERM *run_base64_out (ETERM *args_tuple);
ETERM *run_blkdiscard (ETERM *args_tuple);
ETERM *run_blkdiscardzeroes (ETERM *args_tuple);
ETERM *run_blkid (ETERM *args_tuple);
ETERM *run_blockdev_flushbufs (ETERM *args_tuple);
ETERM *run_blockdev_getbsz (ETERM *args_tuple);
ETERM *run_blockdev_getro (ETERM *args_tuple);
ETERM *run_blockdev_getsize64 (ETERM *args_tuple);
ETERM *run_blockdev_getss (ETERM *args_tuple);
ETERM *run_blockdev_getsz (ETERM *args_tuple);
ETERM *run_blockdev_rereadpt (ETERM *args_tuple);
ETERM *run_blockdev_setbsz (ETERM *args_tuple);
ETERM *run_blockdev_setra (ETERM *args_tuple);
ETERM *run_blockdev_setro (ETERM *args_tuple);
ETERM *run_blockdev_setrw (ETERM *args_tuple);
ETERM *run_btrfs_balance_cancel (ETERM *args_tuple);
ETERM *run_btrfs_balance_pause (ETERM *args_tuple);
ETERM *run_btrfs_balance_resume (ETERM *args_tuple);
ETERM *run_btrfs_balance_status (ETERM *args_tuple);
ETERM *run_btrfs_device_add (ETERM *args_tuple);
ETERM *run_btrfs_device_delete (ETERM *args_tuple);
ETERM *run_btrfs_filesystem_balance (ETERM *args_tuple);
ETERM *run_btrfs_filesystem_defragment (ETERM *args_tuple);
ETERM *run_btrfs_filesystem_resize (ETERM *args_tuple);
ETERM *run_btrfs_filesystem_show (ETERM *args_tuple);
ETERM *run_btrfs_filesystem_sync (ETERM *args_tuple);
ETERM *run_btrfs_fsck (ETERM *args_tuple);
ETERM *run_btrfs_image (ETERM *args_tuple);
ETERM *run_btrfs_qgroup_assign (ETERM *args_tuple);
ETERM *run_btrfs_qgroup_create (ETERM *args_tuple);
ETERM *run_btrfs_qgroup_destroy (ETERM *args_tuple);
ETERM *run_btrfs_qgroup_limit (ETERM *args_tuple);
ETERM *run_btrfs_qgroup_remove (ETERM *args_tuple);
ETERM *run_btrfs_qgroup_show (ETERM *args_tuple);
ETERM *run_btrfs_quota_enable (ETERM *args_tuple);
ETERM *run_btrfs_quota_rescan (ETERM *args_tuple);
ETERM *run_btrfs_replace (ETERM *args_tuple);
ETERM *run_btrfs_rescue_chunk_recover (ETERM *args_tuple);
ETERM *run_btrfs_rescue_super_recover (ETERM *args_tuple);
ETERM *run_btrfs_scrub_cancel (ETERM *args_tuple);
ETERM *run_btrfs_scrub_resume (ETERM *args_tuple);
ETERM *run_btrfs_scrub_start (ETERM *args_tuple);
ETERM *run_btrfs_scrub_status (ETERM *args_tuple);
ETERM *run_btrfs_set_seeding (ETERM *args_tuple);
ETERM *run_btrfs_subvolume_create (ETERM *args_tuple);
ETERM *run_btrfs_subvolume_delete (ETERM *args_tuple);
ETERM *run_btrfs_subvolume_get_default (ETERM *args_tuple);
ETERM *run_btrfs_subvolume_list (ETERM *args_tuple);
ETERM *run_btrfs_subvolume_set_default (ETERM *args_tuple);
ETERM *run_btrfs_subvolume_show (ETERM *args_tuple);
ETERM *run_btrfs_subvolume_snapshot (ETERM *args_tuple);
ETERM *run_btrfstune_enable_extended_inode_refs (ETERM *args_tuple);
ETERM *run_btrfstune_enable_skinny_metadata_extent_refs (ETERM *args_tuple);
ETERM *run_btrfstune_seeding (ETERM *args_tuple);
ETERM *run_c_pointer (ETERM *args_tuple);
ETERM *run_canonical_device_name (ETERM *args_tuple);
ETERM *run_cap_get_file (ETERM *args_tuple);
ETERM *run_cap_set_file (ETERM *args_tuple);
ETERM *run_case_sensitive_path (ETERM *args_tuple);
ETERM *run_cat (ETERM *args_tuple);
ETERM *run_checksum (ETERM *args_tuple);
ETERM *run_checksum_device (ETERM *args_tuple);
ETERM *run_checksums_out (ETERM *args_tuple);
ETERM *run_chmod (ETERM *args_tuple);
ETERM *run_chown (ETERM *args_tuple);
ETERM *run_clear_backend_setting (ETERM *args_tuple);
ETERM *run_command (ETERM *args_tuple);
ETERM *run_command_lines (ETERM *args_tuple);
ETERM *run_compress_device_out (ETERM *args_tuple);
ETERM *run_compress_out (ETERM *args_tuple);
ETERM *run_config (ETERM *args_tuple);
ETERM *run_copy_attributes (ETERM *args_tuple);
ETERM *run_copy_device_to_device (ETERM *args_tuple);
ETERM *run_copy_device_to_file (ETERM *args_tuple);
ETERM *run_copy_file_to_device (ETERM *args_tuple);
ETERM *run_copy_file_to_file (ETERM *args_tuple);
ETERM *run_copy_in (ETERM *args_tuple);
ETERM *run_copy_out (ETERM *args_tuple);
ETERM *run_copy_size (ETERM *args_tuple);
ETERM *run_cp (ETERM *args_tuple);
ETERM *run_cp_a (ETERM *args_tuple);
ETERM *run_cp_r (ETERM *args_tuple);
ETERM *run_cpio_out (ETERM *args_tuple);
ETERM *run_dd (ETERM *args_tuple);
ETERM *run_debug (ETERM *args_tuple);
ETERM *run_debug_drives (ETERM *args_tuple);
ETERM *run_debug_upload (ETERM *args_tuple);
ETERM *run_device_index (ETERM *args_tuple);
ETERM *run_df (ETERM *args_tuple);
ETERM *run_df_h (ETERM *args_tuple);
ETERM *run_disk_create (ETERM *args_tuple);
ETERM *run_disk_format (ETERM *args_tuple);
ETERM *run_disk_has_backing_file (ETERM *args_tuple);
ETERM *run_disk_virtual_size (ETERM *args_tuple);
ETERM *run_dmesg (ETERM *args_tuple);
ETERM *run_download (ETERM *args_tuple);
ETERM *run_download_blocks (ETERM *args_tuple);
ETERM *run_download_inode (ETERM *args_tuple);
ETERM *run_download_offset (ETERM *args_tuple);
ETERM *run_drop_caches (ETERM *args_tuple);
ETERM *run_du (ETERM *args_tuple);
ETERM *run_e2fsck (ETERM *args_tuple);
ETERM *run_e2fsck_f (ETERM *args_tuple);
ETERM *run_echo_daemon (ETERM *args_tuple);
ETERM *run_egrep (ETERM *args_tuple);
ETERM *run_egrepi (ETERM *args_tuple);
ETERM *run_equal (ETERM *args_tuple);
ETERM *run_exists (ETERM *args_tuple);
ETERM *run_extlinux (ETERM *args_tuple);
ETERM *run_fallocate (ETERM *args_tuple);
ETERM *run_fallocate64 (ETERM *args_tuple);
ETERM *run_feature_available (ETERM *args_tuple);
ETERM *run_fgrep (ETERM *args_tuple);
ETERM *run_fgrepi (ETERM *args_tuple);
ETERM *run_file (ETERM *args_tuple);
ETERM *run_file_architecture (ETERM *args_tuple);
ETERM *run_filesize (ETERM *args_tuple);
ETERM *run_filesystem_available (ETERM *args_tuple);
ETERM *run_filesystem_walk (ETERM *args_tuple);
ETERM *run_fill (ETERM *args_tuple);
ETERM *run_fill_dir (ETERM *args_tuple);
ETERM *run_fill_pattern (ETERM *args_tuple);
ETERM *run_find (ETERM *args_tuple);
ETERM *run_find0 (ETERM *args_tuple);
ETERM *run_find_inode (ETERM *args_tuple);
ETERM *run_findfs_label (ETERM *args_tuple);
ETERM *run_findfs_uuid (ETERM *args_tuple);
ETERM *run_fsck (ETERM *args_tuple);
ETERM *run_fstrim (ETERM *args_tuple);
ETERM *run_get_append (ETERM *args_tuple);
ETERM *run_get_attach_method (ETERM *args_tuple);
ETERM *run_get_autosync (ETERM *args_tuple);
ETERM *run_get_backend (ETERM *args_tuple);
ETERM *run_get_backend_setting (ETERM *args_tuple);
ETERM *run_get_backend_settings (ETERM *args_tuple);
ETERM *run_get_cachedir (ETERM *args_tuple);
ETERM *run_get_direct (ETERM *args_tuple);
ETERM *run_get_e2attrs (ETERM *args_tuple);
ETERM *run_get_e2generation (ETERM *args_tuple);
ETERM *run_get_e2label (ETERM *args_tuple);
ETERM *run_get_e2uuid (ETERM *args_tuple);
ETERM *run_get_hv (ETERM *args_tuple);
ETERM *run_get_identifier (ETERM *args_tuple);
ETERM *run_get_libvirt_requested_credential_challenge (ETERM *args_tuple);
ETERM *run_get_libvirt_requested_credential_defresult (ETERM *args_tuple);
ETERM *run_get_libvirt_requested_credential_prompt (ETERM *args_tuple);
ETERM *run_get_libvirt_requested_credentials (ETERM *args_tuple);
ETERM *run_get_memsize (ETERM *args_tuple);
ETERM *run_get_network (ETERM *args_tuple);
ETERM *run_get_path (ETERM *args_tuple);
ETERM *run_get_pgroup (ETERM *args_tuple);
ETERM *run_get_pid (ETERM *args_tuple);
ETERM *run_get_program (ETERM *args_tuple);
ETERM *run_get_qemu (ETERM *args_tuple);
ETERM *run_get_recovery_proc (ETERM *args_tuple);
ETERM *run_get_selinux (ETERM *args_tuple);
ETERM *run_get_smp (ETERM *args_tuple);
ETERM *run_get_sockdir (ETERM *args_tuple);
ETERM *run_get_state (ETERM *args_tuple);
ETERM *run_get_tmpdir (ETERM *args_tuple);
ETERM *run_get_trace (ETERM *args_tuple);
ETERM *run_get_umask (ETERM *args_tuple);
ETERM *run_get_verbose (ETERM *args_tuple);
ETERM *run_getcon (ETERM *args_tuple);
ETERM *run_getxattr (ETERM *args_tuple);
ETERM *run_getxattrs (ETERM *args_tuple);
ETERM *run_glob_expand (ETERM *args_tuple);
ETERM *run_grep (ETERM *args_tuple);
ETERM *run_grepi (ETERM *args_tuple);
ETERM *run_grub_install (ETERM *args_tuple);
ETERM *run_head (ETERM *args_tuple);
ETERM *run_head_n (ETERM *args_tuple);
ETERM *run_hexdump (ETERM *args_tuple);
ETERM *run_hivex_close (ETERM *args_tuple);
ETERM *run_hivex_commit (ETERM *args_tuple);
ETERM *run_hivex_node_add_child (ETERM *args_tuple);
ETERM *run_hivex_node_children (ETERM *args_tuple);
ETERM *run_hivex_node_delete_child (ETERM *args_tuple);
ETERM *run_hivex_node_get_child (ETERM *args_tuple);
ETERM *run_hivex_node_get_value (ETERM *args_tuple);
ETERM *run_hivex_node_name (ETERM *args_tuple);
ETERM *run_hivex_node_parent (ETERM *args_tuple);
ETERM *run_hivex_node_set_value (ETERM *args_tuple);
ETERM *run_hivex_node_values (ETERM *args_tuple);
ETERM *run_hivex_open (ETERM *args_tuple);
ETERM *run_hivex_root (ETERM *args_tuple);
ETERM *run_hivex_value_key (ETERM *args_tuple);
ETERM *run_hivex_value_type (ETERM *args_tuple);
ETERM *run_hivex_value_utf8 (ETERM *args_tuple);
ETERM *run_hivex_value_value (ETERM *args_tuple);
ETERM *run_initrd_cat (ETERM *args_tuple);
ETERM *run_initrd_list (ETERM *args_tuple);
ETERM *run_inotify_add_watch (ETERM *args_tuple);
ETERM *run_inotify_close (ETERM *args_tuple);
ETERM *run_inotify_files (ETERM *args_tuple);
ETERM *run_inotify_init (ETERM *args_tuple);
ETERM *run_inotify_read (ETERM *args_tuple);
ETERM *run_inotify_rm_watch (ETERM *args_tuple);
ETERM *run_inspect_get_arch (ETERM *args_tuple);
ETERM *run_inspect_get_distro (ETERM *args_tuple);
ETERM *run_inspect_get_drive_mappings (ETERM *args_tuple);
ETERM *run_inspect_get_filesystems (ETERM *args_tuple);
ETERM *run_inspect_get_format (ETERM *args_tuple);
ETERM *run_inspect_get_hostname (ETERM *args_tuple);
ETERM *run_inspect_get_icon (ETERM *args_tuple);
ETERM *run_inspect_get_major_version (ETERM *args_tuple);
ETERM *run_inspect_get_minor_version (ETERM *args_tuple);
ETERM *run_inspect_get_mountpoints (ETERM *args_tuple);
ETERM *run_inspect_get_package_format (ETERM *args_tuple);
ETERM *run_inspect_get_package_management (ETERM *args_tuple);
ETERM *run_inspect_get_product_name (ETERM *args_tuple);
ETERM *run_inspect_get_product_variant (ETERM *args_tuple);
ETERM *run_inspect_get_roots (ETERM *args_tuple);
ETERM *run_inspect_get_type (ETERM *args_tuple);
ETERM *run_inspect_get_windows_current_control_set (ETERM *args_tuple);
ETERM *run_inspect_get_windows_software_hive (ETERM *args_tuple);
ETERM *run_inspect_get_windows_system_hive (ETERM *args_tuple);
ETERM *run_inspect_get_windows_systemroot (ETERM *args_tuple);
ETERM *run_inspect_is_live (ETERM *args_tuple);
ETERM *run_inspect_is_multipart (ETERM *args_tuple);
ETERM *run_inspect_is_netinst (ETERM *args_tuple);
ETERM *run_inspect_list_applications (ETERM *args_tuple);
ETERM *run_inspect_list_applications2 (ETERM *args_tuple);
ETERM *run_inspect_os (ETERM *args_tuple);
ETERM *run_internal_exit (ETERM *args_tuple);
ETERM *run_internal_test (ETERM *args_tuple);
ETERM *run_internal_test_63_optargs (ETERM *args_tuple);
ETERM *run_internal_test_close_output (ETERM *args_tuple);
ETERM *run_internal_test_only_optargs (ETERM *args_tuple);
ETERM *run_internal_test_rbool (ETERM *args_tuple);
ETERM *run_internal_test_rboolerr (ETERM *args_tuple);
ETERM *run_internal_test_rbufferout (ETERM *args_tuple);
ETERM *run_internal_test_rbufferouterr (ETERM *args_tuple);
ETERM *run_internal_test_rconstoptstring (ETERM *args_tuple);
ETERM *run_internal_test_rconstoptstringerr (ETERM *args_tuple);
ETERM *run_internal_test_rconststring (ETERM *args_tuple);
ETERM *run_internal_test_rconststringerr (ETERM *args_tuple);
ETERM *run_internal_test_rhashtable (ETERM *args_tuple);
ETERM *run_internal_test_rhashtableerr (ETERM *args_tuple);
ETERM *run_internal_test_rint (ETERM *args_tuple);
ETERM *run_internal_test_rint64 (ETERM *args_tuple);
ETERM *run_internal_test_rint64err (ETERM *args_tuple);
ETERM *run_internal_test_rinterr (ETERM *args_tuple);
ETERM *run_internal_test_rstring (ETERM *args_tuple);
ETERM *run_internal_test_rstringerr (ETERM *args_tuple);
ETERM *run_internal_test_rstringlist (ETERM *args_tuple);
ETERM *run_internal_test_rstringlisterr (ETERM *args_tuple);
ETERM *run_internal_test_rstruct (ETERM *args_tuple);
ETERM *run_internal_test_rstructerr (ETERM *args_tuple);
ETERM *run_internal_test_rstructlist (ETERM *args_tuple);
ETERM *run_internal_test_rstructlisterr (ETERM *args_tuple);
ETERM *run_internal_test_set_output (ETERM *args_tuple);
ETERM *run_is_blockdev (ETERM *args_tuple);
ETERM *run_is_busy (ETERM *args_tuple);
ETERM *run_is_chardev (ETERM *args_tuple);
ETERM *run_is_config (ETERM *args_tuple);
ETERM *run_is_dir (ETERM *args_tuple);
ETERM *run_is_fifo (ETERM *args_tuple);
ETERM *run_is_file (ETERM *args_tuple);
ETERM *run_is_launching (ETERM *args_tuple);
ETERM *run_is_lv (ETERM *args_tuple);
ETERM *run_is_ready (ETERM *args_tuple);
ETERM *run_is_socket (ETERM *args_tuple);
ETERM *run_is_symlink (ETERM *args_tuple);
ETERM *run_is_whole_device (ETERM *args_tuple);
ETERM *run_is_zero (ETERM *args_tuple);
ETERM *run_is_zero_device (ETERM *args_tuple);
ETERM *run_isoinfo (ETERM *args_tuple);
ETERM *run_isoinfo_device (ETERM *args_tuple);
ETERM *run_journal_close (ETERM *args_tuple);
ETERM *run_journal_get (ETERM *args_tuple);
ETERM *run_journal_get_data_threshold (ETERM *args_tuple);
ETERM *run_journal_get_realtime_usec (ETERM *args_tuple);
ETERM *run_journal_next (ETERM *args_tuple);
ETERM *run_journal_open (ETERM *args_tuple);
ETERM *run_journal_set_data_threshold (ETERM *args_tuple);
ETERM *run_journal_skip (ETERM *args_tuple);
ETERM *run_kill_subprocess (ETERM *args_tuple);
ETERM *run_launch (ETERM *args_tuple);
ETERM *run_lchown (ETERM *args_tuple);
ETERM *run_ldmtool_create_all (ETERM *args_tuple);
ETERM *run_ldmtool_diskgroup_disks (ETERM *args_tuple);
ETERM *run_ldmtool_diskgroup_name (ETERM *args_tuple);
ETERM *run_ldmtool_diskgroup_volumes (ETERM *args_tuple);
ETERM *run_ldmtool_remove_all (ETERM *args_tuple);
ETERM *run_ldmtool_scan (ETERM *args_tuple);
ETERM *run_ldmtool_scan_devices (ETERM *args_tuple);
ETERM *run_ldmtool_volume_hint (ETERM *args_tuple);
ETERM *run_ldmtool_volume_partitions (ETERM *args_tuple);
ETERM *run_ldmtool_volume_type (ETERM *args_tuple);
ETERM *run_lgetxattr (ETERM *args_tuple);
ETERM *run_lgetxattrs (ETERM *args_tuple);
ETERM *run_list_9p (ETERM *args_tuple);
ETERM *run_list_devices (ETERM *args_tuple);
ETERM *run_list_disk_labels (ETERM *args_tuple);
ETERM *run_list_dm_devices (ETERM *args_tuple);
ETERM *run_list_filesystems (ETERM *args_tuple);
ETERM *run_list_ldm_partitions (ETERM *args_tuple);
ETERM *run_list_ldm_volumes (ETERM *args_tuple);
ETERM *run_list_md_devices (ETERM *args_tuple);
ETERM *run_list_partitions (ETERM *args_tuple);
ETERM *run_ll (ETERM *args_tuple);
ETERM *run_llz (ETERM *args_tuple);
ETERM *run_ln (ETERM *args_tuple);
ETERM *run_ln_f (ETERM *args_tuple);
ETERM *run_ln_s (ETERM *args_tuple);
ETERM *run_ln_sf (ETERM *args_tuple);
ETERM *run_lremovexattr (ETERM *args_tuple);
ETERM *run_ls (ETERM *args_tuple);
ETERM *run_ls0 (ETERM *args_tuple);
ETERM *run_lsetxattr (ETERM *args_tuple);
ETERM *run_lstat (ETERM *args_tuple);
ETERM *run_lstatlist (ETERM *args_tuple);
ETERM *run_lstatns (ETERM *args_tuple);
ETERM *run_lstatnslist (ETERM *args_tuple);
ETERM *run_luks_add_key (ETERM *args_tuple);
ETERM *run_luks_close (ETERM *args_tuple);
ETERM *run_luks_format (ETERM *args_tuple);
ETERM *run_luks_format_cipher (ETERM *args_tuple);
ETERM *run_luks_kill_slot (ETERM *args_tuple);
ETERM *run_luks_open (ETERM *args_tuple);
ETERM *run_luks_open_ro (ETERM *args_tuple);
ETERM *run_lvcreate (ETERM *args_tuple);
ETERM *run_lvcreate_free (ETERM *args_tuple);
ETERM *run_lvm_canonical_lv_name (ETERM *args_tuple);
ETERM *run_lvm_clear_filter (ETERM *args_tuple);
ETERM *run_lvm_remove_all (ETERM *args_tuple);
ETERM *run_lvm_set_filter (ETERM *args_tuple);
ETERM *run_lvremove (ETERM *args_tuple);
ETERM *run_lvrename (ETERM *args_tuple);
ETERM *run_lvresize (ETERM *args_tuple);
ETERM *run_lvresize_free (ETERM *args_tuple);
ETERM *run_lvs (ETERM *args_tuple);
ETERM *run_lvs_full (ETERM *args_tuple);
ETERM *run_lvuuid (ETERM *args_tuple);
ETERM *run_lxattrlist (ETERM *args_tuple);
ETERM *run_max_disks (ETERM *args_tuple);
ETERM *run_md_create (ETERM *args_tuple);
ETERM *run_md_detail (ETERM *args_tuple);
ETERM *run_md_stat (ETERM *args_tuple);
ETERM *run_md_stop (ETERM *args_tuple);
ETERM *run_mkdir (ETERM *args_tuple);
ETERM *run_mkdir_mode (ETERM *args_tuple);
ETERM *run_mkdir_p (ETERM *args_tuple);
ETERM *run_mkdtemp (ETERM *args_tuple);
ETERM *run_mke2fs (ETERM *args_tuple);
ETERM *run_mke2fs_J (ETERM *args_tuple);
ETERM *run_mke2fs_JL (ETERM *args_tuple);
ETERM *run_mke2fs_JU (ETERM *args_tuple);
ETERM *run_mke2journal (ETERM *args_tuple);
ETERM *run_mke2journal_L (ETERM *args_tuple);
ETERM *run_mke2journal_U (ETERM *args_tuple);
ETERM *run_mkfifo (ETERM *args_tuple);
ETERM *run_mkfs (ETERM *args_tuple);
ETERM *run_mkfs_b (ETERM *args_tuple);
ETERM *run_mkfs_btrfs (ETERM *args_tuple);
ETERM *run_mklost_and_found (ETERM *args_tuple);
ETERM *run_mkmountpoint (ETERM *args_tuple);
ETERM *run_mknod (ETERM *args_tuple);
ETERM *run_mknod_b (ETERM *args_tuple);
ETERM *run_mknod_c (ETERM *args_tuple);
ETERM *run_mksquashfs (ETERM *args_tuple);
ETERM *run_mkswap (ETERM *args_tuple);
ETERM *run_mkswap_L (ETERM *args_tuple);
ETERM *run_mkswap_U (ETERM *args_tuple);
ETERM *run_mkswap_file (ETERM *args_tuple);
ETERM *run_mktemp (ETERM *args_tuple);
ETERM *run_modprobe (ETERM *args_tuple);
ETERM *run_mount (ETERM *args_tuple);
ETERM *run_mount_9p (ETERM *args_tuple);
ETERM *run_mount_local (ETERM *args_tuple);
ETERM *run_mount_local_run (ETERM *args_tuple);
ETERM *run_mount_loop (ETERM *args_tuple);
ETERM *run_mount_options (ETERM *args_tuple);
ETERM *run_mount_ro (ETERM *args_tuple);
ETERM *run_mount_vfs (ETERM *args_tuple);
ETERM *run_mountable_device (ETERM *args_tuple);
ETERM *run_mountable_subvolume (ETERM *args_tuple);
ETERM *run_mountpoints (ETERM *args_tuple);
ETERM *run_mounts (ETERM *args_tuple);
ETERM *run_mv (ETERM *args_tuple);
ETERM *run_nr_devices (ETERM *args_tuple);
ETERM *run_ntfs_3g_probe (ETERM *args_tuple);
ETERM *run_ntfscat_i (ETERM *args_tuple);
ETERM *run_ntfsclone_in (ETERM *args_tuple);
ETERM *run_ntfsclone_out (ETERM *args_tuple);
ETERM *run_ntfsfix (ETERM *args_tuple);
ETERM *run_ntfsresize (ETERM *args_tuple);
ETERM *run_ntfsresize_size (ETERM *args_tuple);
ETERM *run_parse_environment (ETERM *args_tuple);
ETERM *run_parse_environment_list (ETERM *args_tuple);
ETERM *run_part_add (ETERM *args_tuple);
ETERM *run_part_del (ETERM *args_tuple);
ETERM *run_part_disk (ETERM *args_tuple);
ETERM *run_part_expand_gpt (ETERM *args_tuple);
ETERM *run_part_get_bootable (ETERM *args_tuple);
ETERM *run_part_get_disk_guid (ETERM *args_tuple);
ETERM *run_part_get_gpt_guid (ETERM *args_tuple);
ETERM *run_part_get_gpt_type (ETERM *args_tuple);
ETERM *run_part_get_mbr_id (ETERM *args_tuple);
ETERM *run_part_get_mbr_part_type (ETERM *args_tuple);
ETERM *run_part_get_name (ETERM *args_tuple);
ETERM *run_part_get_parttype (ETERM *args_tuple);
ETERM *run_part_init (ETERM *args_tuple);
ETERM *run_part_list (ETERM *args_tuple);
ETERM *run_part_set_bootable (ETERM *args_tuple);
ETERM *run_part_set_disk_guid (ETERM *args_tuple);
ETERM *run_part_set_disk_guid_random (ETERM *args_tuple);
ETERM *run_part_set_gpt_guid (ETERM *args_tuple);
ETERM *run_part_set_gpt_type (ETERM *args_tuple);
ETERM *run_part_set_mbr_id (ETERM *args_tuple);
ETERM *run_part_set_name (ETERM *args_tuple);
ETERM *run_part_to_dev (ETERM *args_tuple);
ETERM *run_part_to_partnum (ETERM *args_tuple);
ETERM *run_ping_daemon (ETERM *args_tuple);
ETERM *run_pread (ETERM *args_tuple);
ETERM *run_pread_device (ETERM *args_tuple);
ETERM *run_pvchange_uuid (ETERM *args_tuple);
ETERM *run_pvchange_uuid_all (ETERM *args_tuple);
ETERM *run_pvcreate (ETERM *args_tuple);
ETERM *run_pvremove (ETERM *args_tuple);
ETERM *run_pvresize (ETERM *args_tuple);
ETERM *run_pvresize_size (ETERM *args_tuple);
ETERM *run_pvs (ETERM *args_tuple);
ETERM *run_pvs_full (ETERM *args_tuple);
ETERM *run_pvuuid (ETERM *args_tuple);
ETERM *run_pwrite (ETERM *args_tuple);
ETERM *run_pwrite_device (ETERM *args_tuple);
ETERM *run_read_file (ETERM *args_tuple);
ETERM *run_read_lines (ETERM *args_tuple);
ETERM *run_readdir (ETERM *args_tuple);
ETERM *run_readlink (ETERM *args_tuple);
ETERM *run_readlinklist (ETERM *args_tuple);
ETERM *run_realpath (ETERM *args_tuple);
ETERM *run_remount (ETERM *args_tuple);
ETERM *run_remove_drive (ETERM *args_tuple);
ETERM *run_removexattr (ETERM *args_tuple);
ETERM *run_rename (ETERM *args_tuple);
ETERM *run_resize2fs (ETERM *args_tuple);
ETERM *run_resize2fs_M (ETERM *args_tuple);
ETERM *run_resize2fs_size (ETERM *args_tuple);
ETERM *run_rm (ETERM *args_tuple);
ETERM *run_rm_f (ETERM *args_tuple);
ETERM *run_rm_rf (ETERM *args_tuple);
ETERM *run_rmdir (ETERM *args_tuple);
ETERM *run_rmmountpoint (ETERM *args_tuple);
ETERM *run_rsync (ETERM *args_tuple);
ETERM *run_rsync_in (ETERM *args_tuple);
ETERM *run_rsync_out (ETERM *args_tuple);
ETERM *run_scrub_device (ETERM *args_tuple);
ETERM *run_scrub_file (ETERM *args_tuple);
ETERM *run_scrub_freespace (ETERM *args_tuple);
ETERM *run_selinux_relabel (ETERM *args_tuple);
ETERM *run_set_append (ETERM *args_tuple);
ETERM *run_set_attach_method (ETERM *args_tuple);
ETERM *run_set_autosync (ETERM *args_tuple);
ETERM *run_set_backend (ETERM *args_tuple);
ETERM *run_set_backend_setting (ETERM *args_tuple);
ETERM *run_set_backend_settings (ETERM *args_tuple);
ETERM *run_set_cachedir (ETERM *args_tuple);
ETERM *run_set_direct (ETERM *args_tuple);
ETERM *run_set_e2attrs (ETERM *args_tuple);
ETERM *run_set_e2generation (ETERM *args_tuple);
ETERM *run_set_e2label (ETERM *args_tuple);
ETERM *run_set_e2uuid (ETERM *args_tuple);
ETERM *run_set_hv (ETERM *args_tuple);
ETERM *run_set_identifier (ETERM *args_tuple);
ETERM *run_set_label (ETERM *args_tuple);
ETERM *run_set_libvirt_requested_credential (ETERM *args_tuple);
ETERM *run_set_libvirt_supported_credentials (ETERM *args_tuple);
ETERM *run_set_memsize (ETERM *args_tuple);
ETERM *run_set_network (ETERM *args_tuple);
ETERM *run_set_path (ETERM *args_tuple);
ETERM *run_set_pgroup (ETERM *args_tuple);
ETERM *run_set_program (ETERM *args_tuple);
ETERM *run_set_qemu (ETERM *args_tuple);
ETERM *run_set_recovery_proc (ETERM *args_tuple);
ETERM *run_set_selinux (ETERM *args_tuple);
ETERM *run_set_smp (ETERM *args_tuple);
ETERM *run_set_tmpdir (ETERM *args_tuple);
ETERM *run_set_trace (ETERM *args_tuple);
ETERM *run_set_uuid (ETERM *args_tuple);
ETERM *run_set_uuid_random (ETERM *args_tuple);
ETERM *run_set_verbose (ETERM *args_tuple);
ETERM *run_setcon (ETERM *args_tuple);
ETERM *run_setxattr (ETERM *args_tuple);
ETERM *run_sfdisk (ETERM *args_tuple);
ETERM *run_sfdiskM (ETERM *args_tuple);
ETERM *run_sfdisk_N (ETERM *args_tuple);
ETERM *run_sfdisk_disk_geometry (ETERM *args_tuple);
ETERM *run_sfdisk_kernel_geometry (ETERM *args_tuple);
ETERM *run_sfdisk_l (ETERM *args_tuple);
ETERM *run_sh (ETERM *args_tuple);
ETERM *run_sh_lines (ETERM *args_tuple);
ETERM *run_shutdown (ETERM *args_tuple);
ETERM *run_sleep (ETERM *args_tuple);
ETERM *run_stat (ETERM *args_tuple);
ETERM *run_statns (ETERM *args_tuple);
ETERM *run_statvfs (ETERM *args_tuple);
ETERM *run_strings (ETERM *args_tuple);
ETERM *run_strings_e (ETERM *args_tuple);
ETERM *run_swapoff_device (ETERM *args_tuple);
ETERM *run_swapoff_file (ETERM *args_tuple);
ETERM *run_swapoff_label (ETERM *args_tuple);
ETERM *run_swapoff_uuid (ETERM *args_tuple);
ETERM *run_swapon_device (ETERM *args_tuple);
ETERM *run_swapon_file (ETERM *args_tuple);
ETERM *run_swapon_label (ETERM *args_tuple);
ETERM *run_swapon_uuid (ETERM *args_tuple);
ETERM *run_sync (ETERM *args_tuple);
ETERM *run_syslinux (ETERM *args_tuple);
ETERM *run_tail (ETERM *args_tuple);
ETERM *run_tail_n (ETERM *args_tuple);
ETERM *run_tar_in (ETERM *args_tuple);
ETERM *run_tar_out (ETERM *args_tuple);
ETERM *run_tgz_in (ETERM *args_tuple);
ETERM *run_tgz_out (ETERM *args_tuple);
ETERM *run_touch (ETERM *args_tuple);
ETERM *run_truncate (ETERM *args_tuple);
ETERM *run_truncate_size (ETERM *args_tuple);
ETERM *run_tune2fs (ETERM *args_tuple);
ETERM *run_tune2fs_l (ETERM *args_tuple);
ETERM *run_txz_in (ETERM *args_tuple);
ETERM *run_txz_out (ETERM *args_tuple);
ETERM *run_umask (ETERM *args_tuple);
ETERM *run_umount (ETERM *args_tuple);
ETERM *run_umount_all (ETERM *args_tuple);
ETERM *run_umount_local (ETERM *args_tuple);
ETERM *run_upload (ETERM *args_tuple);
ETERM *run_upload_offset (ETERM *args_tuple);
ETERM *run_user_cancel (ETERM *args_tuple);
ETERM *run_utimens (ETERM *args_tuple);
ETERM *run_utsname (ETERM *args_tuple);
ETERM *run_version (ETERM *args_tuple);
ETERM *run_vfs_label (ETERM *args_tuple);
ETERM *run_vfs_minimum_size (ETERM *args_tuple);
ETERM *run_vfs_type (ETERM *args_tuple);
ETERM *run_vfs_uuid (ETERM *args_tuple);
ETERM *run_vg_activate (ETERM *args_tuple);
ETERM *run_vg_activate_all (ETERM *args_tuple);
ETERM *run_vgchange_uuid (ETERM *args_tuple);
ETERM *run_vgchange_uuid_all (ETERM *args_tuple);
ETERM *run_vgcreate (ETERM *args_tuple);
ETERM *run_vglvuuids (ETERM *args_tuple);
ETERM *run_vgmeta (ETERM *args_tuple);
ETERM *run_vgpvuuids (ETERM *args_tuple);
ETERM *run_vgremove (ETERM *args_tuple);
ETERM *run_vgrename (ETERM *args_tuple);
ETERM *run_vgs (ETERM *args_tuple);
ETERM *run_vgs_full (ETERM *args_tuple);
ETERM *run_vgscan (ETERM *args_tuple);
ETERM *run_vguuid (ETERM *args_tuple);
ETERM *run_wait_ready (ETERM *args_tuple);
ETERM *run_wc_c (ETERM *args_tuple);
ETERM *run_wc_l (ETERM *args_tuple);
ETERM *run_wc_w (ETERM *args_tuple);
ETERM *run_wipefs (ETERM *args_tuple);
ETERM *run_write (ETERM *args_tuple);
ETERM *run_write_append (ETERM *args_tuple);
ETERM *run_write_file (ETERM *args_tuple);
ETERM *run_xfs_admin (ETERM *args_tuple);
ETERM *run_xfs_growfs (ETERM *args_tuple);
ETERM *run_xfs_info (ETERM *args_tuple);
ETERM *run_xfs_repair (ETERM *args_tuple);
ETERM *run_zegrep (ETERM *args_tuple);
ETERM *run_zegrepi (ETERM *args_tuple);
ETERM *run_zero (ETERM *args_tuple);
ETERM *run_zero_device (ETERM *args_tuple);
ETERM *run_zero_free_space (ETERM *args_tuple);
ETERM *run_zerofree (ETERM *args_tuple);
ETERM *run_zfgrep (ETERM *args_tuple);
ETERM *run_zfgrepi (ETERM *args_tuple);
ETERM *run_zfile (ETERM *args_tuple);
ETERM *run_zgrep (ETERM *args_tuple);
ETERM *run_zgrepi (ETERM *args_tuple);

#endif /* GUESTFS_ERLANG_ACTIONS_H_ */
