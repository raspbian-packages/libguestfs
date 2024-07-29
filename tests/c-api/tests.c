/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM THE FOLLOWING FILES:
 *          generator/tests_c_api.ml
 *          and from the code in the generator/ subdirectory.
 * ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
 *
 * Copyright (C) 2009-2023 Red Hat Inc.
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

#include <config.h>

/* It is safe to call deprecated functions from this file. */
#define GUESTFS_NO_WARN_DEPRECATED
#undef GUESTFS_NO_DEPRECATED

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#include "guestfs.h"
#include "guestfs-utils.h"
#include "structs-cleanups.h"

#include "tests.h"

void
no_test_warnings (void)
{
  size_t i;
  const char *no_tests[] = {
    "add_cdrom",
    "add_domain",
    "add_drive",
    "add_drive_ro",
    "add_drive_ro_with_if",
    "add_drive_scratch",
    "add_drive_with_if",
    "add_libvirt_dom",
    "aug_defnode",
    "aug_defvar",
    "aug_load",
    "aug_match",
    "aug_mv",
    "aug_rm",
    "aug_transform",
    "base64_out",
    "blkdiscard",
    "blkdiscardzeroes",
    "blockdev_getbsz",
    "blockdev_setbsz",
    "btrfs_balance_cancel",
    "btrfs_balance_pause",
    "btrfs_balance_resume",
    "btrfs_balance_status",
    "btrfs_device_add",
    "btrfs_device_delete",
    "btrfs_filesystem_resize",
    "btrfs_replace",
    "btrfs_scrub_cancel",
    "btrfs_scrub_resume",
    "btrfs_subvolume_list",
    "btrfs_subvolume_set_default",
    "checksums_out",
    "chown",
    "clear_backend_setting",
    "clevis_luks_unlock",
    "compress_device_out",
    "compress_out",
    "config",
    "copy_attributes",
    "copy_device_to_device",
    "copy_device_to_file",
    "copy_file_to_device",
    "copy_in",
    "copy_out",
    "cpio_out",
    "cryptsetup_close",
    "cryptsetup_open",
    "debug",
    "debug_drives",
    "debug_upload",
    "df",
    "df_h",
    "disk_create",
    "download_blocks",
    "download_inode",
    "extlinux",
    "f2fs_expand",
    "filesystem_available",
    "filesystem_walk",
    "fill_dir",
    "find0",
    "find_inode",
    "findfs_label",
    "findfs_uuid",
    "fstrim",
    "get_append",
    "get_backend_setting",
    "get_cachedir",
    "get_direct",
    "get_libvirt_requested_credential_challenge",
    "get_libvirt_requested_credential_defresult",
    "get_libvirt_requested_credential_prompt",
    "get_libvirt_requested_credentials",
    "get_network",
    "get_pgroup",
    "get_pid",
    "get_recovery_proc",
    "get_selinux",
    "get_smp",
    "get_sockdir",
    "get_state",
    "get_tmpdir",
    "get_verbose",
    "getcon",
    "getxattr",
    "getxattrs",
    "hivex_node_add_child",
    "hivex_node_delete_child",
    "hivex_node_get_child",
    "hivex_node_get_value",
    "hivex_node_parent",
    "hivex_node_set_value",
    "hivex_value_key",
    "hivex_value_string",
    "hivex_value_type",
    "hivex_value_utf8",
    "hivex_value_value",
    "inotify_close",
    "inotify_read",
    "inotify_rm_watch",
    "inspect_get_arch",
    "inspect_get_build_id",
    "inspect_get_distro",
    "inspect_get_drive_mappings",
    "inspect_get_filesystems",
    "inspect_get_format",
    "inspect_get_hostname",
    "inspect_get_icon",
    "inspect_get_major_version",
    "inspect_get_minor_version",
    "inspect_get_mountpoints",
    "inspect_get_osinfo",
    "inspect_get_package_format",
    "inspect_get_package_management",
    "inspect_get_product_name",
    "inspect_get_product_variant",
    "inspect_get_roots",
    "inspect_get_type",
    "inspect_get_windows_current_control_set",
    "inspect_get_windows_software_hive",
    "inspect_get_windows_system_hive",
    "inspect_get_windows_systemroot",
    "inspect_is_live",
    "inspect_is_multipart",
    "inspect_is_netinst",
    "inspect_list_applications",
    "inspect_list_applications2",
    "inspect_os",
    "internal_autosync",
    "internal_exit",
    "internal_feature_available",
    "internal_filesystem_walk",
    "internal_find_inode",
    "internal_get_console_socket",
    "internal_journal_get",
    "internal_list_rpm_applications",
    "internal_lstatnslist",
    "internal_lxattrlist",
    "internal_parse_mountable",
    "internal_readdir",
    "internal_readlinklist",
    "internal_rhbz914931",
    "internal_test",
    "internal_test_63_optargs",
    "internal_test_close_output",
    "internal_test_only_optargs",
    "internal_test_rbool",
    "internal_test_rboolerr",
    "internal_test_rbufferout",
    "internal_test_rbufferouterr",
    "internal_test_rconstoptstring",
    "internal_test_rconstoptstringerr",
    "internal_test_rconststring",
    "internal_test_rconststringerr",
    "internal_test_rhashtable",
    "internal_test_rhashtableerr",
    "internal_test_rint",
    "internal_test_rint64",
    "internal_test_rint64err",
    "internal_test_rinterr",
    "internal_test_rstring",
    "internal_test_rstringerr",
    "internal_test_rstringlist",
    "internal_test_rstringlisterr",
    "internal_test_rstruct",
    "internal_test_rstructerr",
    "internal_test_rstructlist",
    "internal_test_rstructlisterr",
    "internal_test_set_output",
    "internal_upload",
    "internal_yara_scan",
    "isoinfo",
    "journal_close",
    "journal_get",
    "journal_get_data_threshold",
    "journal_get_realtime_usec",
    "journal_next",
    "journal_open",
    "journal_set_data_threshold",
    "journal_skip",
    "kill_subprocess",
    "launch",
    "lchown",
    "ldmtool_create_all",
    "ldmtool_diskgroup_disks",
    "ldmtool_diskgroup_name",
    "ldmtool_diskgroup_volumes",
    "ldmtool_remove_all",
    "ldmtool_scan",
    "ldmtool_scan_devices",
    "ldmtool_volume_hint",
    "ldmtool_volume_partitions",
    "ldmtool_volume_type",
    "lgetxattr",
    "lgetxattrs",
    "list_9p",
    "list_dm_devices",
    "list_filesystems",
    "list_ldm_partitions",
    "list_ldm_volumes",
    "list_md_devices",
    "ll",
    "llz",
    "lremovexattr",
    "ls0",
    "lsetxattr",
    "lstatlist",
    "lstatnslist",
    "luks_add_key",
    "luks_close",
    "luks_format",
    "luks_format_cipher",
    "luks_kill_slot",
    "luks_open",
    "luks_open_ro",
    "luks_uuid",
    "lvm_clear_filter",
    "lvm_remove_all",
    "lvm_set_filter",
    "lvs_full",
    "lvuuid",
    "lxattrlist",
    "max_disks",
    "md_create",
    "md_detail",
    "md_stat",
    "md_stop",
    "mkmountpoint",
    "mksquashfs",
    "mount_9p",
    "mount_local",
    "mount_local_run",
    "mount_loop",
    "mount_options",
    "mount_vfs",
    "mountable_device",
    "mountable_subvolume",
    "mountpoints",
    "ntfscat_i",
    "ntfsclone_in",
    "ntfsclone_out",
    "ntfsresize",
    "ntfsresize_size",
    "parse_environment",
    "parse_environment_list",
    "part_expand_gpt",
    "part_get_name",
    "part_list",
    "pvresize",
    "pvresize_size",
    "pvs_full",
    "pvuuid",
    "readdir",
    "readlinklist",
    "remove_drive",
    "removexattr",
    "resize2fs_M",
    "resize2fs_size",
    "rmmountpoint",
    "rsync",
    "rsync_in",
    "rsync_out",
    "scrub_freespace",
    "selinux_relabel",
    "set_append",
    "set_attach_method",
    "set_autosync",
    "set_backend",
    "set_backend_setting",
    "set_backend_settings",
    "set_cachedir",
    "set_direct",
    "set_hv",
    "set_identifier",
    "set_libvirt_requested_credential",
    "set_libvirt_supported_credentials",
    "set_memsize",
    "set_network",
    "set_path",
    "set_pgroup",
    "set_program",
    "set_qemu",
    "set_recovery_proc",
    "set_selinux",
    "set_smp",
    "set_tmpdir",
    "set_verbose",
    "setcon",
    "setxattr",
    "sfdisk",
    "sfdiskM",
    "sfdisk_N",
    "sfdisk_disk_geometry",
    "sfdisk_kernel_geometry",
    "sfdisk_l",
    "sh",
    "sh_lines",
    "shutdown",
    "syslinux",
    "tar_out",
    "tgz_out",
    "txz_out",
    "umount_local",
    "user_cancel",
    "vg_activate_all",
    "vglvuuids",
    "vgmeta",
    "vgpvuuids",
    "vgs_full",
    "vguuid",
    "wait_ready",
    "yara_destroy",
    "yara_load",
    "yara_scan",
    "zfile",
    NULL
  };

  for (i = 0; no_tests[i] != NULL; ++i)
    fprintf (stderr, "warning: \"guestfs_%s\" has no tests\n",
             no_tests[i]);
}

static int test_acl_delete_def_file_0_skip (void);

static int
test_acl_delete_def_file_0 (guestfs_h *g)
{
  if (test_acl_delete_def_file_0_skip ()) {
    skipped ("test_acl_delete_def_file_0", "environment variable set");
    return 0;
  }

  const char *features1[] = { "acl", NULL };
  if (!guestfs_feature_available (g, (char **) features1)) {
    skipped ("test_acl_delete_def_file_0", "group %s not available in daemon",
             features1[0]);
    return 0;
  }

  skipped ("test_acl_delete_def_file_0", "test disabled in generator");
  return 0;
}

static int
test_acl_delete_def_file_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "acl_delete_def_file") == NULL;
  str = getenv ("SKIP_TEST_ACL_DELETE_DEF_FILE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ACL_DELETE_DEF_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int test_acl_delete_def_file_1_skip (void);
static int test_acl_delete_def_file_1_perform (guestfs_h *);

static int
test_acl_delete_def_file_1 (guestfs_h *g)
{
  if (test_acl_delete_def_file_1_skip ()) {
    skipped ("test_acl_delete_def_file_1", "environment variable set");
    return 0;
  }

  const char *features2[] = { "acl", NULL };
  if (!guestfs_feature_available (g, (char **) features2)) {
    skipped ("test_acl_delete_def_file_1", "group %s not available in daemon",
             features2[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_acl_delete_def_file_1_perform (g);
}

static int
test_acl_delete_def_file_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "acl_delete_def_file") == NULL;
  str = getenv ("SKIP_TEST_ACL_DELETE_DEF_FILE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ACL_DELETE_DEF_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_acl_delete_def_file_1_perform (guestfs_h *g)
{
  /* TestRun for acl_delete_def_file (1) */
  const char *arg4 = "/acl_delete_def_file_1";
  int ret3;
  ret3 = guestfs_mkdir (g, arg4);
  if (ret3 == -1)
    return -1;
  const char *arg7 = "/acl_delete_def_file_1";
  const char *arg8 = "default";
  const char *arg9 = "user::r-x,group::r-x,other::r-x";
  int ret6;
  ret6 = guestfs_acl_set_file (g, arg7, arg8, arg9);
  if (ret6 == -1)
    return -1;
  const char *arg12 = "/acl_delete_def_file_1";
  int ret11;
  ret11 = guestfs_acl_delete_def_file (g, arg12);
  if (ret11 == -1)
    return -1;
  return 0;
}

static int test_acl_set_file_0_skip (void);
static int test_acl_set_file_0_perform (guestfs_h *);

static int
test_acl_set_file_0 (guestfs_h *g)
{
  if (test_acl_set_file_0_skip ()) {
    skipped ("test_acl_set_file_0", "environment variable set");
    return 0;
  }

  const char *features14[] = { "acl", NULL };
  if (!guestfs_feature_available (g, (char **) features14)) {
    skipped ("test_acl_set_file_0", "group %s not available in daemon",
             features14[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_acl_set_file_0_perform (g);
}

static int
test_acl_set_file_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "acl_set_file") == NULL;
  str = getenv ("SKIP_TEST_ACL_SET_FILE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ACL_SET_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_acl_set_file_0_perform (guestfs_h *g)
{
  /* TestRun for acl_set_file (0) */
  const char *arg16 = "/acl_set_file_0";
  int ret15;
  ret15 = guestfs_touch (g, arg16);
  if (ret15 == -1)
    return -1;
  const char *arg19 = "/acl_set_file_0";
  const char *arg20 = "access";
  const char *arg21 = "u::r-x,g::r-x,o::r-x";
  int ret18;
  ret18 = guestfs_acl_set_file (g, arg19, arg20, arg21);
  if (ret18 == -1)
    return -1;
  const char *arg24 = "/acl_set_file_0";
  const char *arg25 = "access";
  CLEANUP_FREE char *ret23;
  ret23 = guestfs_acl_get_file (g, arg24, arg25);
  if (ret23 == NULL)
      return -1;
  return 0;
}

static int test_acl_set_file_1_skip (void);
static int test_acl_set_file_1_perform (guestfs_h *);

static int
test_acl_set_file_1 (guestfs_h *g)
{
  if (test_acl_set_file_1_skip ()) {
    skipped ("test_acl_set_file_1", "environment variable set");
    return 0;
  }

  const char *features27[] = { "acl", NULL };
  if (!guestfs_feature_available (g, (char **) features27)) {
    skipped ("test_acl_set_file_1", "group %s not available in daemon",
             features27[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_acl_set_file_1_perform (g);
}

static int
test_acl_set_file_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "acl_set_file") == NULL;
  str = getenv ("SKIP_TEST_ACL_SET_FILE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ACL_SET_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_acl_set_file_1_perform (guestfs_h *g)
{
  /* TestRun for acl_set_file (1) */
  const char *arg29 = "/acl_set_file_1";
  int ret28;
  ret28 = guestfs_touch (g, arg29);
  if (ret28 == -1)
    return -1;
  const char *arg32 = "/acl_set_file_1";
  const char *arg33 = "access";
  const char *arg34 = "u::r-x,g::r-x,o::r-x,m::rwx,u:500:rw,g:600:x";
  int ret31;
  ret31 = guestfs_acl_set_file (g, arg32, arg33, arg34);
  if (ret31 == -1)
    return -1;
  return 0;
}

static int test_acl_set_file_2_skip (void);
static int test_acl_set_file_2_perform (guestfs_h *);

static int
test_acl_set_file_2 (guestfs_h *g)
{
  if (test_acl_set_file_2_skip ()) {
    skipped ("test_acl_set_file_2", "environment variable set");
    return 0;
  }

  const char *features36[] = { "acl", NULL };
  if (!guestfs_feature_available (g, (char **) features36)) {
    skipped ("test_acl_set_file_2", "group %s not available in daemon",
             features36[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_acl_set_file_2_perform (g);
}

static int
test_acl_set_file_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "acl_set_file") == NULL;
  str = getenv ("SKIP_TEST_ACL_SET_FILE_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ACL_SET_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_acl_set_file_2_perform (guestfs_h *g)
{
  /* TestLastFail for acl_set_file (2) */
  const char *arg38 = "/acl_set_file_2";
  int ret37;
  ret37 = guestfs_touch (g, arg38);
  if (ret37 == -1)
    return -1;
  const char *arg41 = "/acl_set_file_2";
  const char *arg42 = "access";
  const char *arg43 = "u::r-x,g::r-x,o::r-x,u:500:rw,g:600:x";
  int ret40;
  guestfs_push_error_handler (g, NULL, NULL);
  ret40 = guestfs_acl_set_file (g, arg41, arg42, arg43);
  guestfs_pop_error_handler (g);
  if (ret40 != -1)
    return -1;
  return 0;
}

static int test_acl_set_file_3_skip (void);
static int test_acl_set_file_3_perform (guestfs_h *);

static int
test_acl_set_file_3 (guestfs_h *g)
{
  if (test_acl_set_file_3_skip ()) {
    skipped ("test_acl_set_file_3", "environment variable set");
    return 0;
  }

  const char *features45[] = { "acl", NULL };
  if (!guestfs_feature_available (g, (char **) features45)) {
    skipped ("test_acl_set_file_3", "group %s not available in daemon",
             features45[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_acl_set_file_3_perform (g);
}

static int
test_acl_set_file_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "acl_set_file") == NULL;
  str = getenv ("SKIP_TEST_ACL_SET_FILE_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ACL_SET_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_acl_set_file_3_perform (guestfs_h *g)
{
  /* TestLastFail for acl_set_file (3) */
  const char *arg47 = "/acl_set_file_3";
  int ret46;
  ret46 = guestfs_touch (g, arg47);
  if (ret46 == -1)
    return -1;
  const char *arg50 = "/acl_set_file_3";
  const char *arg51 = "access";
  const char *arg52 = "u::r-x,g::r-x,o::r-x,m::rwx,u:notauser:rw";
  int ret49;
  guestfs_push_error_handler (g, NULL, NULL);
  ret49 = guestfs_acl_set_file (g, arg50, arg51, arg52);
  guestfs_pop_error_handler (g);
  if (ret49 != -1)
    return -1;
  return 0;
}

static int test_acl_set_file_4_skip (void);
static int test_acl_set_file_4_perform (guestfs_h *);

static int
test_acl_set_file_4 (guestfs_h *g)
{
  if (test_acl_set_file_4_skip ()) {
    skipped ("test_acl_set_file_4", "environment variable set");
    return 0;
  }

  const char *features54[] = { "acl", NULL };
  if (!guestfs_feature_available (g, (char **) features54)) {
    skipped ("test_acl_set_file_4", "group %s not available in daemon",
             features54[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_acl_set_file_4_perform (g);
}

static int
test_acl_set_file_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "acl_set_file") == NULL;
  str = getenv ("SKIP_TEST_ACL_SET_FILE_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ACL_SET_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_acl_set_file_4_perform (guestfs_h *g)
{
  /* TestLastFail for acl_set_file (4) */
  const char *arg56 = "/acl_set_file_4";
  int ret55;
  ret55 = guestfs_touch (g, arg56);
  if (ret55 == -1)
    return -1;
  const char *arg59 = "/acl_set_file_4";
  const char *arg60 = "default";
  const char *arg61 = "u::r-x,g::r-x,o::r-x";
  int ret58;
  guestfs_push_error_handler (g, NULL, NULL);
  ret58 = guestfs_acl_set_file (g, arg59, arg60, arg61);
  guestfs_pop_error_handler (g);
  if (ret58 != -1)
    return -1;
  return 0;
}

static int test_acl_set_file_5_skip (void);
static int test_acl_set_file_5_perform (guestfs_h *);

static int
test_acl_set_file_5 (guestfs_h *g)
{
  if (test_acl_set_file_5_skip ()) {
    skipped ("test_acl_set_file_5", "environment variable set");
    return 0;
  }

  const char *features63[] = { "acl", NULL };
  if (!guestfs_feature_available (g, (char **) features63)) {
    skipped ("test_acl_set_file_5", "group %s not available in daemon",
             features63[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_acl_set_file_5_perform (g);
}

static int
test_acl_set_file_5_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "acl_set_file") == NULL;
  str = getenv ("SKIP_TEST_ACL_SET_FILE_5");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ACL_SET_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_acl_set_file_5_perform (guestfs_h *g)
{
  /* TestRun for acl_set_file (5) */
  const char *arg65 = "/acl_set_file_5";
  int ret64;
  ret64 = guestfs_mkdir (g, arg65);
  if (ret64 == -1)
    return -1;
  const char *arg68 = "/acl_set_file_5";
  const char *arg69 = "default";
  const char *arg70 = "u::r-x,g::r-x,o::r-x";
  int ret67;
  ret67 = guestfs_acl_set_file (g, arg68, arg69, arg70);
  if (ret67 == -1)
    return -1;
  return 0;
}

static int test_aug_init_0_skip (void);
static int test_aug_init_0_perform (guestfs_h *);
static int test_aug_init_0_cleanup (guestfs_h *);

static int
test_aug_init_0 (guestfs_h *g)
{
  if (test_aug_init_0_skip ()) {
    skipped ("test_aug_init_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  int ret = test_aug_init_0_perform (g);
  if (test_aug_init_0_cleanup (g) == -1) {
    fprintf (stderr, "%s (%d): unexpected error during test cleanups\n",
             "aug_init", 0);
    return -1;
  }
  return ret;
}

static int
test_aug_init_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "aug_init") == NULL;
  str = getenv ("SKIP_TEST_AUG_INIT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_AUG_INIT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_aug_init_0_perform (guestfs_h *g)
{
  /* TestResultString for aug_init (0) */
  const char *arg73 = "/etc";
  int ret72;
  ret72 = guestfs_mkdir (g, arg73);
  if (ret72 == -1)
    return -1;
  const char *arg76 = "/etc/hostname";
  const char *arg77 = "test.example.org";
  size_t arg77_size = 16;
  int ret75;
  ret75 = guestfs_write (g, arg76, arg77, arg77_size);
  if (ret75 == -1)
    return -1;
  const char *arg80 = "/";
  int ret79;
  ret79 = guestfs_aug_init (g, arg80, 0);
  if (ret79 == -1)
    return -1;
  const char *arg83 = "/files/etc/hostname/hostname";
  CLEANUP_FREE char *ret;
  ret = guestfs_aug_get (g, arg83);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "test.example.org")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_aug_init_0", "aug_get", "test.example.org", ret);
    return -1;
  }
  return 0;
}

static int
test_aug_init_0_cleanup (guestfs_h *g)
{
  int ret85;
  ret85 = guestfs_aug_close (g);
  if (ret85 == -1)
    return -1;
  return 0;
}

static int test_aug_insert_0_skip (void);
static int test_aug_insert_0_perform (guestfs_h *);
static int test_aug_insert_0_cleanup (guestfs_h *);

static int
test_aug_insert_0 (guestfs_h *g)
{
  if (test_aug_insert_0_skip ()) {
    skipped ("test_aug_insert_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  int ret = test_aug_insert_0_perform (g);
  if (test_aug_insert_0_cleanup (g) == -1) {
    fprintf (stderr, "%s (%d): unexpected error during test cleanups\n",
             "aug_insert", 0);
    return -1;
  }
  return ret;
}

static int
test_aug_insert_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "aug_insert") == NULL;
  str = getenv ("SKIP_TEST_AUG_INSERT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_AUG_INSERT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_aug_insert_0_perform (guestfs_h *g)
{
  /* TestResultString for aug_insert (0) */
  const char *arg88 = "/etc";
  int ret87;
  ret87 = guestfs_mkdir (g, arg88);
  if (ret87 == -1)
    return -1;
  const char *arg91 = "/etc/hosts";
  const char *arg92 = "";
  size_t arg92_size = 0;
  int ret90;
  ret90 = guestfs_write (g, arg91, arg92, arg92_size);
  if (ret90 == -1)
    return -1;
  const char *arg95 = "/";
  int ret94;
  ret94 = guestfs_aug_init (g, arg95, 0);
  if (ret94 == -1)
    return -1;
  const char *arg99 = "/files/etc/hosts";
  const char *arg100 = "1";
  int ret98;
  ret98 = guestfs_aug_insert (g, arg99, arg100, 0);
  if (ret98 == -1)
    return -1;
  const char *arg104 = "/files/etc/hosts/1/ipaddr";
  const char *arg105 = "127.0.0.1";
  int ret103;
  ret103 = guestfs_aug_set (g, arg104, arg105);
  if (ret103 == -1)
    return -1;
  const char *arg108 = "/files/etc/hosts/1/canonical";
  const char *arg109 = "foobar";
  int ret107;
  ret107 = guestfs_aug_set (g, arg108, arg109);
  if (ret107 == -1)
    return -1;
  const char *arg112 = "/files/etc/hosts/1/canonical";
  int ret111;
  ret111 = guestfs_aug_clear (g, arg112);
  if (ret111 == -1)
    return -1;
  const char *arg115 = "/files/etc/hosts/1/canonical";
  const char *arg116 = "localhost";
  int ret114;
  ret114 = guestfs_aug_set (g, arg115, arg116);
  if (ret114 == -1)
    return -1;
  int ret118;
  ret118 = guestfs_aug_save (g);
  if (ret118 == -1)
    return -1;
  const char *arg120 = "/etc/hosts";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg120);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "\n127.0.0.1\tlocalhost\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_aug_insert_0", "cat", "\n127.0.0.1\tlocalhost\n", ret);
    return -1;
  }
  return 0;
}

static int
test_aug_insert_0_cleanup (guestfs_h *g)
{
  int ret122;
  ret122 = guestfs_aug_close (g);
  if (ret122 == -1)
    return -1;
  return 0;
}

static int test_aug_label_0_skip (void);
static int test_aug_label_0_perform (guestfs_h *);
static int test_aug_label_0_cleanup (guestfs_h *);

static int
test_aug_label_0 (guestfs_h *g)
{
  if (test_aug_label_0_skip ()) {
    skipped ("test_aug_label_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  int ret = test_aug_label_0_perform (g);
  if (test_aug_label_0_cleanup (g) == -1) {
    fprintf (stderr, "%s (%d): unexpected error during test cleanups\n",
             "aug_label", 0);
    return -1;
  }
  return ret;
}

static int
test_aug_label_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "aug_label") == NULL;
  str = getenv ("SKIP_TEST_AUG_LABEL_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_AUG_LABEL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_aug_label_0_perform (guestfs_h *g)
{
  /* TestResultString for aug_label (0) */
  const char *arg125 = "/etc";
  int ret124;
  ret124 = guestfs_mkdir (g, arg125);
  if (ret124 == -1)
    return -1;
  const char *arg128 = "/etc/passwd";
  const char *arg129 = "root:x:0:0:root:/root:/bin/bash\nbin:x:1:1:bin:/bin:/sbin/nologin\ndaemon:x:2:2:daemon:/sbin:/bin/csh\n";
  size_t arg129_size = 100;
  int ret127;
  ret127 = guestfs_write (g, arg128, arg129, arg129_size);
  if (ret127 == -1)
    return -1;
  const char *arg132 = "/";
  int ret131;
  ret131 = guestfs_aug_init (g, arg132, 0);
  if (ret131 == -1)
    return -1;
  const char *arg135 = "/files/etc/passwd/*[last()]";
  CLEANUP_FREE char *ret;
  ret = guestfs_aug_label (g, arg135);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "daemon")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_aug_label_0", "aug_label", "daemon", ret);
    return -1;
  }
  return 0;
}

static int
test_aug_label_0_cleanup (guestfs_h *g)
{
  int ret137;
  ret137 = guestfs_aug_close (g);
  if (ret137 == -1)
    return -1;
  return 0;
}

static int test_aug_ls_0_skip (void);
static int test_aug_ls_0_perform (guestfs_h *);
static int test_aug_ls_0_cleanup (guestfs_h *);

static int
test_aug_ls_0 (guestfs_h *g)
{
  if (test_aug_ls_0_skip ()) {
    skipped ("test_aug_ls_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  int ret = test_aug_ls_0_perform (g);
  if (test_aug_ls_0_cleanup (g) == -1) {
    fprintf (stderr, "%s (%d): unexpected error during test cleanups\n",
             "aug_ls", 0);
    return -1;
  }
  return ret;
}

static int
test_aug_ls_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "aug_ls") == NULL;
  str = getenv ("SKIP_TEST_AUG_LS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_AUG_LS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_aug_ls_0_perform (guestfs_h *g)
{
  /* TestResult for aug_ls (0) */
  const char *arg139 = "/etc";
  int ret3;
  ret3 = guestfs_mkdir (g, arg139);
  if (ret3 == -1)
    return -1;
  const char *arg141 = "/etc/hosts";
  const char *arg142 = "127.0.0.1 localhost";
  size_t arg142_size = 19;
  int ret2;
  ret2 = guestfs_write (g, arg141, arg142, arg142_size);
  if (ret2 == -1)
    return -1;
  const char *arg144 = "/";
  int ret1;
  ret1 = guestfs_aug_init (g, arg144, 0);
  if (ret1 == -1)
    return -1;
  const char *arg147 = "/files/etc/hosts/1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_aug_ls (g, arg147);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "/files/etc/hosts/1/canonical", "/files/etc/hosts/1/ipaddr"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_aug_ls_0", "is_string_list (ret, 2, \"/files/etc/hosts/1/canonical\", \"/files/etc/hosts/1/ipaddr\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int
test_aug_ls_0_cleanup (guestfs_h *g)
{
  int ret149;
  ret149 = guestfs_aug_close (g);
  if (ret149 == -1)
    return -1;
  return 0;
}

static int test_aug_set_0_skip (void);
static int test_aug_set_0_perform (guestfs_h *);
static int test_aug_set_0_cleanup (guestfs_h *);

static int
test_aug_set_0 (guestfs_h *g)
{
  if (test_aug_set_0_skip ()) {
    skipped ("test_aug_set_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  int ret = test_aug_set_0_perform (g);
  if (test_aug_set_0_cleanup (g) == -1) {
    fprintf (stderr, "%s (%d): unexpected error during test cleanups\n",
             "aug_set", 0);
    return -1;
  }
  return ret;
}

static int
test_aug_set_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "aug_set") == NULL;
  str = getenv ("SKIP_TEST_AUG_SET_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_AUG_SET");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_aug_set_0_perform (guestfs_h *g)
{
  /* TestResultString for aug_set (0) */
  const char *arg152 = "/etc";
  int ret151;
  ret151 = guestfs_mkdir (g, arg152);
  if (ret151 == -1)
    return -1;
  const char *arg155 = "/etc/hostname";
  const char *arg156 = "test.example.org";
  size_t arg156_size = 16;
  int ret154;
  ret154 = guestfs_write (g, arg155, arg156, arg156_size);
  if (ret154 == -1)
    return -1;
  const char *arg159 = "/";
  int ret158;
  ret158 = guestfs_aug_init (g, arg159, 0);
  if (ret158 == -1)
    return -1;
  const char *arg163 = "/files/etc/hostname/hostname";
  const char *arg164 = "replace.example.com";
  int ret162;
  ret162 = guestfs_aug_set (g, arg163, arg164);
  if (ret162 == -1)
    return -1;
  const char *arg166 = "/files/etc/hostname/hostname";
  CLEANUP_FREE char *ret;
  ret = guestfs_aug_get (g, arg166);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "replace.example.com")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_aug_set_0", "aug_get", "replace.example.com", ret);
    return -1;
  }
  return 0;
}

static int
test_aug_set_0_cleanup (guestfs_h *g)
{
  int ret168;
  ret168 = guestfs_aug_close (g);
  if (ret168 == -1)
    return -1;
  return 0;
}

static int test_aug_setm_0_skip (void);
static int test_aug_setm_0_perform (guestfs_h *);
static int test_aug_setm_0_cleanup (guestfs_h *);

static int
test_aug_setm_0 (guestfs_h *g)
{
  if (test_aug_setm_0_skip ()) {
    skipped ("test_aug_setm_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  int ret = test_aug_setm_0_perform (g);
  if (test_aug_setm_0_cleanup (g) == -1) {
    fprintf (stderr, "%s (%d): unexpected error during test cleanups\n",
             "aug_setm", 0);
    return -1;
  }
  return ret;
}

static int
test_aug_setm_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "aug_setm") == NULL;
  str = getenv ("SKIP_TEST_AUG_SETM_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_AUG_SETM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_aug_setm_0_perform (guestfs_h *g)
{
  /* TestResultString for aug_setm (0) */
  const char *arg171 = "/etc";
  int ret170;
  ret170 = guestfs_mkdir (g, arg171);
  if (ret170 == -1)
    return -1;
  const char *arg174 = "/etc/passwd";
  const char *arg175 = "root:x:0:0:root:/root:/bin/bash\nbin:x:1:1:bin:/bin:/sbin/nologin\ndaemon:x:2:2:daemon:/sbin:/bin/csh\n";
  size_t arg175_size = 100;
  int ret173;
  ret173 = guestfs_write (g, arg174, arg175, arg175_size);
  if (ret173 == -1)
    return -1;
  const char *arg178 = "/";
  int ret177;
  ret177 = guestfs_aug_init (g, arg178, 0);
  if (ret177 == -1)
    return -1;
  const char *arg182 = "/files/etc/passwd/*";
  const char *arg183 = "shell";
  const char *arg184 = "/sbin/nologin";
  int ret181;
  ret181 = guestfs_aug_setm (g, arg182, arg183, arg184);
  if (ret181 == -1)
    return -1;
  int ret186;
  ret186 = guestfs_aug_save (g);
  if (ret186 == -1)
    return -1;
  const char *arg188 = "/etc/passwd";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg188);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "root:x:0:0:root:/root:/sbin/nologin\nbin:x:1:1:bin:/bin:/sbin/nologin\ndaemon:x:2:2:daemon:/sbin:/sbin/nologin\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_aug_setm_0", "cat", "root:x:0:0:root:/root:/sbin/nologin\nbin:x:1:1:bin:/bin:/sbin/nologin\ndaemon:x:2:2:daemon:/sbin:/sbin/nologin\n", ret);
    return -1;
  }
  return 0;
}

static int
test_aug_setm_0_cleanup (guestfs_h *g)
{
  int ret190;
  ret190 = guestfs_aug_close (g);
  if (ret190 == -1)
    return -1;
  return 0;
}

static int test_available_0_skip (void);
static int test_available_0_perform (guestfs_h *);

static int
test_available_0 (guestfs_h *g)
{
  if (test_available_0_skip ()) {
    skipped ("test_available_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_available_0_perform (g);
}

static int
test_available_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "available") == NULL;
  str = getenv ("SKIP_TEST_AVAILABLE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_AVAILABLE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_available_0_perform (guestfs_h *g)
{
  /* TestRun for available (0) */
  const char *const arg193[1] = { NULL };
  int ret192;
  ret192 = guestfs_available (g, (char **) arg193);
  if (ret192 == -1)
    return -1;
  return 0;
}

static int test_available_all_groups_0_skip (void);
static int test_available_all_groups_0_perform (guestfs_h *);

static int
test_available_all_groups_0 (guestfs_h *g)
{
  if (test_available_all_groups_0_skip ()) {
    skipped ("test_available_all_groups_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_available_all_groups_0_perform (g);
}

static int
test_available_all_groups_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "available_all_groups") == NULL;
  str = getenv ("SKIP_TEST_AVAILABLE_ALL_GROUPS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_AVAILABLE_ALL_GROUPS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_available_all_groups_0_perform (guestfs_h *g)
{
  /* TestRun for available_all_groups (0) */
  CLEANUP_FREE_STRING_LIST char **ret195;
  ret195 = guestfs_available_all_groups (g);
  if (ret195 == NULL)
      return -1;
  return 0;
}

static int test_base64_in_0_skip (void);
static int test_base64_in_0_perform (guestfs_h *);

static int
test_base64_in_0 (guestfs_h *g)
{
  if (test_base64_in_0_skip ()) {
    skipped ("test_base64_in_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_base64_in_0_perform (g);
}

static int
test_base64_in_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "base64_in") == NULL;
  str = getenv ("SKIP_TEST_BASE64_IN_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BASE64_IN");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_base64_in_0_perform (guestfs_h *g)
{
  /* TestResultString for base64_in (0) */
  CLEANUP_FREE char *arg198 = substitute_srcdir ("../test-data/files/hello.b64");
  const char *arg199 = "/base64_in";
  int ret197;
  ret197 = guestfs_base64_in (g, arg198, arg199);
  if (ret197 == -1)
    return -1;
  const char *arg201 = "/base64_in";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg201);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "hello\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_base64_in_0", "cat", "hello\n", ret);
    return -1;
  }
  return 0;
}

static int test_blkid_0_skip (void);
static int test_blkid_0_perform (guestfs_h *);

static int
test_blkid_0 (guestfs_h *g)
{
  if (test_blkid_0_skip ()) {
    skipped ("test_blkid_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_blkid_0_perform (g);
}

static int
test_blkid_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "blkid") == NULL;
  str = getenv ("SKIP_TEST_BLKID_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BLKID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_blkid_0_perform (guestfs_h *g)
{
  /* TestResult for blkid (0) */
  const char *arg203 = "/dev/sdb1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_blkid (g, arg203);
  if (ret == NULL)
      return -1;
  if (! (check_hash (ret, "TYPE", "ext2") == 0 && check_hash (ret, "USAGE", "filesystem") == 0 && check_hash (ret, "PART_ENTRY_NUMBER", "1") == 0 && check_hash (ret, "PART_ENTRY_TYPE", "0x83") == 0 && check_hash (ret, "PART_ENTRY_OFFSET", "128") == 0 && check_hash (ret, "PART_ENTRY_SIZE", "4194049") == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_blkid_0", "check_hash (ret, \"TYPE\", \"ext2\") == 0 && check_hash (ret, \"USAGE\", \"filesystem\") == 0 && check_hash (ret, \"PART_ENTRY_NUMBER\", \"1\") == 0 && check_hash (ret, \"PART_ENTRY_TYPE\", \"0x83\") == 0 && check_hash (ret, \"PART_ENTRY_OFFSET\", \"128\") == 0 && check_hash (ret, \"PART_ENTRY_SIZE\", \"4194049\") == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_blockdev_flushbufs_0_skip (void);
static int test_blockdev_flushbufs_0_perform (guestfs_h *);

static int
test_blockdev_flushbufs_0 (guestfs_h *g)
{
  if (test_blockdev_flushbufs_0_skip ()) {
    skipped ("test_blockdev_flushbufs_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_blockdev_flushbufs_0_perform (g);
}

static int
test_blockdev_flushbufs_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "blockdev_flushbufs") == NULL;
  str = getenv ("SKIP_TEST_BLOCKDEV_FLUSHBUFS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BLOCKDEV_FLUSHBUFS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_blockdev_flushbufs_0_perform (guestfs_h *g)
{
  /* TestRun for blockdev_flushbufs (0) */
  const char *arg206 = "/dev/sda";
  int ret205;
  ret205 = guestfs_blockdev_flushbufs (g, arg206);
  if (ret205 == -1)
    return -1;
  return 0;
}

static int test_blockdev_getro_0_skip (void);
static int test_blockdev_getro_0_perform (guestfs_h *);

static int
test_blockdev_getro_0 (guestfs_h *g)
{
  if (test_blockdev_getro_0_skip ()) {
    skipped ("test_blockdev_getro_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_blockdev_getro_0_perform (g);
}

static int
test_blockdev_getro_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "blockdev_getro") == NULL;
  str = getenv ("SKIP_TEST_BLOCKDEV_GETRO_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BLOCKDEV_GETRO");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_blockdev_getro_0_perform (guestfs_h *g)
{
  /* TestResultTrue for blockdev_getro (0) */
  const char *arg209 = "/dev/sda";
  int ret208;
  ret208 = guestfs_blockdev_setro (g, arg209);
  if (ret208 == -1)
    return -1;
  const char *arg211 = "/dev/sda";
  int ret;
  ret = guestfs_blockdev_getro (g, arg211);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_blockdev_getro_0", "blockdev_getro");
    return -1;
  }
  return 0;
}

static int test_blockdev_getsize64_0_skip (void);
static int test_blockdev_getsize64_0_perform (guestfs_h *);

static int
test_blockdev_getsize64_0 (guestfs_h *g)
{
  if (test_blockdev_getsize64_0_skip ()) {
    skipped ("test_blockdev_getsize64_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_blockdev_getsize64_0_perform (g);
}

static int
test_blockdev_getsize64_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "blockdev_getsize64") == NULL;
  str = getenv ("SKIP_TEST_BLOCKDEV_GETSIZE64_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BLOCKDEV_GETSIZE64");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_blockdev_getsize64_0_perform (guestfs_h *g)
{
  /* TestResult for blockdev_getsize64 (0) */
  const char *arg213 = "/dev/sda";
  int64_t ret;
  ret = guestfs_blockdev_getsize64 (g, arg213);
  if (ret == -1)
    return -1;
  if (! (ret == INT64_C(2)*1024*1024*1024)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_blockdev_getsize64_0", "ret == INT64_C(2)*1024*1024*1024");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_blockdev_getss_0_skip (void);
static int test_blockdev_getss_0_perform (guestfs_h *);

static int
test_blockdev_getss_0 (guestfs_h *g)
{
  if (test_blockdev_getss_0_skip ()) {
    skipped ("test_blockdev_getss_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_blockdev_getss_0_perform (g);
}

static int
test_blockdev_getss_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "blockdev_getss") == NULL;
  str = getenv ("SKIP_TEST_BLOCKDEV_GETSS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BLOCKDEV_GETSS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_blockdev_getss_0_perform (guestfs_h *g)
{
  /* TestResult for blockdev_getss (0) */
  const char *arg215 = "/dev/sda";
  int ret;
  ret = guestfs_blockdev_getss (g, arg215);
  if (ret == -1)
    return -1;
  if (! (ret == 512)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_blockdev_getss_0", "ret == 512");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_blockdev_getsz_0_skip (void);
static int test_blockdev_getsz_0_perform (guestfs_h *);

static int
test_blockdev_getsz_0 (guestfs_h *g)
{
  if (test_blockdev_getsz_0_skip ()) {
    skipped ("test_blockdev_getsz_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_blockdev_getsz_0_perform (g);
}

static int
test_blockdev_getsz_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "blockdev_getsz") == NULL;
  str = getenv ("SKIP_TEST_BLOCKDEV_GETSZ_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BLOCKDEV_GETSZ");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_blockdev_getsz_0_perform (guestfs_h *g)
{
  /* TestResult for blockdev_getsz (0) */
  const char *arg217 = "/dev/sda";
  int64_t ret;
  ret = guestfs_blockdev_getsz (g, arg217);
  if (ret == -1)
    return -1;
  if (! (ret == INT64_C(2)*1024*1024*1024/512)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_blockdev_getsz_0", "ret == INT64_C(2)*1024*1024*1024/512");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_blockdev_rereadpt_0_skip (void);
static int test_blockdev_rereadpt_0_perform (guestfs_h *);

static int
test_blockdev_rereadpt_0 (guestfs_h *g)
{
  if (test_blockdev_rereadpt_0_skip ()) {
    skipped ("test_blockdev_rereadpt_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_blockdev_rereadpt_0_perform (g);
}

static int
test_blockdev_rereadpt_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "blockdev_rereadpt") == NULL;
  str = getenv ("SKIP_TEST_BLOCKDEV_REREADPT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BLOCKDEV_REREADPT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_blockdev_rereadpt_0_perform (guestfs_h *g)
{
  /* TestRun for blockdev_rereadpt (0) */
  const char *arg220 = "/dev/sda";
  int ret219;
  ret219 = guestfs_blockdev_rereadpt (g, arg220);
  if (ret219 == -1)
    return -1;
  return 0;
}

static int test_blockdev_setra_0_skip (void);
static int test_blockdev_setra_0_perform (guestfs_h *);

static int
test_blockdev_setra_0 (guestfs_h *g)
{
  if (test_blockdev_setra_0_skip ()) {
    skipped ("test_blockdev_setra_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_blockdev_setra_0_perform (g);
}

static int
test_blockdev_setra_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "blockdev_setra") == NULL;
  str = getenv ("SKIP_TEST_BLOCKDEV_SETRA_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BLOCKDEV_SETRA");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_blockdev_setra_0_perform (guestfs_h *g)
{
  /* TestRun for blockdev_setra (0) */
  const char *arg223 = "/dev/sda";
  int ret222;
  ret222 = guestfs_blockdev_setra (g, arg223, 1024);
  if (ret222 == -1)
    return -1;
  return 0;
}

static int test_blockdev_setro_0_skip (void);
static int test_blockdev_setro_0_perform (guestfs_h *);

static int
test_blockdev_setro_0 (guestfs_h *g)
{
  if (test_blockdev_setro_0_skip ()) {
    skipped ("test_blockdev_setro_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_blockdev_setro_0_perform (g);
}

static int
test_blockdev_setro_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "blockdev_setro") == NULL;
  str = getenv ("SKIP_TEST_BLOCKDEV_SETRO_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BLOCKDEV_SETRO");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_blockdev_setro_0_perform (guestfs_h *g)
{
  /* TestResultTrue for blockdev_setro (0) */
  const char *arg227 = "/dev/sda";
  int ret226;
  ret226 = guestfs_blockdev_setro (g, arg227);
  if (ret226 == -1)
    return -1;
  const char *arg229 = "/dev/sda";
  int ret;
  ret = guestfs_blockdev_getro (g, arg229);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_blockdev_setro_0", "blockdev_getro");
    return -1;
  }
  return 0;
}

static int test_blockdev_setrw_0_skip (void);
static int test_blockdev_setrw_0_perform (guestfs_h *);

static int
test_blockdev_setrw_0 (guestfs_h *g)
{
  if (test_blockdev_setrw_0_skip ()) {
    skipped ("test_blockdev_setrw_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_blockdev_setrw_0_perform (g);
}

static int
test_blockdev_setrw_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "blockdev_setrw") == NULL;
  str = getenv ("SKIP_TEST_BLOCKDEV_SETRW_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BLOCKDEV_SETRW");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_blockdev_setrw_0_perform (guestfs_h *g)
{
  /* TestResultFalse for blockdev_setrw (0) */
  const char *arg232 = "/dev/sda";
  int ret231;
  ret231 = guestfs_blockdev_setrw (g, arg232);
  if (ret231 == -1)
    return -1;
  const char *arg234 = "/dev/sda";
  int ret;
  ret = guestfs_blockdev_getro (g, arg234);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_blockdev_setrw_0", "blockdev_getro");
    return -1;
  }
  return 0;
}

static int test_btrfs_filesystem_defragment_0_skip (void);
static int test_btrfs_filesystem_defragment_0_perform (guestfs_h *);

static int
test_btrfs_filesystem_defragment_0 (guestfs_h *g)
{
  if (test_btrfs_filesystem_defragment_0_skip ()) {
    skipped ("test_btrfs_filesystem_defragment_0", "environment variable set");
    return 0;
  }

  const char *features236[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features236)) {
    skipped ("test_btrfs_filesystem_defragment_0", "group %s not available in daemon",
             features236[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_filesystem_defragment_0_perform (g);
}

static int
test_btrfs_filesystem_defragment_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_filesystem_defragment") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_FILESYSTEM_DEFRAGMENT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_FILESYSTEM_DEFRAGMENT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_filesystem_defragment_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_filesystem_defragment (0) */
  const char *arg238_0 = "/dev/sda1";
  const char *const arg238[] = {
    arg238_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs239;
  optargs239.bitmask = UINT64_C(0x0);
  int ret237;
  ret237 = guestfs_mkfs_btrfs_argv (g, (char **) arg238, &optargs239);
  if (ret237 == -1)
    return -1;
  const char *arg241 = "/dev/sda1";
  const char *arg242 = "/";
  int ret240;
  ret240 = guestfs_mount (g, arg241, arg242);
  if (ret240 == -1)
    return -1;
  const char *arg245 = "/";
  struct guestfs_btrfs_filesystem_defragment_argv optargs246;
  optargs246.flush = 1;
  optargs246.compress = "lzo";
  optargs246.bitmask = UINT64_C(0x3);
  int ret244;
  ret244 = guestfs_btrfs_filesystem_defragment_argv (g, arg245, &optargs246);
  if (ret244 == -1)
    return -1;
  return 0;
}

static int test_btrfs_filesystem_defragment_1_skip (void);
static int test_btrfs_filesystem_defragment_1_perform (guestfs_h *);

static int
test_btrfs_filesystem_defragment_1 (guestfs_h *g)
{
  if (test_btrfs_filesystem_defragment_1_skip ()) {
    skipped ("test_btrfs_filesystem_defragment_1", "environment variable set");
    return 0;
  }

  const char *features247[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features247)) {
    skipped ("test_btrfs_filesystem_defragment_1", "group %s not available in daemon",
             features247[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_filesystem_defragment_1_perform (g);
}

static int
test_btrfs_filesystem_defragment_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_filesystem_defragment") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_FILESYSTEM_DEFRAGMENT_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_FILESYSTEM_DEFRAGMENT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_filesystem_defragment_1_perform (guestfs_h *g)
{
  /* TestRun for btrfs_filesystem_defragment (1) */
  const char *arg249_0 = "/dev/sda1";
  const char *const arg249[] = {
    arg249_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs250;
  optargs250.bitmask = UINT64_C(0x0);
  int ret248;
  ret248 = guestfs_mkfs_btrfs_argv (g, (char **) arg249, &optargs250);
  if (ret248 == -1)
    return -1;
  const char *arg252 = "/dev/sda1";
  const char *arg253 = "/";
  int ret251;
  ret251 = guestfs_mount (g, arg252, arg253);
  if (ret251 == -1)
    return -1;
  const char *arg256 = "/hello";
  int ret255;
  ret255 = guestfs_touch (g, arg256);
  if (ret255 == -1)
    return -1;
  const char *arg259 = "/hello";
  struct guestfs_btrfs_filesystem_defragment_argv optargs260;
  optargs260.compress = "zlib";
  optargs260.bitmask = UINT64_C(0x2);
  int ret258;
  ret258 = guestfs_btrfs_filesystem_defragment_argv (g, arg259, &optargs260);
  if (ret258 == -1)
    return -1;
  return 0;
}

static int test_btrfs_filesystem_show_0_skip (void);
static int test_btrfs_filesystem_show_0_perform (guestfs_h *);

static int
test_btrfs_filesystem_show_0 (guestfs_h *g)
{
  if (test_btrfs_filesystem_show_0_skip ()) {
    skipped ("test_btrfs_filesystem_show_0", "environment variable set");
    return 0;
  }

  const char *features261[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features261)) {
    skipped ("test_btrfs_filesystem_show_0", "group %s not available in daemon",
             features261[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_btrfs_filesystem_show_0_perform (g);
}

static int
test_btrfs_filesystem_show_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_filesystem_show") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_FILESYSTEM_SHOW_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_FILESYSTEM_SHOW");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_filesystem_show_0_perform (guestfs_h *g)
{
  /* TestLastFail for btrfs_filesystem_show (0) */
  const char *arg263 = "/dev/sdb";
  CLEANUP_FREE_STRING_LIST char **ret262;
  guestfs_push_error_handler (g, NULL, NULL);
  ret262 = guestfs_btrfs_filesystem_show (g, arg263);
  guestfs_pop_error_handler (g);
  if (ret262 != NULL)
    return -1;
  return 0;
}

static int test_btrfs_filesystem_show_1_skip (void);
static int test_btrfs_filesystem_show_1_perform (guestfs_h *);

static int
test_btrfs_filesystem_show_1 (guestfs_h *g)
{
  if (test_btrfs_filesystem_show_1_skip ()) {
    skipped ("test_btrfs_filesystem_show_1", "environment variable set");
    return 0;
  }

  const char *features265[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features265)) {
    skipped ("test_btrfs_filesystem_show_1", "group %s not available in daemon",
             features265[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_filesystem_show_1_perform (g);
}

static int
test_btrfs_filesystem_show_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_filesystem_show") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_FILESYSTEM_SHOW_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_FILESYSTEM_SHOW");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_filesystem_show_1_perform (guestfs_h *g)
{
  /* TestResult for btrfs_filesystem_show (1) */
  const char *arg266_0 = "/dev/sda1";
  const char *const arg266[] = {
    arg266_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs267;
  optargs267.bitmask = UINT64_C(0x0);
  int ret1;
  ret1 = guestfs_mkfs_btrfs_argv (g, (char **) arg266, &optargs267);
  if (ret1 == -1)
    return -1;
  const char *arg268 = "/dev/sda1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_btrfs_filesystem_show (g, arg268);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 1, "/dev/sda1"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_btrfs_filesystem_show_1", "is_string_list (ret, 1, \"/dev/sda1\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_btrfs_filesystem_show_2_skip (void);
static int test_btrfs_filesystem_show_2_perform (guestfs_h *);

static int
test_btrfs_filesystem_show_2 (guestfs_h *g)
{
  if (test_btrfs_filesystem_show_2_skip ()) {
    skipped ("test_btrfs_filesystem_show_2", "environment variable set");
    return 0;
  }

  const char *features270[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features270)) {
    skipped ("test_btrfs_filesystem_show_2", "group %s not available in daemon",
             features270[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_btrfs_filesystem_show_2_perform (g);
}

static int
test_btrfs_filesystem_show_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_filesystem_show") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_FILESYSTEM_SHOW_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_FILESYSTEM_SHOW");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_filesystem_show_2_perform (guestfs_h *g)
{
  /* TestResult for btrfs_filesystem_show (2) */
  const char *arg271 = "/dev/sda";
  const char *arg272 = "mbr";
  int ret4;
  ret4 = guestfs_part_init (g, arg271, arg272);
  if (ret4 == -1)
    return -1;
  const char *arg274 = "/dev/sda";
  const char *arg275 = "p";
  int ret3;
  ret3 = guestfs_part_add (g, arg274, arg275, 64, 2047999);
  if (ret3 == -1)
    return -1;
  const char *arg279 = "/dev/sda";
  const char *arg280 = "p";
  int ret2;
  ret2 = guestfs_part_add (g, arg279, arg280, 2048000, 4095999);
  if (ret2 == -1)
    return -1;
  const char *arg284_0 = "/dev/sda1";
  const char *arg284_1 = "/dev/sda2";
  const char *const arg284[] = {
    arg284_0,
    arg284_1,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs285;
  optargs285.bitmask = UINT64_C(0x0);
  int ret1;
  ret1 = guestfs_mkfs_btrfs_argv (g, (char **) arg284, &optargs285);
  if (ret1 == -1)
    return -1;
  const char *arg286 = "/dev/sda1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_btrfs_filesystem_show (g, arg286);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "/dev/sda1", "/dev/sda2"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_btrfs_filesystem_show_2", "is_string_list (ret, 2, \"/dev/sda1\", \"/dev/sda2\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_btrfs_filesystem_sync_0_skip (void);
static int test_btrfs_filesystem_sync_0_perform (guestfs_h *);

static int
test_btrfs_filesystem_sync_0 (guestfs_h *g)
{
  if (test_btrfs_filesystem_sync_0_skip ()) {
    skipped ("test_btrfs_filesystem_sync_0", "environment variable set");
    return 0;
  }

  const char *features288[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features288)) {
    skipped ("test_btrfs_filesystem_sync_0", "group %s not available in daemon",
             features288[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_filesystem_sync_0_perform (g);
}

static int
test_btrfs_filesystem_sync_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_filesystem_sync") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_FILESYSTEM_SYNC_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_FILESYSTEM_SYNC");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_filesystem_sync_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_filesystem_sync (0) */
  const char *arg290_0 = "/dev/sda1";
  const char *const arg290[] = {
    arg290_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs291;
  optargs291.bitmask = UINT64_C(0x0);
  int ret289;
  ret289 = guestfs_mkfs_btrfs_argv (g, (char **) arg290, &optargs291);
  if (ret289 == -1)
    return -1;
  const char *arg293 = "/dev/sda1";
  const char *arg294 = "/";
  int ret292;
  ret292 = guestfs_mount (g, arg293, arg294);
  if (ret292 == -1)
    return -1;
  const char *arg297 = "/test1";
  struct guestfs_btrfs_subvolume_create_opts_argv optargs298;
  optargs298.bitmask = UINT64_C(0x0);
  int ret296;
  ret296 = guestfs_btrfs_subvolume_create_opts_argv (g, arg297, &optargs298);
  if (ret296 == -1)
    return -1;
  const char *arg300 = "/test1";
  int ret299;
  ret299 = guestfs_btrfs_filesystem_sync (g, arg300);
  if (ret299 == -1)
    return -1;
  const char *arg303 = "/test1";
  int ret302;
  ret302 = guestfs_btrfs_filesystem_balance (g, arg303);
  if (ret302 == -1)
    return -1;
  return 0;
}

static int test_btrfs_fsck_0_skip (void);
static int test_btrfs_fsck_0_perform (guestfs_h *);

static int
test_btrfs_fsck_0 (guestfs_h *g)
{
  if (test_btrfs_fsck_0_skip ()) {
    skipped ("test_btrfs_fsck_0", "environment variable set");
    return 0;
  }

  const char *features305[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features305)) {
    skipped ("test_btrfs_fsck_0", "group %s not available in daemon",
             features305[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_fsck_0_perform (g);
}

static int
test_btrfs_fsck_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_fsck") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_FSCK_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_FSCK");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_fsck_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_fsck (0) */
  const char *arg307_0 = "/dev/sda1";
  const char *const arg307[] = {
    arg307_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs308;
  optargs308.bitmask = UINT64_C(0x0);
  int ret306;
  ret306 = guestfs_mkfs_btrfs_argv (g, (char **) arg307, &optargs308);
  if (ret306 == -1)
    return -1;
  const char *arg310 = "/dev/sda1";
  struct guestfs_btrfs_fsck_argv optargs311;
  optargs311.bitmask = UINT64_C(0x0);
  int ret309;
  ret309 = guestfs_btrfs_fsck_argv (g, arg310, &optargs311);
  if (ret309 == -1)
    return -1;
  return 0;
}

static int test_btrfs_image_0_skip (void);
static int test_btrfs_image_0_perform (guestfs_h *);

static int
test_btrfs_image_0 (guestfs_h *g)
{
  if (test_btrfs_image_0_skip ()) {
    skipped ("test_btrfs_image_0", "environment variable set");
    return 0;
  }

  const char *features312[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features312)) {
    skipped ("test_btrfs_image_0", "group %s not available in daemon",
             features312[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_btrfs_image_0_perform (g);
}

static int
test_btrfs_image_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_image") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_IMAGE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_IMAGE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_image_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_image (0) */
  const char *arg314 = "/dev/sda";
  const char *arg315 = "mbr";
  int ret313;
  ret313 = guestfs_part_init (g, arg314, arg315);
  if (ret313 == -1)
    return -1;
  const char *arg318 = "/dev/sda";
  const char *arg319 = "p";
  int ret317;
  ret317 = guestfs_part_add (g, arg318, arg319, 64, 2047999);
  if (ret317 == -1)
    return -1;
  const char *arg324 = "/dev/sda";
  const char *arg325 = "p";
  int ret323;
  ret323 = guestfs_part_add (g, arg324, arg325, 2048000, 4095999);
  if (ret323 == -1)
    return -1;
  const char *arg330_0 = "/dev/sda1";
  const char *const arg330[] = {
    arg330_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs331;
  optargs331.bitmask = UINT64_C(0x0);
  int ret329;
  ret329 = guestfs_mkfs_btrfs_argv (g, (char **) arg330, &optargs331);
  if (ret329 == -1)
    return -1;
  const char *arg333_0 = "/dev/sda2";
  const char *const arg333[] = {
    arg333_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs334;
  optargs334.bitmask = UINT64_C(0x0);
  int ret332;
  ret332 = guestfs_mkfs_btrfs_argv (g, (char **) arg333, &optargs334);
  if (ret332 == -1)
    return -1;
  const char *arg336 = "/dev/sda1";
  const char *arg337 = "/";
  int ret335;
  ret335 = guestfs_mount (g, arg336, arg337);
  if (ret335 == -1)
    return -1;
  const char *arg340_0 = "/dev/sda2";
  const char *const arg340[] = {
    arg340_0,
    NULL
  };
  const char *arg341 = "/1.img";
  struct guestfs_btrfs_image_argv optargs342;
  optargs342.bitmask = UINT64_C(0x0);
  int ret339;
  ret339 = guestfs_btrfs_image_argv (g, (char **) arg340, arg341, &optargs342);
  if (ret339 == -1)
    return -1;
  const char *arg344_0 = "/dev/sda2";
  const char *const arg344[] = {
    arg344_0,
    NULL
  };
  const char *arg345 = "/2.img";
  struct guestfs_btrfs_image_argv optargs346;
  optargs346.compresslevel = 2;
  optargs346.bitmask = UINT64_C(0x1);
  int ret343;
  ret343 = guestfs_btrfs_image_argv (g, (char **) arg344, arg345, &optargs346);
  if (ret343 == -1)
    return -1;
  return 0;
}

static int test_btrfs_qgroup_assign_0_skip (void);
static int test_btrfs_qgroup_assign_0_perform (guestfs_h *);

static int
test_btrfs_qgroup_assign_0 (guestfs_h *g)
{
  if (test_btrfs_qgroup_assign_0_skip ()) {
    skipped ("test_btrfs_qgroup_assign_0", "environment variable set");
    return 0;
  }

  const char *features347[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features347)) {
    skipped ("test_btrfs_qgroup_assign_0", "group %s not available in daemon",
             features347[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_qgroup_assign_0_perform (g);
}

static int
test_btrfs_qgroup_assign_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_qgroup_assign") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_QGROUP_ASSIGN_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_QGROUP_ASSIGN");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_qgroup_assign_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_qgroup_assign (0) */
  const char *arg349_0 = "/dev/sda1";
  const char *const arg349[] = {
    arg349_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs350;
  optargs350.bitmask = UINT64_C(0x0);
  int ret348;
  ret348 = guestfs_mkfs_btrfs_argv (g, (char **) arg349, &optargs350);
  if (ret348 == -1)
    return -1;
  const char *arg352 = "/dev/sda1";
  const char *arg353 = "/";
  int ret351;
  ret351 = guestfs_mount (g, arg352, arg353);
  if (ret351 == -1)
    return -1;
  const char *arg356 = "/";
  int ret355;
  ret355 = guestfs_btrfs_quota_enable (g, arg356, 1);
  if (ret355 == -1)
    return -1;
  const char *arg360 = "1/1000";
  const char *arg361 = "/";
  int ret359;
  ret359 = guestfs_btrfs_qgroup_create (g, arg360, arg361);
  if (ret359 == -1)
    return -1;
  const char *arg364 = "2/1000";
  const char *arg365 = "/";
  int ret363;
  ret363 = guestfs_btrfs_qgroup_create (g, arg364, arg365);
  if (ret363 == -1)
    return -1;
  const char *arg368 = "1/1000";
  const char *arg369 = "2/1000";
  const char *arg370 = "/";
  int ret367;
  ret367 = guestfs_btrfs_qgroup_assign (g, arg368, arg369, arg370);
  if (ret367 == -1)
    return -1;
  return 0;
}

static int test_btrfs_qgroup_create_0_skip (void);
static int test_btrfs_qgroup_create_0_perform (guestfs_h *);

static int
test_btrfs_qgroup_create_0 (guestfs_h *g)
{
  if (test_btrfs_qgroup_create_0_skip ()) {
    skipped ("test_btrfs_qgroup_create_0", "environment variable set");
    return 0;
  }

  const char *features372[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features372)) {
    skipped ("test_btrfs_qgroup_create_0", "group %s not available in daemon",
             features372[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_qgroup_create_0_perform (g);
}

static int
test_btrfs_qgroup_create_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_qgroup_create") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_QGROUP_CREATE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_QGROUP_CREATE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_qgroup_create_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_qgroup_create (0) */
  const char *arg374_0 = "/dev/sda1";
  const char *const arg374[] = {
    arg374_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs375;
  optargs375.bitmask = UINT64_C(0x0);
  int ret373;
  ret373 = guestfs_mkfs_btrfs_argv (g, (char **) arg374, &optargs375);
  if (ret373 == -1)
    return -1;
  const char *arg377 = "/dev/sda1";
  const char *arg378 = "/";
  int ret376;
  ret376 = guestfs_mount (g, arg377, arg378);
  if (ret376 == -1)
    return -1;
  const char *arg381 = "/";
  int ret380;
  ret380 = guestfs_btrfs_quota_enable (g, arg381, 1);
  if (ret380 == -1)
    return -1;
  const char *arg385 = "/sub1";
  struct guestfs_btrfs_subvolume_create_opts_argv optargs386;
  optargs386.bitmask = UINT64_C(0x0);
  int ret384;
  ret384 = guestfs_btrfs_subvolume_create_opts_argv (g, arg385, &optargs386);
  if (ret384 == -1)
    return -1;
  const char *arg388 = "1/1000";
  const char *arg389 = "/sub1";
  int ret387;
  ret387 = guestfs_btrfs_qgroup_create (g, arg388, arg389);
  if (ret387 == -1)
    return -1;
  return 0;
}

static int test_btrfs_qgroup_destroy_0_skip (void);
static int test_btrfs_qgroup_destroy_0_perform (guestfs_h *);

static int
test_btrfs_qgroup_destroy_0 (guestfs_h *g)
{
  if (test_btrfs_qgroup_destroy_0_skip ()) {
    skipped ("test_btrfs_qgroup_destroy_0", "environment variable set");
    return 0;
  }

  const char *features391[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features391)) {
    skipped ("test_btrfs_qgroup_destroy_0", "group %s not available in daemon",
             features391[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_qgroup_destroy_0_perform (g);
}

static int
test_btrfs_qgroup_destroy_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_qgroup_destroy") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_QGROUP_DESTROY_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_QGROUP_DESTROY");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_qgroup_destroy_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_qgroup_destroy (0) */
  const char *arg393_0 = "/dev/sda1";
  const char *const arg393[] = {
    arg393_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs394;
  optargs394.bitmask = UINT64_C(0x0);
  int ret392;
  ret392 = guestfs_mkfs_btrfs_argv (g, (char **) arg393, &optargs394);
  if (ret392 == -1)
    return -1;
  const char *arg396 = "/dev/sda1";
  const char *arg397 = "/";
  int ret395;
  ret395 = guestfs_mount (g, arg396, arg397);
  if (ret395 == -1)
    return -1;
  const char *arg400 = "/";
  int ret399;
  ret399 = guestfs_btrfs_quota_enable (g, arg400, 1);
  if (ret399 == -1)
    return -1;
  const char *arg404 = "/sub1";
  struct guestfs_btrfs_subvolume_create_opts_argv optargs405;
  optargs405.bitmask = UINT64_C(0x0);
  int ret403;
  ret403 = guestfs_btrfs_subvolume_create_opts_argv (g, arg404, &optargs405);
  if (ret403 == -1)
    return -1;
  const char *arg407 = "1/1000";
  const char *arg408 = "/sub1";
  int ret406;
  ret406 = guestfs_btrfs_qgroup_create (g, arg407, arg408);
  if (ret406 == -1)
    return -1;
  const char *arg411 = "1/1000";
  const char *arg412 = "/sub1";
  int ret410;
  ret410 = guestfs_btrfs_qgroup_destroy (g, arg411, arg412);
  if (ret410 == -1)
    return -1;
  return 0;
}

static int test_btrfs_qgroup_limit_0_skip (void);
static int test_btrfs_qgroup_limit_0_perform (guestfs_h *);

static int
test_btrfs_qgroup_limit_0 (guestfs_h *g)
{
  if (test_btrfs_qgroup_limit_0_skip ()) {
    skipped ("test_btrfs_qgroup_limit_0", "environment variable set");
    return 0;
  }

  const char *features414[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features414)) {
    skipped ("test_btrfs_qgroup_limit_0", "group %s not available in daemon",
             features414[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_qgroup_limit_0_perform (g);
}

static int
test_btrfs_qgroup_limit_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_qgroup_limit") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_QGROUP_LIMIT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_QGROUP_LIMIT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_qgroup_limit_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_qgroup_limit (0) */
  const char *arg416_0 = "/dev/sda1";
  const char *const arg416[] = {
    arg416_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs417;
  optargs417.bitmask = UINT64_C(0x0);
  int ret415;
  ret415 = guestfs_mkfs_btrfs_argv (g, (char **) arg416, &optargs417);
  if (ret415 == -1)
    return -1;
  const char *arg419 = "/dev/sda1";
  const char *arg420 = "/";
  int ret418;
  ret418 = guestfs_mount (g, arg419, arg420);
  if (ret418 == -1)
    return -1;
  const char *arg423 = "/";
  int ret422;
  ret422 = guestfs_btrfs_quota_enable (g, arg423, 1);
  if (ret422 == -1)
    return -1;
  const char *arg427 = "/";
  int ret426;
  ret426 = guestfs_btrfs_qgroup_limit (g, arg427, 10737418240);
  if (ret426 == -1)
    return -1;
  return 0;
}

static int test_btrfs_qgroup_limit_1_skip (void);
static int test_btrfs_qgroup_limit_1_perform (guestfs_h *);

static int
test_btrfs_qgroup_limit_1 (guestfs_h *g)
{
  if (test_btrfs_qgroup_limit_1_skip ()) {
    skipped ("test_btrfs_qgroup_limit_1", "environment variable set");
    return 0;
  }

  const char *features430[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features430)) {
    skipped ("test_btrfs_qgroup_limit_1", "group %s not available in daemon",
             features430[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_qgroup_limit_1_perform (g);
}

static int
test_btrfs_qgroup_limit_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_qgroup_limit") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_QGROUP_LIMIT_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_QGROUP_LIMIT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_qgroup_limit_1_perform (guestfs_h *g)
{
  /* TestLastFail for btrfs_qgroup_limit (1) */
  const char *arg432_0 = "/dev/sda1";
  const char *const arg432[] = {
    arg432_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs433;
  optargs433.bitmask = UINT64_C(0x0);
  int ret431;
  ret431 = guestfs_mkfs_btrfs_argv (g, (char **) arg432, &optargs433);
  if (ret431 == -1)
    return -1;
  const char *arg435 = "/dev/sda1";
  const char *arg436 = "/";
  int ret434;
  ret434 = guestfs_mount (g, arg435, arg436);
  if (ret434 == -1)
    return -1;
  const char *arg439 = "/";
  int ret438;
  ret438 = guestfs_btrfs_quota_enable (g, arg439, 0);
  if (ret438 == -1)
    return -1;
  const char *arg443 = "/";
  int ret442;
  guestfs_push_error_handler (g, NULL, NULL);
  ret442 = guestfs_btrfs_qgroup_limit (g, arg443, 10737418240);
  guestfs_pop_error_handler (g);
  if (ret442 != -1)
    return -1;
  return 0;
}

static int test_btrfs_qgroup_remove_0_skip (void);
static int test_btrfs_qgroup_remove_0_perform (guestfs_h *);

static int
test_btrfs_qgroup_remove_0 (guestfs_h *g)
{
  if (test_btrfs_qgroup_remove_0_skip ()) {
    skipped ("test_btrfs_qgroup_remove_0", "environment variable set");
    return 0;
  }

  const char *features446[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features446)) {
    skipped ("test_btrfs_qgroup_remove_0", "group %s not available in daemon",
             features446[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_qgroup_remove_0_perform (g);
}

static int
test_btrfs_qgroup_remove_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_qgroup_remove") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_QGROUP_REMOVE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_QGROUP_REMOVE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_qgroup_remove_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_qgroup_remove (0) */
  const char *arg448_0 = "/dev/sda1";
  const char *const arg448[] = {
    arg448_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs449;
  optargs449.bitmask = UINT64_C(0x0);
  int ret447;
  ret447 = guestfs_mkfs_btrfs_argv (g, (char **) arg448, &optargs449);
  if (ret447 == -1)
    return -1;
  const char *arg451 = "/dev/sda1";
  const char *arg452 = "/";
  int ret450;
  ret450 = guestfs_mount (g, arg451, arg452);
  if (ret450 == -1)
    return -1;
  const char *arg455 = "/";
  int ret454;
  ret454 = guestfs_btrfs_quota_enable (g, arg455, 1);
  if (ret454 == -1)
    return -1;
  const char *arg459 = "1/1000";
  const char *arg460 = "/";
  int ret458;
  ret458 = guestfs_btrfs_qgroup_create (g, arg459, arg460);
  if (ret458 == -1)
    return -1;
  const char *arg463 = "2/1000";
  const char *arg464 = "/";
  int ret462;
  ret462 = guestfs_btrfs_qgroup_create (g, arg463, arg464);
  if (ret462 == -1)
    return -1;
  const char *arg467 = "1/1000";
  const char *arg468 = "2/1000";
  const char *arg469 = "/";
  int ret466;
  ret466 = guestfs_btrfs_qgroup_assign (g, arg467, arg468, arg469);
  if (ret466 == -1)
    return -1;
  const char *arg472 = "1/1000";
  const char *arg473 = "2/1000";
  const char *arg474 = "/";
  int ret471;
  ret471 = guestfs_btrfs_qgroup_remove (g, arg472, arg473, arg474);
  if (ret471 == -1)
    return -1;
  return 0;
}

static int test_btrfs_qgroup_show_0_skip (void);
static int test_btrfs_qgroup_show_0_perform (guestfs_h *);

static int
test_btrfs_qgroup_show_0 (guestfs_h *g)
{
  if (test_btrfs_qgroup_show_0_skip ()) {
    skipped ("test_btrfs_qgroup_show_0", "environment variable set");
    return 0;
  }

  const char *features476[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features476)) {
    skipped ("test_btrfs_qgroup_show_0", "group %s not available in daemon",
             features476[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_qgroup_show_0_perform (g);
}

static int
test_btrfs_qgroup_show_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_qgroup_show") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_QGROUP_SHOW_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_QGROUP_SHOW");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_qgroup_show_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_qgroup_show (0) */
  const char *arg478_0 = "/dev/sda1";
  const char *const arg478[] = {
    arg478_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs479;
  optargs479.bitmask = UINT64_C(0x0);
  int ret477;
  ret477 = guestfs_mkfs_btrfs_argv (g, (char **) arg478, &optargs479);
  if (ret477 == -1)
    return -1;
  const char *arg481 = "/dev/sda1";
  const char *arg482 = "/";
  int ret480;
  ret480 = guestfs_mount (g, arg481, arg482);
  if (ret480 == -1)
    return -1;
  const char *arg485 = "/";
  int ret484;
  ret484 = guestfs_btrfs_quota_enable (g, arg485, 1);
  if (ret484 == -1)
    return -1;
  const char *arg489 = "/sub1";
  struct guestfs_btrfs_subvolume_create_opts_argv optargs490;
  optargs490.bitmask = UINT64_C(0x0);
  int ret488;
  ret488 = guestfs_btrfs_subvolume_create_opts_argv (g, arg489, &optargs490);
  if (ret488 == -1)
    return -1;
  const char *arg492 = "1/1000";
  const char *arg493 = "/sub1";
  int ret491;
  ret491 = guestfs_btrfs_qgroup_create (g, arg492, arg493);
  if (ret491 == -1)
    return -1;
  const char *arg496 = "/";
  CLEANUP_FREE_BTRFSQGROUP_LIST struct guestfs_btrfsqgroup_list *ret495;
  ret495 = guestfs_btrfs_qgroup_show (g, arg496);
  if (ret495 == NULL)
      return -1;
  return 0;
}

static int test_btrfs_quota_enable_0_skip (void);
static int test_btrfs_quota_enable_0_perform (guestfs_h *);

static int
test_btrfs_quota_enable_0 (guestfs_h *g)
{
  if (test_btrfs_quota_enable_0_skip ()) {
    skipped ("test_btrfs_quota_enable_0", "environment variable set");
    return 0;
  }

  const char *features498[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features498)) {
    skipped ("test_btrfs_quota_enable_0", "group %s not available in daemon",
             features498[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_quota_enable_0_perform (g);
}

static int
test_btrfs_quota_enable_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_quota_enable") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_QUOTA_ENABLE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_QUOTA_ENABLE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_quota_enable_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_quota_enable (0) */
  const char *arg500_0 = "/dev/sda1";
  const char *const arg500[] = {
    arg500_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs501;
  optargs501.bitmask = UINT64_C(0x0);
  int ret499;
  ret499 = guestfs_mkfs_btrfs_argv (g, (char **) arg500, &optargs501);
  if (ret499 == -1)
    return -1;
  const char *arg503 = "/dev/sda1";
  int ret502;
  ret502 = guestfs_btrfs_quota_enable (g, arg503, 1);
  if (ret502 == -1)
    return -1;
  return 0;
}

static int test_btrfs_quota_enable_1_skip (void);
static int test_btrfs_quota_enable_1_perform (guestfs_h *);

static int
test_btrfs_quota_enable_1 (guestfs_h *g)
{
  if (test_btrfs_quota_enable_1_skip ()) {
    skipped ("test_btrfs_quota_enable_1", "environment variable set");
    return 0;
  }

  const char *features506[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features506)) {
    skipped ("test_btrfs_quota_enable_1", "group %s not available in daemon",
             features506[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_quota_enable_1_perform (g);
}

static int
test_btrfs_quota_enable_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_quota_enable") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_QUOTA_ENABLE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_QUOTA_ENABLE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_quota_enable_1_perform (guestfs_h *g)
{
  /* TestRun for btrfs_quota_enable (1) */
  const char *arg508_0 = "/dev/sda1";
  const char *const arg508[] = {
    arg508_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs509;
  optargs509.bitmask = UINT64_C(0x0);
  int ret507;
  ret507 = guestfs_mkfs_btrfs_argv (g, (char **) arg508, &optargs509);
  if (ret507 == -1)
    return -1;
  const char *arg511 = "/dev/sda1";
  const char *arg512 = "/";
  int ret510;
  ret510 = guestfs_mount (g, arg511, arg512);
  if (ret510 == -1)
    return -1;
  const char *arg515 = "/";
  int ret514;
  ret514 = guestfs_btrfs_quota_enable (g, arg515, 1);
  if (ret514 == -1)
    return -1;
  return 0;
}

static int test_btrfs_quota_enable_2_skip (void);
static int test_btrfs_quota_enable_2_perform (guestfs_h *);

static int
test_btrfs_quota_enable_2 (guestfs_h *g)
{
  if (test_btrfs_quota_enable_2_skip ()) {
    skipped ("test_btrfs_quota_enable_2", "environment variable set");
    return 0;
  }

  const char *features518[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features518)) {
    skipped ("test_btrfs_quota_enable_2", "group %s not available in daemon",
             features518[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_quota_enable_2_perform (g);
}

static int
test_btrfs_quota_enable_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_quota_enable") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_QUOTA_ENABLE_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_QUOTA_ENABLE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_quota_enable_2_perform (guestfs_h *g)
{
  /* TestRun for btrfs_quota_enable (2) */
  const char *arg520_0 = "/dev/sda1";
  const char *const arg520[] = {
    arg520_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs521;
  optargs521.bitmask = UINT64_C(0x0);
  int ret519;
  ret519 = guestfs_mkfs_btrfs_argv (g, (char **) arg520, &optargs521);
  if (ret519 == -1)
    return -1;
  const char *arg523 = "/dev/sda1";
  int ret522;
  ret522 = guestfs_btrfs_quota_enable (g, arg523, 0);
  if (ret522 == -1)
    return -1;
  return 0;
}

static int test_btrfs_quota_enable_3_skip (void);
static int test_btrfs_quota_enable_3_perform (guestfs_h *);

static int
test_btrfs_quota_enable_3 (guestfs_h *g)
{
  if (test_btrfs_quota_enable_3_skip ()) {
    skipped ("test_btrfs_quota_enable_3", "environment variable set");
    return 0;
  }

  const char *features526[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features526)) {
    skipped ("test_btrfs_quota_enable_3", "group %s not available in daemon",
             features526[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_quota_enable_3_perform (g);
}

static int
test_btrfs_quota_enable_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_quota_enable") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_QUOTA_ENABLE_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_QUOTA_ENABLE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_quota_enable_3_perform (guestfs_h *g)
{
  /* TestRun for btrfs_quota_enable (3) */
  const char *arg528_0 = "/dev/sda1";
  const char *const arg528[] = {
    arg528_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs529;
  optargs529.bitmask = UINT64_C(0x0);
  int ret527;
  ret527 = guestfs_mkfs_btrfs_argv (g, (char **) arg528, &optargs529);
  if (ret527 == -1)
    return -1;
  const char *arg531 = "/dev/sda1";
  const char *arg532 = "/";
  int ret530;
  ret530 = guestfs_mount (g, arg531, arg532);
  if (ret530 == -1)
    return -1;
  const char *arg535 = "/";
  int ret534;
  ret534 = guestfs_btrfs_quota_enable (g, arg535, 0);
  if (ret534 == -1)
    return -1;
  return 0;
}

static int test_btrfs_quota_rescan_0_skip (void);
static int test_btrfs_quota_rescan_0_perform (guestfs_h *);

static int
test_btrfs_quota_rescan_0 (guestfs_h *g)
{
  if (test_btrfs_quota_rescan_0_skip ()) {
    skipped ("test_btrfs_quota_rescan_0", "environment variable set");
    return 0;
  }

  const char *features538[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features538)) {
    skipped ("test_btrfs_quota_rescan_0", "group %s not available in daemon",
             features538[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_quota_rescan_0_perform (g);
}

static int
test_btrfs_quota_rescan_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_quota_rescan") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_QUOTA_RESCAN_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_QUOTA_RESCAN");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_quota_rescan_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_quota_rescan (0) */
  const char *arg540_0 = "/dev/sda1";
  const char *const arg540[] = {
    arg540_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs541;
  optargs541.bitmask = UINT64_C(0x0);
  int ret539;
  ret539 = guestfs_mkfs_btrfs_argv (g, (char **) arg540, &optargs541);
  if (ret539 == -1)
    return -1;
  const char *arg543 = "/dev/sda1";
  int ret542;
  ret542 = guestfs_btrfs_quota_enable (g, arg543, 1);
  if (ret542 == -1)
    return -1;
  const char *arg547 = "/dev/sda1";
  int ret546;
  ret546 = guestfs_btrfs_quota_rescan (g, arg547);
  if (ret546 == -1)
    return -1;
  return 0;
}

static int test_btrfs_quota_rescan_1_skip (void);
static int test_btrfs_quota_rescan_1_perform (guestfs_h *);

static int
test_btrfs_quota_rescan_1 (guestfs_h *g)
{
  if (test_btrfs_quota_rescan_1_skip ()) {
    skipped ("test_btrfs_quota_rescan_1", "environment variable set");
    return 0;
  }

  const char *features549[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features549)) {
    skipped ("test_btrfs_quota_rescan_1", "group %s not available in daemon",
             features549[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_quota_rescan_1_perform (g);
}

static int
test_btrfs_quota_rescan_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_quota_rescan") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_QUOTA_RESCAN_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_QUOTA_RESCAN");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_quota_rescan_1_perform (guestfs_h *g)
{
  /* TestRun for btrfs_quota_rescan (1) */
  const char *arg551_0 = "/dev/sda1";
  const char *const arg551[] = {
    arg551_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs552;
  optargs552.bitmask = UINT64_C(0x0);
  int ret550;
  ret550 = guestfs_mkfs_btrfs_argv (g, (char **) arg551, &optargs552);
  if (ret550 == -1)
    return -1;
  const char *arg554 = "/dev/sda1";
  const char *arg555 = "/";
  int ret553;
  ret553 = guestfs_mount (g, arg554, arg555);
  if (ret553 == -1)
    return -1;
  const char *arg558 = "/";
  int ret557;
  ret557 = guestfs_btrfs_quota_enable (g, arg558, 1);
  if (ret557 == -1)
    return -1;
  const char *arg562 = "/";
  int ret561;
  ret561 = guestfs_btrfs_quota_rescan (g, arg562);
  if (ret561 == -1)
    return -1;
  return 0;
}

static int test_btrfs_rescue_chunk_recover_0_skip (void);
static int test_btrfs_rescue_chunk_recover_0_perform (guestfs_h *);

static int
test_btrfs_rescue_chunk_recover_0 (guestfs_h *g)
{
  if (test_btrfs_rescue_chunk_recover_0_skip ()) {
    skipped ("test_btrfs_rescue_chunk_recover_0", "environment variable set");
    return 0;
  }

  const char *features564[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features564)) {
    skipped ("test_btrfs_rescue_chunk_recover_0", "group %s not available in daemon",
             features564[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_rescue_chunk_recover_0_perform (g);
}

static int
test_btrfs_rescue_chunk_recover_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_rescue_chunk_recover") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_RESCUE_CHUNK_RECOVER_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_RESCUE_CHUNK_RECOVER");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_rescue_chunk_recover_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_rescue_chunk_recover (0) */
  const char *arg566_0 = "/dev/sda1";
  const char *const arg566[] = {
    arg566_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs567;
  optargs567.bitmask = UINT64_C(0x0);
  int ret565;
  ret565 = guestfs_mkfs_btrfs_argv (g, (char **) arg566, &optargs567);
  if (ret565 == -1)
    return -1;
  const char *arg569 = "/dev/sda1";
  int ret568;
  ret568 = guestfs_btrfs_rescue_chunk_recover (g, arg569);
  if (ret568 == -1)
    return -1;
  return 0;
}

static int test_btrfs_rescue_super_recover_0_skip (void);
static int test_btrfs_rescue_super_recover_0_perform (guestfs_h *);

static int
test_btrfs_rescue_super_recover_0 (guestfs_h *g)
{
  if (test_btrfs_rescue_super_recover_0_skip ()) {
    skipped ("test_btrfs_rescue_super_recover_0", "environment variable set");
    return 0;
  }

  const char *features571[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features571)) {
    skipped ("test_btrfs_rescue_super_recover_0", "group %s not available in daemon",
             features571[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_rescue_super_recover_0_perform (g);
}

static int
test_btrfs_rescue_super_recover_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_rescue_super_recover") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_RESCUE_SUPER_RECOVER_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_RESCUE_SUPER_RECOVER");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_rescue_super_recover_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_rescue_super_recover (0) */
  const char *arg573_0 = "/dev/sda1";
  const char *const arg573[] = {
    arg573_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs574;
  optargs574.bitmask = UINT64_C(0x0);
  int ret572;
  ret572 = guestfs_mkfs_btrfs_argv (g, (char **) arg573, &optargs574);
  if (ret572 == -1)
    return -1;
  const char *arg576 = "/dev/sda1";
  int ret575;
  ret575 = guestfs_btrfs_rescue_super_recover (g, arg576);
  if (ret575 == -1)
    return -1;
  return 0;
}

static int test_btrfs_scrub_start_0_skip (void);
static int test_btrfs_scrub_start_0_perform (guestfs_h *);

static int
test_btrfs_scrub_start_0 (guestfs_h *g)
{
  if (test_btrfs_scrub_start_0_skip ()) {
    skipped ("test_btrfs_scrub_start_0", "environment variable set");
    return 0;
  }

  const char *features578[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features578)) {
    skipped ("test_btrfs_scrub_start_0", "group %s not available in daemon",
             features578[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_scrub_start_0_perform (g);
}

static int
test_btrfs_scrub_start_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_scrub_start") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_SCRUB_START_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_SCRUB_START");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_scrub_start_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_scrub_start (0) */
  const char *arg580_0 = "/dev/sda1";
  const char *const arg580[] = {
    arg580_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs581;
  optargs581.bitmask = UINT64_C(0x0);
  int ret579;
  ret579 = guestfs_mkfs_btrfs_argv (g, (char **) arg580, &optargs581);
  if (ret579 == -1)
    return -1;
  const char *arg583 = "/dev/sda1";
  const char *arg584 = "/";
  int ret582;
  ret582 = guestfs_mount (g, arg583, arg584);
  if (ret582 == -1)
    return -1;
  const char *arg587 = "/";
  int ret586;
  ret586 = guestfs_btrfs_scrub_start (g, arg587);
  if (ret586 == -1)
    return -1;
  return 0;
}

static int test_btrfs_scrub_status_0_skip (void);
static int test_btrfs_scrub_status_0_perform (guestfs_h *);

static int
test_btrfs_scrub_status_0 (guestfs_h *g)
{
  if (test_btrfs_scrub_status_0_skip ()) {
    skipped ("test_btrfs_scrub_status_0", "environment variable set");
    return 0;
  }

  const char *features589[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features589)) {
    skipped ("test_btrfs_scrub_status_0", "group %s not available in daemon",
             features589[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_scrub_status_0_perform (g);
}

static int
test_btrfs_scrub_status_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_scrub_status") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_SCRUB_STATUS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_SCRUB_STATUS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_scrub_status_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_scrub_status (0) */
  const char *arg591_0 = "/dev/sda1";
  const char *const arg591[] = {
    arg591_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs592;
  optargs592.bitmask = UINT64_C(0x0);
  int ret590;
  ret590 = guestfs_mkfs_btrfs_argv (g, (char **) arg591, &optargs592);
  if (ret590 == -1)
    return -1;
  const char *arg594 = "/dev/sda1";
  const char *arg595 = "/";
  int ret593;
  ret593 = guestfs_mount (g, arg594, arg595);
  if (ret593 == -1)
    return -1;
  const char *arg598 = "/";
  int ret597;
  ret597 = guestfs_btrfs_scrub_start (g, arg598);
  if (ret597 == -1)
    return -1;
  const char *arg601 = "/";
  CLEANUP_FREE_BTRFSSCRUB struct guestfs_btrfsscrub *ret600;
  ret600 = guestfs_btrfs_scrub_status (g, arg601);
  if (ret600 == NULL)
      return -1;
  return 0;
}

static int test_btrfs_set_seeding_0_skip (void);
static int test_btrfs_set_seeding_0_perform (guestfs_h *);

static int
test_btrfs_set_seeding_0 (guestfs_h *g)
{
  if (test_btrfs_set_seeding_0_skip ()) {
    skipped ("test_btrfs_set_seeding_0", "environment variable set");
    return 0;
  }

  const char *features603[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features603)) {
    skipped ("test_btrfs_set_seeding_0", "group %s not available in daemon",
             features603[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_set_seeding_0_perform (g);
}

static int
test_btrfs_set_seeding_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_set_seeding") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_SET_SEEDING_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_SET_SEEDING");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_set_seeding_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_set_seeding (0) */
  const char *arg605_0 = "/dev/sda1";
  const char *const arg605[] = {
    arg605_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs606;
  optargs606.bitmask = UINT64_C(0x0);
  int ret604;
  ret604 = guestfs_mkfs_btrfs_argv (g, (char **) arg605, &optargs606);
  if (ret604 == -1)
    return -1;
  const char *arg608 = "/dev/sda1";
  int ret607;
  ret607 = guestfs_btrfs_set_seeding (g, arg608, 1);
  if (ret607 == -1)
    return -1;
  const char *arg612 = "/dev/sda1";
  int ret611;
  ret611 = guestfs_btrfs_set_seeding (g, arg612, 0);
  if (ret611 == -1)
    return -1;
  return 0;
}

static int test_btrfs_subvolume_delete_0_skip (void);
static int test_btrfs_subvolume_delete_0_perform (guestfs_h *);

static int
test_btrfs_subvolume_delete_0 (guestfs_h *g)
{
  if (test_btrfs_subvolume_delete_0_skip ()) {
    skipped ("test_btrfs_subvolume_delete_0", "environment variable set");
    return 0;
  }

  const char *features615[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features615)) {
    skipped ("test_btrfs_subvolume_delete_0", "group %s not available in daemon",
             features615[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_subvolume_delete_0_perform (g);
}

static int
test_btrfs_subvolume_delete_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_subvolume_delete") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_SUBVOLUME_DELETE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_SUBVOLUME_DELETE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_subvolume_delete_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_subvolume_delete (0) */
  const char *arg617_0 = "/dev/sda1";
  const char *const arg617[] = {
    arg617_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs618;
  optargs618.bitmask = UINT64_C(0x0);
  int ret616;
  ret616 = guestfs_mkfs_btrfs_argv (g, (char **) arg617, &optargs618);
  if (ret616 == -1)
    return -1;
  const char *arg620 = "/dev/sda1";
  const char *arg621 = "/";
  int ret619;
  ret619 = guestfs_mount (g, arg620, arg621);
  if (ret619 == -1)
    return -1;
  const char *arg624 = "/test1";
  struct guestfs_btrfs_subvolume_create_opts_argv optargs625;
  optargs625.bitmask = UINT64_C(0x0);
  int ret623;
  ret623 = guestfs_btrfs_subvolume_create_opts_argv (g, arg624, &optargs625);
  if (ret623 == -1)
    return -1;
  const char *arg627 = "/test1";
  int ret626;
  ret626 = guestfs_btrfs_subvolume_delete (g, arg627);
  if (ret626 == -1)
    return -1;
  return 0;
}

static int test_btrfs_subvolume_get_default_0_skip (void);
static int test_btrfs_subvolume_get_default_0_perform (guestfs_h *);

static int
test_btrfs_subvolume_get_default_0 (guestfs_h *g)
{
  if (test_btrfs_subvolume_get_default_0_skip ()) {
    skipped ("test_btrfs_subvolume_get_default_0", "environment variable set");
    return 0;
  }

  const char *features629[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features629)) {
    skipped ("test_btrfs_subvolume_get_default_0", "group %s not available in daemon",
             features629[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_subvolume_get_default_0_perform (g);
}

static int
test_btrfs_subvolume_get_default_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_subvolume_get_default") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_SUBVOLUME_GET_DEFAULT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_SUBVOLUME_GET_DEFAULT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_subvolume_get_default_0_perform (guestfs_h *g)
{
  /* TestResult for btrfs_subvolume_get_default (0) */
  const char *arg630_0 = "/dev/sda1";
  const char *const arg630[] = {
    arg630_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs631;
  optargs631.bitmask = UINT64_C(0x0);
  int ret1;
  ret1 = guestfs_mkfs_btrfs_argv (g, (char **) arg630, &optargs631);
  if (ret1 == -1)
    return -1;
  const char *arg632 = "/dev/sda1";
  int64_t ret;
  ret = guestfs_btrfs_subvolume_get_default (g, arg632);
  if (ret == -1)
    return -1;
  if (! (ret > 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_btrfs_subvolume_get_default_0", "ret > 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_btrfs_subvolume_get_default_1_skip (void);
static int test_btrfs_subvolume_get_default_1_perform (guestfs_h *);

static int
test_btrfs_subvolume_get_default_1 (guestfs_h *g)
{
  if (test_btrfs_subvolume_get_default_1_skip ()) {
    skipped ("test_btrfs_subvolume_get_default_1", "environment variable set");
    return 0;
  }

  const char *features634[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features634)) {
    skipped ("test_btrfs_subvolume_get_default_1", "group %s not available in daemon",
             features634[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_subvolume_get_default_1_perform (g);
}

static int
test_btrfs_subvolume_get_default_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_subvolume_get_default") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_SUBVOLUME_GET_DEFAULT_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_SUBVOLUME_GET_DEFAULT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_subvolume_get_default_1_perform (guestfs_h *g)
{
  /* TestResult for btrfs_subvolume_get_default (1) */
  const char *arg635_0 = "/dev/sda1";
  const char *const arg635[] = {
    arg635_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs636;
  optargs636.bitmask = UINT64_C(0x0);
  int ret2;
  ret2 = guestfs_mkfs_btrfs_argv (g, (char **) arg635, &optargs636);
  if (ret2 == -1)
    return -1;
  const char *arg637 = "/dev/sda1";
  const char *arg638 = "/";
  int ret1;
  ret1 = guestfs_mount (g, arg637, arg638);
  if (ret1 == -1)
    return -1;
  const char *arg640 = "/";
  int64_t ret;
  ret = guestfs_btrfs_subvolume_get_default (g, arg640);
  if (ret == -1)
    return -1;
  if (! (ret > 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_btrfs_subvolume_get_default_1", "ret > 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_btrfs_subvolume_show_0_skip (void);
static int test_btrfs_subvolume_show_0_perform (guestfs_h *);

static int
test_btrfs_subvolume_show_0 (guestfs_h *g)
{
  if (test_btrfs_subvolume_show_0_skip ()) {
    skipped ("test_btrfs_subvolume_show_0", "environment variable set");
    return 0;
  }

  const char *features642[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features642)) {
    skipped ("test_btrfs_subvolume_show_0", "group %s not available in daemon",
             features642[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_subvolume_show_0_perform (g);
}

static int
test_btrfs_subvolume_show_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_subvolume_show") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_SUBVOLUME_SHOW_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_SUBVOLUME_SHOW");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_subvolume_show_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_subvolume_show (0) */
  const char *arg644_0 = "/dev/sda1";
  const char *const arg644[] = {
    arg644_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs645;
  optargs645.bitmask = UINT64_C(0x0);
  int ret643;
  ret643 = guestfs_mkfs_btrfs_argv (g, (char **) arg644, &optargs645);
  if (ret643 == -1)
    return -1;
  const char *arg647 = "/dev/sda1";
  const char *arg648 = "/";
  int ret646;
  ret646 = guestfs_mount (g, arg647, arg648);
  if (ret646 == -1)
    return -1;
  const char *arg651 = "/sub1";
  struct guestfs_btrfs_subvolume_create_opts_argv optargs652;
  optargs652.bitmask = UINT64_C(0x0);
  int ret650;
  ret650 = guestfs_btrfs_subvolume_create_opts_argv (g, arg651, &optargs652);
  if (ret650 == -1)
    return -1;
  const char *arg654 = "/sub1";
  CLEANUP_FREE_STRING_LIST char **ret653;
  ret653 = guestfs_btrfs_subvolume_show (g, arg654);
  if (ret653 == NULL)
      return -1;
  return 0;
}

static int test_btrfs_subvolume_show_1_skip (void);
static int test_btrfs_subvolume_show_1_perform (guestfs_h *);

static int
test_btrfs_subvolume_show_1 (guestfs_h *g)
{
  if (test_btrfs_subvolume_show_1_skip ()) {
    skipped ("test_btrfs_subvolume_show_1", "environment variable set");
    return 0;
  }

  const char *features656[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features656)) {
    skipped ("test_btrfs_subvolume_show_1", "group %s not available in daemon",
             features656[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_subvolume_show_1_perform (g);
}

static int
test_btrfs_subvolume_show_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_subvolume_show") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_SUBVOLUME_SHOW_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_SUBVOLUME_SHOW");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_subvolume_show_1_perform (guestfs_h *g)
{
  /* TestLastFail for btrfs_subvolume_show (1) */
  const char *arg658_0 = "/dev/sda1";
  const char *const arg658[] = {
    arg658_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs659;
  optargs659.bitmask = UINT64_C(0x0);
  int ret657;
  ret657 = guestfs_mkfs_btrfs_argv (g, (char **) arg658, &optargs659);
  if (ret657 == -1)
    return -1;
  const char *arg661 = "/dev/sda1";
  const char *arg662 = "/";
  int ret660;
  ret660 = guestfs_mount (g, arg661, arg662);
  if (ret660 == -1)
    return -1;
  const char *arg665 = "/dir1";
  int ret664;
  ret664 = guestfs_mkdir (g, arg665);
  if (ret664 == -1)
    return -1;
  const char *arg668 = "/dir1";
  CLEANUP_FREE_STRING_LIST char **ret667;
  guestfs_push_error_handler (g, NULL, NULL);
  ret667 = guestfs_btrfs_subvolume_show (g, arg668);
  guestfs_pop_error_handler (g);
  if (ret667 != NULL)
    return -1;
  return 0;
}

static int test_btrfs_subvolume_snapshot_0_skip (void);
static int test_btrfs_subvolume_snapshot_0_perform (guestfs_h *);

static int
test_btrfs_subvolume_snapshot_0 (guestfs_h *g)
{
  if (test_btrfs_subvolume_snapshot_0_skip ()) {
    skipped ("test_btrfs_subvolume_snapshot_0", "environment variable set");
    return 0;
  }

  const char *features670[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features670)) {
    skipped ("test_btrfs_subvolume_snapshot_0", "group %s not available in daemon",
             features670[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfs_subvolume_snapshot_0_perform (g);
}

static int
test_btrfs_subvolume_snapshot_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfs_subvolume_snapshot") == NULL;
  str = getenv ("SKIP_TEST_BTRFS_SUBVOLUME_SNAPSHOT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFS_SUBVOLUME_SNAPSHOT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfs_subvolume_snapshot_0_perform (guestfs_h *g)
{
  /* TestRun for btrfs_subvolume_snapshot (0) */
  const char *arg672_0 = "/dev/sda1";
  const char *const arg672[] = {
    arg672_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs673;
  optargs673.bitmask = UINT64_C(0x0);
  int ret671;
  ret671 = guestfs_mkfs_btrfs_argv (g, (char **) arg672, &optargs673);
  if (ret671 == -1)
    return -1;
  const char *arg675 = "/dev/sda1";
  const char *arg676 = "/";
  int ret674;
  ret674 = guestfs_mount (g, arg675, arg676);
  if (ret674 == -1)
    return -1;
  const char *arg679 = "/dir";
  int ret678;
  ret678 = guestfs_mkdir (g, arg679);
  if (ret678 == -1)
    return -1;
  const char *arg682 = "/test1";
  struct guestfs_btrfs_subvolume_create_opts_argv optargs683;
  optargs683.bitmask = UINT64_C(0x0);
  int ret681;
  ret681 = guestfs_btrfs_subvolume_create_opts_argv (g, arg682, &optargs683);
  if (ret681 == -1)
    return -1;
  const char *arg685 = "/test2";
  struct guestfs_btrfs_subvolume_create_opts_argv optargs686;
  optargs686.bitmask = UINT64_C(0x0);
  int ret684;
  ret684 = guestfs_btrfs_subvolume_create_opts_argv (g, arg685, &optargs686);
  if (ret684 == -1)
    return -1;
  const char *arg688 = "/dir/test3";
  struct guestfs_btrfs_subvolume_create_opts_argv optargs689;
  optargs689.bitmask = UINT64_C(0x0);
  int ret687;
  ret687 = guestfs_btrfs_subvolume_create_opts_argv (g, arg688, &optargs689);
  if (ret687 == -1)
    return -1;
  const char *arg691 = "/dir/test3";
  const char *arg692 = "/dir/test5";
  struct guestfs_btrfs_subvolume_snapshot_opts_argv optargs693;
  optargs693.ro = 1;
  optargs693.bitmask = UINT64_C(0x1);
  int ret690;
  ret690 = guestfs_btrfs_subvolume_snapshot_opts_argv (g, arg691, arg692, &optargs693);
  if (ret690 == -1)
    return -1;
  return 0;
}

static int test_btrfstune_enable_extended_inode_refs_0_skip (void);
static int test_btrfstune_enable_extended_inode_refs_0_perform (guestfs_h *);

static int
test_btrfstune_enable_extended_inode_refs_0 (guestfs_h *g)
{
  if (test_btrfstune_enable_extended_inode_refs_0_skip ()) {
    skipped ("test_btrfstune_enable_extended_inode_refs_0", "environment variable set");
    return 0;
  }

  const char *features694[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features694)) {
    skipped ("test_btrfstune_enable_extended_inode_refs_0", "group %s not available in daemon",
             features694[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfstune_enable_extended_inode_refs_0_perform (g);
}

static int
test_btrfstune_enable_extended_inode_refs_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfstune_enable_extended_inode_refs") == NULL;
  str = getenv ("SKIP_TEST_BTRFSTUNE_ENABLE_EXTENDED_INODE_REFS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFSTUNE_ENABLE_EXTENDED_INODE_REFS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfstune_enable_extended_inode_refs_0_perform (guestfs_h *g)
{
  /* TestRun for btrfstune_enable_extended_inode_refs (0) */
  const char *arg696_0 = "/dev/sda1";
  const char *const arg696[] = {
    arg696_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs697;
  optargs697.bitmask = UINT64_C(0x0);
  int ret695;
  ret695 = guestfs_mkfs_btrfs_argv (g, (char **) arg696, &optargs697);
  if (ret695 == -1)
    return -1;
  const char *arg699 = "/dev/sda1";
  int ret698;
  ret698 = guestfs_btrfstune_enable_extended_inode_refs (g, arg699);
  if (ret698 == -1)
    return -1;
  return 0;
}

static int test_btrfstune_enable_skinny_metadata_extent_refs_0_skip (void);
static int test_btrfstune_enable_skinny_metadata_extent_refs_0_perform (guestfs_h *);

static int
test_btrfstune_enable_skinny_metadata_extent_refs_0 (guestfs_h *g)
{
  if (test_btrfstune_enable_skinny_metadata_extent_refs_0_skip ()) {
    skipped ("test_btrfstune_enable_skinny_metadata_extent_refs_0", "environment variable set");
    return 0;
  }

  const char *features701[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features701)) {
    skipped ("test_btrfstune_enable_skinny_metadata_extent_refs_0", "group %s not available in daemon",
             features701[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfstune_enable_skinny_metadata_extent_refs_0_perform (g);
}

static int
test_btrfstune_enable_skinny_metadata_extent_refs_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfstune_enable_skinny_metadata_extent_refs") == NULL;
  str = getenv ("SKIP_TEST_BTRFSTUNE_ENABLE_SKINNY_METADATA_EXTENT_REFS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFSTUNE_ENABLE_SKINNY_METADATA_EXTENT_REFS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfstune_enable_skinny_metadata_extent_refs_0_perform (guestfs_h *g)
{
  /* TestRun for btrfstune_enable_skinny_metadata_extent_refs (0) */
  const char *arg703_0 = "/dev/sda1";
  const char *const arg703[] = {
    arg703_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs704;
  optargs704.bitmask = UINT64_C(0x0);
  int ret702;
  ret702 = guestfs_mkfs_btrfs_argv (g, (char **) arg703, &optargs704);
  if (ret702 == -1)
    return -1;
  const char *arg706 = "/dev/sda1";
  int ret705;
  ret705 = guestfs_btrfstune_enable_skinny_metadata_extent_refs (g, arg706);
  if (ret705 == -1)
    return -1;
  return 0;
}

static int test_btrfstune_seeding_0_skip (void);
static int test_btrfstune_seeding_0_perform (guestfs_h *);

static int
test_btrfstune_seeding_0 (guestfs_h *g)
{
  if (test_btrfstune_seeding_0_skip ()) {
    skipped ("test_btrfstune_seeding_0", "environment variable set");
    return 0;
  }

  const char *features708[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features708)) {
    skipped ("test_btrfstune_seeding_0", "group %s not available in daemon",
             features708[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_btrfstune_seeding_0_perform (g);
}

static int
test_btrfstune_seeding_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "btrfstune_seeding") == NULL;
  str = getenv ("SKIP_TEST_BTRFSTUNE_SEEDING_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_BTRFSTUNE_SEEDING");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_btrfstune_seeding_0_perform (guestfs_h *g)
{
  /* TestRun for btrfstune_seeding (0) */
  const char *arg710_0 = "/dev/sda1";
  const char *const arg710[] = {
    arg710_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs711;
  optargs711.bitmask = UINT64_C(0x0);
  int ret709;
  ret709 = guestfs_mkfs_btrfs_argv (g, (char **) arg710, &optargs711);
  if (ret709 == -1)
    return -1;
  const char *arg713 = "/dev/sda1";
  int ret712;
  ret712 = guestfs_btrfstune_seeding (g, arg713, 1);
  if (ret712 == -1)
    return -1;
  const char *arg717 = "/dev/sda1";
  int ret716;
  ret716 = guestfs_btrfstune_seeding (g, arg717, 0);
  if (ret716 == -1)
    return -1;
  return 0;
}

static int test_c_pointer_0_skip (void);
static int test_c_pointer_0_perform (guestfs_h *);

static int
test_c_pointer_0 (guestfs_h *g)
{
  if (test_c_pointer_0_skip ()) {
    skipped ("test_c_pointer_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_c_pointer_0_perform (g);
}

static int
test_c_pointer_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "c_pointer") == NULL;
  str = getenv ("SKIP_TEST_C_POINTER_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_C_POINTER");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_c_pointer_0_perform (guestfs_h *g)
{
  /* TestRun for c_pointer (0) */
  int64_t ret720;
  ret720 = guestfs_c_pointer (g);
  if (ret720 == -1)
    return -1;
  return 0;
}

static int test_canonical_device_name_0_skip (void);
static int test_canonical_device_name_0_perform (guestfs_h *);

static int
test_canonical_device_name_0 (guestfs_h *g)
{
  if (test_canonical_device_name_0_skip ()) {
    skipped ("test_canonical_device_name_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_canonical_device_name_0_perform (g);
}

static int
test_canonical_device_name_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "canonical_device_name") == NULL;
  str = getenv ("SKIP_TEST_CANONICAL_DEVICE_NAME_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CANONICAL_DEVICE_NAME");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_canonical_device_name_0_perform (guestfs_h *g)
{
  /* TestResultString for canonical_device_name (0) */
  const char *arg722 = "/dev/hda";
  CLEANUP_FREE char *ret;
  ret = guestfs_canonical_device_name (g, arg722);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "/dev/sda")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_canonical_device_name_0", "canonical_device_name", "/dev/sda", ret);
    return -1;
  }
  return 0;
}

static int test_canonical_device_name_1_skip (void);
static int test_canonical_device_name_1_perform (guestfs_h *);

static int
test_canonical_device_name_1 (guestfs_h *g)
{
  if (test_canonical_device_name_1_skip ()) {
    skipped ("test_canonical_device_name_1", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_canonical_device_name_1_perform (g);
}

static int
test_canonical_device_name_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "canonical_device_name") == NULL;
  str = getenv ("SKIP_TEST_CANONICAL_DEVICE_NAME_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CANONICAL_DEVICE_NAME");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_canonical_device_name_1_perform (guestfs_h *g)
{
  /* TestResultString for canonical_device_name (1) */
  const char *arg724 = "/dev/vdaaa";
  CLEANUP_FREE char *ret;
  ret = guestfs_canonical_device_name (g, arg724);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "/dev/sdaaa")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_canonical_device_name_1", "canonical_device_name", "/dev/sdaaa", ret);
    return -1;
  }
  return 0;
}

static int test_canonical_device_name_2_skip (void);
static int test_canonical_device_name_2_perform (guestfs_h *);

static int
test_canonical_device_name_2 (guestfs_h *g)
{
  if (test_canonical_device_name_2_skip ()) {
    skipped ("test_canonical_device_name_2", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_canonical_device_name_2_perform (g);
}

static int
test_canonical_device_name_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "canonical_device_name") == NULL;
  str = getenv ("SKIP_TEST_CANONICAL_DEVICE_NAME_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CANONICAL_DEVICE_NAME");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_canonical_device_name_2_perform (guestfs_h *g)
{
  /* TestResultString for canonical_device_name (2) */
  const char *arg726 = "/dev/sdb";
  CLEANUP_FREE char *ret;
  ret = guestfs_canonical_device_name (g, arg726);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "/dev/sdb")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_canonical_device_name_2", "canonical_device_name", "/dev/sdb", ret);
    return -1;
  }
  return 0;
}

static int test_canonical_device_name_3_skip (void);
static int test_canonical_device_name_3_perform (guestfs_h *);

static int
test_canonical_device_name_3 (guestfs_h *g)
{
  if (test_canonical_device_name_3_skip ()) {
    skipped ("test_canonical_device_name_3", "environment variable set");
    return 0;
  }

  const char *features728[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features728)) {
    skipped ("test_canonical_device_name_3", "group %s not available in daemon",
             features728[0]);
    return 0;
  }

  if (init_basic_fs_on_lvm (g) == -1)
    return -1;

  return test_canonical_device_name_3_perform (g);
}

static int
test_canonical_device_name_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "canonical_device_name") == NULL;
  str = getenv ("SKIP_TEST_CANONICAL_DEVICE_NAME_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CANONICAL_DEVICE_NAME");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_canonical_device_name_3_perform (guestfs_h *g)
{
  /* TestResultString for canonical_device_name (3) */
  const char *arg729 = "/dev/mapper/VG-LV";
  CLEANUP_FREE char *ret;
  ret = guestfs_canonical_device_name (g, arg729);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "/dev/VG/LV")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_canonical_device_name_3", "canonical_device_name", "/dev/VG/LV", ret);
    return -1;
  }
  return 0;
}

static int test_canonical_device_name_4_skip (void);
static int test_canonical_device_name_4_perform (guestfs_h *);

static int
test_canonical_device_name_4 (guestfs_h *g)
{
  if (test_canonical_device_name_4_skip ()) {
    skipped ("test_canonical_device_name_4", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_canonical_device_name_4_perform (g);
}

static int
test_canonical_device_name_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "canonical_device_name") == NULL;
  str = getenv ("SKIP_TEST_CANONICAL_DEVICE_NAME_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CANONICAL_DEVICE_NAME");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_canonical_device_name_4_perform (guestfs_h *g)
{
  /* TestResultString for canonical_device_name (4) */
  const char *arg731 = "/dev/md0";
  CLEANUP_FREE char *ret;
  ret = guestfs_canonical_device_name (g, arg731);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "/dev/md0")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_canonical_device_name_4", "canonical_device_name", "/dev/md0", ret);
    return -1;
  }
  return 0;
}

static int test_canonical_device_name_5_skip (void);
static int test_canonical_device_name_5_perform (guestfs_h *);

static int
test_canonical_device_name_5 (guestfs_h *g)
{
  if (test_canonical_device_name_5_skip ()) {
    skipped ("test_canonical_device_name_5", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_canonical_device_name_5_perform (g);
}

static int
test_canonical_device_name_5_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "canonical_device_name") == NULL;
  str = getenv ("SKIP_TEST_CANONICAL_DEVICE_NAME_5");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CANONICAL_DEVICE_NAME");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_canonical_device_name_5_perform (guestfs_h *g)
{
  /* TestResultString for canonical_device_name (5) */
  const char *arg733 = "/dev/md127";
  CLEANUP_FREE char *ret;
  ret = guestfs_canonical_device_name (g, arg733);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "/dev/md127")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_canonical_device_name_5", "canonical_device_name", "/dev/md127", ret);
    return -1;
  }
  return 0;
}

static int test_cap_set_file_0_skip (void);
static int test_cap_set_file_0_perform (guestfs_h *);

static int
test_cap_set_file_0 (guestfs_h *g)
{
  if (test_cap_set_file_0_skip ()) {
    skipped ("test_cap_set_file_0", "environment variable set");
    return 0;
  }

  const char *features735[] = { "linuxcaps", NULL };
  if (!guestfs_feature_available (g, (char **) features735)) {
    skipped ("test_cap_set_file_0", "group %s not available in daemon",
             features735[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_cap_set_file_0_perform (g);
}

static int
test_cap_set_file_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "cap_set_file") == NULL;
  str = getenv ("SKIP_TEST_CAP_SET_FILE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CAP_SET_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_cap_set_file_0_perform (guestfs_h *g)
{
  /* TestResultString for cap_set_file (0) */
  const char *arg737 = "/cap_set_file_0";
  int ret736;
  ret736 = guestfs_touch (g, arg737);
  if (ret736 == -1)
    return -1;
  const char *arg740 = "/cap_set_file_0";
  const char *arg741 = "cap_chown=p cap_chown+e";
  int ret739;
  ret739 = guestfs_cap_set_file (g, arg740, arg741);
  if (ret739 == -1)
    return -1;
  const char *arg743 = "/cap_set_file_0";
  CLEANUP_FREE char *ret;
  ret = guestfs_cap_get_file (g, arg743);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "cap_chown=ep")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_cap_set_file_0", "cap_get_file", "cap_chown=ep", ret);
    return -1;
  }
  return 0;
}

static int test_case_sensitive_path_0_skip (void);
static int test_case_sensitive_path_0_perform (guestfs_h *);

static int
test_case_sensitive_path_0 (guestfs_h *g)
{
  if (test_case_sensitive_path_0_skip ()) {
    skipped ("test_case_sensitive_path_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_case_sensitive_path_0_perform (g);
}

static int
test_case_sensitive_path_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "case_sensitive_path") == NULL;
  str = getenv ("SKIP_TEST_CASE_SENSITIVE_PATH_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CASE_SENSITIVE_PATH");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_case_sensitive_path_0_perform (guestfs_h *g)
{
  /* TestResultString for case_sensitive_path (0) */
  const char *arg745 = "/DIRECTORY";
  CLEANUP_FREE char *ret;
  ret = guestfs_case_sensitive_path (g, arg745);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "/directory")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_case_sensitive_path_0", "case_sensitive_path", "/directory", ret);
    return -1;
  }
  return 0;
}

static int test_case_sensitive_path_1_skip (void);
static int test_case_sensitive_path_1_perform (guestfs_h *);

static int
test_case_sensitive_path_1 (guestfs_h *g)
{
  if (test_case_sensitive_path_1_skip ()) {
    skipped ("test_case_sensitive_path_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_case_sensitive_path_1_perform (g);
}

static int
test_case_sensitive_path_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "case_sensitive_path") == NULL;
  str = getenv ("SKIP_TEST_CASE_SENSITIVE_PATH_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CASE_SENSITIVE_PATH");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_case_sensitive_path_1_perform (guestfs_h *g)
{
  /* TestResultString for case_sensitive_path (1) */
  const char *arg747 = "/DIRECTORY/";
  CLEANUP_FREE char *ret;
  ret = guestfs_case_sensitive_path (g, arg747);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "/directory")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_case_sensitive_path_1", "case_sensitive_path", "/directory", ret);
    return -1;
  }
  return 0;
}

static int test_case_sensitive_path_2_skip (void);
static int test_case_sensitive_path_2_perform (guestfs_h *);

static int
test_case_sensitive_path_2 (guestfs_h *g)
{
  if (test_case_sensitive_path_2_skip ()) {
    skipped ("test_case_sensitive_path_2", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_case_sensitive_path_2_perform (g);
}

static int
test_case_sensitive_path_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "case_sensitive_path") == NULL;
  str = getenv ("SKIP_TEST_CASE_SENSITIVE_PATH_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CASE_SENSITIVE_PATH");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_case_sensitive_path_2_perform (guestfs_h *g)
{
  /* TestResultString for case_sensitive_path (2) */
  const char *arg749 = "/Known-1";
  CLEANUP_FREE char *ret;
  ret = guestfs_case_sensitive_path (g, arg749);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "/known-1")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_case_sensitive_path_2", "case_sensitive_path", "/known-1", ret);
    return -1;
  }
  return 0;
}

static int test_case_sensitive_path_3_skip (void);
static int test_case_sensitive_path_3_perform (guestfs_h *);

static int
test_case_sensitive_path_3 (guestfs_h *g)
{
  if (test_case_sensitive_path_3_skip ()) {
    skipped ("test_case_sensitive_path_3", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_case_sensitive_path_3_perform (g);
}

static int
test_case_sensitive_path_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "case_sensitive_path") == NULL;
  str = getenv ("SKIP_TEST_CASE_SENSITIVE_PATH_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CASE_SENSITIVE_PATH");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_case_sensitive_path_3_perform (guestfs_h *g)
{
  /* TestLastFail for case_sensitive_path (3) */
  const char *arg752 = "/Known-1/";
  CLEANUP_FREE char *ret751;
  guestfs_push_error_handler (g, NULL, NULL);
  ret751 = guestfs_case_sensitive_path (g, arg752);
  guestfs_pop_error_handler (g);
  if (ret751 != NULL)
    return -1;
  return 0;
}

static int test_case_sensitive_path_4_skip (void);
static int test_case_sensitive_path_4_perform (guestfs_h *);

static int
test_case_sensitive_path_4 (guestfs_h *g)
{
  if (test_case_sensitive_path_4_skip ()) {
    skipped ("test_case_sensitive_path_4", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_case_sensitive_path_4_perform (g);
}

static int
test_case_sensitive_path_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "case_sensitive_path") == NULL;
  str = getenv ("SKIP_TEST_CASE_SENSITIVE_PATH_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CASE_SENSITIVE_PATH");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_case_sensitive_path_4_perform (guestfs_h *g)
{
  /* TestResultString for case_sensitive_path (4) */
  const char *arg755 = "/case_sensitive_path";
  int ret754;
  ret754 = guestfs_mkdir (g, arg755);
  if (ret754 == -1)
    return -1;
  const char *arg758 = "/case_sensitive_path/bbb";
  int ret757;
  ret757 = guestfs_mkdir (g, arg758);
  if (ret757 == -1)
    return -1;
  const char *arg761 = "/case_sensitive_path/bbb/c";
  int ret760;
  ret760 = guestfs_touch (g, arg761);
  if (ret760 == -1)
    return -1;
  const char *arg763 = "/CASE_SENSITIVE_path/bbB/C";
  CLEANUP_FREE char *ret;
  ret = guestfs_case_sensitive_path (g, arg763);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "/case_sensitive_path/bbb/c")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_case_sensitive_path_4", "case_sensitive_path", "/case_sensitive_path/bbb/c", ret);
    return -1;
  }
  return 0;
}

static int test_case_sensitive_path_5_skip (void);
static int test_case_sensitive_path_5_perform (guestfs_h *);

static int
test_case_sensitive_path_5 (guestfs_h *g)
{
  if (test_case_sensitive_path_5_skip ()) {
    skipped ("test_case_sensitive_path_5", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_case_sensitive_path_5_perform (g);
}

static int
test_case_sensitive_path_5_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "case_sensitive_path") == NULL;
  str = getenv ("SKIP_TEST_CASE_SENSITIVE_PATH_5");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CASE_SENSITIVE_PATH");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_case_sensitive_path_5_perform (guestfs_h *g)
{
  /* TestResultString for case_sensitive_path (5) */
  const char *arg766 = "/case_sensitive_path2";
  int ret765;
  ret765 = guestfs_mkdir (g, arg766);
  if (ret765 == -1)
    return -1;
  const char *arg769 = "/case_sensitive_path2/bbb";
  int ret768;
  ret768 = guestfs_mkdir (g, arg769);
  if (ret768 == -1)
    return -1;
  const char *arg772 = "/case_sensitive_path2/bbb/c";
  int ret771;
  ret771 = guestfs_touch (g, arg772);
  if (ret771 == -1)
    return -1;
  const char *arg774 = "/case_sensitive_PATH2////bbB/C";
  CLEANUP_FREE char *ret;
  ret = guestfs_case_sensitive_path (g, arg774);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "/case_sensitive_path2/bbb/c")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_case_sensitive_path_5", "case_sensitive_path", "/case_sensitive_path2/bbb/c", ret);
    return -1;
  }
  return 0;
}

static int test_case_sensitive_path_6_skip (void);
static int test_case_sensitive_path_6_perform (guestfs_h *);

static int
test_case_sensitive_path_6 (guestfs_h *g)
{
  if (test_case_sensitive_path_6_skip ()) {
    skipped ("test_case_sensitive_path_6", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_case_sensitive_path_6_perform (g);
}

static int
test_case_sensitive_path_6_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "case_sensitive_path") == NULL;
  str = getenv ("SKIP_TEST_CASE_SENSITIVE_PATH_6");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CASE_SENSITIVE_PATH");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_case_sensitive_path_6_perform (guestfs_h *g)
{
  /* TestLastFail for case_sensitive_path (6) */
  const char *arg777 = "/case_sensitive_path3";
  int ret776;
  ret776 = guestfs_mkdir (g, arg777);
  if (ret776 == -1)
    return -1;
  const char *arg780 = "/case_sensitive_path3/bbb";
  int ret779;
  ret779 = guestfs_mkdir (g, arg780);
  if (ret779 == -1)
    return -1;
  const char *arg783 = "/case_sensitive_path3/bbb/c";
  int ret782;
  ret782 = guestfs_touch (g, arg783);
  if (ret782 == -1)
    return -1;
  const char *arg786 = "/case_SENSITIVE_path3/bbb/../bbb/C";
  CLEANUP_FREE char *ret785;
  guestfs_push_error_handler (g, NULL, NULL);
  ret785 = guestfs_case_sensitive_path (g, arg786);
  guestfs_pop_error_handler (g);
  if (ret785 != NULL)
    return -1;
  return 0;
}

static int test_case_sensitive_path_7_skip (void);
static int test_case_sensitive_path_7_perform (guestfs_h *);

static int
test_case_sensitive_path_7 (guestfs_h *g)
{
  if (test_case_sensitive_path_7_skip ()) {
    skipped ("test_case_sensitive_path_7", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_case_sensitive_path_7_perform (g);
}

static int
test_case_sensitive_path_7_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "case_sensitive_path") == NULL;
  str = getenv ("SKIP_TEST_CASE_SENSITIVE_PATH_7");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CASE_SENSITIVE_PATH");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_case_sensitive_path_7_perform (guestfs_h *g)
{
  /* TestResultString for case_sensitive_path (7) */
  const char *arg789 = "/case_sensitive_path4";
  int ret788;
  ret788 = guestfs_mkdir (g, arg789);
  if (ret788 == -1)
    return -1;
  const char *arg791 = "/case_SENSITIVE_path4/new_file";
  CLEANUP_FREE char *ret;
  ret = guestfs_case_sensitive_path (g, arg791);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "/case_sensitive_path4/new_file")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_case_sensitive_path_7", "case_sensitive_path", "/case_sensitive_path4/new_file", ret);
    return -1;
  }
  return 0;
}

static int test_cat_0_skip (void);
static int test_cat_0_perform (guestfs_h *);

static int
test_cat_0 (guestfs_h *g)
{
  if (test_cat_0_skip ()) {
    skipped ("test_cat_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_cat_0_perform (g);
}

static int
test_cat_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "cat") == NULL;
  str = getenv ("SKIP_TEST_CAT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CAT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_cat_0_perform (guestfs_h *g)
{
  /* TestResultString for cat (0) */
  const char *arg793 = "/known-2";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg793);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "abcdef\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_cat_0", "cat", "abcdef\n", ret);
    return -1;
  }
  return 0;
}

static int test_checksum_0_skip (void);
static int test_checksum_0_perform (guestfs_h *);

static int
test_checksum_0 (guestfs_h *g)
{
  if (test_checksum_0_skip ()) {
    skipped ("test_checksum_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_checksum_0_perform (g);
}

static int
test_checksum_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "checksum") == NULL;
  str = getenv ("SKIP_TEST_CHECKSUM_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CHECKSUM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_checksum_0_perform (guestfs_h *g)
{
  /* TestResultString for checksum (0) */
  const char *arg795 = "crc";
  const char *arg796 = "/known-3";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg795, arg796);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "2891671662")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_checksum_0", "checksum", "2891671662", ret);
    return -1;
  }
  return 0;
}

static int test_checksum_1_skip (void);
static int test_checksum_1_perform (guestfs_h *);

static int
test_checksum_1 (guestfs_h *g)
{
  if (test_checksum_1_skip ()) {
    skipped ("test_checksum_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_checksum_1_perform (g);
}

static int
test_checksum_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "checksum") == NULL;
  str = getenv ("SKIP_TEST_CHECKSUM_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CHECKSUM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_checksum_1_perform (guestfs_h *g)
{
  /* TestLastFail for checksum (1) */
  const char *arg799 = "crc";
  const char *arg800 = "/notexists";
  CLEANUP_FREE char *ret798;
  guestfs_push_error_handler (g, NULL, NULL);
  ret798 = guestfs_checksum (g, arg799, arg800);
  guestfs_pop_error_handler (g);
  if (ret798 != NULL)
    return -1;
  return 0;
}

static int test_checksum_2_skip (void);
static int test_checksum_2_perform (guestfs_h *);

static int
test_checksum_2 (guestfs_h *g)
{
  if (test_checksum_2_skip ()) {
    skipped ("test_checksum_2", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_checksum_2_perform (g);
}

static int
test_checksum_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "checksum") == NULL;
  str = getenv ("SKIP_TEST_CHECKSUM_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CHECKSUM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_checksum_2_perform (guestfs_h *g)
{
  /* TestResultString for checksum (2) */
  const char *arg802 = "md5";
  const char *arg803 = "/known-3";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg802, arg803);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "46d6ca27ee07cdc6fa99c2e138cc522c")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_checksum_2", "checksum", "46d6ca27ee07cdc6fa99c2e138cc522c", ret);
    return -1;
  }
  return 0;
}

static int test_checksum_3_skip (void);
static int test_checksum_3_perform (guestfs_h *);

static int
test_checksum_3 (guestfs_h *g)
{
  if (test_checksum_3_skip ()) {
    skipped ("test_checksum_3", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_checksum_3_perform (g);
}

static int
test_checksum_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "checksum") == NULL;
  str = getenv ("SKIP_TEST_CHECKSUM_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CHECKSUM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_checksum_3_perform (guestfs_h *g)
{
  /* TestResultString for checksum (3) */
  const char *arg805 = "sha1";
  const char *arg806 = "/known-3";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg805, arg806);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "b7ebccc3ee418311091c3eda0a45b83c0a770f15")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_checksum_3", "checksum", "b7ebccc3ee418311091c3eda0a45b83c0a770f15", ret);
    return -1;
  }
  return 0;
}

static int test_checksum_4_skip (void);
static int test_checksum_4_perform (guestfs_h *);

static int
test_checksum_4 (guestfs_h *g)
{
  if (test_checksum_4_skip ()) {
    skipped ("test_checksum_4", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_checksum_4_perform (g);
}

static int
test_checksum_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "checksum") == NULL;
  str = getenv ("SKIP_TEST_CHECKSUM_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CHECKSUM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_checksum_4_perform (guestfs_h *g)
{
  /* TestResultString for checksum (4) */
  const char *arg808 = "sha224";
  const char *arg809 = "/known-3";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg808, arg809);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "d2cd1774b28f3659c14116be0a6dc2bb5c4b350ce9cd5defac707741")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_checksum_4", "checksum", "d2cd1774b28f3659c14116be0a6dc2bb5c4b350ce9cd5defac707741", ret);
    return -1;
  }
  return 0;
}

static int test_checksum_5_skip (void);
static int test_checksum_5_perform (guestfs_h *);

static int
test_checksum_5 (guestfs_h *g)
{
  if (test_checksum_5_skip ()) {
    skipped ("test_checksum_5", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_checksum_5_perform (g);
}

static int
test_checksum_5_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "checksum") == NULL;
  str = getenv ("SKIP_TEST_CHECKSUM_5");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CHECKSUM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_checksum_5_perform (guestfs_h *g)
{
  /* TestResultString for checksum (5) */
  const char *arg811 = "sha256";
  const char *arg812 = "/known-3";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg811, arg812);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "75bb71b90cd20cb13f86d2bea8dad63ac7194e7517c3b52b8d06ff52d3487d30")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_checksum_5", "checksum", "75bb71b90cd20cb13f86d2bea8dad63ac7194e7517c3b52b8d06ff52d3487d30", ret);
    return -1;
  }
  return 0;
}

static int test_checksum_6_skip (void);
static int test_checksum_6_perform (guestfs_h *);

static int
test_checksum_6 (guestfs_h *g)
{
  if (test_checksum_6_skip ()) {
    skipped ("test_checksum_6", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_checksum_6_perform (g);
}

static int
test_checksum_6_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "checksum") == NULL;
  str = getenv ("SKIP_TEST_CHECKSUM_6");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CHECKSUM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_checksum_6_perform (guestfs_h *g)
{
  /* TestResultString for checksum (6) */
  const char *arg814 = "sha384";
  const char *arg815 = "/known-3";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg814, arg815);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "5fa7883430f357b5d7b7271d3a1d2872b51d73cba72731de6863d3dea55f30646af2799bef44d5ea776a5ec7941ac640")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_checksum_6", "checksum", "5fa7883430f357b5d7b7271d3a1d2872b51d73cba72731de6863d3dea55f30646af2799bef44d5ea776a5ec7941ac640", ret);
    return -1;
  }
  return 0;
}

static int test_checksum_7_skip (void);
static int test_checksum_7_perform (guestfs_h *);

static int
test_checksum_7 (guestfs_h *g)
{
  if (test_checksum_7_skip ()) {
    skipped ("test_checksum_7", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_checksum_7_perform (g);
}

static int
test_checksum_7_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "checksum") == NULL;
  str = getenv ("SKIP_TEST_CHECKSUM_7");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CHECKSUM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_checksum_7_perform (guestfs_h *g)
{
  /* TestResultString for checksum (7) */
  const char *arg817 = "sha512";
  const char *arg818 = "/known-3";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg817, arg818);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "2794062c328c6b216dca90443b7f7134c5f40e56bd0ed7853123275a09982a6f992e6ca682f9d2fba34a4c5e870d8fe077694ff831e3032a004ee077e00603f6")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_checksum_7", "checksum", "2794062c328c6b216dca90443b7f7134c5f40e56bd0ed7853123275a09982a6f992e6ca682f9d2fba34a4c5e870d8fe077694ff831e3032a004ee077e00603f6", ret);
    return -1;
  }
  return 0;
}

static int test_checksum_8_skip (void);
static int test_checksum_8_perform (guestfs_h *);

static int
test_checksum_8 (guestfs_h *g)
{
  if (test_checksum_8_skip ()) {
    skipped ("test_checksum_8", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_checksum_8_perform (g);
}

static int
test_checksum_8_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "checksum") == NULL;
  str = getenv ("SKIP_TEST_CHECKSUM_8");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CHECKSUM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_checksum_8_perform (guestfs_h *g)
{
  /* TestResultString for checksum (8) */
  const char *arg820 = "sha512";
  const char *arg821 = "/abssymlink";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg820, arg821);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "5f57d0639bc95081c53afc63a449403883818edc64da48930ad6b1a4fb49be90404686877743fbcd7c99811f3def7df7bc22635c885c6a8cf79c806b43451c1a")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_checksum_8", "checksum", "5f57d0639bc95081c53afc63a449403883818edc64da48930ad6b1a4fb49be90404686877743fbcd7c99811f3def7df7bc22635c885c6a8cf79c806b43451c1a", ret);
    return -1;
  }
  return 0;
}

static int test_checksum_device_0_skip (void);
static int test_checksum_device_0_perform (guestfs_h *);

static int
test_checksum_device_0 (guestfs_h *g)
{
  if (test_checksum_device_0_skip ()) {
    skipped ("test_checksum_device_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_checksum_device_0_perform (g);
}

static int
test_checksum_device_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "checksum_device") == NULL;
  str = getenv ("SKIP_TEST_CHECKSUM_DEVICE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CHECKSUM_DEVICE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_checksum_device_0_perform (guestfs_h *g)
{
  /* TestResult for checksum_device (0) */
  const char *arg823 = "md5";
  const char *arg824 = "/dev/sdd";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum_device (g, arg823, arg824);
  if (ret == NULL)
      return -1;
  if (! (check_file_md5 (ret, "../test-data/test.iso") == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_checksum_device_0", "check_file_md5 (ret, \"../test-data/test.iso\") == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_command_0_skip (void);
static int test_command_0_perform (guestfs_h *);

static int
test_command_0 (guestfs_h *g)
{
  if (test_command_0_skip ()) {
    skipped ("test_command_0", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_0", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_0_perform (g);
}

static int
test_command_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_0_perform (guestfs_h *g)
{
  /* TestResultString for command (0) */
  const char *arg827 = "/command";
  int ret826;
  ret826 = guestfs_mkdir (g, arg827);
  if (ret826 == -1)
    return -1;
  CLEANUP_FREE char *arg830 = substitute_srcdir ("c-api/test-command");
  const char *arg831 = "/command/test-command";
  int ret829;
  ret829 = guestfs_upload (g, arg830, arg831);
  if (ret829 == -1)
    return -1;
  const char *arg835 = "/command/test-command";
  int ret833;
  ret833 = guestfs_chmod (g, 493, arg835);
  if (ret833 == -1)
    return -1;
  const char *arg837_0 = "/command/test-command";
  const char *arg837_1 = "1";
  const char *const arg837[] = {
    arg837_0,
    arg837_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg837);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "Result1")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_command_0", "command", "Result1", ret);
    return -1;
  }
  return 0;
}

static int test_command_1_skip (void);
static int test_command_1_perform (guestfs_h *);

static int
test_command_1 (guestfs_h *g)
{
  if (test_command_1_skip ()) {
    skipped ("test_command_1", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_1", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_1_perform (g);
}

static int
test_command_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_1_perform (guestfs_h *g)
{
  /* TestResultString for command (1) */
  const char *arg840 = "/command2";
  int ret839;
  ret839 = guestfs_mkdir (g, arg840);
  if (ret839 == -1)
    return -1;
  CLEANUP_FREE char *arg843 = substitute_srcdir ("c-api/test-command");
  const char *arg844 = "/command2/test-command";
  int ret842;
  ret842 = guestfs_upload (g, arg843, arg844);
  if (ret842 == -1)
    return -1;
  const char *arg848 = "/command2/test-command";
  int ret846;
  ret846 = guestfs_chmod (g, 493, arg848);
  if (ret846 == -1)
    return -1;
  const char *arg850_0 = "/command2/test-command";
  const char *arg850_1 = "2";
  const char *const arg850[] = {
    arg850_0,
    arg850_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg850);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "Result2\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_command_1", "command", "Result2\n", ret);
    return -1;
  }
  return 0;
}

static int test_command_2_skip (void);
static int test_command_2_perform (guestfs_h *);

static int
test_command_2 (guestfs_h *g)
{
  if (test_command_2_skip ()) {
    skipped ("test_command_2", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_2", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_2_perform (g);
}

static int
test_command_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_2_perform (guestfs_h *g)
{
  /* TestResultString for command (2) */
  const char *arg853 = "/command3";
  int ret852;
  ret852 = guestfs_mkdir (g, arg853);
  if (ret852 == -1)
    return -1;
  CLEANUP_FREE char *arg856 = substitute_srcdir ("c-api/test-command");
  const char *arg857 = "/command3/test-command";
  int ret855;
  ret855 = guestfs_upload (g, arg856, arg857);
  if (ret855 == -1)
    return -1;
  const char *arg861 = "/command3/test-command";
  int ret859;
  ret859 = guestfs_chmod (g, 493, arg861);
  if (ret859 == -1)
    return -1;
  const char *arg863_0 = "/command3/test-command";
  const char *arg863_1 = "3";
  const char *const arg863[] = {
    arg863_0,
    arg863_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg863);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "\nResult3")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_command_2", "command", "\nResult3", ret);
    return -1;
  }
  return 0;
}

static int test_command_3_skip (void);
static int test_command_3_perform (guestfs_h *);

static int
test_command_3 (guestfs_h *g)
{
  if (test_command_3_skip ()) {
    skipped ("test_command_3", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_3", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_3_perform (g);
}

static int
test_command_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_3_perform (guestfs_h *g)
{
  /* TestResultString for command (3) */
  const char *arg866 = "/command4";
  int ret865;
  ret865 = guestfs_mkdir (g, arg866);
  if (ret865 == -1)
    return -1;
  CLEANUP_FREE char *arg869 = substitute_srcdir ("c-api/test-command");
  const char *arg870 = "/command4/test-command";
  int ret868;
  ret868 = guestfs_upload (g, arg869, arg870);
  if (ret868 == -1)
    return -1;
  const char *arg874 = "/command4/test-command";
  int ret872;
  ret872 = guestfs_chmod (g, 493, arg874);
  if (ret872 == -1)
    return -1;
  const char *arg876_0 = "/command4/test-command";
  const char *arg876_1 = "4";
  const char *const arg876[] = {
    arg876_0,
    arg876_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg876);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "\nResult4\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_command_3", "command", "\nResult4\n", ret);
    return -1;
  }
  return 0;
}

static int test_command_4_skip (void);
static int test_command_4_perform (guestfs_h *);

static int
test_command_4 (guestfs_h *g)
{
  if (test_command_4_skip ()) {
    skipped ("test_command_4", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_4", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_4_perform (g);
}

static int
test_command_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_4_perform (guestfs_h *g)
{
  /* TestResultString for command (4) */
  const char *arg879 = "/command5";
  int ret878;
  ret878 = guestfs_mkdir (g, arg879);
  if (ret878 == -1)
    return -1;
  CLEANUP_FREE char *arg882 = substitute_srcdir ("c-api/test-command");
  const char *arg883 = "/command5/test-command";
  int ret881;
  ret881 = guestfs_upload (g, arg882, arg883);
  if (ret881 == -1)
    return -1;
  const char *arg887 = "/command5/test-command";
  int ret885;
  ret885 = guestfs_chmod (g, 493, arg887);
  if (ret885 == -1)
    return -1;
  const char *arg889_0 = "/command5/test-command";
  const char *arg889_1 = "5";
  const char *const arg889[] = {
    arg889_0,
    arg889_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg889);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "\nResult5\n\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_command_4", "command", "\nResult5\n\n", ret);
    return -1;
  }
  return 0;
}

static int test_command_5_skip (void);
static int test_command_5_perform (guestfs_h *);

static int
test_command_5 (guestfs_h *g)
{
  if (test_command_5_skip ()) {
    skipped ("test_command_5", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_5", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_5_perform (g);
}

static int
test_command_5_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_5");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_5_perform (guestfs_h *g)
{
  /* TestResultString for command (5) */
  const char *arg892 = "/command6";
  int ret891;
  ret891 = guestfs_mkdir (g, arg892);
  if (ret891 == -1)
    return -1;
  CLEANUP_FREE char *arg895 = substitute_srcdir ("c-api/test-command");
  const char *arg896 = "/command6/test-command";
  int ret894;
  ret894 = guestfs_upload (g, arg895, arg896);
  if (ret894 == -1)
    return -1;
  const char *arg900 = "/command6/test-command";
  int ret898;
  ret898 = guestfs_chmod (g, 493, arg900);
  if (ret898 == -1)
    return -1;
  const char *arg902_0 = "/command6/test-command";
  const char *arg902_1 = "6";
  const char *const arg902[] = {
    arg902_0,
    arg902_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg902);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "\n\nResult6\n\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_command_5", "command", "\n\nResult6\n\n", ret);
    return -1;
  }
  return 0;
}

static int test_command_6_skip (void);
static int test_command_6_perform (guestfs_h *);

static int
test_command_6 (guestfs_h *g)
{
  if (test_command_6_skip ()) {
    skipped ("test_command_6", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_6", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_6_perform (g);
}

static int
test_command_6_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_6");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_6_perform (guestfs_h *g)
{
  /* TestResultString for command (6) */
  const char *arg905 = "/command7";
  int ret904;
  ret904 = guestfs_mkdir (g, arg905);
  if (ret904 == -1)
    return -1;
  CLEANUP_FREE char *arg908 = substitute_srcdir ("c-api/test-command");
  const char *arg909 = "/command7/test-command";
  int ret907;
  ret907 = guestfs_upload (g, arg908, arg909);
  if (ret907 == -1)
    return -1;
  const char *arg913 = "/command7/test-command";
  int ret911;
  ret911 = guestfs_chmod (g, 493, arg913);
  if (ret911 == -1)
    return -1;
  const char *arg915_0 = "/command7/test-command";
  const char *arg915_1 = "7";
  const char *const arg915[] = {
    arg915_0,
    arg915_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg915);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_command_6", "command", "", ret);
    return -1;
  }
  return 0;
}

static int test_command_7_skip (void);
static int test_command_7_perform (guestfs_h *);

static int
test_command_7 (guestfs_h *g)
{
  if (test_command_7_skip ()) {
    skipped ("test_command_7", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_7", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_7_perform (g);
}

static int
test_command_7_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_7");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_7_perform (guestfs_h *g)
{
  /* TestResultString for command (7) */
  const char *arg918 = "/command8";
  int ret917;
  ret917 = guestfs_mkdir (g, arg918);
  if (ret917 == -1)
    return -1;
  CLEANUP_FREE char *arg921 = substitute_srcdir ("c-api/test-command");
  const char *arg922 = "/command8/test-command";
  int ret920;
  ret920 = guestfs_upload (g, arg921, arg922);
  if (ret920 == -1)
    return -1;
  const char *arg926 = "/command8/test-command";
  int ret924;
  ret924 = guestfs_chmod (g, 493, arg926);
  if (ret924 == -1)
    return -1;
  const char *arg928_0 = "/command8/test-command";
  const char *arg928_1 = "8";
  const char *const arg928[] = {
    arg928_0,
    arg928_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg928);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_command_7", "command", "\n", ret);
    return -1;
  }
  return 0;
}

static int test_command_8_skip (void);
static int test_command_8_perform (guestfs_h *);

static int
test_command_8 (guestfs_h *g)
{
  if (test_command_8_skip ()) {
    skipped ("test_command_8", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_8", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_8_perform (g);
}

static int
test_command_8_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_8");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_8_perform (guestfs_h *g)
{
  /* TestResultString for command (8) */
  const char *arg931 = "/command9";
  int ret930;
  ret930 = guestfs_mkdir (g, arg931);
  if (ret930 == -1)
    return -1;
  CLEANUP_FREE char *arg934 = substitute_srcdir ("c-api/test-command");
  const char *arg935 = "/command9/test-command";
  int ret933;
  ret933 = guestfs_upload (g, arg934, arg935);
  if (ret933 == -1)
    return -1;
  const char *arg939 = "/command9/test-command";
  int ret937;
  ret937 = guestfs_chmod (g, 493, arg939);
  if (ret937 == -1)
    return -1;
  const char *arg941_0 = "/command9/test-command";
  const char *arg941_1 = "9";
  const char *const arg941[] = {
    arg941_0,
    arg941_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg941);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "\n\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_command_8", "command", "\n\n", ret);
    return -1;
  }
  return 0;
}

static int test_command_9_skip (void);
static int test_command_9_perform (guestfs_h *);

static int
test_command_9 (guestfs_h *g)
{
  if (test_command_9_skip ()) {
    skipped ("test_command_9", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_9", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_9_perform (g);
}

static int
test_command_9_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_9");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_9_perform (guestfs_h *g)
{
  /* TestResultString for command (9) */
  const char *arg944 = "/command10";
  int ret943;
  ret943 = guestfs_mkdir (g, arg944);
  if (ret943 == -1)
    return -1;
  CLEANUP_FREE char *arg947 = substitute_srcdir ("c-api/test-command");
  const char *arg948 = "/command10/test-command";
  int ret946;
  ret946 = guestfs_upload (g, arg947, arg948);
  if (ret946 == -1)
    return -1;
  const char *arg952 = "/command10/test-command";
  int ret950;
  ret950 = guestfs_chmod (g, 493, arg952);
  if (ret950 == -1)
    return -1;
  const char *arg954_0 = "/command10/test-command";
  const char *arg954_1 = "10";
  const char *const arg954[] = {
    arg954_0,
    arg954_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg954);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "Result10-1\nResult10-2\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_command_9", "command", "Result10-1\nResult10-2\n", ret);
    return -1;
  }
  return 0;
}

static int test_command_10_skip (void);
static int test_command_10_perform (guestfs_h *);

static int
test_command_10 (guestfs_h *g)
{
  if (test_command_10_skip ()) {
    skipped ("test_command_10", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_10", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_10_perform (g);
}

static int
test_command_10_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_10");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_10_perform (guestfs_h *g)
{
  /* TestResultString for command (10) */
  const char *arg957 = "/command11";
  int ret956;
  ret956 = guestfs_mkdir (g, arg957);
  if (ret956 == -1)
    return -1;
  CLEANUP_FREE char *arg960 = substitute_srcdir ("c-api/test-command");
  const char *arg961 = "/command11/test-command";
  int ret959;
  ret959 = guestfs_upload (g, arg960, arg961);
  if (ret959 == -1)
    return -1;
  const char *arg965 = "/command11/test-command";
  int ret963;
  ret963 = guestfs_chmod (g, 493, arg965);
  if (ret963 == -1)
    return -1;
  const char *arg967_0 = "/command11/test-command";
  const char *arg967_1 = "11";
  const char *const arg967[] = {
    arg967_0,
    arg967_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg967);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "Result11-1\nResult11-2")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_command_10", "command", "Result11-1\nResult11-2", ret);
    return -1;
  }
  return 0;
}

static int test_command_11_skip (void);
static int test_command_11_perform (guestfs_h *);

static int
test_command_11 (guestfs_h *g)
{
  if (test_command_11_skip ()) {
    skipped ("test_command_11", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_11", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_11_perform (g);
}

static int
test_command_11_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_11");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_11_perform (guestfs_h *g)
{
  /* TestLastFail for command (11) */
  const char *arg970 = "/command12";
  int ret969;
  ret969 = guestfs_mkdir (g, arg970);
  if (ret969 == -1)
    return -1;
  CLEANUP_FREE char *arg973 = substitute_srcdir ("c-api/test-command");
  const char *arg974 = "/command12/test-command";
  int ret972;
  ret972 = guestfs_upload (g, arg973, arg974);
  if (ret972 == -1)
    return -1;
  const char *arg978 = "/command12/test-command";
  int ret976;
  ret976 = guestfs_chmod (g, 493, arg978);
  if (ret976 == -1)
    return -1;
  const char *arg981_0 = "/command12/test-command";
  const char *const arg981[] = {
    arg981_0,
    NULL
  };
  CLEANUP_FREE char *ret980;
  guestfs_push_error_handler (g, NULL, NULL);
  ret980 = guestfs_command (g, (char **) arg981);
  guestfs_pop_error_handler (g);
  if (ret980 != NULL)
    return -1;
  return 0;
}

static int test_command_12_skip (void);
static int test_command_12_perform (guestfs_h *);

static int
test_command_12 (guestfs_h *g)
{
  if (test_command_12_skip ()) {
    skipped ("test_command_12", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_12", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_12_perform (g);
}

static int
test_command_12_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_12");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_12_perform (guestfs_h *g)
{
  /* TestResultString for command (12) */
  const char *arg984 = "/pwd";
  int ret983;
  ret983 = guestfs_mkdir (g, arg984);
  if (ret983 == -1)
    return -1;
  CLEANUP_FREE char *arg987 = substitute_srcdir ("c-api/test-pwd");
  const char *arg988 = "/pwd/test-pwd";
  int ret986;
  ret986 = guestfs_upload (g, arg987, arg988);
  if (ret986 == -1)
    return -1;
  const char *arg992 = "/pwd/test-pwd";
  int ret990;
  ret990 = guestfs_chmod (g, 493, arg992);
  if (ret990 == -1)
    return -1;
  const char *arg994_0 = "/pwd/test-pwd";
  const char *const arg994[] = {
    arg994_0,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg994);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "/")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_command_12", "command", "/", ret);
    return -1;
  }
  return 0;
}

static int test_command_lines_0_skip (void);
static int test_command_lines_0_perform (guestfs_h *);

static int
test_command_lines_0 (guestfs_h *g)
{
  if (test_command_lines_0_skip ()) {
    skipped ("test_command_lines_0", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_lines_0", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_lines_0_perform (g);
}

static int
test_command_lines_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command_lines") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_LINES_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_lines_0_perform (guestfs_h *g)
{
  /* TestResult for command_lines (0) */
  const char *arg996 = "/command_lines";
  int ret3;
  ret3 = guestfs_mkdir (g, arg996);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg998 = substitute_srcdir ("c-api/test-command");
  const char *arg999 = "/command_lines/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg998, arg999);
  if (ret2 == -1)
    return -1;
  const char *arg1002 = "/command_lines/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1002);
  if (ret1 == -1)
    return -1;
  const char *arg1004_0 = "/command_lines/test-command";
  const char *arg1004_1 = "1";
  const char *const arg1004[] = {
    arg1004_0,
    arg1004_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1004);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 1, "Result1"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_command_lines_0", "is_string_list (ret, 1, \"Result1\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_command_lines_1_skip (void);
static int test_command_lines_1_perform (guestfs_h *);

static int
test_command_lines_1 (guestfs_h *g)
{
  if (test_command_lines_1_skip ()) {
    skipped ("test_command_lines_1", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_lines_1", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_lines_1_perform (g);
}

static int
test_command_lines_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command_lines") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_LINES_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_lines_1_perform (guestfs_h *g)
{
  /* TestResult for command_lines (1) */
  const char *arg1006 = "/command_lines2";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1006);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1008 = substitute_srcdir ("c-api/test-command");
  const char *arg1009 = "/command_lines2/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1008, arg1009);
  if (ret2 == -1)
    return -1;
  const char *arg1012 = "/command_lines2/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1012);
  if (ret1 == -1)
    return -1;
  const char *arg1014_0 = "/command_lines2/test-command";
  const char *arg1014_1 = "2";
  const char *const arg1014[] = {
    arg1014_0,
    arg1014_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1014);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 1, "Result2"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_command_lines_1", "is_string_list (ret, 1, \"Result2\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_command_lines_2_skip (void);
static int test_command_lines_2_perform (guestfs_h *);

static int
test_command_lines_2 (guestfs_h *g)
{
  if (test_command_lines_2_skip ()) {
    skipped ("test_command_lines_2", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_lines_2", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_lines_2_perform (g);
}

static int
test_command_lines_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command_lines") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_LINES_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_lines_2_perform (guestfs_h *g)
{
  /* TestResult for command_lines (2) */
  const char *arg1016 = "/command_lines3";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1016);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1018 = substitute_srcdir ("c-api/test-command");
  const char *arg1019 = "/command_lines3/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1018, arg1019);
  if (ret2 == -1)
    return -1;
  const char *arg1022 = "/command_lines3/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1022);
  if (ret1 == -1)
    return -1;
  const char *arg1024_0 = "/command_lines3/test-command";
  const char *arg1024_1 = "3";
  const char *const arg1024[] = {
    arg1024_0,
    arg1024_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1024);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "", "Result3"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_command_lines_2", "is_string_list (ret, 2, \"\", \"Result3\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_command_lines_3_skip (void);
static int test_command_lines_3_perform (guestfs_h *);

static int
test_command_lines_3 (guestfs_h *g)
{
  if (test_command_lines_3_skip ()) {
    skipped ("test_command_lines_3", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_lines_3", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_lines_3_perform (g);
}

static int
test_command_lines_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command_lines") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_LINES_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_lines_3_perform (guestfs_h *g)
{
  /* TestResult for command_lines (3) */
  const char *arg1026 = "/command_lines4";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1026);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1028 = substitute_srcdir ("c-api/test-command");
  const char *arg1029 = "/command_lines4/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1028, arg1029);
  if (ret2 == -1)
    return -1;
  const char *arg1032 = "/command_lines4/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1032);
  if (ret1 == -1)
    return -1;
  const char *arg1034_0 = "/command_lines4/test-command";
  const char *arg1034_1 = "4";
  const char *const arg1034[] = {
    arg1034_0,
    arg1034_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1034);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "", "Result4"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_command_lines_3", "is_string_list (ret, 2, \"\", \"Result4\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_command_lines_4_skip (void);
static int test_command_lines_4_perform (guestfs_h *);

static int
test_command_lines_4 (guestfs_h *g)
{
  if (test_command_lines_4_skip ()) {
    skipped ("test_command_lines_4", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_lines_4", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_lines_4_perform (g);
}

static int
test_command_lines_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command_lines") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_LINES_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_lines_4_perform (guestfs_h *g)
{
  /* TestResult for command_lines (4) */
  const char *arg1036 = "/command_lines5";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1036);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1038 = substitute_srcdir ("c-api/test-command");
  const char *arg1039 = "/command_lines5/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1038, arg1039);
  if (ret2 == -1)
    return -1;
  const char *arg1042 = "/command_lines5/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1042);
  if (ret1 == -1)
    return -1;
  const char *arg1044_0 = "/command_lines5/test-command";
  const char *arg1044_1 = "5";
  const char *const arg1044[] = {
    arg1044_0,
    arg1044_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1044);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "", "Result5", ""))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_command_lines_4", "is_string_list (ret, 3, \"\", \"Result5\", \"\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_command_lines_5_skip (void);
static int test_command_lines_5_perform (guestfs_h *);

static int
test_command_lines_5 (guestfs_h *g)
{
  if (test_command_lines_5_skip ()) {
    skipped ("test_command_lines_5", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_lines_5", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_lines_5_perform (g);
}

static int
test_command_lines_5_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command_lines") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_LINES_5");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_lines_5_perform (guestfs_h *g)
{
  /* TestResult for command_lines (5) */
  const char *arg1046 = "/command_lines6";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1046);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1048 = substitute_srcdir ("c-api/test-command");
  const char *arg1049 = "/command_lines6/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1048, arg1049);
  if (ret2 == -1)
    return -1;
  const char *arg1052 = "/command_lines6/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1052);
  if (ret1 == -1)
    return -1;
  const char *arg1054_0 = "/command_lines6/test-command";
  const char *arg1054_1 = "6";
  const char *const arg1054[] = {
    arg1054_0,
    arg1054_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1054);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 4, "", "", "Result6", ""))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_command_lines_5", "is_string_list (ret, 4, \"\", \"\", \"Result6\", \"\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_command_lines_6_skip (void);
static int test_command_lines_6_perform (guestfs_h *);

static int
test_command_lines_6 (guestfs_h *g)
{
  if (test_command_lines_6_skip ()) {
    skipped ("test_command_lines_6", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_lines_6", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_lines_6_perform (g);
}

static int
test_command_lines_6_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command_lines") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_LINES_6");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_lines_6_perform (guestfs_h *g)
{
  /* TestResult for command_lines (6) */
  const char *arg1056 = "/command_lines7";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1056);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1058 = substitute_srcdir ("c-api/test-command");
  const char *arg1059 = "/command_lines7/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1058, arg1059);
  if (ret2 == -1)
    return -1;
  const char *arg1062 = "/command_lines7/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1062);
  if (ret1 == -1)
    return -1;
  const char *arg1064_0 = "/command_lines7/test-command";
  const char *arg1064_1 = "7";
  const char *const arg1064[] = {
    arg1064_0,
    arg1064_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1064);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_command_lines_6", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_command_lines_7_skip (void);
static int test_command_lines_7_perform (guestfs_h *);

static int
test_command_lines_7 (guestfs_h *g)
{
  if (test_command_lines_7_skip ()) {
    skipped ("test_command_lines_7", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_lines_7", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_lines_7_perform (g);
}

static int
test_command_lines_7_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command_lines") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_LINES_7");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_lines_7_perform (guestfs_h *g)
{
  /* TestResult for command_lines (7) */
  const char *arg1066 = "/command_lines8";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1066);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1068 = substitute_srcdir ("c-api/test-command");
  const char *arg1069 = "/command_lines8/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1068, arg1069);
  if (ret2 == -1)
    return -1;
  const char *arg1072 = "/command_lines8/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1072);
  if (ret1 == -1)
    return -1;
  const char *arg1074_0 = "/command_lines8/test-command";
  const char *arg1074_1 = "8";
  const char *const arg1074[] = {
    arg1074_0,
    arg1074_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1074);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 1, ""))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_command_lines_7", "is_string_list (ret, 1, \"\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_command_lines_8_skip (void);
static int test_command_lines_8_perform (guestfs_h *);

static int
test_command_lines_8 (guestfs_h *g)
{
  if (test_command_lines_8_skip ()) {
    skipped ("test_command_lines_8", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_lines_8", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_lines_8_perform (g);
}

static int
test_command_lines_8_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command_lines") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_LINES_8");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_lines_8_perform (guestfs_h *g)
{
  /* TestResult for command_lines (8) */
  const char *arg1076 = "/command_lines9";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1076);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1078 = substitute_srcdir ("c-api/test-command");
  const char *arg1079 = "/command_lines9/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1078, arg1079);
  if (ret2 == -1)
    return -1;
  const char *arg1082 = "/command_lines9/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1082);
  if (ret1 == -1)
    return -1;
  const char *arg1084_0 = "/command_lines9/test-command";
  const char *arg1084_1 = "9";
  const char *const arg1084[] = {
    arg1084_0,
    arg1084_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1084);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "", ""))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_command_lines_8", "is_string_list (ret, 2, \"\", \"\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_command_lines_9_skip (void);
static int test_command_lines_9_perform (guestfs_h *);

static int
test_command_lines_9 (guestfs_h *g)
{
  if (test_command_lines_9_skip ()) {
    skipped ("test_command_lines_9", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_lines_9", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_lines_9_perform (g);
}

static int
test_command_lines_9_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command_lines") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_LINES_9");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_lines_9_perform (guestfs_h *g)
{
  /* TestResult for command_lines (9) */
  const char *arg1086 = "/command_lines10";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1086);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1088 = substitute_srcdir ("c-api/test-command");
  const char *arg1089 = "/command_lines10/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1088, arg1089);
  if (ret2 == -1)
    return -1;
  const char *arg1092 = "/command_lines10/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1092);
  if (ret1 == -1)
    return -1;
  const char *arg1094_0 = "/command_lines10/test-command";
  const char *arg1094_1 = "10";
  const char *const arg1094[] = {
    arg1094_0,
    arg1094_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1094);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "Result10-1", "Result10-2"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_command_lines_9", "is_string_list (ret, 2, \"Result10-1\", \"Result10-2\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_command_lines_10_skip (void);
static int test_command_lines_10_perform (guestfs_h *);

static int
test_command_lines_10 (guestfs_h *g)
{
  if (test_command_lines_10_skip ()) {
    skipped ("test_command_lines_10", "environment variable set");
    return 0;
  }

  if (using_cross_appliance ()) {
    skipped ("test_command_lines_10", "cannot run when appliance and host are different");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_command_lines_10_perform (g);
}

static int
test_command_lines_10_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "command_lines") == NULL;
  str = getenv ("SKIP_TEST_COMMAND_LINES_10");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COMMAND_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_command_lines_10_perform (guestfs_h *g)
{
  /* TestResult for command_lines (10) */
  const char *arg1096 = "/command_lines11";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1096);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1098 = substitute_srcdir ("c-api/test-command");
  const char *arg1099 = "/command_lines11/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1098, arg1099);
  if (ret2 == -1)
    return -1;
  const char *arg1102 = "/command_lines11/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1102);
  if (ret1 == -1)
    return -1;
  const char *arg1104_0 = "/command_lines11/test-command";
  const char *arg1104_1 = "11";
  const char *const arg1104[] = {
    arg1104_0,
    arg1104_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1104);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "Result11-1", "Result11-2"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_command_lines_10", "is_string_list (ret, 2, \"Result11-1\", \"Result11-2\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_copy_file_to_file_0_skip (void);
static int test_copy_file_to_file_0_perform (guestfs_h *);

static int
test_copy_file_to_file_0 (guestfs_h *g)
{
  if (test_copy_file_to_file_0_skip ()) {
    skipped ("test_copy_file_to_file_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_copy_file_to_file_0_perform (g);
}

static int
test_copy_file_to_file_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "copy_file_to_file") == NULL;
  str = getenv ("SKIP_TEST_COPY_FILE_TO_FILE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COPY_FILE_TO_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_copy_file_to_file_0_perform (guestfs_h *g)
{
  /* TestResult for copy_file_to_file (0) */
  const char *arg1106 = "/copyff";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1106);
  if (ret3 == -1)
    return -1;
  const char *arg1108 = "/copyff/src";
  const char *arg1109 = "hello, world";
  size_t arg1109_size = 12;
  int ret2;
  ret2 = guestfs_write (g, arg1108, arg1109, arg1109_size);
  if (ret2 == -1)
    return -1;
  const char *arg1111 = "/copyff/src";
  const char *arg1112 = "/copyff/dest";
  struct guestfs_copy_file_to_file_argv optargs1113;
  optargs1113.append = 0;
  optargs1113.bitmask = UINT64_C(0x10);
  int ret1;
  ret1 = guestfs_copy_file_to_file_argv (g, arg1111, arg1112, &optargs1113);
  if (ret1 == -1)
    return -1;
  const char *arg1114 = "/copyff/dest";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_read_file (g, arg1114, &size);
  if (ret == NULL)
      return -1;
  if (! (compare_buffers (ret, size, "hello, world", 12) == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_copy_file_to_file_0", "compare_buffers (ret, size, \"hello, world\", 12) == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_copy_file_to_file_1_skip (void);
static int test_copy_file_to_file_1_perform (guestfs_h *);

static int
test_copy_file_to_file_1 (guestfs_h *g)
{
  if (test_copy_file_to_file_1_skip ()) {
    skipped ("test_copy_file_to_file_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_copy_file_to_file_1_perform (g);
}

static int
test_copy_file_to_file_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "copy_file_to_file") == NULL;
  str = getenv ("SKIP_TEST_COPY_FILE_TO_FILE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COPY_FILE_TO_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_copy_file_to_file_1_perform (guestfs_h *g)
{
  /* TestResultTrue for copy_file_to_file (1) */
  const char *arg1117 = "/copyff2";
  int ret1116;
  ret1116 = guestfs_mkdir (g, arg1117);
  if (ret1116 == -1)
    return -1;
  const char *arg1122 = "/copyff2/src";
  int ret1119;
  ret1119 = guestfs_fill (g, 0, 1048576, arg1122);
  if (ret1119 == -1)
    return -1;
  const char *arg1125 = "/copyff2/dest";
  int ret1124;
  ret1124 = guestfs_touch (g, arg1125);
  if (ret1124 == -1)
    return -1;
  const char *arg1128 = "/copyff2/dest";
  int ret1127;
  ret1127 = guestfs_truncate_size (g, arg1128, 1048576);
  if (ret1127 == -1)
    return -1;
  const char *arg1132 = "/copyff2/src";
  const char *arg1133 = "/copyff2/dest";
  struct guestfs_copy_file_to_file_argv optargs1134;
  optargs1134.sparse = 1;
  optargs1134.append = 0;
  optargs1134.bitmask = UINT64_C(0x18);
  int ret1131;
  ret1131 = guestfs_copy_file_to_file_argv (g, arg1132, arg1133, &optargs1134);
  if (ret1131 == -1)
    return -1;
  const char *arg1135 = "/copyff2/dest";
  int ret;
  ret = guestfs_is_zero (g, arg1135);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_copy_file_to_file_1", "is_zero");
    return -1;
  }
  return 0;
}

static int test_copy_file_to_file_2_skip (void);
static int test_copy_file_to_file_2_perform (guestfs_h *);

static int
test_copy_file_to_file_2 (guestfs_h *g)
{
  if (test_copy_file_to_file_2_skip ()) {
    skipped ("test_copy_file_to_file_2", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_copy_file_to_file_2_perform (g);
}

static int
test_copy_file_to_file_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "copy_file_to_file") == NULL;
  str = getenv ("SKIP_TEST_COPY_FILE_TO_FILE_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COPY_FILE_TO_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_copy_file_to_file_2_perform (guestfs_h *g)
{
  /* TestResult for copy_file_to_file (2) */
  const char *arg1137 = "/copyff3";
  int ret5;
  ret5 = guestfs_mkdir (g, arg1137);
  if (ret5 == -1)
    return -1;
  const char *arg1139 = "/copyff3/src";
  const char *arg1140 = "hello, world";
  size_t arg1140_size = 12;
  int ret4;
  ret4 = guestfs_write (g, arg1139, arg1140, arg1140_size);
  if (ret4 == -1)
    return -1;
  const char *arg1142 = "/copyff3/src";
  const char *arg1143 = "/copyff3/dest";
  struct guestfs_copy_file_to_file_argv optargs1144;
  optargs1144.append = 1;
  optargs1144.bitmask = UINT64_C(0x10);
  int ret3;
  ret3 = guestfs_copy_file_to_file_argv (g, arg1142, arg1143, &optargs1144);
  if (ret3 == -1)
    return -1;
  const char *arg1145 = "/copyff3/src";
  const char *arg1146 = "/copyff3/dest";
  struct guestfs_copy_file_to_file_argv optargs1147;
  optargs1147.append = 1;
  optargs1147.bitmask = UINT64_C(0x10);
  int ret2;
  ret2 = guestfs_copy_file_to_file_argv (g, arg1145, arg1146, &optargs1147);
  if (ret2 == -1)
    return -1;
  const char *arg1148 = "/copyff3/src";
  const char *arg1149 = "/copyff3/dest";
  struct guestfs_copy_file_to_file_argv optargs1150;
  optargs1150.append = 1;
  optargs1150.bitmask = UINT64_C(0x10);
  int ret1;
  ret1 = guestfs_copy_file_to_file_argv (g, arg1148, arg1149, &optargs1150);
  if (ret1 == -1)
    return -1;
  const char *arg1151 = "/copyff3/dest";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_read_file (g, arg1151, &size);
  if (ret == NULL)
      return -1;
  if (! (compare_buffers (ret, size, "hello, worldhello, worldhello, world", 12*3) == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_copy_file_to_file_2", "compare_buffers (ret, size, \"hello, worldhello, worldhello, world\", 12*3) == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_copy_size_0_skip (void);
static int test_copy_size_0_perform (guestfs_h *);

static int
test_copy_size_0 (guestfs_h *g)
{
  if (test_copy_size_0_skip ()) {
    skipped ("test_copy_size_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_copy_size_0_perform (g);
}

static int
test_copy_size_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "copy_size") == NULL;
  str = getenv ("SKIP_TEST_COPY_SIZE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_COPY_SIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_copy_size_0_perform (guestfs_h *g)
{
  /* TestResult for copy_size (0) */
  const char *arg1153 = "/copy_size";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1153);
  if (ret3 == -1)
    return -1;
  const char *arg1155 = "/copy_size/src";
  const char *arg1156 = "hello, world";
  size_t arg1156_size = 12;
  int ret2;
  ret2 = guestfs_write (g, arg1155, arg1156, arg1156_size);
  if (ret2 == -1)
    return -1;
  const char *arg1158 = "/copy_size/src";
  const char *arg1159 = "/copy_size/dest";
  int ret1;
  ret1 = guestfs_copy_size (g, arg1158, arg1159, 5);
  if (ret1 == -1)
    return -1;
  const char *arg1162 = "/copy_size/dest";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_read_file (g, arg1162, &size);
  if (ret == NULL)
      return -1;
  if (! (compare_buffers (ret, size, "hello", 5) == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_copy_size_0", "compare_buffers (ret, size, \"hello\", 5) == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_cp_0_skip (void);
static int test_cp_0_perform (guestfs_h *);

static int
test_cp_0 (guestfs_h *g)
{
  if (test_cp_0_skip ()) {
    skipped ("test_cp_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_cp_0_perform (g);
}

static int
test_cp_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "cp") == NULL;
  str = getenv ("SKIP_TEST_CP_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_cp_0_perform (guestfs_h *g)
{
  /* TestResultString for cp (0) */
  const char *arg1165 = "/cp";
  int ret1164;
  ret1164 = guestfs_mkdir (g, arg1165);
  if (ret1164 == -1)
    return -1;
  const char *arg1168 = "/cp/old";
  const char *arg1169 = "file content";
  size_t arg1169_size = 12;
  int ret1167;
  ret1167 = guestfs_write (g, arg1168, arg1169, arg1169_size);
  if (ret1167 == -1)
    return -1;
  const char *arg1172 = "/cp/old";
  const char *arg1173 = "/cp/new";
  int ret1171;
  ret1171 = guestfs_cp (g, arg1172, arg1173);
  if (ret1171 == -1)
    return -1;
  const char *arg1175 = "/cp/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1175);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "file content")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_cp_0", "cat", "file content", ret);
    return -1;
  }
  return 0;
}

static int test_cp_1_skip (void);
static int test_cp_1_perform (guestfs_h *);

static int
test_cp_1 (guestfs_h *g)
{
  if (test_cp_1_skip ()) {
    skipped ("test_cp_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_cp_1_perform (g);
}

static int
test_cp_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "cp") == NULL;
  str = getenv ("SKIP_TEST_CP_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_cp_1_perform (guestfs_h *g)
{
  /* TestResultTrue for cp (1) */
  const char *arg1178 = "/cp2";
  int ret1177;
  ret1177 = guestfs_mkdir (g, arg1178);
  if (ret1177 == -1)
    return -1;
  const char *arg1181 = "/cp2/old";
  const char *arg1182 = "file content";
  size_t arg1182_size = 12;
  int ret1180;
  ret1180 = guestfs_write (g, arg1181, arg1182, arg1182_size);
  if (ret1180 == -1)
    return -1;
  const char *arg1185 = "/cp2/old";
  const char *arg1186 = "/cp2/new";
  int ret1184;
  ret1184 = guestfs_cp (g, arg1185, arg1186);
  if (ret1184 == -1)
    return -1;
  const char *arg1188 = "/cp2/old";
  struct guestfs_is_file_opts_argv optargs1189;
  optargs1189.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg1188, &optargs1189);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_cp_1", "is_file");
    return -1;
  }
  return 0;
}

static int test_cp_2_skip (void);
static int test_cp_2_perform (guestfs_h *);

static int
test_cp_2 (guestfs_h *g)
{
  if (test_cp_2_skip ()) {
    skipped ("test_cp_2", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_cp_2_perform (g);
}

static int
test_cp_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "cp") == NULL;
  str = getenv ("SKIP_TEST_CP_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_cp_2_perform (guestfs_h *g)
{
  /* TestResultString for cp (2) */
  const char *arg1191 = "/cp3";
  int ret1190;
  ret1190 = guestfs_mkdir (g, arg1191);
  if (ret1190 == -1)
    return -1;
  const char *arg1194 = "/cp3/old";
  const char *arg1195 = "file content";
  size_t arg1195_size = 12;
  int ret1193;
  ret1193 = guestfs_write (g, arg1194, arg1195, arg1195_size);
  if (ret1193 == -1)
    return -1;
  const char *arg1198 = "/cp3/dir";
  int ret1197;
  ret1197 = guestfs_mkdir (g, arg1198);
  if (ret1197 == -1)
    return -1;
  const char *arg1201 = "/cp3/old";
  const char *arg1202 = "/cp3/dir/new";
  int ret1200;
  ret1200 = guestfs_cp (g, arg1201, arg1202);
  if (ret1200 == -1)
    return -1;
  const char *arg1204 = "/cp3/dir/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1204);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "file content")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_cp_2", "cat", "file content", ret);
    return -1;
  }
  return 0;
}

static int test_cp_a_0_skip (void);
static int test_cp_a_0_perform (guestfs_h *);

static int
test_cp_a_0 (guestfs_h *g)
{
  if (test_cp_a_0_skip ()) {
    skipped ("test_cp_a_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_cp_a_0_perform (g);
}

static int
test_cp_a_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "cp_a") == NULL;
  str = getenv ("SKIP_TEST_CP_A_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CP_A");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_cp_a_0_perform (guestfs_h *g)
{
  /* TestResultString for cp_a (0) */
  const char *arg1207 = "/cp_a1";
  int ret1206;
  ret1206 = guestfs_mkdir (g, arg1207);
  if (ret1206 == -1)
    return -1;
  const char *arg1210 = "/cp_a2";
  int ret1209;
  ret1209 = guestfs_mkdir (g, arg1210);
  if (ret1209 == -1)
    return -1;
  const char *arg1213 = "/cp_a1/file";
  const char *arg1214 = "file content";
  size_t arg1214_size = 12;
  int ret1212;
  ret1212 = guestfs_write (g, arg1213, arg1214, arg1214_size);
  if (ret1212 == -1)
    return -1;
  const char *arg1217 = "/cp_a1";
  const char *arg1218 = "/cp_a2";
  int ret1216;
  ret1216 = guestfs_cp_a (g, arg1217, arg1218);
  if (ret1216 == -1)
    return -1;
  const char *arg1220 = "/cp_a2/cp_a1/file";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1220);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "file content")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_cp_a_0", "cat", "file content", ret);
    return -1;
  }
  return 0;
}

static int test_cp_r_0_skip (void);
static int test_cp_r_0_perform (guestfs_h *);

static int
test_cp_r_0 (guestfs_h *g)
{
  if (test_cp_r_0_skip ()) {
    skipped ("test_cp_r_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_cp_r_0_perform (g);
}

static int
test_cp_r_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "cp_r") == NULL;
  str = getenv ("SKIP_TEST_CP_R_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_CP_R");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_cp_r_0_perform (guestfs_h *g)
{
  /* TestResultString for cp_r (0) */
  const char *arg1223 = "/cp_r1";
  int ret1222;
  ret1222 = guestfs_mkdir (g, arg1223);
  if (ret1222 == -1)
    return -1;
  const char *arg1226 = "/cp_r2";
  int ret1225;
  ret1225 = guestfs_mkdir (g, arg1226);
  if (ret1225 == -1)
    return -1;
  const char *arg1229 = "/cp_r1/file";
  const char *arg1230 = "file content";
  size_t arg1230_size = 12;
  int ret1228;
  ret1228 = guestfs_write (g, arg1229, arg1230, arg1230_size);
  if (ret1228 == -1)
    return -1;
  const char *arg1233 = "/cp_r1";
  const char *arg1234 = "/cp_r2";
  int ret1232;
  ret1232 = guestfs_cp_r (g, arg1233, arg1234);
  if (ret1232 == -1)
    return -1;
  const char *arg1236 = "/cp_r2/cp_r1/file";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1236);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "file content")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_cp_r_0", "cat", "file content", ret);
    return -1;
  }
  return 0;
}

static int test_dd_0_skip (void);
static int test_dd_0_perform (guestfs_h *);

static int
test_dd_0 (guestfs_h *g)
{
  if (test_dd_0_skip ()) {
    skipped ("test_dd_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_dd_0_perform (g);
}

static int
test_dd_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "dd") == NULL;
  str = getenv ("SKIP_TEST_DD_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DD");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_dd_0_perform (guestfs_h *g)
{
  /* TestResult for dd (0) */
  const char *arg1238 = "/dd";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1238);
  if (ret3 == -1)
    return -1;
  const char *arg1240 = "/dd/src";
  const char *arg1241 = "hello, world";
  size_t arg1241_size = 12;
  int ret2;
  ret2 = guestfs_write (g, arg1240, arg1241, arg1241_size);
  if (ret2 == -1)
    return -1;
  const char *arg1243 = "/dd/src";
  const char *arg1244 = "/dd/dest";
  int ret1;
  ret1 = guestfs_dd (g, arg1243, arg1244);
  if (ret1 == -1)
    return -1;
  const char *arg1246 = "/dd/dest";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_read_file (g, arg1246, &size);
  if (ret == NULL)
      return -1;
  if (! (compare_buffers (ret, size, "hello, world", 12) == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_dd_0", "compare_buffers (ret, size, \"hello, world\", 12) == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_device_index_0_skip (void);
static int test_device_index_0_perform (guestfs_h *);

static int
test_device_index_0 (guestfs_h *g)
{
  if (test_device_index_0_skip ()) {
    skipped ("test_device_index_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_device_index_0_perform (g);
}

static int
test_device_index_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "device_index") == NULL;
  str = getenv ("SKIP_TEST_DEVICE_INDEX_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DEVICE_INDEX");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_device_index_0_perform (guestfs_h *g)
{
  /* TestResult for device_index (0) */
  const char *arg1248 = "/dev/sda";
  int ret;
  ret = guestfs_device_index (g, arg1248);
  if (ret == -1)
    return -1;
  if (! (ret == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_device_index_0", "ret == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_device_name_0_skip (void);
static int test_device_name_0_perform (guestfs_h *);

static int
test_device_name_0 (guestfs_h *g)
{
  if (test_device_name_0_skip ()) {
    skipped ("test_device_name_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_device_name_0_perform (g);
}

static int
test_device_name_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "device_name") == NULL;
  str = getenv ("SKIP_TEST_DEVICE_NAME_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DEVICE_NAME");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_device_name_0_perform (guestfs_h *g)
{
  /* TestResult for device_name (0) */
  CLEANUP_FREE char *ret;
  ret = guestfs_device_name (g, 0);
  if (ret == NULL)
      return -1;
  if (! (STREQ (ret, "/dev/sda"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_device_name_0", "STREQ (ret, \"/dev/sda\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_device_name_1_skip (void);
static int test_device_name_1_perform (guestfs_h *);

static int
test_device_name_1 (guestfs_h *g)
{
  if (test_device_name_1_skip ()) {
    skipped ("test_device_name_1", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_device_name_1_perform (g);
}

static int
test_device_name_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "device_name") == NULL;
  str = getenv ("SKIP_TEST_DEVICE_NAME_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DEVICE_NAME");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_device_name_1_perform (guestfs_h *g)
{
  /* TestResult for device_name (1) */
  CLEANUP_FREE char *ret;
  ret = guestfs_device_name (g, 1);
  if (ret == NULL)
      return -1;
  if (! (STREQ (ret, "/dev/sdb"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_device_name_1", "STREQ (ret, \"/dev/sdb\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_device_name_2_skip (void);
static int test_device_name_2_perform (guestfs_h *);

static int
test_device_name_2 (guestfs_h *g)
{
  if (test_device_name_2_skip ()) {
    skipped ("test_device_name_2", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_device_name_2_perform (g);
}

static int
test_device_name_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "device_name") == NULL;
  str = getenv ("SKIP_TEST_DEVICE_NAME_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DEVICE_NAME");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_device_name_2_perform (guestfs_h *g)
{
  /* TestLastFail for device_name (2) */
  CLEANUP_FREE char *ret1254;
  guestfs_push_error_handler (g, NULL, NULL);
  ret1254 = guestfs_device_name (g, 99);
  guestfs_pop_error_handler (g);
  if (ret1254 != NULL)
    return -1;
  return 0;
}

static int test_disk_format_0_skip (void);
static int test_disk_format_0_perform (guestfs_h *);

static int
test_disk_format_0 (guestfs_h *g)
{
  if (test_disk_format_0_skip ()) {
    skipped ("test_disk_format_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_format_0_perform (g);
}

static int
test_disk_format_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_format") == NULL;
  str = getenv ("SKIP_TEST_DISK_FORMAT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_FORMAT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_format_0_perform (guestfs_h *g)
{
  /* TestResultString for disk_format (0) */
  const char *arg1257 = "../test-data/blank-disks/blank-disk-1s.raw";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1257);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "raw")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_disk_format_0", "disk_format", "raw", ret);
    return -1;
  }
  return 0;
}

static int test_disk_format_1_skip (void);
static int test_disk_format_1_perform (guestfs_h *);

static int
test_disk_format_1 (guestfs_h *g)
{
  if (test_disk_format_1_skip ()) {
    skipped ("test_disk_format_1", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_format_1_perform (g);
}

static int
test_disk_format_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_format") == NULL;
  str = getenv ("SKIP_TEST_DISK_FORMAT_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_FORMAT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_format_1_perform (guestfs_h *g)
{
  /* TestResultString for disk_format (1) */
  const char *arg1259 = "../test-data/blank-disks/blank-disk-1s.qcow2";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1259);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "qcow2")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_disk_format_1", "disk_format", "qcow2", ret);
    return -1;
  }
  return 0;
}

static int test_disk_format_2_skip (void);
static int test_disk_format_2_perform (guestfs_h *);

static int
test_disk_format_2 (guestfs_h *g)
{
  if (test_disk_format_2_skip ()) {
    skipped ("test_disk_format_2", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_format_2_perform (g);
}

static int
test_disk_format_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_format") == NULL;
  str = getenv ("SKIP_TEST_DISK_FORMAT_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_FORMAT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_format_2_perform (guestfs_h *g)
{
  /* TestResultString for disk_format (2) */
  const char *arg1261 = "../test-data/blank-disks/blank-disk-1K.raw";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1261);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "raw")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_disk_format_2", "disk_format", "raw", ret);
    return -1;
  }
  return 0;
}

static int test_disk_format_3_skip (void);
static int test_disk_format_3_perform (guestfs_h *);

static int
test_disk_format_3 (guestfs_h *g)
{
  if (test_disk_format_3_skip ()) {
    skipped ("test_disk_format_3", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_format_3_perform (g);
}

static int
test_disk_format_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_format") == NULL;
  str = getenv ("SKIP_TEST_DISK_FORMAT_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_FORMAT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_format_3_perform (guestfs_h *g)
{
  /* TestResultString for disk_format (3) */
  const char *arg1263 = "../test-data/blank-disks/blank-disk-1K.qcow2";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1263);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "qcow2")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_disk_format_3", "disk_format", "qcow2", ret);
    return -1;
  }
  return 0;
}

static int test_disk_format_4_skip (void);
static int test_disk_format_4_perform (guestfs_h *);

static int
test_disk_format_4 (guestfs_h *g)
{
  if (test_disk_format_4_skip ()) {
    skipped ("test_disk_format_4", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_format_4_perform (g);
}

static int
test_disk_format_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_format") == NULL;
  str = getenv ("SKIP_TEST_DISK_FORMAT_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_FORMAT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_format_4_perform (guestfs_h *g)
{
  /* TestResultString for disk_format (4) */
  const char *arg1265 = "../test-data/blank-disks/blank-disk-1M.raw";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1265);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "raw")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_disk_format_4", "disk_format", "raw", ret);
    return -1;
  }
  return 0;
}

static int test_disk_format_5_skip (void);
static int test_disk_format_5_perform (guestfs_h *);

static int
test_disk_format_5 (guestfs_h *g)
{
  if (test_disk_format_5_skip ()) {
    skipped ("test_disk_format_5", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_format_5_perform (g);
}

static int
test_disk_format_5_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_format") == NULL;
  str = getenv ("SKIP_TEST_DISK_FORMAT_5");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_FORMAT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_format_5_perform (guestfs_h *g)
{
  /* TestResultString for disk_format (5) */
  const char *arg1267 = "../test-data/blank-disks/blank-disk-1M.qcow2";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1267);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "qcow2")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_disk_format_5", "disk_format", "qcow2", ret);
    return -1;
  }
  return 0;
}

static int test_disk_format_6_skip (void);
static int test_disk_format_6_perform (guestfs_h *);

static int
test_disk_format_6 (guestfs_h *g)
{
  if (test_disk_format_6_skip ()) {
    skipped ("test_disk_format_6", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_format_6_perform (g);
}

static int
test_disk_format_6_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_format") == NULL;
  str = getenv ("SKIP_TEST_DISK_FORMAT_6");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_FORMAT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_format_6_perform (guestfs_h *g)
{
  /* TestResultString for disk_format (6) */
  const char *arg1269 = "../test-data/blank-disks/blank-disk-with-backing.qcow2";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1269);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "qcow2")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_disk_format_6", "disk_format", "qcow2", ret);
    return -1;
  }
  return 0;
}

static int test_disk_has_backing_file_0_skip (void);
static int test_disk_has_backing_file_0_perform (guestfs_h *);

static int
test_disk_has_backing_file_0 (guestfs_h *g)
{
  if (test_disk_has_backing_file_0_skip ()) {
    skipped ("test_disk_has_backing_file_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_has_backing_file_0_perform (g);
}

static int
test_disk_has_backing_file_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_has_backing_file") == NULL;
  str = getenv ("SKIP_TEST_DISK_HAS_BACKING_FILE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_HAS_BACKING_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_has_backing_file_0_perform (guestfs_h *g)
{
  /* TestResultFalse for disk_has_backing_file (0) */
  const char *arg1271 = "../test-data/blank-disks/blank-disk-1s.raw";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1271);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_disk_has_backing_file_0", "disk_has_backing_file");
    return -1;
  }
  return 0;
}

static int test_disk_has_backing_file_1_skip (void);
static int test_disk_has_backing_file_1_perform (guestfs_h *);

static int
test_disk_has_backing_file_1 (guestfs_h *g)
{
  if (test_disk_has_backing_file_1_skip ()) {
    skipped ("test_disk_has_backing_file_1", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_has_backing_file_1_perform (g);
}

static int
test_disk_has_backing_file_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_has_backing_file") == NULL;
  str = getenv ("SKIP_TEST_DISK_HAS_BACKING_FILE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_HAS_BACKING_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_has_backing_file_1_perform (guestfs_h *g)
{
  /* TestResultFalse for disk_has_backing_file (1) */
  const char *arg1273 = "../test-data/blank-disks/blank-disk-1s.qcow2";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1273);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_disk_has_backing_file_1", "disk_has_backing_file");
    return -1;
  }
  return 0;
}

static int test_disk_has_backing_file_2_skip (void);
static int test_disk_has_backing_file_2_perform (guestfs_h *);

static int
test_disk_has_backing_file_2 (guestfs_h *g)
{
  if (test_disk_has_backing_file_2_skip ()) {
    skipped ("test_disk_has_backing_file_2", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_has_backing_file_2_perform (g);
}

static int
test_disk_has_backing_file_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_has_backing_file") == NULL;
  str = getenv ("SKIP_TEST_DISK_HAS_BACKING_FILE_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_HAS_BACKING_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_has_backing_file_2_perform (guestfs_h *g)
{
  /* TestResultFalse for disk_has_backing_file (2) */
  const char *arg1275 = "../test-data/blank-disks/blank-disk-1K.raw";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1275);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_disk_has_backing_file_2", "disk_has_backing_file");
    return -1;
  }
  return 0;
}

static int test_disk_has_backing_file_3_skip (void);
static int test_disk_has_backing_file_3_perform (guestfs_h *);

static int
test_disk_has_backing_file_3 (guestfs_h *g)
{
  if (test_disk_has_backing_file_3_skip ()) {
    skipped ("test_disk_has_backing_file_3", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_has_backing_file_3_perform (g);
}

static int
test_disk_has_backing_file_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_has_backing_file") == NULL;
  str = getenv ("SKIP_TEST_DISK_HAS_BACKING_FILE_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_HAS_BACKING_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_has_backing_file_3_perform (guestfs_h *g)
{
  /* TestResultFalse for disk_has_backing_file (3) */
  const char *arg1277 = "../test-data/blank-disks/blank-disk-1K.qcow2";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1277);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_disk_has_backing_file_3", "disk_has_backing_file");
    return -1;
  }
  return 0;
}

static int test_disk_has_backing_file_4_skip (void);
static int test_disk_has_backing_file_4_perform (guestfs_h *);

static int
test_disk_has_backing_file_4 (guestfs_h *g)
{
  if (test_disk_has_backing_file_4_skip ()) {
    skipped ("test_disk_has_backing_file_4", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_has_backing_file_4_perform (g);
}

static int
test_disk_has_backing_file_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_has_backing_file") == NULL;
  str = getenv ("SKIP_TEST_DISK_HAS_BACKING_FILE_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_HAS_BACKING_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_has_backing_file_4_perform (guestfs_h *g)
{
  /* TestResultFalse for disk_has_backing_file (4) */
  const char *arg1279 = "../test-data/blank-disks/blank-disk-1M.raw";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1279);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_disk_has_backing_file_4", "disk_has_backing_file");
    return -1;
  }
  return 0;
}

static int test_disk_has_backing_file_5_skip (void);
static int test_disk_has_backing_file_5_perform (guestfs_h *);

static int
test_disk_has_backing_file_5 (guestfs_h *g)
{
  if (test_disk_has_backing_file_5_skip ()) {
    skipped ("test_disk_has_backing_file_5", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_has_backing_file_5_perform (g);
}

static int
test_disk_has_backing_file_5_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_has_backing_file") == NULL;
  str = getenv ("SKIP_TEST_DISK_HAS_BACKING_FILE_5");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_HAS_BACKING_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_has_backing_file_5_perform (guestfs_h *g)
{
  /* TestResultFalse for disk_has_backing_file (5) */
  const char *arg1281 = "../test-data/blank-disks/blank-disk-1M.qcow2";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1281);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_disk_has_backing_file_5", "disk_has_backing_file");
    return -1;
  }
  return 0;
}

static int test_disk_has_backing_file_6_skip (void);
static int test_disk_has_backing_file_6_perform (guestfs_h *);

static int
test_disk_has_backing_file_6 (guestfs_h *g)
{
  if (test_disk_has_backing_file_6_skip ()) {
    skipped ("test_disk_has_backing_file_6", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_has_backing_file_6_perform (g);
}

static int
test_disk_has_backing_file_6_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_has_backing_file") == NULL;
  str = getenv ("SKIP_TEST_DISK_HAS_BACKING_FILE_6");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_HAS_BACKING_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_has_backing_file_6_perform (guestfs_h *g)
{
  /* TestResultTrue for disk_has_backing_file (6) */
  const char *arg1283 = "../test-data/blank-disks/blank-disk-with-backing.qcow2";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1283);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_disk_has_backing_file_6", "disk_has_backing_file");
    return -1;
  }
  return 0;
}

static int test_disk_virtual_size_0_skip (void);
static int test_disk_virtual_size_0_perform (guestfs_h *);

static int
test_disk_virtual_size_0 (guestfs_h *g)
{
  if (test_disk_virtual_size_0_skip ()) {
    skipped ("test_disk_virtual_size_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_virtual_size_0_perform (g);
}

static int
test_disk_virtual_size_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_virtual_size") == NULL;
  str = getenv ("SKIP_TEST_DISK_VIRTUAL_SIZE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_VIRTUAL_SIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_virtual_size_0_perform (guestfs_h *g)
{
  /* TestResult for disk_virtual_size (0) */
  const char *arg1285 = "../test-data/blank-disks/blank-disk-1s.raw";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1285);
  if (ret == -1)
    return -1;
  if (! (ret == 512)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_disk_virtual_size_0", "ret == 512");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_disk_virtual_size_1_skip (void);
static int test_disk_virtual_size_1_perform (guestfs_h *);

static int
test_disk_virtual_size_1 (guestfs_h *g)
{
  if (test_disk_virtual_size_1_skip ()) {
    skipped ("test_disk_virtual_size_1", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_virtual_size_1_perform (g);
}

static int
test_disk_virtual_size_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_virtual_size") == NULL;
  str = getenv ("SKIP_TEST_DISK_VIRTUAL_SIZE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_VIRTUAL_SIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_virtual_size_1_perform (guestfs_h *g)
{
  /* TestResult for disk_virtual_size (1) */
  const char *arg1287 = "../test-data/blank-disks/blank-disk-1s.qcow2";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1287);
  if (ret == -1)
    return -1;
  if (! (ret == 512)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_disk_virtual_size_1", "ret == 512");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_disk_virtual_size_2_skip (void);
static int test_disk_virtual_size_2_perform (guestfs_h *);

static int
test_disk_virtual_size_2 (guestfs_h *g)
{
  if (test_disk_virtual_size_2_skip ()) {
    skipped ("test_disk_virtual_size_2", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_virtual_size_2_perform (g);
}

static int
test_disk_virtual_size_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_virtual_size") == NULL;
  str = getenv ("SKIP_TEST_DISK_VIRTUAL_SIZE_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_VIRTUAL_SIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_virtual_size_2_perform (guestfs_h *g)
{
  /* TestResult for disk_virtual_size (2) */
  const char *arg1289 = "../test-data/blank-disks/blank-disk-1K.raw";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1289);
  if (ret == -1)
    return -1;
  if (! (ret == 1024)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_disk_virtual_size_2", "ret == 1024");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_disk_virtual_size_3_skip (void);
static int test_disk_virtual_size_3_perform (guestfs_h *);

static int
test_disk_virtual_size_3 (guestfs_h *g)
{
  if (test_disk_virtual_size_3_skip ()) {
    skipped ("test_disk_virtual_size_3", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_virtual_size_3_perform (g);
}

static int
test_disk_virtual_size_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_virtual_size") == NULL;
  str = getenv ("SKIP_TEST_DISK_VIRTUAL_SIZE_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_VIRTUAL_SIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_virtual_size_3_perform (guestfs_h *g)
{
  /* TestResult for disk_virtual_size (3) */
  const char *arg1291 = "../test-data/blank-disks/blank-disk-1K.qcow2";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1291);
  if (ret == -1)
    return -1;
  if (! (ret == 1024)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_disk_virtual_size_3", "ret == 1024");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_disk_virtual_size_4_skip (void);
static int test_disk_virtual_size_4_perform (guestfs_h *);

static int
test_disk_virtual_size_4 (guestfs_h *g)
{
  if (test_disk_virtual_size_4_skip ()) {
    skipped ("test_disk_virtual_size_4", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_virtual_size_4_perform (g);
}

static int
test_disk_virtual_size_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_virtual_size") == NULL;
  str = getenv ("SKIP_TEST_DISK_VIRTUAL_SIZE_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_VIRTUAL_SIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_virtual_size_4_perform (guestfs_h *g)
{
  /* TestResult for disk_virtual_size (4) */
  const char *arg1293 = "../test-data/blank-disks/blank-disk-1M.raw";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1293);
  if (ret == -1)
    return -1;
  if (! (ret == 1024*1024)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_disk_virtual_size_4", "ret == 1024*1024");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_disk_virtual_size_5_skip (void);
static int test_disk_virtual_size_5_perform (guestfs_h *);

static int
test_disk_virtual_size_5 (guestfs_h *g)
{
  if (test_disk_virtual_size_5_skip ()) {
    skipped ("test_disk_virtual_size_5", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_virtual_size_5_perform (g);
}

static int
test_disk_virtual_size_5_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_virtual_size") == NULL;
  str = getenv ("SKIP_TEST_DISK_VIRTUAL_SIZE_5");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_VIRTUAL_SIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_virtual_size_5_perform (guestfs_h *g)
{
  /* TestResult for disk_virtual_size (5) */
  const char *arg1295 = "../test-data/blank-disks/blank-disk-1M.qcow2";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1295);
  if (ret == -1)
    return -1;
  if (! (ret == 1024*1024)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_disk_virtual_size_5", "ret == 1024*1024");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_disk_virtual_size_6_skip (void);
static int test_disk_virtual_size_6_perform (guestfs_h *);

static int
test_disk_virtual_size_6 (guestfs_h *g)
{
  if (test_disk_virtual_size_6_skip ()) {
    skipped ("test_disk_virtual_size_6", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_disk_virtual_size_6_perform (g);
}

static int
test_disk_virtual_size_6_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "disk_virtual_size") == NULL;
  str = getenv ("SKIP_TEST_DISK_VIRTUAL_SIZE_6");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DISK_VIRTUAL_SIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_disk_virtual_size_6_perform (guestfs_h *g)
{
  /* TestResult for disk_virtual_size (6) */
  const char *arg1297 = "../test-data/blank-disks/blank-disk-with-backing.qcow2";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1297);
  if (ret == -1)
    return -1;
  if (! (ret == 1024*1024)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_disk_virtual_size_6", "ret == 1024*1024");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_dmesg_0_skip (void);
static int test_dmesg_0_perform (guestfs_h *);

static int
test_dmesg_0 (guestfs_h *g)
{
  if (test_dmesg_0_skip ()) {
    skipped ("test_dmesg_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_dmesg_0_perform (g);
}

static int
test_dmesg_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "dmesg") == NULL;
  str = getenv ("SKIP_TEST_DMESG_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DMESG");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_dmesg_0_perform (guestfs_h *g)
{
  /* TestRun for dmesg (0) */
  CLEANUP_FREE char *ret1299;
  ret1299 = guestfs_dmesg (g);
  if (ret1299 == NULL)
      return -1;
  return 0;
}

static int test_download_0_skip (void);
static int test_download_0_perform (guestfs_h *);

static int
test_download_0 (guestfs_h *g)
{
  if (test_download_0_skip ()) {
    skipped ("test_download_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_download_0_perform (g);
}

static int
test_download_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "download") == NULL;
  str = getenv ("SKIP_TEST_DOWNLOAD_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DOWNLOAD");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_download_0_perform (guestfs_h *g)
{
  /* TestResultString for download (0) */
  const char *arg1302 = "/download";
  int ret1301;
  ret1301 = guestfs_mkdir (g, arg1302);
  if (ret1301 == -1)
    return -1;
  CLEANUP_FREE char *arg1305 = substitute_srcdir ("$srcdir/../COPYING.LIB");
  const char *arg1306 = "/download/COPYING.LIB";
  int ret1304;
  ret1304 = guestfs_upload (g, arg1305, arg1306);
  if (ret1304 == -1)
    return -1;
  const char *arg1309 = "/download/COPYING.LIB";
  int ret1308;
  ret1308 = guestfs_download (g, arg1309, "testdownload.tmp");
  if (ret1308 == -1)
    return -1;
  CLEANUP_FREE char *arg1313 = substitute_srcdir ("testdownload.tmp");
  const char *arg1314 = "/download/upload";
  int ret1312;
  ret1312 = guestfs_upload (g, arg1313, arg1314);
  if (ret1312 == -1)
    return -1;
  const char *arg1316 = "md5";
  const char *arg1317 = "/download/upload";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg1316, arg1317);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "4fbd65380cdd255951079008b364516c")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_download_0", "checksum", "4fbd65380cdd255951079008b364516c", ret);
    return -1;
  }
  return 0;
}

static int test_download_offset_0_skip (void);
static int test_download_offset_0_perform (guestfs_h *);

static int
test_download_offset_0 (guestfs_h *g)
{
  if (test_download_offset_0_skip ()) {
    skipped ("test_download_offset_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_download_offset_0_perform (g);
}

static int
test_download_offset_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "download_offset") == NULL;
  str = getenv ("SKIP_TEST_DOWNLOAD_OFFSET_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DOWNLOAD_OFFSET");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_download_offset_0_perform (guestfs_h *g)
{
  /* TestResultString for download_offset (0) */
  const char *arg1320 = "/download_offset";
  int ret1319;
  ret1319 = guestfs_mkdir (g, arg1320);
  if (ret1319 == -1)
    return -1;
  CLEANUP_FREE char *arg1323 = substitute_srcdir ("$srcdir/../COPYING.LIB");
  const char *arg1324 = "/download_offset/COPYING.LIB";
  int ret1322;
  ret1322 = guestfs_upload (g, arg1323, arg1324);
  if (ret1322 == -1)
    return -1;
  const char *arg1327 = "/download_offset/COPYING.LIB";
  int ret1326;
  ret1326 = guestfs_download_offset (g, arg1327, "testdownload.tmp", 100, 26430);
  if (ret1326 == -1)
    return -1;
  CLEANUP_FREE char *arg1333 = substitute_srcdir ("testdownload.tmp");
  const char *arg1334 = "/download_offset/COPYING.LIB";
  int ret1332;
  ret1332 = guestfs_upload_offset (g, arg1333, arg1334, 100);
  if (ret1332 == -1)
    return -1;
  const char *arg1337 = "md5";
  const char *arg1338 = "/download_offset/COPYING.LIB";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg1337, arg1338);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "4fbd65380cdd255951079008b364516c")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_download_offset_0", "checksum", "4fbd65380cdd255951079008b364516c", ret);
    return -1;
  }
  return 0;
}

static int test_drop_caches_0_skip (void);
static int test_drop_caches_0_perform (guestfs_h *);

static int
test_drop_caches_0 (guestfs_h *g)
{
  if (test_drop_caches_0_skip ()) {
    skipped ("test_drop_caches_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_drop_caches_0_perform (g);
}

static int
test_drop_caches_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "drop_caches") == NULL;
  str = getenv ("SKIP_TEST_DROP_CACHES_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DROP_CACHES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_drop_caches_0_perform (guestfs_h *g)
{
  /* TestRun for drop_caches (0) */
  int ret1340;
  ret1340 = guestfs_drop_caches (g, 3);
  if (ret1340 == -1)
    return -1;
  return 0;
}

static int test_du_0_skip (void);
static int test_du_0_perform (guestfs_h *);

static int
test_du_0 (guestfs_h *g)
{
  if (test_du_0_skip ()) {
    skipped ("test_du_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_du_0_perform (g);
}

static int
test_du_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "du") == NULL;
  str = getenv ("SKIP_TEST_DU_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_DU");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_du_0_perform (guestfs_h *g)
{
  /* TestResult for du (0) */
  const char *arg1343 = "/directory";
  int64_t ret;
  ret = guestfs_du (g, arg1343);
  if (ret == -1)
    return -1;
  if (! (ret == 2)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_du_0", "ret == 2");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_echo_daemon_0_skip (void);
static int test_echo_daemon_0_perform (guestfs_h *);

static int
test_echo_daemon_0 (guestfs_h *g)
{
  if (test_echo_daemon_0_skip ()) {
    skipped ("test_echo_daemon_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_echo_daemon_0_perform (g);
}

static int
test_echo_daemon_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "echo_daemon") == NULL;
  str = getenv ("SKIP_TEST_ECHO_DAEMON_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ECHO_DAEMON");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_echo_daemon_0_perform (guestfs_h *g)
{
  /* TestResultString for echo_daemon (0) */
  const char *arg1345_0 = "This";
  const char *arg1345_1 = "is";
  const char *arg1345_2 = "a";
  const char *arg1345_3 = "test";
  const char *const arg1345[] = {
    arg1345_0,
    arg1345_1,
    arg1345_2,
    arg1345_3,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_echo_daemon (g, (char **) arg1345);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "This is a test")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_echo_daemon_0", "echo_daemon", "This is a test", ret);
    return -1;
  }
  return 0;
}

static int test_echo_daemon_1_skip (void);
static int test_echo_daemon_1_perform (guestfs_h *);

static int
test_echo_daemon_1 (guestfs_h *g)
{
  if (test_echo_daemon_1_skip ()) {
    skipped ("test_echo_daemon_1", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_echo_daemon_1_perform (g);
}

static int
test_echo_daemon_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "echo_daemon") == NULL;
  str = getenv ("SKIP_TEST_ECHO_DAEMON_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ECHO_DAEMON");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_echo_daemon_1_perform (guestfs_h *g)
{
  /* TestResultString for echo_daemon (1) */
  const char *const arg1347[1] = { NULL };
  CLEANUP_FREE char *ret;
  ret = guestfs_echo_daemon (g, (char **) arg1347);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_echo_daemon_1", "echo_daemon", "", ret);
    return -1;
  }
  return 0;
}

static int test_egrep_0_skip (void);
static int test_egrep_0_perform (guestfs_h *);

static int
test_egrep_0 (guestfs_h *g)
{
  if (test_egrep_0_skip ()) {
    skipped ("test_egrep_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_egrep_0_perform (g);
}

static int
test_egrep_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "egrep") == NULL;
  str = getenv ("SKIP_TEST_EGREP_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_EGREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_egrep_0_perform (guestfs_h *g)
{
  /* TestResult for egrep (0) */
  const char *arg1349 = "abc";
  const char *arg1350 = "/test-grep.txt";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_egrep (g, arg1349, arg1350);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "abc", "abc123"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_egrep_0", "is_string_list (ret, 2, \"abc\", \"abc123\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_egrepi_0_skip (void);
static int test_egrepi_0_perform (guestfs_h *);

static int
test_egrepi_0 (guestfs_h *g)
{
  if (test_egrepi_0_skip ()) {
    skipped ("test_egrepi_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_egrepi_0_perform (g);
}

static int
test_egrepi_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "egrepi") == NULL;
  str = getenv ("SKIP_TEST_EGREPI_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_EGREPI");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_egrepi_0_perform (guestfs_h *g)
{
  /* TestResult for egrepi (0) */
  const char *arg1352 = "abc";
  const char *arg1353 = "/test-grep.txt";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_egrepi (g, arg1352, arg1353);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "abc", "abc123", "ABC"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_egrepi_0", "is_string_list (ret, 3, \"abc\", \"abc123\", \"ABC\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_equal_0_skip (void);
static int test_equal_0_perform (guestfs_h *);

static int
test_equal_0 (guestfs_h *g)
{
  if (test_equal_0_skip ()) {
    skipped ("test_equal_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_equal_0_perform (g);
}

static int
test_equal_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "equal") == NULL;
  str = getenv ("SKIP_TEST_EQUAL_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_EQUAL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_equal_0_perform (guestfs_h *g)
{
  /* TestResultTrue for equal (0) */
  const char *arg1356 = "/equal";
  int ret1355;
  ret1355 = guestfs_mkdir (g, arg1356);
  if (ret1355 == -1)
    return -1;
  const char *arg1359 = "/equal/file1";
  const char *arg1360 = "contents of a file";
  size_t arg1360_size = 18;
  int ret1358;
  ret1358 = guestfs_write (g, arg1359, arg1360, arg1360_size);
  if (ret1358 == -1)
    return -1;
  const char *arg1363 = "/equal/file1";
  const char *arg1364 = "/equal/file2";
  int ret1362;
  ret1362 = guestfs_cp (g, arg1363, arg1364);
  if (ret1362 == -1)
    return -1;
  const char *arg1366 = "/equal/file1";
  const char *arg1367 = "/equal/file2";
  int ret;
  ret = guestfs_equal (g, arg1366, arg1367);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_equal_0", "equal");
    return -1;
  }
  return 0;
}

static int test_equal_1_skip (void);
static int test_equal_1_perform (guestfs_h *);

static int
test_equal_1 (guestfs_h *g)
{
  if (test_equal_1_skip ()) {
    skipped ("test_equal_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_equal_1_perform (g);
}

static int
test_equal_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "equal") == NULL;
  str = getenv ("SKIP_TEST_EQUAL_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_EQUAL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_equal_1_perform (guestfs_h *g)
{
  /* TestResultFalse for equal (1) */
  const char *arg1370 = "/equal2";
  int ret1369;
  ret1369 = guestfs_mkdir (g, arg1370);
  if (ret1369 == -1)
    return -1;
  const char *arg1373 = "/equal2/file1";
  const char *arg1374 = "contents of a file";
  size_t arg1374_size = 18;
  int ret1372;
  ret1372 = guestfs_write (g, arg1373, arg1374, arg1374_size);
  if (ret1372 == -1)
    return -1;
  const char *arg1377 = "/equal2/file2";
  const char *arg1378 = "contents of another file";
  size_t arg1378_size = 24;
  int ret1376;
  ret1376 = guestfs_write (g, arg1377, arg1378, arg1378_size);
  if (ret1376 == -1)
    return -1;
  const char *arg1380 = "/equal2/file1";
  const char *arg1381 = "/equal2/file2";
  int ret;
  ret = guestfs_equal (g, arg1380, arg1381);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_equal_1", "equal");
    return -1;
  }
  return 0;
}

static int test_equal_2_skip (void);
static int test_equal_2_perform (guestfs_h *);

static int
test_equal_2 (guestfs_h *g)
{
  if (test_equal_2_skip ()) {
    skipped ("test_equal_2", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_equal_2_perform (g);
}

static int
test_equal_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "equal") == NULL;
  str = getenv ("SKIP_TEST_EQUAL_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_EQUAL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_equal_2_perform (guestfs_h *g)
{
  /* TestLastFail for equal (2) */
  const char *arg1384 = "/equal3";
  int ret1383;
  ret1383 = guestfs_mkdir (g, arg1384);
  if (ret1383 == -1)
    return -1;
  const char *arg1387 = "/equal3/file1";
  const char *arg1388 = "/equal3/file2";
  int ret1386;
  guestfs_push_error_handler (g, NULL, NULL);
  ret1386 = guestfs_equal (g, arg1387, arg1388);
  guestfs_pop_error_handler (g);
  if (ret1386 != -1)
    return -1;
  return 0;
}

static int test_exists_0_skip (void);
static int test_exists_0_perform (guestfs_h *);

static int
test_exists_0 (guestfs_h *g)
{
  if (test_exists_0_skip ()) {
    skipped ("test_exists_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_exists_0_perform (g);
}

static int
test_exists_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "exists") == NULL;
  str = getenv ("SKIP_TEST_EXISTS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_EXISTS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_exists_0_perform (guestfs_h *g)
{
  /* TestResultTrue for exists (0) */
  const char *arg1390 = "/empty";
  int ret;
  ret = guestfs_exists (g, arg1390);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_exists_0", "exists");
    return -1;
  }
  return 0;
}

static int test_exists_1_skip (void);
static int test_exists_1_perform (guestfs_h *);

static int
test_exists_1 (guestfs_h *g)
{
  if (test_exists_1_skip ()) {
    skipped ("test_exists_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_exists_1_perform (g);
}

static int
test_exists_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "exists") == NULL;
  str = getenv ("SKIP_TEST_EXISTS_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_EXISTS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_exists_1_perform (guestfs_h *g)
{
  /* TestResultTrue for exists (1) */
  const char *arg1392 = "/directory";
  int ret;
  ret = guestfs_exists (g, arg1392);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_exists_1", "exists");
    return -1;
  }
  return 0;
}

static int test_fallocate_0_skip (void);
static int test_fallocate_0_perform (guestfs_h *);

static int
test_fallocate_0 (guestfs_h *g)
{
  if (test_fallocate_0_skip ()) {
    skipped ("test_fallocate_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_fallocate_0_perform (g);
}

static int
test_fallocate_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "fallocate") == NULL;
  str = getenv ("SKIP_TEST_FALLOCATE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FALLOCATE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_fallocate_0_perform (guestfs_h *g)
{
  /* TestResult for fallocate (0) */
  const char *arg1394 = "/fallocate";
  int ret1;
  ret1 = guestfs_fallocate (g, arg1394, 1000000);
  if (ret1 == -1)
    return -1;
  const char *arg1397 = "/fallocate";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg1397);
  if (ret == NULL)
      return -1;
  if (! (ret->size == 1000000)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_fallocate_0", "ret->size == 1000000");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_fallocate64_0_skip (void);
static int test_fallocate64_0_perform (guestfs_h *);

static int
test_fallocate64_0 (guestfs_h *g)
{
  if (test_fallocate64_0_skip ()) {
    skipped ("test_fallocate64_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_fallocate64_0_perform (g);
}

static int
test_fallocate64_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "fallocate64") == NULL;
  str = getenv ("SKIP_TEST_FALLOCATE64_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FALLOCATE64");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_fallocate64_0_perform (guestfs_h *g)
{
  /* TestResult for fallocate64 (0) */
  const char *arg1399 = "/fallocate64";
  int ret1;
  ret1 = guestfs_fallocate64 (g, arg1399, 1000000);
  if (ret1 == -1)
    return -1;
  const char *arg1402 = "/fallocate64";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg1402);
  if (ret == NULL)
      return -1;
  if (! (ret->size == 1000000)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_fallocate64_0", "ret->size == 1000000");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_feature_available_0_skip (void);
static int test_feature_available_0_perform (guestfs_h *);

static int
test_feature_available_0 (guestfs_h *g)
{
  if (test_feature_available_0_skip ()) {
    skipped ("test_feature_available_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_feature_available_0_perform (g);
}

static int
test_feature_available_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "feature_available") == NULL;
  str = getenv ("SKIP_TEST_FEATURE_AVAILABLE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FEATURE_AVAILABLE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_feature_available_0_perform (guestfs_h *g)
{
  /* TestResultTrue for feature_available (0) */
  const char *const arg1404[1] = { NULL };
  int ret;
  ret = guestfs_feature_available (g, (char **) arg1404);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_feature_available_0", "feature_available");
    return -1;
  }
  return 0;
}

static int test_fgrep_0_skip (void);
static int test_fgrep_0_perform (guestfs_h *);

static int
test_fgrep_0 (guestfs_h *g)
{
  if (test_fgrep_0_skip ()) {
    skipped ("test_fgrep_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_fgrep_0_perform (g);
}

static int
test_fgrep_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "fgrep") == NULL;
  str = getenv ("SKIP_TEST_FGREP_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FGREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_fgrep_0_perform (guestfs_h *g)
{
  /* TestResult for fgrep (0) */
  const char *arg1406 = "abc";
  const char *arg1407 = "/test-grep.txt";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_fgrep (g, arg1406, arg1407);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "abc", "abc123"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_fgrep_0", "is_string_list (ret, 2, \"abc\", \"abc123\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_fgrepi_0_skip (void);
static int test_fgrepi_0_perform (guestfs_h *);

static int
test_fgrepi_0 (guestfs_h *g)
{
  if (test_fgrepi_0_skip ()) {
    skipped ("test_fgrepi_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_fgrepi_0_perform (g);
}

static int
test_fgrepi_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "fgrepi") == NULL;
  str = getenv ("SKIP_TEST_FGREPI_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FGREPI");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_fgrepi_0_perform (guestfs_h *g)
{
  /* TestResult for fgrepi (0) */
  const char *arg1409 = "abc";
  const char *arg1410 = "/test-grep.txt";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_fgrepi (g, arg1409, arg1410);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "abc", "abc123", "ABC"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_fgrepi_0", "is_string_list (ret, 3, \"abc\", \"abc123\", \"ABC\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_file_0_skip (void);
static int test_file_0_perform (guestfs_h *);

static int
test_file_0 (guestfs_h *g)
{
  if (test_file_0_skip ()) {
    skipped ("test_file_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_0_perform (g);
}

static int
test_file_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file") == NULL;
  str = getenv ("SKIP_TEST_FILE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_0_perform (guestfs_h *g)
{
  /* TestResultString for file (0) */
  const char *arg1412 = "/empty";
  CLEANUP_FREE char *ret;
  ret = guestfs_file (g, arg1412);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "empty")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_0", "file", "empty", ret);
    return -1;
  }
  return 0;
}

static int test_file_1_skip (void);
static int test_file_1_perform (guestfs_h *);

static int
test_file_1 (guestfs_h *g)
{
  if (test_file_1_skip ()) {
    skipped ("test_file_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_1_perform (g);
}

static int
test_file_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file") == NULL;
  str = getenv ("SKIP_TEST_FILE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_1_perform (guestfs_h *g)
{
  /* TestResultString for file (1) */
  const char *arg1414 = "/known-1";
  CLEANUP_FREE char *ret;
  ret = guestfs_file (g, arg1414);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "ASCII text")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_1", "file", "ASCII text", ret);
    return -1;
  }
  return 0;
}

static int test_file_2_skip (void);
static int test_file_2_perform (guestfs_h *);

static int
test_file_2 (guestfs_h *g)
{
  if (test_file_2_skip ()) {
    skipped ("test_file_2", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_2_perform (g);
}

static int
test_file_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file") == NULL;
  str = getenv ("SKIP_TEST_FILE_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_2_perform (guestfs_h *g)
{
  /* TestLastFail for file (2) */
  const char *arg1417 = "/notexists";
  CLEANUP_FREE char *ret1416;
  guestfs_push_error_handler (g, NULL, NULL);
  ret1416 = guestfs_file (g, arg1417);
  guestfs_pop_error_handler (g);
  if (ret1416 != NULL)
    return -1;
  return 0;
}

static int test_file_3_skip (void);
static int test_file_3_perform (guestfs_h *);

static int
test_file_3 (guestfs_h *g)
{
  if (test_file_3_skip ()) {
    skipped ("test_file_3", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_3_perform (g);
}

static int
test_file_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file") == NULL;
  str = getenv ("SKIP_TEST_FILE_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_3_perform (guestfs_h *g)
{
  /* TestResultString for file (3) */
  const char *arg1419 = "/abssymlink";
  CLEANUP_FREE char *ret;
  ret = guestfs_file (g, arg1419);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "symbolic link")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_3", "file", "symbolic link", ret);
    return -1;
  }
  return 0;
}

static int test_file_4_skip (void);
static int test_file_4_perform (guestfs_h *);

static int
test_file_4 (guestfs_h *g)
{
  if (test_file_4_skip ()) {
    skipped ("test_file_4", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_4_perform (g);
}

static int
test_file_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file") == NULL;
  str = getenv ("SKIP_TEST_FILE_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_4_perform (guestfs_h *g)
{
  /* TestResultString for file (4) */
  const char *arg1421 = "/directory";
  CLEANUP_FREE char *ret;
  ret = guestfs_file (g, arg1421);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "directory")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_4", "file", "directory", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_0_skip (void);
static int test_file_architecture_0_perform (guestfs_h *);

static int
test_file_architecture_0 (guestfs_h *g)
{
  if (test_file_architecture_0_skip ()) {
    skipped ("test_file_architecture_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_0_perform (g);
}

static int
test_file_architecture_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_0_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (0) */
  const char *arg1423 = "/bin-aarch64-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1423);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "aarch64")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_0", "file_architecture", "aarch64", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_1_skip (void);
static int test_file_architecture_1_perform (guestfs_h *);

static int
test_file_architecture_1 (guestfs_h *g)
{
  if (test_file_architecture_1_skip ()) {
    skipped ("test_file_architecture_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_1_perform (g);
}

static int
test_file_architecture_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_1_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (1) */
  const char *arg1425 = "/bin-armv7-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1425);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "arm")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_1", "file_architecture", "arm", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_2_skip (void);
static int test_file_architecture_2_perform (guestfs_h *);

static int
test_file_architecture_2 (guestfs_h *g)
{
  if (test_file_architecture_2_skip ()) {
    skipped ("test_file_architecture_2", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_2_perform (g);
}

static int
test_file_architecture_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_2_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (2) */
  const char *arg1427 = "/bin-i586-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1427);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "i386")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_2", "file_architecture", "i386", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_3_skip (void);
static int test_file_architecture_3_perform (guestfs_h *);

static int
test_file_architecture_3 (guestfs_h *g)
{
  if (test_file_architecture_3_skip ()) {
    skipped ("test_file_architecture_3", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_3_perform (g);
}

static int
test_file_architecture_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_3_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (3) */
  const char *arg1429 = "/bin-ppc64-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1429);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "ppc64")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_3", "file_architecture", "ppc64", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_4_skip (void);
static int test_file_architecture_4_perform (guestfs_h *);

static int
test_file_architecture_4 (guestfs_h *g)
{
  if (test_file_architecture_4_skip ()) {
    skipped ("test_file_architecture_4", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_4_perform (g);
}

static int
test_file_architecture_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_4_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (4) */
  const char *arg1431 = "/bin-ppc64le-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1431);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "ppc64le")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_4", "file_architecture", "ppc64le", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_5_skip (void);
static int test_file_architecture_5_perform (guestfs_h *);

static int
test_file_architecture_5 (guestfs_h *g)
{
  if (test_file_architecture_5_skip ()) {
    skipped ("test_file_architecture_5", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_5_perform (g);
}

static int
test_file_architecture_5_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_5");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_5_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (5) */
  const char *arg1433 = "/bin-riscv64-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1433);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "riscv64")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_5", "file_architecture", "riscv64", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_6_skip (void);
static int test_file_architecture_6_perform (guestfs_h *);

static int
test_file_architecture_6 (guestfs_h *g)
{
  if (test_file_architecture_6_skip ()) {
    skipped ("test_file_architecture_6", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_6_perform (g);
}

static int
test_file_architecture_6_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_6");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_6_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (6) */
  const char *arg1435 = "/bin-s390x-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1435);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "s390x")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_6", "file_architecture", "s390x", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_7_skip (void);
static int test_file_architecture_7_perform (guestfs_h *);

static int
test_file_architecture_7 (guestfs_h *g)
{
  if (test_file_architecture_7_skip ()) {
    skipped ("test_file_architecture_7", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_7_perform (g);
}

static int
test_file_architecture_7_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_7");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_7_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (7) */
  const char *arg1437 = "/bin-sparc-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1437);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "sparc")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_7", "file_architecture", "sparc", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_8_skip (void);
static int test_file_architecture_8_perform (guestfs_h *);

static int
test_file_architecture_8 (guestfs_h *g)
{
  if (test_file_architecture_8_skip ()) {
    skipped ("test_file_architecture_8", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_8_perform (g);
}

static int
test_file_architecture_8_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_8");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_8_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (8) */
  const char *arg1439 = "/bin-win32.exe";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1439);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "i386")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_8", "file_architecture", "i386", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_9_skip (void);
static int test_file_architecture_9_perform (guestfs_h *);

static int
test_file_architecture_9 (guestfs_h *g)
{
  if (test_file_architecture_9_skip ()) {
    skipped ("test_file_architecture_9", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_9_perform (g);
}

static int
test_file_architecture_9_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_9");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_9_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (9) */
  const char *arg1441 = "/bin-win64.exe";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1441);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "x86_64")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_9", "file_architecture", "x86_64", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_10_skip (void);
static int test_file_architecture_10_perform (guestfs_h *);

static int
test_file_architecture_10 (guestfs_h *g)
{
  if (test_file_architecture_10_skip ()) {
    skipped ("test_file_architecture_10", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_10_perform (g);
}

static int
test_file_architecture_10_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_10");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_10_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (10) */
  const char *arg1443 = "/bin-x86_64-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1443);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "x86_64")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_10", "file_architecture", "x86_64", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_11_skip (void);
static int test_file_architecture_11_perform (guestfs_h *);

static int
test_file_architecture_11 (guestfs_h *g)
{
  if (test_file_architecture_11_skip ()) {
    skipped ("test_file_architecture_11", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_11_perform (g);
}

static int
test_file_architecture_11_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_11");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_11_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (11) */
  const char *arg1445 = "/lib-aarch64.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1445);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "aarch64")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_11", "file_architecture", "aarch64", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_12_skip (void);
static int test_file_architecture_12_perform (guestfs_h *);

static int
test_file_architecture_12 (guestfs_h *g)
{
  if (test_file_architecture_12_skip ()) {
    skipped ("test_file_architecture_12", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_12_perform (g);
}

static int
test_file_architecture_12_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_12");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_12_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (12) */
  const char *arg1447 = "/lib-armv7.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1447);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "arm")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_12", "file_architecture", "arm", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_13_skip (void);
static int test_file_architecture_13_perform (guestfs_h *);

static int
test_file_architecture_13 (guestfs_h *g)
{
  if (test_file_architecture_13_skip ()) {
    skipped ("test_file_architecture_13", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_13_perform (g);
}

static int
test_file_architecture_13_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_13");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_13_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (13) */
  const char *arg1449 = "/lib-i586.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1449);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "i386")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_13", "file_architecture", "i386", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_14_skip (void);
static int test_file_architecture_14_perform (guestfs_h *);

static int
test_file_architecture_14 (guestfs_h *g)
{
  if (test_file_architecture_14_skip ()) {
    skipped ("test_file_architecture_14", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_14_perform (g);
}

static int
test_file_architecture_14_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_14");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_14_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (14) */
  const char *arg1451 = "/lib-ppc64.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1451);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "ppc64")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_14", "file_architecture", "ppc64", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_15_skip (void);
static int test_file_architecture_15_perform (guestfs_h *);

static int
test_file_architecture_15 (guestfs_h *g)
{
  if (test_file_architecture_15_skip ()) {
    skipped ("test_file_architecture_15", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_15_perform (g);
}

static int
test_file_architecture_15_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_15");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_15_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (15) */
  const char *arg1453 = "/lib-ppc64le.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1453);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "ppc64le")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_15", "file_architecture", "ppc64le", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_16_skip (void);
static int test_file_architecture_16_perform (guestfs_h *);

static int
test_file_architecture_16 (guestfs_h *g)
{
  if (test_file_architecture_16_skip ()) {
    skipped ("test_file_architecture_16", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_16_perform (g);
}

static int
test_file_architecture_16_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_16");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_16_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (16) */
  const char *arg1455 = "/lib-riscv64.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1455);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "riscv64")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_16", "file_architecture", "riscv64", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_17_skip (void);
static int test_file_architecture_17_perform (guestfs_h *);

static int
test_file_architecture_17 (guestfs_h *g)
{
  if (test_file_architecture_17_skip ()) {
    skipped ("test_file_architecture_17", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_17_perform (g);
}

static int
test_file_architecture_17_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_17");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_17_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (17) */
  const char *arg1457 = "/lib-s390x.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1457);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "s390x")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_17", "file_architecture", "s390x", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_18_skip (void);
static int test_file_architecture_18_perform (guestfs_h *);

static int
test_file_architecture_18 (guestfs_h *g)
{
  if (test_file_architecture_18_skip ()) {
    skipped ("test_file_architecture_18", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_18_perform (g);
}

static int
test_file_architecture_18_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_18");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_18_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (18) */
  const char *arg1459 = "/lib-sparc.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1459);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "sparc")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_18", "file_architecture", "sparc", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_19_skip (void);
static int test_file_architecture_19_perform (guestfs_h *);

static int
test_file_architecture_19 (guestfs_h *g)
{
  if (test_file_architecture_19_skip ()) {
    skipped ("test_file_architecture_19", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_19_perform (g);
}

static int
test_file_architecture_19_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_19");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_19_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (19) */
  const char *arg1461 = "/lib-win32.dll";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1461);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "i386")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_19", "file_architecture", "i386", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_20_skip (void);
static int test_file_architecture_20_perform (guestfs_h *);

static int
test_file_architecture_20 (guestfs_h *g)
{
  if (test_file_architecture_20_skip ()) {
    skipped ("test_file_architecture_20", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_20_perform (g);
}

static int
test_file_architecture_20_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_20");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_20_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (20) */
  const char *arg1463 = "/lib-win64.dll";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1463);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "x86_64")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_20", "file_architecture", "x86_64", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_21_skip (void);
static int test_file_architecture_21_perform (guestfs_h *);

static int
test_file_architecture_21 (guestfs_h *g)
{
  if (test_file_architecture_21_skip ()) {
    skipped ("test_file_architecture_21", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_21_perform (g);
}

static int
test_file_architecture_21_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_21");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_21_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (21) */
  const char *arg1465 = "/lib-x86_64.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1465);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "x86_64")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_21", "file_architecture", "x86_64", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_22_skip (void);
static int test_file_architecture_22_perform (guestfs_h *);

static int
test_file_architecture_22 (guestfs_h *g)
{
  if (test_file_architecture_22_skip ()) {
    skipped ("test_file_architecture_22", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_22_perform (g);
}

static int
test_file_architecture_22_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_22");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_22_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (22) */
  const char *arg1467 = "/initrd-x86_64.img";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1467);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "x86_64")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_22", "file_architecture", "x86_64", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_23_skip (void);
static int test_file_architecture_23_perform (guestfs_h *);

static int
test_file_architecture_23 (guestfs_h *g)
{
  if (test_file_architecture_23_skip ()) {
    skipped ("test_file_architecture_23", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_23_perform (g);
}

static int
test_file_architecture_23_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_23");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_23_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (23) */
  const char *arg1469 = "/initrd-x86_64.img.gz";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1469);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "x86_64")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_23", "file_architecture", "x86_64", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_24_skip (void);
static int test_file_architecture_24_perform (guestfs_h *);

static int
test_file_architecture_24 (guestfs_h *g)
{
  if (test_file_architecture_24_skip ()) {
    skipped ("test_file_architecture_24", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_24_perform (g);
}

static int
test_file_architecture_24_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_24");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_24_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (24) */
  const char *arg1471 = "/bin-x86_64-dynamic.gz";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1471);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "x86_64")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_24", "file_architecture", "x86_64", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_25_skip (void);
static int test_file_architecture_25_perform (guestfs_h *);

static int
test_file_architecture_25 (guestfs_h *g)
{
  if (test_file_architecture_25_skip ()) {
    skipped ("test_file_architecture_25", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_25_perform (g);
}

static int
test_file_architecture_25_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_25");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_25_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (25) */
  const char *arg1473 = "/lib-i586.so.xz";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1473);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "i386")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_25", "file_architecture", "i386", ret);
    return -1;
  }
  return 0;
}

static int test_file_architecture_26_skip (void);
static int test_file_architecture_26_perform (guestfs_h *);

static int
test_file_architecture_26 (guestfs_h *g)
{
  if (test_file_architecture_26_skip ()) {
    skipped ("test_file_architecture_26", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_file_architecture_26_perform (g);
}

static int
test_file_architecture_26_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "file_architecture") == NULL;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE_26");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILE_ARCHITECTURE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_file_architecture_26_perform (guestfs_h *g)
{
  /* TestResultString for file_architecture (26) */
  const char *arg1475 = "/lib-i586.so.zst";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1475);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "i386")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_file_architecture_26", "file_architecture", "i386", ret);
    return -1;
  }
  return 0;
}

static int test_filesize_0_skip (void);
static int test_filesize_0_perform (guestfs_h *);

static int
test_filesize_0 (guestfs_h *g)
{
  if (test_filesize_0_skip ()) {
    skipped ("test_filesize_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_filesize_0_perform (g);
}

static int
test_filesize_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "filesize") == NULL;
  str = getenv ("SKIP_TEST_FILESIZE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILESIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_filesize_0_perform (guestfs_h *g)
{
  /* TestResult for filesize (0) */
  const char *arg1477 = "/filesize";
  const char *arg1478 = "hello, world";
  size_t arg1478_size = 12;
  int ret1;
  ret1 = guestfs_write (g, arg1477, arg1478, arg1478_size);
  if (ret1 == -1)
    return -1;
  const char *arg1480 = "/filesize";
  int64_t ret;
  ret = guestfs_filesize (g, arg1480);
  if (ret == -1)
    return -1;
  if (! (ret == 12)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_filesize_0", "ret == 12");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_fill_0_skip (void);
static int test_fill_0_perform (guestfs_h *);

static int
test_fill_0 (guestfs_h *g)
{
  if (test_fill_0_skip ()) {
    skipped ("test_fill_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_fill_0_perform (g);
}

static int
test_fill_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "fill") == NULL;
  str = getenv ("SKIP_TEST_FILL_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_fill_0_perform (guestfs_h *g)
{
  /* TestResult for fill (0) */
  const char *arg1484 = "/fill";
  int ret1;
  ret1 = guestfs_fill (g, 99, 10, arg1484);
  if (ret1 == -1)
    return -1;
  const char *arg1486 = "/fill";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_read_file (g, arg1486, &size);
  if (ret == NULL)
      return -1;
  if (! (compare_buffers (ret, size, "cccccccccc", 10) == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_fill_0", "compare_buffers (ret, size, \"cccccccccc\", 10) == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_fill_pattern_0_skip (void);
static int test_fill_pattern_0_perform (guestfs_h *);

static int
test_fill_pattern_0 (guestfs_h *g)
{
  if (test_fill_pattern_0_skip ()) {
    skipped ("test_fill_pattern_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_fill_pattern_0_perform (g);
}

static int
test_fill_pattern_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "fill_pattern") == NULL;
  str = getenv ("SKIP_TEST_FILL_PATTERN_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FILL_PATTERN");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_fill_pattern_0_perform (guestfs_h *g)
{
  /* TestResult for fill_pattern (0) */
  const char *arg1488 = "abcdefghijklmnopqrstuvwxyz";
  const char *arg1490 = "/fill_pattern";
  int ret1;
  ret1 = guestfs_fill_pattern (g, arg1488, 28, arg1490);
  if (ret1 == -1)
    return -1;
  const char *arg1492 = "/fill_pattern";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_read_file (g, arg1492, &size);
  if (ret == NULL)
      return -1;
  if (! (compare_buffers (ret, size, "abcdefghijklmnopqrstuvwxyzab", 28) == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_fill_pattern_0", "compare_buffers (ret, size, \"abcdefghijklmnopqrstuvwxyzab\", 28) == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_find_0_skip (void);
static int test_find_0_perform (guestfs_h *);

static int
test_find_0 (guestfs_h *g)
{
  if (test_find_0_skip ()) {
    skipped ("test_find_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_find_0_perform (g);
}

static int
test_find_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "find") == NULL;
  str = getenv ("SKIP_TEST_FIND_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FIND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_find_0_perform (guestfs_h *g)
{
  /* TestResult for find (0) */
  const char *arg1494 = "/";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_find (g, arg1494);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 1, "lost+found"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_find_0", "is_string_list (ret, 1, \"lost+found\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_find_1_skip (void);
static int test_find_1_perform (guestfs_h *);

static int
test_find_1 (guestfs_h *g)
{
  if (test_find_1_skip ()) {
    skipped ("test_find_1", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_find_1_perform (g);
}

static int
test_find_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "find") == NULL;
  str = getenv ("SKIP_TEST_FIND_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FIND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_find_1_perform (guestfs_h *g)
{
  /* TestResult for find (1) */
  const char *arg1496 = "/a";
  int ret3;
  ret3 = guestfs_touch (g, arg1496);
  if (ret3 == -1)
    return -1;
  const char *arg1498 = "/b";
  int ret2;
  ret2 = guestfs_mkdir (g, arg1498);
  if (ret2 == -1)
    return -1;
  const char *arg1500 = "/b/c";
  int ret1;
  ret1 = guestfs_touch (g, arg1500);
  if (ret1 == -1)
    return -1;
  const char *arg1502 = "/";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_find (g, arg1502);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 4, "a", "b", "b/c", "lost+found"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_find_1", "is_string_list (ret, 4, \"a\", \"b\", \"b/c\", \"lost+found\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_find_2_skip (void);
static int test_find_2_perform (guestfs_h *);

static int
test_find_2 (guestfs_h *g)
{
  if (test_find_2_skip ()) {
    skipped ("test_find_2", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_find_2_perform (g);
}

static int
test_find_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "find") == NULL;
  str = getenv ("SKIP_TEST_FIND_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FIND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_find_2_perform (guestfs_h *g)
{
  /* TestResult for find (2) */
  const char *arg1504 = "/find/b/c";
  int ret2;
  ret2 = guestfs_mkdir_p (g, arg1504);
  if (ret2 == -1)
    return -1;
  const char *arg1506 = "/find/b/c/d";
  int ret1;
  ret1 = guestfs_touch (g, arg1506);
  if (ret1 == -1)
    return -1;
  const char *arg1508 = "/find/b/";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_find (g, arg1508);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "c", "c/d"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_find_2", "is_string_list (ret, 2, \"c\", \"c/d\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_fsck_0_skip (void);
static int test_fsck_0_perform (guestfs_h *);

static int
test_fsck_0 (guestfs_h *g)
{
  if (test_fsck_0_skip ()) {
    skipped ("test_fsck_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_fsck_0_perform (g);
}

static int
test_fsck_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "fsck") == NULL;
  str = getenv ("SKIP_TEST_FSCK_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FSCK");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_fsck_0_perform (guestfs_h *g)
{
  /* TestResult for fsck (0) */
  const char *arg1510 = "/dev/sda1";
  struct guestfs_umount_opts_argv optargs1511;
  optargs1511.force = 0;
  optargs1511.lazyunmount = 0;
  optargs1511.bitmask = UINT64_C(0x3);
  int ret1;
  ret1 = guestfs_umount_opts_argv (g, arg1510, &optargs1511);
  if (ret1 == -1)
    return -1;
  const char *arg1512 = "ext2";
  const char *arg1513 = "/dev/sda1";
  int ret;
  ret = guestfs_fsck (g, arg1512, arg1513);
  if (ret == -1)
    return -1;
  if (! (ret == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_fsck_0", "ret == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_fsck_1_skip (void);
static int test_fsck_1_perform (guestfs_h *);

static int
test_fsck_1 (guestfs_h *g)
{
  if (test_fsck_1_skip ()) {
    skipped ("test_fsck_1", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_fsck_1_perform (g);
}

static int
test_fsck_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "fsck") == NULL;
  str = getenv ("SKIP_TEST_FSCK_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_FSCK");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_fsck_1_perform (guestfs_h *g)
{
  /* TestResult for fsck (1) */
  const char *arg1515 = "/dev/sda1";
  struct guestfs_umount_opts_argv optargs1516;
  optargs1516.force = 0;
  optargs1516.lazyunmount = 0;
  optargs1516.bitmask = UINT64_C(0x3);
  int ret2;
  ret2 = guestfs_umount_opts_argv (g, arg1515, &optargs1516);
  if (ret2 == -1)
    return -1;
  const char *arg1517 = "/dev/sda1";
  int ret1;
  ret1 = guestfs_zero (g, arg1517);
  if (ret1 == -1)
    return -1;
  const char *arg1519 = "ext2";
  const char *arg1520 = "/dev/sda1";
  int ret;
  ret = guestfs_fsck (g, arg1519, arg1520);
  if (ret == -1)
    return -1;
  if (! (ret == 8)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_fsck_1", "ret == 8");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_get_attach_method_0_skip (void);
static int test_get_attach_method_0_perform (guestfs_h *);

static int
test_get_attach_method_0 (guestfs_h *g)
{
  if (test_get_attach_method_0_skip ()) {
    skipped ("test_get_attach_method_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_get_attach_method_0_perform (g);
}

static int
test_get_attach_method_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_attach_method") == NULL;
  str = getenv ("SKIP_TEST_GET_ATTACH_METHOD_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_ATTACH_METHOD");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_attach_method_0_perform (guestfs_h *g)
{
  /* TestRun for get_attach_method (0) */
  CLEANUP_FREE char *ret1522;
  ret1522 = guestfs_get_attach_method (g);
  if (ret1522 == NULL)
      return -1;
  return 0;
}

static int test_get_autosync_0_skip (void);
static int test_get_autosync_0_perform (guestfs_h *);

static int
test_get_autosync_0 (guestfs_h *g)
{
  if (test_get_autosync_0_skip ()) {
    skipped ("test_get_autosync_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_get_autosync_0_perform (g);
}

static int
test_get_autosync_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_autosync") == NULL;
  str = getenv ("SKIP_TEST_GET_AUTOSYNC_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_AUTOSYNC");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_autosync_0_perform (guestfs_h *g)
{
  /* TestResultTrue for get_autosync (0) */
  int ret;
  ret = guestfs_get_autosync (g);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_get_autosync_0", "get_autosync");
    return -1;
  }
  return 0;
}

static int test_get_backend_0_skip (void);
static int test_get_backend_0_perform (guestfs_h *);

static int
test_get_backend_0 (guestfs_h *g)
{
  if (test_get_backend_0_skip ()) {
    skipped ("test_get_backend_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_get_backend_0_perform (g);
}

static int
test_get_backend_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_backend") == NULL;
  str = getenv ("SKIP_TEST_GET_BACKEND_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_BACKEND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_backend_0_perform (guestfs_h *g)
{
  /* TestRun for get_backend (0) */
  CLEANUP_FREE char *ret1525;
  ret1525 = guestfs_get_backend (g);
  if (ret1525 == NULL)
      return -1;
  return 0;
}

static int test_get_backend_settings_0_skip (void);
static int test_get_backend_settings_0_perform (guestfs_h *);

static int
test_get_backend_settings_0 (guestfs_h *g)
{
  if (test_get_backend_settings_0_skip ()) {
    skipped ("test_get_backend_settings_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_get_backend_settings_0_perform (g);
}

static int
test_get_backend_settings_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_backend_settings") == NULL;
  str = getenv ("SKIP_TEST_GET_BACKEND_SETTINGS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_BACKEND_SETTINGS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_backend_settings_0_perform (guestfs_h *g)
{
  /* TestRun for get_backend_settings (0) */
  CLEANUP_FREE_STRING_LIST char **ret1527;
  ret1527 = guestfs_get_backend_settings (g);
  if (ret1527 == NULL)
      return -1;
  return 0;
}

static int test_get_e2attrs_0_skip (void);
static int test_get_e2attrs_0_perform (guestfs_h *);

static int
test_get_e2attrs_0 (guestfs_h *g)
{
  if (test_get_e2attrs_0_skip ()) {
    skipped ("test_get_e2attrs_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_get_e2attrs_0_perform (g);
}

static int
test_get_e2attrs_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_e2attrs") == NULL;
  str = getenv ("SKIP_TEST_GET_E2ATTRS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_E2ATTRS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_e2attrs_0_perform (guestfs_h *g)
{
  /* TestResultString for get_e2attrs (0) */
  const char *arg1530 = "/e2attrs1";
  int ret1529;
  ret1529 = guestfs_touch (g, arg1530);
  if (ret1529 == -1)
    return -1;
  const char *arg1532 = "/e2attrs1";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2attrs (g, arg1532);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_get_e2attrs_0", "get_e2attrs", "", ret);
    return -1;
  }
  return 0;
}

static int test_get_e2attrs_1_skip (void);
static int test_get_e2attrs_1_perform (guestfs_h *);

static int
test_get_e2attrs_1 (guestfs_h *g)
{
  if (test_get_e2attrs_1_skip ()) {
    skipped ("test_get_e2attrs_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_get_e2attrs_1_perform (g);
}

static int
test_get_e2attrs_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_e2attrs") == NULL;
  str = getenv ("SKIP_TEST_GET_E2ATTRS_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_E2ATTRS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_e2attrs_1_perform (guestfs_h *g)
{
  /* TestResultString for get_e2attrs (1) */
  const char *arg1535 = "/e2attrs2";
  int ret1534;
  ret1534 = guestfs_touch (g, arg1535);
  if (ret1534 == -1)
    return -1;
  const char *arg1538 = "/e2attrs2";
  const char *arg1539 = "is";
  struct guestfs_set_e2attrs_argv optargs1540;
  optargs1540.clear = 0;
  optargs1540.bitmask = UINT64_C(0x1);
  int ret1537;
  ret1537 = guestfs_set_e2attrs_argv (g, arg1538, arg1539, &optargs1540);
  if (ret1537 == -1)
    return -1;
  const char *arg1541 = "/e2attrs2";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2attrs (g, arg1541);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "is")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_get_e2attrs_1", "get_e2attrs", "is", ret);
    return -1;
  }
  return 0;
}

static int test_get_e2attrs_2_skip (void);
static int test_get_e2attrs_2_perform (guestfs_h *);

static int
test_get_e2attrs_2 (guestfs_h *g)
{
  if (test_get_e2attrs_2_skip ()) {
    skipped ("test_get_e2attrs_2", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_get_e2attrs_2_perform (g);
}

static int
test_get_e2attrs_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_e2attrs") == NULL;
  str = getenv ("SKIP_TEST_GET_E2ATTRS_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_E2ATTRS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_e2attrs_2_perform (guestfs_h *g)
{
  /* TestResultString for get_e2attrs (2) */
  const char *arg1544 = "/e2attrs3";
  int ret1543;
  ret1543 = guestfs_touch (g, arg1544);
  if (ret1543 == -1)
    return -1;
  const char *arg1547 = "/e2attrs3";
  const char *arg1548 = "is";
  struct guestfs_set_e2attrs_argv optargs1549;
  optargs1549.clear = 0;
  optargs1549.bitmask = UINT64_C(0x1);
  int ret1546;
  ret1546 = guestfs_set_e2attrs_argv (g, arg1547, arg1548, &optargs1549);
  if (ret1546 == -1)
    return -1;
  const char *arg1551 = "/e2attrs3";
  const char *arg1552 = "i";
  struct guestfs_set_e2attrs_argv optargs1553;
  optargs1553.clear = 1;
  optargs1553.bitmask = UINT64_C(0x1);
  int ret1550;
  ret1550 = guestfs_set_e2attrs_argv (g, arg1551, arg1552, &optargs1553);
  if (ret1550 == -1)
    return -1;
  const char *arg1554 = "/e2attrs3";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2attrs (g, arg1554);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "s")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_get_e2attrs_2", "get_e2attrs", "s", ret);
    return -1;
  }
  return 0;
}

static int test_get_e2attrs_3_skip (void);
static int test_get_e2attrs_3_perform (guestfs_h *);

static int
test_get_e2attrs_3 (guestfs_h *g)
{
  if (test_get_e2attrs_3_skip ()) {
    skipped ("test_get_e2attrs_3", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_get_e2attrs_3_perform (g);
}

static int
test_get_e2attrs_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_e2attrs") == NULL;
  str = getenv ("SKIP_TEST_GET_E2ATTRS_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_E2ATTRS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_e2attrs_3_perform (guestfs_h *g)
{
  /* TestResultString for get_e2attrs (3) */
  const char *arg1557 = "/e2attrs4";
  int ret1556;
  ret1556 = guestfs_touch (g, arg1557);
  if (ret1556 == -1)
    return -1;
  const char *arg1560 = "/e2attrs4";
  const char *arg1561 = "adst";
  struct guestfs_set_e2attrs_argv optargs1562;
  optargs1562.clear = 0;
  optargs1562.bitmask = UINT64_C(0x1);
  int ret1559;
  ret1559 = guestfs_set_e2attrs_argv (g, arg1560, arg1561, &optargs1562);
  if (ret1559 == -1)
    return -1;
  const char *arg1564 = "/e2attrs4";
  const char *arg1565 = "iS";
  struct guestfs_set_e2attrs_argv optargs1566;
  optargs1566.clear = 0;
  optargs1566.bitmask = UINT64_C(0x1);
  int ret1563;
  ret1563 = guestfs_set_e2attrs_argv (g, arg1564, arg1565, &optargs1566);
  if (ret1563 == -1)
    return -1;
  const char *arg1568 = "/e2attrs4";
  const char *arg1569 = "i";
  struct guestfs_set_e2attrs_argv optargs1570;
  optargs1570.clear = 1;
  optargs1570.bitmask = UINT64_C(0x1);
  int ret1567;
  ret1567 = guestfs_set_e2attrs_argv (g, arg1568, arg1569, &optargs1570);
  if (ret1567 == -1)
    return -1;
  const char *arg1572 = "/e2attrs4";
  const char *arg1573 = "ad";
  struct guestfs_set_e2attrs_argv optargs1574;
  optargs1574.clear = 1;
  optargs1574.bitmask = UINT64_C(0x1);
  int ret1571;
  ret1571 = guestfs_set_e2attrs_argv (g, arg1572, arg1573, &optargs1574);
  if (ret1571 == -1)
    return -1;
  const char *arg1576 = "/e2attrs4";
  const char *arg1577 = "";
  struct guestfs_set_e2attrs_argv optargs1578;
  optargs1578.clear = 0;
  optargs1578.bitmask = UINT64_C(0x1);
  int ret1575;
  ret1575 = guestfs_set_e2attrs_argv (g, arg1576, arg1577, &optargs1578);
  if (ret1575 == -1)
    return -1;
  const char *arg1580 = "/e2attrs4";
  const char *arg1581 = "";
  struct guestfs_set_e2attrs_argv optargs1582;
  optargs1582.clear = 1;
  optargs1582.bitmask = UINT64_C(0x1);
  int ret1579;
  ret1579 = guestfs_set_e2attrs_argv (g, arg1580, arg1581, &optargs1582);
  if (ret1579 == -1)
    return -1;
  const char *arg1583 = "/e2attrs4";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2attrs (g, arg1583);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "Sst")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_get_e2attrs_3", "get_e2attrs", "Sst", ret);
    return -1;
  }
  return 0;
}

static int test_get_e2attrs_4_skip (void);
static int test_get_e2attrs_4_perform (guestfs_h *);

static int
test_get_e2attrs_4 (guestfs_h *g)
{
  if (test_get_e2attrs_4_skip ()) {
    skipped ("test_get_e2attrs_4", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_get_e2attrs_4_perform (g);
}

static int
test_get_e2attrs_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_e2attrs") == NULL;
  str = getenv ("SKIP_TEST_GET_E2ATTRS_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_E2ATTRS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_e2attrs_4_perform (guestfs_h *g)
{
  /* TestLastFail for get_e2attrs (4) */
  const char *arg1586 = "/e2attrs5";
  int ret1585;
  ret1585 = guestfs_touch (g, arg1586);
  if (ret1585 == -1)
    return -1;
  const char *arg1589 = "/e2attrs5";
  const char *arg1590 = "R";
  struct guestfs_set_e2attrs_argv optargs1591;
  optargs1591.clear = 0;
  optargs1591.bitmask = UINT64_C(0x1);
  int ret1588;
  guestfs_push_error_handler (g, NULL, NULL);
  ret1588 = guestfs_set_e2attrs_argv (g, arg1589, arg1590, &optargs1591);
  guestfs_pop_error_handler (g);
  if (ret1588 != -1)
    return -1;
  return 0;
}

static int test_get_e2attrs_5_skip (void);
static int test_get_e2attrs_5_perform (guestfs_h *);

static int
test_get_e2attrs_5 (guestfs_h *g)
{
  if (test_get_e2attrs_5_skip ()) {
    skipped ("test_get_e2attrs_5", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_get_e2attrs_5_perform (g);
}

static int
test_get_e2attrs_5_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_e2attrs") == NULL;
  str = getenv ("SKIP_TEST_GET_E2ATTRS_5");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_E2ATTRS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_e2attrs_5_perform (guestfs_h *g)
{
  /* TestLastFail for get_e2attrs (5) */
  const char *arg1593 = "/e2attrs6";
  int ret1592;
  ret1592 = guestfs_touch (g, arg1593);
  if (ret1592 == -1)
    return -1;
  const char *arg1596 = "/e2attrs6";
  const char *arg1597 = "v";
  struct guestfs_set_e2attrs_argv optargs1598;
  optargs1598.clear = 0;
  optargs1598.bitmask = UINT64_C(0x1);
  int ret1595;
  guestfs_push_error_handler (g, NULL, NULL);
  ret1595 = guestfs_set_e2attrs_argv (g, arg1596, arg1597, &optargs1598);
  guestfs_pop_error_handler (g);
  if (ret1595 != -1)
    return -1;
  return 0;
}

static int test_get_e2attrs_6_skip (void);
static int test_get_e2attrs_6_perform (guestfs_h *);

static int
test_get_e2attrs_6 (guestfs_h *g)
{
  if (test_get_e2attrs_6_skip ()) {
    skipped ("test_get_e2attrs_6", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_get_e2attrs_6_perform (g);
}

static int
test_get_e2attrs_6_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_e2attrs") == NULL;
  str = getenv ("SKIP_TEST_GET_E2ATTRS_6");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_E2ATTRS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_e2attrs_6_perform (guestfs_h *g)
{
  /* TestLastFail for get_e2attrs (6) */
  const char *arg1600 = "/e2attrs7";
  int ret1599;
  ret1599 = guestfs_touch (g, arg1600);
  if (ret1599 == -1)
    return -1;
  const char *arg1603 = "/e2attrs7";
  const char *arg1604 = "aa";
  struct guestfs_set_e2attrs_argv optargs1605;
  optargs1605.clear = 0;
  optargs1605.bitmask = UINT64_C(0x1);
  int ret1602;
  guestfs_push_error_handler (g, NULL, NULL);
  ret1602 = guestfs_set_e2attrs_argv (g, arg1603, arg1604, &optargs1605);
  guestfs_pop_error_handler (g);
  if (ret1602 != -1)
    return -1;
  return 0;
}

static int test_get_e2attrs_7_skip (void);
static int test_get_e2attrs_7_perform (guestfs_h *);

static int
test_get_e2attrs_7 (guestfs_h *g)
{
  if (test_get_e2attrs_7_skip ()) {
    skipped ("test_get_e2attrs_7", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_get_e2attrs_7_perform (g);
}

static int
test_get_e2attrs_7_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_e2attrs") == NULL;
  str = getenv ("SKIP_TEST_GET_E2ATTRS_7");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_E2ATTRS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_e2attrs_7_perform (guestfs_h *g)
{
  /* TestLastFail for get_e2attrs (7) */
  const char *arg1607 = "/e2attrs8";
  int ret1606;
  ret1606 = guestfs_touch (g, arg1607);
  if (ret1606 == -1)
    return -1;
  const char *arg1610 = "/e2attrs8";
  const char *arg1611 = "BabcdB";
  struct guestfs_set_e2attrs_argv optargs1612;
  optargs1612.clear = 0;
  optargs1612.bitmask = UINT64_C(0x1);
  int ret1609;
  guestfs_push_error_handler (g, NULL, NULL);
  ret1609 = guestfs_set_e2attrs_argv (g, arg1610, arg1611, &optargs1612);
  guestfs_pop_error_handler (g);
  if (ret1609 != -1)
    return -1;
  return 0;
}

static int test_get_e2generation_0_skip (void);
static int test_get_e2generation_0_perform (guestfs_h *);

static int
test_get_e2generation_0 (guestfs_h *g)
{
  if (test_get_e2generation_0_skip ()) {
    skipped ("test_get_e2generation_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_get_e2generation_0_perform (g);
}

static int
test_get_e2generation_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_e2generation") == NULL;
  str = getenv ("SKIP_TEST_GET_E2GENERATION_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_E2GENERATION");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_e2generation_0_perform (guestfs_h *g)
{
  /* TestResult for get_e2generation (0) */
  const char *arg1613 = "/e2generation";
  int ret2;
  ret2 = guestfs_touch (g, arg1613);
  if (ret2 == -1)
    return -1;
  const char *arg1615 = "/e2generation";
  int ret1;
  ret1 = guestfs_set_e2generation (g, arg1615, 123456);
  if (ret1 == -1)
    return -1;
  const char *arg1618 = "/e2generation";
  int64_t ret;
  ret = guestfs_get_e2generation (g, arg1618);
  if (ret == -1)
    return -1;
  if (! (ret == 123456)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_get_e2generation_0", "ret == 123456");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_get_e2uuid_0_skip (void);
static int test_get_e2uuid_0_perform (guestfs_h *);

static int
test_get_e2uuid_0 (guestfs_h *g)
{
  if (test_get_e2uuid_0_skip ()) {
    skipped ("test_get_e2uuid_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_get_e2uuid_0_perform (g);
}

static int
test_get_e2uuid_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_e2uuid") == NULL;
  str = getenv ("SKIP_TEST_GET_E2UUID_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_E2UUID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_e2uuid_0_perform (guestfs_h *g)
{
  /* TestRun for get_e2uuid (0) */
  const char *arg1622 = "/dev/sdc";
  int ret1620;
  ret1620 = guestfs_mke2journal (g, 1024, arg1622);
  if (ret1620 == -1)
    return -1;
  const char *arg1625 = "/dev/sdc";
  CLEANUP_FREE char *ret1624;
  ret1624 = guestfs_get_e2uuid (g, arg1625);
  if (ret1624 == NULL)
      return -1;
  return 0;
}

static int test_get_hv_0_skip (void);
static int test_get_hv_0_perform (guestfs_h *);

static int
test_get_hv_0 (guestfs_h *g)
{
  if (test_get_hv_0_skip ()) {
    skipped ("test_get_hv_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_get_hv_0_perform (g);
}

static int
test_get_hv_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_hv") == NULL;
  str = getenv ("SKIP_TEST_GET_HV_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_HV");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_hv_0_perform (guestfs_h *g)
{
  /* TestRun for get_hv (0) */
  CLEANUP_FREE char *ret1627;
  ret1627 = guestfs_get_hv (g);
  if (ret1627 == NULL)
      return -1;
  return 0;
}

static int test_get_identifier_0_skip (void);
static int test_get_identifier_0_perform (guestfs_h *);

static int
test_get_identifier_0 (guestfs_h *g)
{
  if (test_get_identifier_0_skip ()) {
    skipped ("test_get_identifier_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_get_identifier_0_perform (g);
}

static int
test_get_identifier_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_identifier") == NULL;
  str = getenv ("SKIP_TEST_GET_IDENTIFIER_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_IDENTIFIER");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_identifier_0_perform (guestfs_h *g)
{
  /* TestRun for get_identifier (0) */
  const char *ret1629;
  ret1629 = guestfs_get_identifier (g);
  if (ret1629 == NULL)
      return -1;
  return 0;
}

static int test_get_memsize_0_skip (void);
static int test_get_memsize_0_perform (guestfs_h *);

static int
test_get_memsize_0 (guestfs_h *g)
{
  if (test_get_memsize_0_skip ()) {
    skipped ("test_get_memsize_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_get_memsize_0_perform (g);
}

static int
test_get_memsize_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_memsize") == NULL;
  str = getenv ("SKIP_TEST_GET_MEMSIZE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_MEMSIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_memsize_0_perform (guestfs_h *g)
{
  /* TestResult for get_memsize (0) */
  int ret;
  ret = guestfs_get_memsize (g);
  if (ret == -1)
    return -1;
  if (! (ret >= 256)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_get_memsize_0", "ret >= 256");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_get_path_0_skip (void);
static int test_get_path_0_perform (guestfs_h *);

static int
test_get_path_0 (guestfs_h *g)
{
  if (test_get_path_0_skip ()) {
    skipped ("test_get_path_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_get_path_0_perform (g);
}

static int
test_get_path_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_path") == NULL;
  str = getenv ("SKIP_TEST_GET_PATH_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_PATH");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_path_0_perform (guestfs_h *g)
{
  /* TestRun for get_path (0) */
  const char *ret1632;
  ret1632 = guestfs_get_path (g);
  if (ret1632 == NULL)
      return -1;
  return 0;
}

static int test_get_program_0_skip (void);
static int test_get_program_0_perform (guestfs_h *);

static int
test_get_program_0 (guestfs_h *g)
{
  if (test_get_program_0_skip ()) {
    skipped ("test_get_program_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_get_program_0_perform (g);
}

static int
test_get_program_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_program") == NULL;
  str = getenv ("SKIP_TEST_GET_PROGRAM_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_PROGRAM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_program_0_perform (guestfs_h *g)
{
  /* TestRun for get_program (0) */
  const char *ret1634;
  ret1634 = guestfs_get_program (g);
  if (ret1634 == NULL)
      return -1;
  return 0;
}

static int test_get_qemu_0_skip (void);
static int test_get_qemu_0_perform (guestfs_h *);

static int
test_get_qemu_0 (guestfs_h *g)
{
  if (test_get_qemu_0_skip ()) {
    skipped ("test_get_qemu_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_get_qemu_0_perform (g);
}

static int
test_get_qemu_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_qemu") == NULL;
  str = getenv ("SKIP_TEST_GET_QEMU_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_QEMU");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_qemu_0_perform (guestfs_h *g)
{
  /* TestRun for get_qemu (0) */
  const char *ret1636;
  ret1636 = guestfs_get_qemu (g);
  if (ret1636 == NULL)
      return -1;
  return 0;
}

static int test_get_umask_0_skip (void);
static int test_get_umask_0_perform (guestfs_h *);

static int
test_get_umask_0 (guestfs_h *g)
{
  if (test_get_umask_0_skip ()) {
    skipped ("test_get_umask_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_get_umask_0_perform (g);
}

static int
test_get_umask_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "get_umask") == NULL;
  str = getenv ("SKIP_TEST_GET_UMASK_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GET_UMASK");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_get_umask_0_perform (guestfs_h *g)
{
  /* TestResult for get_umask (0) */
  int ret;
  ret = guestfs_get_umask (g);
  if (ret == -1)
    return -1;
  if (! (ret == 022)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_get_umask_0", "ret == 022");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_glob_expand_0_skip (void);
static int test_glob_expand_0_perform (guestfs_h *);

static int
test_glob_expand_0 (guestfs_h *g)
{
  if (test_glob_expand_0_skip ()) {
    skipped ("test_glob_expand_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_glob_expand_0_perform (g);
}

static int
test_glob_expand_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "glob_expand") == NULL;
  str = getenv ("SKIP_TEST_GLOB_EXPAND_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GLOB_EXPAND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_glob_expand_0_perform (guestfs_h *g)
{
  /* TestResult for glob_expand (0) */
  const char *arg1639 = "/glob_expand/b/c";
  int ret3;
  ret3 = guestfs_mkdir_p (g, arg1639);
  if (ret3 == -1)
    return -1;
  const char *arg1641 = "/glob_expand/b/c/d";
  int ret2;
  ret2 = guestfs_touch (g, arg1641);
  if (ret2 == -1)
    return -1;
  const char *arg1643 = "/glob_expand/b/c/e";
  int ret1;
  ret1 = guestfs_touch (g, arg1643);
  if (ret1 == -1)
    return -1;
  const char *arg1645 = "/glob_expand/b/c/*";
  struct guestfs_glob_expand_opts_argv optargs1646;
  optargs1646.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_glob_expand_opts_argv (g, arg1645, &optargs1646);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "/glob_expand/b/c/d", "/glob_expand/b/c/e"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_glob_expand_0", "is_string_list (ret, 2, \"/glob_expand/b/c/d\", \"/glob_expand/b/c/e\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_glob_expand_1_skip (void);
static int test_glob_expand_1_perform (guestfs_h *);

static int
test_glob_expand_1 (guestfs_h *g)
{
  if (test_glob_expand_1_skip ()) {
    skipped ("test_glob_expand_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_glob_expand_1_perform (g);
}

static int
test_glob_expand_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "glob_expand") == NULL;
  str = getenv ("SKIP_TEST_GLOB_EXPAND_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GLOB_EXPAND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_glob_expand_1_perform (guestfs_h *g)
{
  /* TestResult for glob_expand (1) */
  const char *arg1647 = "/glob_expand2/b/c";
  int ret3;
  ret3 = guestfs_mkdir_p (g, arg1647);
  if (ret3 == -1)
    return -1;
  const char *arg1649 = "/glob_expand2/b/c/d";
  int ret2;
  ret2 = guestfs_touch (g, arg1649);
  if (ret2 == -1)
    return -1;
  const char *arg1651 = "/glob_expand2/b/c/e";
  int ret1;
  ret1 = guestfs_touch (g, arg1651);
  if (ret1 == -1)
    return -1;
  const char *arg1653 = "/glob_expand2/*/c/*";
  struct guestfs_glob_expand_opts_argv optargs1654;
  optargs1654.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_glob_expand_opts_argv (g, arg1653, &optargs1654);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "/glob_expand2/b/c/d", "/glob_expand2/b/c/e"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_glob_expand_1", "is_string_list (ret, 2, \"/glob_expand2/b/c/d\", \"/glob_expand2/b/c/e\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_glob_expand_2_skip (void);
static int test_glob_expand_2_perform (guestfs_h *);

static int
test_glob_expand_2 (guestfs_h *g)
{
  if (test_glob_expand_2_skip ()) {
    skipped ("test_glob_expand_2", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_glob_expand_2_perform (g);
}

static int
test_glob_expand_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "glob_expand") == NULL;
  str = getenv ("SKIP_TEST_GLOB_EXPAND_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GLOB_EXPAND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_glob_expand_2_perform (guestfs_h *g)
{
  /* TestResult for glob_expand (2) */
  const char *arg1655 = "/glob_expand3/b/c";
  int ret3;
  ret3 = guestfs_mkdir_p (g, arg1655);
  if (ret3 == -1)
    return -1;
  const char *arg1657 = "/glob_expand3/b/c/d";
  int ret2;
  ret2 = guestfs_touch (g, arg1657);
  if (ret2 == -1)
    return -1;
  const char *arg1659 = "/glob_expand3/b/c/e";
  int ret1;
  ret1 = guestfs_touch (g, arg1659);
  if (ret1 == -1)
    return -1;
  const char *arg1661 = "/glob_expand3/*/x/*";
  struct guestfs_glob_expand_opts_argv optargs1662;
  optargs1662.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_glob_expand_opts_argv (g, arg1661, &optargs1662);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_glob_expand_2", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_glob_expand_3_skip (void);
static int test_glob_expand_3_perform (guestfs_h *);

static int
test_glob_expand_3 (guestfs_h *g)
{
  if (test_glob_expand_3_skip ()) {
    skipped ("test_glob_expand_3", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_glob_expand_3_perform (g);
}

static int
test_glob_expand_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "glob_expand") == NULL;
  str = getenv ("SKIP_TEST_GLOB_EXPAND_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GLOB_EXPAND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_glob_expand_3_perform (guestfs_h *g)
{
  /* TestResult for glob_expand (3) */
  const char *arg1663 = "/glob_expand4/b/c";
  int ret3;
  ret3 = guestfs_mkdir_p (g, arg1663);
  if (ret3 == -1)
    return -1;
  const char *arg1665 = "/glob_expand4/b1";
  int ret2;
  ret2 = guestfs_touch (g, arg1665);
  if (ret2 == -1)
    return -1;
  const char *arg1667 = "/glob_expand4/c1";
  int ret1;
  ret1 = guestfs_touch (g, arg1667);
  if (ret1 == -1)
    return -1;
  const char *arg1669 = "/glob_expand4/b*";
  struct guestfs_glob_expand_opts_argv optargs1670;
  optargs1670.directoryslash = 0;
  optargs1670.bitmask = UINT64_C(0x1);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_glob_expand_opts_argv (g, arg1669, &optargs1670);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "/glob_expand4/b", "/glob_expand4/b1"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_glob_expand_3", "is_string_list (ret, 2, \"/glob_expand4/b\", \"/glob_expand4/b1\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_grep_0_skip (void);
static int test_grep_0_perform (guestfs_h *);

static int
test_grep_0 (guestfs_h *g)
{
  if (test_grep_0_skip ()) {
    skipped ("test_grep_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_grep_0_perform (g);
}

static int
test_grep_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "grep") == NULL;
  str = getenv ("SKIP_TEST_GREP_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_grep_0_perform (guestfs_h *g)
{
  /* TestResult for grep (0) */
  const char *arg1671 = "abc";
  const char *arg1672 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1673;
  optargs1673.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1671, arg1672, &optargs1673);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "abc", "abc123"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_grep_0", "is_string_list (ret, 2, \"abc\", \"abc123\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_grep_1_skip (void);
static int test_grep_1_perform (guestfs_h *);

static int
test_grep_1 (guestfs_h *g)
{
  if (test_grep_1_skip ()) {
    skipped ("test_grep_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_grep_1_perform (g);
}

static int
test_grep_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "grep") == NULL;
  str = getenv ("SKIP_TEST_GREP_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_grep_1_perform (guestfs_h *g)
{
  /* TestResult for grep (1) */
  const char *arg1674 = "nomatch";
  const char *arg1675 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1676;
  optargs1676.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1674, arg1675, &optargs1676);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_grep_1", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_grep_2_skip (void);
static int test_grep_2_perform (guestfs_h *);

static int
test_grep_2 (guestfs_h *g)
{
  if (test_grep_2_skip ()) {
    skipped ("test_grep_2", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_grep_2_perform (g);
}

static int
test_grep_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "grep") == NULL;
  str = getenv ("SKIP_TEST_GREP_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_grep_2_perform (guestfs_h *g)
{
  /* TestResult for grep (2) */
  const char *arg1677 = "nomatch";
  const char *arg1678 = "/abssymlink";
  struct guestfs_grep_opts_argv optargs1679;
  optargs1679.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1677, arg1678, &optargs1679);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_grep_2", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_grep_3_skip (void);
static int test_grep_3_perform (guestfs_h *);

static int
test_grep_3 (guestfs_h *g)
{
  if (test_grep_3_skip ()) {
    skipped ("test_grep_3", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_grep_3_perform (g);
}

static int
test_grep_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "grep") == NULL;
  str = getenv ("SKIP_TEST_GREP_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_grep_3_perform (guestfs_h *g)
{
  /* TestResult for grep (3) */
  const char *arg1680 = "abc";
  const char *arg1681 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1682;
  optargs1682.extended = 1;
  optargs1682.bitmask = UINT64_C(0x1);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1680, arg1681, &optargs1682);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "abc", "abc123"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_grep_3", "is_string_list (ret, 2, \"abc\", \"abc123\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_grep_4_skip (void);
static int test_grep_4_perform (guestfs_h *);

static int
test_grep_4 (guestfs_h *g)
{
  if (test_grep_4_skip ()) {
    skipped ("test_grep_4", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_grep_4_perform (g);
}

static int
test_grep_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "grep") == NULL;
  str = getenv ("SKIP_TEST_GREP_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_grep_4_perform (guestfs_h *g)
{
  /* TestResult for grep (4) */
  const char *arg1683 = "abc";
  const char *arg1684 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1685;
  optargs1685.fixed = 1;
  optargs1685.bitmask = UINT64_C(0x2);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1683, arg1684, &optargs1685);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "abc", "abc123"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_grep_4", "is_string_list (ret, 2, \"abc\", \"abc123\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_grep_5_skip (void);
static int test_grep_5_perform (guestfs_h *);

static int
test_grep_5 (guestfs_h *g)
{
  if (test_grep_5_skip ()) {
    skipped ("test_grep_5", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_grep_5_perform (g);
}

static int
test_grep_5_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "grep") == NULL;
  str = getenv ("SKIP_TEST_GREP_5");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_grep_5_perform (guestfs_h *g)
{
  /* TestResult for grep (5) */
  const char *arg1686 = "abc";
  const char *arg1687 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1688;
  optargs1688.insensitive = 1;
  optargs1688.bitmask = UINT64_C(0x4);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1686, arg1687, &optargs1688);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "abc", "abc123", "ABC"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_grep_5", "is_string_list (ret, 3, \"abc\", \"abc123\", \"ABC\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_grep_6_skip (void);
static int test_grep_6_perform (guestfs_h *);

static int
test_grep_6 (guestfs_h *g)
{
  if (test_grep_6_skip ()) {
    skipped ("test_grep_6", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_grep_6_perform (g);
}

static int
test_grep_6_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "grep") == NULL;
  str = getenv ("SKIP_TEST_GREP_6");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_grep_6_perform (guestfs_h *g)
{
  /* TestResult for grep (6) */
  const char *arg1689 = "abc";
  const char *arg1690 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1691;
  optargs1691.extended = 1;
  optargs1691.insensitive = 1;
  optargs1691.bitmask = UINT64_C(0x5);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1689, arg1690, &optargs1691);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "abc", "abc123", "ABC"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_grep_6", "is_string_list (ret, 3, \"abc\", \"abc123\", \"ABC\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_grep_7_skip (void);
static int test_grep_7_perform (guestfs_h *);

static int
test_grep_7 (guestfs_h *g)
{
  if (test_grep_7_skip ()) {
    skipped ("test_grep_7", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_grep_7_perform (g);
}

static int
test_grep_7_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "grep") == NULL;
  str = getenv ("SKIP_TEST_GREP_7");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_grep_7_perform (guestfs_h *g)
{
  /* TestResult for grep (7) */
  const char *arg1692 = "abc";
  const char *arg1693 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1694;
  optargs1694.fixed = 1;
  optargs1694.insensitive = 1;
  optargs1694.bitmask = UINT64_C(0x6);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1692, arg1693, &optargs1694);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "abc", "abc123", "ABC"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_grep_7", "is_string_list (ret, 3, \"abc\", \"abc123\", \"ABC\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_grep_8_skip (void);
static int test_grep_8_perform (guestfs_h *);

static int
test_grep_8 (guestfs_h *g)
{
  if (test_grep_8_skip ()) {
    skipped ("test_grep_8", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_grep_8_perform (g);
}

static int
test_grep_8_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "grep") == NULL;
  str = getenv ("SKIP_TEST_GREP_8");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_grep_8_perform (guestfs_h *g)
{
  /* TestResult for grep (8) */
  const char *arg1695 = "abc";
  const char *arg1696 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1697;
  optargs1697.compressed = 1;
  optargs1697.bitmask = UINT64_C(0x8);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1695, arg1696, &optargs1697);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "abc", "abc123"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_grep_8", "is_string_list (ret, 2, \"abc\", \"abc123\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_grep_9_skip (void);
static int test_grep_9_perform (guestfs_h *);

static int
test_grep_9 (guestfs_h *g)
{
  if (test_grep_9_skip ()) {
    skipped ("test_grep_9", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_grep_9_perform (g);
}

static int
test_grep_9_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "grep") == NULL;
  str = getenv ("SKIP_TEST_GREP_9");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_grep_9_perform (guestfs_h *g)
{
  /* TestResult for grep (9) */
  const char *arg1698 = "abc";
  const char *arg1699 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1700;
  optargs1700.extended = 1;
  optargs1700.compressed = 1;
  optargs1700.bitmask = UINT64_C(0x9);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1698, arg1699, &optargs1700);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "abc", "abc123"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_grep_9", "is_string_list (ret, 2, \"abc\", \"abc123\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_grep_10_skip (void);
static int test_grep_10_perform (guestfs_h *);

static int
test_grep_10 (guestfs_h *g)
{
  if (test_grep_10_skip ()) {
    skipped ("test_grep_10", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_grep_10_perform (g);
}

static int
test_grep_10_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "grep") == NULL;
  str = getenv ("SKIP_TEST_GREP_10");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_grep_10_perform (guestfs_h *g)
{
  /* TestResult for grep (10) */
  const char *arg1701 = "abc";
  const char *arg1702 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1703;
  optargs1703.fixed = 1;
  optargs1703.compressed = 1;
  optargs1703.bitmask = UINT64_C(0xa);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1701, arg1702, &optargs1703);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "abc", "abc123"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_grep_10", "is_string_list (ret, 2, \"abc\", \"abc123\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_grep_11_skip (void);
static int test_grep_11_perform (guestfs_h *);

static int
test_grep_11 (guestfs_h *g)
{
  if (test_grep_11_skip ()) {
    skipped ("test_grep_11", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_grep_11_perform (g);
}

static int
test_grep_11_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "grep") == NULL;
  str = getenv ("SKIP_TEST_GREP_11");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_grep_11_perform (guestfs_h *g)
{
  /* TestResult for grep (11) */
  const char *arg1704 = "abc";
  const char *arg1705 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1706;
  optargs1706.insensitive = 1;
  optargs1706.compressed = 1;
  optargs1706.bitmask = UINT64_C(0xc);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1704, arg1705, &optargs1706);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "abc", "abc123", "ABC"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_grep_11", "is_string_list (ret, 3, \"abc\", \"abc123\", \"ABC\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_grep_12_skip (void);
static int test_grep_12_perform (guestfs_h *);

static int
test_grep_12 (guestfs_h *g)
{
  if (test_grep_12_skip ()) {
    skipped ("test_grep_12", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_grep_12_perform (g);
}

static int
test_grep_12_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "grep") == NULL;
  str = getenv ("SKIP_TEST_GREP_12");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_grep_12_perform (guestfs_h *g)
{
  /* TestResult for grep (12) */
  const char *arg1707 = "abc";
  const char *arg1708 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1709;
  optargs1709.extended = 1;
  optargs1709.insensitive = 1;
  optargs1709.compressed = 1;
  optargs1709.bitmask = UINT64_C(0xd);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1707, arg1708, &optargs1709);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "abc", "abc123", "ABC"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_grep_12", "is_string_list (ret, 3, \"abc\", \"abc123\", \"ABC\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_grep_13_skip (void);
static int test_grep_13_perform (guestfs_h *);

static int
test_grep_13 (guestfs_h *g)
{
  if (test_grep_13_skip ()) {
    skipped ("test_grep_13", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_grep_13_perform (g);
}

static int
test_grep_13_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "grep") == NULL;
  str = getenv ("SKIP_TEST_GREP_13");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_grep_13_perform (guestfs_h *g)
{
  /* TestResult for grep (13) */
  const char *arg1710 = "abc";
  const char *arg1711 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1712;
  optargs1712.fixed = 1;
  optargs1712.insensitive = 1;
  optargs1712.compressed = 1;
  optargs1712.bitmask = UINT64_C(0xe);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1710, arg1711, &optargs1712);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "abc", "abc123", "ABC"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_grep_13", "is_string_list (ret, 3, \"abc\", \"abc123\", \"ABC\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_grepi_0_skip (void);
static int test_grepi_0_perform (guestfs_h *);

static int
test_grepi_0 (guestfs_h *g)
{
  if (test_grepi_0_skip ()) {
    skipped ("test_grepi_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_grepi_0_perform (g);
}

static int
test_grepi_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "grepi") == NULL;
  str = getenv ("SKIP_TEST_GREPI_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GREPI");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_grepi_0_perform (guestfs_h *g)
{
  /* TestResult for grepi (0) */
  const char *arg1713 = "abc";
  const char *arg1714 = "/test-grep.txt";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grepi (g, arg1713, arg1714);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "abc", "abc123", "ABC"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_grepi_0", "is_string_list (ret, 3, \"abc\", \"abc123\", \"ABC\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_grub_install_0_skip (void);
static int test_grub_install_0_perform (guestfs_h *);

static int
test_grub_install_0 (guestfs_h *g)
{
  if (test_grub_install_0_skip ()) {
    skipped ("test_grub_install_0", "environment variable set");
    return 0;
  }

  const char *features1716[] = { "grub", NULL };
  if (!guestfs_feature_available (g, (char **) features1716)) {
    skipped ("test_grub_install_0", "group %s not available in daemon",
             features1716[0]);
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_grub_install_0_perform (g);
}

static int
test_grub_install_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "grub_install") == NULL;
  str = getenv ("SKIP_TEST_GRUB_INSTALL_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_GRUB_INSTALL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_grub_install_0_perform (guestfs_h *g)
{
  /* TestResultTrue for grub_install (0) */
  const char *arg1718 = "/boot/grub";
  int ret1717;
  ret1717 = guestfs_mkdir_p (g, arg1718);
  if (ret1717 == -1)
    return -1;
  const char *arg1721 = "/boot/grub/device.map";
  const char *arg1722 = "(hd0) /dev/sda";
  size_t arg1722_size = 14;
  int ret1720;
  ret1720 = guestfs_write (g, arg1721, arg1722, arg1722_size);
  if (ret1720 == -1)
    return -1;
  const char *arg1725 = "/";
  const char *arg1726 = "/dev/sda";
  int ret1724;
  ret1724 = guestfs_grub_install (g, arg1725, arg1726);
  if (ret1724 == -1)
    return -1;
  const char *arg1728 = "/boot";
  struct guestfs_is_dir_opts_argv optargs1729;
  optargs1729.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg1728, &optargs1729);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_grub_install_0", "is_dir");
    return -1;
  }
  return 0;
}

static int test_head_0_skip (void);
static int test_head_0_perform (guestfs_h *);

static int
test_head_0 (guestfs_h *g)
{
  if (test_head_0_skip ()) {
    skipped ("test_head_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_head_0_perform (g);
}

static int
test_head_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "head") == NULL;
  str = getenv ("SKIP_TEST_HEAD_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_HEAD");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_head_0_perform (guestfs_h *g)
{
  /* TestResult for head (0) */
  const char *arg1730 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_head (g, arg1730);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 10, "0abcdefghijklmnopqrstuvwxyz", "1abcdefghijklmnopqrstuvwxyz", "2abcdefghijklmnopqrstuvwxyz", "3abcdefghijklmnopqrstuvwxyz", "4abcdefghijklmnopqrstuvwxyz", "5abcdefghijklmnopqrstuvwxyz", "6abcdefghijklmnopqrstuvwxyz", "7abcdefghijklmnopqrstuvwxyz", "8abcdefghijklmnopqrstuvwxyz", "9abcdefghijklmnopqrstuvwxyz"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_head_0", "is_string_list (ret, 10, \"0abcdefghijklmnopqrstuvwxyz\", \"1abcdefghijklmnopqrstuvwxyz\", \"2abcdefghijklmnopqrstuvwxyz\", \"3abcdefghijklmnopqrstuvwxyz\", \"4abcdefghijklmnopqrstuvwxyz\", \"5abcdefghijklmnopqrstuvwxyz\", \"6abcdefghijklmnopqrstuvwxyz\", \"7abcdefghijklmnopqrstuvwxyz\", \"8abcdefghijklmnopqrstuvwxyz\", \"9abcdefghijklmnopqrstuvwxyz\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_head_1_skip (void);
static int test_head_1_perform (guestfs_h *);

static int
test_head_1 (guestfs_h *g)
{
  if (test_head_1_skip ()) {
    skipped ("test_head_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_head_1_perform (g);
}

static int
test_head_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "head") == NULL;
  str = getenv ("SKIP_TEST_HEAD_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_HEAD");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_head_1_perform (guestfs_h *g)
{
  /* TestResult for head (1) */
  const char *arg1732 = "/abssymlink";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_head (g, arg1732);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 10, "0abcdefghijklmnopqrstuvwxyz", "1abcdefghijklmnopqrstuvwxyz", "2abcdefghijklmnopqrstuvwxyz", "3abcdefghijklmnopqrstuvwxyz", "4abcdefghijklmnopqrstuvwxyz", "5abcdefghijklmnopqrstuvwxyz", "6abcdefghijklmnopqrstuvwxyz", "7abcdefghijklmnopqrstuvwxyz", "8abcdefghijklmnopqrstuvwxyz", "9abcdefghijklmnopqrstuvwxyz"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_head_1", "is_string_list (ret, 10, \"0abcdefghijklmnopqrstuvwxyz\", \"1abcdefghijklmnopqrstuvwxyz\", \"2abcdefghijklmnopqrstuvwxyz\", \"3abcdefghijklmnopqrstuvwxyz\", \"4abcdefghijklmnopqrstuvwxyz\", \"5abcdefghijklmnopqrstuvwxyz\", \"6abcdefghijklmnopqrstuvwxyz\", \"7abcdefghijklmnopqrstuvwxyz\", \"8abcdefghijklmnopqrstuvwxyz\", \"9abcdefghijklmnopqrstuvwxyz\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_head_n_0_skip (void);
static int test_head_n_0_perform (guestfs_h *);

static int
test_head_n_0 (guestfs_h *g)
{
  if (test_head_n_0_skip ()) {
    skipped ("test_head_n_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_head_n_0_perform (g);
}

static int
test_head_n_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "head_n") == NULL;
  str = getenv ("SKIP_TEST_HEAD_N_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_HEAD_N");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_head_n_0_perform (guestfs_h *g)
{
  /* TestResult for head_n (0) */
  const char *arg1735 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_head_n (g, 3, arg1735);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "0abcdefghijklmnopqrstuvwxyz", "1abcdefghijklmnopqrstuvwxyz", "2abcdefghijklmnopqrstuvwxyz"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_head_n_0", "is_string_list (ret, 3, \"0abcdefghijklmnopqrstuvwxyz\", \"1abcdefghijklmnopqrstuvwxyz\", \"2abcdefghijklmnopqrstuvwxyz\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_head_n_1_skip (void);
static int test_head_n_1_perform (guestfs_h *);

static int
test_head_n_1 (guestfs_h *g)
{
  if (test_head_n_1_skip ()) {
    skipped ("test_head_n_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_head_n_1_perform (g);
}

static int
test_head_n_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "head_n") == NULL;
  str = getenv ("SKIP_TEST_HEAD_N_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_HEAD_N");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_head_n_1_perform (guestfs_h *g)
{
  /* TestResult for head_n (1) */
  const char *arg1738 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_head_n (g, -9997, arg1738);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "0abcdefghijklmnopqrstuvwxyz", "1abcdefghijklmnopqrstuvwxyz", "2abcdefghijklmnopqrstuvwxyz"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_head_n_1", "is_string_list (ret, 3, \"0abcdefghijklmnopqrstuvwxyz\", \"1abcdefghijklmnopqrstuvwxyz\", \"2abcdefghijklmnopqrstuvwxyz\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_head_n_2_skip (void);
static int test_head_n_2_perform (guestfs_h *);

static int
test_head_n_2 (guestfs_h *g)
{
  if (test_head_n_2_skip ()) {
    skipped ("test_head_n_2", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_head_n_2_perform (g);
}

static int
test_head_n_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "head_n") == NULL;
  str = getenv ("SKIP_TEST_HEAD_N_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_HEAD_N");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_head_n_2_perform (guestfs_h *g)
{
  /* TestResult for head_n (2) */
  const char *arg1741 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_head_n (g, 0, arg1741);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_head_n_2", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_hexdump_0_skip (void);
static int test_hexdump_0_perform (guestfs_h *);

static int
test_hexdump_0 (guestfs_h *g)
{
  if (test_hexdump_0_skip ()) {
    skipped ("test_hexdump_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_hexdump_0_perform (g);
}

static int
test_hexdump_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "hexdump") == NULL;
  str = getenv ("SKIP_TEST_HEXDUMP_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_HEXDUMP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_hexdump_0_perform (guestfs_h *g)
{
  /* TestResultString for hexdump (0) */
  const char *arg1743 = "/known-4";
  CLEANUP_FREE char *ret;
  ret = guestfs_hexdump (g, arg1743);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "00000000  61 62 63 0a 64 65 66 0a  67 68 69                 |abc.def.ghi|\n0000000b\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_hexdump_0", "hexdump", "00000000  61 62 63 0a 64 65 66 0a  67 68 69                 |abc.def.ghi|\n0000000b\n", ret);
    return -1;
  }
  return 0;
}

static int test_hexdump_1_skip (void);
static int test_hexdump_1_perform (guestfs_h *);

static int
test_hexdump_1 (guestfs_h *g)
{
  if (test_hexdump_1_skip ()) {
    skipped ("test_hexdump_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_hexdump_1_perform (g);
}

static int
test_hexdump_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "hexdump") == NULL;
  str = getenv ("SKIP_TEST_HEXDUMP_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_HEXDUMP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_hexdump_1_perform (guestfs_h *g)
{
  /* TestRun for hexdump (1) */
  const char *arg1746 = "/100krandom";
  CLEANUP_FREE char *ret1745;
  ret1745 = guestfs_hexdump (g, arg1746);
  if (ret1745 == NULL)
      return -1;
  return 0;
}

static int test_hexdump_2_skip (void);
static int test_hexdump_2_perform (guestfs_h *);

static int
test_hexdump_2 (guestfs_h *g)
{
  if (test_hexdump_2_skip ()) {
    skipped ("test_hexdump_2", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_hexdump_2_perform (g);
}

static int
test_hexdump_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "hexdump") == NULL;
  str = getenv ("SKIP_TEST_HEXDUMP_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_HEXDUMP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_hexdump_2_perform (guestfs_h *g)
{
  /* TestRun for hexdump (2) */
  const char *arg1749 = "/abssymlink";
  CLEANUP_FREE char *ret1748;
  ret1748 = guestfs_hexdump (g, arg1749);
  if (ret1748 == NULL)
      return -1;
  return 0;
}

static int test_hivex_commit_0_skip (void);
static int test_hivex_commit_0_perform (guestfs_h *);
static int test_hivex_commit_0_cleanup (guestfs_h *);

static int
test_hivex_commit_0 (guestfs_h *g)
{
  if (test_hivex_commit_0_skip ()) {
    skipped ("test_hivex_commit_0", "environment variable set");
    return 0;
  }

  const char *features1751[] = { "hivex", NULL };
  if (!guestfs_feature_available (g, (char **) features1751)) {
    skipped ("test_hivex_commit_0", "group %s not available in daemon",
             features1751[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  int ret = test_hivex_commit_0_perform (g);
  if (test_hivex_commit_0_cleanup (g) == -1) {
    fprintf (stderr, "%s (%d): unexpected error during test cleanups\n",
             "hivex_commit", 0);
    return -1;
  }
  return ret;
}

static int
test_hivex_commit_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "hivex_commit") == NULL;
  str = getenv ("SKIP_TEST_HIVEX_COMMIT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_HIVEX_COMMIT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_hivex_commit_0_perform (guestfs_h *g)
{
  /* TestRun for hivex_commit (0) */
  CLEANUP_FREE char *arg1753 = substitute_srcdir ("$srcdir/../test-data/files/minimal");
  const char *arg1754 = "/hivex_commit1";
  int ret1752;
  ret1752 = guestfs_upload (g, arg1753, arg1754);
  if (ret1752 == -1)
    return -1;
  const char *arg1757 = "/hivex_commit1";
  struct guestfs_hivex_open_argv optargs1758;
  optargs1758.write = 1;
  optargs1758.bitmask = UINT64_C(0x4);
  int ret1756;
  ret1756 = guestfs_hivex_open_argv (g, arg1757, &optargs1758);
  if (ret1756 == -1)
    return -1;
  int ret1759;
  ret1759 = guestfs_hivex_commit (g, NULL);
  if (ret1759 == -1)
    return -1;
  return 0;
}

static int
test_hivex_commit_0_cleanup (guestfs_h *g)
{
  int ret1762;
  ret1762 = guestfs_hivex_close (g);
  if (ret1762 == -1)
    return -1;
  return 0;
}

static int test_hivex_commit_1_skip (void);
static int test_hivex_commit_1_perform (guestfs_h *);
static int test_hivex_commit_1_cleanup (guestfs_h *);

static int
test_hivex_commit_1 (guestfs_h *g)
{
  if (test_hivex_commit_1_skip ()) {
    skipped ("test_hivex_commit_1", "environment variable set");
    return 0;
  }

  const char *features1764[] = { "hivex", NULL };
  if (!guestfs_feature_available (g, (char **) features1764)) {
    skipped ("test_hivex_commit_1", "group %s not available in daemon",
             features1764[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  int ret = test_hivex_commit_1_perform (g);
  if (test_hivex_commit_1_cleanup (g) == -1) {
    fprintf (stderr, "%s (%d): unexpected error during test cleanups\n",
             "hivex_commit", 1);
    return -1;
  }
  return ret;
}

static int
test_hivex_commit_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "hivex_commit") == NULL;
  str = getenv ("SKIP_TEST_HIVEX_COMMIT_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_HIVEX_COMMIT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_hivex_commit_1_perform (guestfs_h *g)
{
  /* TestResultTrue for hivex_commit (1) */
  CLEANUP_FREE char *arg1766 = substitute_srcdir ("$srcdir/../test-data/files/minimal");
  const char *arg1767 = "/hivex_commit2";
  int ret1765;
  ret1765 = guestfs_upload (g, arg1766, arg1767);
  if (ret1765 == -1)
    return -1;
  const char *arg1770 = "/hivex_commit2";
  struct guestfs_hivex_open_argv optargs1771;
  optargs1771.write = 1;
  optargs1771.bitmask = UINT64_C(0x4);
  int ret1769;
  ret1769 = guestfs_hivex_open_argv (g, arg1770, &optargs1771);
  if (ret1769 == -1)
    return -1;
  const char *arg1773 = "/hivex_commit2_copy";
  int ret1772;
  ret1772 = guestfs_hivex_commit (g, arg1773);
  if (ret1772 == -1)
    return -1;
  const char *arg1775 = "/hivex_commit2_copy";
  struct guestfs_is_file_opts_argv optargs1776;
  optargs1776.followsymlinks = 0;
  optargs1776.bitmask = UINT64_C(0x1);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg1775, &optargs1776);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_hivex_commit_1", "is_file");
    return -1;
  }
  return 0;
}

static int
test_hivex_commit_1_cleanup (guestfs_h *g)
{
  int ret1777;
  ret1777 = guestfs_hivex_close (g);
  if (ret1777 == -1)
    return -1;
  return 0;
}

static int test_hivex_open_0_skip (void);
static int test_hivex_open_0_perform (guestfs_h *);
static int test_hivex_open_0_cleanup (guestfs_h *);

static int
test_hivex_open_0 (guestfs_h *g)
{
  if (test_hivex_open_0_skip ()) {
    skipped ("test_hivex_open_0", "environment variable set");
    return 0;
  }

  const char *features1779[] = { "hivex", NULL };
  if (!guestfs_feature_available (g, (char **) features1779)) {
    skipped ("test_hivex_open_0", "group %s not available in daemon",
             features1779[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  int ret = test_hivex_open_0_perform (g);
  if (test_hivex_open_0_cleanup (g) == -1) {
    fprintf (stderr, "%s (%d): unexpected error during test cleanups\n",
             "hivex_open", 0);
    return -1;
  }
  return ret;
}

static int
test_hivex_open_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "hivex_open") == NULL;
  str = getenv ("SKIP_TEST_HIVEX_OPEN_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_HIVEX_OPEN");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_hivex_open_0_perform (guestfs_h *g)
{
  /* TestRun for hivex_open (0) */
  CLEANUP_FREE char *arg1781 = substitute_srcdir ("$srcdir/../test-data/files/minimal");
  const char *arg1782 = "/hivex_open";
  int ret1780;
  ret1780 = guestfs_upload (g, arg1781, arg1782);
  if (ret1780 == -1)
    return -1;
  const char *arg1785 = "/hivex_open";
  struct guestfs_hivex_open_argv optargs1786;
  optargs1786.write = 0;
  optargs1786.bitmask = UINT64_C(0x4);
  int ret1784;
  ret1784 = guestfs_hivex_open_argv (g, arg1785, &optargs1786);
  if (ret1784 == -1)
    return -1;
  int64_t ret1787;
  ret1787 = guestfs_hivex_root (g);
  if (ret1787 == -1)
    return -1;
  CLEANUP_FREE char *ret1789;
  ret1789 = guestfs_hivex_node_name (g, 4128);
  if (ret1789 == NULL)
      return -1;
  CLEANUP_FREE_HIVEX_NODE_LIST struct guestfs_hivex_node_list *ret1792;
  ret1792 = guestfs_hivex_node_children (g, 4128);
  if (ret1792 == NULL)
      return -1;
  CLEANUP_FREE_HIVEX_VALUE_LIST struct guestfs_hivex_value_list *ret1795;
  ret1795 = guestfs_hivex_node_values (g, 4128);
  if (ret1795 == NULL)
      return -1;
  return 0;
}

static int
test_hivex_open_0_cleanup (guestfs_h *g)
{
  int ret1798;
  ret1798 = guestfs_hivex_close (g);
  if (ret1798 == -1)
    return -1;
  return 0;
}

static int test_initrd_cat_0_skip (void);
static int test_initrd_cat_0_perform (guestfs_h *);

static int
test_initrd_cat_0 (guestfs_h *g)
{
  if (test_initrd_cat_0_skip ()) {
    skipped ("test_initrd_cat_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_initrd_cat_0_perform (g);
}

static int
test_initrd_cat_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "initrd_cat") == NULL;
  str = getenv ("SKIP_TEST_INITRD_CAT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_INITRD_CAT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_initrd_cat_0_perform (guestfs_h *g)
{
  /* TestResult for initrd_cat (0) */
  const char *arg1800 = "/initrd";
  const char *arg1801 = "known-4";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_initrd_cat (g, arg1800, arg1801, &size);
  if (ret == NULL)
      return -1;
  if (! (compare_buffers (ret, size, "abc\ndef\nghi", 11) == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_initrd_cat_0", "compare_buffers (ret, size, \"abc\\ndef\\nghi\", 11) == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_initrd_list_0_skip (void);
static int test_initrd_list_0_perform (guestfs_h *);

static int
test_initrd_list_0 (guestfs_h *g)
{
  if (test_initrd_list_0_skip ()) {
    skipped ("test_initrd_list_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_initrd_list_0_perform (g);
}

static int
test_initrd_list_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "initrd_list") == NULL;
  str = getenv ("SKIP_TEST_INITRD_LIST_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_INITRD_LIST");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_initrd_list_0_perform (guestfs_h *g)
{
  /* TestResult for initrd_list (0) */
  const char *arg1803 = "/initrd";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_initrd_list (g, arg1803);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 6, "empty", "known-1", "known-2", "known-3", "known-4", "known-5"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_initrd_list_0", "is_string_list (ret, 6, \"empty\", \"known-1\", \"known-2\", \"known-3\", \"known-4\", \"known-5\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_inotify_add_watch_0_skip (void);
static int test_inotify_add_watch_0_perform (guestfs_h *);

static int
test_inotify_add_watch_0 (guestfs_h *g)
{
  if (test_inotify_add_watch_0_skip ()) {
    skipped ("test_inotify_add_watch_0", "environment variable set");
    return 0;
  }

  const char *features1805[] = { "inotify", NULL };
  if (!guestfs_feature_available (g, (char **) features1805)) {
    skipped ("test_inotify_add_watch_0", "group %s not available in daemon",
             features1805[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_inotify_add_watch_0_perform (g);
}

static int
test_inotify_add_watch_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "inotify_add_watch") == NULL;
  str = getenv ("SKIP_TEST_INOTIFY_ADD_WATCH_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_INOTIFY_ADD_WATCH");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_inotify_add_watch_0_perform (guestfs_h *g)
{
  /* TestResult for inotify_add_watch (0) */
  const char *arg1806 = "/inotify_add_watch";
  int ret5;
  ret5 = guestfs_mkdir (g, arg1806);
  if (ret5 == -1)
    return -1;
  int ret4;
  ret4 = guestfs_inotify_init (g, 0);
  if (ret4 == -1)
    return -1;
  const char *arg1810 = "/inotify_add_watch";
  int64_t ret3;
  ret3 = guestfs_inotify_add_watch (g, arg1810, 4095);
  if (ret3 == -1)
    return -1;
  const char *arg1813 = "/inotify_add_watch/a";
  int ret2;
  ret2 = guestfs_touch (g, arg1813);
  if (ret2 == -1)
    return -1;
  const char *arg1815 = "/inotify_add_watch/b";
  int ret1;
  ret1 = guestfs_touch (g, arg1815);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_inotify_files (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "a", "b"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_inotify_add_watch_0", "is_string_list (ret, 2, \"a\", \"b\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_inotify_init_0_skip (void);
static int test_inotify_init_0_perform (guestfs_h *);

static int
test_inotify_init_0 (guestfs_h *g)
{
  if (test_inotify_init_0_skip ()) {
    skipped ("test_inotify_init_0", "environment variable set");
    return 0;
  }

  const char *features1818[] = { "inotify", NULL };
  if (!guestfs_feature_available (g, (char **) features1818)) {
    skipped ("test_inotify_init_0", "group %s not available in daemon",
             features1818[0]);
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_inotify_init_0_perform (g);
}

static int
test_inotify_init_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "inotify_init") == NULL;
  str = getenv ("SKIP_TEST_INOTIFY_INIT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_INOTIFY_INIT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_inotify_init_0_perform (guestfs_h *g)
{
  /* TestRun for inotify_init (0) */
  int ret1819;
  ret1819 = guestfs_inotify_init (g, 0);
  if (ret1819 == -1)
    return -1;
  return 0;
}

static int test_internal_write_0_skip (void);
static int test_internal_write_0_perform (guestfs_h *);

static int
test_internal_write_0 (guestfs_h *g)
{
  if (test_internal_write_0_skip ()) {
    skipped ("test_internal_write_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_internal_write_0_perform (g);
}

static int
test_internal_write_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "internal_write") == NULL;
  str = getenv ("SKIP_TEST_INTERNAL_WRITE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_INTERNAL_WRITE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_internal_write_0_perform (guestfs_h *g)
{
  /* TestResultString for internal_write (0) */
  const char *arg1823 = "/internal_write";
  const char *arg1824 = "new file contents";
  size_t arg1824_size = 17;
  int ret1822;
  ret1822 = guestfs_internal_write (g, arg1823, arg1824, arg1824_size);
  if (ret1822 == -1)
    return -1;
  const char *arg1826 = "/internal_write";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1826);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "new file contents")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_internal_write_0", "cat", "new file contents", ret);
    return -1;
  }
  return 0;
}

static int test_internal_write_1_skip (void);
static int test_internal_write_1_perform (guestfs_h *);

static int
test_internal_write_1 (guestfs_h *g)
{
  if (test_internal_write_1_skip ()) {
    skipped ("test_internal_write_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_internal_write_1_perform (g);
}

static int
test_internal_write_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "internal_write") == NULL;
  str = getenv ("SKIP_TEST_INTERNAL_WRITE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_INTERNAL_WRITE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_internal_write_1_perform (guestfs_h *g)
{
  /* TestResultString for internal_write (1) */
  const char *arg1829 = "/internal_write2";
  const char *arg1830 = "\nnew file contents\n";
  size_t arg1830_size = 19;
  int ret1828;
  ret1828 = guestfs_internal_write (g, arg1829, arg1830, arg1830_size);
  if (ret1828 == -1)
    return -1;
  const char *arg1832 = "/internal_write2";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1832);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "\nnew file contents\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_internal_write_1", "cat", "\nnew file contents\n", ret);
    return -1;
  }
  return 0;
}

static int test_internal_write_2_skip (void);
static int test_internal_write_2_perform (guestfs_h *);

static int
test_internal_write_2 (guestfs_h *g)
{
  if (test_internal_write_2_skip ()) {
    skipped ("test_internal_write_2", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_internal_write_2_perform (g);
}

static int
test_internal_write_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "internal_write") == NULL;
  str = getenv ("SKIP_TEST_INTERNAL_WRITE_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_INTERNAL_WRITE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_internal_write_2_perform (guestfs_h *g)
{
  /* TestResultString for internal_write (2) */
  const char *arg1835 = "/internal_write3";
  const char *arg1836 = "\n\n";
  size_t arg1836_size = 2;
  int ret1834;
  ret1834 = guestfs_internal_write (g, arg1835, arg1836, arg1836_size);
  if (ret1834 == -1)
    return -1;
  const char *arg1838 = "/internal_write3";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1838);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "\n\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_internal_write_2", "cat", "\n\n", ret);
    return -1;
  }
  return 0;
}

static int test_internal_write_3_skip (void);
static int test_internal_write_3_perform (guestfs_h *);

static int
test_internal_write_3 (guestfs_h *g)
{
  if (test_internal_write_3_skip ()) {
    skipped ("test_internal_write_3", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_internal_write_3_perform (g);
}

static int
test_internal_write_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "internal_write") == NULL;
  str = getenv ("SKIP_TEST_INTERNAL_WRITE_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_INTERNAL_WRITE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_internal_write_3_perform (guestfs_h *g)
{
  /* TestResultString for internal_write (3) */
  const char *arg1841 = "/internal_write4";
  const char *arg1842 = "";
  size_t arg1842_size = 0;
  int ret1840;
  ret1840 = guestfs_internal_write (g, arg1841, arg1842, arg1842_size);
  if (ret1840 == -1)
    return -1;
  const char *arg1844 = "/internal_write4";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1844);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_internal_write_3", "cat", "", ret);
    return -1;
  }
  return 0;
}

static int test_internal_write_4_skip (void);
static int test_internal_write_4_perform (guestfs_h *);

static int
test_internal_write_4 (guestfs_h *g)
{
  if (test_internal_write_4_skip ()) {
    skipped ("test_internal_write_4", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_internal_write_4_perform (g);
}

static int
test_internal_write_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "internal_write") == NULL;
  str = getenv ("SKIP_TEST_INTERNAL_WRITE_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_INTERNAL_WRITE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_internal_write_4_perform (guestfs_h *g)
{
  /* TestResultString for internal_write (4) */
  const char *arg1847 = "/internal_write5";
  const char *arg1848 = "\n\n\n";
  size_t arg1848_size = 3;
  int ret1846;
  ret1846 = guestfs_internal_write (g, arg1847, arg1848, arg1848_size);
  if (ret1846 == -1)
    return -1;
  const char *arg1850 = "/internal_write5";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1850);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "\n\n\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_internal_write_4", "cat", "\n\n\n", ret);
    return -1;
  }
  return 0;
}

static int test_internal_write_5_skip (void);
static int test_internal_write_5_perform (guestfs_h *);

static int
test_internal_write_5 (guestfs_h *g)
{
  if (test_internal_write_5_skip ()) {
    skipped ("test_internal_write_5", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_internal_write_5_perform (g);
}

static int
test_internal_write_5_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "internal_write") == NULL;
  str = getenv ("SKIP_TEST_INTERNAL_WRITE_5");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_INTERNAL_WRITE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_internal_write_5_perform (guestfs_h *g)
{
  /* TestResultString for internal_write (5) */
  const char *arg1853 = "/internal_write6";
  const char *arg1854 = "\n";
  size_t arg1854_size = 1;
  int ret1852;
  ret1852 = guestfs_internal_write (g, arg1853, arg1854, arg1854_size);
  if (ret1852 == -1)
    return -1;
  const char *arg1856 = "/internal_write6";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1856);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_internal_write_5", "cat", "\n", ret);
    return -1;
  }
  return 0;
}

static int test_internal_write_append_0_skip (void);
static int test_internal_write_append_0_perform (guestfs_h *);

static int
test_internal_write_append_0 (guestfs_h *g)
{
  if (test_internal_write_append_0_skip ()) {
    skipped ("test_internal_write_append_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_internal_write_append_0_perform (g);
}

static int
test_internal_write_append_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "internal_write_append") == NULL;
  str = getenv ("SKIP_TEST_INTERNAL_WRITE_APPEND_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_INTERNAL_WRITE_APPEND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_internal_write_append_0_perform (guestfs_h *g)
{
  /* TestResultString for internal_write_append (0) */
  const char *arg1859 = "/internal_write_append";
  const char *arg1860 = "line1\n";
  size_t arg1860_size = 6;
  int ret1858;
  ret1858 = guestfs_write (g, arg1859, arg1860, arg1860_size);
  if (ret1858 == -1)
    return -1;
  const char *arg1863 = "/internal_write_append";
  const char *arg1864 = "line2\n";
  size_t arg1864_size = 6;
  int ret1862;
  ret1862 = guestfs_internal_write_append (g, arg1863, arg1864, arg1864_size);
  if (ret1862 == -1)
    return -1;
  const char *arg1867 = "/internal_write_append";
  const char *arg1868 = "line3a";
  size_t arg1868_size = 6;
  int ret1866;
  ret1866 = guestfs_internal_write_append (g, arg1867, arg1868, arg1868_size);
  if (ret1866 == -1)
    return -1;
  const char *arg1871 = "/internal_write_append";
  const char *arg1872 = "line3b\n";
  size_t arg1872_size = 7;
  int ret1870;
  ret1870 = guestfs_internal_write_append (g, arg1871, arg1872, arg1872_size);
  if (ret1870 == -1)
    return -1;
  const char *arg1874 = "/internal_write_append";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1874);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "line1\nline2\nline3aline3b\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_internal_write_append_0", "cat", "line1\nline2\nline3aline3b\n", ret);
    return -1;
  }
  return 0;
}

static int test_is_blockdev_0_skip (void);
static int test_is_blockdev_0_perform (guestfs_h *);

static int
test_is_blockdev_0 (guestfs_h *g)
{
  if (test_is_blockdev_0_skip ()) {
    skipped ("test_is_blockdev_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_is_blockdev_0_perform (g);
}

static int
test_is_blockdev_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_blockdev") == NULL;
  str = getenv ("SKIP_TEST_IS_BLOCKDEV_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_BLOCKDEV");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_blockdev_0_perform (guestfs_h *g)
{
  /* TestResultFalse for is_blockdev (0) */
  const char *arg1876 = "/directory";
  struct guestfs_is_blockdev_opts_argv optargs1877;
  optargs1877.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_blockdev_opts_argv (g, arg1876, &optargs1877);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_is_blockdev_0", "is_blockdev");
    return -1;
  }
  return 0;
}

static int test_is_blockdev_1_skip (void);
static int test_is_blockdev_1_perform (guestfs_h *);

static int
test_is_blockdev_1 (guestfs_h *g)
{
  if (test_is_blockdev_1_skip ()) {
    skipped ("test_is_blockdev_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_is_blockdev_1_perform (g);
}

static int
test_is_blockdev_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_blockdev") == NULL;
  str = getenv ("SKIP_TEST_IS_BLOCKDEV_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_BLOCKDEV");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_blockdev_1_perform (guestfs_h *g)
{
  /* TestResultTrue for is_blockdev (1) */
  const char *arg1882 = "/is_blockdev";
  int ret1878;
  ret1878 = guestfs_mknod_b (g, 511, 99, 66, arg1882);
  if (ret1878 == -1)
    return -1;
  const char *arg1884 = "/is_blockdev";
  struct guestfs_is_blockdev_opts_argv optargs1885;
  optargs1885.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_blockdev_opts_argv (g, arg1884, &optargs1885);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_is_blockdev_1", "is_blockdev");
    return -1;
  }
  return 0;
}

static int test_is_busy_0_skip (void);
static int test_is_busy_0_perform (guestfs_h *);

static int
test_is_busy_0 (guestfs_h *g)
{
  if (test_is_busy_0_skip ()) {
    skipped ("test_is_busy_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_is_busy_0_perform (g);
}

static int
test_is_busy_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_busy") == NULL;
  str = getenv ("SKIP_TEST_IS_BUSY_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_BUSY");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_busy_0_perform (guestfs_h *g)
{
  /* TestResultFalse for is_busy (0) */
  int ret;
  ret = guestfs_is_busy (g);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_is_busy_0", "is_busy");
    return -1;
  }
  return 0;
}

static int test_is_chardev_0_skip (void);
static int test_is_chardev_0_perform (guestfs_h *);

static int
test_is_chardev_0 (guestfs_h *g)
{
  if (test_is_chardev_0_skip ()) {
    skipped ("test_is_chardev_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_is_chardev_0_perform (g);
}

static int
test_is_chardev_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_chardev") == NULL;
  str = getenv ("SKIP_TEST_IS_CHARDEV_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_CHARDEV");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_chardev_0_perform (guestfs_h *g)
{
  /* TestResultFalse for is_chardev (0) */
  const char *arg1887 = "/directory";
  struct guestfs_is_chardev_opts_argv optargs1888;
  optargs1888.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_chardev_opts_argv (g, arg1887, &optargs1888);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_is_chardev_0", "is_chardev");
    return -1;
  }
  return 0;
}

static int test_is_chardev_1_skip (void);
static int test_is_chardev_1_perform (guestfs_h *);

static int
test_is_chardev_1 (guestfs_h *g)
{
  if (test_is_chardev_1_skip ()) {
    skipped ("test_is_chardev_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_is_chardev_1_perform (g);
}

static int
test_is_chardev_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_chardev") == NULL;
  str = getenv ("SKIP_TEST_IS_CHARDEV_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_CHARDEV");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_chardev_1_perform (guestfs_h *g)
{
  /* TestResultTrue for is_chardev (1) */
  const char *arg1893 = "/is_chardev";
  int ret1889;
  ret1889 = guestfs_mknod_c (g, 511, 99, 66, arg1893);
  if (ret1889 == -1)
    return -1;
  const char *arg1895 = "/is_chardev";
  struct guestfs_is_chardev_opts_argv optargs1896;
  optargs1896.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_chardev_opts_argv (g, arg1895, &optargs1896);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_is_chardev_1", "is_chardev");
    return -1;
  }
  return 0;
}

static int test_is_config_0_skip (void);
static int test_is_config_0_perform (guestfs_h *);

static int
test_is_config_0 (guestfs_h *g)
{
  if (test_is_config_0_skip ()) {
    skipped ("test_is_config_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_is_config_0_perform (g);
}

static int
test_is_config_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_config") == NULL;
  str = getenv ("SKIP_TEST_IS_CONFIG_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_CONFIG");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_config_0_perform (guestfs_h *g)
{
  /* TestResultFalse for is_config (0) */
  int ret;
  ret = guestfs_is_config (g);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_is_config_0", "is_config");
    return -1;
  }
  return 0;
}

static int test_is_dir_0_skip (void);
static int test_is_dir_0_perform (guestfs_h *);

static int
test_is_dir_0 (guestfs_h *g)
{
  if (test_is_dir_0_skip ()) {
    skipped ("test_is_dir_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_is_dir_0_perform (g);
}

static int
test_is_dir_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_dir") == NULL;
  str = getenv ("SKIP_TEST_IS_DIR_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_DIR");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_dir_0_perform (guestfs_h *g)
{
  /* TestResultFalse for is_dir (0) */
  const char *arg1898 = "/known-3";
  struct guestfs_is_dir_opts_argv optargs1899;
  optargs1899.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg1898, &optargs1899);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_is_dir_0", "is_dir");
    return -1;
  }
  return 0;
}

static int test_is_dir_1_skip (void);
static int test_is_dir_1_perform (guestfs_h *);

static int
test_is_dir_1 (guestfs_h *g)
{
  if (test_is_dir_1_skip ()) {
    skipped ("test_is_dir_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_is_dir_1_perform (g);
}

static int
test_is_dir_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_dir") == NULL;
  str = getenv ("SKIP_TEST_IS_DIR_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_DIR");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_dir_1_perform (guestfs_h *g)
{
  /* TestResultTrue for is_dir (1) */
  const char *arg1900 = "/directory";
  struct guestfs_is_dir_opts_argv optargs1901;
  optargs1901.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg1900, &optargs1901);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_is_dir_1", "is_dir");
    return -1;
  }
  return 0;
}

static int test_is_fifo_0_skip (void);
static int test_is_fifo_0_perform (guestfs_h *);

static int
test_is_fifo_0 (guestfs_h *g)
{
  if (test_is_fifo_0_skip ()) {
    skipped ("test_is_fifo_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_is_fifo_0_perform (g);
}

static int
test_is_fifo_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_fifo") == NULL;
  str = getenv ("SKIP_TEST_IS_FIFO_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_FIFO");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_fifo_0_perform (guestfs_h *g)
{
  /* TestResultFalse for is_fifo (0) */
  const char *arg1902 = "/directory";
  struct guestfs_is_fifo_opts_argv optargs1903;
  optargs1903.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_fifo_opts_argv (g, arg1902, &optargs1903);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_is_fifo_0", "is_fifo");
    return -1;
  }
  return 0;
}

static int test_is_fifo_1_skip (void);
static int test_is_fifo_1_perform (guestfs_h *);

static int
test_is_fifo_1 (guestfs_h *g)
{
  if (test_is_fifo_1_skip ()) {
    skipped ("test_is_fifo_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_is_fifo_1_perform (g);
}

static int
test_is_fifo_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_fifo") == NULL;
  str = getenv ("SKIP_TEST_IS_FIFO_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_FIFO");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_fifo_1_perform (guestfs_h *g)
{
  /* TestResultTrue for is_fifo (1) */
  const char *arg1906 = "/is_fifo";
  int ret1904;
  ret1904 = guestfs_mkfifo (g, 511, arg1906);
  if (ret1904 == -1)
    return -1;
  const char *arg1908 = "/is_fifo";
  struct guestfs_is_fifo_opts_argv optargs1909;
  optargs1909.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_fifo_opts_argv (g, arg1908, &optargs1909);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_is_fifo_1", "is_fifo");
    return -1;
  }
  return 0;
}

static int test_is_file_0_skip (void);
static int test_is_file_0_perform (guestfs_h *);

static int
test_is_file_0 (guestfs_h *g)
{
  if (test_is_file_0_skip ()) {
    skipped ("test_is_file_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_is_file_0_perform (g);
}

static int
test_is_file_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_file") == NULL;
  str = getenv ("SKIP_TEST_IS_FILE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_file_0_perform (guestfs_h *g)
{
  /* TestResultTrue for is_file (0) */
  const char *arg1910 = "/known-1";
  struct guestfs_is_file_opts_argv optargs1911;
  optargs1911.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg1910, &optargs1911);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_is_file_0", "is_file");
    return -1;
  }
  return 0;
}

static int test_is_file_1_skip (void);
static int test_is_file_1_perform (guestfs_h *);

static int
test_is_file_1 (guestfs_h *g)
{
  if (test_is_file_1_skip ()) {
    skipped ("test_is_file_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_is_file_1_perform (g);
}

static int
test_is_file_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_file") == NULL;
  str = getenv ("SKIP_TEST_IS_FILE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_file_1_perform (guestfs_h *g)
{
  /* TestResultFalse for is_file (1) */
  const char *arg1912 = "/directory";
  struct guestfs_is_file_opts_argv optargs1913;
  optargs1913.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg1912, &optargs1913);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_is_file_1", "is_file");
    return -1;
  }
  return 0;
}

static int test_is_file_2_skip (void);
static int test_is_file_2_perform (guestfs_h *);

static int
test_is_file_2 (guestfs_h *g)
{
  if (test_is_file_2_skip ()) {
    skipped ("test_is_file_2", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_is_file_2_perform (g);
}

static int
test_is_file_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_file") == NULL;
  str = getenv ("SKIP_TEST_IS_FILE_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_file_2_perform (guestfs_h *g)
{
  /* TestResultTrue for is_file (2) */
  const char *arg1914 = "/abssymlink";
  struct guestfs_is_file_opts_argv optargs1915;
  optargs1915.followsymlinks = 1;
  optargs1915.bitmask = UINT64_C(0x1);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg1914, &optargs1915);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_is_file_2", "is_file");
    return -1;
  }
  return 0;
}

static int test_is_launching_0_skip (void);
static int test_is_launching_0_perform (guestfs_h *);

static int
test_is_launching_0 (guestfs_h *g)
{
  if (test_is_launching_0_skip ()) {
    skipped ("test_is_launching_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_is_launching_0_perform (g);
}

static int
test_is_launching_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_launching") == NULL;
  str = getenv ("SKIP_TEST_IS_LAUNCHING_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_LAUNCHING");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_launching_0_perform (guestfs_h *g)
{
  /* TestResultFalse for is_launching (0) */
  int ret;
  ret = guestfs_is_launching (g);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_is_launching_0", "is_launching");
    return -1;
  }
  return 0;
}

static int test_is_lv_0_skip (void);
static int test_is_lv_0_perform (guestfs_h *);

static int
test_is_lv_0 (guestfs_h *g)
{
  if (test_is_lv_0_skip ()) {
    skipped ("test_is_lv_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs_on_lvm (g) == -1)
    return -1;

  return test_is_lv_0_perform (g);
}

static int
test_is_lv_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_lv") == NULL;
  str = getenv ("SKIP_TEST_IS_LV_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_LV");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_lv_0_perform (guestfs_h *g)
{
  /* TestResultTrue for is_lv (0) */
  const char *arg1917 = "/dev/VG/LV";
  int ret;
  ret = guestfs_is_lv (g, arg1917);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_is_lv_0", "is_lv");
    return -1;
  }
  return 0;
}

static int test_is_lv_1_skip (void);
static int test_is_lv_1_perform (guestfs_h *);

static int
test_is_lv_1 (guestfs_h *g)
{
  if (test_is_lv_1_skip ()) {
    skipped ("test_is_lv_1", "environment variable set");
    return 0;
  }

  if (init_basic_fs_on_lvm (g) == -1)
    return -1;

  return test_is_lv_1_perform (g);
}

static int
test_is_lv_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_lv") == NULL;
  str = getenv ("SKIP_TEST_IS_LV_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_LV");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_lv_1_perform (guestfs_h *g)
{
  /* TestResultFalse for is_lv (1) */
  const char *arg1919 = "/dev/sda1";
  int ret;
  ret = guestfs_is_lv (g, arg1919);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_is_lv_1", "is_lv");
    return -1;
  }
  return 0;
}

static int test_is_ready_0_skip (void);
static int test_is_ready_0_perform (guestfs_h *);

static int
test_is_ready_0 (guestfs_h *g)
{
  if (test_is_ready_0_skip ()) {
    skipped ("test_is_ready_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_is_ready_0_perform (g);
}

static int
test_is_ready_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_ready") == NULL;
  str = getenv ("SKIP_TEST_IS_READY_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_READY");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_ready_0_perform (guestfs_h *g)
{
  /* TestResultTrue for is_ready (0) */
  int ret;
  ret = guestfs_is_ready (g);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_is_ready_0", "is_ready");
    return -1;
  }
  return 0;
}

static int test_is_socket_0_skip (void);
static int test_is_socket_0_perform (guestfs_h *);

static int
test_is_socket_0 (guestfs_h *g)
{
  if (test_is_socket_0_skip ()) {
    skipped ("test_is_socket_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_is_socket_0_perform (g);
}

static int
test_is_socket_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_socket") == NULL;
  str = getenv ("SKIP_TEST_IS_SOCKET_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_SOCKET");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_socket_0_perform (guestfs_h *g)
{
  /* TestResultFalse for is_socket (0) */
  const char *arg1922 = "/directory";
  struct guestfs_is_socket_opts_argv optargs1923;
  optargs1923.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_socket_opts_argv (g, arg1922, &optargs1923);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_is_socket_0", "is_socket");
    return -1;
  }
  return 0;
}

static int test_is_symlink_0_skip (void);
static int test_is_symlink_0_perform (guestfs_h *);

static int
test_is_symlink_0 (guestfs_h *g)
{
  if (test_is_symlink_0_skip ()) {
    skipped ("test_is_symlink_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_is_symlink_0_perform (g);
}

static int
test_is_symlink_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_symlink") == NULL;
  str = getenv ("SKIP_TEST_IS_SYMLINK_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_SYMLINK");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_symlink_0_perform (guestfs_h *g)
{
  /* TestResultFalse for is_symlink (0) */
  const char *arg1924 = "/directory";
  int ret;
  ret = guestfs_is_symlink (g, arg1924);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_is_symlink_0", "is_symlink");
    return -1;
  }
  return 0;
}

static int test_is_symlink_1_skip (void);
static int test_is_symlink_1_perform (guestfs_h *);

static int
test_is_symlink_1 (guestfs_h *g)
{
  if (test_is_symlink_1_skip ()) {
    skipped ("test_is_symlink_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_is_symlink_1_perform (g);
}

static int
test_is_symlink_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_symlink") == NULL;
  str = getenv ("SKIP_TEST_IS_SYMLINK_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_SYMLINK");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_symlink_1_perform (guestfs_h *g)
{
  /* TestResultTrue for is_symlink (1) */
  const char *arg1926 = "/abssymlink";
  int ret;
  ret = guestfs_is_symlink (g, arg1926);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_is_symlink_1", "is_symlink");
    return -1;
  }
  return 0;
}

static int test_is_whole_device_0_skip (void);
static int test_is_whole_device_0_perform (guestfs_h *);

static int
test_is_whole_device_0 (guestfs_h *g)
{
  if (test_is_whole_device_0_skip ()) {
    skipped ("test_is_whole_device_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_is_whole_device_0_perform (g);
}

static int
test_is_whole_device_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_whole_device") == NULL;
  str = getenv ("SKIP_TEST_IS_WHOLE_DEVICE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_WHOLE_DEVICE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_whole_device_0_perform (guestfs_h *g)
{
  /* TestResultTrue for is_whole_device (0) */
  const char *arg1928 = "/dev/sda";
  int ret;
  ret = guestfs_is_whole_device (g, arg1928);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_is_whole_device_0", "is_whole_device");
    return -1;
  }
  return 0;
}

static int test_is_whole_device_1_skip (void);
static int test_is_whole_device_1_perform (guestfs_h *);

static int
test_is_whole_device_1 (guestfs_h *g)
{
  if (test_is_whole_device_1_skip ()) {
    skipped ("test_is_whole_device_1", "environment variable set");
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_is_whole_device_1_perform (g);
}

static int
test_is_whole_device_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_whole_device") == NULL;
  str = getenv ("SKIP_TEST_IS_WHOLE_DEVICE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_WHOLE_DEVICE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_whole_device_1_perform (guestfs_h *g)
{
  /* TestResultFalse for is_whole_device (1) */
  const char *arg1930 = "/dev/sda1";
  int ret;
  ret = guestfs_is_whole_device (g, arg1930);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_is_whole_device_1", "is_whole_device");
    return -1;
  }
  return 0;
}

static int test_is_whole_device_2_skip (void);
static int test_is_whole_device_2_perform (guestfs_h *);

static int
test_is_whole_device_2 (guestfs_h *g)
{
  if (test_is_whole_device_2_skip ()) {
    skipped ("test_is_whole_device_2", "environment variable set");
    return 0;
  }

  if (init_basic_fs_on_lvm (g) == -1)
    return -1;

  return test_is_whole_device_2_perform (g);
}

static int
test_is_whole_device_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_whole_device") == NULL;
  str = getenv ("SKIP_TEST_IS_WHOLE_DEVICE_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_WHOLE_DEVICE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_whole_device_2_perform (guestfs_h *g)
{
  /* TestResultFalse for is_whole_device (2) */
  const char *arg1932 = "/dev/VG/LV";
  int ret;
  ret = guestfs_is_whole_device (g, arg1932);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_is_whole_device_2", "is_whole_device");
    return -1;
  }
  return 0;
}

static int test_is_zero_0_skip (void);
static int test_is_zero_0_perform (guestfs_h *);

static int
test_is_zero_0 (guestfs_h *g)
{
  if (test_is_zero_0_skip ()) {
    skipped ("test_is_zero_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_is_zero_0_perform (g);
}

static int
test_is_zero_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_zero") == NULL;
  str = getenv ("SKIP_TEST_IS_ZERO_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_ZERO");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_zero_0_perform (guestfs_h *g)
{
  /* TestResultTrue for is_zero (0) */
  const char *arg1934 = "/100kallzeroes";
  int ret;
  ret = guestfs_is_zero (g, arg1934);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_is_zero_0", "is_zero");
    return -1;
  }
  return 0;
}

static int test_is_zero_1_skip (void);
static int test_is_zero_1_perform (guestfs_h *);

static int
test_is_zero_1 (guestfs_h *g)
{
  if (test_is_zero_1_skip ()) {
    skipped ("test_is_zero_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_is_zero_1_perform (g);
}

static int
test_is_zero_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_zero") == NULL;
  str = getenv ("SKIP_TEST_IS_ZERO_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_ZERO");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_zero_1_perform (guestfs_h *g)
{
  /* TestResultFalse for is_zero (1) */
  const char *arg1936 = "/100kallspaces";
  int ret;
  ret = guestfs_is_zero (g, arg1936);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_is_zero_1", "is_zero");
    return -1;
  }
  return 0;
}

static int test_is_zero_device_0_skip (void);
static int test_is_zero_device_0_perform (guestfs_h *);

static int
test_is_zero_device_0 (guestfs_h *g)
{
  if (test_is_zero_device_0_skip ()) {
    skipped ("test_is_zero_device_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_is_zero_device_0_perform (g);
}

static int
test_is_zero_device_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_zero_device") == NULL;
  str = getenv ("SKIP_TEST_IS_ZERO_DEVICE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_ZERO_DEVICE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_zero_device_0_perform (guestfs_h *g)
{
  /* TestResultTrue for is_zero_device (0) */
  const char *arg1939 = "/dev/sda1";
  struct guestfs_umount_opts_argv optargs1940;
  optargs1940.force = 0;
  optargs1940.lazyunmount = 0;
  optargs1940.bitmask = UINT64_C(0x3);
  int ret1938;
  ret1938 = guestfs_umount_opts_argv (g, arg1939, &optargs1940);
  if (ret1938 == -1)
    return -1;
  const char *arg1942 = "/dev/sda1";
  int ret1941;
  ret1941 = guestfs_zero_device (g, arg1942);
  if (ret1941 == -1)
    return -1;
  const char *arg1944 = "/dev/sda1";
  int ret;
  ret = guestfs_is_zero_device (g, arg1944);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_is_zero_device_0", "is_zero_device");
    return -1;
  }
  return 0;
}

static int test_is_zero_device_1_skip (void);
static int test_is_zero_device_1_perform (guestfs_h *);

static int
test_is_zero_device_1 (guestfs_h *g)
{
  if (test_is_zero_device_1_skip ()) {
    skipped ("test_is_zero_device_1", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_is_zero_device_1_perform (g);
}

static int
test_is_zero_device_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "is_zero_device") == NULL;
  str = getenv ("SKIP_TEST_IS_ZERO_DEVICE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_IS_ZERO_DEVICE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_is_zero_device_1_perform (guestfs_h *g)
{
  /* TestResultFalse for is_zero_device (1) */
  const char *arg1946 = "/dev/sda1";
  int ret;
  ret = guestfs_is_zero_device (g, arg1946);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_is_zero_device_1", "is_zero_device");
    return -1;
  }
  return 0;
}

static int test_isoinfo_device_0_skip (void);
static int test_isoinfo_device_0_perform (guestfs_h *);

static int
test_isoinfo_device_0 (guestfs_h *g)
{
  if (test_isoinfo_device_0_skip ()) {
    skipped ("test_isoinfo_device_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_isoinfo_device_0_perform (g);
}

static int
test_isoinfo_device_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "isoinfo_device") == NULL;
  str = getenv ("SKIP_TEST_ISOINFO_DEVICE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ISOINFO_DEVICE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_isoinfo_device_0_perform (guestfs_h *g)
{
  /* TestResult for isoinfo_device (0) */
  const char *arg1948 = "/dev/sdd";
  CLEANUP_FREE_ISOINFO struct guestfs_isoinfo *ret;
  ret = guestfs_isoinfo_device (g, arg1948);
  if (ret == NULL)
      return -1;
  if (! ((STREQ (ret->iso_volume_id, "CDROM") ||  STREQ (ret->iso_volume_id, "ISOIMAGE")) && STREQ (ret->iso_volume_set_id, "") && ret->iso_volume_set_size == 1 && ret->iso_volume_sequence_number == 1 && ret->iso_logical_block_size == 2048)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_isoinfo_device_0", "(STREQ (ret->iso_volume_id, \"CDROM\") ||  STREQ (ret->iso_volume_id, \"ISOIMAGE\")) && STREQ (ret->iso_volume_set_id, \"\") && ret->iso_volume_set_size == 1 && ret->iso_volume_sequence_number == 1 && ret->iso_logical_block_size == 2048");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_list_devices_0_skip (void);
static int test_list_devices_0_perform (guestfs_h *);

static int
test_list_devices_0 (guestfs_h *g)
{
  if (test_list_devices_0_skip ()) {
    skipped ("test_list_devices_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_list_devices_0_perform (g);
}

static int
test_list_devices_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "list_devices") == NULL;
  str = getenv ("SKIP_TEST_LIST_DEVICES_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LIST_DEVICES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_list_devices_0_perform (guestfs_h *g)
{
  /* TestResult for list_devices (0) */
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_list_devices (g);
  if (ret == NULL)
      return -1;
  if (! (is_device_list (ret, 4, "/dev/sda", "/dev/sdb", "/dev/sdc", "/dev/sdd"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_list_devices_0", "is_device_list (ret, 4, \"/dev/sda\", \"/dev/sdb\", \"/dev/sdc\", \"/dev/sdd\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_list_disk_labels_0_skip (void);
static int test_list_disk_labels_0_perform (guestfs_h *);

static int
test_list_disk_labels_0 (guestfs_h *g)
{
  if (test_list_disk_labels_0_skip ()) {
    skipped ("test_list_disk_labels_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_list_disk_labels_0_perform (g);
}

static int
test_list_disk_labels_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "list_disk_labels") == NULL;
  str = getenv ("SKIP_TEST_LIST_DISK_LABELS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LIST_DISK_LABELS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_list_disk_labels_0_perform (guestfs_h *g)
{
  /* TestResult for list_disk_labels (0) */
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_list_disk_labels (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_list_disk_labels_0", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_list_partitions_0_skip (void);
static int test_list_partitions_0_perform (guestfs_h *);

static int
test_list_partitions_0 (guestfs_h *g)
{
  if (test_list_partitions_0_skip ()) {
    skipped ("test_list_partitions_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_list_partitions_0_perform (g);
}

static int
test_list_partitions_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "list_partitions") == NULL;
  str = getenv ("SKIP_TEST_LIST_PARTITIONS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LIST_PARTITIONS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_list_partitions_0_perform (guestfs_h *g)
{
  /* TestResult for list_partitions (0) */
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_list_partitions (g);
  if (ret == NULL)
      return -1;
  if (! (is_device_list (ret, 2, "/dev/sda1", "/dev/sdb1"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_list_partitions_0", "is_device_list (ret, 2, \"/dev/sda1\", \"/dev/sdb1\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_list_partitions_1_skip (void);
static int test_list_partitions_1_perform (guestfs_h *);

static int
test_list_partitions_1 (guestfs_h *g)
{
  if (test_list_partitions_1_skip ()) {
    skipped ("test_list_partitions_1", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_list_partitions_1_perform (g);
}

static int
test_list_partitions_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "list_partitions") == NULL;
  str = getenv ("SKIP_TEST_LIST_PARTITIONS_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LIST_PARTITIONS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_list_partitions_1_perform (guestfs_h *g)
{
  /* TestResult for list_partitions (1) */
  const char *arg1953 = "/dev/sda";
  const char *arg1954 = "mbr";
  int ret4;
  ret4 = guestfs_part_init (g, arg1953, arg1954);
  if (ret4 == -1)
    return -1;
  const char *arg1956 = "/dev/sda";
  const char *arg1957 = "p";
  int ret3;
  ret3 = guestfs_part_add (g, arg1956, arg1957, 64, 204799);
  if (ret3 == -1)
    return -1;
  const char *arg1961 = "/dev/sda";
  const char *arg1962 = "p";
  int ret2;
  ret2 = guestfs_part_add (g, arg1961, arg1962, 204800, 409599);
  if (ret2 == -1)
    return -1;
  const char *arg1966 = "/dev/sda";
  const char *arg1967 = "p";
  int ret1;
  ret1 = guestfs_part_add (g, arg1966, arg1967, 409600, -64);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_list_partitions (g);
  if (ret == NULL)
      return -1;
  if (! (is_device_list (ret, 4, "/dev/sda1", "/dev/sda2", "/dev/sda3", "/dev/sdb1"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_list_partitions_1", "is_device_list (ret, 4, \"/dev/sda1\", \"/dev/sda2\", \"/dev/sda3\", \"/dev/sdb1\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_ln_0_skip (void);
static int test_ln_0_perform (guestfs_h *);

static int
test_ln_0 (guestfs_h *g)
{
  if (test_ln_0_skip ()) {
    skipped ("test_ln_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_ln_0_perform (g);
}

static int
test_ln_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "ln") == NULL;
  str = getenv ("SKIP_TEST_LN_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LN");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_ln_0_perform (guestfs_h *g)
{
  /* TestResult for ln (0) */
  const char *arg1972 = "/ln";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1972);
  if (ret3 == -1)
    return -1;
  const char *arg1974 = "/ln/a";
  int ret2;
  ret2 = guestfs_touch (g, arg1974);
  if (ret2 == -1)
    return -1;
  const char *arg1976 = "/ln/a";
  const char *arg1977 = "/ln/b";
  int ret1;
  ret1 = guestfs_ln (g, arg1976, arg1977);
  if (ret1 == -1)
    return -1;
  const char *arg1979 = "/ln/b";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg1979);
  if (ret == NULL)
      return -1;
  if (! (ret->nlink == 2)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_ln_0", "ret->nlink == 2");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_ln_f_0_skip (void);
static int test_ln_f_0_perform (guestfs_h *);

static int
test_ln_f_0 (guestfs_h *g)
{
  if (test_ln_f_0_skip ()) {
    skipped ("test_ln_f_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_ln_f_0_perform (g);
}

static int
test_ln_f_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "ln_f") == NULL;
  str = getenv ("SKIP_TEST_LN_F_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LN_F");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_ln_f_0_perform (guestfs_h *g)
{
  /* TestResult for ln_f (0) */
  const char *arg1981 = "/ln_f";
  int ret4;
  ret4 = guestfs_mkdir (g, arg1981);
  if (ret4 == -1)
    return -1;
  const char *arg1983 = "/ln_f/a";
  int ret3;
  ret3 = guestfs_touch (g, arg1983);
  if (ret3 == -1)
    return -1;
  const char *arg1985 = "/ln_f/b";
  int ret2;
  ret2 = guestfs_touch (g, arg1985);
  if (ret2 == -1)
    return -1;
  const char *arg1987 = "/ln_f/a";
  const char *arg1988 = "/ln_f/b";
  int ret1;
  ret1 = guestfs_ln_f (g, arg1987, arg1988);
  if (ret1 == -1)
    return -1;
  const char *arg1990 = "/ln_f/b";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg1990);
  if (ret == NULL)
      return -1;
  if (! (ret->nlink == 2)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_ln_f_0", "ret->nlink == 2");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_ln_s_0_skip (void);
static int test_ln_s_0_perform (guestfs_h *);

static int
test_ln_s_0 (guestfs_h *g)
{
  if (test_ln_s_0_skip ()) {
    skipped ("test_ln_s_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_ln_s_0_perform (g);
}

static int
test_ln_s_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "ln_s") == NULL;
  str = getenv ("SKIP_TEST_LN_S_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LN_S");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_ln_s_0_perform (guestfs_h *g)
{
  /* TestResult for ln_s (0) */
  const char *arg1992 = "/ln_s";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1992);
  if (ret3 == -1)
    return -1;
  const char *arg1994 = "/ln_s/a";
  int ret2;
  ret2 = guestfs_touch (g, arg1994);
  if (ret2 == -1)
    return -1;
  const char *arg1996 = "a";
  const char *arg1997 = "/ln_s/b";
  int ret1;
  ret1 = guestfs_ln_s (g, arg1996, arg1997);
  if (ret1 == -1)
    return -1;
  const char *arg1999 = "/ln_s/b";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_lstat (g, arg1999);
  if (ret == NULL)
      return -1;
  if (! (S_ISLNK (ret->mode) && (ret->mode & 0777) == 0777)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_ln_s_0", "S_ISLNK (ret->mode) && (ret->mode & 0777) == 0777");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_ln_sf_0_skip (void);
static int test_ln_sf_0_perform (guestfs_h *);

static int
test_ln_sf_0 (guestfs_h *g)
{
  if (test_ln_sf_0_skip ()) {
    skipped ("test_ln_sf_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_ln_sf_0_perform (g);
}

static int
test_ln_sf_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "ln_sf") == NULL;
  str = getenv ("SKIP_TEST_LN_SF_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LN_SF");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_ln_sf_0_perform (guestfs_h *g)
{
  /* TestResultString for ln_sf (0) */
  const char *arg2002 = "/ln_sf/b";
  int ret2001;
  ret2001 = guestfs_mkdir_p (g, arg2002);
  if (ret2001 == -1)
    return -1;
  const char *arg2005 = "/ln_sf/b/c";
  int ret2004;
  ret2004 = guestfs_touch (g, arg2005);
  if (ret2004 == -1)
    return -1;
  const char *arg2008 = "../d";
  const char *arg2009 = "/ln_sf/b/c";
  int ret2007;
  ret2007 = guestfs_ln_sf (g, arg2008, arg2009);
  if (ret2007 == -1)
    return -1;
  const char *arg2011 = "/ln_sf/b/c";
  CLEANUP_FREE char *ret;
  ret = guestfs_readlink (g, arg2011);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "../d")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_ln_sf_0", "readlink", "../d", ret);
    return -1;
  }
  return 0;
}

static int test_ls_0_skip (void);
static int test_ls_0_perform (guestfs_h *);

static int
test_ls_0 (guestfs_h *g)
{
  if (test_ls_0_skip ()) {
    skipped ("test_ls_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_ls_0_perform (g);
}

static int
test_ls_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "ls") == NULL;
  str = getenv ("SKIP_TEST_LS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_ls_0_perform (guestfs_h *g)
{
  /* TestResult for ls (0) */
  const char *arg2013 = "/ls";
  int ret4;
  ret4 = guestfs_mkdir (g, arg2013);
  if (ret4 == -1)
    return -1;
  const char *arg2015 = "/ls/new";
  int ret3;
  ret3 = guestfs_touch (g, arg2015);
  if (ret3 == -1)
    return -1;
  const char *arg2017 = "/ls/newer";
  int ret2;
  ret2 = guestfs_touch (g, arg2017);
  if (ret2 == -1)
    return -1;
  const char *arg2019 = "/ls/newest";
  int ret1;
  ret1 = guestfs_touch (g, arg2019);
  if (ret1 == -1)
    return -1;
  const char *arg2021 = "/ls";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_ls (g, arg2021);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "new", "newer", "newest"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_ls_0", "is_string_list (ret, 3, \"new\", \"newer\", \"newest\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_lstat_0_skip (void);
static int test_lstat_0_perform (guestfs_h *);

static int
test_lstat_0 (guestfs_h *g)
{
  if (test_lstat_0_skip ()) {
    skipped ("test_lstat_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_lstat_0_perform (g);
}

static int
test_lstat_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "lstat") == NULL;
  str = getenv ("SKIP_TEST_LSTAT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LSTAT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_lstat_0_perform (guestfs_h *g)
{
  /* TestResult for lstat (0) */
  const char *arg2023 = "/empty";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_lstat (g, arg2023);
  if (ret == NULL)
      return -1;
  if (! (ret->size == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_lstat_0", "ret->size == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_lstatns_0_skip (void);
static int test_lstatns_0_perform (guestfs_h *);

static int
test_lstatns_0 (guestfs_h *g)
{
  if (test_lstatns_0_skip ()) {
    skipped ("test_lstatns_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_lstatns_0_perform (g);
}

static int
test_lstatns_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "lstatns") == NULL;
  str = getenv ("SKIP_TEST_LSTATNS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LSTATNS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_lstatns_0_perform (guestfs_h *g)
{
  /* TestResult for lstatns (0) */
  const char *arg2025 = "/empty";
  CLEANUP_FREE_STATNS struct guestfs_statns *ret;
  ret = guestfs_lstatns (g, arg2025);
  if (ret == NULL)
      return -1;
  if (! (ret->st_size == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_lstatns_0", "ret->st_size == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_lvcreate_0_skip (void);
static int test_lvcreate_0_perform (guestfs_h *);

static int
test_lvcreate_0 (guestfs_h *g)
{
  if (test_lvcreate_0_skip ()) {
    skipped ("test_lvcreate_0", "environment variable set");
    return 0;
  }

  const char *features2027[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2027)) {
    skipped ("test_lvcreate_0", "group %s not available in daemon",
             features2027[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_lvcreate_0_perform (g);
}

static int
test_lvcreate_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "lvcreate") == NULL;
  str = getenv ("SKIP_TEST_LVCREATE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LVCREATE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_lvcreate_0_perform (guestfs_h *g)
{
  /* TestResult for lvcreate (0) */
  const char *arg2028 = "/dev/sda";
  const char *arg2029 = "mbr";
  int ret14;
  ret14 = guestfs_part_init (g, arg2028, arg2029);
  if (ret14 == -1)
    return -1;
  const char *arg2031 = "/dev/sda";
  const char *arg2032 = "p";
  int ret13;
  ret13 = guestfs_part_add (g, arg2031, arg2032, 64, 204799);
  if (ret13 == -1)
    return -1;
  const char *arg2036 = "/dev/sda";
  const char *arg2037 = "p";
  int ret12;
  ret12 = guestfs_part_add (g, arg2036, arg2037, 204800, 409599);
  if (ret12 == -1)
    return -1;
  const char *arg2041 = "/dev/sda";
  const char *arg2042 = "p";
  int ret11;
  ret11 = guestfs_part_add (g, arg2041, arg2042, 409600, -64);
  if (ret11 == -1)
    return -1;
  const char *arg2046 = "/dev/sda1";
  int ret10;
  ret10 = guestfs_pvcreate (g, arg2046);
  if (ret10 == -1)
    return -1;
  const char *arg2048 = "/dev/sda2";
  int ret9;
  ret9 = guestfs_pvcreate (g, arg2048);
  if (ret9 == -1)
    return -1;
  const char *arg2050 = "/dev/sda3";
  int ret8;
  ret8 = guestfs_pvcreate (g, arg2050);
  if (ret8 == -1)
    return -1;
  const char *arg2052 = "VG1";
  const char *arg2053_0 = "/dev/sda1";
  const char *arg2053_1 = "/dev/sda2";
  const char *const arg2053[] = {
    arg2053_0,
    arg2053_1,
    NULL
  };
  int ret7;
  ret7 = guestfs_vgcreate (g, arg2052, (char **) arg2053);
  if (ret7 == -1)
    return -1;
  const char *arg2055 = "VG2";
  const char *arg2056_0 = "/dev/sda3";
  const char *const arg2056[] = {
    arg2056_0,
    NULL
  };
  int ret6;
  ret6 = guestfs_vgcreate (g, arg2055, (char **) arg2056);
  if (ret6 == -1)
    return -1;
  const char *arg2058 = "LV1";
  const char *arg2059 = "VG1";
  int ret5;
  ret5 = guestfs_lvcreate (g, arg2058, arg2059, 50);
  if (ret5 == -1)
    return -1;
  const char *arg2062 = "LV2";
  const char *arg2063 = "VG1";
  int ret4;
  ret4 = guestfs_lvcreate (g, arg2062, arg2063, 50);
  if (ret4 == -1)
    return -1;
  const char *arg2066 = "LV3";
  const char *arg2067 = "VG2";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg2066, arg2067, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2070 = "LV4";
  const char *arg2071 = "VG2";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg2070, arg2071, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2074 = "LV5";
  const char *arg2075 = "VG2";
  int ret1;
  ret1 = guestfs_lvcreate (g, arg2074, arg2075, 50);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_lvs (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 5, "/dev/VG1/LV1", "/dev/VG1/LV2", "/dev/VG2/LV3", "/dev/VG2/LV4", "/dev/VG2/LV5"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_lvcreate_0", "is_string_list (ret, 5, \"/dev/VG1/LV1\", \"/dev/VG1/LV2\", \"/dev/VG2/LV3\", \"/dev/VG2/LV4\", \"/dev/VG2/LV5\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_lvcreate_free_0_skip (void);
static int test_lvcreate_free_0_perform (guestfs_h *);

static int
test_lvcreate_free_0 (guestfs_h *g)
{
  if (test_lvcreate_free_0_skip ()) {
    skipped ("test_lvcreate_free_0", "environment variable set");
    return 0;
  }

  const char *features2079[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2079)) {
    skipped ("test_lvcreate_free_0", "group %s not available in daemon",
             features2079[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_lvcreate_free_0_perform (g);
}

static int
test_lvcreate_free_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "lvcreate_free") == NULL;
  str = getenv ("SKIP_TEST_LVCREATE_FREE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LVCREATE_FREE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_lvcreate_free_0_perform (guestfs_h *g)
{
  /* TestResult for lvcreate_free (0) */
  const char *arg2080 = "/dev/sda";
  const char *arg2081 = "mbr";
  int ret7;
  ret7 = guestfs_part_disk (g, arg2080, arg2081);
  if (ret7 == -1)
    return -1;
  const char *arg2083 = "/dev/sda1";
  int ret6;
  ret6 = guestfs_pvcreate (g, arg2083);
  if (ret6 == -1)
    return -1;
  const char *arg2085 = "VG";
  const char *arg2086_0 = "/dev/sda1";
  const char *const arg2086[] = {
    arg2086_0,
    NULL
  };
  int ret5;
  ret5 = guestfs_vgcreate (g, arg2085, (char **) arg2086);
  if (ret5 == -1)
    return -1;
  const char *arg2088 = "LV1";
  const char *arg2089 = "VG";
  int ret4;
  ret4 = guestfs_lvcreate_free (g, arg2088, arg2089, 50);
  if (ret4 == -1)
    return -1;
  const char *arg2092 = "LV2";
  const char *arg2093 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate_free (g, arg2092, arg2093, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2096 = "LV3";
  const char *arg2097 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate_free (g, arg2096, arg2097, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2100 = "LV4";
  const char *arg2101 = "VG";
  int ret1;
  ret1 = guestfs_lvcreate_free (g, arg2100, arg2101, 100);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_lvs (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 4, "/dev/VG/LV1", "/dev/VG/LV2", "/dev/VG/LV3", "/dev/VG/LV4"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_lvcreate_free_0", "is_string_list (ret, 4, \"/dev/VG/LV1\", \"/dev/VG/LV2\", \"/dev/VG/LV3\", \"/dev/VG/LV4\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_lvm_canonical_lv_name_0_skip (void);
static int test_lvm_canonical_lv_name_0_perform (guestfs_h *);

static int
test_lvm_canonical_lv_name_0 (guestfs_h *g)
{
  if (test_lvm_canonical_lv_name_0_skip ()) {
    skipped ("test_lvm_canonical_lv_name_0", "environment variable set");
    return 0;
  }

  const char *features2105[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2105)) {
    skipped ("test_lvm_canonical_lv_name_0", "group %s not available in daemon",
             features2105[0]);
    return 0;
  }

  if (init_basic_fs_on_lvm (g) == -1)
    return -1;

  return test_lvm_canonical_lv_name_0_perform (g);
}

static int
test_lvm_canonical_lv_name_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "lvm_canonical_lv_name") == NULL;
  str = getenv ("SKIP_TEST_LVM_CANONICAL_LV_NAME_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LVM_CANONICAL_LV_NAME");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_lvm_canonical_lv_name_0_perform (guestfs_h *g)
{
  /* TestResultString for lvm_canonical_lv_name (0) */
  const char *arg2106 = "/dev/mapper/VG-LV";
  CLEANUP_FREE char *ret;
  ret = guestfs_lvm_canonical_lv_name (g, arg2106);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "/dev/VG/LV")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_lvm_canonical_lv_name_0", "lvm_canonical_lv_name", "/dev/VG/LV", ret);
    return -1;
  }
  return 0;
}

static int test_lvm_canonical_lv_name_1_skip (void);
static int test_lvm_canonical_lv_name_1_perform (guestfs_h *);

static int
test_lvm_canonical_lv_name_1 (guestfs_h *g)
{
  if (test_lvm_canonical_lv_name_1_skip ()) {
    skipped ("test_lvm_canonical_lv_name_1", "environment variable set");
    return 0;
  }

  const char *features2108[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2108)) {
    skipped ("test_lvm_canonical_lv_name_1", "group %s not available in daemon",
             features2108[0]);
    return 0;
  }

  if (init_basic_fs_on_lvm (g) == -1)
    return -1;

  return test_lvm_canonical_lv_name_1_perform (g);
}

static int
test_lvm_canonical_lv_name_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "lvm_canonical_lv_name") == NULL;
  str = getenv ("SKIP_TEST_LVM_CANONICAL_LV_NAME_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LVM_CANONICAL_LV_NAME");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_lvm_canonical_lv_name_1_perform (guestfs_h *g)
{
  /* TestResultString for lvm_canonical_lv_name (1) */
  const char *arg2109 = "/dev/VG/LV";
  CLEANUP_FREE char *ret;
  ret = guestfs_lvm_canonical_lv_name (g, arg2109);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "/dev/VG/LV")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_lvm_canonical_lv_name_1", "lvm_canonical_lv_name", "/dev/VG/LV", ret);
    return -1;
  }
  return 0;
}

static int test_lvm_scan_0_skip (void);
static int test_lvm_scan_0_perform (guestfs_h *);

static int
test_lvm_scan_0 (guestfs_h *g)
{
  if (test_lvm_scan_0_skip ()) {
    skipped ("test_lvm_scan_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_lvm_scan_0_perform (g);
}

static int
test_lvm_scan_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "lvm_scan") == NULL;
  str = getenv ("SKIP_TEST_LVM_SCAN_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LVM_SCAN");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_lvm_scan_0_perform (guestfs_h *g)
{
  /* TestRun for lvm_scan (0) */
  int ret2111;
  ret2111 = guestfs_lvm_scan (g, 1);
  if (ret2111 == -1)
    return -1;
  return 0;
}

static int test_lvremove_0_skip (void);
static int test_lvremove_0_perform (guestfs_h *);

static int
test_lvremove_0 (guestfs_h *g)
{
  if (test_lvremove_0_skip ()) {
    skipped ("test_lvremove_0", "environment variable set");
    return 0;
  }

  const char *features2114[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2114)) {
    skipped ("test_lvremove_0", "group %s not available in daemon",
             features2114[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_lvremove_0_perform (g);
}

static int
test_lvremove_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "lvremove") == NULL;
  str = getenv ("SKIP_TEST_LVREMOVE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LVREMOVE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_lvremove_0_perform (guestfs_h *g)
{
  /* TestResult for lvremove (0) */
  const char *arg2115 = "/dev/sda";
  const char *arg2116 = "mbr";
  int ret6;
  ret6 = guestfs_part_disk (g, arg2115, arg2116);
  if (ret6 == -1)
    return -1;
  const char *arg2118 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg2118);
  if (ret5 == -1)
    return -1;
  const char *arg2120 = "VG";
  const char *arg2121_0 = "/dev/sda1";
  const char *const arg2121[] = {
    arg2121_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg2120, (char **) arg2121);
  if (ret4 == -1)
    return -1;
  const char *arg2123 = "LV1";
  const char *arg2124 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg2123, arg2124, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2127 = "LV2";
  const char *arg2128 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg2127, arg2128, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2131 = "/dev/VG/LV1";
  int ret1;
  ret1 = guestfs_lvremove (g, arg2131);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_lvs (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 1, "/dev/VG/LV2"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_lvremove_0", "is_string_list (ret, 1, \"/dev/VG/LV2\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_lvremove_1_skip (void);
static int test_lvremove_1_perform (guestfs_h *);

static int
test_lvremove_1 (guestfs_h *g)
{
  if (test_lvremove_1_skip ()) {
    skipped ("test_lvremove_1", "environment variable set");
    return 0;
  }

  const char *features2134[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2134)) {
    skipped ("test_lvremove_1", "group %s not available in daemon",
             features2134[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_lvremove_1_perform (g);
}

static int
test_lvremove_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "lvremove") == NULL;
  str = getenv ("SKIP_TEST_LVREMOVE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LVREMOVE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_lvremove_1_perform (guestfs_h *g)
{
  /* TestResult for lvremove (1) */
  const char *arg2135 = "/dev/sda";
  const char *arg2136 = "mbr";
  int ret6;
  ret6 = guestfs_part_disk (g, arg2135, arg2136);
  if (ret6 == -1)
    return -1;
  const char *arg2138 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg2138);
  if (ret5 == -1)
    return -1;
  const char *arg2140 = "VG";
  const char *arg2141_0 = "/dev/sda1";
  const char *const arg2141[] = {
    arg2141_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg2140, (char **) arg2141);
  if (ret4 == -1)
    return -1;
  const char *arg2143 = "LV1";
  const char *arg2144 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg2143, arg2144, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2147 = "LV2";
  const char *arg2148 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg2147, arg2148, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2151 = "/dev/VG";
  int ret1;
  ret1 = guestfs_lvremove (g, arg2151);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_lvs (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_lvremove_1", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_lvremove_2_skip (void);
static int test_lvremove_2_perform (guestfs_h *);

static int
test_lvremove_2 (guestfs_h *g)
{
  if (test_lvremove_2_skip ()) {
    skipped ("test_lvremove_2", "environment variable set");
    return 0;
  }

  const char *features2154[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2154)) {
    skipped ("test_lvremove_2", "group %s not available in daemon",
             features2154[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_lvremove_2_perform (g);
}

static int
test_lvremove_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "lvremove") == NULL;
  str = getenv ("SKIP_TEST_LVREMOVE_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LVREMOVE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_lvremove_2_perform (guestfs_h *g)
{
  /* TestResult for lvremove (2) */
  const char *arg2155 = "/dev/sda";
  const char *arg2156 = "mbr";
  int ret6;
  ret6 = guestfs_part_disk (g, arg2155, arg2156);
  if (ret6 == -1)
    return -1;
  const char *arg2158 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg2158);
  if (ret5 == -1)
    return -1;
  const char *arg2160 = "VG";
  const char *arg2161_0 = "/dev/sda1";
  const char *const arg2161[] = {
    arg2161_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg2160, (char **) arg2161);
  if (ret4 == -1)
    return -1;
  const char *arg2163 = "LV1";
  const char *arg2164 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg2163, arg2164, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2167 = "LV2";
  const char *arg2168 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg2167, arg2168, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2171 = "/dev/VG";
  int ret1;
  ret1 = guestfs_lvremove (g, arg2171);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_vgs (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 1, "VG"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_lvremove_2", "is_string_list (ret, 1, \"VG\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_lvrename_0_skip (void);
static int test_lvrename_0_perform (guestfs_h *);

static int
test_lvrename_0 (guestfs_h *g)
{
  if (test_lvrename_0_skip ()) {
    skipped ("test_lvrename_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs_on_lvm (g) == -1)
    return -1;

  return test_lvrename_0_perform (g);
}

static int
test_lvrename_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "lvrename") == NULL;
  str = getenv ("SKIP_TEST_LVRENAME_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LVRENAME");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_lvrename_0_perform (guestfs_h *g)
{
  /* TestResult for lvrename (0) */
  const char *arg2174 = "/dev/VG/LV";
  const char *arg2175 = "/dev/VG/LV2";
  int ret1;
  ret1 = guestfs_lvrename (g, arg2174, arg2175);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_lvs (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 1, "/dev/VG/LV2"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_lvrename_0", "is_string_list (ret, 1, \"/dev/VG/LV2\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_lvresize_0_skip (void);
static int test_lvresize_0_perform (guestfs_h *);

static int
test_lvresize_0 (guestfs_h *g)
{
  if (test_lvresize_0_skip ()) {
    skipped ("test_lvresize_0", "environment variable set");
    return 0;
  }

  const char *features2178[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2178)) {
    skipped ("test_lvresize_0", "group %s not available in daemon",
             features2178[0]);
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_lvresize_0_perform (g);
}

static int
test_lvresize_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "lvresize") == NULL;
  str = getenv ("SKIP_TEST_LVRESIZE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LVRESIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_lvresize_0_perform (guestfs_h *g)
{
  /* TestResultString for lvresize (0) */
  const char *arg2180 = "/dev/sda";
  const char *arg2181 = "mbr";
  int ret2179;
  ret2179 = guestfs_part_disk (g, arg2180, arg2181);
  if (ret2179 == -1)
    return -1;
  const char *arg2184 = "/dev/sda1";
  int ret2183;
  ret2183 = guestfs_pvcreate (g, arg2184);
  if (ret2183 == -1)
    return -1;
  const char *arg2187 = "VG";
  const char *arg2188_0 = "/dev/sda1";
  const char *const arg2188[] = {
    arg2188_0,
    NULL
  };
  int ret2186;
  ret2186 = guestfs_vgcreate (g, arg2187, (char **) arg2188);
  if (ret2186 == -1)
    return -1;
  const char *arg2191 = "LV";
  const char *arg2192 = "VG";
  int ret2190;
  ret2190 = guestfs_lvcreate (g, arg2191, arg2192, 10);
  if (ret2190 == -1)
    return -1;
  const char *arg2196 = "ext2";
  const char *arg2197 = "/dev/VG/LV";
  struct guestfs_mkfs_opts_argv optargs2198;
  optargs2198.bitmask = UINT64_C(0x0);
  int ret2195;
  ret2195 = guestfs_mkfs_opts_argv (g, arg2196, arg2197, &optargs2198);
  if (ret2195 == -1)
    return -1;
  const char *arg2200 = "/dev/VG/LV";
  const char *arg2201 = "/";
  int ret2199;
  ret2199 = guestfs_mount (g, arg2200, arg2201);
  if (ret2199 == -1)
    return -1;
  const char *arg2204 = "/new";
  const char *arg2205 = "test content";
  size_t arg2205_size = 12;
  int ret2203;
  ret2203 = guestfs_write (g, arg2204, arg2205, arg2205_size);
  if (ret2203 == -1)
    return -1;
  const char *arg2208 = "/";
  struct guestfs_umount_opts_argv optargs2209;
  optargs2209.force = 0;
  optargs2209.lazyunmount = 0;
  optargs2209.bitmask = UINT64_C(0x3);
  int ret2207;
  ret2207 = guestfs_umount_opts_argv (g, arg2208, &optargs2209);
  if (ret2207 == -1)
    return -1;
  const char *arg2211 = "/dev/VG/LV";
  int ret2210;
  ret2210 = guestfs_lvresize (g, arg2211, 20);
  if (ret2210 == -1)
    return -1;
  const char *arg2215 = "/dev/VG/LV";
  int ret2214;
  ret2214 = guestfs_e2fsck_f (g, arg2215);
  if (ret2214 == -1)
    return -1;
  const char *arg2218 = "/dev/VG/LV";
  struct guestfs_e2fsck_argv optargs2219;
  optargs2219.correct = 1;
  optargs2219.forceall = 0;
  optargs2219.bitmask = UINT64_C(0x3);
  int ret2217;
  ret2217 = guestfs_e2fsck_argv (g, arg2218, &optargs2219);
  if (ret2217 == -1)
    return -1;
  const char *arg2221 = "/dev/VG/LV";
  struct guestfs_e2fsck_argv optargs2222;
  optargs2222.correct = 0;
  optargs2222.forceall = 1;
  optargs2222.bitmask = UINT64_C(0x3);
  int ret2220;
  ret2220 = guestfs_e2fsck_argv (g, arg2221, &optargs2222);
  if (ret2220 == -1)
    return -1;
  const char *arg2224 = "/dev/VG/LV";
  int ret2223;
  ret2223 = guestfs_resize2fs (g, arg2224);
  if (ret2223 == -1)
    return -1;
  const char *arg2227 = "/dev/VG/LV";
  const char *arg2228 = "/";
  int ret2226;
  ret2226 = guestfs_mount (g, arg2227, arg2228);
  if (ret2226 == -1)
    return -1;
  const char *arg2230 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2230);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "test content")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_lvresize_0", "cat", "test content", ret);
    return -1;
  }
  return 0;
}

static int test_lvresize_1_skip (void);
static int test_lvresize_1_perform (guestfs_h *);

static int
test_lvresize_1 (guestfs_h *g)
{
  if (test_lvresize_1_skip ()) {
    skipped ("test_lvresize_1", "environment variable set");
    return 0;
  }

  const char *features2232[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2232)) {
    skipped ("test_lvresize_1", "group %s not available in daemon",
             features2232[0]);
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_lvresize_1_perform (g);
}

static int
test_lvresize_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "lvresize") == NULL;
  str = getenv ("SKIP_TEST_LVRESIZE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LVRESIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_lvresize_1_perform (guestfs_h *g)
{
  /* TestRun for lvresize (1) */
  const char *arg2234 = "/dev/sda";
  const char *arg2235 = "mbr";
  int ret2233;
  ret2233 = guestfs_part_disk (g, arg2234, arg2235);
  if (ret2233 == -1)
    return -1;
  const char *arg2238 = "/dev/sda1";
  int ret2237;
  ret2237 = guestfs_pvcreate (g, arg2238);
  if (ret2237 == -1)
    return -1;
  const char *arg2241 = "VG";
  const char *arg2242_0 = "/dev/sda1";
  const char *const arg2242[] = {
    arg2242_0,
    NULL
  };
  int ret2240;
  ret2240 = guestfs_vgcreate (g, arg2241, (char **) arg2242);
  if (ret2240 == -1)
    return -1;
  const char *arg2245 = "LV";
  const char *arg2246 = "VG";
  int ret2244;
  ret2244 = guestfs_lvcreate (g, arg2245, arg2246, 20);
  if (ret2244 == -1)
    return -1;
  const char *arg2250 = "/dev/VG/LV";
  int ret2249;
  ret2249 = guestfs_lvresize (g, arg2250, 10);
  if (ret2249 == -1)
    return -1;
  return 0;
}

static int test_lvresize_free_0_skip (void);
static int test_lvresize_free_0_perform (guestfs_h *);

static int
test_lvresize_free_0 (guestfs_h *g)
{
  if (test_lvresize_free_0_skip ()) {
    skipped ("test_lvresize_free_0", "environment variable set");
    return 0;
  }

  const char *features2253[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2253)) {
    skipped ("test_lvresize_free_0", "group %s not available in daemon",
             features2253[0]);
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_lvresize_free_0_perform (g);
}

static int
test_lvresize_free_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "lvresize_free") == NULL;
  str = getenv ("SKIP_TEST_LVRESIZE_FREE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LVRESIZE_FREE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_lvresize_free_0_perform (guestfs_h *g)
{
  /* TestRun for lvresize_free (0) */
  const char *arg2255 = "/dev/sda";
  const char *arg2256 = "mbr";
  int ret2254;
  ret2254 = guestfs_part_disk (g, arg2255, arg2256);
  if (ret2254 == -1)
    return -1;
  const char *arg2259 = "/dev/sda1";
  int ret2258;
  ret2258 = guestfs_pvcreate (g, arg2259);
  if (ret2258 == -1)
    return -1;
  const char *arg2262 = "VG";
  const char *arg2263_0 = "/dev/sda1";
  const char *const arg2263[] = {
    arg2263_0,
    NULL
  };
  int ret2261;
  ret2261 = guestfs_vgcreate (g, arg2262, (char **) arg2263);
  if (ret2261 == -1)
    return -1;
  const char *arg2266 = "LV";
  const char *arg2267 = "VG";
  int ret2265;
  ret2265 = guestfs_lvcreate (g, arg2266, arg2267, 10);
  if (ret2265 == -1)
    return -1;
  const char *arg2271 = "/dev/VG/LV";
  int ret2270;
  ret2270 = guestfs_lvresize_free (g, arg2271, 100);
  if (ret2270 == -1)
    return -1;
  return 0;
}

static int test_lvs_0_skip (void);
static int test_lvs_0_perform (guestfs_h *);

static int
test_lvs_0 (guestfs_h *g)
{
  if (test_lvs_0_skip ()) {
    skipped ("test_lvs_0", "environment variable set");
    return 0;
  }

  const char *features2274[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2274)) {
    skipped ("test_lvs_0", "group %s not available in daemon",
             features2274[0]);
    return 0;
  }

  if (init_basic_fs_on_lvm (g) == -1)
    return -1;

  return test_lvs_0_perform (g);
}

static int
test_lvs_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "lvs") == NULL;
  str = getenv ("SKIP_TEST_LVS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LVS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_lvs_0_perform (guestfs_h *g)
{
  /* TestResult for lvs (0) */
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_lvs (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 1, "/dev/VG/LV"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_lvs_0", "is_string_list (ret, 1, \"/dev/VG/LV\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_lvs_1_skip (void);
static int test_lvs_1_perform (guestfs_h *);

static int
test_lvs_1 (guestfs_h *g)
{
  if (test_lvs_1_skip ()) {
    skipped ("test_lvs_1", "environment variable set");
    return 0;
  }

  const char *features2276[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2276)) {
    skipped ("test_lvs_1", "group %s not available in daemon",
             features2276[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_lvs_1_perform (g);
}

static int
test_lvs_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "lvs") == NULL;
  str = getenv ("SKIP_TEST_LVS_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_LVS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_lvs_1_perform (guestfs_h *g)
{
  /* TestResult for lvs (1) */
  const char *arg2277 = "/dev/sda";
  const char *arg2278 = "mbr";
  int ret12;
  ret12 = guestfs_part_init (g, arg2277, arg2278);
  if (ret12 == -1)
    return -1;
  const char *arg2280 = "/dev/sda";
  const char *arg2281 = "p";
  int ret11;
  ret11 = guestfs_part_add (g, arg2280, arg2281, 64, 204799);
  if (ret11 == -1)
    return -1;
  const char *arg2285 = "/dev/sda";
  const char *arg2286 = "p";
  int ret10;
  ret10 = guestfs_part_add (g, arg2285, arg2286, 204800, 409599);
  if (ret10 == -1)
    return -1;
  const char *arg2290 = "/dev/sda";
  const char *arg2291 = "p";
  int ret9;
  ret9 = guestfs_part_add (g, arg2290, arg2291, 409600, -64);
  if (ret9 == -1)
    return -1;
  const char *arg2295 = "/dev/sda1";
  int ret8;
  ret8 = guestfs_pvcreate (g, arg2295);
  if (ret8 == -1)
    return -1;
  const char *arg2297 = "/dev/sda2";
  int ret7;
  ret7 = guestfs_pvcreate (g, arg2297);
  if (ret7 == -1)
    return -1;
  const char *arg2299 = "/dev/sda3";
  int ret6;
  ret6 = guestfs_pvcreate (g, arg2299);
  if (ret6 == -1)
    return -1;
  const char *arg2301 = "VG1";
  const char *arg2302_0 = "/dev/sda1";
  const char *arg2302_1 = "/dev/sda2";
  const char *const arg2302[] = {
    arg2302_0,
    arg2302_1,
    NULL
  };
  int ret5;
  ret5 = guestfs_vgcreate (g, arg2301, (char **) arg2302);
  if (ret5 == -1)
    return -1;
  const char *arg2304 = "VG2";
  const char *arg2305_0 = "/dev/sda3";
  const char *const arg2305[] = {
    arg2305_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg2304, (char **) arg2305);
  if (ret4 == -1)
    return -1;
  const char *arg2307 = "LV1";
  const char *arg2308 = "VG1";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg2307, arg2308, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2311 = "LV2";
  const char *arg2312 = "VG1";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg2311, arg2312, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2315 = "LV3";
  const char *arg2316 = "VG2";
  int ret1;
  ret1 = guestfs_lvcreate (g, arg2315, arg2316, 50);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_lvs (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "/dev/VG1/LV1", "/dev/VG1/LV2", "/dev/VG2/LV3"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_lvs_1", "is_string_list (ret, 3, \"/dev/VG1/LV1\", \"/dev/VG1/LV2\", \"/dev/VG2/LV3\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_mkdir_0_skip (void);
static int test_mkdir_0_perform (guestfs_h *);

static int
test_mkdir_0 (guestfs_h *g)
{
  if (test_mkdir_0_skip ()) {
    skipped ("test_mkdir_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mkdir_0_perform (g);
}

static int
test_mkdir_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkdir") == NULL;
  str = getenv ("SKIP_TEST_MKDIR_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKDIR");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkdir_0_perform (guestfs_h *g)
{
  /* TestResultTrue for mkdir (0) */
  const char *arg2321 = "/mkdir";
  int ret2320;
  ret2320 = guestfs_mkdir (g, arg2321);
  if (ret2320 == -1)
    return -1;
  const char *arg2323 = "/mkdir";
  struct guestfs_is_dir_opts_argv optargs2324;
  optargs2324.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg2323, &optargs2324);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_mkdir_0", "is_dir");
    return -1;
  }
  return 0;
}

static int test_mkdir_1_skip (void);
static int test_mkdir_1_perform (guestfs_h *);

static int
test_mkdir_1 (guestfs_h *g)
{
  if (test_mkdir_1_skip ()) {
    skipped ("test_mkdir_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mkdir_1_perform (g);
}

static int
test_mkdir_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkdir") == NULL;
  str = getenv ("SKIP_TEST_MKDIR_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKDIR");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkdir_1_perform (guestfs_h *g)
{
  /* TestLastFail for mkdir (1) */
  const char *arg2326 = "/mkdir2/foo/bar";
  int ret2325;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2325 = guestfs_mkdir (g, arg2326);
  guestfs_pop_error_handler (g);
  if (ret2325 != -1)
    return -1;
  return 0;
}

static int test_mkdir_mode_0_skip (void);
static int test_mkdir_mode_0_perform (guestfs_h *);

static int
test_mkdir_mode_0 (guestfs_h *g)
{
  if (test_mkdir_mode_0_skip ()) {
    skipped ("test_mkdir_mode_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mkdir_mode_0_perform (g);
}

static int
test_mkdir_mode_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkdir_mode") == NULL;
  str = getenv ("SKIP_TEST_MKDIR_MODE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKDIR_MODE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkdir_mode_0_perform (guestfs_h *g)
{
  /* TestResult for mkdir_mode (0) */
  const char *arg2328 = "/mkdir_mode";
  int ret1;
  ret1 = guestfs_mkdir_mode (g, arg2328, 73);
  if (ret1 == -1)
    return -1;
  const char *arg2331 = "/mkdir_mode";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2331);
  if (ret == NULL)
      return -1;
  if (! (S_ISDIR (ret->mode) && (ret->mode & 0777) == 0111)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_mkdir_mode_0", "S_ISDIR (ret->mode) && (ret->mode & 0777) == 0111");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_mkdir_p_0_skip (void);
static int test_mkdir_p_0_perform (guestfs_h *);

static int
test_mkdir_p_0 (guestfs_h *g)
{
  if (test_mkdir_p_0_skip ()) {
    skipped ("test_mkdir_p_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mkdir_p_0_perform (g);
}

static int
test_mkdir_p_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkdir_p") == NULL;
  str = getenv ("SKIP_TEST_MKDIR_P_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKDIR_P");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkdir_p_0_perform (guestfs_h *g)
{
  /* TestResultTrue for mkdir_p (0) */
  const char *arg2334 = "/mkdir_p/foo/bar";
  int ret2333;
  ret2333 = guestfs_mkdir_p (g, arg2334);
  if (ret2333 == -1)
    return -1;
  const char *arg2336 = "/mkdir_p/foo/bar";
  struct guestfs_is_dir_opts_argv optargs2337;
  optargs2337.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg2336, &optargs2337);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_mkdir_p_0", "is_dir");
    return -1;
  }
  return 0;
}

static int test_mkdir_p_1_skip (void);
static int test_mkdir_p_1_perform (guestfs_h *);

static int
test_mkdir_p_1 (guestfs_h *g)
{
  if (test_mkdir_p_1_skip ()) {
    skipped ("test_mkdir_p_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mkdir_p_1_perform (g);
}

static int
test_mkdir_p_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkdir_p") == NULL;
  str = getenv ("SKIP_TEST_MKDIR_P_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKDIR_P");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkdir_p_1_perform (guestfs_h *g)
{
  /* TestResultTrue for mkdir_p (1) */
  const char *arg2339 = "/mkdir_p2/foo/bar";
  int ret2338;
  ret2338 = guestfs_mkdir_p (g, arg2339);
  if (ret2338 == -1)
    return -1;
  const char *arg2341 = "/mkdir_p2/foo";
  struct guestfs_is_dir_opts_argv optargs2342;
  optargs2342.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg2341, &optargs2342);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_mkdir_p_1", "is_dir");
    return -1;
  }
  return 0;
}

static int test_mkdir_p_2_skip (void);
static int test_mkdir_p_2_perform (guestfs_h *);

static int
test_mkdir_p_2 (guestfs_h *g)
{
  if (test_mkdir_p_2_skip ()) {
    skipped ("test_mkdir_p_2", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mkdir_p_2_perform (g);
}

static int
test_mkdir_p_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkdir_p") == NULL;
  str = getenv ("SKIP_TEST_MKDIR_P_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKDIR_P");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkdir_p_2_perform (guestfs_h *g)
{
  /* TestResultTrue for mkdir_p (2) */
  const char *arg2344 = "/mkdir_p3/foo/bar";
  int ret2343;
  ret2343 = guestfs_mkdir_p (g, arg2344);
  if (ret2343 == -1)
    return -1;
  const char *arg2346 = "/mkdir_p3";
  struct guestfs_is_dir_opts_argv optargs2347;
  optargs2347.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg2346, &optargs2347);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_mkdir_p_2", "is_dir");
    return -1;
  }
  return 0;
}

static int test_mkdir_p_3_skip (void);
static int test_mkdir_p_3_perform (guestfs_h *);

static int
test_mkdir_p_3 (guestfs_h *g)
{
  if (test_mkdir_p_3_skip ()) {
    skipped ("test_mkdir_p_3", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mkdir_p_3_perform (g);
}

static int
test_mkdir_p_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkdir_p") == NULL;
  str = getenv ("SKIP_TEST_MKDIR_P_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKDIR_P");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkdir_p_3_perform (guestfs_h *g)
{
  /* TestRun for mkdir_p (3) */
  const char *arg2349 = "/mkdir_p4";
  int ret2348;
  ret2348 = guestfs_mkdir (g, arg2349);
  if (ret2348 == -1)
    return -1;
  const char *arg2352 = "/mkdir_p4";
  int ret2351;
  ret2351 = guestfs_mkdir_p (g, arg2352);
  if (ret2351 == -1)
    return -1;
  return 0;
}

static int test_mkdir_p_4_skip (void);
static int test_mkdir_p_4_perform (guestfs_h *);

static int
test_mkdir_p_4 (guestfs_h *g)
{
  if (test_mkdir_p_4_skip ()) {
    skipped ("test_mkdir_p_4", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mkdir_p_4_perform (g);
}

static int
test_mkdir_p_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkdir_p") == NULL;
  str = getenv ("SKIP_TEST_MKDIR_P_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKDIR_P");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkdir_p_4_perform (guestfs_h *g)
{
  /* TestLastFail for mkdir_p (4) */
  const char *arg2355 = "/mkdir_p5";
  int ret2354;
  ret2354 = guestfs_touch (g, arg2355);
  if (ret2354 == -1)
    return -1;
  const char *arg2358 = "/mkdir_p5";
  int ret2357;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2357 = guestfs_mkdir_p (g, arg2358);
  guestfs_pop_error_handler (g);
  if (ret2357 != -1)
    return -1;
  return 0;
}

static int test_mkdtemp_0_skip (void);
static int test_mkdtemp_0_perform (guestfs_h *);

static int
test_mkdtemp_0 (guestfs_h *g)
{
  if (test_mkdtemp_0_skip ()) {
    skipped ("test_mkdtemp_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mkdtemp_0_perform (g);
}

static int
test_mkdtemp_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkdtemp") == NULL;
  str = getenv ("SKIP_TEST_MKDTEMP_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKDTEMP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkdtemp_0_perform (guestfs_h *g)
{
  /* TestRun for mkdtemp (0) */
  const char *arg2361 = "/mkdtemp";
  int ret2360;
  ret2360 = guestfs_mkdir (g, arg2361);
  if (ret2360 == -1)
    return -1;
  const char *arg2364 = "/mkdtemp/tmpXXXXXX";
  CLEANUP_FREE char *ret2363;
  ret2363 = guestfs_mkdtemp (g, arg2364);
  if (ret2363 == NULL)
      return -1;
  return 0;
}

static int test_mke2fs_0_skip (void);
static int test_mke2fs_0_perform (guestfs_h *);

static int
test_mke2fs_0 (guestfs_h *g)
{
  if (test_mke2fs_0_skip ()) {
    skipped ("test_mke2fs_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mke2fs_0_perform (g);
}

static int
test_mke2fs_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mke2fs") == NULL;
  str = getenv ("SKIP_TEST_MKE2FS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKE2FS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mke2fs_0_perform (guestfs_h *g)
{
  /* TestResultString for mke2fs (0) */
  const char *arg2367 = "/dev/sda";
  const char *arg2368 = "mbr";
  int ret2366;
  ret2366 = guestfs_part_init (g, arg2367, arg2368);
  if (ret2366 == -1)
    return -1;
  const char *arg2371 = "/dev/sda";
  const char *arg2372 = "p";
  int ret2370;
  ret2370 = guestfs_part_add (g, arg2371, arg2372, 64, 204799);
  if (ret2370 == -1)
    return -1;
  const char *arg2377 = "/dev/sda";
  const char *arg2378 = "p";
  int ret2376;
  ret2376 = guestfs_part_add (g, arg2377, arg2378, 204800, -64);
  if (ret2376 == -1)
    return -1;
  const char *arg2383 = "/dev/sda1";
  struct guestfs_mke2fs_argv optargs2384;
  optargs2384.blocksize = 4096;
  optargs2384.journaldev = 1;
  optargs2384.bitmask = UINT64_C(0x100000002);
  int ret2382;
  ret2382 = guestfs_mke2fs_argv (g, arg2383, &optargs2384);
  if (ret2382 == -1)
    return -1;
  const char *arg2386 = "/dev/sda2";
  struct guestfs_mke2fs_argv optargs2387;
  optargs2387.blocksize = 4096;
  optargs2387.journaldevice = "/dev/sda1";
  optargs2387.fstype = "ext2";
  optargs2387.bitmask = UINT64_C(0x44002);
  int ret2385;
  ret2385 = guestfs_mke2fs_argv (g, arg2386, &optargs2387);
  if (ret2385 == -1)
    return -1;
  const char *arg2389 = "/dev/sda2";
  const char *arg2390 = "/";
  int ret2388;
  ret2388 = guestfs_mount (g, arg2389, arg2390);
  if (ret2388 == -1)
    return -1;
  const char *arg2393 = "/new";
  const char *arg2394 = "new file contents";
  size_t arg2394_size = 17;
  int ret2392;
  ret2392 = guestfs_write (g, arg2393, arg2394, arg2394_size);
  if (ret2392 == -1)
    return -1;
  const char *arg2396 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2396);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "new file contents")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_mke2fs_0", "cat", "new file contents", ret);
    return -1;
  }
  return 0;
}

static int test_mke2fs_1_skip (void);
static int test_mke2fs_1_perform (guestfs_h *);

static int
test_mke2fs_1 (guestfs_h *g)
{
  if (test_mke2fs_1_skip ()) {
    skipped ("test_mke2fs_1", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mke2fs_1_perform (g);
}

static int
test_mke2fs_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mke2fs") == NULL;
  str = getenv ("SKIP_TEST_MKE2FS_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKE2FS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mke2fs_1_perform (guestfs_h *g)
{
  /* TestResultString for mke2fs (1) */
  const char *arg2399 = "/dev/sda";
  const char *arg2400 = "mbr";
  int ret2398;
  ret2398 = guestfs_part_init (g, arg2399, arg2400);
  if (ret2398 == -1)
    return -1;
  const char *arg2403 = "/dev/sda";
  const char *arg2404 = "p";
  int ret2402;
  ret2402 = guestfs_part_add (g, arg2403, arg2404, 64, 204799);
  if (ret2402 == -1)
    return -1;
  const char *arg2409 = "/dev/sda";
  const char *arg2410 = "p";
  int ret2408;
  ret2408 = guestfs_part_add (g, arg2409, arg2410, 204800, -64);
  if (ret2408 == -1)
    return -1;
  const char *arg2415 = "/dev/sda1";
  struct guestfs_mke2fs_argv optargs2416;
  optargs2416.blocksize = 4096;
  optargs2416.journaldevice = "/dev/sda1";
  optargs2416.label = "JOURNAL";
  optargs2416.fstype = "ext2";
  optargs2416.journaldev = 1;
  optargs2416.bitmask = UINT64_C(0x10004c002);
  int ret2414;
  ret2414 = guestfs_mke2fs_argv (g, arg2415, &optargs2416);
  if (ret2414 == -1)
    return -1;
  const char *arg2418 = "/dev/sda2";
  struct guestfs_mke2fs_argv optargs2419;
  optargs2419.blocksize = 4096;
  optargs2419.journaldevice = "LABEL=JOURNAL";
  optargs2419.label = "JOURNAL";
  optargs2419.fstype = "ext2";
  optargs2419.bitmask = UINT64_C(0x4c002);
  int ret2417;
  ret2417 = guestfs_mke2fs_argv (g, arg2418, &optargs2419);
  if (ret2417 == -1)
    return -1;
  const char *arg2421 = "/dev/sda2";
  const char *arg2422 = "/";
  int ret2420;
  ret2420 = guestfs_mount (g, arg2421, arg2422);
  if (ret2420 == -1)
    return -1;
  const char *arg2425 = "/new";
  const char *arg2426 = "new file contents";
  size_t arg2426_size = 17;
  int ret2424;
  ret2424 = guestfs_write (g, arg2425, arg2426, arg2426_size);
  if (ret2424 == -1)
    return -1;
  const char *arg2428 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2428);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "new file contents")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_mke2fs_1", "cat", "new file contents", ret);
    return -1;
  }
  return 0;
}

static int test_mke2fs_2_skip (void);
static int test_mke2fs_2_perform (guestfs_h *);

static int
test_mke2fs_2 (guestfs_h *g)
{
  if (test_mke2fs_2_skip ()) {
    skipped ("test_mke2fs_2", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mke2fs_2_perform (g);
}

static int
test_mke2fs_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mke2fs") == NULL;
  str = getenv ("SKIP_TEST_MKE2FS_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKE2FS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mke2fs_2_perform (guestfs_h *g)
{
  /* TestResultString for mke2fs (2) */
  const char *arg2431 = "/dev/sda";
  const char *arg2432 = "mbr";
  int ret2430;
  ret2430 = guestfs_part_init (g, arg2431, arg2432);
  if (ret2430 == -1)
    return -1;
  const char *arg2435 = "/dev/sda";
  const char *arg2436 = "p";
  int ret2434;
  ret2434 = guestfs_part_add (g, arg2435, arg2436, 64, 204799);
  if (ret2434 == -1)
    return -1;
  const char *arg2441 = "/dev/sda";
  const char *arg2442 = "p";
  int ret2440;
  ret2440 = guestfs_part_add (g, arg2441, arg2442, 204800, -64);
  if (ret2440 == -1)
    return -1;
  const char *arg2447 = "/dev/sda1";
  struct guestfs_mke2fs_argv optargs2448;
  optargs2448.blocksize = 4096;
  optargs2448.uuid = "534e4f31-92b6-7d0f-4490-a30ac7f0ccce";
  optargs2448.journaldev = 1;
  optargs2448.bitmask = UINT64_C(0x100100002);
  int ret2446;
  ret2446 = guestfs_mke2fs_argv (g, arg2447, &optargs2448);
  if (ret2446 == -1)
    return -1;
  const char *arg2450 = "/dev/sda2";
  struct guestfs_mke2fs_argv optargs2451;
  optargs2451.blocksize = 4096;
  optargs2451.journaldevice = "UUID=534e4f31-92b6-7d0f-4490-a30ac7f0ccce";
  optargs2451.label = "JOURNAL";
  optargs2451.fstype = "ext2";
  optargs2451.forcecreate = 1;
  optargs2451.bitmask = UINT64_C(0x24c002);
  int ret2449;
  ret2449 = guestfs_mke2fs_argv (g, arg2450, &optargs2451);
  if (ret2449 == -1)
    return -1;
  const char *arg2453 = "/dev/sda2";
  const char *arg2454 = "/";
  int ret2452;
  ret2452 = guestfs_mount (g, arg2453, arg2454);
  if (ret2452 == -1)
    return -1;
  const char *arg2457 = "/new";
  const char *arg2458 = "new file contents";
  size_t arg2458_size = 17;
  int ret2456;
  ret2456 = guestfs_write (g, arg2457, arg2458, arg2458_size);
  if (ret2456 == -1)
    return -1;
  const char *arg2460 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2460);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "new file contents")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_mke2fs_2", "cat", "new file contents", ret);
    return -1;
  }
  return 0;
}

static int test_mke2journal_0_skip (void);
static int test_mke2journal_0_perform (guestfs_h *);

static int
test_mke2journal_0 (guestfs_h *g)
{
  if (test_mke2journal_0_skip ()) {
    skipped ("test_mke2journal_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mke2journal_0_perform (g);
}

static int
test_mke2journal_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mke2journal") == NULL;
  str = getenv ("SKIP_TEST_MKE2JOURNAL_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKE2JOURNAL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mke2journal_0_perform (guestfs_h *g)
{
  /* TestResultString for mke2journal (0) */
  const char *arg2463 = "/dev/sda";
  const char *arg2464 = "mbr";
  int ret2462;
  ret2462 = guestfs_part_init (g, arg2463, arg2464);
  if (ret2462 == -1)
    return -1;
  const char *arg2467 = "/dev/sda";
  const char *arg2468 = "p";
  int ret2466;
  ret2466 = guestfs_part_add (g, arg2467, arg2468, 64, 204799);
  if (ret2466 == -1)
    return -1;
  const char *arg2473 = "/dev/sda";
  const char *arg2474 = "p";
  int ret2472;
  ret2472 = guestfs_part_add (g, arg2473, arg2474, 204800, -64);
  if (ret2472 == -1)
    return -1;
  const char *arg2480 = "/dev/sda1";
  int ret2478;
  ret2478 = guestfs_mke2journal (g, 4096, arg2480);
  if (ret2478 == -1)
    return -1;
  const char *arg2483 = "ext2";
  const char *arg2485 = "/dev/sda2";
  const char *arg2486 = "/dev/sda1";
  int ret2482;
  ret2482 = guestfs_mke2fs_J (g, arg2483, 4096, arg2485, arg2486);
  if (ret2482 == -1)
    return -1;
  const char *arg2489 = "/dev/sda2";
  const char *arg2490 = "/";
  int ret2488;
  ret2488 = guestfs_mount (g, arg2489, arg2490);
  if (ret2488 == -1)
    return -1;
  const char *arg2493 = "/new";
  const char *arg2494 = "new file contents";
  size_t arg2494_size = 17;
  int ret2492;
  ret2492 = guestfs_write (g, arg2493, arg2494, arg2494_size);
  if (ret2492 == -1)
    return -1;
  const char *arg2496 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2496);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "new file contents")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_mke2journal_0", "cat", "new file contents", ret);
    return -1;
  }
  return 0;
}

static int test_mke2journal_L_0_skip (void);
static int test_mke2journal_L_0_perform (guestfs_h *);

static int
test_mke2journal_L_0 (guestfs_h *g)
{
  if (test_mke2journal_L_0_skip ()) {
    skipped ("test_mke2journal_L_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mke2journal_L_0_perform (g);
}

static int
test_mke2journal_L_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mke2journal_L") == NULL;
  str = getenv ("SKIP_TEST_MKE2JOURNAL_L_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKE2JOURNAL_L");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mke2journal_L_0_perform (guestfs_h *g)
{
  /* TestResultString for mke2journal_L (0) */
  const char *arg2499 = "/dev/sda";
  const char *arg2500 = "mbr";
  int ret2498;
  ret2498 = guestfs_part_init (g, arg2499, arg2500);
  if (ret2498 == -1)
    return -1;
  const char *arg2503 = "/dev/sda";
  const char *arg2504 = "p";
  int ret2502;
  ret2502 = guestfs_part_add (g, arg2503, arg2504, 64, 204799);
  if (ret2502 == -1)
    return -1;
  const char *arg2509 = "/dev/sda";
  const char *arg2510 = "p";
  int ret2508;
  ret2508 = guestfs_part_add (g, arg2509, arg2510, 204800, -64);
  if (ret2508 == -1)
    return -1;
  const char *arg2516 = "JOURNAL";
  const char *arg2517 = "/dev/sda1";
  int ret2514;
  ret2514 = guestfs_mke2journal_L (g, 4096, arg2516, arg2517);
  if (ret2514 == -1)
    return -1;
  const char *arg2520 = "ext2";
  const char *arg2522 = "/dev/sda2";
  const char *arg2523 = "JOURNAL";
  int ret2519;
  ret2519 = guestfs_mke2fs_JL (g, arg2520, 4096, arg2522, arg2523);
  if (ret2519 == -1)
    return -1;
  const char *arg2526 = "/dev/sda2";
  const char *arg2527 = "/";
  int ret2525;
  ret2525 = guestfs_mount (g, arg2526, arg2527);
  if (ret2525 == -1)
    return -1;
  const char *arg2530 = "/new";
  const char *arg2531 = "new file contents";
  size_t arg2531_size = 17;
  int ret2529;
  ret2529 = guestfs_write (g, arg2530, arg2531, arg2531_size);
  if (ret2529 == -1)
    return -1;
  const char *arg2533 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2533);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "new file contents")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_mke2journal_L_0", "cat", "new file contents", ret);
    return -1;
  }
  return 0;
}

static int test_mke2journal_U_0_skip (void);
static int test_mke2journal_U_0_perform (guestfs_h *);

static int
test_mke2journal_U_0 (guestfs_h *g)
{
  if (test_mke2journal_U_0_skip ()) {
    skipped ("test_mke2journal_U_0", "environment variable set");
    return 0;
  }

  const char *features2535[] = { "linuxfsuuid", NULL };
  if (!guestfs_feature_available (g, (char **) features2535)) {
    skipped ("test_mke2journal_U_0", "group %s not available in daemon",
             features2535[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mke2journal_U_0_perform (g);
}

static int
test_mke2journal_U_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mke2journal_U") == NULL;
  str = getenv ("SKIP_TEST_MKE2JOURNAL_U_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKE2JOURNAL_U");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mke2journal_U_0_perform (guestfs_h *g)
{
  /* TestResultString for mke2journal_U (0) */
  const char *arg2537 = "/dev/sda";
  const char *arg2538 = "mbr";
  int ret2536;
  ret2536 = guestfs_part_init (g, arg2537, arg2538);
  if (ret2536 == -1)
    return -1;
  const char *arg2541 = "/dev/sda";
  const char *arg2542 = "p";
  int ret2540;
  ret2540 = guestfs_part_add (g, arg2541, arg2542, 64, 204799);
  if (ret2540 == -1)
    return -1;
  const char *arg2547 = "/dev/sda";
  const char *arg2548 = "p";
  int ret2546;
  ret2546 = guestfs_part_add (g, arg2547, arg2548, 204800, -64);
  if (ret2546 == -1)
    return -1;
  const char *arg2554 = "534e4f31-92b6-7d0f-4490-a30ac7f0ccce";
  const char *arg2555 = "/dev/sda1";
  int ret2552;
  ret2552 = guestfs_mke2journal_U (g, 4096, arg2554, arg2555);
  if (ret2552 == -1)
    return -1;
  const char *arg2558 = "ext2";
  const char *arg2560 = "/dev/sda2";
  const char *arg2561 = "534e4f31-92b6-7d0f-4490-a30ac7f0ccce";
  int ret2557;
  ret2557 = guestfs_mke2fs_JU (g, arg2558, 4096, arg2560, arg2561);
  if (ret2557 == -1)
    return -1;
  const char *arg2564 = "/dev/sda2";
  const char *arg2565 = "/";
  int ret2563;
  ret2563 = guestfs_mount (g, arg2564, arg2565);
  if (ret2563 == -1)
    return -1;
  const char *arg2568 = "/new";
  const char *arg2569 = "new file contents";
  size_t arg2569_size = 17;
  int ret2567;
  ret2567 = guestfs_write (g, arg2568, arg2569, arg2569_size);
  if (ret2567 == -1)
    return -1;
  const char *arg2571 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2571);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "new file contents")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_mke2journal_U_0", "cat", "new file contents", ret);
    return -1;
  }
  return 0;
}

static int test_mkfifo_0_skip (void);
static int test_mkfifo_0_perform (guestfs_h *);

static int
test_mkfifo_0 (guestfs_h *g)
{
  if (test_mkfifo_0_skip ()) {
    skipped ("test_mkfifo_0", "environment variable set");
    return 0;
  }

  const char *features2573[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2573)) {
    skipped ("test_mkfifo_0", "group %s not available in daemon",
             features2573[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mkfifo_0_perform (g);
}

static int
test_mkfifo_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkfifo") == NULL;
  str = getenv ("SKIP_TEST_MKFIFO_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKFIFO");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkfifo_0_perform (guestfs_h *g)
{
  /* TestResult for mkfifo (0) */
  const char *arg2575 = "/mkfifo";
  int ret1;
  ret1 = guestfs_mkfifo (g, 511, arg2575);
  if (ret1 == -1)
    return -1;
  const char *arg2577 = "/mkfifo";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2577);
  if (ret == NULL)
      return -1;
  if (! (S_ISFIFO (ret->mode) && (ret->mode & 0777) == 0755)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_mkfifo_0", "S_ISFIFO (ret->mode) && (ret->mode & 0777) == 0755");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_mkfifo_1_skip (void);
static int test_mkfifo_1_perform (guestfs_h *);

static int
test_mkfifo_1 (guestfs_h *g)
{
  if (test_mkfifo_1_skip ()) {
    skipped ("test_mkfifo_1", "environment variable set");
    return 0;
  }

  const char *features2579[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2579)) {
    skipped ("test_mkfifo_1", "group %s not available in daemon",
             features2579[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mkfifo_1_perform (g);
}

static int
test_mkfifo_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkfifo") == NULL;
  str = getenv ("SKIP_TEST_MKFIFO_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKFIFO");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkfifo_1_perform (guestfs_h *g)
{
  /* TestLastFail for mkfifo (1) */
  const char *arg2582 = "/mkfifo-2";
  int ret2580;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2580 = guestfs_mkfifo (g, 8703, arg2582);
  guestfs_pop_error_handler (g);
  if (ret2580 != -1)
    return -1;
  return 0;
}

static int test_mkfs_0_skip (void);
static int test_mkfs_0_perform (guestfs_h *);

static int
test_mkfs_0 (guestfs_h *g)
{
  if (test_mkfs_0_skip ()) {
    skipped ("test_mkfs_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mkfs_0_perform (g);
}

static int
test_mkfs_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkfs") == NULL;
  str = getenv ("SKIP_TEST_MKFS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKFS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkfs_0_perform (guestfs_h *g)
{
  /* TestResultString for mkfs (0) */
  const char *arg2585 = "/dev/sda";
  const char *arg2586 = "mbr";
  int ret2584;
  ret2584 = guestfs_part_disk (g, arg2585, arg2586);
  if (ret2584 == -1)
    return -1;
  const char *arg2589 = "ext2";
  const char *arg2590 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs2591;
  optargs2591.bitmask = UINT64_C(0x0);
  int ret2588;
  ret2588 = guestfs_mkfs_opts_argv (g, arg2589, arg2590, &optargs2591);
  if (ret2588 == -1)
    return -1;
  const char *arg2593 = "/dev/sda1";
  const char *arg2594 = "/";
  int ret2592;
  ret2592 = guestfs_mount (g, arg2593, arg2594);
  if (ret2592 == -1)
    return -1;
  const char *arg2597 = "/new";
  const char *arg2598 = "new file contents";
  size_t arg2598_size = 17;
  int ret2596;
  ret2596 = guestfs_write (g, arg2597, arg2598, arg2598_size);
  if (ret2596 == -1)
    return -1;
  const char *arg2600 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2600);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "new file contents")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_mkfs_0", "cat", "new file contents", ret);
    return -1;
  }
  return 0;
}

static int test_mkfs_b_0_skip (void);
static int test_mkfs_b_0_perform (guestfs_h *);

static int
test_mkfs_b_0 (guestfs_h *g)
{
  if (test_mkfs_b_0_skip ()) {
    skipped ("test_mkfs_b_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mkfs_b_0_perform (g);
}

static int
test_mkfs_b_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkfs_b") == NULL;
  str = getenv ("SKIP_TEST_MKFS_B_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKFS_B");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkfs_b_0_perform (guestfs_h *g)
{
  /* TestResultString for mkfs_b (0) */
  const char *arg2603 = "/dev/sda";
  const char *arg2604 = "mbr";
  int ret2602;
  ret2602 = guestfs_part_disk (g, arg2603, arg2604);
  if (ret2602 == -1)
    return -1;
  const char *arg2607 = "ext2";
  const char *arg2609 = "/dev/sda1";
  int ret2606;
  ret2606 = guestfs_mkfs_b (g, arg2607, 4096, arg2609);
  if (ret2606 == -1)
    return -1;
  const char *arg2612 = "/dev/sda1";
  const char *arg2613 = "/";
  int ret2611;
  ret2611 = guestfs_mount (g, arg2612, arg2613);
  if (ret2611 == -1)
    return -1;
  const char *arg2616 = "/new";
  const char *arg2617 = "new file contents";
  size_t arg2617_size = 17;
  int ret2615;
  ret2615 = guestfs_write (g, arg2616, arg2617, arg2617_size);
  if (ret2615 == -1)
    return -1;
  const char *arg2619 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2619);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "new file contents")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_mkfs_b_0", "cat", "new file contents", ret);
    return -1;
  }
  return 0;
}

static int test_mkfs_b_1_skip (void);
static int test_mkfs_b_1_perform (guestfs_h *);

static int
test_mkfs_b_1 (guestfs_h *g)
{
  if (test_mkfs_b_1_skip ()) {
    skipped ("test_mkfs_b_1", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mkfs_b_1_perform (g);
}

static int
test_mkfs_b_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkfs_b") == NULL;
  str = getenv ("SKIP_TEST_MKFS_B_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKFS_B");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkfs_b_1_perform (guestfs_h *g)
{
  /* TestRun for mkfs_b (1) */
  const char *arg2622 = "/dev/sda";
  const char *arg2623 = "mbr";
  int ret2621;
  ret2621 = guestfs_part_init (g, arg2622, arg2623);
  if (ret2621 == -1)
    return -1;
  const char *arg2626 = "/dev/sda";
  const char *arg2627 = "p";
  int ret2625;
  ret2625 = guestfs_part_add (g, arg2626, arg2627, 64, 204799);
  if (ret2625 == -1)
    return -1;
  const char *arg2632 = "vfat";
  const char *arg2634 = "/dev/sda1";
  int ret2631;
  ret2631 = guestfs_mkfs_b (g, arg2632, 32768, arg2634);
  if (ret2631 == -1)
    return -1;
  return 0;
}

static int test_mkfs_b_2_skip (void);
static int test_mkfs_b_2_perform (guestfs_h *);

static int
test_mkfs_b_2 (guestfs_h *g)
{
  if (test_mkfs_b_2_skip ()) {
    skipped ("test_mkfs_b_2", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mkfs_b_2_perform (g);
}

static int
test_mkfs_b_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkfs_b") == NULL;
  str = getenv ("SKIP_TEST_MKFS_B_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKFS_B");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkfs_b_2_perform (guestfs_h *g)
{
  /* TestLastFail for mkfs_b (2) */
  const char *arg2637 = "/dev/sda";
  const char *arg2638 = "mbr";
  int ret2636;
  ret2636 = guestfs_part_init (g, arg2637, arg2638);
  if (ret2636 == -1)
    return -1;
  const char *arg2641 = "/dev/sda";
  const char *arg2642 = "p";
  int ret2640;
  ret2640 = guestfs_part_add (g, arg2641, arg2642, 64, 204799);
  if (ret2640 == -1)
    return -1;
  const char *arg2647 = "vfat";
  const char *arg2649 = "/dev/sda1";
  int ret2646;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2646 = guestfs_mkfs_b (g, arg2647, 32769, arg2649);
  guestfs_pop_error_handler (g);
  if (ret2646 != -1)
    return -1;
  return 0;
}

static int test_mkfs_b_3_skip (void);
static int test_mkfs_b_3_perform (guestfs_h *);

static int
test_mkfs_b_3 (guestfs_h *g)
{
  if (test_mkfs_b_3_skip ()) {
    skipped ("test_mkfs_b_3", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mkfs_b_3_perform (g);
}

static int
test_mkfs_b_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkfs_b") == NULL;
  str = getenv ("SKIP_TEST_MKFS_B_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKFS_B");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkfs_b_3_perform (guestfs_h *g)
{
  /* TestLastFail for mkfs_b (3) */
  const char *arg2652 = "/dev/sda";
  const char *arg2653 = "mbr";
  int ret2651;
  ret2651 = guestfs_part_init (g, arg2652, arg2653);
  if (ret2651 == -1)
    return -1;
  const char *arg2656 = "/dev/sda";
  const char *arg2657 = "p";
  int ret2655;
  ret2655 = guestfs_part_add (g, arg2656, arg2657, 64, 204799);
  if (ret2655 == -1)
    return -1;
  const char *arg2662 = "vfat";
  const char *arg2664 = "/dev/sda1";
  int ret2661;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2661 = guestfs_mkfs_b (g, arg2662, 33280, arg2664);
  guestfs_pop_error_handler (g);
  if (ret2661 != -1)
    return -1;
  return 0;
}

static int test_mkfs_b_4_skip (void);
static int test_mkfs_b_4_perform (guestfs_h *);

static int
test_mkfs_b_4 (guestfs_h *g)
{
  if (test_mkfs_b_4_skip ()) {
    skipped ("test_mkfs_b_4", "environment variable set");
    return 0;
  }

  const char *features2666[] = { "ntfsprogs", NULL };
  if (!guestfs_feature_available (g, (char **) features2666)) {
    skipped ("test_mkfs_b_4", "group %s not available in daemon",
             features2666[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mkfs_b_4_perform (g);
}

static int
test_mkfs_b_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkfs_b") == NULL;
  str = getenv ("SKIP_TEST_MKFS_B_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKFS_B");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkfs_b_4_perform (guestfs_h *g)
{
  /* TestRun for mkfs_b (4) */
  const char *arg2668 = "/dev/sda";
  const char *arg2669 = "mbr";
  int ret2667;
  ret2667 = guestfs_part_disk (g, arg2668, arg2669);
  if (ret2667 == -1)
    return -1;
  const char *arg2672 = "ntfs";
  const char *arg2674 = "/dev/sda1";
  int ret2671;
  ret2671 = guestfs_mkfs_b (g, arg2672, 32768, arg2674);
  if (ret2671 == -1)
    return -1;
  return 0;
}

static int test_mkfs_btrfs_0_skip (void);
static int test_mkfs_btrfs_0_perform (guestfs_h *);

static int
test_mkfs_btrfs_0 (guestfs_h *g)
{
  if (test_mkfs_btrfs_0_skip ()) {
    skipped ("test_mkfs_btrfs_0", "environment variable set");
    return 0;
  }

  const char *features2676[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features2676)) {
    skipped ("test_mkfs_btrfs_0", "group %s not available in daemon",
             features2676[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mkfs_btrfs_0_perform (g);
}

static int
test_mkfs_btrfs_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkfs_btrfs") == NULL;
  str = getenv ("SKIP_TEST_MKFS_BTRFS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKFS_BTRFS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkfs_btrfs_0_perform (guestfs_h *g)
{
  /* TestRun for mkfs_btrfs (0) */
  const char *arg2678 = "/dev/sda";
  const char *arg2679 = "mbr";
  int ret2677;
  ret2677 = guestfs_part_disk (g, arg2678, arg2679);
  if (ret2677 == -1)
    return -1;
  const char *arg2682_0 = "/dev/sda1";
  const char *const arg2682[] = {
    arg2682_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs2683;
  optargs2683.allocstart = 0;
  optargs2683.bytecount = 268435456;
  optargs2683.datatype = "single";
  optargs2683.label = "test";
  optargs2683.metadata = "single";
  optargs2683.nodesize = 65536;
  optargs2683.sectorsize = 4096;
  optargs2683.bitmask = UINT64_C(0xf7);
  int ret2681;
  ret2681 = guestfs_mkfs_btrfs_argv (g, (char **) arg2682, &optargs2683);
  if (ret2681 == -1)
    return -1;
  return 0;
}

static int test_mklost_and_found_0_skip (void);
static int test_mklost_and_found_0_perform (guestfs_h *);

static int
test_mklost_and_found_0 (guestfs_h *g)
{
  if (test_mklost_and_found_0_skip ()) {
    skipped ("test_mklost_and_found_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_mklost_and_found_0_perform (g);
}

static int
test_mklost_and_found_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mklost_and_found") == NULL;
  str = getenv ("SKIP_TEST_MKLOST_AND_FOUND_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKLOST_AND_FOUND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mklost_and_found_0_perform (guestfs_h *g)
{
  /* TestRun for mklost_and_found (0) */
  const char *arg2685 = "/lost+found";
  int ret2684;
  ret2684 = guestfs_rm_rf (g, arg2685);
  if (ret2684 == -1)
    return -1;
  const char *arg2688 = "/";
  int ret2687;
  ret2687 = guestfs_mklost_and_found (g, arg2688);
  if (ret2687 == -1)
    return -1;
  return 0;
}

static int test_mknod_0_skip (void);
static int test_mknod_0_perform (guestfs_h *);

static int
test_mknod_0 (guestfs_h *g)
{
  if (test_mknod_0_skip ()) {
    skipped ("test_mknod_0", "environment variable set");
    return 0;
  }

  const char *features2690[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2690)) {
    skipped ("test_mknod_0", "group %s not available in daemon",
             features2690[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mknod_0_perform (g);
}

static int
test_mknod_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mknod") == NULL;
  str = getenv ("SKIP_TEST_MKNOD_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKNOD");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mknod_0_perform (guestfs_h *g)
{
  /* TestResult for mknod (0) */
  const char *arg2694 = "/mknod";
  int ret1;
  ret1 = guestfs_mknod (g, 4607, 0, 0, arg2694);
  if (ret1 == -1)
    return -1;
  const char *arg2696 = "/mknod";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2696);
  if (ret == NULL)
      return -1;
  if (! (S_ISFIFO (ret->mode) && (ret->mode & 0777) == 0755)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_mknod_0", "S_ISFIFO (ret->mode) && (ret->mode & 0777) == 0755");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_mknod_1_skip (void);
static int test_mknod_1_perform (guestfs_h *);

static int
test_mknod_1 (guestfs_h *g)
{
  if (test_mknod_1_skip ()) {
    skipped ("test_mknod_1", "environment variable set");
    return 0;
  }

  const char *features2698[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2698)) {
    skipped ("test_mknod_1", "group %s not available in daemon",
             features2698[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mknod_1_perform (g);
}

static int
test_mknod_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mknod") == NULL;
  str = getenv ("SKIP_TEST_MKNOD_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKNOD");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mknod_1_perform (guestfs_h *g)
{
  /* TestResult for mknod (1) */
  const char *arg2702 = "/mknod2";
  int ret1;
  ret1 = guestfs_mknod (g, 25087, 66, 99, arg2702);
  if (ret1 == -1)
    return -1;
  const char *arg2704 = "/mknod2";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2704);
  if (ret == NULL)
      return -1;
  if (! (S_ISBLK (ret->mode) && (ret->mode & 0777) == 0755)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_mknod_1", "S_ISBLK (ret->mode) && (ret->mode & 0777) == 0755");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_mknod_b_0_skip (void);
static int test_mknod_b_0_perform (guestfs_h *);

static int
test_mknod_b_0 (guestfs_h *g)
{
  if (test_mknod_b_0_skip ()) {
    skipped ("test_mknod_b_0", "environment variable set");
    return 0;
  }

  const char *features2706[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2706)) {
    skipped ("test_mknod_b_0", "group %s not available in daemon",
             features2706[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mknod_b_0_perform (g);
}

static int
test_mknod_b_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mknod_b") == NULL;
  str = getenv ("SKIP_TEST_MKNOD_B_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKNOD_B");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mknod_b_0_perform (guestfs_h *g)
{
  /* TestResult for mknod_b (0) */
  const char *arg2710 = "/mknod_b";
  int ret1;
  ret1 = guestfs_mknod_b (g, 511, 99, 66, arg2710);
  if (ret1 == -1)
    return -1;
  const char *arg2712 = "/mknod_b";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2712);
  if (ret == NULL)
      return -1;
  if (! (S_ISBLK (ret->mode) && (ret->mode & 0777) == 0755)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_mknod_b_0", "S_ISBLK (ret->mode) && (ret->mode & 0777) == 0755");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_mknod_b_1_skip (void);
static int test_mknod_b_1_perform (guestfs_h *);

static int
test_mknod_b_1 (guestfs_h *g)
{
  if (test_mknod_b_1_skip ()) {
    skipped ("test_mknod_b_1", "environment variable set");
    return 0;
  }

  const char *features2714[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2714)) {
    skipped ("test_mknod_b_1", "group %s not available in daemon",
             features2714[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mknod_b_1_perform (g);
}

static int
test_mknod_b_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mknod_b") == NULL;
  str = getenv ("SKIP_TEST_MKNOD_B_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKNOD_B");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mknod_b_1_perform (guestfs_h *g)
{
  /* TestLastFail for mknod_b (1) */
  const char *arg2719 = "/mknod_b-2";
  int ret2715;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2715 = guestfs_mknod_b (g, 4607, 99, 66, arg2719);
  guestfs_pop_error_handler (g);
  if (ret2715 != -1)
    return -1;
  return 0;
}

static int test_mknod_c_0_skip (void);
static int test_mknod_c_0_perform (guestfs_h *);

static int
test_mknod_c_0 (guestfs_h *g)
{
  if (test_mknod_c_0_skip ()) {
    skipped ("test_mknod_c_0", "environment variable set");
    return 0;
  }

  const char *features2721[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2721)) {
    skipped ("test_mknod_c_0", "group %s not available in daemon",
             features2721[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mknod_c_0_perform (g);
}

static int
test_mknod_c_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mknod_c") == NULL;
  str = getenv ("SKIP_TEST_MKNOD_C_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKNOD_C");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mknod_c_0_perform (guestfs_h *g)
{
  /* TestResult for mknod_c (0) */
  const char *arg2725 = "/mknod_c";
  int ret1;
  ret1 = guestfs_mknod_c (g, 511, 99, 66, arg2725);
  if (ret1 == -1)
    return -1;
  const char *arg2727 = "/mknod_c";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2727);
  if (ret == NULL)
      return -1;
  if (! (S_ISCHR (ret->mode) && (ret->mode & 0777) == 0755)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_mknod_c_0", "S_ISCHR (ret->mode) && (ret->mode & 0777) == 0755");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_mknod_c_1_skip (void);
static int test_mknod_c_1_perform (guestfs_h *);

static int
test_mknod_c_1 (guestfs_h *g)
{
  if (test_mknod_c_1_skip ()) {
    skipped ("test_mknod_c_1", "environment variable set");
    return 0;
  }

  const char *features2729[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2729)) {
    skipped ("test_mknod_c_1", "group %s not available in daemon",
             features2729[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mknod_c_1_perform (g);
}

static int
test_mknod_c_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mknod_c") == NULL;
  str = getenv ("SKIP_TEST_MKNOD_C_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKNOD_C");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mknod_c_1_perform (guestfs_h *g)
{
  /* TestLastFail for mknod_c (1) */
  const char *arg2734 = "/mknod_c-2";
  int ret2730;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2730 = guestfs_mknod_c (g, 8703, 99, 66, arg2734);
  guestfs_pop_error_handler (g);
  if (ret2730 != -1)
    return -1;
  return 0;
}

static int test_mkswap_0_skip (void);
static int test_mkswap_0_perform (guestfs_h *);

static int
test_mkswap_0 (guestfs_h *g)
{
  if (test_mkswap_0_skip ()) {
    skipped ("test_mkswap_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mkswap_0_perform (g);
}

static int
test_mkswap_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkswap") == NULL;
  str = getenv ("SKIP_TEST_MKSWAP_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKSWAP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkswap_0_perform (guestfs_h *g)
{
  /* TestRun for mkswap (0) */
  const char *arg2737 = "/dev/sda";
  const char *arg2738 = "mbr";
  int ret2736;
  ret2736 = guestfs_part_disk (g, arg2737, arg2738);
  if (ret2736 == -1)
    return -1;
  const char *arg2741 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs2742;
  optargs2742.bitmask = UINT64_C(0x0);
  int ret2740;
  ret2740 = guestfs_mkswap_opts_argv (g, arg2741, &optargs2742);
  if (ret2740 == -1)
    return -1;
  return 0;
}

static int test_mkswap_1_skip (void);
static int test_mkswap_1_perform (guestfs_h *);

static int
test_mkswap_1 (guestfs_h *g)
{
  if (test_mkswap_1_skip ()) {
    skipped ("test_mkswap_1", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mkswap_1_perform (g);
}

static int
test_mkswap_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkswap") == NULL;
  str = getenv ("SKIP_TEST_MKSWAP_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKSWAP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkswap_1_perform (guestfs_h *g)
{
  /* TestRun for mkswap (1) */
  const char *arg2744 = "/dev/sda";
  const char *arg2745 = "mbr";
  int ret2743;
  ret2743 = guestfs_part_disk (g, arg2744, arg2745);
  if (ret2743 == -1)
    return -1;
  const char *arg2748 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs2749;
  optargs2749.label = "hello";
  optargs2749.bitmask = UINT64_C(0x1);
  int ret2747;
  ret2747 = guestfs_mkswap_opts_argv (g, arg2748, &optargs2749);
  if (ret2747 == -1)
    return -1;
  return 0;
}

static int test_mkswap_2_skip (void);
static int test_mkswap_2_perform (guestfs_h *);

static int
test_mkswap_2 (guestfs_h *g)
{
  if (test_mkswap_2_skip ()) {
    skipped ("test_mkswap_2", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mkswap_2_perform (g);
}

static int
test_mkswap_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkswap") == NULL;
  str = getenv ("SKIP_TEST_MKSWAP_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKSWAP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkswap_2_perform (guestfs_h *g)
{
  /* TestResultString for mkswap (2) */
  const char *arg2751 = "/dev/sda";
  const char *arg2752 = "mbr";
  int ret2750;
  ret2750 = guestfs_part_disk (g, arg2751, arg2752);
  if (ret2750 == -1)
    return -1;
  const char *arg2755 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs2756;
  optargs2756.uuid = "534e4f31-92b6-7d0f-4490-a30ac7f0ccce";
  optargs2756.bitmask = UINT64_C(0x2);
  int ret2754;
  ret2754 = guestfs_mkswap_opts_argv (g, arg2755, &optargs2756);
  if (ret2754 == -1)
    return -1;
  const char *arg2757 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_uuid (g, arg2757);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "534e4f31-92b6-7d0f-4490-a30ac7f0ccce")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_mkswap_2", "vfs_uuid", "534e4f31-92b6-7d0f-4490-a30ac7f0ccce", ret);
    return -1;
  }
  return 0;
}

static int test_mkswap_3_skip (void);
static int test_mkswap_3_perform (guestfs_h *);

static int
test_mkswap_3 (guestfs_h *g)
{
  if (test_mkswap_3_skip ()) {
    skipped ("test_mkswap_3", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mkswap_3_perform (g);
}

static int
test_mkswap_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkswap") == NULL;
  str = getenv ("SKIP_TEST_MKSWAP_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKSWAP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkswap_3_perform (guestfs_h *g)
{
  /* TestResultString for mkswap (3) */
  const char *arg2760 = "/dev/sda";
  const char *arg2761 = "mbr";
  int ret2759;
  ret2759 = guestfs_part_disk (g, arg2760, arg2761);
  if (ret2759 == -1)
    return -1;
  const char *arg2764 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs2765;
  optargs2765.label = "hello";
  optargs2765.uuid = "534e4f31-92b6-7d0f-4490-a30ac7f0ccce";
  optargs2765.bitmask = UINT64_C(0x3);
  int ret2763;
  ret2763 = guestfs_mkswap_opts_argv (g, arg2764, &optargs2765);
  if (ret2763 == -1)
    return -1;
  const char *arg2766 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg2766);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "hello")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_mkswap_3", "vfs_label", "hello", ret);
    return -1;
  }
  return 0;
}

static int test_mkswap_L_0_skip (void);
static int test_mkswap_L_0_perform (guestfs_h *);

static int
test_mkswap_L_0 (guestfs_h *g)
{
  if (test_mkswap_L_0_skip ()) {
    skipped ("test_mkswap_L_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mkswap_L_0_perform (g);
}

static int
test_mkswap_L_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkswap_L") == NULL;
  str = getenv ("SKIP_TEST_MKSWAP_L_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKSWAP_L");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkswap_L_0_perform (guestfs_h *g)
{
  /* TestRun for mkswap_L (0) */
  const char *arg2769 = "/dev/sda";
  const char *arg2770 = "mbr";
  int ret2768;
  ret2768 = guestfs_part_disk (g, arg2769, arg2770);
  if (ret2768 == -1)
    return -1;
  const char *arg2773 = "hello";
  const char *arg2774 = "/dev/sda1";
  int ret2772;
  ret2772 = guestfs_mkswap_L (g, arg2773, arg2774);
  if (ret2772 == -1)
    return -1;
  return 0;
}

static int test_mkswap_U_0_skip (void);
static int test_mkswap_U_0_perform (guestfs_h *);

static int
test_mkswap_U_0 (guestfs_h *g)
{
  if (test_mkswap_U_0_skip ()) {
    skipped ("test_mkswap_U_0", "environment variable set");
    return 0;
  }

  const char *features2776[] = { "linuxfsuuid", NULL };
  if (!guestfs_feature_available (g, (char **) features2776)) {
    skipped ("test_mkswap_U_0", "group %s not available in daemon",
             features2776[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mkswap_U_0_perform (g);
}

static int
test_mkswap_U_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkswap_U") == NULL;
  str = getenv ("SKIP_TEST_MKSWAP_U_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKSWAP_U");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkswap_U_0_perform (guestfs_h *g)
{
  /* TestRun for mkswap_U (0) */
  const char *arg2778 = "/dev/sda";
  const char *arg2779 = "mbr";
  int ret2777;
  ret2777 = guestfs_part_disk (g, arg2778, arg2779);
  if (ret2777 == -1)
    return -1;
  const char *arg2782 = "534e4f31-92b6-7d0f-4490-a30ac7f0ccce";
  const char *arg2783 = "/dev/sda1";
  int ret2781;
  ret2781 = guestfs_mkswap_U (g, arg2782, arg2783);
  if (ret2781 == -1)
    return -1;
  return 0;
}

static int test_mkswap_file_0_skip (void);
static int test_mkswap_file_0_perform (guestfs_h *);

static int
test_mkswap_file_0 (guestfs_h *g)
{
  if (test_mkswap_file_0_skip ()) {
    skipped ("test_mkswap_file_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mkswap_file_0_perform (g);
}

static int
test_mkswap_file_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mkswap_file") == NULL;
  str = getenv ("SKIP_TEST_MKSWAP_FILE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKSWAP_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mkswap_file_0_perform (guestfs_h *g)
{
  /* TestRun for mkswap_file (0) */
  const char *arg2786 = "/mkswap_file";
  int ret2785;
  ret2785 = guestfs_fallocate (g, arg2786, 8388608);
  if (ret2785 == -1)
    return -1;
  const char *arg2790 = "/mkswap_file";
  int ret2789;
  ret2789 = guestfs_mkswap_file (g, arg2790);
  if (ret2789 == -1)
    return -1;
  const char *arg2793 = "/mkswap_file";
  int ret2792;
  ret2792 = guestfs_rm (g, arg2793);
  if (ret2792 == -1)
    return -1;
  return 0;
}

static int test_mktemp_0_skip (void);
static int test_mktemp_0_perform (guestfs_h *);

static int
test_mktemp_0 (guestfs_h *g)
{
  if (test_mktemp_0_skip ()) {
    skipped ("test_mktemp_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mktemp_0_perform (g);
}

static int
test_mktemp_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mktemp") == NULL;
  str = getenv ("SKIP_TEST_MKTEMP_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MKTEMP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mktemp_0_perform (guestfs_h *g)
{
  /* TestRun for mktemp (0) */
  const char *arg2796 = "/mktemp";
  int ret2795;
  ret2795 = guestfs_mkdir (g, arg2796);
  if (ret2795 == -1)
    return -1;
  const char *arg2799 = "/mktemp/tmpXXXXXX";
  struct guestfs_mktemp_argv optargs2800;
  optargs2800.bitmask = UINT64_C(0x0);
  CLEANUP_FREE char *ret2798;
  ret2798 = guestfs_mktemp_argv (g, arg2799, &optargs2800);
  if (ret2798 == NULL)
      return -1;
  const char *arg2802 = "/mktemp/tmpXXXXXX";
  struct guestfs_mktemp_argv optargs2803;
  optargs2803.suffix = "suff";
  optargs2803.bitmask = UINT64_C(0x1);
  CLEANUP_FREE char *ret2801;
  ret2801 = guestfs_mktemp_argv (g, arg2802, &optargs2803);
  if (ret2801 == NULL)
      return -1;
  return 0;
}

static int test_modprobe_0_skip (void);
static int test_modprobe_0_perform (guestfs_h *);

static int
test_modprobe_0 (guestfs_h *g)
{
  if (test_modprobe_0_skip ()) {
    skipped ("test_modprobe_0", "environment variable set");
    return 0;
  }

  const char *features2804[] = { "linuxmodules", NULL };
  if (!guestfs_feature_available (g, (char **) features2804)) {
    skipped ("test_modprobe_0", "group %s not available in daemon",
             features2804[0]);
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_modprobe_0_perform (g);
}

static int
test_modprobe_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "modprobe") == NULL;
  str = getenv ("SKIP_TEST_MODPROBE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MODPROBE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_modprobe_0_perform (guestfs_h *g)
{
  /* TestRun for modprobe (0) */
  const char *arg2806 = "fat";
  int ret2805;
  ret2805 = guestfs_modprobe (g, arg2806);
  if (ret2805 == -1)
    return -1;
  return 0;
}

static int test_mount_0_skip (void);
static int test_mount_0_perform (guestfs_h *);

static int
test_mount_0 (guestfs_h *g)
{
  if (test_mount_0_skip ()) {
    skipped ("test_mount_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_mount_0_perform (g);
}

static int
test_mount_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mount") == NULL;
  str = getenv ("SKIP_TEST_MOUNT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MOUNT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mount_0_perform (guestfs_h *g)
{
  /* TestResultString for mount (0) */
  const char *arg2809 = "/dev/sda";
  const char *arg2810 = "mbr";
  int ret2808;
  ret2808 = guestfs_part_disk (g, arg2809, arg2810);
  if (ret2808 == -1)
    return -1;
  const char *arg2813 = "ext2";
  const char *arg2814 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs2815;
  optargs2815.bitmask = UINT64_C(0x0);
  int ret2812;
  ret2812 = guestfs_mkfs_opts_argv (g, arg2813, arg2814, &optargs2815);
  if (ret2812 == -1)
    return -1;
  const char *arg2817 = "/dev/sda1";
  const char *arg2818 = "/";
  int ret2816;
  ret2816 = guestfs_mount (g, arg2817, arg2818);
  if (ret2816 == -1)
    return -1;
  const char *arg2821 = "/new";
  const char *arg2822 = "new file contents";
  size_t arg2822_size = 17;
  int ret2820;
  ret2820 = guestfs_write (g, arg2821, arg2822, arg2822_size);
  if (ret2820 == -1)
    return -1;
  const char *arg2824 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2824);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "new file contents")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_mount_0", "cat", "new file contents", ret);
    return -1;
  }
  return 0;
}

static int test_mount_ro_0_skip (void);
static int test_mount_ro_0_perform (guestfs_h *);

static int
test_mount_ro_0 (guestfs_h *g)
{
  if (test_mount_ro_0_skip ()) {
    skipped ("test_mount_ro_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_mount_ro_0_perform (g);
}

static int
test_mount_ro_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mount_ro") == NULL;
  str = getenv ("SKIP_TEST_MOUNT_RO_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MOUNT_RO");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mount_ro_0_perform (guestfs_h *g)
{
  /* TestLastFail for mount_ro (0) */
  const char *arg2827 = "/";
  struct guestfs_umount_opts_argv optargs2828;
  optargs2828.force = 0;
  optargs2828.lazyunmount = 0;
  optargs2828.bitmask = UINT64_C(0x3);
  int ret2826;
  ret2826 = guestfs_umount_opts_argv (g, arg2827, &optargs2828);
  if (ret2826 == -1)
    return -1;
  const char *arg2830 = "/dev/sda1";
  const char *arg2831 = "/";
  int ret2829;
  ret2829 = guestfs_mount_ro (g, arg2830, arg2831);
  if (ret2829 == -1)
    return -1;
  const char *arg2834 = "/new";
  int ret2833;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2833 = guestfs_touch (g, arg2834);
  guestfs_pop_error_handler (g);
  if (ret2833 != -1)
    return -1;
  return 0;
}

static int test_mount_ro_1_skip (void);
static int test_mount_ro_1_perform (guestfs_h *);

static int
test_mount_ro_1 (guestfs_h *g)
{
  if (test_mount_ro_1_skip ()) {
    skipped ("test_mount_ro_1", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_mount_ro_1_perform (g);
}

static int
test_mount_ro_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mount_ro") == NULL;
  str = getenv ("SKIP_TEST_MOUNT_RO_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MOUNT_RO");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mount_ro_1_perform (guestfs_h *g)
{
  /* TestResultString for mount_ro (1) */
  const char *arg2837 = "/new";
  const char *arg2838 = "data";
  size_t arg2838_size = 4;
  int ret2836;
  ret2836 = guestfs_write (g, arg2837, arg2838, arg2838_size);
  if (ret2836 == -1)
    return -1;
  const char *arg2841 = "/";
  struct guestfs_umount_opts_argv optargs2842;
  optargs2842.force = 0;
  optargs2842.lazyunmount = 0;
  optargs2842.bitmask = UINT64_C(0x3);
  int ret2840;
  ret2840 = guestfs_umount_opts_argv (g, arg2841, &optargs2842);
  if (ret2840 == -1)
    return -1;
  const char *arg2844 = "/dev/sda1";
  const char *arg2845 = "/";
  int ret2843;
  ret2843 = guestfs_mount_ro (g, arg2844, arg2845);
  if (ret2843 == -1)
    return -1;
  const char *arg2847 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2847);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "data")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_mount_ro_1", "cat", "data", ret);
    return -1;
  }
  return 0;
}

static int test_mounts_0_skip (void);
static int test_mounts_0_perform (guestfs_h *);

static int
test_mounts_0 (guestfs_h *g)
{
  if (test_mounts_0_skip ()) {
    skipped ("test_mounts_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mounts_0_perform (g);
}

static int
test_mounts_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mounts") == NULL;
  str = getenv ("SKIP_TEST_MOUNTS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MOUNTS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mounts_0_perform (guestfs_h *g)
{
  /* TestResult for mounts (0) */
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_mounts (g);
  if (ret == NULL)
      return -1;
  if (! (is_device_list (ret, 1, "/dev/sdb1"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_mounts_0", "is_device_list (ret, 1, \"/dev/sdb1\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_mv_0_skip (void);
static int test_mv_0_perform (guestfs_h *);

static int
test_mv_0 (guestfs_h *g)
{
  if (test_mv_0_skip ()) {
    skipped ("test_mv_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mv_0_perform (g);
}

static int
test_mv_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mv") == NULL;
  str = getenv ("SKIP_TEST_MV_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MV");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mv_0_perform (guestfs_h *g)
{
  /* TestResultString for mv (0) */
  const char *arg2851 = "/mv";
  int ret2850;
  ret2850 = guestfs_mkdir (g, arg2851);
  if (ret2850 == -1)
    return -1;
  const char *arg2854 = "/mv/old";
  const char *arg2855 = "file content";
  size_t arg2855_size = 12;
  int ret2853;
  ret2853 = guestfs_write (g, arg2854, arg2855, arg2855_size);
  if (ret2853 == -1)
    return -1;
  const char *arg2858 = "/mv/old";
  const char *arg2859 = "/mv/new";
  int ret2857;
  ret2857 = guestfs_mv (g, arg2858, arg2859);
  if (ret2857 == -1)
    return -1;
  const char *arg2861 = "/mv/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2861);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "file content")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_mv_0", "cat", "file content", ret);
    return -1;
  }
  return 0;
}

static int test_mv_1_skip (void);
static int test_mv_1_perform (guestfs_h *);

static int
test_mv_1 (guestfs_h *g)
{
  if (test_mv_1_skip ()) {
    skipped ("test_mv_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_mv_1_perform (g);
}

static int
test_mv_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "mv") == NULL;
  str = getenv ("SKIP_TEST_MV_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_MV");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_mv_1_perform (guestfs_h *g)
{
  /* TestResultFalse for mv (1) */
  const char *arg2864 = "/mv2";
  int ret2863;
  ret2863 = guestfs_mkdir (g, arg2864);
  if (ret2863 == -1)
    return -1;
  const char *arg2867 = "/mv2/old";
  const char *arg2868 = "file content";
  size_t arg2868_size = 12;
  int ret2866;
  ret2866 = guestfs_write (g, arg2867, arg2868, arg2868_size);
  if (ret2866 == -1)
    return -1;
  const char *arg2871 = "/mv2/old";
  const char *arg2872 = "/mv2/new";
  int ret2870;
  ret2870 = guestfs_mv (g, arg2871, arg2872);
  if (ret2870 == -1)
    return -1;
  const char *arg2874 = "/mv2/old";
  struct guestfs_is_file_opts_argv optargs2875;
  optargs2875.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg2874, &optargs2875);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_mv_1", "is_file");
    return -1;
  }
  return 0;
}

static int test_nr_devices_0_skip (void);
static int test_nr_devices_0_perform (guestfs_h *);

static int
test_nr_devices_0 (guestfs_h *g)
{
  if (test_nr_devices_0_skip ()) {
    skipped ("test_nr_devices_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_nr_devices_0_perform (g);
}

static int
test_nr_devices_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "nr_devices") == NULL;
  str = getenv ("SKIP_TEST_NR_DEVICES_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_NR_DEVICES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_nr_devices_0_perform (guestfs_h *g)
{
  /* TestResult for nr_devices (0) */
  int ret;
  ret = guestfs_nr_devices (g);
  if (ret == -1)
    return -1;
  if (! (ret == 4)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_nr_devices_0", "ret == 4");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_ntfs_3g_probe_0_skip (void);
static int test_ntfs_3g_probe_0_perform (guestfs_h *);

static int
test_ntfs_3g_probe_0 (guestfs_h *g)
{
  if (test_ntfs_3g_probe_0_skip ()) {
    skipped ("test_ntfs_3g_probe_0", "environment variable set");
    return 0;
  }

  const char *features2877[] = { "ntfs3g", NULL };
  if (!guestfs_feature_available (g, (char **) features2877)) {
    skipped ("test_ntfs_3g_probe_0", "group %s not available in daemon",
             features2877[0]);
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_ntfs_3g_probe_0_perform (g);
}

static int
test_ntfs_3g_probe_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "ntfs_3g_probe") == NULL;
  str = getenv ("SKIP_TEST_NTFS_3G_PROBE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_NTFS_3G_PROBE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_ntfs_3g_probe_0_perform (guestfs_h *g)
{
  /* TestResult for ntfs_3g_probe (0) */
  const char *arg2878 = "/dev/sda";
  const char *arg2879 = "mbr";
  int ret2;
  ret2 = guestfs_part_disk (g, arg2878, arg2879);
  if (ret2 == -1)
    return -1;
  const char *arg2881 = "ntfs";
  const char *arg2882 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs2883;
  optargs2883.bitmask = UINT64_C(0x0);
  int ret1;
  ret1 = guestfs_mkfs_opts_argv (g, arg2881, arg2882, &optargs2883);
  if (ret1 == -1)
    return -1;
  const char *arg2885 = "/dev/sda1";
  int ret;
  ret = guestfs_ntfs_3g_probe (g, 1, arg2885);
  if (ret == -1)
    return -1;
  if (! (ret == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_ntfs_3g_probe_0", "ret == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_ntfs_3g_probe_1_skip (void);
static int test_ntfs_3g_probe_1_perform (guestfs_h *);

static int
test_ntfs_3g_probe_1 (guestfs_h *g)
{
  if (test_ntfs_3g_probe_1_skip ()) {
    skipped ("test_ntfs_3g_probe_1", "environment variable set");
    return 0;
  }

  const char *features2887[] = { "ntfs3g", NULL };
  if (!guestfs_feature_available (g, (char **) features2887)) {
    skipped ("test_ntfs_3g_probe_1", "group %s not available in daemon",
             features2887[0]);
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_ntfs_3g_probe_1_perform (g);
}

static int
test_ntfs_3g_probe_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "ntfs_3g_probe") == NULL;
  str = getenv ("SKIP_TEST_NTFS_3G_PROBE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_NTFS_3G_PROBE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_ntfs_3g_probe_1_perform (guestfs_h *g)
{
  /* TestResult for ntfs_3g_probe (1) */
  const char *arg2888 = "/dev/sda";
  const char *arg2889 = "mbr";
  int ret2;
  ret2 = guestfs_part_disk (g, arg2888, arg2889);
  if (ret2 == -1)
    return -1;
  const char *arg2891 = "ext2";
  const char *arg2892 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs2893;
  optargs2893.bitmask = UINT64_C(0x0);
  int ret1;
  ret1 = guestfs_mkfs_opts_argv (g, arg2891, arg2892, &optargs2893);
  if (ret1 == -1)
    return -1;
  const char *arg2895 = "/dev/sda1";
  int ret;
  ret = guestfs_ntfs_3g_probe (g, 1, arg2895);
  if (ret == -1)
    return -1;
  if (! (ret == 12)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_ntfs_3g_probe_1", "ret == 12");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_ntfsfix_0_skip (void);
static int test_ntfsfix_0_perform (guestfs_h *);

static int
test_ntfsfix_0 (guestfs_h *g)
{
  if (test_ntfsfix_0_skip ()) {
    skipped ("test_ntfsfix_0", "environment variable set");
    return 0;
  }

  const char *features2897[] = { "ntfs3g", NULL };
  if (!guestfs_feature_available (g, (char **) features2897)) {
    skipped ("test_ntfsfix_0", "group %s not available in daemon",
             features2897[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_ntfsfix_0_perform (g);
}

static int
test_ntfsfix_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "ntfsfix") == NULL;
  str = getenv ("SKIP_TEST_NTFSFIX_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_NTFSFIX");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_ntfsfix_0_perform (guestfs_h *g)
{
  /* TestRun for ntfsfix (0) */
  const char *arg2899 = "ntfs";
  const char *arg2900 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs2901;
  optargs2901.bitmask = UINT64_C(0x0);
  int ret2898;
  ret2898 = guestfs_mkfs_opts_argv (g, arg2899, arg2900, &optargs2901);
  if (ret2898 == -1)
    return -1;
  const char *arg2903 = "/dev/sda1";
  struct guestfs_ntfsfix_argv optargs2904;
  optargs2904.clearbadsectors = 0;
  optargs2904.bitmask = UINT64_C(0x1);
  int ret2902;
  ret2902 = guestfs_ntfsfix_argv (g, arg2903, &optargs2904);
  if (ret2902 == -1)
    return -1;
  return 0;
}

static int test_part_add_0_skip (void);
static int test_part_add_0_perform (guestfs_h *);

static int
test_part_add_0 (guestfs_h *g)
{
  if (test_part_add_0_skip ()) {
    skipped ("test_part_add_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_part_add_0_perform (g);
}

static int
test_part_add_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_add") == NULL;
  str = getenv ("SKIP_TEST_PART_ADD_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_ADD");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_add_0_perform (guestfs_h *g)
{
  /* TestRun for part_add (0) */
  const char *arg2906 = "/dev/sda";
  const char *arg2907 = "mbr";
  int ret2905;
  ret2905 = guestfs_part_init (g, arg2906, arg2907);
  if (ret2905 == -1)
    return -1;
  const char *arg2910 = "/dev/sda";
  const char *arg2911 = "primary";
  int ret2909;
  ret2909 = guestfs_part_add (g, arg2910, arg2911, 1, -1);
  if (ret2909 == -1)
    return -1;
  return 0;
}

static int test_part_add_1_skip (void);
static int test_part_add_1_perform (guestfs_h *);

static int
test_part_add_1 (guestfs_h *g)
{
  if (test_part_add_1_skip ()) {
    skipped ("test_part_add_1", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_part_add_1_perform (g);
}

static int
test_part_add_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_add") == NULL;
  str = getenv ("SKIP_TEST_PART_ADD_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_ADD");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_add_1_perform (guestfs_h *g)
{
  /* TestRun for part_add (1) */
  const char *arg2916 = "/dev/sda";
  const char *arg2917 = "gpt";
  int ret2915;
  ret2915 = guestfs_part_init (g, arg2916, arg2917);
  if (ret2915 == -1)
    return -1;
  const char *arg2920 = "/dev/sda";
  const char *arg2921 = "primary";
  int ret2919;
  ret2919 = guestfs_part_add (g, arg2920, arg2921, 34, 127);
  if (ret2919 == -1)
    return -1;
  const char *arg2926 = "/dev/sda";
  const char *arg2927 = "primary";
  int ret2925;
  ret2925 = guestfs_part_add (g, arg2926, arg2927, 128, -34);
  if (ret2925 == -1)
    return -1;
  return 0;
}

static int test_part_add_2_skip (void);
static int test_part_add_2_perform (guestfs_h *);

static int
test_part_add_2 (guestfs_h *g)
{
  if (test_part_add_2_skip ()) {
    skipped ("test_part_add_2", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_part_add_2_perform (g);
}

static int
test_part_add_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_add") == NULL;
  str = getenv ("SKIP_TEST_PART_ADD_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_ADD");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_add_2_perform (guestfs_h *g)
{
  /* TestRun for part_add (2) */
  const char *arg2932 = "/dev/sda";
  const char *arg2933 = "mbr";
  int ret2931;
  ret2931 = guestfs_part_init (g, arg2932, arg2933);
  if (ret2931 == -1)
    return -1;
  const char *arg2936 = "/dev/sda";
  const char *arg2937 = "primary";
  int ret2935;
  ret2935 = guestfs_part_add (g, arg2936, arg2937, 32, 127);
  if (ret2935 == -1)
    return -1;
  const char *arg2942 = "/dev/sda";
  const char *arg2943 = "primary";
  int ret2941;
  ret2941 = guestfs_part_add (g, arg2942, arg2943, 128, 255);
  if (ret2941 == -1)
    return -1;
  const char *arg2948 = "/dev/sda";
  const char *arg2949 = "primary";
  int ret2947;
  ret2947 = guestfs_part_add (g, arg2948, arg2949, 256, 511);
  if (ret2947 == -1)
    return -1;
  const char *arg2954 = "/dev/sda";
  const char *arg2955 = "primary";
  int ret2953;
  ret2953 = guestfs_part_add (g, arg2954, arg2955, 512, -1);
  if (ret2953 == -1)
    return -1;
  return 0;
}

static int test_part_del_0_skip (void);
static int test_part_del_0_perform (guestfs_h *);

static int
test_part_del_0 (guestfs_h *g)
{
  if (test_part_del_0_skip ()) {
    skipped ("test_part_del_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_part_del_0_perform (g);
}

static int
test_part_del_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_del") == NULL;
  str = getenv ("SKIP_TEST_PART_DEL_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_DEL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_del_0_perform (guestfs_h *g)
{
  /* TestRun for part_del (0) */
  const char *arg2960 = "/dev/sda";
  const char *arg2961 = "mbr";
  int ret2959;
  ret2959 = guestfs_part_init (g, arg2960, arg2961);
  if (ret2959 == -1)
    return -1;
  const char *arg2964 = "/dev/sda";
  const char *arg2965 = "primary";
  int ret2963;
  ret2963 = guestfs_part_add (g, arg2964, arg2965, 1, -1);
  if (ret2963 == -1)
    return -1;
  const char *arg2970 = "/dev/sda";
  int ret2969;
  ret2969 = guestfs_part_del (g, arg2970, 1);
  if (ret2969 == -1)
    return -1;
  return 0;
}

static int test_part_disk_0_skip (void);
static int test_part_disk_0_perform (guestfs_h *);

static int
test_part_disk_0 (guestfs_h *g)
{
  if (test_part_disk_0_skip ()) {
    skipped ("test_part_disk_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_part_disk_0_perform (g);
}

static int
test_part_disk_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_disk") == NULL;
  str = getenv ("SKIP_TEST_PART_DISK_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_DISK");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_disk_0_perform (guestfs_h *g)
{
  /* TestRun for part_disk (0) */
  const char *arg2974 = "/dev/sda";
  const char *arg2975 = "mbr";
  int ret2973;
  ret2973 = guestfs_part_disk (g, arg2974, arg2975);
  if (ret2973 == -1)
    return -1;
  return 0;
}

static int test_part_disk_1_skip (void);
static int test_part_disk_1_perform (guestfs_h *);

static int
test_part_disk_1 (guestfs_h *g)
{
  if (test_part_disk_1_skip ()) {
    skipped ("test_part_disk_1", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_part_disk_1_perform (g);
}

static int
test_part_disk_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_disk") == NULL;
  str = getenv ("SKIP_TEST_PART_DISK_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_DISK");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_disk_1_perform (guestfs_h *g)
{
  /* TestRun for part_disk (1) */
  const char *arg2978 = "/dev/sda";
  const char *arg2979 = "gpt";
  int ret2977;
  ret2977 = guestfs_part_disk (g, arg2978, arg2979);
  if (ret2977 == -1)
    return -1;
  return 0;
}

static int test_part_get_bootable_0_skip (void);
static int test_part_get_bootable_0_perform (guestfs_h *);

static int
test_part_get_bootable_0 (guestfs_h *g)
{
  if (test_part_get_bootable_0_skip ()) {
    skipped ("test_part_get_bootable_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_part_get_bootable_0_perform (g);
}

static int
test_part_get_bootable_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_get_bootable") == NULL;
  str = getenv ("SKIP_TEST_PART_GET_BOOTABLE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_GET_BOOTABLE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_get_bootable_0_perform (guestfs_h *g)
{
  /* TestResultTrue for part_get_bootable (0) */
  const char *arg2982 = "/dev/sda";
  const char *arg2983 = "mbr";
  int ret2981;
  ret2981 = guestfs_part_init (g, arg2982, arg2983);
  if (ret2981 == -1)
    return -1;
  const char *arg2986 = "/dev/sda";
  const char *arg2987 = "primary";
  int ret2985;
  ret2985 = guestfs_part_add (g, arg2986, arg2987, 1, -1);
  if (ret2985 == -1)
    return -1;
  const char *arg2992 = "/dev/sda";
  int ret2991;
  ret2991 = guestfs_part_set_bootable (g, arg2992, 1, 1);
  if (ret2991 == -1)
    return -1;
  const char *arg2996 = "/dev/sda";
  int ret;
  ret = guestfs_part_get_bootable (g, arg2996, 1);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_part_get_bootable_0", "part_get_bootable");
    return -1;
  }
  return 0;
}

static int test_part_get_disk_guid_0_skip (void);
static int test_part_get_disk_guid_0_perform (guestfs_h *);

static int
test_part_get_disk_guid_0 (guestfs_h *g)
{
  if (test_part_get_disk_guid_0_skip ()) {
    skipped ("test_part_get_disk_guid_0", "environment variable set");
    return 0;
  }

  const char *features2999[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features2999)) {
    skipped ("test_part_get_disk_guid_0", "group %s not available in daemon",
             features2999[0]);
    return 0;
  }

  if (init_gpt (g) == -1)
    return -1;

  return test_part_get_disk_guid_0_perform (g);
}

static int
test_part_get_disk_guid_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_get_disk_guid") == NULL;
  str = getenv ("SKIP_TEST_PART_GET_DISK_GUID_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_GET_DISK_GUID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_get_disk_guid_0_perform (guestfs_h *g)
{
  /* TestResultString for part_get_disk_guid (0) */
  const char *arg3001 = "/dev/sda";
  const char *arg3002 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret3000;
  ret3000 = guestfs_part_set_disk_guid (g, arg3001, arg3002);
  if (ret3000 == -1)
    return -1;
  const char *arg3004 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_disk_guid (g, arg3004);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "01234567-89AB-CDEF-0123-456789ABCDEF")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_part_get_disk_guid_0", "part_get_disk_guid", "01234567-89AB-CDEF-0123-456789ABCDEF", ret);
    return -1;
  }
  return 0;
}

static int test_part_get_gpt_attributes_0_skip (void);
static int test_part_get_gpt_attributes_0_perform (guestfs_h *);

static int
test_part_get_gpt_attributes_0 (guestfs_h *g)
{
  if (test_part_get_gpt_attributes_0_skip ()) {
    skipped ("test_part_get_gpt_attributes_0", "environment variable set");
    return 0;
  }

  const char *features3006[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3006)) {
    skipped ("test_part_get_gpt_attributes_0", "group %s not available in daemon",
             features3006[0]);
    return 0;
  }

  if (init_gpt (g) == -1)
    return -1;

  return test_part_get_gpt_attributes_0_perform (g);
}

static int
test_part_get_gpt_attributes_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_get_gpt_attributes") == NULL;
  str = getenv ("SKIP_TEST_PART_GET_GPT_ATTRIBUTES_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_GET_GPT_ATTRIBUTES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_get_gpt_attributes_0_perform (guestfs_h *g)
{
  /* TestResult for part_get_gpt_attributes (0) */
  const char *arg3007 = "/dev/sda";
  int ret1;
  ret1 = guestfs_part_set_gpt_attributes (g, arg3007, 1, 0);
  if (ret1 == -1)
    return -1;
  const char *arg3011 = "/dev/sda";
  int64_t ret;
  ret = guestfs_part_get_gpt_attributes (g, arg3011, 1);
  if (ret == -1)
    return -1;
  if (! (ret == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_part_get_gpt_attributes_0", "ret == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_part_get_gpt_guid_0_skip (void);
static int test_part_get_gpt_guid_0_perform (guestfs_h *);

static int
test_part_get_gpt_guid_0 (guestfs_h *g)
{
  if (test_part_get_gpt_guid_0_skip ()) {
    skipped ("test_part_get_gpt_guid_0", "environment variable set");
    return 0;
  }

  const char *features3014[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3014)) {
    skipped ("test_part_get_gpt_guid_0", "group %s not available in daemon",
             features3014[0]);
    return 0;
  }

  if (init_gpt (g) == -1)
    return -1;

  return test_part_get_gpt_guid_0_perform (g);
}

static int
test_part_get_gpt_guid_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_get_gpt_guid") == NULL;
  str = getenv ("SKIP_TEST_PART_GET_GPT_GUID_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_GET_GPT_GUID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_get_gpt_guid_0_perform (guestfs_h *g)
{
  /* TestResultString for part_get_gpt_guid (0) */
  const char *arg3016 = "/dev/sda";
  const char *arg3018 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret3015;
  ret3015 = guestfs_part_set_gpt_guid (g, arg3016, 1, arg3018);
  if (ret3015 == -1)
    return -1;
  const char *arg3020 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_gpt_guid (g, arg3020, 1);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "01234567-89AB-CDEF-0123-456789ABCDEF")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_part_get_gpt_guid_0", "part_get_gpt_guid", "01234567-89AB-CDEF-0123-456789ABCDEF", ret);
    return -1;
  }
  return 0;
}

static int test_part_get_gpt_type_0_skip (void);
static int test_part_get_gpt_type_0_perform (guestfs_h *);

static int
test_part_get_gpt_type_0 (guestfs_h *g)
{
  if (test_part_get_gpt_type_0_skip ()) {
    skipped ("test_part_get_gpt_type_0", "environment variable set");
    return 0;
  }

  const char *features3023[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3023)) {
    skipped ("test_part_get_gpt_type_0", "group %s not available in daemon",
             features3023[0]);
    return 0;
  }

  if (init_gpt (g) == -1)
    return -1;

  return test_part_get_gpt_type_0_perform (g);
}

static int
test_part_get_gpt_type_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_get_gpt_type") == NULL;
  str = getenv ("SKIP_TEST_PART_GET_GPT_TYPE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_GET_GPT_TYPE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_get_gpt_type_0_perform (guestfs_h *g)
{
  /* TestResultString for part_get_gpt_type (0) */
  const char *arg3025 = "/dev/sda";
  const char *arg3027 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret3024;
  ret3024 = guestfs_part_set_gpt_type (g, arg3025, 1, arg3027);
  if (ret3024 == -1)
    return -1;
  const char *arg3029 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_gpt_type (g, arg3029, 1);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "01234567-89AB-CDEF-0123-456789ABCDEF")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_part_get_gpt_type_0", "part_get_gpt_type", "01234567-89AB-CDEF-0123-456789ABCDEF", ret);
    return -1;
  }
  return 0;
}

static int test_part_get_mbr_id_0_skip (void);
static int test_part_get_mbr_id_0_perform (guestfs_h *);

static int
test_part_get_mbr_id_0 (guestfs_h *g)
{
  if (test_part_get_mbr_id_0_skip ()) {
    skipped ("test_part_get_mbr_id_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_part_get_mbr_id_0_perform (g);
}

static int
test_part_get_mbr_id_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_get_mbr_id") == NULL;
  str = getenv ("SKIP_TEST_PART_GET_MBR_ID_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_GET_MBR_ID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_get_mbr_id_0_perform (guestfs_h *g)
{
  /* TestResult for part_get_mbr_id (0) */
  const char *arg3032 = "/dev/sda";
  const char *arg3033 = "mbr";
  int ret3;
  ret3 = guestfs_part_init (g, arg3032, arg3033);
  if (ret3 == -1)
    return -1;
  const char *arg3035 = "/dev/sda";
  const char *arg3036 = "primary";
  int ret2;
  ret2 = guestfs_part_add (g, arg3035, arg3036, 1, -1);
  if (ret2 == -1)
    return -1;
  const char *arg3040 = "/dev/sda";
  int ret1;
  ret1 = guestfs_part_set_mbr_id (g, arg3040, 1, 127);
  if (ret1 == -1)
    return -1;
  const char *arg3044 = "/dev/sda";
  int ret;
  ret = guestfs_part_get_mbr_id (g, arg3044, 1);
  if (ret == -1)
    return -1;
  if (! (ret == 0x7f)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_part_get_mbr_id_0", "ret == 0x7f");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_part_get_mbr_part_type_0_skip (void);
static int test_part_get_mbr_part_type_0_perform (guestfs_h *);

static int
test_part_get_mbr_part_type_0 (guestfs_h *g)
{
  if (test_part_get_mbr_part_type_0_skip ()) {
    skipped ("test_part_get_mbr_part_type_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_part_get_mbr_part_type_0_perform (g);
}

static int
test_part_get_mbr_part_type_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_get_mbr_part_type") == NULL;
  str = getenv ("SKIP_TEST_PART_GET_MBR_PART_TYPE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_GET_MBR_PART_TYPE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_get_mbr_part_type_0_perform (guestfs_h *g)
{
  /* TestResultString for part_get_mbr_part_type (0) */
  const char *arg3048 = "/dev/sda";
  const char *arg3049 = "mbr";
  int ret3047;
  ret3047 = guestfs_part_init (g, arg3048, arg3049);
  if (ret3047 == -1)
    return -1;
  const char *arg3052 = "/dev/sda";
  const char *arg3053 = "p";
  int ret3051;
  ret3051 = guestfs_part_add (g, arg3052, arg3053, 64, 204799);
  if (ret3051 == -1)
    return -1;
  const char *arg3058 = "/dev/sda";
  const char *arg3059 = "e";
  int ret3057;
  ret3057 = guestfs_part_add (g, arg3058, arg3059, 204800, 614400);
  if (ret3057 == -1)
    return -1;
  const char *arg3064 = "/dev/sda";
  const char *arg3065 = "l";
  int ret3063;
  ret3063 = guestfs_part_add (g, arg3064, arg3065, 204864, 205988);
  if (ret3063 == -1)
    return -1;
  const char *arg3069 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_mbr_part_type (g, arg3069, 5);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "logical")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_part_get_mbr_part_type_0", "part_get_mbr_part_type", "logical", ret);
    return -1;
  }
  return 0;
}

static int test_part_get_mbr_part_type_1_skip (void);
static int test_part_get_mbr_part_type_1_perform (guestfs_h *);

static int
test_part_get_mbr_part_type_1 (guestfs_h *g)
{
  if (test_part_get_mbr_part_type_1_skip ()) {
    skipped ("test_part_get_mbr_part_type_1", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_part_get_mbr_part_type_1_perform (g);
}

static int
test_part_get_mbr_part_type_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_get_mbr_part_type") == NULL;
  str = getenv ("SKIP_TEST_PART_GET_MBR_PART_TYPE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_GET_MBR_PART_TYPE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_get_mbr_part_type_1_perform (guestfs_h *g)
{
  /* TestResultString for part_get_mbr_part_type (1) */
  const char *arg3073 = "/dev/sda";
  const char *arg3074 = "mbr";
  int ret3072;
  ret3072 = guestfs_part_init (g, arg3073, arg3074);
  if (ret3072 == -1)
    return -1;
  const char *arg3077 = "/dev/sda";
  const char *arg3078 = "p";
  int ret3076;
  ret3076 = guestfs_part_add (g, arg3077, arg3078, 64, 204799);
  if (ret3076 == -1)
    return -1;
  const char *arg3083 = "/dev/sda";
  const char *arg3084 = "e";
  int ret3082;
  ret3082 = guestfs_part_add (g, arg3083, arg3084, 204800, 614400);
  if (ret3082 == -1)
    return -1;
  const char *arg3089 = "/dev/sda";
  const char *arg3090 = "l";
  int ret3088;
  ret3088 = guestfs_part_add (g, arg3089, arg3090, 204864, 205988);
  if (ret3088 == -1)
    return -1;
  const char *arg3094 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_mbr_part_type (g, arg3094, 2);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "extended")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_part_get_mbr_part_type_1", "part_get_mbr_part_type", "extended", ret);
    return -1;
  }
  return 0;
}

static int test_part_get_parttype_0_skip (void);
static int test_part_get_parttype_0_perform (guestfs_h *);

static int
test_part_get_parttype_0 (guestfs_h *g)
{
  if (test_part_get_parttype_0_skip ()) {
    skipped ("test_part_get_parttype_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_part_get_parttype_0_perform (g);
}

static int
test_part_get_parttype_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_get_parttype") == NULL;
  str = getenv ("SKIP_TEST_PART_GET_PARTTYPE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_GET_PARTTYPE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_get_parttype_0_perform (guestfs_h *g)
{
  /* TestResultString for part_get_parttype (0) */
  const char *arg3098 = "/dev/sda";
  const char *arg3099 = "gpt";
  int ret3097;
  ret3097 = guestfs_part_disk (g, arg3098, arg3099);
  if (ret3097 == -1)
    return -1;
  const char *arg3101 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_parttype (g, arg3101);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "gpt")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_part_get_parttype_0", "part_get_parttype", "gpt", ret);
    return -1;
  }
  return 0;
}

static int test_part_init_0_skip (void);
static int test_part_init_0_perform (guestfs_h *);

static int
test_part_init_0 (guestfs_h *g)
{
  if (test_part_init_0_skip ()) {
    skipped ("test_part_init_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_part_init_0_perform (g);
}

static int
test_part_init_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_init") == NULL;
  str = getenv ("SKIP_TEST_PART_INIT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_INIT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_init_0_perform (guestfs_h *g)
{
  /* TestRun for part_init (0) */
  const char *arg3104 = "/dev/sda";
  const char *arg3105 = "gpt";
  int ret3103;
  ret3103 = guestfs_part_init (g, arg3104, arg3105);
  if (ret3103 == -1)
    return -1;
  return 0;
}

static int test_part_resize_0_skip (void);
static int test_part_resize_0_perform (guestfs_h *);

static int
test_part_resize_0 (guestfs_h *g)
{
  if (test_part_resize_0_skip ()) {
    skipped ("test_part_resize_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_part_resize_0_perform (g);
}

static int
test_part_resize_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_resize") == NULL;
  str = getenv ("SKIP_TEST_PART_RESIZE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_RESIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_resize_0_perform (guestfs_h *g)
{
  /* TestRun for part_resize (0) */
  const char *arg3108 = "/dev/sda";
  const char *arg3109 = "mbr";
  int ret3107;
  ret3107 = guestfs_part_init (g, arg3108, arg3109);
  if (ret3107 == -1)
    return -1;
  const char *arg3112 = "/dev/sda";
  const char *arg3113 = "primary";
  int ret3111;
  ret3111 = guestfs_part_add (g, arg3112, arg3113, 1, -1025);
  if (ret3111 == -1)
    return -1;
  const char *arg3118 = "/dev/sda";
  int ret3117;
  ret3117 = guestfs_part_resize (g, arg3118, 1, -1);
  if (ret3117 == -1)
    return -1;
  return 0;
}

static int test_part_set_bootable_0_skip (void);
static int test_part_set_bootable_0_perform (guestfs_h *);

static int
test_part_set_bootable_0 (guestfs_h *g)
{
  if (test_part_set_bootable_0_skip ()) {
    skipped ("test_part_set_bootable_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_part_set_bootable_0_perform (g);
}

static int
test_part_set_bootable_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_set_bootable") == NULL;
  str = getenv ("SKIP_TEST_PART_SET_BOOTABLE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_SET_BOOTABLE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_set_bootable_0_perform (guestfs_h *g)
{
  /* TestRun for part_set_bootable (0) */
  const char *arg3123 = "/dev/sda";
  const char *arg3124 = "mbr";
  int ret3122;
  ret3122 = guestfs_part_disk (g, arg3123, arg3124);
  if (ret3122 == -1)
    return -1;
  const char *arg3127 = "/dev/sda";
  int ret3126;
  ret3126 = guestfs_part_set_bootable (g, arg3127, 1, 1);
  if (ret3126 == -1)
    return -1;
  return 0;
}

static int test_part_set_disk_guid_0_skip (void);
static int test_part_set_disk_guid_0_perform (guestfs_h *);

static int
test_part_set_disk_guid_0 (guestfs_h *g)
{
  if (test_part_set_disk_guid_0_skip ()) {
    skipped ("test_part_set_disk_guid_0", "environment variable set");
    return 0;
  }

  const char *features3131[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3131)) {
    skipped ("test_part_set_disk_guid_0", "group %s not available in daemon",
             features3131[0]);
    return 0;
  }

  if (init_gpt (g) == -1)
    return -1;

  return test_part_set_disk_guid_0_perform (g);
}

static int
test_part_set_disk_guid_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_set_disk_guid") == NULL;
  str = getenv ("SKIP_TEST_PART_SET_DISK_GUID_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_SET_DISK_GUID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_set_disk_guid_0_perform (guestfs_h *g)
{
  /* TestLastFail for part_set_disk_guid (0) */
  const char *arg3133 = "/dev/sda";
  const char *arg3134 = "f";
  int ret3132;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3132 = guestfs_part_set_disk_guid (g, arg3133, arg3134);
  guestfs_pop_error_handler (g);
  if (ret3132 != -1)
    return -1;
  return 0;
}

static int test_part_set_disk_guid_1_skip (void);
static int test_part_set_disk_guid_1_perform (guestfs_h *);

static int
test_part_set_disk_guid_1 (guestfs_h *g)
{
  if (test_part_set_disk_guid_1_skip ()) {
    skipped ("test_part_set_disk_guid_1", "environment variable set");
    return 0;
  }

  const char *features3136[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3136)) {
    skipped ("test_part_set_disk_guid_1", "group %s not available in daemon",
             features3136[0]);
    return 0;
  }

  if (init_gpt (g) == -1)
    return -1;

  return test_part_set_disk_guid_1_perform (g);
}

static int
test_part_set_disk_guid_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_set_disk_guid") == NULL;
  str = getenv ("SKIP_TEST_PART_SET_DISK_GUID_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_SET_DISK_GUID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_set_disk_guid_1_perform (guestfs_h *g)
{
  /* TestResultString for part_set_disk_guid (1) */
  const char *arg3138 = "/dev/sda";
  const char *arg3139 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret3137;
  ret3137 = guestfs_part_set_disk_guid (g, arg3138, arg3139);
  if (ret3137 == -1)
    return -1;
  const char *arg3141 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_disk_guid (g, arg3141);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "01234567-89AB-CDEF-0123-456789ABCDEF")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_part_set_disk_guid_1", "part_get_disk_guid", "01234567-89AB-CDEF-0123-456789ABCDEF", ret);
    return -1;
  }
  return 0;
}

static int test_part_set_disk_guid_random_0_skip (void);
static int test_part_set_disk_guid_random_0_perform (guestfs_h *);

static int
test_part_set_disk_guid_random_0 (guestfs_h *g)
{
  if (test_part_set_disk_guid_random_0_skip ()) {
    skipped ("test_part_set_disk_guid_random_0", "environment variable set");
    return 0;
  }

  const char *features3143[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3143)) {
    skipped ("test_part_set_disk_guid_random_0", "group %s not available in daemon",
             features3143[0]);
    return 0;
  }

  if (init_gpt (g) == -1)
    return -1;

  return test_part_set_disk_guid_random_0_perform (g);
}

static int
test_part_set_disk_guid_random_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_set_disk_guid_random") == NULL;
  str = getenv ("SKIP_TEST_PART_SET_DISK_GUID_RANDOM_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_SET_DISK_GUID_RANDOM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_set_disk_guid_random_0_perform (guestfs_h *g)
{
  /* TestRun for part_set_disk_guid_random (0) */
  const char *arg3145 = "/dev/sda";
  int ret3144;
  ret3144 = guestfs_part_set_disk_guid_random (g, arg3145);
  if (ret3144 == -1)
    return -1;
  return 0;
}

static int test_part_set_gpt_attributes_0_skip (void);
static int test_part_set_gpt_attributes_0_perform (guestfs_h *);

static int
test_part_set_gpt_attributes_0 (guestfs_h *g)
{
  if (test_part_set_gpt_attributes_0_skip ()) {
    skipped ("test_part_set_gpt_attributes_0", "environment variable set");
    return 0;
  }

  const char *features3147[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3147)) {
    skipped ("test_part_set_gpt_attributes_0", "group %s not available in daemon",
             features3147[0]);
    return 0;
  }

  if (init_gpt (g) == -1)
    return -1;

  return test_part_set_gpt_attributes_0_perform (g);
}

static int
test_part_set_gpt_attributes_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_set_gpt_attributes") == NULL;
  str = getenv ("SKIP_TEST_PART_SET_GPT_ATTRIBUTES_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_SET_GPT_ATTRIBUTES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_set_gpt_attributes_0_perform (guestfs_h *g)
{
  /* TestResult for part_set_gpt_attributes (0) */
  const char *arg3148 = "/dev/sda";
  int ret1;
  ret1 = guestfs_part_set_gpt_attributes (g, arg3148, 1, 4);
  if (ret1 == -1)
    return -1;
  const char *arg3152 = "/dev/sda";
  int64_t ret;
  ret = guestfs_part_get_gpt_attributes (g, arg3152, 1);
  if (ret == -1)
    return -1;
  if (! (ret == 4)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_part_set_gpt_attributes_0", "ret == 4");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_part_set_gpt_guid_0_skip (void);
static int test_part_set_gpt_guid_0_perform (guestfs_h *);

static int
test_part_set_gpt_guid_0 (guestfs_h *g)
{
  if (test_part_set_gpt_guid_0_skip ()) {
    skipped ("test_part_set_gpt_guid_0", "environment variable set");
    return 0;
  }

  const char *features3155[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3155)) {
    skipped ("test_part_set_gpt_guid_0", "group %s not available in daemon",
             features3155[0]);
    return 0;
  }

  if (init_gpt (g) == -1)
    return -1;

  return test_part_set_gpt_guid_0_perform (g);
}

static int
test_part_set_gpt_guid_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_set_gpt_guid") == NULL;
  str = getenv ("SKIP_TEST_PART_SET_GPT_GUID_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_SET_GPT_GUID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_set_gpt_guid_0_perform (guestfs_h *g)
{
  /* TestLastFail for part_set_gpt_guid (0) */
  const char *arg3157 = "/dev/sda";
  const char *arg3159 = "f";
  int ret3156;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3156 = guestfs_part_set_gpt_guid (g, arg3157, 1, arg3159);
  guestfs_pop_error_handler (g);
  if (ret3156 != -1)
    return -1;
  return 0;
}

static int test_part_set_gpt_guid_1_skip (void);
static int test_part_set_gpt_guid_1_perform (guestfs_h *);

static int
test_part_set_gpt_guid_1 (guestfs_h *g)
{
  if (test_part_set_gpt_guid_1_skip ()) {
    skipped ("test_part_set_gpt_guid_1", "environment variable set");
    return 0;
  }

  const char *features3161[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3161)) {
    skipped ("test_part_set_gpt_guid_1", "group %s not available in daemon",
             features3161[0]);
    return 0;
  }

  if (init_gpt (g) == -1)
    return -1;

  return test_part_set_gpt_guid_1_perform (g);
}

static int
test_part_set_gpt_guid_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_set_gpt_guid") == NULL;
  str = getenv ("SKIP_TEST_PART_SET_GPT_GUID_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_SET_GPT_GUID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_set_gpt_guid_1_perform (guestfs_h *g)
{
  /* TestResultString for part_set_gpt_guid (1) */
  const char *arg3163 = "/dev/sda";
  const char *arg3165 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret3162;
  ret3162 = guestfs_part_set_gpt_guid (g, arg3163, 1, arg3165);
  if (ret3162 == -1)
    return -1;
  const char *arg3167 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_gpt_guid (g, arg3167, 1);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "01234567-89AB-CDEF-0123-456789ABCDEF")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_part_set_gpt_guid_1", "part_get_gpt_guid", "01234567-89AB-CDEF-0123-456789ABCDEF", ret);
    return -1;
  }
  return 0;
}

static int test_part_set_gpt_type_0_skip (void);
static int test_part_set_gpt_type_0_perform (guestfs_h *);

static int
test_part_set_gpt_type_0 (guestfs_h *g)
{
  if (test_part_set_gpt_type_0_skip ()) {
    skipped ("test_part_set_gpt_type_0", "environment variable set");
    return 0;
  }

  const char *features3170[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3170)) {
    skipped ("test_part_set_gpt_type_0", "group %s not available in daemon",
             features3170[0]);
    return 0;
  }

  if (init_gpt (g) == -1)
    return -1;

  return test_part_set_gpt_type_0_perform (g);
}

static int
test_part_set_gpt_type_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_set_gpt_type") == NULL;
  str = getenv ("SKIP_TEST_PART_SET_GPT_TYPE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_SET_GPT_TYPE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_set_gpt_type_0_perform (guestfs_h *g)
{
  /* TestLastFail for part_set_gpt_type (0) */
  const char *arg3172 = "/dev/sda";
  const char *arg3174 = "f";
  int ret3171;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3171 = guestfs_part_set_gpt_type (g, arg3172, 1, arg3174);
  guestfs_pop_error_handler (g);
  if (ret3171 != -1)
    return -1;
  return 0;
}

static int test_part_set_gpt_type_1_skip (void);
static int test_part_set_gpt_type_1_perform (guestfs_h *);

static int
test_part_set_gpt_type_1 (guestfs_h *g)
{
  if (test_part_set_gpt_type_1_skip ()) {
    skipped ("test_part_set_gpt_type_1", "environment variable set");
    return 0;
  }

  const char *features3176[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3176)) {
    skipped ("test_part_set_gpt_type_1", "group %s not available in daemon",
             features3176[0]);
    return 0;
  }

  if (init_gpt (g) == -1)
    return -1;

  return test_part_set_gpt_type_1_perform (g);
}

static int
test_part_set_gpt_type_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_set_gpt_type") == NULL;
  str = getenv ("SKIP_TEST_PART_SET_GPT_TYPE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_SET_GPT_TYPE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_set_gpt_type_1_perform (guestfs_h *g)
{
  /* TestResultString for part_set_gpt_type (1) */
  const char *arg3178 = "/dev/sda";
  const char *arg3180 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret3177;
  ret3177 = guestfs_part_set_gpt_type (g, arg3178, 1, arg3180);
  if (ret3177 == -1)
    return -1;
  const char *arg3182 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_gpt_type (g, arg3182, 1);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "01234567-89AB-CDEF-0123-456789ABCDEF")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_part_set_gpt_type_1", "part_get_gpt_type", "01234567-89AB-CDEF-0123-456789ABCDEF", ret);
    return -1;
  }
  return 0;
}

static int test_part_set_name_0_skip (void);
static int test_part_set_name_0_perform (guestfs_h *);

static int
test_part_set_name_0 (guestfs_h *g)
{
  if (test_part_set_name_0_skip ()) {
    skipped ("test_part_set_name_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_part_set_name_0_perform (g);
}

static int
test_part_set_name_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_set_name") == NULL;
  str = getenv ("SKIP_TEST_PART_SET_NAME_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_SET_NAME");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_set_name_0_perform (guestfs_h *g)
{
  /* TestRun for part_set_name (0) */
  const char *arg3186 = "/dev/sda";
  const char *arg3187 = "gpt";
  int ret3185;
  ret3185 = guestfs_part_disk (g, arg3186, arg3187);
  if (ret3185 == -1)
    return -1;
  const char *arg3190 = "/dev/sda";
  const char *arg3192 = "thepartname";
  int ret3189;
  ret3189 = guestfs_part_set_name (g, arg3190, 1, arg3192);
  if (ret3189 == -1)
    return -1;
  return 0;
}

static int test_part_to_dev_0_skip (void);
static int test_part_to_dev_0_perform (guestfs_h *);

static int
test_part_to_dev_0 (guestfs_h *g)
{
  if (test_part_to_dev_0_skip ()) {
    skipped ("test_part_to_dev_0", "environment variable set");
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_part_to_dev_0_perform (g);
}

static int
test_part_to_dev_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_to_dev") == NULL;
  str = getenv ("SKIP_TEST_PART_TO_DEV_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_TO_DEV");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_to_dev_0_perform (guestfs_h *g)
{
  /* TestResultDevice for part_to_dev (0) */
  const char *arg3194 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_to_dev (g, arg3194);
  if (ret == NULL)
      return -1;
  if (compare_devices (ret, "/dev/sda") != 0) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_part_to_dev_0", "part_to_dev", "/dev/sda", ret);
    return -1;
  }
  return 0;
}

static int test_part_to_dev_1_skip (void);
static int test_part_to_dev_1_perform (guestfs_h *);

static int
test_part_to_dev_1 (guestfs_h *g)
{
  if (test_part_to_dev_1_skip ()) {
    skipped ("test_part_to_dev_1", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_part_to_dev_1_perform (g);
}

static int
test_part_to_dev_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_to_dev") == NULL;
  str = getenv ("SKIP_TEST_PART_TO_DEV_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_TO_DEV");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_to_dev_1_perform (guestfs_h *g)
{
  /* TestLastFail for part_to_dev (1) */
  const char *arg3197 = "/dev/sda";
  CLEANUP_FREE char *ret3196;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3196 = guestfs_part_to_dev (g, arg3197);
  guestfs_pop_error_handler (g);
  if (ret3196 != NULL)
    return -1;
  return 0;
}

static int test_part_to_partnum_0_skip (void);
static int test_part_to_partnum_0_perform (guestfs_h *);

static int
test_part_to_partnum_0 (guestfs_h *g)
{
  if (test_part_to_partnum_0_skip ()) {
    skipped ("test_part_to_partnum_0", "environment variable set");
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_part_to_partnum_0_perform (g);
}

static int
test_part_to_partnum_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_to_partnum") == NULL;
  str = getenv ("SKIP_TEST_PART_TO_PARTNUM_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_TO_PARTNUM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_to_partnum_0_perform (guestfs_h *g)
{
  /* TestResult for part_to_partnum (0) */
  const char *arg3199 = "/dev/sda1";
  int ret;
  ret = guestfs_part_to_partnum (g, arg3199);
  if (ret == -1)
    return -1;
  if (! (ret == 1)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_part_to_partnum_0", "ret == 1");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_part_to_partnum_1_skip (void);
static int test_part_to_partnum_1_perform (guestfs_h *);

static int
test_part_to_partnum_1 (guestfs_h *g)
{
  if (test_part_to_partnum_1_skip ()) {
    skipped ("test_part_to_partnum_1", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_part_to_partnum_1_perform (g);
}

static int
test_part_to_partnum_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "part_to_partnum") == NULL;
  str = getenv ("SKIP_TEST_PART_TO_PARTNUM_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PART_TO_PARTNUM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_part_to_partnum_1_perform (guestfs_h *g)
{
  /* TestLastFail for part_to_partnum (1) */
  const char *arg3202 = "/dev/sda";
  int ret3201;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3201 = guestfs_part_to_partnum (g, arg3202);
  guestfs_pop_error_handler (g);
  if (ret3201 != -1)
    return -1;
  return 0;
}

static int test_ping_daemon_0_skip (void);
static int test_ping_daemon_0_perform (guestfs_h *);

static int
test_ping_daemon_0 (guestfs_h *g)
{
  if (test_ping_daemon_0_skip ()) {
    skipped ("test_ping_daemon_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_ping_daemon_0_perform (g);
}

static int
test_ping_daemon_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "ping_daemon") == NULL;
  str = getenv ("SKIP_TEST_PING_DAEMON_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PING_DAEMON");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_ping_daemon_0_perform (guestfs_h *g)
{
  /* TestRun for ping_daemon (0) */
  int ret3204;
  ret3204 = guestfs_ping_daemon (g);
  if (ret3204 == -1)
    return -1;
  return 0;
}

static int test_pread_0_skip (void);
static int test_pread_0_perform (guestfs_h *);

static int
test_pread_0 (guestfs_h *g)
{
  if (test_pread_0_skip ()) {
    skipped ("test_pread_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_pread_0_perform (g);
}

static int
test_pread_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "pread") == NULL;
  str = getenv ("SKIP_TEST_PREAD_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PREAD");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_pread_0_perform (guestfs_h *g)
{
  /* TestResult for pread (0) */
  const char *arg3206 = "/known-4";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_pread (g, arg3206, 1, 3, &size);
  if (ret == NULL)
      return -1;
  if (! (compare_buffers (ret, size, "\n", 1) == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_pread_0", "compare_buffers (ret, size, \"\\n\", 1) == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_pread_1_skip (void);
static int test_pread_1_perform (guestfs_h *);

static int
test_pread_1 (guestfs_h *g)
{
  if (test_pread_1_skip ()) {
    skipped ("test_pread_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_pread_1_perform (g);
}

static int
test_pread_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "pread") == NULL;
  str = getenv ("SKIP_TEST_PREAD_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PREAD");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_pread_1_perform (guestfs_h *g)
{
  /* TestResult for pread (1) */
  const char *arg3210 = "/empty";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_pread (g, arg3210, 0, 100, &size);
  if (ret == NULL)
      return -1;
  if (! (compare_buffers (ret, size, NULL, 0) == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_pread_1", "compare_buffers (ret, size, NULL, 0) == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_pread_device_0_skip (void);
static int test_pread_device_0_perform (guestfs_h *);

static int
test_pread_device_0 (guestfs_h *g)
{
  if (test_pread_device_0_skip ()) {
    skipped ("test_pread_device_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_pread_device_0_perform (g);
}

static int
test_pread_device_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "pread_device") == NULL;
  str = getenv ("SKIP_TEST_PREAD_DEVICE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PREAD_DEVICE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_pread_device_0_perform (guestfs_h *g)
{
  /* TestResult for pread_device (0) */
  const char *arg3214 = "/dev/sdd";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_pread_device (g, arg3214, 8, 32768, &size);
  if (ret == NULL)
      return -1;
  if (! (compare_buffers (ret, size, "\1CD001\1\0", 8) == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_pread_device_0", "compare_buffers (ret, size, \"\\1CD001\\1\\0\", 8) == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_pvchange_uuid_0_skip (void);
static int test_pvchange_uuid_0_perform (guestfs_h *);

static int
test_pvchange_uuid_0 (guestfs_h *g)
{
  if (test_pvchange_uuid_0_skip ()) {
    skipped ("test_pvchange_uuid_0", "environment variable set");
    return 0;
  }

  const char *features3218[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3218)) {
    skipped ("test_pvchange_uuid_0", "group %s not available in daemon",
             features3218[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_pvchange_uuid_0_perform (g);
}

static int
test_pvchange_uuid_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "pvchange_uuid") == NULL;
  str = getenv ("SKIP_TEST_PVCHANGE_UUID_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PVCHANGE_UUID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_pvchange_uuid_0_perform (guestfs_h *g)
{
  /* TestRun for pvchange_uuid (0) */
  const char *arg3220 = "/dev/sda";
  const char *arg3221 = "mbr";
  int ret3219;
  ret3219 = guestfs_part_disk (g, arg3220, arg3221);
  if (ret3219 == -1)
    return -1;
  const char *arg3224 = "/dev/sda1";
  int ret3223;
  ret3223 = guestfs_pvcreate (g, arg3224);
  if (ret3223 == -1)
    return -1;
  const char *arg3227 = "/dev/sda1";
  int ret3226;
  ret3226 = guestfs_pvchange_uuid (g, arg3227);
  if (ret3226 == -1)
    return -1;
  return 0;
}

static int test_pvchange_uuid_all_0_skip (void);
static int test_pvchange_uuid_all_0_perform (guestfs_h *);

static int
test_pvchange_uuid_all_0 (guestfs_h *g)
{
  if (test_pvchange_uuid_all_0_skip ()) {
    skipped ("test_pvchange_uuid_all_0", "environment variable set");
    return 0;
  }

  const char *features3229[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3229)) {
    skipped ("test_pvchange_uuid_all_0", "group %s not available in daemon",
             features3229[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_pvchange_uuid_all_0_perform (g);
}

static int
test_pvchange_uuid_all_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "pvchange_uuid_all") == NULL;
  str = getenv ("SKIP_TEST_PVCHANGE_UUID_ALL_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PVCHANGE_UUID_ALL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_pvchange_uuid_all_0_perform (guestfs_h *g)
{
  /* TestRun for pvchange_uuid_all (0) */
  const char *arg3231 = "/dev/sda";
  const char *arg3232 = "mbr";
  int ret3230;
  ret3230 = guestfs_part_disk (g, arg3231, arg3232);
  if (ret3230 == -1)
    return -1;
  const char *arg3235 = "/dev/sda1";
  int ret3234;
  ret3234 = guestfs_pvcreate (g, arg3235);
  if (ret3234 == -1)
    return -1;
  int ret3237;
  ret3237 = guestfs_pvchange_uuid_all (g);
  if (ret3237 == -1)
    return -1;
  return 0;
}

static int test_pvcreate_0_skip (void);
static int test_pvcreate_0_perform (guestfs_h *);

static int
test_pvcreate_0 (guestfs_h *g)
{
  if (test_pvcreate_0_skip ()) {
    skipped ("test_pvcreate_0", "environment variable set");
    return 0;
  }

  const char *features3239[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3239)) {
    skipped ("test_pvcreate_0", "group %s not available in daemon",
             features3239[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_pvcreate_0_perform (g);
}

static int
test_pvcreate_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "pvcreate") == NULL;
  str = getenv ("SKIP_TEST_PVCREATE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PVCREATE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_pvcreate_0_perform (guestfs_h *g)
{
  /* TestResult for pvcreate (0) */
  const char *arg3240 = "/dev/sda";
  const char *arg3241 = "mbr";
  int ret7;
  ret7 = guestfs_part_init (g, arg3240, arg3241);
  if (ret7 == -1)
    return -1;
  const char *arg3243 = "/dev/sda";
  const char *arg3244 = "p";
  int ret6;
  ret6 = guestfs_part_add (g, arg3243, arg3244, 64, 204799);
  if (ret6 == -1)
    return -1;
  const char *arg3248 = "/dev/sda";
  const char *arg3249 = "p";
  int ret5;
  ret5 = guestfs_part_add (g, arg3248, arg3249, 204800, 409599);
  if (ret5 == -1)
    return -1;
  const char *arg3253 = "/dev/sda";
  const char *arg3254 = "p";
  int ret4;
  ret4 = guestfs_part_add (g, arg3253, arg3254, 409600, -64);
  if (ret4 == -1)
    return -1;
  const char *arg3258 = "/dev/sda1";
  int ret3;
  ret3 = guestfs_pvcreate (g, arg3258);
  if (ret3 == -1)
    return -1;
  const char *arg3260 = "/dev/sda2";
  int ret2;
  ret2 = guestfs_pvcreate (g, arg3260);
  if (ret2 == -1)
    return -1;
  const char *arg3262 = "/dev/sda3";
  int ret1;
  ret1 = guestfs_pvcreate (g, arg3262);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_pvs (g);
  if (ret == NULL)
      return -1;
  if (! (is_device_list (ret, 3, "/dev/sda1", "/dev/sda2", "/dev/sda3"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_pvcreate_0", "is_device_list (ret, 3, \"/dev/sda1\", \"/dev/sda2\", \"/dev/sda3\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_pvremove_0_skip (void);
static int test_pvremove_0_perform (guestfs_h *);

static int
test_pvremove_0 (guestfs_h *g)
{
  if (test_pvremove_0_skip ()) {
    skipped ("test_pvremove_0", "environment variable set");
    return 0;
  }

  const char *features3265[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3265)) {
    skipped ("test_pvremove_0", "group %s not available in daemon",
             features3265[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_pvremove_0_perform (g);
}

static int
test_pvremove_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "pvremove") == NULL;
  str = getenv ("SKIP_TEST_PVREMOVE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PVREMOVE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_pvremove_0_perform (guestfs_h *g)
{
  /* TestResult for pvremove (0) */
  const char *arg3266 = "/dev/sda";
  const char *arg3267 = "mbr";
  int ret7;
  ret7 = guestfs_part_disk (g, arg3266, arg3267);
  if (ret7 == -1)
    return -1;
  const char *arg3269 = "/dev/sda1";
  int ret6;
  ret6 = guestfs_pvcreate (g, arg3269);
  if (ret6 == -1)
    return -1;
  const char *arg3271 = "VG";
  const char *arg3272_0 = "/dev/sda1";
  const char *const arg3272[] = {
    arg3272_0,
    NULL
  };
  int ret5;
  ret5 = guestfs_vgcreate (g, arg3271, (char **) arg3272);
  if (ret5 == -1)
    return -1;
  const char *arg3274 = "LV1";
  const char *arg3275 = "VG";
  int ret4;
  ret4 = guestfs_lvcreate (g, arg3274, arg3275, 50);
  if (ret4 == -1)
    return -1;
  const char *arg3278 = "LV2";
  const char *arg3279 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg3278, arg3279, 50);
  if (ret3 == -1)
    return -1;
  const char *arg3282 = "VG";
  int ret2;
  ret2 = guestfs_vgremove (g, arg3282);
  if (ret2 == -1)
    return -1;
  const char *arg3284 = "/dev/sda1";
  int ret1;
  ret1 = guestfs_pvremove (g, arg3284);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_lvs (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_pvremove_0", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_pvremove_1_skip (void);
static int test_pvremove_1_perform (guestfs_h *);

static int
test_pvremove_1 (guestfs_h *g)
{
  if (test_pvremove_1_skip ()) {
    skipped ("test_pvremove_1", "environment variable set");
    return 0;
  }

  const char *features3287[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3287)) {
    skipped ("test_pvremove_1", "group %s not available in daemon",
             features3287[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_pvremove_1_perform (g);
}

static int
test_pvremove_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "pvremove") == NULL;
  str = getenv ("SKIP_TEST_PVREMOVE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PVREMOVE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_pvremove_1_perform (guestfs_h *g)
{
  /* TestResult for pvremove (1) */
  const char *arg3288 = "/dev/sda";
  const char *arg3289 = "mbr";
  int ret7;
  ret7 = guestfs_part_disk (g, arg3288, arg3289);
  if (ret7 == -1)
    return -1;
  const char *arg3291 = "/dev/sda1";
  int ret6;
  ret6 = guestfs_pvcreate (g, arg3291);
  if (ret6 == -1)
    return -1;
  const char *arg3293 = "VG";
  const char *arg3294_0 = "/dev/sda1";
  const char *const arg3294[] = {
    arg3294_0,
    NULL
  };
  int ret5;
  ret5 = guestfs_vgcreate (g, arg3293, (char **) arg3294);
  if (ret5 == -1)
    return -1;
  const char *arg3296 = "LV1";
  const char *arg3297 = "VG";
  int ret4;
  ret4 = guestfs_lvcreate (g, arg3296, arg3297, 50);
  if (ret4 == -1)
    return -1;
  const char *arg3300 = "LV2";
  const char *arg3301 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg3300, arg3301, 50);
  if (ret3 == -1)
    return -1;
  const char *arg3304 = "VG";
  int ret2;
  ret2 = guestfs_vgremove (g, arg3304);
  if (ret2 == -1)
    return -1;
  const char *arg3306 = "/dev/sda1";
  int ret1;
  ret1 = guestfs_pvremove (g, arg3306);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_vgs (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_pvremove_1", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_pvremove_2_skip (void);
static int test_pvremove_2_perform (guestfs_h *);

static int
test_pvremove_2 (guestfs_h *g)
{
  if (test_pvremove_2_skip ()) {
    skipped ("test_pvremove_2", "environment variable set");
    return 0;
  }

  const char *features3309[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3309)) {
    skipped ("test_pvremove_2", "group %s not available in daemon",
             features3309[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_pvremove_2_perform (g);
}

static int
test_pvremove_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "pvremove") == NULL;
  str = getenv ("SKIP_TEST_PVREMOVE_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PVREMOVE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_pvremove_2_perform (guestfs_h *g)
{
  /* TestResult for pvremove (2) */
  const char *arg3310 = "/dev/sda";
  const char *arg3311 = "mbr";
  int ret7;
  ret7 = guestfs_part_disk (g, arg3310, arg3311);
  if (ret7 == -1)
    return -1;
  const char *arg3313 = "/dev/sda1";
  int ret6;
  ret6 = guestfs_pvcreate (g, arg3313);
  if (ret6 == -1)
    return -1;
  const char *arg3315 = "VG";
  const char *arg3316_0 = "/dev/sda1";
  const char *const arg3316[] = {
    arg3316_0,
    NULL
  };
  int ret5;
  ret5 = guestfs_vgcreate (g, arg3315, (char **) arg3316);
  if (ret5 == -1)
    return -1;
  const char *arg3318 = "LV1";
  const char *arg3319 = "VG";
  int ret4;
  ret4 = guestfs_lvcreate (g, arg3318, arg3319, 50);
  if (ret4 == -1)
    return -1;
  const char *arg3322 = "LV2";
  const char *arg3323 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg3322, arg3323, 50);
  if (ret3 == -1)
    return -1;
  const char *arg3326 = "VG";
  int ret2;
  ret2 = guestfs_vgremove (g, arg3326);
  if (ret2 == -1)
    return -1;
  const char *arg3328 = "/dev/sda1";
  int ret1;
  ret1 = guestfs_pvremove (g, arg3328);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_pvs (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_pvremove_2", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_pvs_0_skip (void);
static int test_pvs_0_perform (guestfs_h *);

static int
test_pvs_0 (guestfs_h *g)
{
  if (test_pvs_0_skip ()) {
    skipped ("test_pvs_0", "environment variable set");
    return 0;
  }

  const char *features3331[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3331)) {
    skipped ("test_pvs_0", "group %s not available in daemon",
             features3331[0]);
    return 0;
  }

  if (init_basic_fs_on_lvm (g) == -1)
    return -1;

  return test_pvs_0_perform (g);
}

static int
test_pvs_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "pvs") == NULL;
  str = getenv ("SKIP_TEST_PVS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PVS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_pvs_0_perform (guestfs_h *g)
{
  /* TestResult for pvs (0) */
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_pvs (g);
  if (ret == NULL)
      return -1;
  if (! (is_device_list (ret, 1, "/dev/sda1"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_pvs_0", "is_device_list (ret, 1, \"/dev/sda1\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_pvs_1_skip (void);
static int test_pvs_1_perform (guestfs_h *);

static int
test_pvs_1 (guestfs_h *g)
{
  if (test_pvs_1_skip ()) {
    skipped ("test_pvs_1", "environment variable set");
    return 0;
  }

  const char *features3333[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3333)) {
    skipped ("test_pvs_1", "group %s not available in daemon",
             features3333[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_pvs_1_perform (g);
}

static int
test_pvs_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "pvs") == NULL;
  str = getenv ("SKIP_TEST_PVS_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PVS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_pvs_1_perform (guestfs_h *g)
{
  /* TestResult for pvs (1) */
  const char *arg3334 = "/dev/sda";
  const char *arg3335 = "mbr";
  int ret7;
  ret7 = guestfs_part_init (g, arg3334, arg3335);
  if (ret7 == -1)
    return -1;
  const char *arg3337 = "/dev/sda";
  const char *arg3338 = "p";
  int ret6;
  ret6 = guestfs_part_add (g, arg3337, arg3338, 64, 204799);
  if (ret6 == -1)
    return -1;
  const char *arg3342 = "/dev/sda";
  const char *arg3343 = "p";
  int ret5;
  ret5 = guestfs_part_add (g, arg3342, arg3343, 204800, 409599);
  if (ret5 == -1)
    return -1;
  const char *arg3347 = "/dev/sda";
  const char *arg3348 = "p";
  int ret4;
  ret4 = guestfs_part_add (g, arg3347, arg3348, 409600, -64);
  if (ret4 == -1)
    return -1;
  const char *arg3352 = "/dev/sda1";
  int ret3;
  ret3 = guestfs_pvcreate (g, arg3352);
  if (ret3 == -1)
    return -1;
  const char *arg3354 = "/dev/sda2";
  int ret2;
  ret2 = guestfs_pvcreate (g, arg3354);
  if (ret2 == -1)
    return -1;
  const char *arg3356 = "/dev/sda3";
  int ret1;
  ret1 = guestfs_pvcreate (g, arg3356);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_pvs (g);
  if (ret == NULL)
      return -1;
  if (! (is_device_list (ret, 3, "/dev/sda1", "/dev/sda2", "/dev/sda3"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_pvs_1", "is_device_list (ret, 3, \"/dev/sda1\", \"/dev/sda2\", \"/dev/sda3\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_pwrite_0_skip (void);
static int test_pwrite_0_perform (guestfs_h *);

static int
test_pwrite_0 (guestfs_h *g)
{
  if (test_pwrite_0_skip ()) {
    skipped ("test_pwrite_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_pwrite_0_perform (g);
}

static int
test_pwrite_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "pwrite") == NULL;
  str = getenv ("SKIP_TEST_PWRITE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PWRITE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_pwrite_0_perform (guestfs_h *g)
{
  /* TestResultString for pwrite (0) */
  const char *arg3360 = "/pwrite";
  const char *arg3361 = "new file contents";
  size_t arg3361_size = 17;
  int ret3359;
  ret3359 = guestfs_write (g, arg3360, arg3361, arg3361_size);
  if (ret3359 == -1)
    return -1;
  const char *arg3364 = "/pwrite";
  const char *arg3365 = "data";
  size_t arg3365_size = 4;
  int ret3363;
  ret3363 = guestfs_pwrite (g, arg3364, arg3365, arg3365_size, 4);
  if (ret3363 == -1)
    return -1;
  const char *arg3368 = "/pwrite";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3368);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "new data contents")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_pwrite_0", "cat", "new data contents", ret);
    return -1;
  }
  return 0;
}

static int test_pwrite_1_skip (void);
static int test_pwrite_1_perform (guestfs_h *);

static int
test_pwrite_1 (guestfs_h *g)
{
  if (test_pwrite_1_skip ()) {
    skipped ("test_pwrite_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_pwrite_1_perform (g);
}

static int
test_pwrite_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "pwrite") == NULL;
  str = getenv ("SKIP_TEST_PWRITE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PWRITE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_pwrite_1_perform (guestfs_h *g)
{
  /* TestResultString for pwrite (1) */
  const char *arg3371 = "/pwrite2";
  const char *arg3372 = "new file contents";
  size_t arg3372_size = 17;
  int ret3370;
  ret3370 = guestfs_write (g, arg3371, arg3372, arg3372_size);
  if (ret3370 == -1)
    return -1;
  const char *arg3375 = "/pwrite2";
  const char *arg3376 = "is extended";
  size_t arg3376_size = 11;
  int ret3374;
  ret3374 = guestfs_pwrite (g, arg3375, arg3376, arg3376_size, 9);
  if (ret3374 == -1)
    return -1;
  const char *arg3379 = "/pwrite2";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3379);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "new file is extended")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_pwrite_1", "cat", "new file is extended", ret);
    return -1;
  }
  return 0;
}

static int test_pwrite_2_skip (void);
static int test_pwrite_2_perform (guestfs_h *);

static int
test_pwrite_2 (guestfs_h *g)
{
  if (test_pwrite_2_skip ()) {
    skipped ("test_pwrite_2", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_pwrite_2_perform (g);
}

static int
test_pwrite_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "pwrite") == NULL;
  str = getenv ("SKIP_TEST_PWRITE_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PWRITE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_pwrite_2_perform (guestfs_h *g)
{
  /* TestResultString for pwrite (2) */
  const char *arg3382 = "/pwrite3";
  const char *arg3383 = "new file contents";
  size_t arg3383_size = 17;
  int ret3381;
  ret3381 = guestfs_write (g, arg3382, arg3383, arg3383_size);
  if (ret3381 == -1)
    return -1;
  const char *arg3386 = "/pwrite3";
  const char *arg3387 = "";
  size_t arg3387_size = 0;
  int ret3385;
  ret3385 = guestfs_pwrite (g, arg3386, arg3387, arg3387_size, 4);
  if (ret3385 == -1)
    return -1;
  const char *arg3390 = "/pwrite3";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3390);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "new file contents")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_pwrite_2", "cat", "new file contents", ret);
    return -1;
  }
  return 0;
}

static int test_pwrite_device_0_skip (void);
static int test_pwrite_device_0_perform (guestfs_h *);

static int
test_pwrite_device_0 (guestfs_h *g)
{
  if (test_pwrite_device_0_skip ()) {
    skipped ("test_pwrite_device_0", "environment variable set");
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_pwrite_device_0_perform (g);
}

static int
test_pwrite_device_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "pwrite_device") == NULL;
  str = getenv ("SKIP_TEST_PWRITE_DEVICE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_PWRITE_DEVICE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_pwrite_device_0_perform (guestfs_h *g)
{
  /* TestResult for pwrite_device (0) */
  const char *arg3392 = "/dev/sda";
  const char *arg3393 = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
  size_t arg3393_size = 66;
  int ret2;
  ret2 = guestfs_pwrite_device (g, arg3392, arg3393, arg3393_size, 446);
  if (ret2 == -1)
    return -1;
  const char *arg3396 = "/dev/sda";
  int ret1;
  ret1 = guestfs_blockdev_rereadpt (g, arg3396);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_list_partitions (g);
  if (ret == NULL)
      return -1;
  if (! (is_device_list (ret, 1, "/dev/sdb1"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_pwrite_device_0", "is_device_list (ret, 1, \"/dev/sdb1\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_read_file_0_skip (void);
static int test_read_file_0_perform (guestfs_h *);

static int
test_read_file_0 (guestfs_h *g)
{
  if (test_read_file_0_skip ()) {
    skipped ("test_read_file_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_read_file_0_perform (g);
}

static int
test_read_file_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "read_file") == NULL;
  str = getenv ("SKIP_TEST_READ_FILE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_READ_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_read_file_0_perform (guestfs_h *g)
{
  /* TestResult for read_file (0) */
  const char *arg3399 = "/known-4";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_read_file (g, arg3399, &size);
  if (ret == NULL)
      return -1;
  if (! (compare_buffers (ret, size, "abc\ndef\nghi", 11) == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_read_file_0", "compare_buffers (ret, size, \"abc\\ndef\\nghi\", 11) == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_read_lines_0_skip (void);
static int test_read_lines_0_perform (guestfs_h *);

static int
test_read_lines_0 (guestfs_h *g)
{
  if (test_read_lines_0_skip ()) {
    skipped ("test_read_lines_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_read_lines_0_perform (g);
}

static int
test_read_lines_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "read_lines") == NULL;
  str = getenv ("SKIP_TEST_READ_LINES_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_READ_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_read_lines_0_perform (guestfs_h *g)
{
  /* TestResult for read_lines (0) */
  const char *arg3401 = "/known-4";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3401);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "abc", "def", "ghi"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_read_lines_0", "is_string_list (ret, 3, \"abc\", \"def\", \"ghi\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_read_lines_1_skip (void);
static int test_read_lines_1_perform (guestfs_h *);

static int
test_read_lines_1 (guestfs_h *g)
{
  if (test_read_lines_1_skip ()) {
    skipped ("test_read_lines_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_read_lines_1_perform (g);
}

static int
test_read_lines_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "read_lines") == NULL;
  str = getenv ("SKIP_TEST_READ_LINES_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_READ_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_read_lines_1_perform (guestfs_h *g)
{
  /* TestResult for read_lines (1) */
  const char *arg3403 = "/empty";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3403);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_read_lines_1", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_read_lines_2_skip (void);
static int test_read_lines_2_perform (guestfs_h *);

static int
test_read_lines_2 (guestfs_h *g)
{
  if (test_read_lines_2_skip ()) {
    skipped ("test_read_lines_2", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_read_lines_2_perform (g);
}

static int
test_read_lines_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "read_lines") == NULL;
  str = getenv ("SKIP_TEST_READ_LINES_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_READ_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_read_lines_2_perform (guestfs_h *g)
{
  /* TestResult for read_lines (2) */
  const char *arg3405 = "/read_lines1";
  const char *arg3406 = "\n";
  size_t arg3406_size = 1;
  int ret1;
  ret1 = guestfs_write (g, arg3405, arg3406, arg3406_size);
  if (ret1 == -1)
    return -1;
  const char *arg3408 = "/read_lines1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3408);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 1, ""))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_read_lines_2", "is_string_list (ret, 1, \"\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_read_lines_3_skip (void);
static int test_read_lines_3_perform (guestfs_h *);

static int
test_read_lines_3 (guestfs_h *g)
{
  if (test_read_lines_3_skip ()) {
    skipped ("test_read_lines_3", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_read_lines_3_perform (g);
}

static int
test_read_lines_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "read_lines") == NULL;
  str = getenv ("SKIP_TEST_READ_LINES_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_READ_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_read_lines_3_perform (guestfs_h *g)
{
  /* TestResult for read_lines (3) */
  const char *arg3410 = "/read_lines2";
  const char *arg3411 = "\r\n";
  size_t arg3411_size = 2;
  int ret1;
  ret1 = guestfs_write (g, arg3410, arg3411, arg3411_size);
  if (ret1 == -1)
    return -1;
  const char *arg3413 = "/read_lines2";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3413);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 1, ""))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_read_lines_3", "is_string_list (ret, 1, \"\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_read_lines_4_skip (void);
static int test_read_lines_4_perform (guestfs_h *);

static int
test_read_lines_4 (guestfs_h *g)
{
  if (test_read_lines_4_skip ()) {
    skipped ("test_read_lines_4", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_read_lines_4_perform (g);
}

static int
test_read_lines_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "read_lines") == NULL;
  str = getenv ("SKIP_TEST_READ_LINES_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_READ_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_read_lines_4_perform (guestfs_h *g)
{
  /* TestResult for read_lines (4) */
  const char *arg3415 = "/read_lines3";
  const char *arg3416 = "\n\r\n";
  size_t arg3416_size = 3;
  int ret1;
  ret1 = guestfs_write (g, arg3415, arg3416, arg3416_size);
  if (ret1 == -1)
    return -1;
  const char *arg3418 = "/read_lines3";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3418);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "", ""))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_read_lines_4", "is_string_list (ret, 2, \"\", \"\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_read_lines_5_skip (void);
static int test_read_lines_5_perform (guestfs_h *);

static int
test_read_lines_5 (guestfs_h *g)
{
  if (test_read_lines_5_skip ()) {
    skipped ("test_read_lines_5", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_read_lines_5_perform (g);
}

static int
test_read_lines_5_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "read_lines") == NULL;
  str = getenv ("SKIP_TEST_READ_LINES_5");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_READ_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_read_lines_5_perform (guestfs_h *g)
{
  /* TestResult for read_lines (5) */
  const char *arg3420 = "/read_lines4";
  const char *arg3421 = "a";
  size_t arg3421_size = 1;
  int ret1;
  ret1 = guestfs_write (g, arg3420, arg3421, arg3421_size);
  if (ret1 == -1)
    return -1;
  const char *arg3423 = "/read_lines4";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3423);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 1, "a"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_read_lines_5", "is_string_list (ret, 1, \"a\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_read_lines_6_skip (void);
static int test_read_lines_6_perform (guestfs_h *);

static int
test_read_lines_6 (guestfs_h *g)
{
  if (test_read_lines_6_skip ()) {
    skipped ("test_read_lines_6", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_read_lines_6_perform (g);
}

static int
test_read_lines_6_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "read_lines") == NULL;
  str = getenv ("SKIP_TEST_READ_LINES_6");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_READ_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_read_lines_6_perform (guestfs_h *g)
{
  /* TestResult for read_lines (6) */
  const char *arg3425 = "/read_lines5";
  const char *arg3426 = "a\nb";
  size_t arg3426_size = 3;
  int ret1;
  ret1 = guestfs_write (g, arg3425, arg3426, arg3426_size);
  if (ret1 == -1)
    return -1;
  const char *arg3428 = "/read_lines5";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3428);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "a", "b"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_read_lines_6", "is_string_list (ret, 2, \"a\", \"b\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_read_lines_7_skip (void);
static int test_read_lines_7_perform (guestfs_h *);

static int
test_read_lines_7 (guestfs_h *g)
{
  if (test_read_lines_7_skip ()) {
    skipped ("test_read_lines_7", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_read_lines_7_perform (g);
}

static int
test_read_lines_7_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "read_lines") == NULL;
  str = getenv ("SKIP_TEST_READ_LINES_7");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_READ_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_read_lines_7_perform (guestfs_h *g)
{
  /* TestResult for read_lines (7) */
  const char *arg3430 = "/read_lines6";
  const char *arg3431 = "a\nb\n";
  size_t arg3431_size = 4;
  int ret1;
  ret1 = guestfs_write (g, arg3430, arg3431, arg3431_size);
  if (ret1 == -1)
    return -1;
  const char *arg3433 = "/read_lines6";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3433);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "a", "b"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_read_lines_7", "is_string_list (ret, 2, \"a\", \"b\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_read_lines_8_skip (void);
static int test_read_lines_8_perform (guestfs_h *);

static int
test_read_lines_8 (guestfs_h *g)
{
  if (test_read_lines_8_skip ()) {
    skipped ("test_read_lines_8", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_read_lines_8_perform (g);
}

static int
test_read_lines_8_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "read_lines") == NULL;
  str = getenv ("SKIP_TEST_READ_LINES_8");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_READ_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_read_lines_8_perform (guestfs_h *g)
{
  /* TestResult for read_lines (8) */
  const char *arg3435 = "/read_lines7";
  const char *arg3436 = "a\nb\r\n";
  size_t arg3436_size = 5;
  int ret1;
  ret1 = guestfs_write (g, arg3435, arg3436, arg3436_size);
  if (ret1 == -1)
    return -1;
  const char *arg3438 = "/read_lines7";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3438);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "a", "b"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_read_lines_8", "is_string_list (ret, 2, \"a\", \"b\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_read_lines_9_skip (void);
static int test_read_lines_9_perform (guestfs_h *);

static int
test_read_lines_9 (guestfs_h *g)
{
  if (test_read_lines_9_skip ()) {
    skipped ("test_read_lines_9", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_read_lines_9_perform (g);
}

static int
test_read_lines_9_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "read_lines") == NULL;
  str = getenv ("SKIP_TEST_READ_LINES_9");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_READ_LINES");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_read_lines_9_perform (guestfs_h *g)
{
  /* TestResult for read_lines (9) */
  const char *arg3440 = "/read_lines8";
  const char *arg3441 = "a\nb\r\n\n";
  size_t arg3441_size = 6;
  int ret1;
  ret1 = guestfs_write (g, arg3440, arg3441, arg3441_size);
  if (ret1 == -1)
    return -1;
  const char *arg3443 = "/read_lines8";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3443);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "a", "b", ""))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_read_lines_9", "is_string_list (ret, 3, \"a\", \"b\", \"\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_realpath_0_skip (void);
static int test_realpath_0_perform (guestfs_h *);

static int
test_realpath_0 (guestfs_h *g)
{
  if (test_realpath_0_skip ()) {
    skipped ("test_realpath_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_realpath_0_perform (g);
}

static int
test_realpath_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "realpath") == NULL;
  str = getenv ("SKIP_TEST_REALPATH_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_REALPATH");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_realpath_0_perform (guestfs_h *g)
{
  /* TestResultString for realpath (0) */
  const char *arg3445 = "/../directory";
  CLEANUP_FREE char *ret;
  ret = guestfs_realpath (g, arg3445);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "/directory")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_realpath_0", "realpath", "/directory", ret);
    return -1;
  }
  return 0;
}

static int test_remount_0_skip (void);
static int test_remount_0_perform (guestfs_h *);

static int
test_remount_0 (guestfs_h *g)
{
  if (test_remount_0_skip ()) {
    skipped ("test_remount_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_remount_0_perform (g);
}

static int
test_remount_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "remount") == NULL;
  str = getenv ("SKIP_TEST_REMOUNT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_REMOUNT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_remount_0_perform (guestfs_h *g)
{
  /* TestLastFail for remount (0) */
  const char *arg3448 = "/";
  struct guestfs_remount_argv optargs3449;
  optargs3449.rw = 0;
  optargs3449.bitmask = UINT64_C(0x1);
  int ret3447;
  ret3447 = guestfs_remount_argv (g, arg3448, &optargs3449);
  if (ret3447 == -1)
    return -1;
  const char *arg3451 = "/remount1";
  const char *arg3452 = "data";
  size_t arg3452_size = 4;
  int ret3450;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3450 = guestfs_write (g, arg3451, arg3452, arg3452_size);
  guestfs_pop_error_handler (g);
  if (ret3450 != -1)
    return -1;
  return 0;
}

static int test_remount_1_skip (void);
static int test_remount_1_perform (guestfs_h *);

static int
test_remount_1 (guestfs_h *g)
{
  if (test_remount_1_skip ()) {
    skipped ("test_remount_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_remount_1_perform (g);
}

static int
test_remount_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "remount") == NULL;
  str = getenv ("SKIP_TEST_REMOUNT_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_REMOUNT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_remount_1_perform (guestfs_h *g)
{
  /* TestRun for remount (1) */
  const char *arg3455 = "/";
  struct guestfs_remount_argv optargs3456;
  optargs3456.rw = 0;
  optargs3456.bitmask = UINT64_C(0x1);
  int ret3454;
  ret3454 = guestfs_remount_argv (g, arg3455, &optargs3456);
  if (ret3454 == -1)
    return -1;
  const char *arg3458 = "/";
  struct guestfs_remount_argv optargs3459;
  optargs3459.rw = 1;
  optargs3459.bitmask = UINT64_C(0x1);
  int ret3457;
  ret3457 = guestfs_remount_argv (g, arg3458, &optargs3459);
  if (ret3457 == -1)
    return -1;
  const char *arg3461 = "/remount2";
  const char *arg3462 = "data";
  size_t arg3462_size = 4;
  int ret3460;
  ret3460 = guestfs_write (g, arg3461, arg3462, arg3462_size);
  if (ret3460 == -1)
    return -1;
  return 0;
}

static int test_rename_0_skip (void);
static int test_rename_0_perform (guestfs_h *);

static int
test_rename_0 (guestfs_h *g)
{
  if (test_rename_0_skip ()) {
    skipped ("test_rename_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_rename_0_perform (g);
}

static int
test_rename_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "rename") == NULL;
  str = getenv ("SKIP_TEST_RENAME_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_RENAME");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_rename_0_perform (guestfs_h *g)
{
  /* TestResultFalse for rename (0) */
  const char *arg3465 = "/rename";
  int ret3464;
  ret3464 = guestfs_mkdir (g, arg3465);
  if (ret3464 == -1)
    return -1;
  const char *arg3468 = "/rename/old";
  const char *arg3469 = "file content";
  size_t arg3469_size = 12;
  int ret3467;
  ret3467 = guestfs_write (g, arg3468, arg3469, arg3469_size);
  if (ret3467 == -1)
    return -1;
  const char *arg3472 = "/rename/old";
  const char *arg3473 = "/rename/new";
  int ret3471;
  ret3471 = guestfs_rename (g, arg3472, arg3473);
  if (ret3471 == -1)
    return -1;
  const char *arg3475 = "/rename/old";
  struct guestfs_is_file_opts_argv optargs3476;
  optargs3476.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg3475, &optargs3476);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_rename_0", "is_file");
    return -1;
  }
  return 0;
}

static int test_rm_0_skip (void);
static int test_rm_0_perform (guestfs_h *);

static int
test_rm_0 (guestfs_h *g)
{
  if (test_rm_0_skip ()) {
    skipped ("test_rm_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_rm_0_perform (g);
}

static int
test_rm_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "rm") == NULL;
  str = getenv ("SKIP_TEST_RM_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_RM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_rm_0_perform (guestfs_h *g)
{
  /* TestRun for rm (0) */
  const char *arg3478 = "/rm";
  int ret3477;
  ret3477 = guestfs_mkdir (g, arg3478);
  if (ret3477 == -1)
    return -1;
  const char *arg3481 = "/rm/new";
  int ret3480;
  ret3480 = guestfs_touch (g, arg3481);
  if (ret3480 == -1)
    return -1;
  const char *arg3484 = "/rm/new";
  int ret3483;
  ret3483 = guestfs_rm (g, arg3484);
  if (ret3483 == -1)
    return -1;
  return 0;
}

static int test_rm_1_skip (void);
static int test_rm_1_perform (guestfs_h *);

static int
test_rm_1 (guestfs_h *g)
{
  if (test_rm_1_skip ()) {
    skipped ("test_rm_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_rm_1_perform (g);
}

static int
test_rm_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "rm") == NULL;
  str = getenv ("SKIP_TEST_RM_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_RM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_rm_1_perform (guestfs_h *g)
{
  /* TestLastFail for rm (1) */
  const char *arg3487 = "/nosuchfile";
  int ret3486;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3486 = guestfs_rm (g, arg3487);
  guestfs_pop_error_handler (g);
  if (ret3486 != -1)
    return -1;
  return 0;
}

static int test_rm_2_skip (void);
static int test_rm_2_perform (guestfs_h *);

static int
test_rm_2 (guestfs_h *g)
{
  if (test_rm_2_skip ()) {
    skipped ("test_rm_2", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_rm_2_perform (g);
}

static int
test_rm_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "rm") == NULL;
  str = getenv ("SKIP_TEST_RM_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_RM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_rm_2_perform (guestfs_h *g)
{
  /* TestLastFail for rm (2) */
  const char *arg3490 = "/rm2";
  int ret3489;
  ret3489 = guestfs_mkdir (g, arg3490);
  if (ret3489 == -1)
    return -1;
  const char *arg3493 = "/rm2";
  int ret3492;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3492 = guestfs_rm (g, arg3493);
  guestfs_pop_error_handler (g);
  if (ret3492 != -1)
    return -1;
  return 0;
}

static int test_rm_f_0_skip (void);
static int test_rm_f_0_perform (guestfs_h *);

static int
test_rm_f_0 (guestfs_h *g)
{
  if (test_rm_f_0_skip ()) {
    skipped ("test_rm_f_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_rm_f_0_perform (g);
}

static int
test_rm_f_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "rm_f") == NULL;
  str = getenv ("SKIP_TEST_RM_F_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_RM_F");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_rm_f_0_perform (guestfs_h *g)
{
  /* TestResultFalse for rm_f (0) */
  const char *arg3496 = "/rm_f";
  int ret3495;
  ret3495 = guestfs_mkdir (g, arg3496);
  if (ret3495 == -1)
    return -1;
  const char *arg3499 = "/rm_f/foo";
  int ret3498;
  ret3498 = guestfs_touch (g, arg3499);
  if (ret3498 == -1)
    return -1;
  const char *arg3502 = "/rm_f/foo";
  int ret3501;
  ret3501 = guestfs_rm_f (g, arg3502);
  if (ret3501 == -1)
    return -1;
  const char *arg3505 = "/rm_f/not_exists";
  int ret3504;
  ret3504 = guestfs_rm_f (g, arg3505);
  if (ret3504 == -1)
    return -1;
  const char *arg3507 = "/rm_f/foo";
  int ret;
  ret = guestfs_exists (g, arg3507);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_rm_f_0", "exists");
    return -1;
  }
  return 0;
}

static int test_rm_f_1_skip (void);
static int test_rm_f_1_perform (guestfs_h *);

static int
test_rm_f_1 (guestfs_h *g)
{
  if (test_rm_f_1_skip ()) {
    skipped ("test_rm_f_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_rm_f_1_perform (g);
}

static int
test_rm_f_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "rm_f") == NULL;
  str = getenv ("SKIP_TEST_RM_F_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_RM_F");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_rm_f_1_perform (guestfs_h *g)
{
  /* TestLastFail for rm_f (1) */
  const char *arg3510 = "/rm_f2";
  int ret3509;
  ret3509 = guestfs_mkdir (g, arg3510);
  if (ret3509 == -1)
    return -1;
  const char *arg3513 = "/rm_f2/foo";
  int ret3512;
  ret3512 = guestfs_mkdir (g, arg3513);
  if (ret3512 == -1)
    return -1;
  const char *arg3516 = "/rm_f2/foo";
  int ret3515;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3515 = guestfs_rm_f (g, arg3516);
  guestfs_pop_error_handler (g);
  if (ret3515 != -1)
    return -1;
  return 0;
}

static int test_rm_rf_0_skip (void);
static int test_rm_rf_0_perform (guestfs_h *);

static int
test_rm_rf_0 (guestfs_h *g)
{
  if (test_rm_rf_0_skip ()) {
    skipped ("test_rm_rf_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_rm_rf_0_perform (g);
}

static int
test_rm_rf_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "rm_rf") == NULL;
  str = getenv ("SKIP_TEST_RM_RF_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_RM_RF");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_rm_rf_0_perform (guestfs_h *g)
{
  /* TestResultFalse for rm_rf (0) */
  const char *arg3519 = "/rm_rf";
  int ret3518;
  ret3518 = guestfs_mkdir (g, arg3519);
  if (ret3518 == -1)
    return -1;
  const char *arg3522 = "/rm_rf/foo";
  int ret3521;
  ret3521 = guestfs_mkdir (g, arg3522);
  if (ret3521 == -1)
    return -1;
  const char *arg3525 = "/rm_rf/foo/bar";
  int ret3524;
  ret3524 = guestfs_touch (g, arg3525);
  if (ret3524 == -1)
    return -1;
  const char *arg3528 = "/rm_rf";
  int ret3527;
  ret3527 = guestfs_rm_rf (g, arg3528);
  if (ret3527 == -1)
    return -1;
  const char *arg3530 = "/rm_rf";
  int ret;
  ret = guestfs_exists (g, arg3530);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_rm_rf_0", "exists");
    return -1;
  }
  return 0;
}

static int test_rmdir_0_skip (void);
static int test_rmdir_0_perform (guestfs_h *);

static int
test_rmdir_0 (guestfs_h *g)
{
  if (test_rmdir_0_skip ()) {
    skipped ("test_rmdir_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_rmdir_0_perform (g);
}

static int
test_rmdir_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "rmdir") == NULL;
  str = getenv ("SKIP_TEST_RMDIR_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_RMDIR");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_rmdir_0_perform (guestfs_h *g)
{
  /* TestRun for rmdir (0) */
  const char *arg3533 = "/rmdir";
  int ret3532;
  ret3532 = guestfs_mkdir (g, arg3533);
  if (ret3532 == -1)
    return -1;
  const char *arg3536 = "/rmdir";
  int ret3535;
  ret3535 = guestfs_rmdir (g, arg3536);
  if (ret3535 == -1)
    return -1;
  return 0;
}

static int test_rmdir_1_skip (void);
static int test_rmdir_1_perform (guestfs_h *);

static int
test_rmdir_1 (guestfs_h *g)
{
  if (test_rmdir_1_skip ()) {
    skipped ("test_rmdir_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_rmdir_1_perform (g);
}

static int
test_rmdir_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "rmdir") == NULL;
  str = getenv ("SKIP_TEST_RMDIR_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_RMDIR");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_rmdir_1_perform (guestfs_h *g)
{
  /* TestLastFail for rmdir (1) */
  const char *arg3539 = "/rmdir2";
  int ret3538;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3538 = guestfs_rmdir (g, arg3539);
  guestfs_pop_error_handler (g);
  if (ret3538 != -1)
    return -1;
  return 0;
}

static int test_rmdir_2_skip (void);
static int test_rmdir_2_perform (guestfs_h *);

static int
test_rmdir_2 (guestfs_h *g)
{
  if (test_rmdir_2_skip ()) {
    skipped ("test_rmdir_2", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_rmdir_2_perform (g);
}

static int
test_rmdir_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "rmdir") == NULL;
  str = getenv ("SKIP_TEST_RMDIR_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_RMDIR");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_rmdir_2_perform (guestfs_h *g)
{
  /* TestLastFail for rmdir (2) */
  const char *arg3542 = "/rmdir3";
  int ret3541;
  ret3541 = guestfs_mkdir (g, arg3542);
  if (ret3541 == -1)
    return -1;
  const char *arg3545 = "/rmdir3/new";
  int ret3544;
  ret3544 = guestfs_touch (g, arg3545);
  if (ret3544 == -1)
    return -1;
  const char *arg3548 = "/rmdir3/new";
  int ret3547;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3547 = guestfs_rmdir (g, arg3548);
  guestfs_pop_error_handler (g);
  if (ret3547 != -1)
    return -1;
  return 0;
}

static int test_scrub_device_0_skip (void);
static int test_scrub_device_0_perform (guestfs_h *);

static int
test_scrub_device_0 (guestfs_h *g)
{
  if (test_scrub_device_0_skip ()) {
    skipped ("test_scrub_device_0", "environment variable set");
    return 0;
  }

  const char *features3550[] = { "scrub", NULL };
  if (!guestfs_feature_available (g, (char **) features3550)) {
    skipped ("test_scrub_device_0", "group %s not available in daemon",
             features3550[0]);
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_scrub_device_0_perform (g);
}

static int
test_scrub_device_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "scrub_device") == NULL;
  str = getenv ("SKIP_TEST_SCRUB_DEVICE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SCRUB_DEVICE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_scrub_device_0_perform (guestfs_h *g)
{
  /* TestRun for scrub_device (0) */
  const char *arg3552 = "/dev/sdc";
  int ret3551;
  ret3551 = guestfs_scrub_device (g, arg3552);
  if (ret3551 == -1)
    return -1;
  return 0;
}

static int test_scrub_file_0_skip (void);
static int test_scrub_file_0_perform (guestfs_h *);

static int
test_scrub_file_0 (guestfs_h *g)
{
  if (test_scrub_file_0_skip ()) {
    skipped ("test_scrub_file_0", "environment variable set");
    return 0;
  }

  const char *features3554[] = { "scrub", NULL };
  if (!guestfs_feature_available (g, (char **) features3554)) {
    skipped ("test_scrub_file_0", "group %s not available in daemon",
             features3554[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_scrub_file_0_perform (g);
}

static int
test_scrub_file_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "scrub_file") == NULL;
  str = getenv ("SKIP_TEST_SCRUB_FILE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SCRUB_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_scrub_file_0_perform (guestfs_h *g)
{
  /* TestRun for scrub_file (0) */
  const char *arg3556 = "/scrub_file";
  const char *arg3557 = "content";
  size_t arg3557_size = 7;
  int ret3555;
  ret3555 = guestfs_write (g, arg3556, arg3557, arg3557_size);
  if (ret3555 == -1)
    return -1;
  const char *arg3560 = "/scrub_file";
  int ret3559;
  ret3559 = guestfs_scrub_file (g, arg3560);
  if (ret3559 == -1)
    return -1;
  return 0;
}

static int test_scrub_file_1_skip (void);
static int test_scrub_file_1_perform (guestfs_h *);

static int
test_scrub_file_1 (guestfs_h *g)
{
  if (test_scrub_file_1_skip ()) {
    skipped ("test_scrub_file_1", "environment variable set");
    return 0;
  }

  const char *features3562[] = { "scrub", NULL };
  if (!guestfs_feature_available (g, (char **) features3562)) {
    skipped ("test_scrub_file_1", "group %s not available in daemon",
             features3562[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_scrub_file_1_perform (g);
}

static int
test_scrub_file_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "scrub_file") == NULL;
  str = getenv ("SKIP_TEST_SCRUB_FILE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SCRUB_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_scrub_file_1_perform (guestfs_h *g)
{
  /* TestRun for scrub_file (1) */
  const char *arg3564 = "/scrub_file_2";
  const char *arg3565 = "content";
  size_t arg3565_size = 7;
  int ret3563;
  ret3563 = guestfs_write (g, arg3564, arg3565, arg3565_size);
  if (ret3563 == -1)
    return -1;
  const char *arg3568 = "/scrub_file_2";
  const char *arg3569 = "/scrub_file_2_link";
  int ret3567;
  ret3567 = guestfs_ln_s (g, arg3568, arg3569);
  if (ret3567 == -1)
    return -1;
  const char *arg3572 = "/scrub_file_2_link";
  int ret3571;
  ret3571 = guestfs_scrub_file (g, arg3572);
  if (ret3571 == -1)
    return -1;
  return 0;
}

static int test_scrub_file_2_skip (void);
static int test_scrub_file_2_perform (guestfs_h *);

static int
test_scrub_file_2 (guestfs_h *g)
{
  if (test_scrub_file_2_skip ()) {
    skipped ("test_scrub_file_2", "environment variable set");
    return 0;
  }

  const char *features3574[] = { "scrub", NULL };
  if (!guestfs_feature_available (g, (char **) features3574)) {
    skipped ("test_scrub_file_2", "group %s not available in daemon",
             features3574[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_scrub_file_2_perform (g);
}

static int
test_scrub_file_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "scrub_file") == NULL;
  str = getenv ("SKIP_TEST_SCRUB_FILE_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SCRUB_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_scrub_file_2_perform (guestfs_h *g)
{
  /* TestLastFail for scrub_file (2) */
  const char *arg3576 = "/scrub_file_3_notexisting";
  const char *arg3577 = "/scrub_file_3_link";
  int ret3575;
  ret3575 = guestfs_ln_s (g, arg3576, arg3577);
  if (ret3575 == -1)
    return -1;
  const char *arg3580 = "/scrub_file_3_link";
  int ret3579;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3579 = guestfs_scrub_file (g, arg3580);
  guestfs_pop_error_handler (g);
  if (ret3579 != -1)
    return -1;
  return 0;
}

static int test_scrub_file_3_skip (void);
static int test_scrub_file_3_perform (guestfs_h *);

static int
test_scrub_file_3 (guestfs_h *g)
{
  if (test_scrub_file_3_skip ()) {
    skipped ("test_scrub_file_3", "environment variable set");
    return 0;
  }

  const char *features3582[] = { "scrub", NULL };
  if (!guestfs_feature_available (g, (char **) features3582)) {
    skipped ("test_scrub_file_3", "group %s not available in daemon",
             features3582[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_scrub_file_3_perform (g);
}

static int
test_scrub_file_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "scrub_file") == NULL;
  str = getenv ("SKIP_TEST_SCRUB_FILE_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SCRUB_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_scrub_file_3_perform (guestfs_h *g)
{
  /* TestLastFail for scrub_file (3) */
  const char *arg3584 = "/scrub_file_4";
  const char *arg3585 = "content";
  size_t arg3585_size = 7;
  int ret3583;
  ret3583 = guestfs_write (g, arg3584, arg3585, arg3585_size);
  if (ret3583 == -1)
    return -1;
  const char *arg3588 = "../sysroot/scrub_file_4";
  const char *arg3589 = "/scrub_file_4_link";
  int ret3587;
  ret3587 = guestfs_ln_s (g, arg3588, arg3589);
  if (ret3587 == -1)
    return -1;
  const char *arg3592 = "/scrub_file_4_link";
  int ret3591;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3591 = guestfs_scrub_file (g, arg3592);
  guestfs_pop_error_handler (g);
  if (ret3591 != -1)
    return -1;
  return 0;
}

static int test_set_e2label_0_skip (void);
static int test_set_e2label_0_perform (guestfs_h *);

static int
test_set_e2label_0 (guestfs_h *g)
{
  if (test_set_e2label_0_skip ()) {
    skipped ("test_set_e2label_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_set_e2label_0_perform (g);
}

static int
test_set_e2label_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "set_e2label") == NULL;
  str = getenv ("SKIP_TEST_SET_E2LABEL_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SET_E2LABEL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_set_e2label_0_perform (guestfs_h *g)
{
  /* TestResultString for set_e2label (0) */
  const char *arg3595 = "/dev/sda1";
  const char *arg3596 = "testlabel";
  int ret3594;
  ret3594 = guestfs_set_e2label (g, arg3595, arg3596);
  if (ret3594 == -1)
    return -1;
  const char *arg3598 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2label (g, arg3598);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "testlabel")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_set_e2label_0", "get_e2label", "testlabel", ret);
    return -1;
  }
  return 0;
}

static int test_set_e2uuid_0_skip (void);
static int test_set_e2uuid_0_perform (guestfs_h *);

static int
test_set_e2uuid_0 (guestfs_h *g)
{
  if (test_set_e2uuid_0_skip ()) {
    skipped ("test_set_e2uuid_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_set_e2uuid_0_perform (g);
}

static int
test_set_e2uuid_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "set_e2uuid") == NULL;
  str = getenv ("SKIP_TEST_SET_E2UUID_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SET_E2UUID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_set_e2uuid_0_perform (guestfs_h *g)
{
  /* TestResultString for set_e2uuid (0) */
  const char *arg3601 = "/dev/sda1";
  const char *arg3602 = "534e4f31-92b6-7d0f-4490-a30ac7f0ccce";
  int ret3600;
  ret3600 = guestfs_set_e2uuid (g, arg3601, arg3602);
  if (ret3600 == -1)
    return -1;
  const char *arg3604 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2uuid (g, arg3604);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "534e4f31-92b6-7d0f-4490-a30ac7f0ccce")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_set_e2uuid_0", "get_e2uuid", "534e4f31-92b6-7d0f-4490-a30ac7f0ccce", ret);
    return -1;
  }
  return 0;
}

static int test_set_e2uuid_1_skip (void);
static int test_set_e2uuid_1_perform (guestfs_h *);

static int
test_set_e2uuid_1 (guestfs_h *g)
{
  if (test_set_e2uuid_1_skip ()) {
    skipped ("test_set_e2uuid_1", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_set_e2uuid_1_perform (g);
}

static int
test_set_e2uuid_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "set_e2uuid") == NULL;
  str = getenv ("SKIP_TEST_SET_E2UUID_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SET_E2UUID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_set_e2uuid_1_perform (guestfs_h *g)
{
  /* TestResultString for set_e2uuid (1) */
  const char *arg3607 = "/dev/sda1";
  const char *arg3608 = "clear";
  int ret3606;
  ret3606 = guestfs_set_e2uuid (g, arg3607, arg3608);
  if (ret3606 == -1)
    return -1;
  const char *arg3610 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2uuid (g, arg3610);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_set_e2uuid_1", "get_e2uuid", "", ret);
    return -1;
  }
  return 0;
}

static int test_set_e2uuid_2_skip (void);
static int test_set_e2uuid_2_perform (guestfs_h *);

static int
test_set_e2uuid_2 (guestfs_h *g)
{
  if (test_set_e2uuid_2_skip ()) {
    skipped ("test_set_e2uuid_2", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_set_e2uuid_2_perform (g);
}

static int
test_set_e2uuid_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "set_e2uuid") == NULL;
  str = getenv ("SKIP_TEST_SET_E2UUID_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SET_E2UUID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_set_e2uuid_2_perform (guestfs_h *g)
{
  /* TestRun for set_e2uuid (2) */
  const char *arg3613 = "/dev/sda1";
  const char *arg3614 = "random";
  int ret3612;
  ret3612 = guestfs_set_e2uuid (g, arg3613, arg3614);
  if (ret3612 == -1)
    return -1;
  return 0;
}

static int test_set_e2uuid_3_skip (void);
static int test_set_e2uuid_3_perform (guestfs_h *);

static int
test_set_e2uuid_3 (guestfs_h *g)
{
  if (test_set_e2uuid_3_skip ()) {
    skipped ("test_set_e2uuid_3", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_set_e2uuid_3_perform (g);
}

static int
test_set_e2uuid_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "set_e2uuid") == NULL;
  str = getenv ("SKIP_TEST_SET_E2UUID_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SET_E2UUID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_set_e2uuid_3_perform (guestfs_h *g)
{
  /* TestRun for set_e2uuid (3) */
  const char *arg3617 = "/dev/sda1";
  const char *arg3618 = "time";
  int ret3616;
  ret3616 = guestfs_set_e2uuid (g, arg3617, arg3618);
  if (ret3616 == -1)
    return -1;
  return 0;
}

static int test_set_label_0_skip (void);
static int test_set_label_0_perform (guestfs_h *);

static int
test_set_label_0 (guestfs_h *g)
{
  if (test_set_label_0_skip ()) {
    skipped ("test_set_label_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_set_label_0_perform (g);
}

static int
test_set_label_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "set_label") == NULL;
  str = getenv ("SKIP_TEST_SET_LABEL_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SET_LABEL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_set_label_0_perform (guestfs_h *g)
{
  /* TestResultString for set_label (0) */
  const char *arg3621 = "/dev/sda1";
  const char *arg3622 = "testlabel";
  int ret3620;
  ret3620 = guestfs_set_label (g, arg3621, arg3622);
  if (ret3620 == -1)
    return -1;
  const char *arg3624 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg3624);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "testlabel")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_set_label_0", "vfs_label", "testlabel", ret);
    return -1;
  }
  return 0;
}

static int test_set_label_1_skip (void);
static int test_set_label_1_perform (guestfs_h *);

static int
test_set_label_1 (guestfs_h *g)
{
  if (test_set_label_1_skip ()) {
    skipped ("test_set_label_1", "environment variable set");
    return 0;
  }

  const char *features3626[] = { "ntfs3g", NULL };
  if (!guestfs_feature_available (g, (char **) features3626)) {
    skipped ("test_set_label_1", "group %s not available in daemon",
             features3626[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_set_label_1_perform (g);
}

static int
test_set_label_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "set_label") == NULL;
  str = getenv ("SKIP_TEST_SET_LABEL_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SET_LABEL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_set_label_1_perform (guestfs_h *g)
{
  /* TestResultString for set_label (1) */
  const char *arg3628 = "ntfs";
  const char *arg3629 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs3630;
  optargs3630.bitmask = UINT64_C(0x0);
  int ret3627;
  ret3627 = guestfs_mkfs_opts_argv (g, arg3628, arg3629, &optargs3630);
  if (ret3627 == -1)
    return -1;
  const char *arg3632 = "/dev/sda1";
  const char *arg3633 = "testlabel2";
  int ret3631;
  ret3631 = guestfs_set_label (g, arg3632, arg3633);
  if (ret3631 == -1)
    return -1;
  const char *arg3635 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg3635);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "testlabel2")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_set_label_1", "vfs_label", "testlabel2", ret);
    return -1;
  }
  return 0;
}

static int test_set_label_2_skip (void);
static int test_set_label_2_perform (guestfs_h *);

static int
test_set_label_2 (guestfs_h *g)
{
  if (test_set_label_2_skip ()) {
    skipped ("test_set_label_2", "environment variable set");
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_set_label_2_perform (g);
}

static int
test_set_label_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "set_label") == NULL;
  str = getenv ("SKIP_TEST_SET_LABEL_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SET_LABEL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_set_label_2_perform (guestfs_h *g)
{
  /* TestLastFail for set_label (2) */
  const char *arg3638 = "/dev/sda1";
  int ret3637;
  ret3637 = guestfs_zero (g, arg3638);
  if (ret3637 == -1)
    return -1;
  const char *arg3641 = "/dev/sda1";
  const char *arg3642 = "testlabel2";
  int ret3640;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3640 = guestfs_set_label (g, arg3641, arg3642);
  guestfs_pop_error_handler (g);
  if (ret3640 != -1)
    return -1;
  return 0;
}

static int test_set_trace_0_skip (void);
static int test_set_trace_0_perform (guestfs_h *);

static int
test_set_trace_0 (guestfs_h *g)
{
  if (test_set_trace_0_skip ()) {
    skipped ("test_set_trace_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_set_trace_0_perform (g);
}

static int
test_set_trace_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "set_trace") == NULL;
  str = getenv ("SKIP_TEST_SET_TRACE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SET_TRACE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_set_trace_0_perform (guestfs_h *g)
{
  /* TestResultFalse for set_trace (0) */
  int ret3644;
  ret3644 = guestfs_set_trace (g, 0);
  if (ret3644 == -1)
    return -1;
  int ret;
  ret = guestfs_get_trace (g);
  if (ret == -1)
    return -1;
  if (ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'false' but it returned 'true'\n",
             "test_set_trace_0", "get_trace");
    return -1;
  }
  return 0;
}

static int test_set_uuid_0_skip (void);
static int test_set_uuid_0_perform (guestfs_h *);

static int
test_set_uuid_0 (guestfs_h *g)
{
  if (test_set_uuid_0_skip ()) {
    skipped ("test_set_uuid_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_set_uuid_0_perform (g);
}

static int
test_set_uuid_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "set_uuid") == NULL;
  str = getenv ("SKIP_TEST_SET_UUID_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SET_UUID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_set_uuid_0_perform (guestfs_h *g)
{
  /* TestResultString for set_uuid (0) */
  const char *arg3649 = "/dev/sda1";
  const char *arg3650 = "534e4f31-92b6-7d0f-4490-a30ac7f0ccce";
  int ret3648;
  ret3648 = guestfs_set_uuid (g, arg3649, arg3650);
  if (ret3648 == -1)
    return -1;
  const char *arg3652 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_uuid (g, arg3652);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "534e4f31-92b6-7d0f-4490-a30ac7f0ccce")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_set_uuid_0", "vfs_uuid", "534e4f31-92b6-7d0f-4490-a30ac7f0ccce", ret);
    return -1;
  }
  return 0;
}

static int test_set_uuid_random_0_skip (void);
static int test_set_uuid_random_0_perform (guestfs_h *);

static int
test_set_uuid_random_0 (guestfs_h *g)
{
  if (test_set_uuid_random_0_skip ()) {
    skipped ("test_set_uuid_random_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_set_uuid_random_0_perform (g);
}

static int
test_set_uuid_random_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "set_uuid_random") == NULL;
  str = getenv ("SKIP_TEST_SET_UUID_RANDOM_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SET_UUID_RANDOM");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_set_uuid_random_0_perform (guestfs_h *g)
{
  /* TestRun for set_uuid_random (0) */
  const char *arg3655 = "/dev/sda1";
  int ret3654;
  ret3654 = guestfs_set_uuid_random (g, arg3655);
  if (ret3654 == -1)
    return -1;
  return 0;
}

static int test_sleep_0_skip (void);
static int test_sleep_0_perform (guestfs_h *);

static int
test_sleep_0 (guestfs_h *g)
{
  if (test_sleep_0_skip ()) {
    skipped ("test_sleep_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_sleep_0_perform (g);
}

static int
test_sleep_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "sleep") == NULL;
  str = getenv ("SKIP_TEST_SLEEP_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SLEEP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_sleep_0_perform (guestfs_h *g)
{
  /* TestRun for sleep (0) */
  int ret3657;
  ret3657 = guestfs_sleep (g, 1);
  if (ret3657 == -1)
    return -1;
  return 0;
}

static int test_stat_0_skip (void);
static int test_stat_0_perform (guestfs_h *);

static int
test_stat_0 (guestfs_h *g)
{
  if (test_stat_0_skip ()) {
    skipped ("test_stat_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_stat_0_perform (g);
}

static int
test_stat_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "stat") == NULL;
  str = getenv ("SKIP_TEST_STAT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_STAT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_stat_0_perform (guestfs_h *g)
{
  /* TestResult for stat (0) */
  const char *arg3660 = "/empty";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3660);
  if (ret == NULL)
      return -1;
  if (! (ret->size == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_stat_0", "ret->size == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_statns_0_skip (void);
static int test_statns_0_perform (guestfs_h *);

static int
test_statns_0 (guestfs_h *g)
{
  if (test_statns_0_skip ()) {
    skipped ("test_statns_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_statns_0_perform (g);
}

static int
test_statns_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "statns") == NULL;
  str = getenv ("SKIP_TEST_STATNS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_STATNS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_statns_0_perform (guestfs_h *g)
{
  /* TestResult for statns (0) */
  const char *arg3662 = "/empty";
  CLEANUP_FREE_STATNS struct guestfs_statns *ret;
  ret = guestfs_statns (g, arg3662);
  if (ret == NULL)
      return -1;
  if (! (ret->st_size == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_statns_0", "ret->st_size == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_statvfs_0_skip (void);
static int test_statvfs_0_perform (guestfs_h *);

static int
test_statvfs_0 (guestfs_h *g)
{
  if (test_statvfs_0_skip ()) {
    skipped ("test_statvfs_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_statvfs_0_perform (g);
}

static int
test_statvfs_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "statvfs") == NULL;
  str = getenv ("SKIP_TEST_STATVFS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_STATVFS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_statvfs_0_perform (guestfs_h *g)
{
  /* TestResult for statvfs (0) */
  const char *arg3664 = "/";
  CLEANUP_FREE_STATVFS struct guestfs_statvfs *ret;
  ret = guestfs_statvfs (g, arg3664);
  if (ret == NULL)
      return -1;
  if (! (ret->namemax == 255)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_statvfs_0", "ret->namemax == 255");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_strings_0_skip (void);
static int test_strings_0_perform (guestfs_h *);

static int
test_strings_0 (guestfs_h *g)
{
  if (test_strings_0_skip ()) {
    skipped ("test_strings_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_strings_0_perform (g);
}

static int
test_strings_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "strings") == NULL;
  str = getenv ("SKIP_TEST_STRINGS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_STRINGS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_strings_0_perform (guestfs_h *g)
{
  /* TestResult for strings (0) */
  const char *arg3666 = "/known-5";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_strings (g, arg3666);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "abcdefghi", "jklmnopqr"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_strings_0", "is_string_list (ret, 2, \"abcdefghi\", \"jklmnopqr\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_strings_1_skip (void);
static int test_strings_1_perform (guestfs_h *);

static int
test_strings_1 (guestfs_h *g)
{
  if (test_strings_1_skip ()) {
    skipped ("test_strings_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_strings_1_perform (g);
}

static int
test_strings_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "strings") == NULL;
  str = getenv ("SKIP_TEST_STRINGS_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_STRINGS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_strings_1_perform (guestfs_h *g)
{
  /* TestResult for strings (1) */
  const char *arg3668 = "/empty";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_strings (g, arg3668);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_strings_1", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_strings_2_skip (void);
static int test_strings_2_perform (guestfs_h *);

static int
test_strings_2 (guestfs_h *g)
{
  if (test_strings_2_skip ()) {
    skipped ("test_strings_2", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_strings_2_perform (g);
}

static int
test_strings_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "strings") == NULL;
  str = getenv ("SKIP_TEST_STRINGS_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_STRINGS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_strings_2_perform (guestfs_h *g)
{
  /* TestRun for strings (2) */
  const char *arg3671 = "/abssymlink";
  CLEANUP_FREE_STRING_LIST char **ret3670;
  ret3670 = guestfs_strings (g, arg3671);
  if (ret3670 == NULL)
      return -1;
  return 0;
}

static int test_strings_e_0_skip (void);
static int test_strings_e_0_perform (guestfs_h *);

static int
test_strings_e_0 (guestfs_h *g)
{
  if (test_strings_e_0_skip ()) {
    skipped ("test_strings_e_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_strings_e_0_perform (g);
}

static int
test_strings_e_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "strings_e") == NULL;
  str = getenv ("SKIP_TEST_STRINGS_E_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_STRINGS_E");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_strings_e_0_perform (guestfs_h *g)
{
  /* TestResult for strings_e (0) */
  const char *arg3673 = "b";
  const char *arg3674 = "/known-5";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_strings_e (g, arg3673, arg3674);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_strings_e_0", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_strings_e_1_skip (void);
static int test_strings_e_1_perform (guestfs_h *);

static int
test_strings_e_1 (guestfs_h *g)
{
  if (test_strings_e_1_skip ()) {
    skipped ("test_strings_e_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_strings_e_1_perform (g);
}

static int
test_strings_e_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "strings_e") == NULL;
  str = getenv ("SKIP_TEST_STRINGS_E_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_STRINGS_E");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_strings_e_1_perform (guestfs_h *g)
{
  /* TestResult for strings_e (1) */
  const char *arg3676 = "/strings_e";
  const char *arg3677 = "\0h\0e\0l\0l\0o\0\n\0w\0o\0r\0l\0d\0\n";
  size_t arg3677_size = 24;
  int ret1;
  ret1 = guestfs_write (g, arg3676, arg3677, arg3677_size);
  if (ret1 == -1)
    return -1;
  const char *arg3679 = "b";
  const char *arg3680 = "/strings_e";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_strings_e (g, arg3679, arg3680);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "hello", "world"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_strings_e_1", "is_string_list (ret, 2, \"hello\", \"world\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_swapon_device_0_skip (void);
static int test_swapon_device_0_perform (guestfs_h *);

static int
test_swapon_device_0 (guestfs_h *g)
{
  if (test_swapon_device_0_skip ()) {
    skipped ("test_swapon_device_0", "environment variable set");
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_swapon_device_0_perform (g);
}

static int
test_swapon_device_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "swapon_device") == NULL;
  str = getenv ("SKIP_TEST_SWAPON_DEVICE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SWAPON_DEVICE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_swapon_device_0_perform (guestfs_h *g)
{
  /* TestRun for swapon_device (0) */
  const char *arg3683 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs3684;
  optargs3684.bitmask = UINT64_C(0x0);
  int ret3682;
  ret3682 = guestfs_mkswap_opts_argv (g, arg3683, &optargs3684);
  if (ret3682 == -1)
    return -1;
  const char *arg3686 = "/dev/sda1";
  int ret3685;
  ret3685 = guestfs_swapon_device (g, arg3686);
  if (ret3685 == -1)
    return -1;
  const char *arg3689 = "/dev/sda1";
  int ret3688;
  ret3688 = guestfs_swapoff_device (g, arg3689);
  if (ret3688 == -1)
    return -1;
  return 0;
}

static int test_swapon_file_0_skip (void);
static int test_swapon_file_0_perform (guestfs_h *);

static int
test_swapon_file_0 (guestfs_h *g)
{
  if (test_swapon_file_0_skip ()) {
    skipped ("test_swapon_file_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_swapon_file_0_perform (g);
}

static int
test_swapon_file_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "swapon_file") == NULL;
  str = getenv ("SKIP_TEST_SWAPON_FILE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SWAPON_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_swapon_file_0_perform (guestfs_h *g)
{
  /* TestRun for swapon_file (0) */
  const char *arg3692 = "/swapon_file";
  int ret3691;
  ret3691 = guestfs_fallocate (g, arg3692, 8388608);
  if (ret3691 == -1)
    return -1;
  const char *arg3696 = "/swapon_file";
  int ret3695;
  ret3695 = guestfs_mkswap_file (g, arg3696);
  if (ret3695 == -1)
    return -1;
  const char *arg3699 = "/swapon_file";
  int ret3698;
  ret3698 = guestfs_swapon_file (g, arg3699);
  if (ret3698 == -1)
    return -1;
  const char *arg3702 = "/swapon_file";
  int ret3701;
  ret3701 = guestfs_swapoff_file (g, arg3702);
  if (ret3701 == -1)
    return -1;
  const char *arg3705 = "/swapon_file";
  int ret3704;
  ret3704 = guestfs_rm (g, arg3705);
  if (ret3704 == -1)
    return -1;
  return 0;
}

static int test_swapon_label_0_skip (void);
static int test_swapon_label_0_perform (guestfs_h *);

static int
test_swapon_label_0 (guestfs_h *g)
{
  if (test_swapon_label_0_skip ()) {
    skipped ("test_swapon_label_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_swapon_label_0_perform (g);
}

static int
test_swapon_label_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "swapon_label") == NULL;
  str = getenv ("SKIP_TEST_SWAPON_LABEL_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SWAPON_LABEL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_swapon_label_0_perform (guestfs_h *g)
{
  /* TestRun for swapon_label (0) */
  const char *arg3708 = "/dev/sda";
  const char *arg3709 = "mbr";
  int ret3707;
  ret3707 = guestfs_part_disk (g, arg3708, arg3709);
  if (ret3707 == -1)
    return -1;
  const char *arg3712 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs3713;
  optargs3713.label = "swapit";
  optargs3713.bitmask = UINT64_C(0x1);
  int ret3711;
  ret3711 = guestfs_mkswap_opts_argv (g, arg3712, &optargs3713);
  if (ret3711 == -1)
    return -1;
  const char *arg3715 = "swapit";
  int ret3714;
  ret3714 = guestfs_swapon_label (g, arg3715);
  if (ret3714 == -1)
    return -1;
  const char *arg3718 = "swapit";
  int ret3717;
  ret3717 = guestfs_swapoff_label (g, arg3718);
  if (ret3717 == -1)
    return -1;
  const char *arg3721 = "/dev/sda";
  int ret3720;
  ret3720 = guestfs_zero (g, arg3721);
  if (ret3720 == -1)
    return -1;
  const char *arg3724 = "/dev/sda";
  int ret3723;
  ret3723 = guestfs_blockdev_rereadpt (g, arg3724);
  if (ret3723 == -1)
    return -1;
  return 0;
}

static int test_swapon_uuid_0_skip (void);
static int test_swapon_uuid_0_perform (guestfs_h *);

static int
test_swapon_uuid_0 (guestfs_h *g)
{
  if (test_swapon_uuid_0_skip ()) {
    skipped ("test_swapon_uuid_0", "environment variable set");
    return 0;
  }

  const char *features3726[] = { "linuxfsuuid", NULL };
  if (!guestfs_feature_available (g, (char **) features3726)) {
    skipped ("test_swapon_uuid_0", "group %s not available in daemon",
             features3726[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_swapon_uuid_0_perform (g);
}

static int
test_swapon_uuid_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "swapon_uuid") == NULL;
  str = getenv ("SKIP_TEST_SWAPON_UUID_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SWAPON_UUID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_swapon_uuid_0_perform (guestfs_h *g)
{
  /* TestRun for swapon_uuid (0) */
  const char *arg3728 = "/dev/sdc";
  struct guestfs_mkswap_opts_argv optargs3729;
  optargs3729.uuid = "534e4f31-92b6-7d0f-4490-a30ac7f0ccce";
  optargs3729.bitmask = UINT64_C(0x2);
  int ret3727;
  ret3727 = guestfs_mkswap_opts_argv (g, arg3728, &optargs3729);
  if (ret3727 == -1)
    return -1;
  const char *arg3731 = "534e4f31-92b6-7d0f-4490-a30ac7f0ccce";
  int ret3730;
  ret3730 = guestfs_swapon_uuid (g, arg3731);
  if (ret3730 == -1)
    return -1;
  const char *arg3734 = "534e4f31-92b6-7d0f-4490-a30ac7f0ccce";
  int ret3733;
  ret3733 = guestfs_swapoff_uuid (g, arg3734);
  if (ret3733 == -1)
    return -1;
  return 0;
}

static int test_sync_0_skip (void);
static int test_sync_0_perform (guestfs_h *);

static int
test_sync_0 (guestfs_h *g)
{
  if (test_sync_0_skip ()) {
    skipped ("test_sync_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_sync_0_perform (g);
}

static int
test_sync_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "sync") == NULL;
  str = getenv ("SKIP_TEST_SYNC_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_SYNC");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_sync_0_perform (guestfs_h *g)
{
  /* TestRun for sync (0) */
  int ret3736;
  ret3736 = guestfs_sync (g);
  if (ret3736 == -1)
    return -1;
  return 0;
}

static int test_tail_0_skip (void);
static int test_tail_0_perform (guestfs_h *);

static int
test_tail_0 (guestfs_h *g)
{
  if (test_tail_0_skip ()) {
    skipped ("test_tail_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_tail_0_perform (g);
}

static int
test_tail_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "tail") == NULL;
  str = getenv ("SKIP_TEST_TAIL_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_TAIL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_tail_0_perform (guestfs_h *g)
{
  /* TestResult for tail (0) */
  const char *arg3738 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tail (g, arg3738);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 10, "9990abcdefghijklmnopqrstuvwxyz", "9991abcdefghijklmnopqrstuvwxyz", "9992abcdefghijklmnopqrstuvwxyz", "9993abcdefghijklmnopqrstuvwxyz", "9994abcdefghijklmnopqrstuvwxyz", "9995abcdefghijklmnopqrstuvwxyz", "9996abcdefghijklmnopqrstuvwxyz", "9997abcdefghijklmnopqrstuvwxyz", "9998abcdefghijklmnopqrstuvwxyz", "9999abcdefghijklmnopqrstuvwxyz"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_tail_0", "is_string_list (ret, 10, \"9990abcdefghijklmnopqrstuvwxyz\", \"9991abcdefghijklmnopqrstuvwxyz\", \"9992abcdefghijklmnopqrstuvwxyz\", \"9993abcdefghijklmnopqrstuvwxyz\", \"9994abcdefghijklmnopqrstuvwxyz\", \"9995abcdefghijklmnopqrstuvwxyz\", \"9996abcdefghijklmnopqrstuvwxyz\", \"9997abcdefghijklmnopqrstuvwxyz\", \"9998abcdefghijklmnopqrstuvwxyz\", \"9999abcdefghijklmnopqrstuvwxyz\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_tail_n_0_skip (void);
static int test_tail_n_0_perform (guestfs_h *);

static int
test_tail_n_0 (guestfs_h *g)
{
  if (test_tail_n_0_skip ()) {
    skipped ("test_tail_n_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_tail_n_0_perform (g);
}

static int
test_tail_n_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "tail_n") == NULL;
  str = getenv ("SKIP_TEST_TAIL_N_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_TAIL_N");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_tail_n_0_perform (guestfs_h *g)
{
  /* TestResult for tail_n (0) */
  const char *arg3741 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tail_n (g, 3, arg3741);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "9997abcdefghijklmnopqrstuvwxyz", "9998abcdefghijklmnopqrstuvwxyz", "9999abcdefghijklmnopqrstuvwxyz"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_tail_n_0", "is_string_list (ret, 3, \"9997abcdefghijklmnopqrstuvwxyz\", \"9998abcdefghijklmnopqrstuvwxyz\", \"9999abcdefghijklmnopqrstuvwxyz\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_tail_n_1_skip (void);
static int test_tail_n_1_perform (guestfs_h *);

static int
test_tail_n_1 (guestfs_h *g)
{
  if (test_tail_n_1_skip ()) {
    skipped ("test_tail_n_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_tail_n_1_perform (g);
}

static int
test_tail_n_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "tail_n") == NULL;
  str = getenv ("SKIP_TEST_TAIL_N_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_TAIL_N");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_tail_n_1_perform (guestfs_h *g)
{
  /* TestResult for tail_n (1) */
  const char *arg3744 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tail_n (g, -9998, arg3744);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "9997abcdefghijklmnopqrstuvwxyz", "9998abcdefghijklmnopqrstuvwxyz", "9999abcdefghijklmnopqrstuvwxyz"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_tail_n_1", "is_string_list (ret, 3, \"9997abcdefghijklmnopqrstuvwxyz\", \"9998abcdefghijklmnopqrstuvwxyz\", \"9999abcdefghijklmnopqrstuvwxyz\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_tail_n_2_skip (void);
static int test_tail_n_2_perform (guestfs_h *);

static int
test_tail_n_2 (guestfs_h *g)
{
  if (test_tail_n_2_skip ()) {
    skipped ("test_tail_n_2", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_tail_n_2_perform (g);
}

static int
test_tail_n_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "tail_n") == NULL;
  str = getenv ("SKIP_TEST_TAIL_N_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_TAIL_N");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_tail_n_2_perform (guestfs_h *g)
{
  /* TestResult for tail_n (2) */
  const char *arg3747 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tail_n (g, 0, arg3747);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_tail_n_2", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_tar_in_0_skip (void);
static int test_tar_in_0_perform (guestfs_h *);

static int
test_tar_in_0 (guestfs_h *g)
{
  if (test_tar_in_0_skip ()) {
    skipped ("test_tar_in_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_tar_in_0_perform (g);
}

static int
test_tar_in_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "tar_in") == NULL;
  str = getenv ("SKIP_TEST_TAR_IN_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_TAR_IN");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_tar_in_0_perform (guestfs_h *g)
{
  /* TestResultString for tar_in (0) */
  const char *arg3750 = "/tar_in";
  int ret3749;
  ret3749 = guestfs_mkdir (g, arg3750);
  if (ret3749 == -1)
    return -1;
  CLEANUP_FREE char *arg3753 = substitute_srcdir ("$srcdir/../test-data/files/helloworld.tar");
  const char *arg3754 = "/tar_in";
  struct guestfs_tar_in_opts_argv optargs3755;
  optargs3755.bitmask = UINT64_C(0x0);
  int ret3752;
  ret3752 = guestfs_tar_in_opts_argv (g, arg3753, arg3754, &optargs3755);
  if (ret3752 == -1)
    return -1;
  const char *arg3756 = "/tar_in/hello";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3756);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "hello\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_tar_in_0", "cat", "hello\n", ret);
    return -1;
  }
  return 0;
}

static int test_tar_in_1_skip (void);
static int test_tar_in_1_perform (guestfs_h *);

static int
test_tar_in_1 (guestfs_h *g)
{
  if (test_tar_in_1_skip ()) {
    skipped ("test_tar_in_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_tar_in_1_perform (g);
}

static int
test_tar_in_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "tar_in") == NULL;
  str = getenv ("SKIP_TEST_TAR_IN_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_TAR_IN");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_tar_in_1_perform (guestfs_h *g)
{
  /* TestResultString for tar_in (1) */
  const char *arg3759 = "/tar_in_gz";
  int ret3758;
  ret3758 = guestfs_mkdir (g, arg3759);
  if (ret3758 == -1)
    return -1;
  CLEANUP_FREE char *arg3762 = substitute_srcdir ("$srcdir/../test-data/files/helloworld.tar.gz");
  const char *arg3763 = "/tar_in_gz";
  struct guestfs_tar_in_opts_argv optargs3764;
  optargs3764.compress = "gzip";
  optargs3764.bitmask = UINT64_C(0x1);
  int ret3761;
  ret3761 = guestfs_tar_in_opts_argv (g, arg3762, arg3763, &optargs3764);
  if (ret3761 == -1)
    return -1;
  const char *arg3765 = "/tar_in_gz/hello";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3765);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "hello\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_tar_in_1", "cat", "hello\n", ret);
    return -1;
  }
  return 0;
}

static int test_tar_in_2_skip (void);
static int test_tar_in_2_perform (guestfs_h *);

static int
test_tar_in_2 (guestfs_h *g)
{
  if (test_tar_in_2_skip ()) {
    skipped ("test_tar_in_2", "environment variable set");
    return 0;
  }

  const char *features3767[] = { "xz", NULL };
  if (!guestfs_feature_available (g, (char **) features3767)) {
    skipped ("test_tar_in_2", "group %s not available in daemon",
             features3767[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_tar_in_2_perform (g);
}

static int
test_tar_in_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "tar_in") == NULL;
  str = getenv ("SKIP_TEST_TAR_IN_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_TAR_IN");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_tar_in_2_perform (guestfs_h *g)
{
  /* TestResultString for tar_in (2) */
  const char *arg3769 = "/tar_in_xz";
  int ret3768;
  ret3768 = guestfs_mkdir (g, arg3769);
  if (ret3768 == -1)
    return -1;
  CLEANUP_FREE char *arg3772 = substitute_srcdir ("$srcdir/../test-data/files/helloworld.tar.xz");
  const char *arg3773 = "/tar_in_xz";
  struct guestfs_tar_in_opts_argv optargs3774;
  optargs3774.compress = "xz";
  optargs3774.bitmask = UINT64_C(0x1);
  int ret3771;
  ret3771 = guestfs_tar_in_opts_argv (g, arg3772, arg3773, &optargs3774);
  if (ret3771 == -1)
    return -1;
  const char *arg3775 = "/tar_in_xz/hello";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3775);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "hello\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_tar_in_2", "cat", "hello\n", ret);
    return -1;
  }
  return 0;
}

static int test_tgz_in_0_skip (void);
static int test_tgz_in_0_perform (guestfs_h *);

static int
test_tgz_in_0 (guestfs_h *g)
{
  if (test_tgz_in_0_skip ()) {
    skipped ("test_tgz_in_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_tgz_in_0_perform (g);
}

static int
test_tgz_in_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "tgz_in") == NULL;
  str = getenv ("SKIP_TEST_TGZ_IN_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_TGZ_IN");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_tgz_in_0_perform (guestfs_h *g)
{
  /* TestResultString for tgz_in (0) */
  const char *arg3778 = "/tgz_in";
  int ret3777;
  ret3777 = guestfs_mkdir (g, arg3778);
  if (ret3777 == -1)
    return -1;
  CLEANUP_FREE char *arg3781 = substitute_srcdir ("$srcdir/../test-data/files/helloworld.tar.gz");
  const char *arg3782 = "/tgz_in";
  int ret3780;
  ret3780 = guestfs_tgz_in (g, arg3781, arg3782);
  if (ret3780 == -1)
    return -1;
  const char *arg3784 = "/tgz_in/hello";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3784);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "hello\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_tgz_in_0", "cat", "hello\n", ret);
    return -1;
  }
  return 0;
}

static int test_touch_0_skip (void);
static int test_touch_0_perform (guestfs_h *);

static int
test_touch_0 (guestfs_h *g)
{
  if (test_touch_0_skip ()) {
    skipped ("test_touch_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_touch_0_perform (g);
}

static int
test_touch_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "touch") == NULL;
  str = getenv ("SKIP_TEST_TOUCH_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_TOUCH");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_touch_0_perform (guestfs_h *g)
{
  /* TestResultTrue for touch (0) */
  const char *arg3787 = "/touch";
  int ret3786;
  ret3786 = guestfs_touch (g, arg3787);
  if (ret3786 == -1)
    return -1;
  const char *arg3789 = "/touch";
  int ret;
  ret = guestfs_exists (g, arg3789);
  if (ret == -1)
    return -1;
  if (!ret) {
    fprintf (stderr, "%s: test failed: expected last command %s to return 'true' but it returned 'false'\n",
             "test_touch_0", "exists");
    return -1;
  }
  return 0;
}

static int test_truncate_0_skip (void);
static int test_truncate_0_perform (guestfs_h *);

static int
test_truncate_0 (guestfs_h *g)
{
  if (test_truncate_0_skip ()) {
    skipped ("test_truncate_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_truncate_0_perform (g);
}

static int
test_truncate_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "truncate") == NULL;
  str = getenv ("SKIP_TEST_TRUNCATE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_TRUNCATE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_truncate_0_perform (guestfs_h *g)
{
  /* TestResult for truncate (0) */
  const char *arg3791 = "/truncate";
  const char *arg3792 = "some stuff so size is not zero";
  size_t arg3792_size = 30;
  int ret2;
  ret2 = guestfs_write (g, arg3791, arg3792, arg3792_size);
  if (ret2 == -1)
    return -1;
  const char *arg3794 = "/truncate";
  int ret1;
  ret1 = guestfs_truncate (g, arg3794);
  if (ret1 == -1)
    return -1;
  const char *arg3796 = "/truncate";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3796);
  if (ret == NULL)
      return -1;
  if (! (ret->size == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_truncate_0", "ret->size == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_truncate_size_0_skip (void);
static int test_truncate_size_0_perform (guestfs_h *);

static int
test_truncate_size_0 (guestfs_h *g)
{
  if (test_truncate_size_0_skip ()) {
    skipped ("test_truncate_size_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_truncate_size_0_perform (g);
}

static int
test_truncate_size_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "truncate_size") == NULL;
  str = getenv ("SKIP_TEST_TRUNCATE_SIZE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_TRUNCATE_SIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_truncate_size_0_perform (guestfs_h *g)
{
  /* TestResult for truncate_size (0) */
  const char *arg3798 = "/truncate_size";
  int ret2;
  ret2 = guestfs_touch (g, arg3798);
  if (ret2 == -1)
    return -1;
  const char *arg3800 = "/truncate_size";
  int ret1;
  ret1 = guestfs_truncate_size (g, arg3800, 1000);
  if (ret1 == -1)
    return -1;
  const char *arg3803 = "/truncate_size";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3803);
  if (ret == NULL)
      return -1;
  if (! (ret->size == 1000)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_truncate_size_0", "ret->size == 1000");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_tune2fs_0_skip (void);
static int test_tune2fs_0_perform (guestfs_h *);

static int
test_tune2fs_0 (guestfs_h *g)
{
  if (test_tune2fs_0_skip ()) {
    skipped ("test_tune2fs_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_tune2fs_0_perform (g);
}

static int
test_tune2fs_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "tune2fs") == NULL;
  str = getenv ("SKIP_TEST_TUNE2FS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_TUNE2FS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_tune2fs_0_perform (guestfs_h *g)
{
  /* TestResult for tune2fs (0) */
  const char *arg3805 = "/dev/sdb1";
  struct guestfs_tune2fs_argv optargs3806;
  optargs3806.force = 0;
  optargs3806.maxmountcount = 0;
  optargs3806.intervalbetweenchecks = 0;
  optargs3806.bitmask = UINT64_C(0x23);
  int ret1;
  ret1 = guestfs_tune2fs_argv (g, arg3805, &optargs3806);
  if (ret1 == -1)
    return -1;
  const char *arg3807 = "/dev/sdb1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tune2fs_l (g, arg3807);
  if (ret == NULL)
      return -1;
  if (! (check_hash (ret, "Check interval", "0 (<none>)") == 0 && check_hash (ret, "Maximum mount count", "-1") == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_tune2fs_0", "check_hash (ret, \"Check interval\", \"0 (<none>)\") == 0 && check_hash (ret, \"Maximum mount count\", \"-1\") == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_tune2fs_1_skip (void);
static int test_tune2fs_1_perform (guestfs_h *);

static int
test_tune2fs_1 (guestfs_h *g)
{
  if (test_tune2fs_1_skip ()) {
    skipped ("test_tune2fs_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_tune2fs_1_perform (g);
}

static int
test_tune2fs_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "tune2fs") == NULL;
  str = getenv ("SKIP_TEST_TUNE2FS_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_TUNE2FS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_tune2fs_1_perform (guestfs_h *g)
{
  /* TestResult for tune2fs (1) */
  const char *arg3809 = "/dev/sdb1";
  struct guestfs_tune2fs_argv optargs3810;
  optargs3810.force = 0;
  optargs3810.maxmountcount = 0;
  optargs3810.intervalbetweenchecks = 86400;
  optargs3810.bitmask = UINT64_C(0x23);
  int ret1;
  ret1 = guestfs_tune2fs_argv (g, arg3809, &optargs3810);
  if (ret1 == -1)
    return -1;
  const char *arg3811 = "/dev/sdb1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tune2fs_l (g, arg3811);
  if (ret == NULL)
      return -1;
  if (! (check_hash (ret, "Check interval", "86400 (1 day)") == 0 && check_hash (ret, "Maximum mount count", "-1") == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_tune2fs_1", "check_hash (ret, \"Check interval\", \"86400 (1 day)\") == 0 && check_hash (ret, \"Maximum mount count\", \"-1\") == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_tune2fs_2_skip (void);
static int test_tune2fs_2_perform (guestfs_h *);

static int
test_tune2fs_2 (guestfs_h *g)
{
  if (test_tune2fs_2_skip ()) {
    skipped ("test_tune2fs_2", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_tune2fs_2_perform (g);
}

static int
test_tune2fs_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "tune2fs") == NULL;
  str = getenv ("SKIP_TEST_TUNE2FS_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_TUNE2FS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_tune2fs_2_perform (guestfs_h *g)
{
  /* TestResult for tune2fs (2) */
  const char *arg3813 = "/dev/sdb1";
  struct guestfs_tune2fs_argv optargs3814;
  optargs3814.force = 0;
  optargs3814.group = 1;
  optargs3814.user = 1;
  optargs3814.bitmask = UINT64_C(0x211);
  int ret1;
  ret1 = guestfs_tune2fs_argv (g, arg3813, &optargs3814);
  if (ret1 == -1)
    return -1;
  const char *arg3815 = "/dev/sdb1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tune2fs_l (g, arg3815);
  if (ret == NULL)
      return -1;
  if (! (match_re (get_key (ret, "Reserved blocks uid"), "\\d+ \\(user \\S+\\)") && match_re (get_key (ret, "Reserved blocks gid"), "\\d+ \\(group \\S+\\)"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_tune2fs_2", "match_re (get_key (ret, \"Reserved blocks uid\"), \"\\\\d+ \\\\(user \\\\S+\\\\)\") && match_re (get_key (ret, \"Reserved blocks gid\"), \"\\\\d+ \\\\(group \\\\S+\\\\)\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_tune2fs_3_skip (void);
static int test_tune2fs_3_perform (guestfs_h *);

static int
test_tune2fs_3 (guestfs_h *g)
{
  if (test_tune2fs_3_skip ()) {
    skipped ("test_tune2fs_3", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_tune2fs_3_perform (g);
}

static int
test_tune2fs_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "tune2fs") == NULL;
  str = getenv ("SKIP_TEST_TUNE2FS_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_TUNE2FS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_tune2fs_3_perform (guestfs_h *g)
{
  /* TestResult for tune2fs (3) */
  const char *arg3817 = "/dev/sdb1";
  struct guestfs_tune2fs_argv optargs3818;
  optargs3818.force = 0;
  optargs3818.group = 0;
  optargs3818.user = 0;
  optargs3818.bitmask = UINT64_C(0x211);
  int ret1;
  ret1 = guestfs_tune2fs_argv (g, arg3817, &optargs3818);
  if (ret1 == -1)
    return -1;
  const char *arg3819 = "/dev/sdb1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tune2fs_l (g, arg3819);
  if (ret == NULL)
      return -1;
  if (! (match_re (get_key (ret, "Reserved blocks uid"), "\\d+ \\(user \\S+\\)") && match_re (get_key (ret, "Reserved blocks gid"), "\\d+ \\(group \\S+\\)"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_tune2fs_3", "match_re (get_key (ret, \"Reserved blocks uid\"), \"\\\\d+ \\\\(user \\\\S+\\\\)\") && match_re (get_key (ret, \"Reserved blocks gid\"), \"\\\\d+ \\\\(group \\\\S+\\\\)\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_tune2fs_l_0_skip (void);
static int test_tune2fs_l_0_perform (guestfs_h *);

static int
test_tune2fs_l_0 (guestfs_h *g)
{
  if (test_tune2fs_l_0_skip ()) {
    skipped ("test_tune2fs_l_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_tune2fs_l_0_perform (g);
}

static int
test_tune2fs_l_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "tune2fs_l") == NULL;
  str = getenv ("SKIP_TEST_TUNE2FS_L_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_TUNE2FS_L");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_tune2fs_l_0_perform (guestfs_h *g)
{
  /* TestResult for tune2fs_l (0) */
  const char *arg3821 = "/dev/sdb1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tune2fs_l (g, arg3821);
  if (ret == NULL)
      return -1;
  if (! (check_hash (ret, "Filesystem magic number", "0xEF53") == 0 && check_hash (ret, "Filesystem OS type", "Linux") == 0)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_tune2fs_l_0", "check_hash (ret, \"Filesystem magic number\", \"0xEF53\") == 0 && check_hash (ret, \"Filesystem OS type\", \"Linux\") == 0");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_txz_in_0_skip (void);
static int test_txz_in_0_perform (guestfs_h *);

static int
test_txz_in_0 (guestfs_h *g)
{
  if (test_txz_in_0_skip ()) {
    skipped ("test_txz_in_0", "environment variable set");
    return 0;
  }

  const char *features3823[] = { "xz", NULL };
  if (!guestfs_feature_available (g, (char **) features3823)) {
    skipped ("test_txz_in_0", "group %s not available in daemon",
             features3823[0]);
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_txz_in_0_perform (g);
}

static int
test_txz_in_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "txz_in") == NULL;
  str = getenv ("SKIP_TEST_TXZ_IN_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_TXZ_IN");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_txz_in_0_perform (guestfs_h *g)
{
  /* TestResultString for txz_in (0) */
  const char *arg3825 = "/txz_in";
  int ret3824;
  ret3824 = guestfs_mkdir (g, arg3825);
  if (ret3824 == -1)
    return -1;
  CLEANUP_FREE char *arg3828 = substitute_srcdir ("$srcdir/../test-data/files/helloworld.tar.xz");
  const char *arg3829 = "/txz_in";
  int ret3827;
  ret3827 = guestfs_txz_in (g, arg3828, arg3829);
  if (ret3827 == -1)
    return -1;
  const char *arg3831 = "/txz_in/hello";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3831);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "hello\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_txz_in_0", "cat", "hello\n", ret);
    return -1;
  }
  return 0;
}

static int test_umask_0_skip (void);
static int test_umask_0_perform (guestfs_h *);

static int
test_umask_0 (guestfs_h *g)
{
  if (test_umask_0_skip ()) {
    skipped ("test_umask_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_umask_0_perform (g);
}

static int
test_umask_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "umask") == NULL;
  str = getenv ("SKIP_TEST_UMASK_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_UMASK");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_umask_0_perform (guestfs_h *g)
{
  /* TestResult for umask (0) */
  int ret;
  ret = guestfs_umask (g, 18);
  if (ret == -1)
    return -1;
  if (! (ret == 022)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_umask_0", "ret == 022");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_umount_0_skip (void);
static int test_umount_0_perform (guestfs_h *);

static int
test_umount_0 (guestfs_h *g)
{
  if (test_umount_0_skip ()) {
    skipped ("test_umount_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_umount_0_perform (g);
}

static int
test_umount_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "umount") == NULL;
  str = getenv ("SKIP_TEST_UMOUNT_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_UMOUNT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_umount_0_perform (guestfs_h *g)
{
  /* TestResult for umount (0) */
  const char *arg3835 = "/dev/sda";
  const char *arg3836 = "mbr";
  int ret3;
  ret3 = guestfs_part_disk (g, arg3835, arg3836);
  if (ret3 == -1)
    return -1;
  const char *arg3838 = "ext2";
  const char *arg3839 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs3840;
  optargs3840.bitmask = UINT64_C(0x0);
  int ret2;
  ret2 = guestfs_mkfs_opts_argv (g, arg3838, arg3839, &optargs3840);
  if (ret2 == -1)
    return -1;
  const char *arg3841 = "/dev/sda1";
  const char *arg3842 = "/";
  int ret1;
  ret1 = guestfs_mount (g, arg3841, arg3842);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_mounts (g);
  if (ret == NULL)
      return -1;
  if (! (is_device_list (ret, 1, "/dev/sda1"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_umount_0", "is_device_list (ret, 1, \"/dev/sda1\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_umount_1_skip (void);
static int test_umount_1_perform (guestfs_h *);

static int
test_umount_1 (guestfs_h *g)
{
  if (test_umount_1_skip ()) {
    skipped ("test_umount_1", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_umount_1_perform (g);
}

static int
test_umount_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "umount") == NULL;
  str = getenv ("SKIP_TEST_UMOUNT_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_UMOUNT");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_umount_1_perform (guestfs_h *g)
{
  /* TestResult for umount (1) */
  const char *arg3845 = "/dev/sda";
  const char *arg3846 = "mbr";
  int ret4;
  ret4 = guestfs_part_disk (g, arg3845, arg3846);
  if (ret4 == -1)
    return -1;
  const char *arg3848 = "ext2";
  const char *arg3849 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs3850;
  optargs3850.bitmask = UINT64_C(0x0);
  int ret3;
  ret3 = guestfs_mkfs_opts_argv (g, arg3848, arg3849, &optargs3850);
  if (ret3 == -1)
    return -1;
  const char *arg3851 = "/dev/sda1";
  const char *arg3852 = "/";
  int ret2;
  ret2 = guestfs_mount (g, arg3851, arg3852);
  if (ret2 == -1)
    return -1;
  const char *arg3854 = "/";
  struct guestfs_umount_opts_argv optargs3855;
  optargs3855.force = 0;
  optargs3855.lazyunmount = 0;
  optargs3855.bitmask = UINT64_C(0x3);
  int ret1;
  ret1 = guestfs_umount_opts_argv (g, arg3854, &optargs3855);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_mounts (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_umount_1", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_umount_all_0_skip (void);
static int test_umount_all_0_perform (guestfs_h *);

static int
test_umount_all_0 (guestfs_h *g)
{
  if (test_umount_all_0_skip ()) {
    skipped ("test_umount_all_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_umount_all_0_perform (g);
}

static int
test_umount_all_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "umount_all") == NULL;
  str = getenv ("SKIP_TEST_UMOUNT_ALL_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_UMOUNT_ALL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_umount_all_0_perform (guestfs_h *g)
{
  /* TestResult for umount_all (0) */
  int ret1;
  ret1 = guestfs_umount_all (g);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_mounts (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_umount_all_0", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_umount_all_1_skip (void);
static int test_umount_all_1_perform (guestfs_h *);

static int
test_umount_all_1 (guestfs_h *g)
{
  if (test_umount_all_1_skip ()) {
    skipped ("test_umount_all_1", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_umount_all_1_perform (g);
}

static int
test_umount_all_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "umount_all") == NULL;
  str = getenv ("SKIP_TEST_UMOUNT_ALL_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_UMOUNT_ALL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_umount_all_1_perform (guestfs_h *g)
{
  /* TestResult for umount_all (1) */
  const char *arg3859 = "/dev/sda";
  const char *arg3860 = "mbr";
  int ret14;
  ret14 = guestfs_part_init (g, arg3859, arg3860);
  if (ret14 == -1)
    return -1;
  const char *arg3862 = "/dev/sda";
  const char *arg3863 = "p";
  int ret13;
  ret13 = guestfs_part_add (g, arg3862, arg3863, 64, 204799);
  if (ret13 == -1)
    return -1;
  const char *arg3867 = "/dev/sda";
  const char *arg3868 = "p";
  int ret12;
  ret12 = guestfs_part_add (g, arg3867, arg3868, 204800, 409599);
  if (ret12 == -1)
    return -1;
  const char *arg3872 = "/dev/sda";
  const char *arg3873 = "p";
  int ret11;
  ret11 = guestfs_part_add (g, arg3872, arg3873, 409600, -64);
  if (ret11 == -1)
    return -1;
  const char *arg3877 = "ext2";
  const char *arg3878 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs3879;
  optargs3879.bitmask = UINT64_C(0x0);
  int ret10;
  ret10 = guestfs_mkfs_opts_argv (g, arg3877, arg3878, &optargs3879);
  if (ret10 == -1)
    return -1;
  const char *arg3880 = "ext2";
  const char *arg3881 = "/dev/sda2";
  struct guestfs_mkfs_opts_argv optargs3882;
  optargs3882.bitmask = UINT64_C(0x0);
  int ret9;
  ret9 = guestfs_mkfs_opts_argv (g, arg3880, arg3881, &optargs3882);
  if (ret9 == -1)
    return -1;
  const char *arg3883 = "ext2";
  const char *arg3884 = "/dev/sda3";
  struct guestfs_mkfs_opts_argv optargs3885;
  optargs3885.bitmask = UINT64_C(0x0);
  int ret8;
  ret8 = guestfs_mkfs_opts_argv (g, arg3883, arg3884, &optargs3885);
  if (ret8 == -1)
    return -1;
  const char *arg3886 = "/dev/sda1";
  const char *arg3887 = "/";
  int ret7;
  ret7 = guestfs_mount (g, arg3886, arg3887);
  if (ret7 == -1)
    return -1;
  const char *arg3889 = "/mp1";
  int ret6;
  ret6 = guestfs_mkdir (g, arg3889);
  if (ret6 == -1)
    return -1;
  const char *arg3891 = "/dev/sda2";
  const char *arg3892 = "/mp1";
  int ret5;
  ret5 = guestfs_mount (g, arg3891, arg3892);
  if (ret5 == -1)
    return -1;
  const char *arg3894 = "/mp1/mp2";
  int ret4;
  ret4 = guestfs_mkdir (g, arg3894);
  if (ret4 == -1)
    return -1;
  const char *arg3896 = "/dev/sda3";
  const char *arg3897 = "/mp1/mp2";
  int ret3;
  ret3 = guestfs_mount (g, arg3896, arg3897);
  if (ret3 == -1)
    return -1;
  const char *arg3899 = "/mp1/mp2/mp3";
  int ret2;
  ret2 = guestfs_mkdir (g, arg3899);
  if (ret2 == -1)
    return -1;
  int ret1;
  ret1 = guestfs_umount_all (g);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_mounts (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_umount_all_1", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_upload_0_skip (void);
static int test_upload_0_perform (guestfs_h *);

static int
test_upload_0 (guestfs_h *g)
{
  if (test_upload_0_skip ()) {
    skipped ("test_upload_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_upload_0_perform (g);
}

static int
test_upload_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "upload") == NULL;
  str = getenv ("SKIP_TEST_UPLOAD_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_UPLOAD");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_upload_0_perform (guestfs_h *g)
{
  /* TestResultString for upload (0) */
  const char *arg3904 = "/upload";
  int ret3903;
  ret3903 = guestfs_mkdir (g, arg3904);
  if (ret3903 == -1)
    return -1;
  CLEANUP_FREE char *arg3907 = substitute_srcdir ("$srcdir/../COPYING.LIB");
  const char *arg3908 = "/upload/COPYING.LIB";
  int ret3906;
  ret3906 = guestfs_upload (g, arg3907, arg3908);
  if (ret3906 == -1)
    return -1;
  const char *arg3910 = "md5";
  const char *arg3911 = "/upload/COPYING.LIB";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg3910, arg3911);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "4fbd65380cdd255951079008b364516c")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_upload_0", "checksum", "4fbd65380cdd255951079008b364516c", ret);
    return -1;
  }
  return 0;
}

static int test_upload_offset_0_skip (void);
static int test_upload_offset_0_perform (guestfs_h *);

static int
test_upload_offset_0 (guestfs_h *g)
{
  if (test_upload_offset_0_skip ()) {
    skipped ("test_upload_offset_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_upload_offset_0_perform (g);
}

static int
test_upload_offset_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "upload_offset") == NULL;
  str = getenv ("SKIP_TEST_UPLOAD_OFFSET_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_UPLOAD_OFFSET");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_upload_offset_0_perform (guestfs_h *g)
{
  /* TestResultString for upload_offset (0) */
  CLEANUP_FREE char *arg3914 = substitute_srcdir ("$srcdir/../COPYING.LIB");
  const char *arg3915 = "/upload_offset";
  int ret3913;
  ret3913 = guestfs_upload_offset (g, arg3914, arg3915, 0);
  if (ret3913 == -1)
    return -1;
  const char *arg3918 = "md5";
  const char *arg3919 = "/upload_offset";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg3918, arg3919);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "4fbd65380cdd255951079008b364516c")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_upload_offset_0", "checksum", "4fbd65380cdd255951079008b364516c", ret);
    return -1;
  }
  return 0;
}

static int test_utimens_0_skip (void);
static int test_utimens_0_perform (guestfs_h *);

static int
test_utimens_0 (guestfs_h *g)
{
  if (test_utimens_0_skip ()) {
    skipped ("test_utimens_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_utimens_0_perform (g);
}

static int
test_utimens_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "utimens") == NULL;
  str = getenv ("SKIP_TEST_UTIMENS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_UTIMENS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_utimens_0_perform (guestfs_h *g)
{
  /* TestResult for utimens (0) */
  const char *arg3921 = "/utimens-file";
  int ret2;
  ret2 = guestfs_touch (g, arg3921);
  if (ret2 == -1)
    return -1;
  const char *arg3923 = "/utimens-file";
  int ret1;
  ret1 = guestfs_utimens (g, arg3923, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3929 = "/utimens-file";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3929);
  if (ret == NULL)
      return -1;
  if (! (ret->mtime == 9876)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_utimens_0", "ret->mtime == 9876");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_utimens_1_skip (void);
static int test_utimens_1_perform (guestfs_h *);

static int
test_utimens_1 (guestfs_h *g)
{
  if (test_utimens_1_skip ()) {
    skipped ("test_utimens_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_utimens_1_perform (g);
}

static int
test_utimens_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "utimens") == NULL;
  str = getenv ("SKIP_TEST_UTIMENS_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_UTIMENS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_utimens_1_perform (guestfs_h *g)
{
  /* TestResult for utimens (1) */
  const char *arg3931 = "/utimens-dir";
  int ret2;
  ret2 = guestfs_mkdir (g, arg3931);
  if (ret2 == -1)
    return -1;
  const char *arg3933 = "/utimens-dir";
  int ret1;
  ret1 = guestfs_utimens (g, arg3933, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3939 = "/utimens-dir";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3939);
  if (ret == NULL)
      return -1;
  if (! (ret->mtime == 9876)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_utimens_1", "ret->mtime == 9876");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_utimens_2_skip (void);
static int test_utimens_2_perform (guestfs_h *);

static int
test_utimens_2 (guestfs_h *g)
{
  if (test_utimens_2_skip ()) {
    skipped ("test_utimens_2", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_utimens_2_perform (g);
}

static int
test_utimens_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "utimens") == NULL;
  str = getenv ("SKIP_TEST_UTIMENS_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_UTIMENS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_utimens_2_perform (guestfs_h *g)
{
  /* TestResult for utimens (2) */
  const char *arg3942 = "/utimens-fifo";
  int ret2;
  ret2 = guestfs_mkfifo (g, 420, arg3942);
  if (ret2 == -1)
    return -1;
  const char *arg3944 = "/utimens-fifo";
  int ret1;
  ret1 = guestfs_utimens (g, arg3944, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3950 = "/utimens-fifo";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3950);
  if (ret == NULL)
      return -1;
  if (! (ret->mtime == 9876)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_utimens_2", "ret->mtime == 9876");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_utimens_3_skip (void);
static int test_utimens_3_perform (guestfs_h *);

static int
test_utimens_3 (guestfs_h *g)
{
  if (test_utimens_3_skip ()) {
    skipped ("test_utimens_3", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_utimens_3_perform (g);
}

static int
test_utimens_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "utimens") == NULL;
  str = getenv ("SKIP_TEST_UTIMENS_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_UTIMENS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_utimens_3_perform (guestfs_h *g)
{
  /* TestResult for utimens (3) */
  const char *arg3952 = "/utimens-file";
  const char *arg3953 = "/utimens-link";
  int ret2;
  ret2 = guestfs_ln_sf (g, arg3952, arg3953);
  if (ret2 == -1)
    return -1;
  const char *arg3955 = "/utimens-link";
  int ret1;
  ret1 = guestfs_utimens (g, arg3955, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3961 = "/utimens-link";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3961);
  if (ret == NULL)
      return -1;
  if (! (ret->mtime == 9876)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_utimens_3", "ret->mtime == 9876");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_utimens_4_skip (void);
static int test_utimens_4_perform (guestfs_h *);

static int
test_utimens_4 (guestfs_h *g)
{
  if (test_utimens_4_skip ()) {
    skipped ("test_utimens_4", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_utimens_4_perform (g);
}

static int
test_utimens_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "utimens") == NULL;
  str = getenv ("SKIP_TEST_UTIMENS_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_UTIMENS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_utimens_4_perform (guestfs_h *g)
{
  /* TestResult for utimens (4) */
  const char *arg3966 = "/utimens-block";
  int ret2;
  ret2 = guestfs_mknod_b (g, 420, 8, 0, arg3966);
  if (ret2 == -1)
    return -1;
  const char *arg3968 = "/utimens-block";
  int ret1;
  ret1 = guestfs_utimens (g, arg3968, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3974 = "/utimens-block";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3974);
  if (ret == NULL)
      return -1;
  if (! (ret->mtime == 9876)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_utimens_4", "ret->mtime == 9876");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_utimens_5_skip (void);
static int test_utimens_5_perform (guestfs_h *);

static int
test_utimens_5 (guestfs_h *g)
{
  if (test_utimens_5_skip ()) {
    skipped ("test_utimens_5", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_utimens_5_perform (g);
}

static int
test_utimens_5_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "utimens") == NULL;
  str = getenv ("SKIP_TEST_UTIMENS_5");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_UTIMENS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_utimens_5_perform (guestfs_h *g)
{
  /* TestResult for utimens (5) */
  const char *arg3979 = "/utimens-char";
  int ret2;
  ret2 = guestfs_mknod_c (g, 420, 1, 3, arg3979);
  if (ret2 == -1)
    return -1;
  const char *arg3981 = "/utimens-char";
  int ret1;
  ret1 = guestfs_utimens (g, arg3981, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3987 = "/utimens-char";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3987);
  if (ret == NULL)
      return -1;
  if (! (ret->mtime == 9876)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_utimens_5", "ret->mtime == 9876");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_utsname_0_skip (void);
static int test_utsname_0_perform (guestfs_h *);

static int
test_utsname_0 (guestfs_h *g)
{
  if (test_utsname_0_skip ()) {
    skipped ("test_utsname_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_utsname_0_perform (g);
}

static int
test_utsname_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "utsname") == NULL;
  str = getenv ("SKIP_TEST_UTSNAME_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_UTSNAME");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_utsname_0_perform (guestfs_h *g)
{
  /* TestRun for utsname (0) */
  CLEANUP_FREE_UTSNAME struct guestfs_utsname *ret3989;
  ret3989 = guestfs_utsname (g);
  if (ret3989 == NULL)
      return -1;
  return 0;
}

static int test_version_0_skip (void);
static int test_version_0_perform (guestfs_h *);

static int
test_version_0 (guestfs_h *g)
{
  if (test_version_0_skip ()) {
    skipped ("test_version_0", "environment variable set");
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_version_0_perform (g);
}

static int
test_version_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "version") == NULL;
  str = getenv ("SKIP_TEST_VERSION_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VERSION");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_version_0_perform (guestfs_h *g)
{
  /* TestResult for version (0) */
  CLEANUP_FREE_VERSION struct guestfs_version *ret;
  ret = guestfs_version (g);
  if (ret == NULL)
      return -1;
  if (! (ret->major == 1)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_version_0", "ret->major == 1");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_vfs_label_0_skip (void);
static int test_vfs_label_0_perform (guestfs_h *);

static int
test_vfs_label_0 (guestfs_h *g)
{
  if (test_vfs_label_0_skip ()) {
    skipped ("test_vfs_label_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_vfs_label_0_perform (g);
}

static int
test_vfs_label_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vfs_label") == NULL;
  str = getenv ("SKIP_TEST_VFS_LABEL_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VFS_LABEL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vfs_label_0_perform (guestfs_h *g)
{
  /* TestResultString for vfs_label (0) */
  const char *arg3993 = "/dev/sda1";
  const char *arg3994 = "LTEST";
  int ret3992;
  ret3992 = guestfs_set_label (g, arg3993, arg3994);
  if (ret3992 == -1)
    return -1;
  const char *arg3996 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg3996);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "LTEST")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_vfs_label_0", "vfs_label", "LTEST", ret);
    return -1;
  }
  return 0;
}

static int test_vfs_label_1_skip (void);
static int test_vfs_label_1_perform (guestfs_h *);

static int
test_vfs_label_1 (guestfs_h *g)
{
  if (test_vfs_label_1_skip ()) {
    skipped ("test_vfs_label_1", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_vfs_label_1_perform (g);
}

static int
test_vfs_label_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vfs_label") == NULL;
  str = getenv ("SKIP_TEST_VFS_LABEL_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VFS_LABEL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vfs_label_1_perform (guestfs_h *g)
{
  /* TestResultString for vfs_label (1) */
  const char *arg3999 = "/dev/sda";
  const char *arg4000 = "mbr";
  int ret3998;
  ret3998 = guestfs_part_disk (g, arg3999, arg4000);
  if (ret3998 == -1)
    return -1;
  const char *arg4003 = "ext2";
  const char *arg4004 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4005;
  optargs4005.label = "test-label";
  optargs4005.bitmask = UINT64_C(0x10);
  int ret4002;
  ret4002 = guestfs_mkfs_opts_argv (g, arg4003, arg4004, &optargs4005);
  if (ret4002 == -1)
    return -1;
  const char *arg4006 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg4006);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "test-label")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_vfs_label_1", "vfs_label", "test-label", ret);
    return -1;
  }
  return 0;
}

static int test_vfs_label_2_skip (void);
static int test_vfs_label_2_perform (guestfs_h *);

static int
test_vfs_label_2 (guestfs_h *g)
{
  if (test_vfs_label_2_skip ()) {
    skipped ("test_vfs_label_2", "environment variable set");
    return 0;
  }

  const char *features4008[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4008)) {
    skipped ("test_vfs_label_2", "group %s not available in daemon",
             features4008[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_vfs_label_2_perform (g);
}

static int
test_vfs_label_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vfs_label") == NULL;
  str = getenv ("SKIP_TEST_VFS_LABEL_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VFS_LABEL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vfs_label_2_perform (guestfs_h *g)
{
  /* TestResultString for vfs_label (2) */
  const char *arg4010 = "/dev/sda";
  const char *arg4011 = "mbr";
  int ret4009;
  ret4009 = guestfs_part_disk (g, arg4010, arg4011);
  if (ret4009 == -1)
    return -1;
  const char *arg4014 = "btrfs";
  const char *arg4015 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4016;
  optargs4016.label = "";
  optargs4016.bitmask = UINT64_C(0x10);
  int ret4013;
  ret4013 = guestfs_mkfs_opts_argv (g, arg4014, arg4015, &optargs4016);
  if (ret4013 == -1)
    return -1;
  const char *arg4018 = "/dev/sda1";
  const char *arg4019 = "test-label-btrfs";
  int ret4017;
  ret4017 = guestfs_set_label (g, arg4018, arg4019);
  if (ret4017 == -1)
    return -1;
  const char *arg4021 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg4021);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "test-label-btrfs")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_vfs_label_2", "vfs_label", "test-label-btrfs", ret);
    return -1;
  }
  return 0;
}

static int test_vfs_minimum_size_0_skip (void);
static int test_vfs_minimum_size_0_perform (guestfs_h *);

static int
test_vfs_minimum_size_0 (guestfs_h *g)
{
  if (test_vfs_minimum_size_0_skip ()) {
    skipped ("test_vfs_minimum_size_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_vfs_minimum_size_0_perform (g);
}

static int
test_vfs_minimum_size_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vfs_minimum_size") == NULL;
  str = getenv ("SKIP_TEST_VFS_MINIMUM_SIZE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VFS_MINIMUM_SIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vfs_minimum_size_0_perform (guestfs_h *g)
{
  /* TestRun for vfs_minimum_size (0) */
  const char *arg4024 = "/dev/sda1";
  int64_t ret4023;
  ret4023 = guestfs_vfs_minimum_size (g, arg4024);
  if (ret4023 == -1)
    return -1;
  return 0;
}

static int test_vfs_minimum_size_1_skip (void);
static int test_vfs_minimum_size_1_perform (guestfs_h *);

static int
test_vfs_minimum_size_1 (guestfs_h *g)
{
  if (test_vfs_minimum_size_1_skip ()) {
    skipped ("test_vfs_minimum_size_1", "environment variable set");
    return 0;
  }

  const char *features4026[] = { "ntfsprogs", NULL };
  if (!guestfs_feature_available (g, (char **) features4026)) {
    skipped ("test_vfs_minimum_size_1", "group %s not available in daemon",
             features4026[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_vfs_minimum_size_1_perform (g);
}

static int
test_vfs_minimum_size_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vfs_minimum_size") == NULL;
  str = getenv ("SKIP_TEST_VFS_MINIMUM_SIZE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VFS_MINIMUM_SIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vfs_minimum_size_1_perform (guestfs_h *g)
{
  /* TestRun for vfs_minimum_size (1) */
  const char *arg4028 = "ntfs";
  const char *arg4029 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4030;
  optargs4030.bitmask = UINT64_C(0x0);
  int ret4027;
  ret4027 = guestfs_mkfs_opts_argv (g, arg4028, arg4029, &optargs4030);
  if (ret4027 == -1)
    return -1;
  const char *arg4032 = "/dev/sda1";
  int64_t ret4031;
  ret4031 = guestfs_vfs_minimum_size (g, arg4032);
  if (ret4031 == -1)
    return -1;
  return 0;
}

static int test_vfs_minimum_size_2_skip (void);
static int test_vfs_minimum_size_2_perform (guestfs_h *);

static int
test_vfs_minimum_size_2 (guestfs_h *g)
{
  if (test_vfs_minimum_size_2_skip ()) {
    skipped ("test_vfs_minimum_size_2", "environment variable set");
    return 0;
  }

  const char *features4034[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4034)) {
    skipped ("test_vfs_minimum_size_2", "group %s not available in daemon",
             features4034[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_vfs_minimum_size_2_perform (g);
}

static int
test_vfs_minimum_size_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vfs_minimum_size") == NULL;
  str = getenv ("SKIP_TEST_VFS_MINIMUM_SIZE_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VFS_MINIMUM_SIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vfs_minimum_size_2_perform (guestfs_h *g)
{
  /* TestRunOrUnsupported for vfs_minimum_size (2) */
  const char *arg4036 = "btrfs";
  const char *arg4037 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4038;
  optargs4038.bitmask = UINT64_C(0x0);
  int ret4035;
  ret4035 = guestfs_mkfs_opts_argv (g, arg4036, arg4037, &optargs4038);
  if (ret4035 == -1)
    return -1;
  const char *arg4040 = "/dev/sda1";
  const char *arg4041 = "/";
  int ret4039;
  ret4039 = guestfs_mount (g, arg4040, arg4041);
  if (ret4039 == -1)
    return -1;
  const char *arg4043 = "/dev/sda1";
  int64_t ret;
  guestfs_push_error_handler (g, NULL, NULL);
  ret = guestfs_vfs_minimum_size (g, arg4043);
  guestfs_pop_error_handler (g);
  if (ret == -1) {
    if (guestfs_last_errno (g) == ENOTSUP) {
      skipped ("test_vfs_minimum_size_2", "last command %s returned ENOTSUP", "vfs_minimum_size");
      return 0;
    }
    fprintf (stderr, "%s: test failed: expected last command %s to pass or fail with ENOTSUP, but it failed with %d: %s\n",
             "test_vfs_minimum_size_2", "vfs_minimum_size", guestfs_last_errno (g), guestfs_last_error (g));
    return -1;
  }
  return 0;
}

static int test_vfs_minimum_size_3_skip (void);
static int test_vfs_minimum_size_3_perform (guestfs_h *);

static int
test_vfs_minimum_size_3 (guestfs_h *g)
{
  if (test_vfs_minimum_size_3_skip ()) {
    skipped ("test_vfs_minimum_size_3", "environment variable set");
    return 0;
  }

  const char *features4045[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4045)) {
    skipped ("test_vfs_minimum_size_3", "group %s not available in daemon",
             features4045[0]);
    return 0;
  }

  if (init_partition (g) == -1)
    return -1;

  return test_vfs_minimum_size_3_perform (g);
}

static int
test_vfs_minimum_size_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vfs_minimum_size") == NULL;
  str = getenv ("SKIP_TEST_VFS_MINIMUM_SIZE_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VFS_MINIMUM_SIZE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vfs_minimum_size_3_perform (guestfs_h *g)
{
  /* TestRun for vfs_minimum_size (3) */
  const char *arg4047 = "xfs";
  const char *arg4048 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4049;
  optargs4049.bitmask = UINT64_C(0x0);
  int ret4046;
  ret4046 = guestfs_mkfs_opts_argv (g, arg4047, arg4048, &optargs4049);
  if (ret4046 == -1)
    return -1;
  const char *arg4051 = "/dev/sda1";
  const char *arg4052 = "/";
  int ret4050;
  ret4050 = guestfs_mount (g, arg4051, arg4052);
  if (ret4050 == -1)
    return -1;
  const char *arg4055 = "/dev/sda1";
  int64_t ret4054;
  ret4054 = guestfs_vfs_minimum_size (g, arg4055);
  if (ret4054 == -1)
    return -1;
  return 0;
}

static int test_vfs_type_0_skip (void);
static int test_vfs_type_0_perform (guestfs_h *);

static int
test_vfs_type_0 (guestfs_h *g)
{
  if (test_vfs_type_0_skip ()) {
    skipped ("test_vfs_type_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_vfs_type_0_perform (g);
}

static int
test_vfs_type_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vfs_type") == NULL;
  str = getenv ("SKIP_TEST_VFS_TYPE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VFS_TYPE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vfs_type_0_perform (guestfs_h *g)
{
  /* TestResultString for vfs_type (0) */
  const char *arg4057 = "/dev/sdb1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_type (g, arg4057);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "ext2")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_vfs_type_0", "vfs_type", "ext2", ret);
    return -1;
  }
  return 0;
}

static int test_vfs_uuid_0_skip (void);
static int test_vfs_uuid_0_perform (guestfs_h *);

static int
test_vfs_uuid_0 (guestfs_h *g)
{
  if (test_vfs_uuid_0_skip ()) {
    skipped ("test_vfs_uuid_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_vfs_uuid_0_perform (g);
}

static int
test_vfs_uuid_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vfs_uuid") == NULL;
  str = getenv ("SKIP_TEST_VFS_UUID_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VFS_UUID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vfs_uuid_0_perform (guestfs_h *g)
{
  /* TestResultString for vfs_uuid (0) */
  const char *arg4060 = "/dev/sda1";
  const char *arg4061 = "534e4f31-92b6-7d0f-4490-a30ac7f0ccce";
  int ret4059;
  ret4059 = guestfs_set_e2uuid (g, arg4060, arg4061);
  if (ret4059 == -1)
    return -1;
  const char *arg4063 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_uuid (g, arg4063);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "534e4f31-92b6-7d0f-4490-a30ac7f0ccce")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_vfs_uuid_0", "vfs_uuid", "534e4f31-92b6-7d0f-4490-a30ac7f0ccce", ret);
    return -1;
  }
  return 0;
}

static int test_vgchange_uuid_0_skip (void);
static int test_vgchange_uuid_0_perform (guestfs_h *);

static int
test_vgchange_uuid_0 (guestfs_h *g)
{
  if (test_vgchange_uuid_0_skip ()) {
    skipped ("test_vgchange_uuid_0", "environment variable set");
    return 0;
  }

  const char *features4065[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4065)) {
    skipped ("test_vgchange_uuid_0", "group %s not available in daemon",
             features4065[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_vgchange_uuid_0_perform (g);
}

static int
test_vgchange_uuid_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vgchange_uuid") == NULL;
  str = getenv ("SKIP_TEST_VGCHANGE_UUID_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VGCHANGE_UUID");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vgchange_uuid_0_perform (guestfs_h *g)
{
  /* TestRun for vgchange_uuid (0) */
  const char *arg4067 = "/dev/sda";
  const char *arg4068 = "mbr";
  int ret4066;
  ret4066 = guestfs_part_disk (g, arg4067, arg4068);
  if (ret4066 == -1)
    return -1;
  const char *arg4071 = "/dev/sda1";
  int ret4070;
  ret4070 = guestfs_pvcreate (g, arg4071);
  if (ret4070 == -1)
    return -1;
  const char *arg4074 = "VG";
  const char *arg4075_0 = "/dev/sda1";
  const char *const arg4075[] = {
    arg4075_0,
    NULL
  };
  int ret4073;
  ret4073 = guestfs_vgcreate (g, arg4074, (char **) arg4075);
  if (ret4073 == -1)
    return -1;
  const char *arg4078 = "/dev/VG";
  int ret4077;
  ret4077 = guestfs_vgchange_uuid (g, arg4078);
  if (ret4077 == -1)
    return -1;
  return 0;
}

static int test_vgchange_uuid_all_0_skip (void);
static int test_vgchange_uuid_all_0_perform (guestfs_h *);

static int
test_vgchange_uuid_all_0 (guestfs_h *g)
{
  if (test_vgchange_uuid_all_0_skip ()) {
    skipped ("test_vgchange_uuid_all_0", "environment variable set");
    return 0;
  }

  const char *features4080[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4080)) {
    skipped ("test_vgchange_uuid_all_0", "group %s not available in daemon",
             features4080[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_vgchange_uuid_all_0_perform (g);
}

static int
test_vgchange_uuid_all_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vgchange_uuid_all") == NULL;
  str = getenv ("SKIP_TEST_VGCHANGE_UUID_ALL_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VGCHANGE_UUID_ALL");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vgchange_uuid_all_0_perform (guestfs_h *g)
{
  /* TestRun for vgchange_uuid_all (0) */
  const char *arg4082 = "/dev/sda";
  const char *arg4083 = "mbr";
  int ret4081;
  ret4081 = guestfs_part_disk (g, arg4082, arg4083);
  if (ret4081 == -1)
    return -1;
  const char *arg4086 = "/dev/sda1";
  int ret4085;
  ret4085 = guestfs_pvcreate (g, arg4086);
  if (ret4085 == -1)
    return -1;
  const char *arg4089 = "VG";
  const char *arg4090_0 = "/dev/sda1";
  const char *const arg4090[] = {
    arg4090_0,
    NULL
  };
  int ret4088;
  ret4088 = guestfs_vgcreate (g, arg4089, (char **) arg4090);
  if (ret4088 == -1)
    return -1;
  int ret4092;
  ret4092 = guestfs_vgchange_uuid_all (g);
  if (ret4092 == -1)
    return -1;
  return 0;
}

static int test_vgcreate_0_skip (void);
static int test_vgcreate_0_perform (guestfs_h *);

static int
test_vgcreate_0 (guestfs_h *g)
{
  if (test_vgcreate_0_skip ()) {
    skipped ("test_vgcreate_0", "environment variable set");
    return 0;
  }

  const char *features4094[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4094)) {
    skipped ("test_vgcreate_0", "group %s not available in daemon",
             features4094[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_vgcreate_0_perform (g);
}

static int
test_vgcreate_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vgcreate") == NULL;
  str = getenv ("SKIP_TEST_VGCREATE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VGCREATE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vgcreate_0_perform (guestfs_h *g)
{
  /* TestResult for vgcreate (0) */
  const char *arg4095 = "/dev/sda";
  const char *arg4096 = "mbr";
  int ret9;
  ret9 = guestfs_part_init (g, arg4095, arg4096);
  if (ret9 == -1)
    return -1;
  const char *arg4098 = "/dev/sda";
  const char *arg4099 = "p";
  int ret8;
  ret8 = guestfs_part_add (g, arg4098, arg4099, 64, 204799);
  if (ret8 == -1)
    return -1;
  const char *arg4103 = "/dev/sda";
  const char *arg4104 = "p";
  int ret7;
  ret7 = guestfs_part_add (g, arg4103, arg4104, 204800, 409599);
  if (ret7 == -1)
    return -1;
  const char *arg4108 = "/dev/sda";
  const char *arg4109 = "p";
  int ret6;
  ret6 = guestfs_part_add (g, arg4108, arg4109, 409600, -64);
  if (ret6 == -1)
    return -1;
  const char *arg4113 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg4113);
  if (ret5 == -1)
    return -1;
  const char *arg4115 = "/dev/sda2";
  int ret4;
  ret4 = guestfs_pvcreate (g, arg4115);
  if (ret4 == -1)
    return -1;
  const char *arg4117 = "/dev/sda3";
  int ret3;
  ret3 = guestfs_pvcreate (g, arg4117);
  if (ret3 == -1)
    return -1;
  const char *arg4119 = "VG1";
  const char *arg4120_0 = "/dev/sda1";
  const char *arg4120_1 = "/dev/sda2";
  const char *const arg4120[] = {
    arg4120_0,
    arg4120_1,
    NULL
  };
  int ret2;
  ret2 = guestfs_vgcreate (g, arg4119, (char **) arg4120);
  if (ret2 == -1)
    return -1;
  const char *arg4122 = "VG2";
  const char *arg4123_0 = "/dev/sda3";
  const char *const arg4123[] = {
    arg4123_0,
    NULL
  };
  int ret1;
  ret1 = guestfs_vgcreate (g, arg4122, (char **) arg4123);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_vgs (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "VG1", "VG2"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_vgcreate_0", "is_string_list (ret, 2, \"VG1\", \"VG2\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_vgcreate_1_skip (void);
static int test_vgcreate_1_perform (guestfs_h *);

static int
test_vgcreate_1 (guestfs_h *g)
{
  if (test_vgcreate_1_skip ()) {
    skipped ("test_vgcreate_1", "environment variable set");
    return 0;
  }

  const char *features4126[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4126)) {
    skipped ("test_vgcreate_1", "group %s not available in daemon",
             features4126[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_vgcreate_1_perform (g);
}

static int
test_vgcreate_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vgcreate") == NULL;
  str = getenv ("SKIP_TEST_VGCREATE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VGCREATE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vgcreate_1_perform (guestfs_h *g)
{
  /* TestLastFail for vgcreate (1) */
  const char *arg4128 = "/dev/sda";
  const char *arg4129 = "mbr";
  int ret4127;
  ret4127 = guestfs_part_init (g, arg4128, arg4129);
  if (ret4127 == -1)
    return -1;
  const char *arg4132 = "/dev/sda";
  const char *arg4133 = "p";
  int ret4131;
  ret4131 = guestfs_part_add (g, arg4132, arg4133, 64, 204799);
  if (ret4131 == -1)
    return -1;
  const char *arg4138 = "/dev/sda";
  const char *arg4139 = "p";
  int ret4137;
  ret4137 = guestfs_part_add (g, arg4138, arg4139, 204800, 409599);
  if (ret4137 == -1)
    return -1;
  const char *arg4144 = "/dev/sda";
  const char *arg4145 = "p";
  int ret4143;
  ret4143 = guestfs_part_add (g, arg4144, arg4145, 409600, -64);
  if (ret4143 == -1)
    return -1;
  const char *arg4150 = "/dev/sda1";
  int ret4149;
  ret4149 = guestfs_pvcreate (g, arg4150);
  if (ret4149 == -1)
    return -1;
  const char *arg4153 = "/dev/sda2";
  int ret4152;
  ret4152 = guestfs_pvcreate (g, arg4153);
  if (ret4152 == -1)
    return -1;
  const char *arg4156 = "/dev/sda3";
  int ret4155;
  ret4155 = guestfs_pvcreate (g, arg4156);
  if (ret4155 == -1)
    return -1;
  const char *arg4159 = "VG1";
  const char *arg4160_0 = "/foo/bar";
  const char *arg4160_1 = "/dev/sda2";
  const char *const arg4160[] = {
    arg4160_0,
    arg4160_1,
    NULL
  };
  int ret4158;
  guestfs_push_error_handler (g, NULL, NULL);
  ret4158 = guestfs_vgcreate (g, arg4159, (char **) arg4160);
  guestfs_pop_error_handler (g);
  if (ret4158 != -1)
    return -1;
  return 0;
}

static int test_vgremove_0_skip (void);
static int test_vgremove_0_perform (guestfs_h *);

static int
test_vgremove_0 (guestfs_h *g)
{
  if (test_vgremove_0_skip ()) {
    skipped ("test_vgremove_0", "environment variable set");
    return 0;
  }

  const char *features4162[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4162)) {
    skipped ("test_vgremove_0", "group %s not available in daemon",
             features4162[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_vgremove_0_perform (g);
}

static int
test_vgremove_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vgremove") == NULL;
  str = getenv ("SKIP_TEST_VGREMOVE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VGREMOVE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vgremove_0_perform (guestfs_h *g)
{
  /* TestResult for vgremove (0) */
  const char *arg4163 = "/dev/sda";
  const char *arg4164 = "mbr";
  int ret6;
  ret6 = guestfs_part_disk (g, arg4163, arg4164);
  if (ret6 == -1)
    return -1;
  const char *arg4166 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg4166);
  if (ret5 == -1)
    return -1;
  const char *arg4168 = "VG";
  const char *arg4169_0 = "/dev/sda1";
  const char *const arg4169[] = {
    arg4169_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg4168, (char **) arg4169);
  if (ret4 == -1)
    return -1;
  const char *arg4171 = "LV1";
  const char *arg4172 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg4171, arg4172, 50);
  if (ret3 == -1)
    return -1;
  const char *arg4175 = "LV2";
  const char *arg4176 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg4175, arg4176, 50);
  if (ret2 == -1)
    return -1;
  const char *arg4179 = "VG";
  int ret1;
  ret1 = guestfs_vgremove (g, arg4179);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_lvs (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_vgremove_0", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_vgremove_1_skip (void);
static int test_vgremove_1_perform (guestfs_h *);

static int
test_vgremove_1 (guestfs_h *g)
{
  if (test_vgremove_1_skip ()) {
    skipped ("test_vgremove_1", "environment variable set");
    return 0;
  }

  const char *features4182[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4182)) {
    skipped ("test_vgremove_1", "group %s not available in daemon",
             features4182[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_vgremove_1_perform (g);
}

static int
test_vgremove_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vgremove") == NULL;
  str = getenv ("SKIP_TEST_VGREMOVE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VGREMOVE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vgremove_1_perform (guestfs_h *g)
{
  /* TestResult for vgremove (1) */
  const char *arg4183 = "/dev/sda";
  const char *arg4184 = "mbr";
  int ret6;
  ret6 = guestfs_part_disk (g, arg4183, arg4184);
  if (ret6 == -1)
    return -1;
  const char *arg4186 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg4186);
  if (ret5 == -1)
    return -1;
  const char *arg4188 = "VG";
  const char *arg4189_0 = "/dev/sda1";
  const char *const arg4189[] = {
    arg4189_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg4188, (char **) arg4189);
  if (ret4 == -1)
    return -1;
  const char *arg4191 = "LV1";
  const char *arg4192 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg4191, arg4192, 50);
  if (ret3 == -1)
    return -1;
  const char *arg4195 = "LV2";
  const char *arg4196 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg4195, arg4196, 50);
  if (ret2 == -1)
    return -1;
  const char *arg4199 = "VG";
  int ret1;
  ret1 = guestfs_vgremove (g, arg4199);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_vgs (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 0))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_vgremove_1", "is_string_list (ret, 0)");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_vgrename_0_skip (void);
static int test_vgrename_0_perform (guestfs_h *);

static int
test_vgrename_0 (guestfs_h *g)
{
  if (test_vgrename_0_skip ()) {
    skipped ("test_vgrename_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs_on_lvm (g) == -1)
    return -1;

  return test_vgrename_0_perform (g);
}

static int
test_vgrename_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vgrename") == NULL;
  str = getenv ("SKIP_TEST_VGRENAME_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VGRENAME");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vgrename_0_perform (guestfs_h *g)
{
  /* TestResult for vgrename (0) */
  const char *arg4202 = "/";
  struct guestfs_umount_opts_argv optargs4203;
  optargs4203.force = 0;
  optargs4203.lazyunmount = 0;
  optargs4203.bitmask = UINT64_C(0x3);
  int ret5;
  ret5 = guestfs_umount_opts_argv (g, arg4202, &optargs4203);
  if (ret5 == -1)
    return -1;
  const char *arg4205_0 = "VG";
  const char *const arg4205[] = {
    arg4205_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vg_activate (g, 0, (char **) arg4205);
  if (ret4 == -1)
    return -1;
  const char *arg4207 = "VG";
  const char *arg4208 = "VG2";
  int ret3;
  ret3 = guestfs_vgrename (g, arg4207, arg4208);
  if (ret3 == -1)
    return -1;
  const char *arg4211_0 = "VG2";
  const char *const arg4211[] = {
    arg4211_0,
    NULL
  };
  int ret2;
  ret2 = guestfs_vg_activate (g, 1, (char **) arg4211);
  if (ret2 == -1)
    return -1;
  const char *arg4213 = "/dev/VG2/LV";
  const char *arg4214 = "/";
  int ret1;
  ret1 = guestfs_mount (g, arg4213, arg4214);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_vgs (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 1, "VG2"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_vgrename_0", "is_string_list (ret, 1, \"VG2\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_vgs_0_skip (void);
static int test_vgs_0_perform (guestfs_h *);

static int
test_vgs_0 (guestfs_h *g)
{
  if (test_vgs_0_skip ()) {
    skipped ("test_vgs_0", "environment variable set");
    return 0;
  }

  const char *features4217[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4217)) {
    skipped ("test_vgs_0", "group %s not available in daemon",
             features4217[0]);
    return 0;
  }

  if (init_basic_fs_on_lvm (g) == -1)
    return -1;

  return test_vgs_0_perform (g);
}

static int
test_vgs_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vgs") == NULL;
  str = getenv ("SKIP_TEST_VGS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VGS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vgs_0_perform (guestfs_h *g)
{
  /* TestResult for vgs (0) */
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_vgs (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 1, "VG"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_vgs_0", "is_string_list (ret, 1, \"VG\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_vgs_1_skip (void);
static int test_vgs_1_perform (guestfs_h *);

static int
test_vgs_1 (guestfs_h *g)
{
  if (test_vgs_1_skip ()) {
    skipped ("test_vgs_1", "environment variable set");
    return 0;
  }

  const char *features4219[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4219)) {
    skipped ("test_vgs_1", "group %s not available in daemon",
             features4219[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_vgs_1_perform (g);
}

static int
test_vgs_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vgs") == NULL;
  str = getenv ("SKIP_TEST_VGS_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VGS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vgs_1_perform (guestfs_h *g)
{
  /* TestResult for vgs (1) */
  const char *arg4220 = "/dev/sda";
  const char *arg4221 = "mbr";
  int ret9;
  ret9 = guestfs_part_init (g, arg4220, arg4221);
  if (ret9 == -1)
    return -1;
  const char *arg4223 = "/dev/sda";
  const char *arg4224 = "p";
  int ret8;
  ret8 = guestfs_part_add (g, arg4223, arg4224, 64, 204799);
  if (ret8 == -1)
    return -1;
  const char *arg4228 = "/dev/sda";
  const char *arg4229 = "p";
  int ret7;
  ret7 = guestfs_part_add (g, arg4228, arg4229, 204800, 409599);
  if (ret7 == -1)
    return -1;
  const char *arg4233 = "/dev/sda";
  const char *arg4234 = "p";
  int ret6;
  ret6 = guestfs_part_add (g, arg4233, arg4234, 409600, -64);
  if (ret6 == -1)
    return -1;
  const char *arg4238 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg4238);
  if (ret5 == -1)
    return -1;
  const char *arg4240 = "/dev/sda2";
  int ret4;
  ret4 = guestfs_pvcreate (g, arg4240);
  if (ret4 == -1)
    return -1;
  const char *arg4242 = "/dev/sda3";
  int ret3;
  ret3 = guestfs_pvcreate (g, arg4242);
  if (ret3 == -1)
    return -1;
  const char *arg4244 = "VG1";
  const char *arg4245_0 = "/dev/sda1";
  const char *arg4245_1 = "/dev/sda2";
  const char *const arg4245[] = {
    arg4245_0,
    arg4245_1,
    NULL
  };
  int ret2;
  ret2 = guestfs_vgcreate (g, arg4244, (char **) arg4245);
  if (ret2 == -1)
    return -1;
  const char *arg4247 = "VG2";
  const char *arg4248_0 = "/dev/sda3";
  const char *const arg4248[] = {
    arg4248_0,
    NULL
  };
  int ret1;
  ret1 = guestfs_vgcreate (g, arg4247, (char **) arg4248);
  if (ret1 == -1)
    return -1;
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_vgs (g);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "VG1", "VG2"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_vgs_1", "is_string_list (ret, 2, \"VG1\", \"VG2\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_vgscan_0_skip (void);
static int test_vgscan_0_perform (guestfs_h *);

static int
test_vgscan_0 (guestfs_h *g)
{
  if (test_vgscan_0_skip ()) {
    skipped ("test_vgscan_0", "environment variable set");
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_vgscan_0_perform (g);
}

static int
test_vgscan_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "vgscan") == NULL;
  str = getenv ("SKIP_TEST_VGSCAN_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_VGSCAN");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_vgscan_0_perform (guestfs_h *g)
{
  /* TestRun for vgscan (0) */
  int ret4251;
  ret4251 = guestfs_vgscan (g);
  if (ret4251 == -1)
    return -1;
  return 0;
}

static int test_wc_c_0_skip (void);
static int test_wc_c_0_perform (guestfs_h *);

static int
test_wc_c_0 (guestfs_h *g)
{
  if (test_wc_c_0_skip ()) {
    skipped ("test_wc_c_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_wc_c_0_perform (g);
}

static int
test_wc_c_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "wc_c") == NULL;
  str = getenv ("SKIP_TEST_WC_C_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_WC_C");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_wc_c_0_perform (guestfs_h *g)
{
  /* TestResult for wc_c (0) */
  const char *arg4253 = "/100kallspaces";
  int ret;
  ret = guestfs_wc_c (g, arg4253);
  if (ret == -1)
    return -1;
  if (! (ret == 102400)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_wc_c_0", "ret == 102400");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_wc_l_0_skip (void);
static int test_wc_l_0_perform (guestfs_h *);

static int
test_wc_l_0 (guestfs_h *g)
{
  if (test_wc_l_0_skip ()) {
    skipped ("test_wc_l_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_wc_l_0_perform (g);
}

static int
test_wc_l_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "wc_l") == NULL;
  str = getenv ("SKIP_TEST_WC_L_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_WC_L");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_wc_l_0_perform (guestfs_h *g)
{
  /* TestResult for wc_l (0) */
  const char *arg4255 = "/10klines";
  int ret;
  ret = guestfs_wc_l (g, arg4255);
  if (ret == -1)
    return -1;
  if (! (ret == 10000)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_wc_l_0", "ret == 10000");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_wc_l_1_skip (void);
static int test_wc_l_1_perform (guestfs_h *);

static int
test_wc_l_1 (guestfs_h *g)
{
  if (test_wc_l_1_skip ()) {
    skipped ("test_wc_l_1", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_wc_l_1_perform (g);
}

static int
test_wc_l_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "wc_l") == NULL;
  str = getenv ("SKIP_TEST_WC_L_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_WC_L");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_wc_l_1_perform (guestfs_h *g)
{
  /* TestResult for wc_l (1) */
  const char *arg4257 = "/abssymlink";
  int ret;
  ret = guestfs_wc_l (g, arg4257);
  if (ret == -1)
    return -1;
  if (! (ret == 10000)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_wc_l_1", "ret == 10000");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_wc_w_0_skip (void);
static int test_wc_w_0_perform (guestfs_h *);

static int
test_wc_w_0 (guestfs_h *g)
{
  if (test_wc_w_0_skip ()) {
    skipped ("test_wc_w_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_wc_w_0_perform (g);
}

static int
test_wc_w_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "wc_w") == NULL;
  str = getenv ("SKIP_TEST_WC_W_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_WC_W");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_wc_w_0_perform (guestfs_h *g)
{
  /* TestResult for wc_w (0) */
  const char *arg4259 = "/10klines";
  int ret;
  ret = guestfs_wc_w (g, arg4259);
  if (ret == -1)
    return -1;
  if (! (ret == 10000)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_wc_w_0", "ret == 10000");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_wipefs_0_skip (void);
static int test_wipefs_0_perform (guestfs_h *);

static int
test_wipefs_0 (guestfs_h *g)
{
  if (test_wipefs_0_skip ()) {
    skipped ("test_wipefs_0", "environment variable set");
    return 0;
  }

  const char *features4261[] = { "wipefs", NULL };
  if (!guestfs_feature_available (g, (char **) features4261)) {
    skipped ("test_wipefs_0", "group %s not available in daemon",
             features4261[0]);
    return 0;
  }

  if (init_basic_fs_on_lvm (g) == -1)
    return -1;

  return test_wipefs_0_perform (g);
}

static int
test_wipefs_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "wipefs") == NULL;
  str = getenv ("SKIP_TEST_WIPEFS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_WIPEFS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_wipefs_0_perform (guestfs_h *g)
{
  /* TestRun for wipefs (0) */
  const char *arg4263 = "/dev/VG/LV";
  struct guestfs_umount_opts_argv optargs4264;
  optargs4264.bitmask = UINT64_C(0x0);
  int ret4262;
  ret4262 = guestfs_umount_opts_argv (g, arg4263, &optargs4264);
  if (ret4262 == -1)
    return -1;
  const char *arg4266 = "/dev/VG/LV";
  int ret4265;
  ret4265 = guestfs_wipefs (g, arg4266);
  if (ret4265 == -1)
    return -1;
  return 0;
}

static int test_write_0_skip (void);
static int test_write_0_perform (guestfs_h *);

static int
test_write_0 (guestfs_h *g)
{
  if (test_write_0_skip ()) {
    skipped ("test_write_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_write_0_perform (g);
}

static int
test_write_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "write") == NULL;
  str = getenv ("SKIP_TEST_WRITE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_WRITE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_write_0_perform (guestfs_h *g)
{
  /* TestResultString for write (0) */
  const char *arg4269 = "/write";
  const char *arg4270 = "new file contents";
  size_t arg4270_size = 17;
  int ret4268;
  ret4268 = guestfs_write (g, arg4269, arg4270, arg4270_size);
  if (ret4268 == -1)
    return -1;
  const char *arg4272 = "/write";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4272);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "new file contents")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_write_0", "cat", "new file contents", ret);
    return -1;
  }
  return 0;
}

static int test_write_1_skip (void);
static int test_write_1_perform (guestfs_h *);

static int
test_write_1 (guestfs_h *g)
{
  if (test_write_1_skip ()) {
    skipped ("test_write_1", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_write_1_perform (g);
}

static int
test_write_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "write") == NULL;
  str = getenv ("SKIP_TEST_WRITE_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_WRITE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_write_1_perform (guestfs_h *g)
{
  /* TestResultString for write (1) */
  const char *arg4275 = "/write2";
  const char *arg4276 = "\nnew file contents\n";
  size_t arg4276_size = 19;
  int ret4274;
  ret4274 = guestfs_write (g, arg4275, arg4276, arg4276_size);
  if (ret4274 == -1)
    return -1;
  const char *arg4278 = "/write2";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4278);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "\nnew file contents\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_write_1", "cat", "\nnew file contents\n", ret);
    return -1;
  }
  return 0;
}

static int test_write_2_skip (void);
static int test_write_2_perform (guestfs_h *);

static int
test_write_2 (guestfs_h *g)
{
  if (test_write_2_skip ()) {
    skipped ("test_write_2", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_write_2_perform (g);
}

static int
test_write_2_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "write") == NULL;
  str = getenv ("SKIP_TEST_WRITE_2");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_WRITE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_write_2_perform (guestfs_h *g)
{
  /* TestResultString for write (2) */
  const char *arg4281 = "/write3";
  const char *arg4282 = "\n\n";
  size_t arg4282_size = 2;
  int ret4280;
  ret4280 = guestfs_write (g, arg4281, arg4282, arg4282_size);
  if (ret4280 == -1)
    return -1;
  const char *arg4284 = "/write3";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4284);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "\n\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_write_2", "cat", "\n\n", ret);
    return -1;
  }
  return 0;
}

static int test_write_3_skip (void);
static int test_write_3_perform (guestfs_h *);

static int
test_write_3 (guestfs_h *g)
{
  if (test_write_3_skip ()) {
    skipped ("test_write_3", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_write_3_perform (g);
}

static int
test_write_3_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "write") == NULL;
  str = getenv ("SKIP_TEST_WRITE_3");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_WRITE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_write_3_perform (guestfs_h *g)
{
  /* TestResultString for write (3) */
  const char *arg4287 = "/write4";
  const char *arg4288 = "";
  size_t arg4288_size = 0;
  int ret4286;
  ret4286 = guestfs_write (g, arg4287, arg4288, arg4288_size);
  if (ret4286 == -1)
    return -1;
  const char *arg4290 = "/write4";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4290);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_write_3", "cat", "", ret);
    return -1;
  }
  return 0;
}

static int test_write_4_skip (void);
static int test_write_4_perform (guestfs_h *);

static int
test_write_4 (guestfs_h *g)
{
  if (test_write_4_skip ()) {
    skipped ("test_write_4", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_write_4_perform (g);
}

static int
test_write_4_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "write") == NULL;
  str = getenv ("SKIP_TEST_WRITE_4");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_WRITE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_write_4_perform (guestfs_h *g)
{
  /* TestResultString for write (4) */
  const char *arg4293 = "/write5";
  const char *arg4294 = "\n\n\n";
  size_t arg4294_size = 3;
  int ret4292;
  ret4292 = guestfs_write (g, arg4293, arg4294, arg4294_size);
  if (ret4292 == -1)
    return -1;
  const char *arg4296 = "/write5";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4296);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "\n\n\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_write_4", "cat", "\n\n\n", ret);
    return -1;
  }
  return 0;
}

static int test_write_5_skip (void);
static int test_write_5_perform (guestfs_h *);

static int
test_write_5 (guestfs_h *g)
{
  if (test_write_5_skip ()) {
    skipped ("test_write_5", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_write_5_perform (g);
}

static int
test_write_5_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "write") == NULL;
  str = getenv ("SKIP_TEST_WRITE_5");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_WRITE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_write_5_perform (guestfs_h *g)
{
  /* TestResultString for write (5) */
  const char *arg4299 = "/write6";
  const char *arg4300 = "\n";
  size_t arg4300_size = 1;
  int ret4298;
  ret4298 = guestfs_write (g, arg4299, arg4300, arg4300_size);
  if (ret4298 == -1)
    return -1;
  const char *arg4302 = "/write6";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4302);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_write_5", "cat", "\n", ret);
    return -1;
  }
  return 0;
}

static int test_write_append_0_skip (void);
static int test_write_append_0_perform (guestfs_h *);

static int
test_write_append_0 (guestfs_h *g)
{
  if (test_write_append_0_skip ()) {
    skipped ("test_write_append_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_write_append_0_perform (g);
}

static int
test_write_append_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "write_append") == NULL;
  str = getenv ("SKIP_TEST_WRITE_APPEND_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_WRITE_APPEND");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_write_append_0_perform (guestfs_h *g)
{
  /* TestResultString for write_append (0) */
  const char *arg4305 = "/write_append";
  const char *arg4306 = "line1\n";
  size_t arg4306_size = 6;
  int ret4304;
  ret4304 = guestfs_write (g, arg4305, arg4306, arg4306_size);
  if (ret4304 == -1)
    return -1;
  const char *arg4309 = "/write_append";
  const char *arg4310 = "line2\n";
  size_t arg4310_size = 6;
  int ret4308;
  ret4308 = guestfs_write_append (g, arg4309, arg4310, arg4310_size);
  if (ret4308 == -1)
    return -1;
  const char *arg4313 = "/write_append";
  const char *arg4314 = "line3a";
  size_t arg4314_size = 6;
  int ret4312;
  ret4312 = guestfs_write_append (g, arg4313, arg4314, arg4314_size);
  if (ret4312 == -1)
    return -1;
  const char *arg4317 = "/write_append";
  const char *arg4318 = "line3b\n";
  size_t arg4318_size = 7;
  int ret4316;
  ret4316 = guestfs_write_append (g, arg4317, arg4318, arg4318_size);
  if (ret4316 == -1)
    return -1;
  const char *arg4320 = "/write_append";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4320);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "line1\nline2\nline3aline3b\n")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_write_append_0", "cat", "line1\nline2\nline3aline3b\n", ret);
    return -1;
  }
  return 0;
}

static int test_write_file_0_skip (void);
static int test_write_file_0_perform (guestfs_h *);

static int
test_write_file_0 (guestfs_h *g)
{
  if (test_write_file_0_skip ()) {
    skipped ("test_write_file_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_write_file_0_perform (g);
}

static int
test_write_file_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "write_file") == NULL;
  str = getenv ("SKIP_TEST_WRITE_FILE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_WRITE_FILE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_write_file_0_perform (guestfs_h *g)
{
  /* TestLastFail for write_file (0) */
  const char *arg4323 = "/write_file";
  const char *arg4324 = "abc";
  int ret4322;
  guestfs_push_error_handler (g, NULL, NULL);
  ret4322 = guestfs_write_file (g, arg4323, arg4324, 10000);
  guestfs_pop_error_handler (g);
  if (ret4322 != -1)
    return -1;
  return 0;
}

static int test_xfs_admin_0_skip (void);
static int test_xfs_admin_0_perform (guestfs_h *);

static int
test_xfs_admin_0 (guestfs_h *g)
{
  if (test_xfs_admin_0_skip ()) {
    skipped ("test_xfs_admin_0", "environment variable set");
    return 0;
  }

  const char *features4327[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4327)) {
    skipped ("test_xfs_admin_0", "group %s not available in daemon",
             features4327[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_xfs_admin_0_perform (g);
}

static int
test_xfs_admin_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "xfs_admin") == NULL;
  str = getenv ("SKIP_TEST_XFS_ADMIN_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_XFS_ADMIN");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_xfs_admin_0_perform (guestfs_h *g)
{
  /* TestResultString for xfs_admin (0) */
  const char *arg4329 = "/dev/sda";
  const char *arg4330 = "mbr";
  int ret4328;
  ret4328 = guestfs_part_disk (g, arg4329, arg4330);
  if (ret4328 == -1)
    return -1;
  const char *arg4333 = "xfs";
  const char *arg4334 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4335;
  optargs4335.bitmask = UINT64_C(0x0);
  int ret4332;
  ret4332 = guestfs_mkfs_opts_argv (g, arg4333, arg4334, &optargs4335);
  if (ret4332 == -1)
    return -1;
  const char *arg4337 = "/dev/sda1";
  struct guestfs_xfs_admin_argv optargs4338;
  optargs4338.uuid = "534e4f31-92b6-7d0f-4490-a30ac7f0ccce";
  optargs4338.bitmask = UINT64_C(0x40);
  int ret4336;
  ret4336 = guestfs_xfs_admin_argv (g, arg4337, &optargs4338);
  if (ret4336 == -1)
    return -1;
  const char *arg4339 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_uuid (g, arg4339);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "534e4f31-92b6-7d0f-4490-a30ac7f0ccce")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_xfs_admin_0", "vfs_uuid", "534e4f31-92b6-7d0f-4490-a30ac7f0ccce", ret);
    return -1;
  }
  return 0;
}

static int test_xfs_admin_1_skip (void);
static int test_xfs_admin_1_perform (guestfs_h *);

static int
test_xfs_admin_1 (guestfs_h *g)
{
  if (test_xfs_admin_1_skip ()) {
    skipped ("test_xfs_admin_1", "environment variable set");
    return 0;
  }

  const char *features4341[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4341)) {
    skipped ("test_xfs_admin_1", "group %s not available in daemon",
             features4341[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_xfs_admin_1_perform (g);
}

static int
test_xfs_admin_1_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "xfs_admin") == NULL;
  str = getenv ("SKIP_TEST_XFS_ADMIN_1");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_XFS_ADMIN");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_xfs_admin_1_perform (guestfs_h *g)
{
  /* TestResultString for xfs_admin (1) */
  const char *arg4343 = "/dev/sda";
  const char *arg4344 = "mbr";
  int ret4342;
  ret4342 = guestfs_part_disk (g, arg4343, arg4344);
  if (ret4342 == -1)
    return -1;
  const char *arg4347 = "xfs";
  const char *arg4348 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4349;
  optargs4349.bitmask = UINT64_C(0x0);
  int ret4346;
  ret4346 = guestfs_mkfs_opts_argv (g, arg4347, arg4348, &optargs4349);
  if (ret4346 == -1)
    return -1;
  const char *arg4351 = "/dev/sda1";
  struct guestfs_xfs_admin_argv optargs4352;
  optargs4352.label = "LBL-TEST";
  optargs4352.bitmask = UINT64_C(0x20);
  int ret4350;
  ret4350 = guestfs_xfs_admin_argv (g, arg4351, &optargs4352);
  if (ret4350 == -1)
    return -1;
  const char *arg4353 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg4353);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "LBL-TEST")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_xfs_admin_1", "vfs_label", "LBL-TEST", ret);
    return -1;
  }
  return 0;
}

static int test_xfs_growfs_0_skip (void);
static int test_xfs_growfs_0_perform (guestfs_h *);

static int
test_xfs_growfs_0 (guestfs_h *g)
{
  if (test_xfs_growfs_0_skip ()) {
    skipped ("test_xfs_growfs_0", "environment variable set");
    return 0;
  }

  const char *features4355[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4355)) {
    skipped ("test_xfs_growfs_0", "group %s not available in daemon",
             features4355[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_xfs_growfs_0_perform (g);
}

static int
test_xfs_growfs_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "xfs_growfs") == NULL;
  str = getenv ("SKIP_TEST_XFS_GROWFS_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_XFS_GROWFS");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_xfs_growfs_0_perform (guestfs_h *g)
{
  /* TestResult for xfs_growfs (0) */
  const char *arg4356 = "/dev/sda";
  const char *arg4357 = "mbr";
  int ret8;
  ret8 = guestfs_part_disk (g, arg4356, arg4357);
  if (ret8 == -1)
    return -1;
  const char *arg4359 = "/dev/sda1";
  int ret7;
  ret7 = guestfs_pvcreate (g, arg4359);
  if (ret7 == -1)
    return -1;
  const char *arg4361 = "VG";
  const char *arg4362_0 = "/dev/sda1";
  const char *const arg4362[] = {
    arg4362_0,
    NULL
  };
  int ret6;
  ret6 = guestfs_vgcreate (g, arg4361, (char **) arg4362);
  if (ret6 == -1)
    return -1;
  const char *arg4364 = "LV";
  const char *arg4365 = "VG";
  int ret5;
  ret5 = guestfs_lvcreate (g, arg4364, arg4365, 300);
  if (ret5 == -1)
    return -1;
  const char *arg4368 = "xfs";
  const char *arg4369 = "/dev/VG/LV";
  struct guestfs_mkfs_opts_argv optargs4370;
  optargs4370.bitmask = UINT64_C(0x0);
  int ret4;
  ret4 = guestfs_mkfs_opts_argv (g, arg4368, arg4369, &optargs4370);
  if (ret4 == -1)
    return -1;
  const char *arg4371 = "/dev/VG/LV";
  int ret3;
  ret3 = guestfs_lvresize (g, arg4371, 400);
  if (ret3 == -1)
    return -1;
  const char *arg4374 = "/dev/VG/LV";
  const char *arg4375 = "/";
  int ret2;
  ret2 = guestfs_mount (g, arg4374, arg4375);
  if (ret2 == -1)
    return -1;
  const char *arg4377 = "/";
  struct guestfs_xfs_growfs_argv optargs4378;
  optargs4378.datasec = 1;
  optargs4378.logsec = 0;
  optargs4378.rtsec = 0;
  optargs4378.bitmask = UINT64_C(0x7);
  int ret1;
  ret1 = guestfs_xfs_growfs_argv (g, arg4377, &optargs4378);
  if (ret1 == -1)
    return -1;
  const char *arg4379 = "/";
  CLEANUP_FREE_XFSINFO struct guestfs_xfsinfo *ret;
  ret = guestfs_xfs_info (g, arg4379);
  if (ret == NULL)
      return -1;
  if (! (ret->xfs_blocksize == 4096)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_xfs_growfs_0", "ret->xfs_blocksize == 4096");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_xfs_info_0_skip (void);
static int test_xfs_info_0_perform (guestfs_h *);

static int
test_xfs_info_0 (guestfs_h *g)
{
  if (test_xfs_info_0_skip ()) {
    skipped ("test_xfs_info_0", "environment variable set");
    return 0;
  }

  const char *features4381[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4381)) {
    skipped ("test_xfs_info_0", "group %s not available in daemon",
             features4381[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_xfs_info_0_perform (g);
}

static int
test_xfs_info_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "xfs_info") == NULL;
  str = getenv ("SKIP_TEST_XFS_INFO_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_XFS_INFO");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_xfs_info_0_perform (guestfs_h *g)
{
  /* TestResult for xfs_info (0) */
  const char *arg4382 = "/dev/sda";
  const char *arg4383 = "mbr";
  int ret3;
  ret3 = guestfs_part_disk (g, arg4382, arg4383);
  if (ret3 == -1)
    return -1;
  const char *arg4385 = "xfs";
  const char *arg4386 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4387;
  optargs4387.bitmask = UINT64_C(0x0);
  int ret2;
  ret2 = guestfs_mkfs_opts_argv (g, arg4385, arg4386, &optargs4387);
  if (ret2 == -1)
    return -1;
  const char *arg4388 = "/dev/sda1";
  const char *arg4389 = "/";
  int ret1;
  ret1 = guestfs_mount (g, arg4388, arg4389);
  if (ret1 == -1)
    return -1;
  const char *arg4391 = "/";
  CLEANUP_FREE_XFSINFO struct guestfs_xfsinfo *ret;
  ret = guestfs_xfs_info (g, arg4391);
  if (ret == NULL)
      return -1;
  if (! (ret->xfs_blocksize == 4096)) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_xfs_info_0", "ret->xfs_blocksize == 4096");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_xfs_repair_0_skip (void);
static int test_xfs_repair_0_perform (guestfs_h *);

static int
test_xfs_repair_0 (guestfs_h *g)
{
  if (test_xfs_repair_0_skip ()) {
    skipped ("test_xfs_repair_0", "environment variable set");
    return 0;
  }

  const char *features4393[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4393)) {
    skipped ("test_xfs_repair_0", "group %s not available in daemon",
             features4393[0]);
    return 0;
  }

  if (init_empty (g) == -1)
    return -1;

  return test_xfs_repair_0_perform (g);
}

static int
test_xfs_repair_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "xfs_repair") == NULL;
  str = getenv ("SKIP_TEST_XFS_REPAIR_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_XFS_REPAIR");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_xfs_repair_0_perform (guestfs_h *g)
{
  /* TestRun for xfs_repair (0) */
  const char *arg4395 = "/dev/sda";
  const char *arg4396 = "mbr";
  int ret4394;
  ret4394 = guestfs_part_disk (g, arg4395, arg4396);
  if (ret4394 == -1)
    return -1;
  const char *arg4399 = "xfs";
  const char *arg4400 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4401;
  optargs4401.bitmask = UINT64_C(0x0);
  int ret4398;
  ret4398 = guestfs_mkfs_opts_argv (g, arg4399, arg4400, &optargs4401);
  if (ret4398 == -1)
    return -1;
  const char *arg4403 = "/dev/sda1";
  struct guestfs_xfs_repair_argv optargs4404;
  optargs4404.nomodify = 1;
  optargs4404.bitmask = UINT64_C(0x2);
  int ret4402;
  ret4402 = guestfs_xfs_repair_argv (g, arg4403, &optargs4404);
  if (ret4402 == -1)
    return -1;
  return 0;
}

static int test_zegrep_0_skip (void);
static int test_zegrep_0_perform (guestfs_h *);

static int
test_zegrep_0 (guestfs_h *g)
{
  if (test_zegrep_0_skip ()) {
    skipped ("test_zegrep_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_zegrep_0_perform (g);
}

static int
test_zegrep_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "zegrep") == NULL;
  str = getenv ("SKIP_TEST_ZEGREP_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ZEGREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_zegrep_0_perform (guestfs_h *g)
{
  /* TestResult for zegrep (0) */
  const char *arg4405 = "abc";
  const char *arg4406 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zegrep (g, arg4405, arg4406);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "abc", "abc123"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_zegrep_0", "is_string_list (ret, 2, \"abc\", \"abc123\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_zegrepi_0_skip (void);
static int test_zegrepi_0_perform (guestfs_h *);

static int
test_zegrepi_0 (guestfs_h *g)
{
  if (test_zegrepi_0_skip ()) {
    skipped ("test_zegrepi_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_zegrepi_0_perform (g);
}

static int
test_zegrepi_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "zegrepi") == NULL;
  str = getenv ("SKIP_TEST_ZEGREPI_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ZEGREPI");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_zegrepi_0_perform (guestfs_h *g)
{
  /* TestResult for zegrepi (0) */
  const char *arg4408 = "abc";
  const char *arg4409 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zegrepi (g, arg4408, arg4409);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "abc", "abc123", "ABC"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_zegrepi_0", "is_string_list (ret, 3, \"abc\", \"abc123\", \"ABC\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_zero_0_skip (void);
static int test_zero_0_perform (guestfs_h *);

static int
test_zero_0 (guestfs_h *g)
{
  if (test_zero_0_skip ()) {
    skipped ("test_zero_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs (g) == -1)
    return -1;

  return test_zero_0_perform (g);
}

static int
test_zero_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "zero") == NULL;
  str = getenv ("SKIP_TEST_ZERO_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ZERO");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_zero_0_perform (guestfs_h *g)
{
  /* TestRun for zero (0) */
  const char *arg4412 = "/dev/sda1";
  struct guestfs_umount_opts_argv optargs4413;
  optargs4413.force = 0;
  optargs4413.lazyunmount = 0;
  optargs4413.bitmask = UINT64_C(0x3);
  int ret4411;
  ret4411 = guestfs_umount_opts_argv (g, arg4412, &optargs4413);
  if (ret4411 == -1)
    return -1;
  const char *arg4415 = "/dev/sda1";
  int ret4414;
  ret4414 = guestfs_zero (g, arg4415);
  if (ret4414 == -1)
    return -1;
  return 0;
}

static int test_zero_device_0_skip (void);
static int test_zero_device_0_perform (guestfs_h *);

static int
test_zero_device_0 (guestfs_h *g)
{
  if (test_zero_device_0_skip ()) {
    skipped ("test_zero_device_0", "environment variable set");
    return 0;
  }

  if (init_basic_fs_on_lvm (g) == -1)
    return -1;

  return test_zero_device_0_perform (g);
}

static int
test_zero_device_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "zero_device") == NULL;
  str = getenv ("SKIP_TEST_ZERO_DEVICE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ZERO_DEVICE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_zero_device_0_perform (guestfs_h *g)
{
  /* TestRun for zero_device (0) */
  const char *arg4418 = "/dev/VG/LV";
  int ret4417;
  ret4417 = guestfs_zero_device (g, arg4418);
  if (ret4417 == -1)
    return -1;
  return 0;
}

static int test_zero_free_space_0_skip (void);
static int test_zero_free_space_0_perform (guestfs_h *);

static int
test_zero_free_space_0 (guestfs_h *g)
{
  if (test_zero_free_space_0_skip ()) {
    skipped ("test_zero_free_space_0", "environment variable set");
    return 0;
  }

  if (init_scratch_fs (g) == -1)
    return -1;

  return test_zero_free_space_0_perform (g);
}

static int
test_zero_free_space_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "zero_free_space") == NULL;
  str = getenv ("SKIP_TEST_ZERO_FREE_SPACE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ZERO_FREE_SPACE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_zero_free_space_0_perform (guestfs_h *g)
{
  /* TestRun for zero_free_space (0) */
  const char *arg4421 = "/";
  int ret4420;
  ret4420 = guestfs_zero_free_space (g, arg4421);
  if (ret4420 == -1)
    return -1;
  return 0;
}

static int test_zerofree_0_skip (void);
static int test_zerofree_0_perform (guestfs_h *);

static int
test_zerofree_0 (guestfs_h *g)
{
  if (test_zerofree_0_skip ()) {
    skipped ("test_zerofree_0", "environment variable set");
    return 0;
  }

  const char *features4423[] = { "zerofree", NULL };
  if (!guestfs_feature_available (g, (char **) features4423)) {
    skipped ("test_zerofree_0", "group %s not available in daemon",
             features4423[0]);
    return 0;
  }

  if (init_none (g) == -1)
    return -1;

  return test_zerofree_0_perform (g);
}

static int
test_zerofree_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "zerofree") == NULL;
  str = getenv ("SKIP_TEST_ZEROFREE_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ZEROFREE");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_zerofree_0_perform (guestfs_h *g)
{
  /* TestResultString for zerofree (0) */
  const char *arg4425 = "/dev/sda";
  const char *arg4426 = "mbr";
  int ret4424;
  ret4424 = guestfs_part_disk (g, arg4425, arg4426);
  if (ret4424 == -1)
    return -1;
  const char *arg4429 = "ext3";
  const char *arg4430 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4431;
  optargs4431.bitmask = UINT64_C(0x0);
  int ret4428;
  ret4428 = guestfs_mkfs_opts_argv (g, arg4429, arg4430, &optargs4431);
  if (ret4428 == -1)
    return -1;
  const char *arg4433 = "/dev/sda1";
  const char *arg4434 = "/";
  int ret4432;
  ret4432 = guestfs_mount (g, arg4433, arg4434);
  if (ret4432 == -1)
    return -1;
  const char *arg4437 = "/new";
  const char *arg4438 = "test file";
  size_t arg4438_size = 9;
  int ret4436;
  ret4436 = guestfs_write (g, arg4437, arg4438, arg4438_size);
  if (ret4436 == -1)
    return -1;
  const char *arg4441 = "/dev/sda1";
  struct guestfs_umount_opts_argv optargs4442;
  optargs4442.force = 0;
  optargs4442.lazyunmount = 0;
  optargs4442.bitmask = UINT64_C(0x3);
  int ret4440;
  ret4440 = guestfs_umount_opts_argv (g, arg4441, &optargs4442);
  if (ret4440 == -1)
    return -1;
  const char *arg4444 = "/dev/sda1";
  int ret4443;
  ret4443 = guestfs_zerofree (g, arg4444);
  if (ret4443 == -1)
    return -1;
  const char *arg4447 = "/dev/sda1";
  const char *arg4448 = "/";
  int ret4446;
  ret4446 = guestfs_mount (g, arg4447, arg4448);
  if (ret4446 == -1)
    return -1;
  const char *arg4450 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4450);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "test file")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_zerofree_0", "cat", "test file", ret);
    return -1;
  }
  return 0;
}

static int test_zfgrep_0_skip (void);
static int test_zfgrep_0_perform (guestfs_h *);

static int
test_zfgrep_0 (guestfs_h *g)
{
  if (test_zfgrep_0_skip ()) {
    skipped ("test_zfgrep_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_zfgrep_0_perform (g);
}

static int
test_zfgrep_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "zfgrep") == NULL;
  str = getenv ("SKIP_TEST_ZFGREP_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ZFGREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_zfgrep_0_perform (guestfs_h *g)
{
  /* TestResult for zfgrep (0) */
  const char *arg4452 = "abc";
  const char *arg4453 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zfgrep (g, arg4452, arg4453);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "abc", "abc123"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_zfgrep_0", "is_string_list (ret, 2, \"abc\", \"abc123\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_zfgrepi_0_skip (void);
static int test_zfgrepi_0_perform (guestfs_h *);

static int
test_zfgrepi_0 (guestfs_h *g)
{
  if (test_zfgrepi_0_skip ()) {
    skipped ("test_zfgrepi_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_zfgrepi_0_perform (g);
}

static int
test_zfgrepi_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "zfgrepi") == NULL;
  str = getenv ("SKIP_TEST_ZFGREPI_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ZFGREPI");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_zfgrepi_0_perform (guestfs_h *g)
{
  /* TestResult for zfgrepi (0) */
  const char *arg4455 = "abc";
  const char *arg4456 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zfgrepi (g, arg4455, arg4456);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "abc", "abc123", "ABC"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_zfgrepi_0", "is_string_list (ret, 3, \"abc\", \"abc123\", \"ABC\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_zgrep_0_skip (void);
static int test_zgrep_0_perform (guestfs_h *);

static int
test_zgrep_0 (guestfs_h *g)
{
  if (test_zgrep_0_skip ()) {
    skipped ("test_zgrep_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_zgrep_0_perform (g);
}

static int
test_zgrep_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "zgrep") == NULL;
  str = getenv ("SKIP_TEST_ZGREP_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ZGREP");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_zgrep_0_perform (guestfs_h *g)
{
  /* TestResult for zgrep (0) */
  const char *arg4458 = "abc";
  const char *arg4459 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zgrep (g, arg4458, arg4459);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 2, "abc", "abc123"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_zgrep_0", "is_string_list (ret, 2, \"abc\", \"abc123\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

static int test_zgrepi_0_skip (void);
static int test_zgrepi_0_perform (guestfs_h *);

static int
test_zgrepi_0 (guestfs_h *g)
{
  if (test_zgrepi_0_skip ()) {
    skipped ("test_zgrepi_0", "environment variable set");
    return 0;
  }

  if (init_iso_fs (g) == -1)
    return -1;

  return test_zgrepi_0_perform (g);
}

static int
test_zgrepi_0_skip (void)
{
  const char *str;

  str = getenv ("TEST_ONLY");
  if (str)
    return strstr (str, "zgrepi") == NULL;
  str = getenv ("SKIP_TEST_ZGREPI_0");
  if (str && STREQ (str, "1")) return 1;
  str = getenv ("SKIP_TEST_ZGREPI");
  if (str && STREQ (str, "1")) return 1;
  return 0;
}

static int
test_zgrepi_0_perform (guestfs_h *g)
{
  /* TestResult for zgrepi (0) */
  const char *arg4461 = "abc";
  const char *arg4462 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zgrepi (g, arg4461, arg4462);
  if (ret == NULL)
      return -1;
  if (! (is_string_list (ret, 3, "abc", "abc123", "ABC"))) {
    fprintf (stderr, "%s: test failed: expression false: %s\n",
             "test_zgrepi_0", "is_string_list (ret, 3, \"abc\", \"abc123\", \"ABC\")");
    if (!guestfs_get_trace (g))
      fprintf (stderr, "Set LIBGUESTFS_TRACE=1 to see values returned from API calls.\n");
    return -1;
  }
  return 0;
}

size_t nr_tests = 553;

struct test tests[553] = {
  { .name = "test_acl_delete_def_file_0", .test_fn = test_acl_delete_def_file_0 },
  { .name = "test_acl_delete_def_file_1", .test_fn = test_acl_delete_def_file_1 },
  { .name = "test_acl_set_file_0", .test_fn = test_acl_set_file_0 },
  { .name = "test_acl_set_file_1", .test_fn = test_acl_set_file_1 },
  { .name = "test_acl_set_file_2", .test_fn = test_acl_set_file_2 },
  { .name = "test_acl_set_file_3", .test_fn = test_acl_set_file_3 },
  { .name = "test_acl_set_file_4", .test_fn = test_acl_set_file_4 },
  { .name = "test_acl_set_file_5", .test_fn = test_acl_set_file_5 },
  { .name = "test_aug_init_0", .test_fn = test_aug_init_0 },
  { .name = "test_aug_insert_0", .test_fn = test_aug_insert_0 },
  { .name = "test_aug_label_0", .test_fn = test_aug_label_0 },
  { .name = "test_aug_ls_0", .test_fn = test_aug_ls_0 },
  { .name = "test_aug_set_0", .test_fn = test_aug_set_0 },
  { .name = "test_aug_setm_0", .test_fn = test_aug_setm_0 },
  { .name = "test_available_0", .test_fn = test_available_0 },
  { .name = "test_available_all_groups_0", .test_fn = test_available_all_groups_0 },
  { .name = "test_base64_in_0", .test_fn = test_base64_in_0 },
  { .name = "test_blkid_0", .test_fn = test_blkid_0 },
  { .name = "test_blockdev_flushbufs_0", .test_fn = test_blockdev_flushbufs_0 },
  { .name = "test_blockdev_getro_0", .test_fn = test_blockdev_getro_0 },
  { .name = "test_blockdev_getsize64_0", .test_fn = test_blockdev_getsize64_0 },
  { .name = "test_blockdev_getss_0", .test_fn = test_blockdev_getss_0 },
  { .name = "test_blockdev_getsz_0", .test_fn = test_blockdev_getsz_0 },
  { .name = "test_blockdev_rereadpt_0", .test_fn = test_blockdev_rereadpt_0 },
  { .name = "test_blockdev_setra_0", .test_fn = test_blockdev_setra_0 },
  { .name = "test_blockdev_setro_0", .test_fn = test_blockdev_setro_0 },
  { .name = "test_blockdev_setrw_0", .test_fn = test_blockdev_setrw_0 },
  { .name = "test_btrfs_filesystem_defragment_0", .test_fn = test_btrfs_filesystem_defragment_0 },
  { .name = "test_btrfs_filesystem_defragment_1", .test_fn = test_btrfs_filesystem_defragment_1 },
  { .name = "test_btrfs_filesystem_show_0", .test_fn = test_btrfs_filesystem_show_0 },
  { .name = "test_btrfs_filesystem_show_1", .test_fn = test_btrfs_filesystem_show_1 },
  { .name = "test_btrfs_filesystem_show_2", .test_fn = test_btrfs_filesystem_show_2 },
  { .name = "test_btrfs_filesystem_sync_0", .test_fn = test_btrfs_filesystem_sync_0 },
  { .name = "test_btrfs_fsck_0", .test_fn = test_btrfs_fsck_0 },
  { .name = "test_btrfs_image_0", .test_fn = test_btrfs_image_0 },
  { .name = "test_btrfs_qgroup_assign_0", .test_fn = test_btrfs_qgroup_assign_0 },
  { .name = "test_btrfs_qgroup_create_0", .test_fn = test_btrfs_qgroup_create_0 },
  { .name = "test_btrfs_qgroup_destroy_0", .test_fn = test_btrfs_qgroup_destroy_0 },
  { .name = "test_btrfs_qgroup_limit_0", .test_fn = test_btrfs_qgroup_limit_0 },
  { .name = "test_btrfs_qgroup_limit_1", .test_fn = test_btrfs_qgroup_limit_1 },
  { .name = "test_btrfs_qgroup_remove_0", .test_fn = test_btrfs_qgroup_remove_0 },
  { .name = "test_btrfs_qgroup_show_0", .test_fn = test_btrfs_qgroup_show_0 },
  { .name = "test_btrfs_quota_enable_0", .test_fn = test_btrfs_quota_enable_0 },
  { .name = "test_btrfs_quota_enable_1", .test_fn = test_btrfs_quota_enable_1 },
  { .name = "test_btrfs_quota_enable_2", .test_fn = test_btrfs_quota_enable_2 },
  { .name = "test_btrfs_quota_enable_3", .test_fn = test_btrfs_quota_enable_3 },
  { .name = "test_btrfs_quota_rescan_0", .test_fn = test_btrfs_quota_rescan_0 },
  { .name = "test_btrfs_quota_rescan_1", .test_fn = test_btrfs_quota_rescan_1 },
  { .name = "test_btrfs_rescue_chunk_recover_0", .test_fn = test_btrfs_rescue_chunk_recover_0 },
  { .name = "test_btrfs_rescue_super_recover_0", .test_fn = test_btrfs_rescue_super_recover_0 },
  { .name = "test_btrfs_scrub_start_0", .test_fn = test_btrfs_scrub_start_0 },
  { .name = "test_btrfs_scrub_status_0", .test_fn = test_btrfs_scrub_status_0 },
  { .name = "test_btrfs_set_seeding_0", .test_fn = test_btrfs_set_seeding_0 },
  { .name = "test_btrfs_subvolume_delete_0", .test_fn = test_btrfs_subvolume_delete_0 },
  { .name = "test_btrfs_subvolume_get_default_0", .test_fn = test_btrfs_subvolume_get_default_0 },
  { .name = "test_btrfs_subvolume_get_default_1", .test_fn = test_btrfs_subvolume_get_default_1 },
  { .name = "test_btrfs_subvolume_show_0", .test_fn = test_btrfs_subvolume_show_0 },
  { .name = "test_btrfs_subvolume_show_1", .test_fn = test_btrfs_subvolume_show_1 },
  { .name = "test_btrfs_subvolume_snapshot_0", .test_fn = test_btrfs_subvolume_snapshot_0 },
  { .name = "test_btrfstune_enable_extended_inode_refs_0", .test_fn = test_btrfstune_enable_extended_inode_refs_0 },
  { .name = "test_btrfstune_enable_skinny_metadata_extent_refs_0", .test_fn = test_btrfstune_enable_skinny_metadata_extent_refs_0 },
  { .name = "test_btrfstune_seeding_0", .test_fn = test_btrfstune_seeding_0 },
  { .name = "test_c_pointer_0", .test_fn = test_c_pointer_0 },
  { .name = "test_canonical_device_name_0", .test_fn = test_canonical_device_name_0 },
  { .name = "test_canonical_device_name_1", .test_fn = test_canonical_device_name_1 },
  { .name = "test_canonical_device_name_2", .test_fn = test_canonical_device_name_2 },
  { .name = "test_canonical_device_name_3", .test_fn = test_canonical_device_name_3 },
  { .name = "test_canonical_device_name_4", .test_fn = test_canonical_device_name_4 },
  { .name = "test_canonical_device_name_5", .test_fn = test_canonical_device_name_5 },
  { .name = "test_cap_set_file_0", .test_fn = test_cap_set_file_0 },
  { .name = "test_case_sensitive_path_0", .test_fn = test_case_sensitive_path_0 },
  { .name = "test_case_sensitive_path_1", .test_fn = test_case_sensitive_path_1 },
  { .name = "test_case_sensitive_path_2", .test_fn = test_case_sensitive_path_2 },
  { .name = "test_case_sensitive_path_3", .test_fn = test_case_sensitive_path_3 },
  { .name = "test_case_sensitive_path_4", .test_fn = test_case_sensitive_path_4 },
  { .name = "test_case_sensitive_path_5", .test_fn = test_case_sensitive_path_5 },
  { .name = "test_case_sensitive_path_6", .test_fn = test_case_sensitive_path_6 },
  { .name = "test_case_sensitive_path_7", .test_fn = test_case_sensitive_path_7 },
  { .name = "test_cat_0", .test_fn = test_cat_0 },
  { .name = "test_checksum_0", .test_fn = test_checksum_0 },
  { .name = "test_checksum_1", .test_fn = test_checksum_1 },
  { .name = "test_checksum_2", .test_fn = test_checksum_2 },
  { .name = "test_checksum_3", .test_fn = test_checksum_3 },
  { .name = "test_checksum_4", .test_fn = test_checksum_4 },
  { .name = "test_checksum_5", .test_fn = test_checksum_5 },
  { .name = "test_checksum_6", .test_fn = test_checksum_6 },
  { .name = "test_checksum_7", .test_fn = test_checksum_7 },
  { .name = "test_checksum_8", .test_fn = test_checksum_8 },
  { .name = "test_checksum_device_0", .test_fn = test_checksum_device_0 },
  { .name = "test_command_0", .test_fn = test_command_0 },
  { .name = "test_command_1", .test_fn = test_command_1 },
  { .name = "test_command_2", .test_fn = test_command_2 },
  { .name = "test_command_3", .test_fn = test_command_3 },
  { .name = "test_command_4", .test_fn = test_command_4 },
  { .name = "test_command_5", .test_fn = test_command_5 },
  { .name = "test_command_6", .test_fn = test_command_6 },
  { .name = "test_command_7", .test_fn = test_command_7 },
  { .name = "test_command_8", .test_fn = test_command_8 },
  { .name = "test_command_9", .test_fn = test_command_9 },
  { .name = "test_command_10", .test_fn = test_command_10 },
  { .name = "test_command_11", .test_fn = test_command_11 },
  { .name = "test_command_12", .test_fn = test_command_12 },
  { .name = "test_command_lines_0", .test_fn = test_command_lines_0 },
  { .name = "test_command_lines_1", .test_fn = test_command_lines_1 },
  { .name = "test_command_lines_2", .test_fn = test_command_lines_2 },
  { .name = "test_command_lines_3", .test_fn = test_command_lines_3 },
  { .name = "test_command_lines_4", .test_fn = test_command_lines_4 },
  { .name = "test_command_lines_5", .test_fn = test_command_lines_5 },
  { .name = "test_command_lines_6", .test_fn = test_command_lines_6 },
  { .name = "test_command_lines_7", .test_fn = test_command_lines_7 },
  { .name = "test_command_lines_8", .test_fn = test_command_lines_8 },
  { .name = "test_command_lines_9", .test_fn = test_command_lines_9 },
  { .name = "test_command_lines_10", .test_fn = test_command_lines_10 },
  { .name = "test_copy_file_to_file_0", .test_fn = test_copy_file_to_file_0 },
  { .name = "test_copy_file_to_file_1", .test_fn = test_copy_file_to_file_1 },
  { .name = "test_copy_file_to_file_2", .test_fn = test_copy_file_to_file_2 },
  { .name = "test_copy_size_0", .test_fn = test_copy_size_0 },
  { .name = "test_cp_0", .test_fn = test_cp_0 },
  { .name = "test_cp_1", .test_fn = test_cp_1 },
  { .name = "test_cp_2", .test_fn = test_cp_2 },
  { .name = "test_cp_a_0", .test_fn = test_cp_a_0 },
  { .name = "test_cp_r_0", .test_fn = test_cp_r_0 },
  { .name = "test_dd_0", .test_fn = test_dd_0 },
  { .name = "test_device_index_0", .test_fn = test_device_index_0 },
  { .name = "test_device_name_0", .test_fn = test_device_name_0 },
  { .name = "test_device_name_1", .test_fn = test_device_name_1 },
  { .name = "test_device_name_2", .test_fn = test_device_name_2 },
  { .name = "test_disk_format_0", .test_fn = test_disk_format_0 },
  { .name = "test_disk_format_1", .test_fn = test_disk_format_1 },
  { .name = "test_disk_format_2", .test_fn = test_disk_format_2 },
  { .name = "test_disk_format_3", .test_fn = test_disk_format_3 },
  { .name = "test_disk_format_4", .test_fn = test_disk_format_4 },
  { .name = "test_disk_format_5", .test_fn = test_disk_format_5 },
  { .name = "test_disk_format_6", .test_fn = test_disk_format_6 },
  { .name = "test_disk_has_backing_file_0", .test_fn = test_disk_has_backing_file_0 },
  { .name = "test_disk_has_backing_file_1", .test_fn = test_disk_has_backing_file_1 },
  { .name = "test_disk_has_backing_file_2", .test_fn = test_disk_has_backing_file_2 },
  { .name = "test_disk_has_backing_file_3", .test_fn = test_disk_has_backing_file_3 },
  { .name = "test_disk_has_backing_file_4", .test_fn = test_disk_has_backing_file_4 },
  { .name = "test_disk_has_backing_file_5", .test_fn = test_disk_has_backing_file_5 },
  { .name = "test_disk_has_backing_file_6", .test_fn = test_disk_has_backing_file_6 },
  { .name = "test_disk_virtual_size_0", .test_fn = test_disk_virtual_size_0 },
  { .name = "test_disk_virtual_size_1", .test_fn = test_disk_virtual_size_1 },
  { .name = "test_disk_virtual_size_2", .test_fn = test_disk_virtual_size_2 },
  { .name = "test_disk_virtual_size_3", .test_fn = test_disk_virtual_size_3 },
  { .name = "test_disk_virtual_size_4", .test_fn = test_disk_virtual_size_4 },
  { .name = "test_disk_virtual_size_5", .test_fn = test_disk_virtual_size_5 },
  { .name = "test_disk_virtual_size_6", .test_fn = test_disk_virtual_size_6 },
  { .name = "test_dmesg_0", .test_fn = test_dmesg_0 },
  { .name = "test_download_0", .test_fn = test_download_0 },
  { .name = "test_download_offset_0", .test_fn = test_download_offset_0 },
  { .name = "test_drop_caches_0", .test_fn = test_drop_caches_0 },
  { .name = "test_du_0", .test_fn = test_du_0 },
  { .name = "test_echo_daemon_0", .test_fn = test_echo_daemon_0 },
  { .name = "test_echo_daemon_1", .test_fn = test_echo_daemon_1 },
  { .name = "test_egrep_0", .test_fn = test_egrep_0 },
  { .name = "test_egrepi_0", .test_fn = test_egrepi_0 },
  { .name = "test_equal_0", .test_fn = test_equal_0 },
  { .name = "test_equal_1", .test_fn = test_equal_1 },
  { .name = "test_equal_2", .test_fn = test_equal_2 },
  { .name = "test_exists_0", .test_fn = test_exists_0 },
  { .name = "test_exists_1", .test_fn = test_exists_1 },
  { .name = "test_fallocate_0", .test_fn = test_fallocate_0 },
  { .name = "test_fallocate64_0", .test_fn = test_fallocate64_0 },
  { .name = "test_feature_available_0", .test_fn = test_feature_available_0 },
  { .name = "test_fgrep_0", .test_fn = test_fgrep_0 },
  { .name = "test_fgrepi_0", .test_fn = test_fgrepi_0 },
  { .name = "test_file_0", .test_fn = test_file_0 },
  { .name = "test_file_1", .test_fn = test_file_1 },
  { .name = "test_file_2", .test_fn = test_file_2 },
  { .name = "test_file_3", .test_fn = test_file_3 },
  { .name = "test_file_4", .test_fn = test_file_4 },
  { .name = "test_file_architecture_0", .test_fn = test_file_architecture_0 },
  { .name = "test_file_architecture_1", .test_fn = test_file_architecture_1 },
  { .name = "test_file_architecture_2", .test_fn = test_file_architecture_2 },
  { .name = "test_file_architecture_3", .test_fn = test_file_architecture_3 },
  { .name = "test_file_architecture_4", .test_fn = test_file_architecture_4 },
  { .name = "test_file_architecture_5", .test_fn = test_file_architecture_5 },
  { .name = "test_file_architecture_6", .test_fn = test_file_architecture_6 },
  { .name = "test_file_architecture_7", .test_fn = test_file_architecture_7 },
  { .name = "test_file_architecture_8", .test_fn = test_file_architecture_8 },
  { .name = "test_file_architecture_9", .test_fn = test_file_architecture_9 },
  { .name = "test_file_architecture_10", .test_fn = test_file_architecture_10 },
  { .name = "test_file_architecture_11", .test_fn = test_file_architecture_11 },
  { .name = "test_file_architecture_12", .test_fn = test_file_architecture_12 },
  { .name = "test_file_architecture_13", .test_fn = test_file_architecture_13 },
  { .name = "test_file_architecture_14", .test_fn = test_file_architecture_14 },
  { .name = "test_file_architecture_15", .test_fn = test_file_architecture_15 },
  { .name = "test_file_architecture_16", .test_fn = test_file_architecture_16 },
  { .name = "test_file_architecture_17", .test_fn = test_file_architecture_17 },
  { .name = "test_file_architecture_18", .test_fn = test_file_architecture_18 },
  { .name = "test_file_architecture_19", .test_fn = test_file_architecture_19 },
  { .name = "test_file_architecture_20", .test_fn = test_file_architecture_20 },
  { .name = "test_file_architecture_21", .test_fn = test_file_architecture_21 },
  { .name = "test_file_architecture_22", .test_fn = test_file_architecture_22 },
  { .name = "test_file_architecture_23", .test_fn = test_file_architecture_23 },
  { .name = "test_file_architecture_24", .test_fn = test_file_architecture_24 },
  { .name = "test_file_architecture_25", .test_fn = test_file_architecture_25 },
  { .name = "test_file_architecture_26", .test_fn = test_file_architecture_26 },
  { .name = "test_filesize_0", .test_fn = test_filesize_0 },
  { .name = "test_fill_0", .test_fn = test_fill_0 },
  { .name = "test_fill_pattern_0", .test_fn = test_fill_pattern_0 },
  { .name = "test_find_0", .test_fn = test_find_0 },
  { .name = "test_find_1", .test_fn = test_find_1 },
  { .name = "test_find_2", .test_fn = test_find_2 },
  { .name = "test_fsck_0", .test_fn = test_fsck_0 },
  { .name = "test_fsck_1", .test_fn = test_fsck_1 },
  { .name = "test_get_attach_method_0", .test_fn = test_get_attach_method_0 },
  { .name = "test_get_autosync_0", .test_fn = test_get_autosync_0 },
  { .name = "test_get_backend_0", .test_fn = test_get_backend_0 },
  { .name = "test_get_backend_settings_0", .test_fn = test_get_backend_settings_0 },
  { .name = "test_get_e2attrs_0", .test_fn = test_get_e2attrs_0 },
  { .name = "test_get_e2attrs_1", .test_fn = test_get_e2attrs_1 },
  { .name = "test_get_e2attrs_2", .test_fn = test_get_e2attrs_2 },
  { .name = "test_get_e2attrs_3", .test_fn = test_get_e2attrs_3 },
  { .name = "test_get_e2attrs_4", .test_fn = test_get_e2attrs_4 },
  { .name = "test_get_e2attrs_5", .test_fn = test_get_e2attrs_5 },
  { .name = "test_get_e2attrs_6", .test_fn = test_get_e2attrs_6 },
  { .name = "test_get_e2attrs_7", .test_fn = test_get_e2attrs_7 },
  { .name = "test_get_e2generation_0", .test_fn = test_get_e2generation_0 },
  { .name = "test_get_e2uuid_0", .test_fn = test_get_e2uuid_0 },
  { .name = "test_get_hv_0", .test_fn = test_get_hv_0 },
  { .name = "test_get_identifier_0", .test_fn = test_get_identifier_0 },
  { .name = "test_get_memsize_0", .test_fn = test_get_memsize_0 },
  { .name = "test_get_path_0", .test_fn = test_get_path_0 },
  { .name = "test_get_program_0", .test_fn = test_get_program_0 },
  { .name = "test_get_qemu_0", .test_fn = test_get_qemu_0 },
  { .name = "test_get_umask_0", .test_fn = test_get_umask_0 },
  { .name = "test_glob_expand_0", .test_fn = test_glob_expand_0 },
  { .name = "test_glob_expand_1", .test_fn = test_glob_expand_1 },
  { .name = "test_glob_expand_2", .test_fn = test_glob_expand_2 },
  { .name = "test_glob_expand_3", .test_fn = test_glob_expand_3 },
  { .name = "test_grep_0", .test_fn = test_grep_0 },
  { .name = "test_grep_1", .test_fn = test_grep_1 },
  { .name = "test_grep_2", .test_fn = test_grep_2 },
  { .name = "test_grep_3", .test_fn = test_grep_3 },
  { .name = "test_grep_4", .test_fn = test_grep_4 },
  { .name = "test_grep_5", .test_fn = test_grep_5 },
  { .name = "test_grep_6", .test_fn = test_grep_6 },
  { .name = "test_grep_7", .test_fn = test_grep_7 },
  { .name = "test_grep_8", .test_fn = test_grep_8 },
  { .name = "test_grep_9", .test_fn = test_grep_9 },
  { .name = "test_grep_10", .test_fn = test_grep_10 },
  { .name = "test_grep_11", .test_fn = test_grep_11 },
  { .name = "test_grep_12", .test_fn = test_grep_12 },
  { .name = "test_grep_13", .test_fn = test_grep_13 },
  { .name = "test_grepi_0", .test_fn = test_grepi_0 },
  { .name = "test_grub_install_0", .test_fn = test_grub_install_0 },
  { .name = "test_head_0", .test_fn = test_head_0 },
  { .name = "test_head_1", .test_fn = test_head_1 },
  { .name = "test_head_n_0", .test_fn = test_head_n_0 },
  { .name = "test_head_n_1", .test_fn = test_head_n_1 },
  { .name = "test_head_n_2", .test_fn = test_head_n_2 },
  { .name = "test_hexdump_0", .test_fn = test_hexdump_0 },
  { .name = "test_hexdump_1", .test_fn = test_hexdump_1 },
  { .name = "test_hexdump_2", .test_fn = test_hexdump_2 },
  { .name = "test_hivex_commit_0", .test_fn = test_hivex_commit_0 },
  { .name = "test_hivex_commit_1", .test_fn = test_hivex_commit_1 },
  { .name = "test_hivex_open_0", .test_fn = test_hivex_open_0 },
  { .name = "test_initrd_cat_0", .test_fn = test_initrd_cat_0 },
  { .name = "test_initrd_list_0", .test_fn = test_initrd_list_0 },
  { .name = "test_inotify_add_watch_0", .test_fn = test_inotify_add_watch_0 },
  { .name = "test_inotify_init_0", .test_fn = test_inotify_init_0 },
  { .name = "test_internal_write_0", .test_fn = test_internal_write_0 },
  { .name = "test_internal_write_1", .test_fn = test_internal_write_1 },
  { .name = "test_internal_write_2", .test_fn = test_internal_write_2 },
  { .name = "test_internal_write_3", .test_fn = test_internal_write_3 },
  { .name = "test_internal_write_4", .test_fn = test_internal_write_4 },
  { .name = "test_internal_write_5", .test_fn = test_internal_write_5 },
  { .name = "test_internal_write_append_0", .test_fn = test_internal_write_append_0 },
  { .name = "test_is_blockdev_0", .test_fn = test_is_blockdev_0 },
  { .name = "test_is_blockdev_1", .test_fn = test_is_blockdev_1 },
  { .name = "test_is_busy_0", .test_fn = test_is_busy_0 },
  { .name = "test_is_chardev_0", .test_fn = test_is_chardev_0 },
  { .name = "test_is_chardev_1", .test_fn = test_is_chardev_1 },
  { .name = "test_is_config_0", .test_fn = test_is_config_0 },
  { .name = "test_is_dir_0", .test_fn = test_is_dir_0 },
  { .name = "test_is_dir_1", .test_fn = test_is_dir_1 },
  { .name = "test_is_fifo_0", .test_fn = test_is_fifo_0 },
  { .name = "test_is_fifo_1", .test_fn = test_is_fifo_1 },
  { .name = "test_is_file_0", .test_fn = test_is_file_0 },
  { .name = "test_is_file_1", .test_fn = test_is_file_1 },
  { .name = "test_is_file_2", .test_fn = test_is_file_2 },
  { .name = "test_is_launching_0", .test_fn = test_is_launching_0 },
  { .name = "test_is_lv_0", .test_fn = test_is_lv_0 },
  { .name = "test_is_lv_1", .test_fn = test_is_lv_1 },
  { .name = "test_is_ready_0", .test_fn = test_is_ready_0 },
  { .name = "test_is_socket_0", .test_fn = test_is_socket_0 },
  { .name = "test_is_symlink_0", .test_fn = test_is_symlink_0 },
  { .name = "test_is_symlink_1", .test_fn = test_is_symlink_1 },
  { .name = "test_is_whole_device_0", .test_fn = test_is_whole_device_0 },
  { .name = "test_is_whole_device_1", .test_fn = test_is_whole_device_1 },
  { .name = "test_is_whole_device_2", .test_fn = test_is_whole_device_2 },
  { .name = "test_is_zero_0", .test_fn = test_is_zero_0 },
  { .name = "test_is_zero_1", .test_fn = test_is_zero_1 },
  { .name = "test_is_zero_device_0", .test_fn = test_is_zero_device_0 },
  { .name = "test_is_zero_device_1", .test_fn = test_is_zero_device_1 },
  { .name = "test_isoinfo_device_0", .test_fn = test_isoinfo_device_0 },
  { .name = "test_list_devices_0", .test_fn = test_list_devices_0 },
  { .name = "test_list_disk_labels_0", .test_fn = test_list_disk_labels_0 },
  { .name = "test_list_partitions_0", .test_fn = test_list_partitions_0 },
  { .name = "test_list_partitions_1", .test_fn = test_list_partitions_1 },
  { .name = "test_ln_0", .test_fn = test_ln_0 },
  { .name = "test_ln_f_0", .test_fn = test_ln_f_0 },
  { .name = "test_ln_s_0", .test_fn = test_ln_s_0 },
  { .name = "test_ln_sf_0", .test_fn = test_ln_sf_0 },
  { .name = "test_ls_0", .test_fn = test_ls_0 },
  { .name = "test_lstat_0", .test_fn = test_lstat_0 },
  { .name = "test_lstatns_0", .test_fn = test_lstatns_0 },
  { .name = "test_lvcreate_0", .test_fn = test_lvcreate_0 },
  { .name = "test_lvcreate_free_0", .test_fn = test_lvcreate_free_0 },
  { .name = "test_lvm_canonical_lv_name_0", .test_fn = test_lvm_canonical_lv_name_0 },
  { .name = "test_lvm_canonical_lv_name_1", .test_fn = test_lvm_canonical_lv_name_1 },
  { .name = "test_lvm_scan_0", .test_fn = test_lvm_scan_0 },
  { .name = "test_lvremove_0", .test_fn = test_lvremove_0 },
  { .name = "test_lvremove_1", .test_fn = test_lvremove_1 },
  { .name = "test_lvremove_2", .test_fn = test_lvremove_2 },
  { .name = "test_lvrename_0", .test_fn = test_lvrename_0 },
  { .name = "test_lvresize_0", .test_fn = test_lvresize_0 },
  { .name = "test_lvresize_1", .test_fn = test_lvresize_1 },
  { .name = "test_lvresize_free_0", .test_fn = test_lvresize_free_0 },
  { .name = "test_lvs_0", .test_fn = test_lvs_0 },
  { .name = "test_lvs_1", .test_fn = test_lvs_1 },
  { .name = "test_mkdir_0", .test_fn = test_mkdir_0 },
  { .name = "test_mkdir_1", .test_fn = test_mkdir_1 },
  { .name = "test_mkdir_mode_0", .test_fn = test_mkdir_mode_0 },
  { .name = "test_mkdir_p_0", .test_fn = test_mkdir_p_0 },
  { .name = "test_mkdir_p_1", .test_fn = test_mkdir_p_1 },
  { .name = "test_mkdir_p_2", .test_fn = test_mkdir_p_2 },
  { .name = "test_mkdir_p_3", .test_fn = test_mkdir_p_3 },
  { .name = "test_mkdir_p_4", .test_fn = test_mkdir_p_4 },
  { .name = "test_mkdtemp_0", .test_fn = test_mkdtemp_0 },
  { .name = "test_mke2fs_0", .test_fn = test_mke2fs_0 },
  { .name = "test_mke2fs_1", .test_fn = test_mke2fs_1 },
  { .name = "test_mke2fs_2", .test_fn = test_mke2fs_2 },
  { .name = "test_mke2journal_0", .test_fn = test_mke2journal_0 },
  { .name = "test_mke2journal_L_0", .test_fn = test_mke2journal_L_0 },
  { .name = "test_mke2journal_U_0", .test_fn = test_mke2journal_U_0 },
  { .name = "test_mkfifo_0", .test_fn = test_mkfifo_0 },
  { .name = "test_mkfifo_1", .test_fn = test_mkfifo_1 },
  { .name = "test_mkfs_0", .test_fn = test_mkfs_0 },
  { .name = "test_mkfs_b_0", .test_fn = test_mkfs_b_0 },
  { .name = "test_mkfs_b_1", .test_fn = test_mkfs_b_1 },
  { .name = "test_mkfs_b_2", .test_fn = test_mkfs_b_2 },
  { .name = "test_mkfs_b_3", .test_fn = test_mkfs_b_3 },
  { .name = "test_mkfs_b_4", .test_fn = test_mkfs_b_4 },
  { .name = "test_mkfs_btrfs_0", .test_fn = test_mkfs_btrfs_0 },
  { .name = "test_mklost_and_found_0", .test_fn = test_mklost_and_found_0 },
  { .name = "test_mknod_0", .test_fn = test_mknod_0 },
  { .name = "test_mknod_1", .test_fn = test_mknod_1 },
  { .name = "test_mknod_b_0", .test_fn = test_mknod_b_0 },
  { .name = "test_mknod_b_1", .test_fn = test_mknod_b_1 },
  { .name = "test_mknod_c_0", .test_fn = test_mknod_c_0 },
  { .name = "test_mknod_c_1", .test_fn = test_mknod_c_1 },
  { .name = "test_mkswap_0", .test_fn = test_mkswap_0 },
  { .name = "test_mkswap_1", .test_fn = test_mkswap_1 },
  { .name = "test_mkswap_2", .test_fn = test_mkswap_2 },
  { .name = "test_mkswap_3", .test_fn = test_mkswap_3 },
  { .name = "test_mkswap_L_0", .test_fn = test_mkswap_L_0 },
  { .name = "test_mkswap_U_0", .test_fn = test_mkswap_U_0 },
  { .name = "test_mkswap_file_0", .test_fn = test_mkswap_file_0 },
  { .name = "test_mktemp_0", .test_fn = test_mktemp_0 },
  { .name = "test_modprobe_0", .test_fn = test_modprobe_0 },
  { .name = "test_mount_0", .test_fn = test_mount_0 },
  { .name = "test_mount_ro_0", .test_fn = test_mount_ro_0 },
  { .name = "test_mount_ro_1", .test_fn = test_mount_ro_1 },
  { .name = "test_mounts_0", .test_fn = test_mounts_0 },
  { .name = "test_mv_0", .test_fn = test_mv_0 },
  { .name = "test_mv_1", .test_fn = test_mv_1 },
  { .name = "test_nr_devices_0", .test_fn = test_nr_devices_0 },
  { .name = "test_ntfs_3g_probe_0", .test_fn = test_ntfs_3g_probe_0 },
  { .name = "test_ntfs_3g_probe_1", .test_fn = test_ntfs_3g_probe_1 },
  { .name = "test_ntfsfix_0", .test_fn = test_ntfsfix_0 },
  { .name = "test_part_add_0", .test_fn = test_part_add_0 },
  { .name = "test_part_add_1", .test_fn = test_part_add_1 },
  { .name = "test_part_add_2", .test_fn = test_part_add_2 },
  { .name = "test_part_del_0", .test_fn = test_part_del_0 },
  { .name = "test_part_disk_0", .test_fn = test_part_disk_0 },
  { .name = "test_part_disk_1", .test_fn = test_part_disk_1 },
  { .name = "test_part_get_bootable_0", .test_fn = test_part_get_bootable_0 },
  { .name = "test_part_get_disk_guid_0", .test_fn = test_part_get_disk_guid_0 },
  { .name = "test_part_get_gpt_attributes_0", .test_fn = test_part_get_gpt_attributes_0 },
  { .name = "test_part_get_gpt_guid_0", .test_fn = test_part_get_gpt_guid_0 },
  { .name = "test_part_get_gpt_type_0", .test_fn = test_part_get_gpt_type_0 },
  { .name = "test_part_get_mbr_id_0", .test_fn = test_part_get_mbr_id_0 },
  { .name = "test_part_get_mbr_part_type_0", .test_fn = test_part_get_mbr_part_type_0 },
  { .name = "test_part_get_mbr_part_type_1", .test_fn = test_part_get_mbr_part_type_1 },
  { .name = "test_part_get_parttype_0", .test_fn = test_part_get_parttype_0 },
  { .name = "test_part_init_0", .test_fn = test_part_init_0 },
  { .name = "test_part_resize_0", .test_fn = test_part_resize_0 },
  { .name = "test_part_set_bootable_0", .test_fn = test_part_set_bootable_0 },
  { .name = "test_part_set_disk_guid_0", .test_fn = test_part_set_disk_guid_0 },
  { .name = "test_part_set_disk_guid_1", .test_fn = test_part_set_disk_guid_1 },
  { .name = "test_part_set_disk_guid_random_0", .test_fn = test_part_set_disk_guid_random_0 },
  { .name = "test_part_set_gpt_attributes_0", .test_fn = test_part_set_gpt_attributes_0 },
  { .name = "test_part_set_gpt_guid_0", .test_fn = test_part_set_gpt_guid_0 },
  { .name = "test_part_set_gpt_guid_1", .test_fn = test_part_set_gpt_guid_1 },
  { .name = "test_part_set_gpt_type_0", .test_fn = test_part_set_gpt_type_0 },
  { .name = "test_part_set_gpt_type_1", .test_fn = test_part_set_gpt_type_1 },
  { .name = "test_part_set_name_0", .test_fn = test_part_set_name_0 },
  { .name = "test_part_to_dev_0", .test_fn = test_part_to_dev_0 },
  { .name = "test_part_to_dev_1", .test_fn = test_part_to_dev_1 },
  { .name = "test_part_to_partnum_0", .test_fn = test_part_to_partnum_0 },
  { .name = "test_part_to_partnum_1", .test_fn = test_part_to_partnum_1 },
  { .name = "test_ping_daemon_0", .test_fn = test_ping_daemon_0 },
  { .name = "test_pread_0", .test_fn = test_pread_0 },
  { .name = "test_pread_1", .test_fn = test_pread_1 },
  { .name = "test_pread_device_0", .test_fn = test_pread_device_0 },
  { .name = "test_pvchange_uuid_0", .test_fn = test_pvchange_uuid_0 },
  { .name = "test_pvchange_uuid_all_0", .test_fn = test_pvchange_uuid_all_0 },
  { .name = "test_pvcreate_0", .test_fn = test_pvcreate_0 },
  { .name = "test_pvremove_0", .test_fn = test_pvremove_0 },
  { .name = "test_pvremove_1", .test_fn = test_pvremove_1 },
  { .name = "test_pvremove_2", .test_fn = test_pvremove_2 },
  { .name = "test_pvs_0", .test_fn = test_pvs_0 },
  { .name = "test_pvs_1", .test_fn = test_pvs_1 },
  { .name = "test_pwrite_0", .test_fn = test_pwrite_0 },
  { .name = "test_pwrite_1", .test_fn = test_pwrite_1 },
  { .name = "test_pwrite_2", .test_fn = test_pwrite_2 },
  { .name = "test_pwrite_device_0", .test_fn = test_pwrite_device_0 },
  { .name = "test_read_file_0", .test_fn = test_read_file_0 },
  { .name = "test_read_lines_0", .test_fn = test_read_lines_0 },
  { .name = "test_read_lines_1", .test_fn = test_read_lines_1 },
  { .name = "test_read_lines_2", .test_fn = test_read_lines_2 },
  { .name = "test_read_lines_3", .test_fn = test_read_lines_3 },
  { .name = "test_read_lines_4", .test_fn = test_read_lines_4 },
  { .name = "test_read_lines_5", .test_fn = test_read_lines_5 },
  { .name = "test_read_lines_6", .test_fn = test_read_lines_6 },
  { .name = "test_read_lines_7", .test_fn = test_read_lines_7 },
  { .name = "test_read_lines_8", .test_fn = test_read_lines_8 },
  { .name = "test_read_lines_9", .test_fn = test_read_lines_9 },
  { .name = "test_realpath_0", .test_fn = test_realpath_0 },
  { .name = "test_remount_0", .test_fn = test_remount_0 },
  { .name = "test_remount_1", .test_fn = test_remount_1 },
  { .name = "test_rename_0", .test_fn = test_rename_0 },
  { .name = "test_rm_0", .test_fn = test_rm_0 },
  { .name = "test_rm_1", .test_fn = test_rm_1 },
  { .name = "test_rm_2", .test_fn = test_rm_2 },
  { .name = "test_rm_f_0", .test_fn = test_rm_f_0 },
  { .name = "test_rm_f_1", .test_fn = test_rm_f_1 },
  { .name = "test_rm_rf_0", .test_fn = test_rm_rf_0 },
  { .name = "test_rmdir_0", .test_fn = test_rmdir_0 },
  { .name = "test_rmdir_1", .test_fn = test_rmdir_1 },
  { .name = "test_rmdir_2", .test_fn = test_rmdir_2 },
  { .name = "test_scrub_device_0", .test_fn = test_scrub_device_0 },
  { .name = "test_scrub_file_0", .test_fn = test_scrub_file_0 },
  { .name = "test_scrub_file_1", .test_fn = test_scrub_file_1 },
  { .name = "test_scrub_file_2", .test_fn = test_scrub_file_2 },
  { .name = "test_scrub_file_3", .test_fn = test_scrub_file_3 },
  { .name = "test_set_e2label_0", .test_fn = test_set_e2label_0 },
  { .name = "test_set_e2uuid_0", .test_fn = test_set_e2uuid_0 },
  { .name = "test_set_e2uuid_1", .test_fn = test_set_e2uuid_1 },
  { .name = "test_set_e2uuid_2", .test_fn = test_set_e2uuid_2 },
  { .name = "test_set_e2uuid_3", .test_fn = test_set_e2uuid_3 },
  { .name = "test_set_label_0", .test_fn = test_set_label_0 },
  { .name = "test_set_label_1", .test_fn = test_set_label_1 },
  { .name = "test_set_label_2", .test_fn = test_set_label_2 },
  { .name = "test_set_trace_0", .test_fn = test_set_trace_0 },
  { .name = "test_set_uuid_0", .test_fn = test_set_uuid_0 },
  { .name = "test_set_uuid_random_0", .test_fn = test_set_uuid_random_0 },
  { .name = "test_sleep_0", .test_fn = test_sleep_0 },
  { .name = "test_stat_0", .test_fn = test_stat_0 },
  { .name = "test_statns_0", .test_fn = test_statns_0 },
  { .name = "test_statvfs_0", .test_fn = test_statvfs_0 },
  { .name = "test_strings_0", .test_fn = test_strings_0 },
  { .name = "test_strings_1", .test_fn = test_strings_1 },
  { .name = "test_strings_2", .test_fn = test_strings_2 },
  { .name = "test_strings_e_0", .test_fn = test_strings_e_0 },
  { .name = "test_strings_e_1", .test_fn = test_strings_e_1 },
  { .name = "test_swapon_device_0", .test_fn = test_swapon_device_0 },
  { .name = "test_swapon_file_0", .test_fn = test_swapon_file_0 },
  { .name = "test_swapon_label_0", .test_fn = test_swapon_label_0 },
  { .name = "test_swapon_uuid_0", .test_fn = test_swapon_uuid_0 },
  { .name = "test_sync_0", .test_fn = test_sync_0 },
  { .name = "test_tail_0", .test_fn = test_tail_0 },
  { .name = "test_tail_n_0", .test_fn = test_tail_n_0 },
  { .name = "test_tail_n_1", .test_fn = test_tail_n_1 },
  { .name = "test_tail_n_2", .test_fn = test_tail_n_2 },
  { .name = "test_tar_in_0", .test_fn = test_tar_in_0 },
  { .name = "test_tar_in_1", .test_fn = test_tar_in_1 },
  { .name = "test_tar_in_2", .test_fn = test_tar_in_2 },
  { .name = "test_tgz_in_0", .test_fn = test_tgz_in_0 },
  { .name = "test_touch_0", .test_fn = test_touch_0 },
  { .name = "test_truncate_0", .test_fn = test_truncate_0 },
  { .name = "test_truncate_size_0", .test_fn = test_truncate_size_0 },
  { .name = "test_tune2fs_0", .test_fn = test_tune2fs_0 },
  { .name = "test_tune2fs_1", .test_fn = test_tune2fs_1 },
  { .name = "test_tune2fs_2", .test_fn = test_tune2fs_2 },
  { .name = "test_tune2fs_3", .test_fn = test_tune2fs_3 },
  { .name = "test_tune2fs_l_0", .test_fn = test_tune2fs_l_0 },
  { .name = "test_txz_in_0", .test_fn = test_txz_in_0 },
  { .name = "test_umask_0", .test_fn = test_umask_0 },
  { .name = "test_umount_0", .test_fn = test_umount_0 },
  { .name = "test_umount_1", .test_fn = test_umount_1 },
  { .name = "test_umount_all_0", .test_fn = test_umount_all_0 },
  { .name = "test_umount_all_1", .test_fn = test_umount_all_1 },
  { .name = "test_upload_0", .test_fn = test_upload_0 },
  { .name = "test_upload_offset_0", .test_fn = test_upload_offset_0 },
  { .name = "test_utimens_0", .test_fn = test_utimens_0 },
  { .name = "test_utimens_1", .test_fn = test_utimens_1 },
  { .name = "test_utimens_2", .test_fn = test_utimens_2 },
  { .name = "test_utimens_3", .test_fn = test_utimens_3 },
  { .name = "test_utimens_4", .test_fn = test_utimens_4 },
  { .name = "test_utimens_5", .test_fn = test_utimens_5 },
  { .name = "test_utsname_0", .test_fn = test_utsname_0 },
  { .name = "test_version_0", .test_fn = test_version_0 },
  { .name = "test_vfs_label_0", .test_fn = test_vfs_label_0 },
  { .name = "test_vfs_label_1", .test_fn = test_vfs_label_1 },
  { .name = "test_vfs_label_2", .test_fn = test_vfs_label_2 },
  { .name = "test_vfs_minimum_size_0", .test_fn = test_vfs_minimum_size_0 },
  { .name = "test_vfs_minimum_size_1", .test_fn = test_vfs_minimum_size_1 },
  { .name = "test_vfs_minimum_size_2", .test_fn = test_vfs_minimum_size_2 },
  { .name = "test_vfs_minimum_size_3", .test_fn = test_vfs_minimum_size_3 },
  { .name = "test_vfs_type_0", .test_fn = test_vfs_type_0 },
  { .name = "test_vfs_uuid_0", .test_fn = test_vfs_uuid_0 },
  { .name = "test_vgchange_uuid_0", .test_fn = test_vgchange_uuid_0 },
  { .name = "test_vgchange_uuid_all_0", .test_fn = test_vgchange_uuid_all_0 },
  { .name = "test_vgcreate_0", .test_fn = test_vgcreate_0 },
  { .name = "test_vgcreate_1", .test_fn = test_vgcreate_1 },
  { .name = "test_vgremove_0", .test_fn = test_vgremove_0 },
  { .name = "test_vgremove_1", .test_fn = test_vgremove_1 },
  { .name = "test_vgrename_0", .test_fn = test_vgrename_0 },
  { .name = "test_vgs_0", .test_fn = test_vgs_0 },
  { .name = "test_vgs_1", .test_fn = test_vgs_1 },
  { .name = "test_vgscan_0", .test_fn = test_vgscan_0 },
  { .name = "test_wc_c_0", .test_fn = test_wc_c_0 },
  { .name = "test_wc_l_0", .test_fn = test_wc_l_0 },
  { .name = "test_wc_l_1", .test_fn = test_wc_l_1 },
  { .name = "test_wc_w_0", .test_fn = test_wc_w_0 },
  { .name = "test_wipefs_0", .test_fn = test_wipefs_0 },
  { .name = "test_write_0", .test_fn = test_write_0 },
  { .name = "test_write_1", .test_fn = test_write_1 },
  { .name = "test_write_2", .test_fn = test_write_2 },
  { .name = "test_write_3", .test_fn = test_write_3 },
  { .name = "test_write_4", .test_fn = test_write_4 },
  { .name = "test_write_5", .test_fn = test_write_5 },
  { .name = "test_write_append_0", .test_fn = test_write_append_0 },
  { .name = "test_write_file_0", .test_fn = test_write_file_0 },
  { .name = "test_xfs_admin_0", .test_fn = test_xfs_admin_0 },
  { .name = "test_xfs_admin_1", .test_fn = test_xfs_admin_1 },
  { .name = "test_xfs_growfs_0", .test_fn = test_xfs_growfs_0 },
  { .name = "test_xfs_info_0", .test_fn = test_xfs_info_0 },
  { .name = "test_xfs_repair_0", .test_fn = test_xfs_repair_0 },
  { .name = "test_zegrep_0", .test_fn = test_zegrep_0 },
  { .name = "test_zegrepi_0", .test_fn = test_zegrepi_0 },
  { .name = "test_zero_0", .test_fn = test_zero_0 },
  { .name = "test_zero_device_0", .test_fn = test_zero_device_0 },
  { .name = "test_zero_free_space_0", .test_fn = test_zero_free_space_0 },
  { .name = "test_zerofree_0", .test_fn = test_zerofree_0 },
  { .name = "test_zfgrep_0", .test_fn = test_zfgrep_0 },
  { .name = "test_zfgrepi_0", .test_fn = test_zfgrepi_0 },
  { .name = "test_zgrep_0", .test_fn = test_zgrep_0 },
  { .name = "test_zgrepi_0", .test_fn = test_zgrepi_0 },
};
