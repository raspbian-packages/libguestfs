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
  const char *arg360 = "0/1000";
  const char *arg361 = "/";
  int ret359;
  ret359 = guestfs_btrfs_qgroup_create (g, arg360, arg361);
  if (ret359 == -1)
    return -1;
  const char *arg364 = "1/1000";
  const char *arg365 = "/";
  int ret363;
  ret363 = guestfs_btrfs_qgroup_create (g, arg364, arg365);
  if (ret363 == -1)
    return -1;
  const char *arg368 = "0/1000";
  const char *arg369 = "1/1000";
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
  const char *arg388 = "0/1000";
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
  const char *arg407 = "0/1000";
  const char *arg408 = "/sub1";
  int ret406;
  ret406 = guestfs_btrfs_qgroup_create (g, arg407, arg408);
  if (ret406 == -1)
    return -1;
  const char *arg411 = "0/1000";
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
  const char *arg459 = "0/1000";
  const char *arg460 = "/";
  int ret458;
  ret458 = guestfs_btrfs_qgroup_create (g, arg459, arg460);
  if (ret458 == -1)
    return -1;
  const char *arg463 = "1/1000";
  const char *arg464 = "/";
  int ret462;
  ret462 = guestfs_btrfs_qgroup_create (g, arg463, arg464);
  if (ret462 == -1)
    return -1;
  const char *arg467 = "0/1000";
  const char *arg468 = "1/1000";
  const char *arg469 = "/";
  int ret466;
  ret466 = guestfs_btrfs_qgroup_assign (g, arg467, arg468, arg469);
  if (ret466 == -1)
    return -1;
  const char *arg472 = "0/1000";
  const char *arg473 = "1/1000";
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
  const char *arg492 = "0/1000";
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
  const char *arg695 = "/dir/test3";
  const char *arg696 = "/dir/test6";
  struct guestfs_btrfs_subvolume_snapshot_opts_argv optargs697;
  optargs697.qgroupid = "0/1000";
  optargs697.bitmask = UINT64_C(0x2);
  int ret694;
  ret694 = guestfs_btrfs_subvolume_snapshot_opts_argv (g, arg695, arg696, &optargs697);
  if (ret694 == -1)
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

  const char *features698[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features698)) {
    skipped ("test_btrfstune_enable_extended_inode_refs_0", "group %s not available in daemon",
             features698[0]);
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
  const char *arg700_0 = "/dev/sda1";
  const char *const arg700[] = {
    arg700_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs701;
  optargs701.bitmask = UINT64_C(0x0);
  int ret699;
  ret699 = guestfs_mkfs_btrfs_argv (g, (char **) arg700, &optargs701);
  if (ret699 == -1)
    return -1;
  const char *arg703 = "/dev/sda1";
  int ret702;
  ret702 = guestfs_btrfstune_enable_extended_inode_refs (g, arg703);
  if (ret702 == -1)
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

  const char *features705[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features705)) {
    skipped ("test_btrfstune_enable_skinny_metadata_extent_refs_0", "group %s not available in daemon",
             features705[0]);
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
  const char *arg707_0 = "/dev/sda1";
  const char *const arg707[] = {
    arg707_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs708;
  optargs708.bitmask = UINT64_C(0x0);
  int ret706;
  ret706 = guestfs_mkfs_btrfs_argv (g, (char **) arg707, &optargs708);
  if (ret706 == -1)
    return -1;
  const char *arg710 = "/dev/sda1";
  int ret709;
  ret709 = guestfs_btrfstune_enable_skinny_metadata_extent_refs (g, arg710);
  if (ret709 == -1)
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

  const char *features712[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features712)) {
    skipped ("test_btrfstune_seeding_0", "group %s not available in daemon",
             features712[0]);
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
  const char *arg714_0 = "/dev/sda1";
  const char *const arg714[] = {
    arg714_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs715;
  optargs715.bitmask = UINT64_C(0x0);
  int ret713;
  ret713 = guestfs_mkfs_btrfs_argv (g, (char **) arg714, &optargs715);
  if (ret713 == -1)
    return -1;
  const char *arg717 = "/dev/sda1";
  int ret716;
  ret716 = guestfs_btrfstune_seeding (g, arg717, 1);
  if (ret716 == -1)
    return -1;
  const char *arg721 = "/dev/sda1";
  int ret720;
  ret720 = guestfs_btrfstune_seeding (g, arg721, 0);
  if (ret720 == -1)
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
  int64_t ret724;
  ret724 = guestfs_c_pointer (g);
  if (ret724 == -1)
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
  const char *arg726 = "/dev/hda";
  CLEANUP_FREE char *ret;
  ret = guestfs_canonical_device_name (g, arg726);
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
  const char *arg728 = "/dev/vdaaa";
  CLEANUP_FREE char *ret;
  ret = guestfs_canonical_device_name (g, arg728);
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
  const char *arg730 = "/dev/sdb";
  CLEANUP_FREE char *ret;
  ret = guestfs_canonical_device_name (g, arg730);
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

  const char *features732[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features732)) {
    skipped ("test_canonical_device_name_3", "group %s not available in daemon",
             features732[0]);
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
  const char *arg733 = "/dev/mapper/VG-LV";
  CLEANUP_FREE char *ret;
  ret = guestfs_canonical_device_name (g, arg733);
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
  const char *arg735 = "/dev/md0";
  CLEANUP_FREE char *ret;
  ret = guestfs_canonical_device_name (g, arg735);
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
  const char *arg737 = "/dev/md127";
  CLEANUP_FREE char *ret;
  ret = guestfs_canonical_device_name (g, arg737);
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

  const char *features739[] = { "linuxcaps", NULL };
  if (!guestfs_feature_available (g, (char **) features739)) {
    skipped ("test_cap_set_file_0", "group %s not available in daemon",
             features739[0]);
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
  const char *arg741 = "/cap_set_file_0";
  int ret740;
  ret740 = guestfs_touch (g, arg741);
  if (ret740 == -1)
    return -1;
  const char *arg744 = "/cap_set_file_0";
  const char *arg745 = "cap_chown=p cap_chown+e";
  int ret743;
  ret743 = guestfs_cap_set_file (g, arg744, arg745);
  if (ret743 == -1)
    return -1;
  const char *arg747 = "/cap_set_file_0";
  CLEANUP_FREE char *ret;
  ret = guestfs_cap_get_file (g, arg747);
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
  const char *arg749 = "/DIRECTORY";
  CLEANUP_FREE char *ret;
  ret = guestfs_case_sensitive_path (g, arg749);
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
  const char *arg751 = "/DIRECTORY/";
  CLEANUP_FREE char *ret;
  ret = guestfs_case_sensitive_path (g, arg751);
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
  const char *arg753 = "/Known-1";
  CLEANUP_FREE char *ret;
  ret = guestfs_case_sensitive_path (g, arg753);
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
  const char *arg756 = "/Known-1/";
  CLEANUP_FREE char *ret755;
  guestfs_push_error_handler (g, NULL, NULL);
  ret755 = guestfs_case_sensitive_path (g, arg756);
  guestfs_pop_error_handler (g);
  if (ret755 != NULL)
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
  const char *arg759 = "/case_sensitive_path";
  int ret758;
  ret758 = guestfs_mkdir (g, arg759);
  if (ret758 == -1)
    return -1;
  const char *arg762 = "/case_sensitive_path/bbb";
  int ret761;
  ret761 = guestfs_mkdir (g, arg762);
  if (ret761 == -1)
    return -1;
  const char *arg765 = "/case_sensitive_path/bbb/c";
  int ret764;
  ret764 = guestfs_touch (g, arg765);
  if (ret764 == -1)
    return -1;
  const char *arg767 = "/CASE_SENSITIVE_path/bbB/C";
  CLEANUP_FREE char *ret;
  ret = guestfs_case_sensitive_path (g, arg767);
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
  const char *arg770 = "/case_sensitive_path2";
  int ret769;
  ret769 = guestfs_mkdir (g, arg770);
  if (ret769 == -1)
    return -1;
  const char *arg773 = "/case_sensitive_path2/bbb";
  int ret772;
  ret772 = guestfs_mkdir (g, arg773);
  if (ret772 == -1)
    return -1;
  const char *arg776 = "/case_sensitive_path2/bbb/c";
  int ret775;
  ret775 = guestfs_touch (g, arg776);
  if (ret775 == -1)
    return -1;
  const char *arg778 = "/case_sensitive_PATH2////bbB/C";
  CLEANUP_FREE char *ret;
  ret = guestfs_case_sensitive_path (g, arg778);
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
  const char *arg781 = "/case_sensitive_path3";
  int ret780;
  ret780 = guestfs_mkdir (g, arg781);
  if (ret780 == -1)
    return -1;
  const char *arg784 = "/case_sensitive_path3/bbb";
  int ret783;
  ret783 = guestfs_mkdir (g, arg784);
  if (ret783 == -1)
    return -1;
  const char *arg787 = "/case_sensitive_path3/bbb/c";
  int ret786;
  ret786 = guestfs_touch (g, arg787);
  if (ret786 == -1)
    return -1;
  const char *arg790 = "/case_SENSITIVE_path3/bbb/../bbb/C";
  CLEANUP_FREE char *ret789;
  guestfs_push_error_handler (g, NULL, NULL);
  ret789 = guestfs_case_sensitive_path (g, arg790);
  guestfs_pop_error_handler (g);
  if (ret789 != NULL)
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
  const char *arg793 = "/case_sensitive_path4";
  int ret792;
  ret792 = guestfs_mkdir (g, arg793);
  if (ret792 == -1)
    return -1;
  const char *arg795 = "/case_SENSITIVE_path4/new_file";
  CLEANUP_FREE char *ret;
  ret = guestfs_case_sensitive_path (g, arg795);
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
  const char *arg797 = "/known-2";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg797);
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
  const char *arg799 = "crc";
  const char *arg800 = "/known-3";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg799, arg800);
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
  const char *arg803 = "crc";
  const char *arg804 = "/notexists";
  CLEANUP_FREE char *ret802;
  guestfs_push_error_handler (g, NULL, NULL);
  ret802 = guestfs_checksum (g, arg803, arg804);
  guestfs_pop_error_handler (g);
  if (ret802 != NULL)
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
  const char *arg806 = "md5";
  const char *arg807 = "/known-3";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg806, arg807);
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
  const char *arg809 = "sha1";
  const char *arg810 = "/known-3";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg809, arg810);
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
  const char *arg812 = "sha224";
  const char *arg813 = "/known-3";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg812, arg813);
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
  const char *arg815 = "sha256";
  const char *arg816 = "/known-3";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg815, arg816);
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
  const char *arg818 = "sha384";
  const char *arg819 = "/known-3";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg818, arg819);
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
  const char *arg821 = "sha512";
  const char *arg822 = "/known-3";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg821, arg822);
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
  const char *arg824 = "sha512";
  const char *arg825 = "/abssymlink";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg824, arg825);
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
  const char *arg827 = "md5";
  const char *arg828 = "/dev/sdd";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum_device (g, arg827, arg828);
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
  const char *arg831 = "/command";
  int ret830;
  ret830 = guestfs_mkdir (g, arg831);
  if (ret830 == -1)
    return -1;
  CLEANUP_FREE char *arg834 = substitute_srcdir ("c-api/test-command");
  const char *arg835 = "/command/test-command";
  int ret833;
  ret833 = guestfs_upload (g, arg834, arg835);
  if (ret833 == -1)
    return -1;
  const char *arg839 = "/command/test-command";
  int ret837;
  ret837 = guestfs_chmod (g, 493, arg839);
  if (ret837 == -1)
    return -1;
  const char *arg841_0 = "/command/test-command";
  const char *arg841_1 = "1";
  const char *const arg841[] = {
    arg841_0,
    arg841_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg841);
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
  const char *arg844 = "/command2";
  int ret843;
  ret843 = guestfs_mkdir (g, arg844);
  if (ret843 == -1)
    return -1;
  CLEANUP_FREE char *arg847 = substitute_srcdir ("c-api/test-command");
  const char *arg848 = "/command2/test-command";
  int ret846;
  ret846 = guestfs_upload (g, arg847, arg848);
  if (ret846 == -1)
    return -1;
  const char *arg852 = "/command2/test-command";
  int ret850;
  ret850 = guestfs_chmod (g, 493, arg852);
  if (ret850 == -1)
    return -1;
  const char *arg854_0 = "/command2/test-command";
  const char *arg854_1 = "2";
  const char *const arg854[] = {
    arg854_0,
    arg854_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg854);
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
  const char *arg857 = "/command3";
  int ret856;
  ret856 = guestfs_mkdir (g, arg857);
  if (ret856 == -1)
    return -1;
  CLEANUP_FREE char *arg860 = substitute_srcdir ("c-api/test-command");
  const char *arg861 = "/command3/test-command";
  int ret859;
  ret859 = guestfs_upload (g, arg860, arg861);
  if (ret859 == -1)
    return -1;
  const char *arg865 = "/command3/test-command";
  int ret863;
  ret863 = guestfs_chmod (g, 493, arg865);
  if (ret863 == -1)
    return -1;
  const char *arg867_0 = "/command3/test-command";
  const char *arg867_1 = "3";
  const char *const arg867[] = {
    arg867_0,
    arg867_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg867);
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
  const char *arg870 = "/command4";
  int ret869;
  ret869 = guestfs_mkdir (g, arg870);
  if (ret869 == -1)
    return -1;
  CLEANUP_FREE char *arg873 = substitute_srcdir ("c-api/test-command");
  const char *arg874 = "/command4/test-command";
  int ret872;
  ret872 = guestfs_upload (g, arg873, arg874);
  if (ret872 == -1)
    return -1;
  const char *arg878 = "/command4/test-command";
  int ret876;
  ret876 = guestfs_chmod (g, 493, arg878);
  if (ret876 == -1)
    return -1;
  const char *arg880_0 = "/command4/test-command";
  const char *arg880_1 = "4";
  const char *const arg880[] = {
    arg880_0,
    arg880_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg880);
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
  const char *arg883 = "/command5";
  int ret882;
  ret882 = guestfs_mkdir (g, arg883);
  if (ret882 == -1)
    return -1;
  CLEANUP_FREE char *arg886 = substitute_srcdir ("c-api/test-command");
  const char *arg887 = "/command5/test-command";
  int ret885;
  ret885 = guestfs_upload (g, arg886, arg887);
  if (ret885 == -1)
    return -1;
  const char *arg891 = "/command5/test-command";
  int ret889;
  ret889 = guestfs_chmod (g, 493, arg891);
  if (ret889 == -1)
    return -1;
  const char *arg893_0 = "/command5/test-command";
  const char *arg893_1 = "5";
  const char *const arg893[] = {
    arg893_0,
    arg893_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg893);
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
  const char *arg896 = "/command6";
  int ret895;
  ret895 = guestfs_mkdir (g, arg896);
  if (ret895 == -1)
    return -1;
  CLEANUP_FREE char *arg899 = substitute_srcdir ("c-api/test-command");
  const char *arg900 = "/command6/test-command";
  int ret898;
  ret898 = guestfs_upload (g, arg899, arg900);
  if (ret898 == -1)
    return -1;
  const char *arg904 = "/command6/test-command";
  int ret902;
  ret902 = guestfs_chmod (g, 493, arg904);
  if (ret902 == -1)
    return -1;
  const char *arg906_0 = "/command6/test-command";
  const char *arg906_1 = "6";
  const char *const arg906[] = {
    arg906_0,
    arg906_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg906);
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
  const char *arg909 = "/command7";
  int ret908;
  ret908 = guestfs_mkdir (g, arg909);
  if (ret908 == -1)
    return -1;
  CLEANUP_FREE char *arg912 = substitute_srcdir ("c-api/test-command");
  const char *arg913 = "/command7/test-command";
  int ret911;
  ret911 = guestfs_upload (g, arg912, arg913);
  if (ret911 == -1)
    return -1;
  const char *arg917 = "/command7/test-command";
  int ret915;
  ret915 = guestfs_chmod (g, 493, arg917);
  if (ret915 == -1)
    return -1;
  const char *arg919_0 = "/command7/test-command";
  const char *arg919_1 = "7";
  const char *const arg919[] = {
    arg919_0,
    arg919_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg919);
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
  const char *arg922 = "/command8";
  int ret921;
  ret921 = guestfs_mkdir (g, arg922);
  if (ret921 == -1)
    return -1;
  CLEANUP_FREE char *arg925 = substitute_srcdir ("c-api/test-command");
  const char *arg926 = "/command8/test-command";
  int ret924;
  ret924 = guestfs_upload (g, arg925, arg926);
  if (ret924 == -1)
    return -1;
  const char *arg930 = "/command8/test-command";
  int ret928;
  ret928 = guestfs_chmod (g, 493, arg930);
  if (ret928 == -1)
    return -1;
  const char *arg932_0 = "/command8/test-command";
  const char *arg932_1 = "8";
  const char *const arg932[] = {
    arg932_0,
    arg932_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg932);
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
  const char *arg935 = "/command9";
  int ret934;
  ret934 = guestfs_mkdir (g, arg935);
  if (ret934 == -1)
    return -1;
  CLEANUP_FREE char *arg938 = substitute_srcdir ("c-api/test-command");
  const char *arg939 = "/command9/test-command";
  int ret937;
  ret937 = guestfs_upload (g, arg938, arg939);
  if (ret937 == -1)
    return -1;
  const char *arg943 = "/command9/test-command";
  int ret941;
  ret941 = guestfs_chmod (g, 493, arg943);
  if (ret941 == -1)
    return -1;
  const char *arg945_0 = "/command9/test-command";
  const char *arg945_1 = "9";
  const char *const arg945[] = {
    arg945_0,
    arg945_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg945);
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
  const char *arg948 = "/command10";
  int ret947;
  ret947 = guestfs_mkdir (g, arg948);
  if (ret947 == -1)
    return -1;
  CLEANUP_FREE char *arg951 = substitute_srcdir ("c-api/test-command");
  const char *arg952 = "/command10/test-command";
  int ret950;
  ret950 = guestfs_upload (g, arg951, arg952);
  if (ret950 == -1)
    return -1;
  const char *arg956 = "/command10/test-command";
  int ret954;
  ret954 = guestfs_chmod (g, 493, arg956);
  if (ret954 == -1)
    return -1;
  const char *arg958_0 = "/command10/test-command";
  const char *arg958_1 = "10";
  const char *const arg958[] = {
    arg958_0,
    arg958_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg958);
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
  const char *arg961 = "/command11";
  int ret960;
  ret960 = guestfs_mkdir (g, arg961);
  if (ret960 == -1)
    return -1;
  CLEANUP_FREE char *arg964 = substitute_srcdir ("c-api/test-command");
  const char *arg965 = "/command11/test-command";
  int ret963;
  ret963 = guestfs_upload (g, arg964, arg965);
  if (ret963 == -1)
    return -1;
  const char *arg969 = "/command11/test-command";
  int ret967;
  ret967 = guestfs_chmod (g, 493, arg969);
  if (ret967 == -1)
    return -1;
  const char *arg971_0 = "/command11/test-command";
  const char *arg971_1 = "11";
  const char *const arg971[] = {
    arg971_0,
    arg971_1,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg971);
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
  const char *arg974 = "/command12";
  int ret973;
  ret973 = guestfs_mkdir (g, arg974);
  if (ret973 == -1)
    return -1;
  CLEANUP_FREE char *arg977 = substitute_srcdir ("c-api/test-command");
  const char *arg978 = "/command12/test-command";
  int ret976;
  ret976 = guestfs_upload (g, arg977, arg978);
  if (ret976 == -1)
    return -1;
  const char *arg982 = "/command12/test-command";
  int ret980;
  ret980 = guestfs_chmod (g, 493, arg982);
  if (ret980 == -1)
    return -1;
  const char *arg985_0 = "/command12/test-command";
  const char *const arg985[] = {
    arg985_0,
    NULL
  };
  CLEANUP_FREE char *ret984;
  guestfs_push_error_handler (g, NULL, NULL);
  ret984 = guestfs_command (g, (char **) arg985);
  guestfs_pop_error_handler (g);
  if (ret984 != NULL)
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
  const char *arg988 = "/pwd";
  int ret987;
  ret987 = guestfs_mkdir (g, arg988);
  if (ret987 == -1)
    return -1;
  CLEANUP_FREE char *arg991 = substitute_srcdir ("c-api/test-pwd");
  const char *arg992 = "/pwd/test-pwd";
  int ret990;
  ret990 = guestfs_upload (g, arg991, arg992);
  if (ret990 == -1)
    return -1;
  const char *arg996 = "/pwd/test-pwd";
  int ret994;
  ret994 = guestfs_chmod (g, 493, arg996);
  if (ret994 == -1)
    return -1;
  const char *arg998_0 = "/pwd/test-pwd";
  const char *const arg998[] = {
    arg998_0,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_command (g, (char **) arg998);
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
  const char *arg1000 = "/command_lines";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1000);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1002 = substitute_srcdir ("c-api/test-command");
  const char *arg1003 = "/command_lines/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1002, arg1003);
  if (ret2 == -1)
    return -1;
  const char *arg1006 = "/command_lines/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1006);
  if (ret1 == -1)
    return -1;
  const char *arg1008_0 = "/command_lines/test-command";
  const char *arg1008_1 = "1";
  const char *const arg1008[] = {
    arg1008_0,
    arg1008_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1008);
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
  const char *arg1010 = "/command_lines2";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1010);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1012 = substitute_srcdir ("c-api/test-command");
  const char *arg1013 = "/command_lines2/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1012, arg1013);
  if (ret2 == -1)
    return -1;
  const char *arg1016 = "/command_lines2/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1016);
  if (ret1 == -1)
    return -1;
  const char *arg1018_0 = "/command_lines2/test-command";
  const char *arg1018_1 = "2";
  const char *const arg1018[] = {
    arg1018_0,
    arg1018_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1018);
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
  const char *arg1020 = "/command_lines3";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1020);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1022 = substitute_srcdir ("c-api/test-command");
  const char *arg1023 = "/command_lines3/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1022, arg1023);
  if (ret2 == -1)
    return -1;
  const char *arg1026 = "/command_lines3/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1026);
  if (ret1 == -1)
    return -1;
  const char *arg1028_0 = "/command_lines3/test-command";
  const char *arg1028_1 = "3";
  const char *const arg1028[] = {
    arg1028_0,
    arg1028_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1028);
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
  const char *arg1030 = "/command_lines4";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1030);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1032 = substitute_srcdir ("c-api/test-command");
  const char *arg1033 = "/command_lines4/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1032, arg1033);
  if (ret2 == -1)
    return -1;
  const char *arg1036 = "/command_lines4/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1036);
  if (ret1 == -1)
    return -1;
  const char *arg1038_0 = "/command_lines4/test-command";
  const char *arg1038_1 = "4";
  const char *const arg1038[] = {
    arg1038_0,
    arg1038_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1038);
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
  const char *arg1040 = "/command_lines5";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1040);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1042 = substitute_srcdir ("c-api/test-command");
  const char *arg1043 = "/command_lines5/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1042, arg1043);
  if (ret2 == -1)
    return -1;
  const char *arg1046 = "/command_lines5/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1046);
  if (ret1 == -1)
    return -1;
  const char *arg1048_0 = "/command_lines5/test-command";
  const char *arg1048_1 = "5";
  const char *const arg1048[] = {
    arg1048_0,
    arg1048_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1048);
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
  const char *arg1050 = "/command_lines6";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1050);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1052 = substitute_srcdir ("c-api/test-command");
  const char *arg1053 = "/command_lines6/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1052, arg1053);
  if (ret2 == -1)
    return -1;
  const char *arg1056 = "/command_lines6/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1056);
  if (ret1 == -1)
    return -1;
  const char *arg1058_0 = "/command_lines6/test-command";
  const char *arg1058_1 = "6";
  const char *const arg1058[] = {
    arg1058_0,
    arg1058_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1058);
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
  const char *arg1060 = "/command_lines7";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1060);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1062 = substitute_srcdir ("c-api/test-command");
  const char *arg1063 = "/command_lines7/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1062, arg1063);
  if (ret2 == -1)
    return -1;
  const char *arg1066 = "/command_lines7/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1066);
  if (ret1 == -1)
    return -1;
  const char *arg1068_0 = "/command_lines7/test-command";
  const char *arg1068_1 = "7";
  const char *const arg1068[] = {
    arg1068_0,
    arg1068_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1068);
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
  const char *arg1070 = "/command_lines8";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1070);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1072 = substitute_srcdir ("c-api/test-command");
  const char *arg1073 = "/command_lines8/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1072, arg1073);
  if (ret2 == -1)
    return -1;
  const char *arg1076 = "/command_lines8/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1076);
  if (ret1 == -1)
    return -1;
  const char *arg1078_0 = "/command_lines8/test-command";
  const char *arg1078_1 = "8";
  const char *const arg1078[] = {
    arg1078_0,
    arg1078_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1078);
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
  const char *arg1080 = "/command_lines9";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1080);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1082 = substitute_srcdir ("c-api/test-command");
  const char *arg1083 = "/command_lines9/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1082, arg1083);
  if (ret2 == -1)
    return -1;
  const char *arg1086 = "/command_lines9/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1086);
  if (ret1 == -1)
    return -1;
  const char *arg1088_0 = "/command_lines9/test-command";
  const char *arg1088_1 = "9";
  const char *const arg1088[] = {
    arg1088_0,
    arg1088_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1088);
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
  const char *arg1090 = "/command_lines10";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1090);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1092 = substitute_srcdir ("c-api/test-command");
  const char *arg1093 = "/command_lines10/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1092, arg1093);
  if (ret2 == -1)
    return -1;
  const char *arg1096 = "/command_lines10/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1096);
  if (ret1 == -1)
    return -1;
  const char *arg1098_0 = "/command_lines10/test-command";
  const char *arg1098_1 = "10";
  const char *const arg1098[] = {
    arg1098_0,
    arg1098_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1098);
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
  const char *arg1100 = "/command_lines11";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1100);
  if (ret3 == -1)
    return -1;
  CLEANUP_FREE char *arg1102 = substitute_srcdir ("c-api/test-command");
  const char *arg1103 = "/command_lines11/test-command";
  int ret2;
  ret2 = guestfs_upload (g, arg1102, arg1103);
  if (ret2 == -1)
    return -1;
  const char *arg1106 = "/command_lines11/test-command";
  int ret1;
  ret1 = guestfs_chmod (g, 493, arg1106);
  if (ret1 == -1)
    return -1;
  const char *arg1108_0 = "/command_lines11/test-command";
  const char *arg1108_1 = "11";
  const char *const arg1108[] = {
    arg1108_0,
    arg1108_1,
    NULL
  };
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_command_lines (g, (char **) arg1108);
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
  const char *arg1110 = "/copyff";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1110);
  if (ret3 == -1)
    return -1;
  const char *arg1112 = "/copyff/src";
  const char *arg1113 = "hello, world";
  size_t arg1113_size = 12;
  int ret2;
  ret2 = guestfs_write (g, arg1112, arg1113, arg1113_size);
  if (ret2 == -1)
    return -1;
  const char *arg1115 = "/copyff/src";
  const char *arg1116 = "/copyff/dest";
  struct guestfs_copy_file_to_file_argv optargs1117;
  optargs1117.append = 0;
  optargs1117.bitmask = UINT64_C(0x10);
  int ret1;
  ret1 = guestfs_copy_file_to_file_argv (g, arg1115, arg1116, &optargs1117);
  if (ret1 == -1)
    return -1;
  const char *arg1118 = "/copyff/dest";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_read_file (g, arg1118, &size);
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
  const char *arg1121 = "/copyff2";
  int ret1120;
  ret1120 = guestfs_mkdir (g, arg1121);
  if (ret1120 == -1)
    return -1;
  const char *arg1126 = "/copyff2/src";
  int ret1123;
  ret1123 = guestfs_fill (g, 0, 1048576, arg1126);
  if (ret1123 == -1)
    return -1;
  const char *arg1129 = "/copyff2/dest";
  int ret1128;
  ret1128 = guestfs_touch (g, arg1129);
  if (ret1128 == -1)
    return -1;
  const char *arg1132 = "/copyff2/dest";
  int ret1131;
  ret1131 = guestfs_truncate_size (g, arg1132, 1048576);
  if (ret1131 == -1)
    return -1;
  const char *arg1136 = "/copyff2/src";
  const char *arg1137 = "/copyff2/dest";
  struct guestfs_copy_file_to_file_argv optargs1138;
  optargs1138.sparse = 1;
  optargs1138.append = 0;
  optargs1138.bitmask = UINT64_C(0x18);
  int ret1135;
  ret1135 = guestfs_copy_file_to_file_argv (g, arg1136, arg1137, &optargs1138);
  if (ret1135 == -1)
    return -1;
  const char *arg1139 = "/copyff2/dest";
  int ret;
  ret = guestfs_is_zero (g, arg1139);
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
  const char *arg1141 = "/copyff3";
  int ret5;
  ret5 = guestfs_mkdir (g, arg1141);
  if (ret5 == -1)
    return -1;
  const char *arg1143 = "/copyff3/src";
  const char *arg1144 = "hello, world";
  size_t arg1144_size = 12;
  int ret4;
  ret4 = guestfs_write (g, arg1143, arg1144, arg1144_size);
  if (ret4 == -1)
    return -1;
  const char *arg1146 = "/copyff3/src";
  const char *arg1147 = "/copyff3/dest";
  struct guestfs_copy_file_to_file_argv optargs1148;
  optargs1148.append = 1;
  optargs1148.bitmask = UINT64_C(0x10);
  int ret3;
  ret3 = guestfs_copy_file_to_file_argv (g, arg1146, arg1147, &optargs1148);
  if (ret3 == -1)
    return -1;
  const char *arg1149 = "/copyff3/src";
  const char *arg1150 = "/copyff3/dest";
  struct guestfs_copy_file_to_file_argv optargs1151;
  optargs1151.append = 1;
  optargs1151.bitmask = UINT64_C(0x10);
  int ret2;
  ret2 = guestfs_copy_file_to_file_argv (g, arg1149, arg1150, &optargs1151);
  if (ret2 == -1)
    return -1;
  const char *arg1152 = "/copyff3/src";
  const char *arg1153 = "/copyff3/dest";
  struct guestfs_copy_file_to_file_argv optargs1154;
  optargs1154.append = 1;
  optargs1154.bitmask = UINT64_C(0x10);
  int ret1;
  ret1 = guestfs_copy_file_to_file_argv (g, arg1152, arg1153, &optargs1154);
  if (ret1 == -1)
    return -1;
  const char *arg1155 = "/copyff3/dest";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_read_file (g, arg1155, &size);
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
  const char *arg1157 = "/copy_size";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1157);
  if (ret3 == -1)
    return -1;
  const char *arg1159 = "/copy_size/src";
  const char *arg1160 = "hello, world";
  size_t arg1160_size = 12;
  int ret2;
  ret2 = guestfs_write (g, arg1159, arg1160, arg1160_size);
  if (ret2 == -1)
    return -1;
  const char *arg1162 = "/copy_size/src";
  const char *arg1163 = "/copy_size/dest";
  int ret1;
  ret1 = guestfs_copy_size (g, arg1162, arg1163, 5);
  if (ret1 == -1)
    return -1;
  const char *arg1166 = "/copy_size/dest";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_read_file (g, arg1166, &size);
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
  const char *arg1169 = "/cp";
  int ret1168;
  ret1168 = guestfs_mkdir (g, arg1169);
  if (ret1168 == -1)
    return -1;
  const char *arg1172 = "/cp/old";
  const char *arg1173 = "file content";
  size_t arg1173_size = 12;
  int ret1171;
  ret1171 = guestfs_write (g, arg1172, arg1173, arg1173_size);
  if (ret1171 == -1)
    return -1;
  const char *arg1176 = "/cp/old";
  const char *arg1177 = "/cp/new";
  int ret1175;
  ret1175 = guestfs_cp (g, arg1176, arg1177);
  if (ret1175 == -1)
    return -1;
  const char *arg1179 = "/cp/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1179);
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
  const char *arg1182 = "/cp2";
  int ret1181;
  ret1181 = guestfs_mkdir (g, arg1182);
  if (ret1181 == -1)
    return -1;
  const char *arg1185 = "/cp2/old";
  const char *arg1186 = "file content";
  size_t arg1186_size = 12;
  int ret1184;
  ret1184 = guestfs_write (g, arg1185, arg1186, arg1186_size);
  if (ret1184 == -1)
    return -1;
  const char *arg1189 = "/cp2/old";
  const char *arg1190 = "/cp2/new";
  int ret1188;
  ret1188 = guestfs_cp (g, arg1189, arg1190);
  if (ret1188 == -1)
    return -1;
  const char *arg1192 = "/cp2/old";
  struct guestfs_is_file_opts_argv optargs1193;
  optargs1193.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg1192, &optargs1193);
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
  const char *arg1195 = "/cp3";
  int ret1194;
  ret1194 = guestfs_mkdir (g, arg1195);
  if (ret1194 == -1)
    return -1;
  const char *arg1198 = "/cp3/old";
  const char *arg1199 = "file content";
  size_t arg1199_size = 12;
  int ret1197;
  ret1197 = guestfs_write (g, arg1198, arg1199, arg1199_size);
  if (ret1197 == -1)
    return -1;
  const char *arg1202 = "/cp3/dir";
  int ret1201;
  ret1201 = guestfs_mkdir (g, arg1202);
  if (ret1201 == -1)
    return -1;
  const char *arg1205 = "/cp3/old";
  const char *arg1206 = "/cp3/dir/new";
  int ret1204;
  ret1204 = guestfs_cp (g, arg1205, arg1206);
  if (ret1204 == -1)
    return -1;
  const char *arg1208 = "/cp3/dir/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1208);
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
  const char *arg1211 = "/cp_a1";
  int ret1210;
  ret1210 = guestfs_mkdir (g, arg1211);
  if (ret1210 == -1)
    return -1;
  const char *arg1214 = "/cp_a2";
  int ret1213;
  ret1213 = guestfs_mkdir (g, arg1214);
  if (ret1213 == -1)
    return -1;
  const char *arg1217 = "/cp_a1/file";
  const char *arg1218 = "file content";
  size_t arg1218_size = 12;
  int ret1216;
  ret1216 = guestfs_write (g, arg1217, arg1218, arg1218_size);
  if (ret1216 == -1)
    return -1;
  const char *arg1221 = "/cp_a1";
  const char *arg1222 = "/cp_a2";
  int ret1220;
  ret1220 = guestfs_cp_a (g, arg1221, arg1222);
  if (ret1220 == -1)
    return -1;
  const char *arg1224 = "/cp_a2/cp_a1/file";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1224);
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
  const char *arg1227 = "/cp_r1";
  int ret1226;
  ret1226 = guestfs_mkdir (g, arg1227);
  if (ret1226 == -1)
    return -1;
  const char *arg1230 = "/cp_r2";
  int ret1229;
  ret1229 = guestfs_mkdir (g, arg1230);
  if (ret1229 == -1)
    return -1;
  const char *arg1233 = "/cp_r1/file";
  const char *arg1234 = "file content";
  size_t arg1234_size = 12;
  int ret1232;
  ret1232 = guestfs_write (g, arg1233, arg1234, arg1234_size);
  if (ret1232 == -1)
    return -1;
  const char *arg1237 = "/cp_r1";
  const char *arg1238 = "/cp_r2";
  int ret1236;
  ret1236 = guestfs_cp_r (g, arg1237, arg1238);
  if (ret1236 == -1)
    return -1;
  const char *arg1240 = "/cp_r2/cp_r1/file";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1240);
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
  const char *arg1242 = "/dd";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1242);
  if (ret3 == -1)
    return -1;
  const char *arg1244 = "/dd/src";
  const char *arg1245 = "hello, world";
  size_t arg1245_size = 12;
  int ret2;
  ret2 = guestfs_write (g, arg1244, arg1245, arg1245_size);
  if (ret2 == -1)
    return -1;
  const char *arg1247 = "/dd/src";
  const char *arg1248 = "/dd/dest";
  int ret1;
  ret1 = guestfs_dd (g, arg1247, arg1248);
  if (ret1 == -1)
    return -1;
  const char *arg1250 = "/dd/dest";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_read_file (g, arg1250, &size);
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
  const char *arg1252 = "/dev/sda";
  int ret;
  ret = guestfs_device_index (g, arg1252);
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
  CLEANUP_FREE char *ret1258;
  guestfs_push_error_handler (g, NULL, NULL);
  ret1258 = guestfs_device_name (g, 99);
  guestfs_pop_error_handler (g);
  if (ret1258 != NULL)
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
  const char *arg1261 = "../test-data/blank-disks/blank-disk-1s.raw";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1261);
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
  const char *arg1263 = "../test-data/blank-disks/blank-disk-1s.qcow2";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1263);
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
  const char *arg1265 = "../test-data/blank-disks/blank-disk-1K.raw";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1265);
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
  const char *arg1267 = "../test-data/blank-disks/blank-disk-1K.qcow2";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1267);
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
  const char *arg1269 = "../test-data/blank-disks/blank-disk-1M.raw";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1269);
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
  const char *arg1271 = "../test-data/blank-disks/blank-disk-1M.qcow2";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1271);
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
  const char *arg1273 = "../test-data/blank-disks/blank-disk-with-backing.qcow2";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1273);
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
  const char *arg1275 = "../test-data/blank-disks/blank-disk-1s.raw";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1275);
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
  const char *arg1277 = "../test-data/blank-disks/blank-disk-1s.qcow2";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1277);
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
  const char *arg1279 = "../test-data/blank-disks/blank-disk-1K.raw";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1279);
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
  const char *arg1281 = "../test-data/blank-disks/blank-disk-1K.qcow2";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1281);
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
  const char *arg1283 = "../test-data/blank-disks/blank-disk-1M.raw";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1283);
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
  const char *arg1285 = "../test-data/blank-disks/blank-disk-1M.qcow2";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1285);
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
  const char *arg1287 = "../test-data/blank-disks/blank-disk-with-backing.qcow2";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1287);
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
  const char *arg1289 = "../test-data/blank-disks/blank-disk-1s.raw";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1289);
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
  const char *arg1291 = "../test-data/blank-disks/blank-disk-1s.qcow2";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1291);
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
  const char *arg1293 = "../test-data/blank-disks/blank-disk-1K.raw";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1293);
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
  const char *arg1295 = "../test-data/blank-disks/blank-disk-1K.qcow2";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1295);
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
  const char *arg1297 = "../test-data/blank-disks/blank-disk-1M.raw";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1297);
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
  const char *arg1299 = "../test-data/blank-disks/blank-disk-1M.qcow2";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1299);
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
  const char *arg1301 = "../test-data/blank-disks/blank-disk-with-backing.qcow2";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1301);
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
  CLEANUP_FREE char *ret1303;
  ret1303 = guestfs_dmesg (g);
  if (ret1303 == NULL)
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
  const char *arg1306 = "/download";
  int ret1305;
  ret1305 = guestfs_mkdir (g, arg1306);
  if (ret1305 == -1)
    return -1;
  CLEANUP_FREE char *arg1309 = substitute_srcdir ("$srcdir/../COPYING.LIB");
  const char *arg1310 = "/download/COPYING.LIB";
  int ret1308;
  ret1308 = guestfs_upload (g, arg1309, arg1310);
  if (ret1308 == -1)
    return -1;
  const char *arg1313 = "/download/COPYING.LIB";
  int ret1312;
  ret1312 = guestfs_download (g, arg1313, "testdownload.tmp");
  if (ret1312 == -1)
    return -1;
  CLEANUP_FREE char *arg1317 = substitute_srcdir ("testdownload.tmp");
  const char *arg1318 = "/download/upload";
  int ret1316;
  ret1316 = guestfs_upload (g, arg1317, arg1318);
  if (ret1316 == -1)
    return -1;
  const char *arg1320 = "md5";
  const char *arg1321 = "/download/upload";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg1320, arg1321);
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
  const char *arg1324 = "/download_offset";
  int ret1323;
  ret1323 = guestfs_mkdir (g, arg1324);
  if (ret1323 == -1)
    return -1;
  CLEANUP_FREE char *arg1327 = substitute_srcdir ("$srcdir/../COPYING.LIB");
  const char *arg1328 = "/download_offset/COPYING.LIB";
  int ret1326;
  ret1326 = guestfs_upload (g, arg1327, arg1328);
  if (ret1326 == -1)
    return -1;
  const char *arg1331 = "/download_offset/COPYING.LIB";
  int ret1330;
  ret1330 = guestfs_download_offset (g, arg1331, "testdownload.tmp", 100, 26430);
  if (ret1330 == -1)
    return -1;
  CLEANUP_FREE char *arg1337 = substitute_srcdir ("testdownload.tmp");
  const char *arg1338 = "/download_offset/COPYING.LIB";
  int ret1336;
  ret1336 = guestfs_upload_offset (g, arg1337, arg1338, 100);
  if (ret1336 == -1)
    return -1;
  const char *arg1341 = "md5";
  const char *arg1342 = "/download_offset/COPYING.LIB";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg1341, arg1342);
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
  int ret1344;
  ret1344 = guestfs_drop_caches (g, 3);
  if (ret1344 == -1)
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
  const char *arg1347 = "/directory";
  int64_t ret;
  ret = guestfs_du (g, arg1347);
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
  const char *arg1349_0 = "This";
  const char *arg1349_1 = "is";
  const char *arg1349_2 = "a";
  const char *arg1349_3 = "test";
  const char *const arg1349[] = {
    arg1349_0,
    arg1349_1,
    arg1349_2,
    arg1349_3,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_echo_daemon (g, (char **) arg1349);
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
  const char *const arg1351[1] = { NULL };
  CLEANUP_FREE char *ret;
  ret = guestfs_echo_daemon (g, (char **) arg1351);
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
  const char *arg1353 = "abc";
  const char *arg1354 = "/test-grep.txt";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_egrep (g, arg1353, arg1354);
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
  const char *arg1356 = "abc";
  const char *arg1357 = "/test-grep.txt";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_egrepi (g, arg1356, arg1357);
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
  const char *arg1360 = "/equal";
  int ret1359;
  ret1359 = guestfs_mkdir (g, arg1360);
  if (ret1359 == -1)
    return -1;
  const char *arg1363 = "/equal/file1";
  const char *arg1364 = "contents of a file";
  size_t arg1364_size = 18;
  int ret1362;
  ret1362 = guestfs_write (g, arg1363, arg1364, arg1364_size);
  if (ret1362 == -1)
    return -1;
  const char *arg1367 = "/equal/file1";
  const char *arg1368 = "/equal/file2";
  int ret1366;
  ret1366 = guestfs_cp (g, arg1367, arg1368);
  if (ret1366 == -1)
    return -1;
  const char *arg1370 = "/equal/file1";
  const char *arg1371 = "/equal/file2";
  int ret;
  ret = guestfs_equal (g, arg1370, arg1371);
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
  const char *arg1374 = "/equal2";
  int ret1373;
  ret1373 = guestfs_mkdir (g, arg1374);
  if (ret1373 == -1)
    return -1;
  const char *arg1377 = "/equal2/file1";
  const char *arg1378 = "contents of a file";
  size_t arg1378_size = 18;
  int ret1376;
  ret1376 = guestfs_write (g, arg1377, arg1378, arg1378_size);
  if (ret1376 == -1)
    return -1;
  const char *arg1381 = "/equal2/file2";
  const char *arg1382 = "contents of another file";
  size_t arg1382_size = 24;
  int ret1380;
  ret1380 = guestfs_write (g, arg1381, arg1382, arg1382_size);
  if (ret1380 == -1)
    return -1;
  const char *arg1384 = "/equal2/file1";
  const char *arg1385 = "/equal2/file2";
  int ret;
  ret = guestfs_equal (g, arg1384, arg1385);
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
  const char *arg1388 = "/equal3";
  int ret1387;
  ret1387 = guestfs_mkdir (g, arg1388);
  if (ret1387 == -1)
    return -1;
  const char *arg1391 = "/equal3/file1";
  const char *arg1392 = "/equal3/file2";
  int ret1390;
  guestfs_push_error_handler (g, NULL, NULL);
  ret1390 = guestfs_equal (g, arg1391, arg1392);
  guestfs_pop_error_handler (g);
  if (ret1390 != -1)
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
  const char *arg1394 = "/empty";
  int ret;
  ret = guestfs_exists (g, arg1394);
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
  const char *arg1396 = "/directory";
  int ret;
  ret = guestfs_exists (g, arg1396);
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
  const char *arg1398 = "/fallocate";
  int ret1;
  ret1 = guestfs_fallocate (g, arg1398, 1000000);
  if (ret1 == -1)
    return -1;
  const char *arg1401 = "/fallocate";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg1401);
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
  const char *arg1403 = "/fallocate64";
  int ret1;
  ret1 = guestfs_fallocate64 (g, arg1403, 1000000);
  if (ret1 == -1)
    return -1;
  const char *arg1406 = "/fallocate64";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg1406);
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
  const char *const arg1408[1] = { NULL };
  int ret;
  ret = guestfs_feature_available (g, (char **) arg1408);
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
  const char *arg1410 = "abc";
  const char *arg1411 = "/test-grep.txt";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_fgrep (g, arg1410, arg1411);
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
  const char *arg1413 = "abc";
  const char *arg1414 = "/test-grep.txt";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_fgrepi (g, arg1413, arg1414);
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
  const char *arg1416 = "/empty";
  CLEANUP_FREE char *ret;
  ret = guestfs_file (g, arg1416);
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
  const char *arg1418 = "/known-1";
  CLEANUP_FREE char *ret;
  ret = guestfs_file (g, arg1418);
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
  const char *arg1421 = "/notexists";
  CLEANUP_FREE char *ret1420;
  guestfs_push_error_handler (g, NULL, NULL);
  ret1420 = guestfs_file (g, arg1421);
  guestfs_pop_error_handler (g);
  if (ret1420 != NULL)
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
  const char *arg1423 = "/abssymlink";
  CLEANUP_FREE char *ret;
  ret = guestfs_file (g, arg1423);
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
  const char *arg1425 = "/directory";
  CLEANUP_FREE char *ret;
  ret = guestfs_file (g, arg1425);
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
  const char *arg1427 = "/bin-aarch64-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1427);
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
  const char *arg1429 = "/bin-armv7-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1429);
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
  const char *arg1431 = "/bin-i586-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1431);
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
  const char *arg1433 = "/bin-ppc64-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1433);
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
  const char *arg1435 = "/bin-ppc64le-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1435);
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
  const char *arg1437 = "/bin-riscv64-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1437);
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
  const char *arg1439 = "/bin-s390x-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1439);
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
  const char *arg1441 = "/bin-sparc-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1441);
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
  const char *arg1443 = "/bin-win32.exe";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1443);
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
  const char *arg1445 = "/bin-win64.exe";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1445);
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
  const char *arg1447 = "/bin-x86_64-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1447);
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
  const char *arg1449 = "/lib-aarch64.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1449);
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
  const char *arg1451 = "/lib-armv7.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1451);
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
  const char *arg1453 = "/lib-i586.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1453);
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
  const char *arg1455 = "/lib-ppc64.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1455);
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
  const char *arg1457 = "/lib-ppc64le.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1457);
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
  const char *arg1459 = "/lib-riscv64.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1459);
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
  const char *arg1461 = "/lib-s390x.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1461);
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
  const char *arg1463 = "/lib-sparc.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1463);
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
  const char *arg1465 = "/lib-win32.dll";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1465);
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
  const char *arg1467 = "/lib-win64.dll";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1467);
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
  const char *arg1469 = "/lib-x86_64.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1469);
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
  const char *arg1471 = "/initrd-x86_64.img";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1471);
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
  const char *arg1473 = "/initrd-x86_64.img.gz";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1473);
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
  const char *arg1475 = "/bin-x86_64-dynamic.gz";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1475);
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
  const char *arg1477 = "/lib-i586.so.xz";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1477);
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
  const char *arg1479 = "/lib-i586.so.zst";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1479);
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
  const char *arg1481 = "/filesize";
  const char *arg1482 = "hello, world";
  size_t arg1482_size = 12;
  int ret1;
  ret1 = guestfs_write (g, arg1481, arg1482, arg1482_size);
  if (ret1 == -1)
    return -1;
  const char *arg1484 = "/filesize";
  int64_t ret;
  ret = guestfs_filesize (g, arg1484);
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
  const char *arg1488 = "/fill";
  int ret1;
  ret1 = guestfs_fill (g, 99, 10, arg1488);
  if (ret1 == -1)
    return -1;
  const char *arg1490 = "/fill";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_read_file (g, arg1490, &size);
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
  const char *arg1492 = "abcdefghijklmnopqrstuvwxyz";
  const char *arg1494 = "/fill_pattern";
  int ret1;
  ret1 = guestfs_fill_pattern (g, arg1492, 28, arg1494);
  if (ret1 == -1)
    return -1;
  const char *arg1496 = "/fill_pattern";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_read_file (g, arg1496, &size);
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
  const char *arg1498 = "/";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_find (g, arg1498);
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
  const char *arg1500 = "/a";
  int ret3;
  ret3 = guestfs_touch (g, arg1500);
  if (ret3 == -1)
    return -1;
  const char *arg1502 = "/b";
  int ret2;
  ret2 = guestfs_mkdir (g, arg1502);
  if (ret2 == -1)
    return -1;
  const char *arg1504 = "/b/c";
  int ret1;
  ret1 = guestfs_touch (g, arg1504);
  if (ret1 == -1)
    return -1;
  const char *arg1506 = "/";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_find (g, arg1506);
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
  const char *arg1508 = "/find/b/c";
  int ret2;
  ret2 = guestfs_mkdir_p (g, arg1508);
  if (ret2 == -1)
    return -1;
  const char *arg1510 = "/find/b/c/d";
  int ret1;
  ret1 = guestfs_touch (g, arg1510);
  if (ret1 == -1)
    return -1;
  const char *arg1512 = "/find/b/";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_find (g, arg1512);
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
  const char *arg1514 = "/dev/sda1";
  struct guestfs_umount_opts_argv optargs1515;
  optargs1515.force = 0;
  optargs1515.lazyunmount = 0;
  optargs1515.bitmask = UINT64_C(0x3);
  int ret1;
  ret1 = guestfs_umount_opts_argv (g, arg1514, &optargs1515);
  if (ret1 == -1)
    return -1;
  const char *arg1516 = "ext2";
  const char *arg1517 = "/dev/sda1";
  int ret;
  ret = guestfs_fsck (g, arg1516, arg1517);
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
  const char *arg1519 = "/dev/sda1";
  struct guestfs_umount_opts_argv optargs1520;
  optargs1520.force = 0;
  optargs1520.lazyunmount = 0;
  optargs1520.bitmask = UINT64_C(0x3);
  int ret2;
  ret2 = guestfs_umount_opts_argv (g, arg1519, &optargs1520);
  if (ret2 == -1)
    return -1;
  const char *arg1521 = "/dev/sda1";
  int ret1;
  ret1 = guestfs_zero (g, arg1521);
  if (ret1 == -1)
    return -1;
  const char *arg1523 = "ext2";
  const char *arg1524 = "/dev/sda1";
  int ret;
  ret = guestfs_fsck (g, arg1523, arg1524);
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
  CLEANUP_FREE char *ret1526;
  ret1526 = guestfs_get_attach_method (g);
  if (ret1526 == NULL)
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
  CLEANUP_FREE char *ret1529;
  ret1529 = guestfs_get_backend (g);
  if (ret1529 == NULL)
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
  CLEANUP_FREE_STRING_LIST char **ret1531;
  ret1531 = guestfs_get_backend_settings (g);
  if (ret1531 == NULL)
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
  const char *arg1534 = "/e2attrs1";
  int ret1533;
  ret1533 = guestfs_touch (g, arg1534);
  if (ret1533 == -1)
    return -1;
  const char *arg1536 = "/e2attrs1";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2attrs (g, arg1536);
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
  const char *arg1539 = "/e2attrs2";
  int ret1538;
  ret1538 = guestfs_touch (g, arg1539);
  if (ret1538 == -1)
    return -1;
  const char *arg1542 = "/e2attrs2";
  const char *arg1543 = "is";
  struct guestfs_set_e2attrs_argv optargs1544;
  optargs1544.clear = 0;
  optargs1544.bitmask = UINT64_C(0x1);
  int ret1541;
  ret1541 = guestfs_set_e2attrs_argv (g, arg1542, arg1543, &optargs1544);
  if (ret1541 == -1)
    return -1;
  const char *arg1545 = "/e2attrs2";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2attrs (g, arg1545);
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
  const char *arg1548 = "/e2attrs3";
  int ret1547;
  ret1547 = guestfs_touch (g, arg1548);
  if (ret1547 == -1)
    return -1;
  const char *arg1551 = "/e2attrs3";
  const char *arg1552 = "is";
  struct guestfs_set_e2attrs_argv optargs1553;
  optargs1553.clear = 0;
  optargs1553.bitmask = UINT64_C(0x1);
  int ret1550;
  ret1550 = guestfs_set_e2attrs_argv (g, arg1551, arg1552, &optargs1553);
  if (ret1550 == -1)
    return -1;
  const char *arg1555 = "/e2attrs3";
  const char *arg1556 = "i";
  struct guestfs_set_e2attrs_argv optargs1557;
  optargs1557.clear = 1;
  optargs1557.bitmask = UINT64_C(0x1);
  int ret1554;
  ret1554 = guestfs_set_e2attrs_argv (g, arg1555, arg1556, &optargs1557);
  if (ret1554 == -1)
    return -1;
  const char *arg1558 = "/e2attrs3";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2attrs (g, arg1558);
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
  const char *arg1561 = "/e2attrs4";
  int ret1560;
  ret1560 = guestfs_touch (g, arg1561);
  if (ret1560 == -1)
    return -1;
  const char *arg1564 = "/e2attrs4";
  const char *arg1565 = "adst";
  struct guestfs_set_e2attrs_argv optargs1566;
  optargs1566.clear = 0;
  optargs1566.bitmask = UINT64_C(0x1);
  int ret1563;
  ret1563 = guestfs_set_e2attrs_argv (g, arg1564, arg1565, &optargs1566);
  if (ret1563 == -1)
    return -1;
  const char *arg1568 = "/e2attrs4";
  const char *arg1569 = "iS";
  struct guestfs_set_e2attrs_argv optargs1570;
  optargs1570.clear = 0;
  optargs1570.bitmask = UINT64_C(0x1);
  int ret1567;
  ret1567 = guestfs_set_e2attrs_argv (g, arg1568, arg1569, &optargs1570);
  if (ret1567 == -1)
    return -1;
  const char *arg1572 = "/e2attrs4";
  const char *arg1573 = "i";
  struct guestfs_set_e2attrs_argv optargs1574;
  optargs1574.clear = 1;
  optargs1574.bitmask = UINT64_C(0x1);
  int ret1571;
  ret1571 = guestfs_set_e2attrs_argv (g, arg1572, arg1573, &optargs1574);
  if (ret1571 == -1)
    return -1;
  const char *arg1576 = "/e2attrs4";
  const char *arg1577 = "ad";
  struct guestfs_set_e2attrs_argv optargs1578;
  optargs1578.clear = 1;
  optargs1578.bitmask = UINT64_C(0x1);
  int ret1575;
  ret1575 = guestfs_set_e2attrs_argv (g, arg1576, arg1577, &optargs1578);
  if (ret1575 == -1)
    return -1;
  const char *arg1580 = "/e2attrs4";
  const char *arg1581 = "";
  struct guestfs_set_e2attrs_argv optargs1582;
  optargs1582.clear = 0;
  optargs1582.bitmask = UINT64_C(0x1);
  int ret1579;
  ret1579 = guestfs_set_e2attrs_argv (g, arg1580, arg1581, &optargs1582);
  if (ret1579 == -1)
    return -1;
  const char *arg1584 = "/e2attrs4";
  const char *arg1585 = "";
  struct guestfs_set_e2attrs_argv optargs1586;
  optargs1586.clear = 1;
  optargs1586.bitmask = UINT64_C(0x1);
  int ret1583;
  ret1583 = guestfs_set_e2attrs_argv (g, arg1584, arg1585, &optargs1586);
  if (ret1583 == -1)
    return -1;
  const char *arg1587 = "/e2attrs4";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2attrs (g, arg1587);
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
  const char *arg1590 = "/e2attrs5";
  int ret1589;
  ret1589 = guestfs_touch (g, arg1590);
  if (ret1589 == -1)
    return -1;
  const char *arg1593 = "/e2attrs5";
  const char *arg1594 = "R";
  struct guestfs_set_e2attrs_argv optargs1595;
  optargs1595.clear = 0;
  optargs1595.bitmask = UINT64_C(0x1);
  int ret1592;
  guestfs_push_error_handler (g, NULL, NULL);
  ret1592 = guestfs_set_e2attrs_argv (g, arg1593, arg1594, &optargs1595);
  guestfs_pop_error_handler (g);
  if (ret1592 != -1)
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
  const char *arg1597 = "/e2attrs6";
  int ret1596;
  ret1596 = guestfs_touch (g, arg1597);
  if (ret1596 == -1)
    return -1;
  const char *arg1600 = "/e2attrs6";
  const char *arg1601 = "v";
  struct guestfs_set_e2attrs_argv optargs1602;
  optargs1602.clear = 0;
  optargs1602.bitmask = UINT64_C(0x1);
  int ret1599;
  guestfs_push_error_handler (g, NULL, NULL);
  ret1599 = guestfs_set_e2attrs_argv (g, arg1600, arg1601, &optargs1602);
  guestfs_pop_error_handler (g);
  if (ret1599 != -1)
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
  const char *arg1604 = "/e2attrs7";
  int ret1603;
  ret1603 = guestfs_touch (g, arg1604);
  if (ret1603 == -1)
    return -1;
  const char *arg1607 = "/e2attrs7";
  const char *arg1608 = "aa";
  struct guestfs_set_e2attrs_argv optargs1609;
  optargs1609.clear = 0;
  optargs1609.bitmask = UINT64_C(0x1);
  int ret1606;
  guestfs_push_error_handler (g, NULL, NULL);
  ret1606 = guestfs_set_e2attrs_argv (g, arg1607, arg1608, &optargs1609);
  guestfs_pop_error_handler (g);
  if (ret1606 != -1)
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
  const char *arg1611 = "/e2attrs8";
  int ret1610;
  ret1610 = guestfs_touch (g, arg1611);
  if (ret1610 == -1)
    return -1;
  const char *arg1614 = "/e2attrs8";
  const char *arg1615 = "BabcdB";
  struct guestfs_set_e2attrs_argv optargs1616;
  optargs1616.clear = 0;
  optargs1616.bitmask = UINT64_C(0x1);
  int ret1613;
  guestfs_push_error_handler (g, NULL, NULL);
  ret1613 = guestfs_set_e2attrs_argv (g, arg1614, arg1615, &optargs1616);
  guestfs_pop_error_handler (g);
  if (ret1613 != -1)
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
  const char *arg1617 = "/e2generation";
  int ret2;
  ret2 = guestfs_touch (g, arg1617);
  if (ret2 == -1)
    return -1;
  const char *arg1619 = "/e2generation";
  int ret1;
  ret1 = guestfs_set_e2generation (g, arg1619, 123456);
  if (ret1 == -1)
    return -1;
  const char *arg1622 = "/e2generation";
  int64_t ret;
  ret = guestfs_get_e2generation (g, arg1622);
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
  const char *arg1626 = "/dev/sdc";
  int ret1624;
  ret1624 = guestfs_mke2journal (g, 1024, arg1626);
  if (ret1624 == -1)
    return -1;
  const char *arg1629 = "/dev/sdc";
  CLEANUP_FREE char *ret1628;
  ret1628 = guestfs_get_e2uuid (g, arg1629);
  if (ret1628 == NULL)
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
  CLEANUP_FREE char *ret1631;
  ret1631 = guestfs_get_hv (g);
  if (ret1631 == NULL)
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
  const char *ret1633;
  ret1633 = guestfs_get_identifier (g);
  if (ret1633 == NULL)
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
  const char *ret1636;
  ret1636 = guestfs_get_path (g);
  if (ret1636 == NULL)
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
  const char *ret1638;
  ret1638 = guestfs_get_program (g);
  if (ret1638 == NULL)
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
  const char *ret1640;
  ret1640 = guestfs_get_qemu (g);
  if (ret1640 == NULL)
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
  const char *arg1643 = "/glob_expand/b/c";
  int ret3;
  ret3 = guestfs_mkdir_p (g, arg1643);
  if (ret3 == -1)
    return -1;
  const char *arg1645 = "/glob_expand/b/c/d";
  int ret2;
  ret2 = guestfs_touch (g, arg1645);
  if (ret2 == -1)
    return -1;
  const char *arg1647 = "/glob_expand/b/c/e";
  int ret1;
  ret1 = guestfs_touch (g, arg1647);
  if (ret1 == -1)
    return -1;
  const char *arg1649 = "/glob_expand/b/c/*";
  struct guestfs_glob_expand_opts_argv optargs1650;
  optargs1650.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_glob_expand_opts_argv (g, arg1649, &optargs1650);
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
  const char *arg1651 = "/glob_expand2/b/c";
  int ret3;
  ret3 = guestfs_mkdir_p (g, arg1651);
  if (ret3 == -1)
    return -1;
  const char *arg1653 = "/glob_expand2/b/c/d";
  int ret2;
  ret2 = guestfs_touch (g, arg1653);
  if (ret2 == -1)
    return -1;
  const char *arg1655 = "/glob_expand2/b/c/e";
  int ret1;
  ret1 = guestfs_touch (g, arg1655);
  if (ret1 == -1)
    return -1;
  const char *arg1657 = "/glob_expand2/*/c/*";
  struct guestfs_glob_expand_opts_argv optargs1658;
  optargs1658.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_glob_expand_opts_argv (g, arg1657, &optargs1658);
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
  const char *arg1659 = "/glob_expand3/b/c";
  int ret3;
  ret3 = guestfs_mkdir_p (g, arg1659);
  if (ret3 == -1)
    return -1;
  const char *arg1661 = "/glob_expand3/b/c/d";
  int ret2;
  ret2 = guestfs_touch (g, arg1661);
  if (ret2 == -1)
    return -1;
  const char *arg1663 = "/glob_expand3/b/c/e";
  int ret1;
  ret1 = guestfs_touch (g, arg1663);
  if (ret1 == -1)
    return -1;
  const char *arg1665 = "/glob_expand3/*/x/*";
  struct guestfs_glob_expand_opts_argv optargs1666;
  optargs1666.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_glob_expand_opts_argv (g, arg1665, &optargs1666);
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
  const char *arg1667 = "/glob_expand4/b/c";
  int ret3;
  ret3 = guestfs_mkdir_p (g, arg1667);
  if (ret3 == -1)
    return -1;
  const char *arg1669 = "/glob_expand4/b1";
  int ret2;
  ret2 = guestfs_touch (g, arg1669);
  if (ret2 == -1)
    return -1;
  const char *arg1671 = "/glob_expand4/c1";
  int ret1;
  ret1 = guestfs_touch (g, arg1671);
  if (ret1 == -1)
    return -1;
  const char *arg1673 = "/glob_expand4/b*";
  struct guestfs_glob_expand_opts_argv optargs1674;
  optargs1674.directoryslash = 0;
  optargs1674.bitmask = UINT64_C(0x1);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_glob_expand_opts_argv (g, arg1673, &optargs1674);
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
  const char *arg1675 = "abc";
  const char *arg1676 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1677;
  optargs1677.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1675, arg1676, &optargs1677);
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
  const char *arg1678 = "nomatch";
  const char *arg1679 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1680;
  optargs1680.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1678, arg1679, &optargs1680);
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
  const char *arg1681 = "nomatch";
  const char *arg1682 = "/abssymlink";
  struct guestfs_grep_opts_argv optargs1683;
  optargs1683.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1681, arg1682, &optargs1683);
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
  const char *arg1684 = "abc";
  const char *arg1685 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1686;
  optargs1686.extended = 1;
  optargs1686.bitmask = UINT64_C(0x1);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1684, arg1685, &optargs1686);
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
  const char *arg1687 = "abc";
  const char *arg1688 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1689;
  optargs1689.fixed = 1;
  optargs1689.bitmask = UINT64_C(0x2);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1687, arg1688, &optargs1689);
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
  const char *arg1690 = "abc";
  const char *arg1691 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1692;
  optargs1692.insensitive = 1;
  optargs1692.bitmask = UINT64_C(0x4);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1690, arg1691, &optargs1692);
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
  const char *arg1693 = "abc";
  const char *arg1694 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1695;
  optargs1695.extended = 1;
  optargs1695.insensitive = 1;
  optargs1695.bitmask = UINT64_C(0x5);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1693, arg1694, &optargs1695);
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
  const char *arg1696 = "abc";
  const char *arg1697 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1698;
  optargs1698.fixed = 1;
  optargs1698.insensitive = 1;
  optargs1698.bitmask = UINT64_C(0x6);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1696, arg1697, &optargs1698);
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
  const char *arg1699 = "abc";
  const char *arg1700 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1701;
  optargs1701.compressed = 1;
  optargs1701.bitmask = UINT64_C(0x8);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1699, arg1700, &optargs1701);
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
  const char *arg1702 = "abc";
  const char *arg1703 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1704;
  optargs1704.extended = 1;
  optargs1704.compressed = 1;
  optargs1704.bitmask = UINT64_C(0x9);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1702, arg1703, &optargs1704);
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
  const char *arg1705 = "abc";
  const char *arg1706 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1707;
  optargs1707.fixed = 1;
  optargs1707.compressed = 1;
  optargs1707.bitmask = UINT64_C(0xa);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1705, arg1706, &optargs1707);
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
  const char *arg1708 = "abc";
  const char *arg1709 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1710;
  optargs1710.insensitive = 1;
  optargs1710.compressed = 1;
  optargs1710.bitmask = UINT64_C(0xc);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1708, arg1709, &optargs1710);
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
  const char *arg1711 = "abc";
  const char *arg1712 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1713;
  optargs1713.extended = 1;
  optargs1713.insensitive = 1;
  optargs1713.compressed = 1;
  optargs1713.bitmask = UINT64_C(0xd);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1711, arg1712, &optargs1713);
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
  const char *arg1714 = "abc";
  const char *arg1715 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1716;
  optargs1716.fixed = 1;
  optargs1716.insensitive = 1;
  optargs1716.compressed = 1;
  optargs1716.bitmask = UINT64_C(0xe);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1714, arg1715, &optargs1716);
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
  const char *arg1717 = "abc";
  const char *arg1718 = "/test-grep.txt";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grepi (g, arg1717, arg1718);
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

  const char *features1720[] = { "grub", NULL };
  if (!guestfs_feature_available (g, (char **) features1720)) {
    skipped ("test_grub_install_0", "group %s not available in daemon",
             features1720[0]);
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
  const char *arg1722 = "/boot/grub";
  int ret1721;
  ret1721 = guestfs_mkdir_p (g, arg1722);
  if (ret1721 == -1)
    return -1;
  const char *arg1725 = "/boot/grub/device.map";
  const char *arg1726 = "(hd0) /dev/sda";
  size_t arg1726_size = 14;
  int ret1724;
  ret1724 = guestfs_write (g, arg1725, arg1726, arg1726_size);
  if (ret1724 == -1)
    return -1;
  const char *arg1729 = "/";
  const char *arg1730 = "/dev/sda";
  int ret1728;
  ret1728 = guestfs_grub_install (g, arg1729, arg1730);
  if (ret1728 == -1)
    return -1;
  const char *arg1732 = "/boot";
  struct guestfs_is_dir_opts_argv optargs1733;
  optargs1733.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg1732, &optargs1733);
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
  const char *arg1734 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_head (g, arg1734);
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
  const char *arg1736 = "/abssymlink";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_head (g, arg1736);
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
  const char *arg1739 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_head_n (g, 3, arg1739);
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
  const char *arg1742 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_head_n (g, -9997, arg1742);
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
  const char *arg1745 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_head_n (g, 0, arg1745);
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
  const char *arg1747 = "/known-4";
  CLEANUP_FREE char *ret;
  ret = guestfs_hexdump (g, arg1747);
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
  const char *arg1750 = "/100krandom";
  CLEANUP_FREE char *ret1749;
  ret1749 = guestfs_hexdump (g, arg1750);
  if (ret1749 == NULL)
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
  const char *arg1753 = "/abssymlink";
  CLEANUP_FREE char *ret1752;
  ret1752 = guestfs_hexdump (g, arg1753);
  if (ret1752 == NULL)
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

  const char *features1755[] = { "hivex", NULL };
  if (!guestfs_feature_available (g, (char **) features1755)) {
    skipped ("test_hivex_commit_0", "group %s not available in daemon",
             features1755[0]);
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
  CLEANUP_FREE char *arg1757 = substitute_srcdir ("$srcdir/../test-data/files/minimal");
  const char *arg1758 = "/hivex_commit1";
  int ret1756;
  ret1756 = guestfs_upload (g, arg1757, arg1758);
  if (ret1756 == -1)
    return -1;
  const char *arg1761 = "/hivex_commit1";
  struct guestfs_hivex_open_argv optargs1762;
  optargs1762.write = 1;
  optargs1762.bitmask = UINT64_C(0x4);
  int ret1760;
  ret1760 = guestfs_hivex_open_argv (g, arg1761, &optargs1762);
  if (ret1760 == -1)
    return -1;
  int ret1763;
  ret1763 = guestfs_hivex_commit (g, NULL);
  if (ret1763 == -1)
    return -1;
  return 0;
}

static int
test_hivex_commit_0_cleanup (guestfs_h *g)
{
  int ret1766;
  ret1766 = guestfs_hivex_close (g);
  if (ret1766 == -1)
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

  const char *features1768[] = { "hivex", NULL };
  if (!guestfs_feature_available (g, (char **) features1768)) {
    skipped ("test_hivex_commit_1", "group %s not available in daemon",
             features1768[0]);
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
  CLEANUP_FREE char *arg1770 = substitute_srcdir ("$srcdir/../test-data/files/minimal");
  const char *arg1771 = "/hivex_commit2";
  int ret1769;
  ret1769 = guestfs_upload (g, arg1770, arg1771);
  if (ret1769 == -1)
    return -1;
  const char *arg1774 = "/hivex_commit2";
  struct guestfs_hivex_open_argv optargs1775;
  optargs1775.write = 1;
  optargs1775.bitmask = UINT64_C(0x4);
  int ret1773;
  ret1773 = guestfs_hivex_open_argv (g, arg1774, &optargs1775);
  if (ret1773 == -1)
    return -1;
  const char *arg1777 = "/hivex_commit2_copy";
  int ret1776;
  ret1776 = guestfs_hivex_commit (g, arg1777);
  if (ret1776 == -1)
    return -1;
  const char *arg1779 = "/hivex_commit2_copy";
  struct guestfs_is_file_opts_argv optargs1780;
  optargs1780.followsymlinks = 0;
  optargs1780.bitmask = UINT64_C(0x1);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg1779, &optargs1780);
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
  int ret1781;
  ret1781 = guestfs_hivex_close (g);
  if (ret1781 == -1)
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

  const char *features1783[] = { "hivex", NULL };
  if (!guestfs_feature_available (g, (char **) features1783)) {
    skipped ("test_hivex_open_0", "group %s not available in daemon",
             features1783[0]);
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
  CLEANUP_FREE char *arg1785 = substitute_srcdir ("$srcdir/../test-data/files/minimal");
  const char *arg1786 = "/hivex_open";
  int ret1784;
  ret1784 = guestfs_upload (g, arg1785, arg1786);
  if (ret1784 == -1)
    return -1;
  const char *arg1789 = "/hivex_open";
  struct guestfs_hivex_open_argv optargs1790;
  optargs1790.write = 0;
  optargs1790.bitmask = UINT64_C(0x4);
  int ret1788;
  ret1788 = guestfs_hivex_open_argv (g, arg1789, &optargs1790);
  if (ret1788 == -1)
    return -1;
  int64_t ret1791;
  ret1791 = guestfs_hivex_root (g);
  if (ret1791 == -1)
    return -1;
  CLEANUP_FREE char *ret1793;
  ret1793 = guestfs_hivex_node_name (g, 4128);
  if (ret1793 == NULL)
      return -1;
  CLEANUP_FREE_HIVEX_NODE_LIST struct guestfs_hivex_node_list *ret1796;
  ret1796 = guestfs_hivex_node_children (g, 4128);
  if (ret1796 == NULL)
      return -1;
  CLEANUP_FREE_HIVEX_VALUE_LIST struct guestfs_hivex_value_list *ret1799;
  ret1799 = guestfs_hivex_node_values (g, 4128);
  if (ret1799 == NULL)
      return -1;
  return 0;
}

static int
test_hivex_open_0_cleanup (guestfs_h *g)
{
  int ret1802;
  ret1802 = guestfs_hivex_close (g);
  if (ret1802 == -1)
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
  const char *arg1804 = "/initrd";
  const char *arg1805 = "known-4";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_initrd_cat (g, arg1804, arg1805, &size);
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
  const char *arg1807 = "/initrd";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_initrd_list (g, arg1807);
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

  const char *features1809[] = { "inotify", NULL };
  if (!guestfs_feature_available (g, (char **) features1809)) {
    skipped ("test_inotify_add_watch_0", "group %s not available in daemon",
             features1809[0]);
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
  const char *arg1810 = "/inotify_add_watch";
  int ret5;
  ret5 = guestfs_mkdir (g, arg1810);
  if (ret5 == -1)
    return -1;
  int ret4;
  ret4 = guestfs_inotify_init (g, 0);
  if (ret4 == -1)
    return -1;
  const char *arg1814 = "/inotify_add_watch";
  int64_t ret3;
  ret3 = guestfs_inotify_add_watch (g, arg1814, 4095);
  if (ret3 == -1)
    return -1;
  const char *arg1817 = "/inotify_add_watch/a";
  int ret2;
  ret2 = guestfs_touch (g, arg1817);
  if (ret2 == -1)
    return -1;
  const char *arg1819 = "/inotify_add_watch/b";
  int ret1;
  ret1 = guestfs_touch (g, arg1819);
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

  const char *features1822[] = { "inotify", NULL };
  if (!guestfs_feature_available (g, (char **) features1822)) {
    skipped ("test_inotify_init_0", "group %s not available in daemon",
             features1822[0]);
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
  int ret1823;
  ret1823 = guestfs_inotify_init (g, 0);
  if (ret1823 == -1)
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
  const char *arg1827 = "/internal_write";
  const char *arg1828 = "new file contents";
  size_t arg1828_size = 17;
  int ret1826;
  ret1826 = guestfs_internal_write (g, arg1827, arg1828, arg1828_size);
  if (ret1826 == -1)
    return -1;
  const char *arg1830 = "/internal_write";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1830);
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
  const char *arg1833 = "/internal_write2";
  const char *arg1834 = "\nnew file contents\n";
  size_t arg1834_size = 19;
  int ret1832;
  ret1832 = guestfs_internal_write (g, arg1833, arg1834, arg1834_size);
  if (ret1832 == -1)
    return -1;
  const char *arg1836 = "/internal_write2";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1836);
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
  const char *arg1839 = "/internal_write3";
  const char *arg1840 = "\n\n";
  size_t arg1840_size = 2;
  int ret1838;
  ret1838 = guestfs_internal_write (g, arg1839, arg1840, arg1840_size);
  if (ret1838 == -1)
    return -1;
  const char *arg1842 = "/internal_write3";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1842);
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
  const char *arg1845 = "/internal_write4";
  const char *arg1846 = "";
  size_t arg1846_size = 0;
  int ret1844;
  ret1844 = guestfs_internal_write (g, arg1845, arg1846, arg1846_size);
  if (ret1844 == -1)
    return -1;
  const char *arg1848 = "/internal_write4";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1848);
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
  const char *arg1851 = "/internal_write5";
  const char *arg1852 = "\n\n\n";
  size_t arg1852_size = 3;
  int ret1850;
  ret1850 = guestfs_internal_write (g, arg1851, arg1852, arg1852_size);
  if (ret1850 == -1)
    return -1;
  const char *arg1854 = "/internal_write5";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1854);
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
  const char *arg1857 = "/internal_write6";
  const char *arg1858 = "\n";
  size_t arg1858_size = 1;
  int ret1856;
  ret1856 = guestfs_internal_write (g, arg1857, arg1858, arg1858_size);
  if (ret1856 == -1)
    return -1;
  const char *arg1860 = "/internal_write6";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1860);
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
  const char *arg1863 = "/internal_write_append";
  const char *arg1864 = "line1\n";
  size_t arg1864_size = 6;
  int ret1862;
  ret1862 = guestfs_write (g, arg1863, arg1864, arg1864_size);
  if (ret1862 == -1)
    return -1;
  const char *arg1867 = "/internal_write_append";
  const char *arg1868 = "line2\n";
  size_t arg1868_size = 6;
  int ret1866;
  ret1866 = guestfs_internal_write_append (g, arg1867, arg1868, arg1868_size);
  if (ret1866 == -1)
    return -1;
  const char *arg1871 = "/internal_write_append";
  const char *arg1872 = "line3a";
  size_t arg1872_size = 6;
  int ret1870;
  ret1870 = guestfs_internal_write_append (g, arg1871, arg1872, arg1872_size);
  if (ret1870 == -1)
    return -1;
  const char *arg1875 = "/internal_write_append";
  const char *arg1876 = "line3b\n";
  size_t arg1876_size = 7;
  int ret1874;
  ret1874 = guestfs_internal_write_append (g, arg1875, arg1876, arg1876_size);
  if (ret1874 == -1)
    return -1;
  const char *arg1878 = "/internal_write_append";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1878);
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
  const char *arg1880 = "/directory";
  struct guestfs_is_blockdev_opts_argv optargs1881;
  optargs1881.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_blockdev_opts_argv (g, arg1880, &optargs1881);
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
  const char *arg1886 = "/is_blockdev";
  int ret1882;
  ret1882 = guestfs_mknod_b (g, 511, 99, 66, arg1886);
  if (ret1882 == -1)
    return -1;
  const char *arg1888 = "/is_blockdev";
  struct guestfs_is_blockdev_opts_argv optargs1889;
  optargs1889.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_blockdev_opts_argv (g, arg1888, &optargs1889);
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
  const char *arg1891 = "/directory";
  struct guestfs_is_chardev_opts_argv optargs1892;
  optargs1892.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_chardev_opts_argv (g, arg1891, &optargs1892);
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
  const char *arg1897 = "/is_chardev";
  int ret1893;
  ret1893 = guestfs_mknod_c (g, 511, 99, 66, arg1897);
  if (ret1893 == -1)
    return -1;
  const char *arg1899 = "/is_chardev";
  struct guestfs_is_chardev_opts_argv optargs1900;
  optargs1900.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_chardev_opts_argv (g, arg1899, &optargs1900);
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
  const char *arg1902 = "/known-3";
  struct guestfs_is_dir_opts_argv optargs1903;
  optargs1903.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg1902, &optargs1903);
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
  const char *arg1904 = "/directory";
  struct guestfs_is_dir_opts_argv optargs1905;
  optargs1905.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg1904, &optargs1905);
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
  const char *arg1906 = "/directory";
  struct guestfs_is_fifo_opts_argv optargs1907;
  optargs1907.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_fifo_opts_argv (g, arg1906, &optargs1907);
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
  const char *arg1910 = "/is_fifo";
  int ret1908;
  ret1908 = guestfs_mkfifo (g, 511, arg1910);
  if (ret1908 == -1)
    return -1;
  const char *arg1912 = "/is_fifo";
  struct guestfs_is_fifo_opts_argv optargs1913;
  optargs1913.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_fifo_opts_argv (g, arg1912, &optargs1913);
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
  const char *arg1914 = "/known-1";
  struct guestfs_is_file_opts_argv optargs1915;
  optargs1915.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg1914, &optargs1915);
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
  const char *arg1916 = "/directory";
  struct guestfs_is_file_opts_argv optargs1917;
  optargs1917.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg1916, &optargs1917);
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
  const char *arg1918 = "/abssymlink";
  struct guestfs_is_file_opts_argv optargs1919;
  optargs1919.followsymlinks = 1;
  optargs1919.bitmask = UINT64_C(0x1);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg1918, &optargs1919);
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
  const char *arg1921 = "/dev/VG/LV";
  int ret;
  ret = guestfs_is_lv (g, arg1921);
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
  const char *arg1923 = "/dev/sda1";
  int ret;
  ret = guestfs_is_lv (g, arg1923);
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
  const char *arg1926 = "/directory";
  struct guestfs_is_socket_opts_argv optargs1927;
  optargs1927.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_socket_opts_argv (g, arg1926, &optargs1927);
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
  const char *arg1928 = "/directory";
  int ret;
  ret = guestfs_is_symlink (g, arg1928);
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
  const char *arg1930 = "/abssymlink";
  int ret;
  ret = guestfs_is_symlink (g, arg1930);
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
  const char *arg1932 = "/dev/sda";
  int ret;
  ret = guestfs_is_whole_device (g, arg1932);
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
  const char *arg1934 = "/dev/sda1";
  int ret;
  ret = guestfs_is_whole_device (g, arg1934);
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
  const char *arg1936 = "/dev/VG/LV";
  int ret;
  ret = guestfs_is_whole_device (g, arg1936);
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
  const char *arg1938 = "/100kallzeroes";
  int ret;
  ret = guestfs_is_zero (g, arg1938);
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
  const char *arg1940 = "/100kallspaces";
  int ret;
  ret = guestfs_is_zero (g, arg1940);
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
  const char *arg1943 = "/dev/sda1";
  struct guestfs_umount_opts_argv optargs1944;
  optargs1944.force = 0;
  optargs1944.lazyunmount = 0;
  optargs1944.bitmask = UINT64_C(0x3);
  int ret1942;
  ret1942 = guestfs_umount_opts_argv (g, arg1943, &optargs1944);
  if (ret1942 == -1)
    return -1;
  const char *arg1946 = "/dev/sda1";
  int ret1945;
  ret1945 = guestfs_zero_device (g, arg1946);
  if (ret1945 == -1)
    return -1;
  const char *arg1948 = "/dev/sda1";
  int ret;
  ret = guestfs_is_zero_device (g, arg1948);
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
  const char *arg1950 = "/dev/sda1";
  int ret;
  ret = guestfs_is_zero_device (g, arg1950);
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
  const char *arg1952 = "/dev/sdd";
  CLEANUP_FREE_ISOINFO struct guestfs_isoinfo *ret;
  ret = guestfs_isoinfo_device (g, arg1952);
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
  const char *arg1957 = "/dev/sda";
  const char *arg1958 = "mbr";
  int ret4;
  ret4 = guestfs_part_init (g, arg1957, arg1958);
  if (ret4 == -1)
    return -1;
  const char *arg1960 = "/dev/sda";
  const char *arg1961 = "p";
  int ret3;
  ret3 = guestfs_part_add (g, arg1960, arg1961, 64, 204799);
  if (ret3 == -1)
    return -1;
  const char *arg1965 = "/dev/sda";
  const char *arg1966 = "p";
  int ret2;
  ret2 = guestfs_part_add (g, arg1965, arg1966, 204800, 409599);
  if (ret2 == -1)
    return -1;
  const char *arg1970 = "/dev/sda";
  const char *arg1971 = "p";
  int ret1;
  ret1 = guestfs_part_add (g, arg1970, arg1971, 409600, -64);
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
  const char *arg1976 = "/ln";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1976);
  if (ret3 == -1)
    return -1;
  const char *arg1978 = "/ln/a";
  int ret2;
  ret2 = guestfs_touch (g, arg1978);
  if (ret2 == -1)
    return -1;
  const char *arg1980 = "/ln/a";
  const char *arg1981 = "/ln/b";
  int ret1;
  ret1 = guestfs_ln (g, arg1980, arg1981);
  if (ret1 == -1)
    return -1;
  const char *arg1983 = "/ln/b";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg1983);
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
  const char *arg1985 = "/ln_f";
  int ret4;
  ret4 = guestfs_mkdir (g, arg1985);
  if (ret4 == -1)
    return -1;
  const char *arg1987 = "/ln_f/a";
  int ret3;
  ret3 = guestfs_touch (g, arg1987);
  if (ret3 == -1)
    return -1;
  const char *arg1989 = "/ln_f/b";
  int ret2;
  ret2 = guestfs_touch (g, arg1989);
  if (ret2 == -1)
    return -1;
  const char *arg1991 = "/ln_f/a";
  const char *arg1992 = "/ln_f/b";
  int ret1;
  ret1 = guestfs_ln_f (g, arg1991, arg1992);
  if (ret1 == -1)
    return -1;
  const char *arg1994 = "/ln_f/b";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg1994);
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
  const char *arg1996 = "/ln_s";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1996);
  if (ret3 == -1)
    return -1;
  const char *arg1998 = "/ln_s/a";
  int ret2;
  ret2 = guestfs_touch (g, arg1998);
  if (ret2 == -1)
    return -1;
  const char *arg2000 = "a";
  const char *arg2001 = "/ln_s/b";
  int ret1;
  ret1 = guestfs_ln_s (g, arg2000, arg2001);
  if (ret1 == -1)
    return -1;
  const char *arg2003 = "/ln_s/b";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_lstat (g, arg2003);
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
  const char *arg2006 = "/ln_sf/b";
  int ret2005;
  ret2005 = guestfs_mkdir_p (g, arg2006);
  if (ret2005 == -1)
    return -1;
  const char *arg2009 = "/ln_sf/b/c";
  int ret2008;
  ret2008 = guestfs_touch (g, arg2009);
  if (ret2008 == -1)
    return -1;
  const char *arg2012 = "../d";
  const char *arg2013 = "/ln_sf/b/c";
  int ret2011;
  ret2011 = guestfs_ln_sf (g, arg2012, arg2013);
  if (ret2011 == -1)
    return -1;
  const char *arg2015 = "/ln_sf/b/c";
  CLEANUP_FREE char *ret;
  ret = guestfs_readlink (g, arg2015);
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
  const char *arg2017 = "/ls";
  int ret4;
  ret4 = guestfs_mkdir (g, arg2017);
  if (ret4 == -1)
    return -1;
  const char *arg2019 = "/ls/new";
  int ret3;
  ret3 = guestfs_touch (g, arg2019);
  if (ret3 == -1)
    return -1;
  const char *arg2021 = "/ls/newer";
  int ret2;
  ret2 = guestfs_touch (g, arg2021);
  if (ret2 == -1)
    return -1;
  const char *arg2023 = "/ls/newest";
  int ret1;
  ret1 = guestfs_touch (g, arg2023);
  if (ret1 == -1)
    return -1;
  const char *arg2025 = "/ls";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_ls (g, arg2025);
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
  const char *arg2027 = "/empty";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_lstat (g, arg2027);
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
  const char *arg2029 = "/empty";
  CLEANUP_FREE_STATNS struct guestfs_statns *ret;
  ret = guestfs_lstatns (g, arg2029);
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

  const char *features2031[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2031)) {
    skipped ("test_lvcreate_0", "group %s not available in daemon",
             features2031[0]);
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
  const char *arg2032 = "/dev/sda";
  const char *arg2033 = "mbr";
  int ret14;
  ret14 = guestfs_part_init (g, arg2032, arg2033);
  if (ret14 == -1)
    return -1;
  const char *arg2035 = "/dev/sda";
  const char *arg2036 = "p";
  int ret13;
  ret13 = guestfs_part_add (g, arg2035, arg2036, 64, 204799);
  if (ret13 == -1)
    return -1;
  const char *arg2040 = "/dev/sda";
  const char *arg2041 = "p";
  int ret12;
  ret12 = guestfs_part_add (g, arg2040, arg2041, 204800, 409599);
  if (ret12 == -1)
    return -1;
  const char *arg2045 = "/dev/sda";
  const char *arg2046 = "p";
  int ret11;
  ret11 = guestfs_part_add (g, arg2045, arg2046, 409600, -64);
  if (ret11 == -1)
    return -1;
  const char *arg2050 = "/dev/sda1";
  int ret10;
  ret10 = guestfs_pvcreate (g, arg2050);
  if (ret10 == -1)
    return -1;
  const char *arg2052 = "/dev/sda2";
  int ret9;
  ret9 = guestfs_pvcreate (g, arg2052);
  if (ret9 == -1)
    return -1;
  const char *arg2054 = "/dev/sda3";
  int ret8;
  ret8 = guestfs_pvcreate (g, arg2054);
  if (ret8 == -1)
    return -1;
  const char *arg2056 = "VG1";
  const char *arg2057_0 = "/dev/sda1";
  const char *arg2057_1 = "/dev/sda2";
  const char *const arg2057[] = {
    arg2057_0,
    arg2057_1,
    NULL
  };
  int ret7;
  ret7 = guestfs_vgcreate (g, arg2056, (char **) arg2057);
  if (ret7 == -1)
    return -1;
  const char *arg2059 = "VG2";
  const char *arg2060_0 = "/dev/sda3";
  const char *const arg2060[] = {
    arg2060_0,
    NULL
  };
  int ret6;
  ret6 = guestfs_vgcreate (g, arg2059, (char **) arg2060);
  if (ret6 == -1)
    return -1;
  const char *arg2062 = "LV1";
  const char *arg2063 = "VG1";
  int ret5;
  ret5 = guestfs_lvcreate (g, arg2062, arg2063, 50);
  if (ret5 == -1)
    return -1;
  const char *arg2066 = "LV2";
  const char *arg2067 = "VG1";
  int ret4;
  ret4 = guestfs_lvcreate (g, arg2066, arg2067, 50);
  if (ret4 == -1)
    return -1;
  const char *arg2070 = "LV3";
  const char *arg2071 = "VG2";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg2070, arg2071, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2074 = "LV4";
  const char *arg2075 = "VG2";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg2074, arg2075, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2078 = "LV5";
  const char *arg2079 = "VG2";
  int ret1;
  ret1 = guestfs_lvcreate (g, arg2078, arg2079, 50);
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

  const char *features2083[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2083)) {
    skipped ("test_lvcreate_free_0", "group %s not available in daemon",
             features2083[0]);
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
  const char *arg2084 = "/dev/sda";
  const char *arg2085 = "mbr";
  int ret7;
  ret7 = guestfs_part_disk (g, arg2084, arg2085);
  if (ret7 == -1)
    return -1;
  const char *arg2087 = "/dev/sda1";
  int ret6;
  ret6 = guestfs_pvcreate (g, arg2087);
  if (ret6 == -1)
    return -1;
  const char *arg2089 = "VG";
  const char *arg2090_0 = "/dev/sda1";
  const char *const arg2090[] = {
    arg2090_0,
    NULL
  };
  int ret5;
  ret5 = guestfs_vgcreate (g, arg2089, (char **) arg2090);
  if (ret5 == -1)
    return -1;
  const char *arg2092 = "LV1";
  const char *arg2093 = "VG";
  int ret4;
  ret4 = guestfs_lvcreate_free (g, arg2092, arg2093, 50);
  if (ret4 == -1)
    return -1;
  const char *arg2096 = "LV2";
  const char *arg2097 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate_free (g, arg2096, arg2097, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2100 = "LV3";
  const char *arg2101 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate_free (g, arg2100, arg2101, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2104 = "LV4";
  const char *arg2105 = "VG";
  int ret1;
  ret1 = guestfs_lvcreate_free (g, arg2104, arg2105, 100);
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

  const char *features2109[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2109)) {
    skipped ("test_lvm_canonical_lv_name_0", "group %s not available in daemon",
             features2109[0]);
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
  const char *arg2110 = "/dev/mapper/VG-LV";
  CLEANUP_FREE char *ret;
  ret = guestfs_lvm_canonical_lv_name (g, arg2110);
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

  const char *features2112[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2112)) {
    skipped ("test_lvm_canonical_lv_name_1", "group %s not available in daemon",
             features2112[0]);
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
  const char *arg2113 = "/dev/VG/LV";
  CLEANUP_FREE char *ret;
  ret = guestfs_lvm_canonical_lv_name (g, arg2113);
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
  int ret2115;
  ret2115 = guestfs_lvm_scan (g, 1);
  if (ret2115 == -1)
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

  const char *features2118[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2118)) {
    skipped ("test_lvremove_0", "group %s not available in daemon",
             features2118[0]);
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
  const char *arg2119 = "/dev/sda";
  const char *arg2120 = "mbr";
  int ret6;
  ret6 = guestfs_part_disk (g, arg2119, arg2120);
  if (ret6 == -1)
    return -1;
  const char *arg2122 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg2122);
  if (ret5 == -1)
    return -1;
  const char *arg2124 = "VG";
  const char *arg2125_0 = "/dev/sda1";
  const char *const arg2125[] = {
    arg2125_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg2124, (char **) arg2125);
  if (ret4 == -1)
    return -1;
  const char *arg2127 = "LV1";
  const char *arg2128 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg2127, arg2128, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2131 = "LV2";
  const char *arg2132 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg2131, arg2132, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2135 = "/dev/VG/LV1";
  int ret1;
  ret1 = guestfs_lvremove (g, arg2135);
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

  const char *features2138[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2138)) {
    skipped ("test_lvremove_1", "group %s not available in daemon",
             features2138[0]);
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
  const char *arg2139 = "/dev/sda";
  const char *arg2140 = "mbr";
  int ret6;
  ret6 = guestfs_part_disk (g, arg2139, arg2140);
  if (ret6 == -1)
    return -1;
  const char *arg2142 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg2142);
  if (ret5 == -1)
    return -1;
  const char *arg2144 = "VG";
  const char *arg2145_0 = "/dev/sda1";
  const char *const arg2145[] = {
    arg2145_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg2144, (char **) arg2145);
  if (ret4 == -1)
    return -1;
  const char *arg2147 = "LV1";
  const char *arg2148 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg2147, arg2148, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2151 = "LV2";
  const char *arg2152 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg2151, arg2152, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2155 = "/dev/VG";
  int ret1;
  ret1 = guestfs_lvremove (g, arg2155);
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

  const char *features2158[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2158)) {
    skipped ("test_lvremove_2", "group %s not available in daemon",
             features2158[0]);
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
  const char *arg2159 = "/dev/sda";
  const char *arg2160 = "mbr";
  int ret6;
  ret6 = guestfs_part_disk (g, arg2159, arg2160);
  if (ret6 == -1)
    return -1;
  const char *arg2162 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg2162);
  if (ret5 == -1)
    return -1;
  const char *arg2164 = "VG";
  const char *arg2165_0 = "/dev/sda1";
  const char *const arg2165[] = {
    arg2165_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg2164, (char **) arg2165);
  if (ret4 == -1)
    return -1;
  const char *arg2167 = "LV1";
  const char *arg2168 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg2167, arg2168, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2171 = "LV2";
  const char *arg2172 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg2171, arg2172, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2175 = "/dev/VG";
  int ret1;
  ret1 = guestfs_lvremove (g, arg2175);
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
  const char *arg2178 = "/dev/VG/LV";
  const char *arg2179 = "/dev/VG/LV2";
  int ret1;
  ret1 = guestfs_lvrename (g, arg2178, arg2179);
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

  const char *features2182[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2182)) {
    skipped ("test_lvresize_0", "group %s not available in daemon",
             features2182[0]);
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
  const char *arg2184 = "/dev/sda";
  const char *arg2185 = "mbr";
  int ret2183;
  ret2183 = guestfs_part_disk (g, arg2184, arg2185);
  if (ret2183 == -1)
    return -1;
  const char *arg2188 = "/dev/sda1";
  int ret2187;
  ret2187 = guestfs_pvcreate (g, arg2188);
  if (ret2187 == -1)
    return -1;
  const char *arg2191 = "VG";
  const char *arg2192_0 = "/dev/sda1";
  const char *const arg2192[] = {
    arg2192_0,
    NULL
  };
  int ret2190;
  ret2190 = guestfs_vgcreate (g, arg2191, (char **) arg2192);
  if (ret2190 == -1)
    return -1;
  const char *arg2195 = "LV";
  const char *arg2196 = "VG";
  int ret2194;
  ret2194 = guestfs_lvcreate (g, arg2195, arg2196, 10);
  if (ret2194 == -1)
    return -1;
  const char *arg2200 = "ext2";
  const char *arg2201 = "/dev/VG/LV";
  struct guestfs_mkfs_opts_argv optargs2202;
  optargs2202.bitmask = UINT64_C(0x0);
  int ret2199;
  ret2199 = guestfs_mkfs_opts_argv (g, arg2200, arg2201, &optargs2202);
  if (ret2199 == -1)
    return -1;
  const char *arg2204 = "/dev/VG/LV";
  const char *arg2205 = "/";
  int ret2203;
  ret2203 = guestfs_mount (g, arg2204, arg2205);
  if (ret2203 == -1)
    return -1;
  const char *arg2208 = "/new";
  const char *arg2209 = "test content";
  size_t arg2209_size = 12;
  int ret2207;
  ret2207 = guestfs_write (g, arg2208, arg2209, arg2209_size);
  if (ret2207 == -1)
    return -1;
  const char *arg2212 = "/";
  struct guestfs_umount_opts_argv optargs2213;
  optargs2213.force = 0;
  optargs2213.lazyunmount = 0;
  optargs2213.bitmask = UINT64_C(0x3);
  int ret2211;
  ret2211 = guestfs_umount_opts_argv (g, arg2212, &optargs2213);
  if (ret2211 == -1)
    return -1;
  const char *arg2215 = "/dev/VG/LV";
  int ret2214;
  ret2214 = guestfs_lvresize (g, arg2215, 20);
  if (ret2214 == -1)
    return -1;
  const char *arg2219 = "/dev/VG/LV";
  int ret2218;
  ret2218 = guestfs_e2fsck_f (g, arg2219);
  if (ret2218 == -1)
    return -1;
  const char *arg2222 = "/dev/VG/LV";
  struct guestfs_e2fsck_argv optargs2223;
  optargs2223.correct = 1;
  optargs2223.forceall = 0;
  optargs2223.bitmask = UINT64_C(0x3);
  int ret2221;
  ret2221 = guestfs_e2fsck_argv (g, arg2222, &optargs2223);
  if (ret2221 == -1)
    return -1;
  const char *arg2225 = "/dev/VG/LV";
  struct guestfs_e2fsck_argv optargs2226;
  optargs2226.correct = 0;
  optargs2226.forceall = 1;
  optargs2226.bitmask = UINT64_C(0x3);
  int ret2224;
  ret2224 = guestfs_e2fsck_argv (g, arg2225, &optargs2226);
  if (ret2224 == -1)
    return -1;
  const char *arg2228 = "/dev/VG/LV";
  int ret2227;
  ret2227 = guestfs_resize2fs (g, arg2228);
  if (ret2227 == -1)
    return -1;
  const char *arg2231 = "/dev/VG/LV";
  const char *arg2232 = "/";
  int ret2230;
  ret2230 = guestfs_mount (g, arg2231, arg2232);
  if (ret2230 == -1)
    return -1;
  const char *arg2234 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2234);
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

  const char *features2236[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2236)) {
    skipped ("test_lvresize_1", "group %s not available in daemon",
             features2236[0]);
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
  const char *arg2238 = "/dev/sda";
  const char *arg2239 = "mbr";
  int ret2237;
  ret2237 = guestfs_part_disk (g, arg2238, arg2239);
  if (ret2237 == -1)
    return -1;
  const char *arg2242 = "/dev/sda1";
  int ret2241;
  ret2241 = guestfs_pvcreate (g, arg2242);
  if (ret2241 == -1)
    return -1;
  const char *arg2245 = "VG";
  const char *arg2246_0 = "/dev/sda1";
  const char *const arg2246[] = {
    arg2246_0,
    NULL
  };
  int ret2244;
  ret2244 = guestfs_vgcreate (g, arg2245, (char **) arg2246);
  if (ret2244 == -1)
    return -1;
  const char *arg2249 = "LV";
  const char *arg2250 = "VG";
  int ret2248;
  ret2248 = guestfs_lvcreate (g, arg2249, arg2250, 20);
  if (ret2248 == -1)
    return -1;
  const char *arg2254 = "/dev/VG/LV";
  int ret2253;
  ret2253 = guestfs_lvresize (g, arg2254, 10);
  if (ret2253 == -1)
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

  const char *features2257[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2257)) {
    skipped ("test_lvresize_free_0", "group %s not available in daemon",
             features2257[0]);
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
  const char *arg2259 = "/dev/sda";
  const char *arg2260 = "mbr";
  int ret2258;
  ret2258 = guestfs_part_disk (g, arg2259, arg2260);
  if (ret2258 == -1)
    return -1;
  const char *arg2263 = "/dev/sda1";
  int ret2262;
  ret2262 = guestfs_pvcreate (g, arg2263);
  if (ret2262 == -1)
    return -1;
  const char *arg2266 = "VG";
  const char *arg2267_0 = "/dev/sda1";
  const char *const arg2267[] = {
    arg2267_0,
    NULL
  };
  int ret2265;
  ret2265 = guestfs_vgcreate (g, arg2266, (char **) arg2267);
  if (ret2265 == -1)
    return -1;
  const char *arg2270 = "LV";
  const char *arg2271 = "VG";
  int ret2269;
  ret2269 = guestfs_lvcreate (g, arg2270, arg2271, 10);
  if (ret2269 == -1)
    return -1;
  const char *arg2275 = "/dev/VG/LV";
  int ret2274;
  ret2274 = guestfs_lvresize_free (g, arg2275, 100);
  if (ret2274 == -1)
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

  const char *features2278[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2278)) {
    skipped ("test_lvs_0", "group %s not available in daemon",
             features2278[0]);
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

  const char *features2280[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2280)) {
    skipped ("test_lvs_1", "group %s not available in daemon",
             features2280[0]);
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
  const char *arg2281 = "/dev/sda";
  const char *arg2282 = "mbr";
  int ret12;
  ret12 = guestfs_part_init (g, arg2281, arg2282);
  if (ret12 == -1)
    return -1;
  const char *arg2284 = "/dev/sda";
  const char *arg2285 = "p";
  int ret11;
  ret11 = guestfs_part_add (g, arg2284, arg2285, 64, 204799);
  if (ret11 == -1)
    return -1;
  const char *arg2289 = "/dev/sda";
  const char *arg2290 = "p";
  int ret10;
  ret10 = guestfs_part_add (g, arg2289, arg2290, 204800, 409599);
  if (ret10 == -1)
    return -1;
  const char *arg2294 = "/dev/sda";
  const char *arg2295 = "p";
  int ret9;
  ret9 = guestfs_part_add (g, arg2294, arg2295, 409600, -64);
  if (ret9 == -1)
    return -1;
  const char *arg2299 = "/dev/sda1";
  int ret8;
  ret8 = guestfs_pvcreate (g, arg2299);
  if (ret8 == -1)
    return -1;
  const char *arg2301 = "/dev/sda2";
  int ret7;
  ret7 = guestfs_pvcreate (g, arg2301);
  if (ret7 == -1)
    return -1;
  const char *arg2303 = "/dev/sda3";
  int ret6;
  ret6 = guestfs_pvcreate (g, arg2303);
  if (ret6 == -1)
    return -1;
  const char *arg2305 = "VG1";
  const char *arg2306_0 = "/dev/sda1";
  const char *arg2306_1 = "/dev/sda2";
  const char *const arg2306[] = {
    arg2306_0,
    arg2306_1,
    NULL
  };
  int ret5;
  ret5 = guestfs_vgcreate (g, arg2305, (char **) arg2306);
  if (ret5 == -1)
    return -1;
  const char *arg2308 = "VG2";
  const char *arg2309_0 = "/dev/sda3";
  const char *const arg2309[] = {
    arg2309_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg2308, (char **) arg2309);
  if (ret4 == -1)
    return -1;
  const char *arg2311 = "LV1";
  const char *arg2312 = "VG1";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg2311, arg2312, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2315 = "LV2";
  const char *arg2316 = "VG1";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg2315, arg2316, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2319 = "LV3";
  const char *arg2320 = "VG2";
  int ret1;
  ret1 = guestfs_lvcreate (g, arg2319, arg2320, 50);
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
  const char *arg2325 = "/mkdir";
  int ret2324;
  ret2324 = guestfs_mkdir (g, arg2325);
  if (ret2324 == -1)
    return -1;
  const char *arg2327 = "/mkdir";
  struct guestfs_is_dir_opts_argv optargs2328;
  optargs2328.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg2327, &optargs2328);
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
  const char *arg2330 = "/mkdir2/foo/bar";
  int ret2329;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2329 = guestfs_mkdir (g, arg2330);
  guestfs_pop_error_handler (g);
  if (ret2329 != -1)
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
  const char *arg2332 = "/mkdir_mode";
  int ret1;
  ret1 = guestfs_mkdir_mode (g, arg2332, 73);
  if (ret1 == -1)
    return -1;
  const char *arg2335 = "/mkdir_mode";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2335);
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
  const char *arg2338 = "/mkdir_p/foo/bar";
  int ret2337;
  ret2337 = guestfs_mkdir_p (g, arg2338);
  if (ret2337 == -1)
    return -1;
  const char *arg2340 = "/mkdir_p/foo/bar";
  struct guestfs_is_dir_opts_argv optargs2341;
  optargs2341.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg2340, &optargs2341);
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
  const char *arg2343 = "/mkdir_p2/foo/bar";
  int ret2342;
  ret2342 = guestfs_mkdir_p (g, arg2343);
  if (ret2342 == -1)
    return -1;
  const char *arg2345 = "/mkdir_p2/foo";
  struct guestfs_is_dir_opts_argv optargs2346;
  optargs2346.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg2345, &optargs2346);
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
  const char *arg2348 = "/mkdir_p3/foo/bar";
  int ret2347;
  ret2347 = guestfs_mkdir_p (g, arg2348);
  if (ret2347 == -1)
    return -1;
  const char *arg2350 = "/mkdir_p3";
  struct guestfs_is_dir_opts_argv optargs2351;
  optargs2351.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg2350, &optargs2351);
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
  const char *arg2353 = "/mkdir_p4";
  int ret2352;
  ret2352 = guestfs_mkdir (g, arg2353);
  if (ret2352 == -1)
    return -1;
  const char *arg2356 = "/mkdir_p4";
  int ret2355;
  ret2355 = guestfs_mkdir_p (g, arg2356);
  if (ret2355 == -1)
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
  const char *arg2359 = "/mkdir_p5";
  int ret2358;
  ret2358 = guestfs_touch (g, arg2359);
  if (ret2358 == -1)
    return -1;
  const char *arg2362 = "/mkdir_p5";
  int ret2361;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2361 = guestfs_mkdir_p (g, arg2362);
  guestfs_pop_error_handler (g);
  if (ret2361 != -1)
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
  const char *arg2365 = "/mkdtemp";
  int ret2364;
  ret2364 = guestfs_mkdir (g, arg2365);
  if (ret2364 == -1)
    return -1;
  const char *arg2368 = "/mkdtemp/tmpXXXXXX";
  CLEANUP_FREE char *ret2367;
  ret2367 = guestfs_mkdtemp (g, arg2368);
  if (ret2367 == NULL)
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
  const char *arg2371 = "/dev/sda";
  const char *arg2372 = "mbr";
  int ret2370;
  ret2370 = guestfs_part_init (g, arg2371, arg2372);
  if (ret2370 == -1)
    return -1;
  const char *arg2375 = "/dev/sda";
  const char *arg2376 = "p";
  int ret2374;
  ret2374 = guestfs_part_add (g, arg2375, arg2376, 64, 204799);
  if (ret2374 == -1)
    return -1;
  const char *arg2381 = "/dev/sda";
  const char *arg2382 = "p";
  int ret2380;
  ret2380 = guestfs_part_add (g, arg2381, arg2382, 204800, -64);
  if (ret2380 == -1)
    return -1;
  const char *arg2387 = "/dev/sda1";
  struct guestfs_mke2fs_argv optargs2388;
  optargs2388.blocksize = 4096;
  optargs2388.journaldev = 1;
  optargs2388.bitmask = UINT64_C(0x100000002);
  int ret2386;
  ret2386 = guestfs_mke2fs_argv (g, arg2387, &optargs2388);
  if (ret2386 == -1)
    return -1;
  const char *arg2390 = "/dev/sda2";
  struct guestfs_mke2fs_argv optargs2391;
  optargs2391.blocksize = 4096;
  optargs2391.journaldevice = "/dev/sda1";
  optargs2391.fstype = "ext2";
  optargs2391.bitmask = UINT64_C(0x44002);
  int ret2389;
  ret2389 = guestfs_mke2fs_argv (g, arg2390, &optargs2391);
  if (ret2389 == -1)
    return -1;
  const char *arg2393 = "/dev/sda2";
  const char *arg2394 = "/";
  int ret2392;
  ret2392 = guestfs_mount (g, arg2393, arg2394);
  if (ret2392 == -1)
    return -1;
  const char *arg2397 = "/new";
  const char *arg2398 = "new file contents";
  size_t arg2398_size = 17;
  int ret2396;
  ret2396 = guestfs_write (g, arg2397, arg2398, arg2398_size);
  if (ret2396 == -1)
    return -1;
  const char *arg2400 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2400);
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
  const char *arg2403 = "/dev/sda";
  const char *arg2404 = "mbr";
  int ret2402;
  ret2402 = guestfs_part_init (g, arg2403, arg2404);
  if (ret2402 == -1)
    return -1;
  const char *arg2407 = "/dev/sda";
  const char *arg2408 = "p";
  int ret2406;
  ret2406 = guestfs_part_add (g, arg2407, arg2408, 64, 204799);
  if (ret2406 == -1)
    return -1;
  const char *arg2413 = "/dev/sda";
  const char *arg2414 = "p";
  int ret2412;
  ret2412 = guestfs_part_add (g, arg2413, arg2414, 204800, -64);
  if (ret2412 == -1)
    return -1;
  const char *arg2419 = "/dev/sda1";
  struct guestfs_mke2fs_argv optargs2420;
  optargs2420.blocksize = 4096;
  optargs2420.journaldevice = "/dev/sda1";
  optargs2420.label = "JOURNAL";
  optargs2420.fstype = "ext2";
  optargs2420.journaldev = 1;
  optargs2420.bitmask = UINT64_C(0x10004c002);
  int ret2418;
  ret2418 = guestfs_mke2fs_argv (g, arg2419, &optargs2420);
  if (ret2418 == -1)
    return -1;
  const char *arg2422 = "/dev/sda2";
  struct guestfs_mke2fs_argv optargs2423;
  optargs2423.blocksize = 4096;
  optargs2423.journaldevice = "LABEL=JOURNAL";
  optargs2423.label = "JOURNAL";
  optargs2423.fstype = "ext2";
  optargs2423.bitmask = UINT64_C(0x4c002);
  int ret2421;
  ret2421 = guestfs_mke2fs_argv (g, arg2422, &optargs2423);
  if (ret2421 == -1)
    return -1;
  const char *arg2425 = "/dev/sda2";
  const char *arg2426 = "/";
  int ret2424;
  ret2424 = guestfs_mount (g, arg2425, arg2426);
  if (ret2424 == -1)
    return -1;
  const char *arg2429 = "/new";
  const char *arg2430 = "new file contents";
  size_t arg2430_size = 17;
  int ret2428;
  ret2428 = guestfs_write (g, arg2429, arg2430, arg2430_size);
  if (ret2428 == -1)
    return -1;
  const char *arg2432 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2432);
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
  const char *arg2435 = "/dev/sda";
  const char *arg2436 = "mbr";
  int ret2434;
  ret2434 = guestfs_part_init (g, arg2435, arg2436);
  if (ret2434 == -1)
    return -1;
  const char *arg2439 = "/dev/sda";
  const char *arg2440 = "p";
  int ret2438;
  ret2438 = guestfs_part_add (g, arg2439, arg2440, 64, 204799);
  if (ret2438 == -1)
    return -1;
  const char *arg2445 = "/dev/sda";
  const char *arg2446 = "p";
  int ret2444;
  ret2444 = guestfs_part_add (g, arg2445, arg2446, 204800, -64);
  if (ret2444 == -1)
    return -1;
  const char *arg2451 = "/dev/sda1";
  struct guestfs_mke2fs_argv optargs2452;
  optargs2452.blocksize = 4096;
  optargs2452.uuid = "76802f61-6cde-0f8b-e149-6849b3cb42b6";
  optargs2452.journaldev = 1;
  optargs2452.bitmask = UINT64_C(0x100100002);
  int ret2450;
  ret2450 = guestfs_mke2fs_argv (g, arg2451, &optargs2452);
  if (ret2450 == -1)
    return -1;
  const char *arg2454 = "/dev/sda2";
  struct guestfs_mke2fs_argv optargs2455;
  optargs2455.blocksize = 4096;
  optargs2455.journaldevice = "UUID=76802f61-6cde-0f8b-e149-6849b3cb42b6";
  optargs2455.label = "JOURNAL";
  optargs2455.fstype = "ext2";
  optargs2455.forcecreate = 1;
  optargs2455.bitmask = UINT64_C(0x24c002);
  int ret2453;
  ret2453 = guestfs_mke2fs_argv (g, arg2454, &optargs2455);
  if (ret2453 == -1)
    return -1;
  const char *arg2457 = "/dev/sda2";
  const char *arg2458 = "/";
  int ret2456;
  ret2456 = guestfs_mount (g, arg2457, arg2458);
  if (ret2456 == -1)
    return -1;
  const char *arg2461 = "/new";
  const char *arg2462 = "new file contents";
  size_t arg2462_size = 17;
  int ret2460;
  ret2460 = guestfs_write (g, arg2461, arg2462, arg2462_size);
  if (ret2460 == -1)
    return -1;
  const char *arg2464 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2464);
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
  const char *arg2467 = "/dev/sda";
  const char *arg2468 = "mbr";
  int ret2466;
  ret2466 = guestfs_part_init (g, arg2467, arg2468);
  if (ret2466 == -1)
    return -1;
  const char *arg2471 = "/dev/sda";
  const char *arg2472 = "p";
  int ret2470;
  ret2470 = guestfs_part_add (g, arg2471, arg2472, 64, 204799);
  if (ret2470 == -1)
    return -1;
  const char *arg2477 = "/dev/sda";
  const char *arg2478 = "p";
  int ret2476;
  ret2476 = guestfs_part_add (g, arg2477, arg2478, 204800, -64);
  if (ret2476 == -1)
    return -1;
  const char *arg2484 = "/dev/sda1";
  int ret2482;
  ret2482 = guestfs_mke2journal (g, 4096, arg2484);
  if (ret2482 == -1)
    return -1;
  const char *arg2487 = "ext2";
  const char *arg2489 = "/dev/sda2";
  const char *arg2490 = "/dev/sda1";
  int ret2486;
  ret2486 = guestfs_mke2fs_J (g, arg2487, 4096, arg2489, arg2490);
  if (ret2486 == -1)
    return -1;
  const char *arg2493 = "/dev/sda2";
  const char *arg2494 = "/";
  int ret2492;
  ret2492 = guestfs_mount (g, arg2493, arg2494);
  if (ret2492 == -1)
    return -1;
  const char *arg2497 = "/new";
  const char *arg2498 = "new file contents";
  size_t arg2498_size = 17;
  int ret2496;
  ret2496 = guestfs_write (g, arg2497, arg2498, arg2498_size);
  if (ret2496 == -1)
    return -1;
  const char *arg2500 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2500);
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
  const char *arg2503 = "/dev/sda";
  const char *arg2504 = "mbr";
  int ret2502;
  ret2502 = guestfs_part_init (g, arg2503, arg2504);
  if (ret2502 == -1)
    return -1;
  const char *arg2507 = "/dev/sda";
  const char *arg2508 = "p";
  int ret2506;
  ret2506 = guestfs_part_add (g, arg2507, arg2508, 64, 204799);
  if (ret2506 == -1)
    return -1;
  const char *arg2513 = "/dev/sda";
  const char *arg2514 = "p";
  int ret2512;
  ret2512 = guestfs_part_add (g, arg2513, arg2514, 204800, -64);
  if (ret2512 == -1)
    return -1;
  const char *arg2520 = "JOURNAL";
  const char *arg2521 = "/dev/sda1";
  int ret2518;
  ret2518 = guestfs_mke2journal_L (g, 4096, arg2520, arg2521);
  if (ret2518 == -1)
    return -1;
  const char *arg2524 = "ext2";
  const char *arg2526 = "/dev/sda2";
  const char *arg2527 = "JOURNAL";
  int ret2523;
  ret2523 = guestfs_mke2fs_JL (g, arg2524, 4096, arg2526, arg2527);
  if (ret2523 == -1)
    return -1;
  const char *arg2530 = "/dev/sda2";
  const char *arg2531 = "/";
  int ret2529;
  ret2529 = guestfs_mount (g, arg2530, arg2531);
  if (ret2529 == -1)
    return -1;
  const char *arg2534 = "/new";
  const char *arg2535 = "new file contents";
  size_t arg2535_size = 17;
  int ret2533;
  ret2533 = guestfs_write (g, arg2534, arg2535, arg2535_size);
  if (ret2533 == -1)
    return -1;
  const char *arg2537 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2537);
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

  const char *features2539[] = { "linuxfsuuid", NULL };
  if (!guestfs_feature_available (g, (char **) features2539)) {
    skipped ("test_mke2journal_U_0", "group %s not available in daemon",
             features2539[0]);
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
  const char *arg2541 = "/dev/sda";
  const char *arg2542 = "mbr";
  int ret2540;
  ret2540 = guestfs_part_init (g, arg2541, arg2542);
  if (ret2540 == -1)
    return -1;
  const char *arg2545 = "/dev/sda";
  const char *arg2546 = "p";
  int ret2544;
  ret2544 = guestfs_part_add (g, arg2545, arg2546, 64, 204799);
  if (ret2544 == -1)
    return -1;
  const char *arg2551 = "/dev/sda";
  const char *arg2552 = "p";
  int ret2550;
  ret2550 = guestfs_part_add (g, arg2551, arg2552, 204800, -64);
  if (ret2550 == -1)
    return -1;
  const char *arg2558 = "76802f61-6cde-0f8b-e149-6849b3cb42b6";
  const char *arg2559 = "/dev/sda1";
  int ret2556;
  ret2556 = guestfs_mke2journal_U (g, 4096, arg2558, arg2559);
  if (ret2556 == -1)
    return -1;
  const char *arg2562 = "ext2";
  const char *arg2564 = "/dev/sda2";
  const char *arg2565 = "76802f61-6cde-0f8b-e149-6849b3cb42b6";
  int ret2561;
  ret2561 = guestfs_mke2fs_JU (g, arg2562, 4096, arg2564, arg2565);
  if (ret2561 == -1)
    return -1;
  const char *arg2568 = "/dev/sda2";
  const char *arg2569 = "/";
  int ret2567;
  ret2567 = guestfs_mount (g, arg2568, arg2569);
  if (ret2567 == -1)
    return -1;
  const char *arg2572 = "/new";
  const char *arg2573 = "new file contents";
  size_t arg2573_size = 17;
  int ret2571;
  ret2571 = guestfs_write (g, arg2572, arg2573, arg2573_size);
  if (ret2571 == -1)
    return -1;
  const char *arg2575 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2575);
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

  const char *features2577[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2577)) {
    skipped ("test_mkfifo_0", "group %s not available in daemon",
             features2577[0]);
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
  const char *arg2579 = "/mkfifo";
  int ret1;
  ret1 = guestfs_mkfifo (g, 511, arg2579);
  if (ret1 == -1)
    return -1;
  const char *arg2581 = "/mkfifo";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2581);
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

  const char *features2583[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2583)) {
    skipped ("test_mkfifo_1", "group %s not available in daemon",
             features2583[0]);
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
  const char *arg2586 = "/mkfifo-2";
  int ret2584;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2584 = guestfs_mkfifo (g, 8703, arg2586);
  guestfs_pop_error_handler (g);
  if (ret2584 != -1)
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
  const char *arg2589 = "/dev/sda";
  const char *arg2590 = "mbr";
  int ret2588;
  ret2588 = guestfs_part_disk (g, arg2589, arg2590);
  if (ret2588 == -1)
    return -1;
  const char *arg2593 = "ext2";
  const char *arg2594 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs2595;
  optargs2595.bitmask = UINT64_C(0x0);
  int ret2592;
  ret2592 = guestfs_mkfs_opts_argv (g, arg2593, arg2594, &optargs2595);
  if (ret2592 == -1)
    return -1;
  const char *arg2597 = "/dev/sda1";
  const char *arg2598 = "/";
  int ret2596;
  ret2596 = guestfs_mount (g, arg2597, arg2598);
  if (ret2596 == -1)
    return -1;
  const char *arg2601 = "/new";
  const char *arg2602 = "new file contents";
  size_t arg2602_size = 17;
  int ret2600;
  ret2600 = guestfs_write (g, arg2601, arg2602, arg2602_size);
  if (ret2600 == -1)
    return -1;
  const char *arg2604 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2604);
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
  const char *arg2607 = "/dev/sda";
  const char *arg2608 = "mbr";
  int ret2606;
  ret2606 = guestfs_part_disk (g, arg2607, arg2608);
  if (ret2606 == -1)
    return -1;
  const char *arg2611 = "ext2";
  const char *arg2613 = "/dev/sda1";
  int ret2610;
  ret2610 = guestfs_mkfs_b (g, arg2611, 4096, arg2613);
  if (ret2610 == -1)
    return -1;
  const char *arg2616 = "/dev/sda1";
  const char *arg2617 = "/";
  int ret2615;
  ret2615 = guestfs_mount (g, arg2616, arg2617);
  if (ret2615 == -1)
    return -1;
  const char *arg2620 = "/new";
  const char *arg2621 = "new file contents";
  size_t arg2621_size = 17;
  int ret2619;
  ret2619 = guestfs_write (g, arg2620, arg2621, arg2621_size);
  if (ret2619 == -1)
    return -1;
  const char *arg2623 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2623);
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
  const char *arg2626 = "/dev/sda";
  const char *arg2627 = "mbr";
  int ret2625;
  ret2625 = guestfs_part_init (g, arg2626, arg2627);
  if (ret2625 == -1)
    return -1;
  const char *arg2630 = "/dev/sda";
  const char *arg2631 = "p";
  int ret2629;
  ret2629 = guestfs_part_add (g, arg2630, arg2631, 64, 204799);
  if (ret2629 == -1)
    return -1;
  const char *arg2636 = "vfat";
  const char *arg2638 = "/dev/sda1";
  int ret2635;
  ret2635 = guestfs_mkfs_b (g, arg2636, 32768, arg2638);
  if (ret2635 == -1)
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
  const char *arg2641 = "/dev/sda";
  const char *arg2642 = "mbr";
  int ret2640;
  ret2640 = guestfs_part_init (g, arg2641, arg2642);
  if (ret2640 == -1)
    return -1;
  const char *arg2645 = "/dev/sda";
  const char *arg2646 = "p";
  int ret2644;
  ret2644 = guestfs_part_add (g, arg2645, arg2646, 64, 204799);
  if (ret2644 == -1)
    return -1;
  const char *arg2651 = "vfat";
  const char *arg2653 = "/dev/sda1";
  int ret2650;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2650 = guestfs_mkfs_b (g, arg2651, 32769, arg2653);
  guestfs_pop_error_handler (g);
  if (ret2650 != -1)
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
  const char *arg2656 = "/dev/sda";
  const char *arg2657 = "mbr";
  int ret2655;
  ret2655 = guestfs_part_init (g, arg2656, arg2657);
  if (ret2655 == -1)
    return -1;
  const char *arg2660 = "/dev/sda";
  const char *arg2661 = "p";
  int ret2659;
  ret2659 = guestfs_part_add (g, arg2660, arg2661, 64, 204799);
  if (ret2659 == -1)
    return -1;
  const char *arg2666 = "vfat";
  const char *arg2668 = "/dev/sda1";
  int ret2665;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2665 = guestfs_mkfs_b (g, arg2666, 33280, arg2668);
  guestfs_pop_error_handler (g);
  if (ret2665 != -1)
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

  const char *features2670[] = { "ntfsprogs", NULL };
  if (!guestfs_feature_available (g, (char **) features2670)) {
    skipped ("test_mkfs_b_4", "group %s not available in daemon",
             features2670[0]);
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
  const char *arg2672 = "/dev/sda";
  const char *arg2673 = "mbr";
  int ret2671;
  ret2671 = guestfs_part_disk (g, arg2672, arg2673);
  if (ret2671 == -1)
    return -1;
  const char *arg2676 = "ntfs";
  const char *arg2678 = "/dev/sda1";
  int ret2675;
  ret2675 = guestfs_mkfs_b (g, arg2676, 32768, arg2678);
  if (ret2675 == -1)
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

  const char *features2680[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features2680)) {
    skipped ("test_mkfs_btrfs_0", "group %s not available in daemon",
             features2680[0]);
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
  const char *arg2682 = "/dev/sda";
  const char *arg2683 = "mbr";
  int ret2681;
  ret2681 = guestfs_part_disk (g, arg2682, arg2683);
  if (ret2681 == -1)
    return -1;
  const char *arg2686_0 = "/dev/sda1";
  const char *const arg2686[] = {
    arg2686_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs2687;
  optargs2687.allocstart = 0;
  optargs2687.bytecount = 268435456;
  optargs2687.datatype = "single";
  optargs2687.label = "test";
  optargs2687.metadata = "single";
  optargs2687.nodesize = 65536;
  optargs2687.sectorsize = 4096;
  optargs2687.bitmask = UINT64_C(0xf7);
  int ret2685;
  ret2685 = guestfs_mkfs_btrfs_argv (g, (char **) arg2686, &optargs2687);
  if (ret2685 == -1)
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
  const char *arg2689 = "/lost+found";
  int ret2688;
  ret2688 = guestfs_rm_rf (g, arg2689);
  if (ret2688 == -1)
    return -1;
  const char *arg2692 = "/";
  int ret2691;
  ret2691 = guestfs_mklost_and_found (g, arg2692);
  if (ret2691 == -1)
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

  const char *features2694[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2694)) {
    skipped ("test_mknod_0", "group %s not available in daemon",
             features2694[0]);
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
  const char *arg2698 = "/mknod";
  int ret1;
  ret1 = guestfs_mknod (g, 4607, 0, 0, arg2698);
  if (ret1 == -1)
    return -1;
  const char *arg2700 = "/mknod";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2700);
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

  const char *features2702[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2702)) {
    skipped ("test_mknod_1", "group %s not available in daemon",
             features2702[0]);
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
  const char *arg2706 = "/mknod2";
  int ret1;
  ret1 = guestfs_mknod (g, 25087, 66, 99, arg2706);
  if (ret1 == -1)
    return -1;
  const char *arg2708 = "/mknod2";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2708);
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

  const char *features2710[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2710)) {
    skipped ("test_mknod_b_0", "group %s not available in daemon",
             features2710[0]);
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
  const char *arg2714 = "/mknod_b";
  int ret1;
  ret1 = guestfs_mknod_b (g, 511, 99, 66, arg2714);
  if (ret1 == -1)
    return -1;
  const char *arg2716 = "/mknod_b";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2716);
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

  const char *features2718[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2718)) {
    skipped ("test_mknod_b_1", "group %s not available in daemon",
             features2718[0]);
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
  const char *arg2723 = "/mknod_b-2";
  int ret2719;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2719 = guestfs_mknod_b (g, 4607, 99, 66, arg2723);
  guestfs_pop_error_handler (g);
  if (ret2719 != -1)
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

  const char *features2725[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2725)) {
    skipped ("test_mknod_c_0", "group %s not available in daemon",
             features2725[0]);
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
  const char *arg2729 = "/mknod_c";
  int ret1;
  ret1 = guestfs_mknod_c (g, 511, 99, 66, arg2729);
  if (ret1 == -1)
    return -1;
  const char *arg2731 = "/mknod_c";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2731);
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

  const char *features2733[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2733)) {
    skipped ("test_mknod_c_1", "group %s not available in daemon",
             features2733[0]);
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
  const char *arg2738 = "/mknod_c-2";
  int ret2734;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2734 = guestfs_mknod_c (g, 8703, 99, 66, arg2738);
  guestfs_pop_error_handler (g);
  if (ret2734 != -1)
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
  const char *arg2741 = "/dev/sda";
  const char *arg2742 = "mbr";
  int ret2740;
  ret2740 = guestfs_part_disk (g, arg2741, arg2742);
  if (ret2740 == -1)
    return -1;
  const char *arg2745 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs2746;
  optargs2746.bitmask = UINT64_C(0x0);
  int ret2744;
  ret2744 = guestfs_mkswap_opts_argv (g, arg2745, &optargs2746);
  if (ret2744 == -1)
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
  const char *arg2748 = "/dev/sda";
  const char *arg2749 = "mbr";
  int ret2747;
  ret2747 = guestfs_part_disk (g, arg2748, arg2749);
  if (ret2747 == -1)
    return -1;
  const char *arg2752 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs2753;
  optargs2753.label = "hello";
  optargs2753.bitmask = UINT64_C(0x1);
  int ret2751;
  ret2751 = guestfs_mkswap_opts_argv (g, arg2752, &optargs2753);
  if (ret2751 == -1)
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
  const char *arg2755 = "/dev/sda";
  const char *arg2756 = "mbr";
  int ret2754;
  ret2754 = guestfs_part_disk (g, arg2755, arg2756);
  if (ret2754 == -1)
    return -1;
  const char *arg2759 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs2760;
  optargs2760.uuid = "76802f61-6cde-0f8b-e149-6849b3cb42b6";
  optargs2760.bitmask = UINT64_C(0x2);
  int ret2758;
  ret2758 = guestfs_mkswap_opts_argv (g, arg2759, &optargs2760);
  if (ret2758 == -1)
    return -1;
  const char *arg2761 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_uuid (g, arg2761);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "76802f61-6cde-0f8b-e149-6849b3cb42b6")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_mkswap_2", "vfs_uuid", "76802f61-6cde-0f8b-e149-6849b3cb42b6", ret);
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
  const char *arg2764 = "/dev/sda";
  const char *arg2765 = "mbr";
  int ret2763;
  ret2763 = guestfs_part_disk (g, arg2764, arg2765);
  if (ret2763 == -1)
    return -1;
  const char *arg2768 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs2769;
  optargs2769.label = "hello";
  optargs2769.uuid = "76802f61-6cde-0f8b-e149-6849b3cb42b6";
  optargs2769.bitmask = UINT64_C(0x3);
  int ret2767;
  ret2767 = guestfs_mkswap_opts_argv (g, arg2768, &optargs2769);
  if (ret2767 == -1)
    return -1;
  const char *arg2770 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg2770);
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
  const char *arg2773 = "/dev/sda";
  const char *arg2774 = "mbr";
  int ret2772;
  ret2772 = guestfs_part_disk (g, arg2773, arg2774);
  if (ret2772 == -1)
    return -1;
  const char *arg2777 = "hello";
  const char *arg2778 = "/dev/sda1";
  int ret2776;
  ret2776 = guestfs_mkswap_L (g, arg2777, arg2778);
  if (ret2776 == -1)
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

  const char *features2780[] = { "linuxfsuuid", NULL };
  if (!guestfs_feature_available (g, (char **) features2780)) {
    skipped ("test_mkswap_U_0", "group %s not available in daemon",
             features2780[0]);
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
  const char *arg2782 = "/dev/sda";
  const char *arg2783 = "mbr";
  int ret2781;
  ret2781 = guestfs_part_disk (g, arg2782, arg2783);
  if (ret2781 == -1)
    return -1;
  const char *arg2786 = "76802f61-6cde-0f8b-e149-6849b3cb42b6";
  const char *arg2787 = "/dev/sda1";
  int ret2785;
  ret2785 = guestfs_mkswap_U (g, arg2786, arg2787);
  if (ret2785 == -1)
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
  const char *arg2790 = "/mkswap_file";
  int ret2789;
  ret2789 = guestfs_fallocate (g, arg2790, 8388608);
  if (ret2789 == -1)
    return -1;
  const char *arg2794 = "/mkswap_file";
  int ret2793;
  ret2793 = guestfs_mkswap_file (g, arg2794);
  if (ret2793 == -1)
    return -1;
  const char *arg2797 = "/mkswap_file";
  int ret2796;
  ret2796 = guestfs_rm (g, arg2797);
  if (ret2796 == -1)
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
  const char *arg2800 = "/mktemp";
  int ret2799;
  ret2799 = guestfs_mkdir (g, arg2800);
  if (ret2799 == -1)
    return -1;
  const char *arg2803 = "/mktemp/tmpXXXXXX";
  struct guestfs_mktemp_argv optargs2804;
  optargs2804.bitmask = UINT64_C(0x0);
  CLEANUP_FREE char *ret2802;
  ret2802 = guestfs_mktemp_argv (g, arg2803, &optargs2804);
  if (ret2802 == NULL)
      return -1;
  const char *arg2806 = "/mktemp/tmpXXXXXX";
  struct guestfs_mktemp_argv optargs2807;
  optargs2807.suffix = "suff";
  optargs2807.bitmask = UINT64_C(0x1);
  CLEANUP_FREE char *ret2805;
  ret2805 = guestfs_mktemp_argv (g, arg2806, &optargs2807);
  if (ret2805 == NULL)
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

  const char *features2808[] = { "linuxmodules", NULL };
  if (!guestfs_feature_available (g, (char **) features2808)) {
    skipped ("test_modprobe_0", "group %s not available in daemon",
             features2808[0]);
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
  const char *arg2810 = "fat";
  int ret2809;
  ret2809 = guestfs_modprobe (g, arg2810);
  if (ret2809 == -1)
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
  const char *arg2813 = "/dev/sda";
  const char *arg2814 = "mbr";
  int ret2812;
  ret2812 = guestfs_part_disk (g, arg2813, arg2814);
  if (ret2812 == -1)
    return -1;
  const char *arg2817 = "ext2";
  const char *arg2818 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs2819;
  optargs2819.bitmask = UINT64_C(0x0);
  int ret2816;
  ret2816 = guestfs_mkfs_opts_argv (g, arg2817, arg2818, &optargs2819);
  if (ret2816 == -1)
    return -1;
  const char *arg2821 = "/dev/sda1";
  const char *arg2822 = "/";
  int ret2820;
  ret2820 = guestfs_mount (g, arg2821, arg2822);
  if (ret2820 == -1)
    return -1;
  const char *arg2825 = "/new";
  const char *arg2826 = "new file contents";
  size_t arg2826_size = 17;
  int ret2824;
  ret2824 = guestfs_write (g, arg2825, arg2826, arg2826_size);
  if (ret2824 == -1)
    return -1;
  const char *arg2828 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2828);
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
  const char *arg2831 = "/";
  struct guestfs_umount_opts_argv optargs2832;
  optargs2832.force = 0;
  optargs2832.lazyunmount = 0;
  optargs2832.bitmask = UINT64_C(0x3);
  int ret2830;
  ret2830 = guestfs_umount_opts_argv (g, arg2831, &optargs2832);
  if (ret2830 == -1)
    return -1;
  const char *arg2834 = "/dev/sda1";
  const char *arg2835 = "/";
  int ret2833;
  ret2833 = guestfs_mount_ro (g, arg2834, arg2835);
  if (ret2833 == -1)
    return -1;
  const char *arg2838 = "/new";
  int ret2837;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2837 = guestfs_touch (g, arg2838);
  guestfs_pop_error_handler (g);
  if (ret2837 != -1)
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
  const char *arg2841 = "/new";
  const char *arg2842 = "data";
  size_t arg2842_size = 4;
  int ret2840;
  ret2840 = guestfs_write (g, arg2841, arg2842, arg2842_size);
  if (ret2840 == -1)
    return -1;
  const char *arg2845 = "/";
  struct guestfs_umount_opts_argv optargs2846;
  optargs2846.force = 0;
  optargs2846.lazyunmount = 0;
  optargs2846.bitmask = UINT64_C(0x3);
  int ret2844;
  ret2844 = guestfs_umount_opts_argv (g, arg2845, &optargs2846);
  if (ret2844 == -1)
    return -1;
  const char *arg2848 = "/dev/sda1";
  const char *arg2849 = "/";
  int ret2847;
  ret2847 = guestfs_mount_ro (g, arg2848, arg2849);
  if (ret2847 == -1)
    return -1;
  const char *arg2851 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2851);
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
  const char *arg2855 = "/mv";
  int ret2854;
  ret2854 = guestfs_mkdir (g, arg2855);
  if (ret2854 == -1)
    return -1;
  const char *arg2858 = "/mv/old";
  const char *arg2859 = "file content";
  size_t arg2859_size = 12;
  int ret2857;
  ret2857 = guestfs_write (g, arg2858, arg2859, arg2859_size);
  if (ret2857 == -1)
    return -1;
  const char *arg2862 = "/mv/old";
  const char *arg2863 = "/mv/new";
  int ret2861;
  ret2861 = guestfs_mv (g, arg2862, arg2863);
  if (ret2861 == -1)
    return -1;
  const char *arg2865 = "/mv/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2865);
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
  const char *arg2868 = "/mv2";
  int ret2867;
  ret2867 = guestfs_mkdir (g, arg2868);
  if (ret2867 == -1)
    return -1;
  const char *arg2871 = "/mv2/old";
  const char *arg2872 = "file content";
  size_t arg2872_size = 12;
  int ret2870;
  ret2870 = guestfs_write (g, arg2871, arg2872, arg2872_size);
  if (ret2870 == -1)
    return -1;
  const char *arg2875 = "/mv2/old";
  const char *arg2876 = "/mv2/new";
  int ret2874;
  ret2874 = guestfs_mv (g, arg2875, arg2876);
  if (ret2874 == -1)
    return -1;
  const char *arg2878 = "/mv2/old";
  struct guestfs_is_file_opts_argv optargs2879;
  optargs2879.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg2878, &optargs2879);
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

  const char *features2881[] = { "ntfs3g", NULL };
  if (!guestfs_feature_available (g, (char **) features2881)) {
    skipped ("test_ntfs_3g_probe_0", "group %s not available in daemon",
             features2881[0]);
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
  const char *arg2882 = "/dev/sda";
  const char *arg2883 = "mbr";
  int ret2;
  ret2 = guestfs_part_disk (g, arg2882, arg2883);
  if (ret2 == -1)
    return -1;
  const char *arg2885 = "ntfs";
  const char *arg2886 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs2887;
  optargs2887.bitmask = UINT64_C(0x0);
  int ret1;
  ret1 = guestfs_mkfs_opts_argv (g, arg2885, arg2886, &optargs2887);
  if (ret1 == -1)
    return -1;
  const char *arg2889 = "/dev/sda1";
  int ret;
  ret = guestfs_ntfs_3g_probe (g, 1, arg2889);
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

  const char *features2891[] = { "ntfs3g", NULL };
  if (!guestfs_feature_available (g, (char **) features2891)) {
    skipped ("test_ntfs_3g_probe_1", "group %s not available in daemon",
             features2891[0]);
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
  const char *arg2892 = "/dev/sda";
  const char *arg2893 = "mbr";
  int ret2;
  ret2 = guestfs_part_disk (g, arg2892, arg2893);
  if (ret2 == -1)
    return -1;
  const char *arg2895 = "ext2";
  const char *arg2896 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs2897;
  optargs2897.bitmask = UINT64_C(0x0);
  int ret1;
  ret1 = guestfs_mkfs_opts_argv (g, arg2895, arg2896, &optargs2897);
  if (ret1 == -1)
    return -1;
  const char *arg2899 = "/dev/sda1";
  int ret;
  ret = guestfs_ntfs_3g_probe (g, 1, arg2899);
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

  const char *features2901[] = { "ntfs3g", NULL };
  if (!guestfs_feature_available (g, (char **) features2901)) {
    skipped ("test_ntfsfix_0", "group %s not available in daemon",
             features2901[0]);
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
  const char *arg2903 = "ntfs";
  const char *arg2904 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs2905;
  optargs2905.bitmask = UINT64_C(0x0);
  int ret2902;
  ret2902 = guestfs_mkfs_opts_argv (g, arg2903, arg2904, &optargs2905);
  if (ret2902 == -1)
    return -1;
  const char *arg2907 = "/dev/sda1";
  struct guestfs_ntfsfix_argv optargs2908;
  optargs2908.clearbadsectors = 0;
  optargs2908.bitmask = UINT64_C(0x1);
  int ret2906;
  ret2906 = guestfs_ntfsfix_argv (g, arg2907, &optargs2908);
  if (ret2906 == -1)
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
  const char *arg2910 = "/dev/sda";
  const char *arg2911 = "mbr";
  int ret2909;
  ret2909 = guestfs_part_init (g, arg2910, arg2911);
  if (ret2909 == -1)
    return -1;
  const char *arg2914 = "/dev/sda";
  const char *arg2915 = "primary";
  int ret2913;
  ret2913 = guestfs_part_add (g, arg2914, arg2915, 1, -1);
  if (ret2913 == -1)
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
  const char *arg2920 = "/dev/sda";
  const char *arg2921 = "gpt";
  int ret2919;
  ret2919 = guestfs_part_init (g, arg2920, arg2921);
  if (ret2919 == -1)
    return -1;
  const char *arg2924 = "/dev/sda";
  const char *arg2925 = "primary";
  int ret2923;
  ret2923 = guestfs_part_add (g, arg2924, arg2925, 34, 127);
  if (ret2923 == -1)
    return -1;
  const char *arg2930 = "/dev/sda";
  const char *arg2931 = "primary";
  int ret2929;
  ret2929 = guestfs_part_add (g, arg2930, arg2931, 128, -34);
  if (ret2929 == -1)
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
  const char *arg2936 = "/dev/sda";
  const char *arg2937 = "mbr";
  int ret2935;
  ret2935 = guestfs_part_init (g, arg2936, arg2937);
  if (ret2935 == -1)
    return -1;
  const char *arg2940 = "/dev/sda";
  const char *arg2941 = "primary";
  int ret2939;
  ret2939 = guestfs_part_add (g, arg2940, arg2941, 32, 127);
  if (ret2939 == -1)
    return -1;
  const char *arg2946 = "/dev/sda";
  const char *arg2947 = "primary";
  int ret2945;
  ret2945 = guestfs_part_add (g, arg2946, arg2947, 128, 255);
  if (ret2945 == -1)
    return -1;
  const char *arg2952 = "/dev/sda";
  const char *arg2953 = "primary";
  int ret2951;
  ret2951 = guestfs_part_add (g, arg2952, arg2953, 256, 511);
  if (ret2951 == -1)
    return -1;
  const char *arg2958 = "/dev/sda";
  const char *arg2959 = "primary";
  int ret2957;
  ret2957 = guestfs_part_add (g, arg2958, arg2959, 512, -1);
  if (ret2957 == -1)
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
  const char *arg2964 = "/dev/sda";
  const char *arg2965 = "mbr";
  int ret2963;
  ret2963 = guestfs_part_init (g, arg2964, arg2965);
  if (ret2963 == -1)
    return -1;
  const char *arg2968 = "/dev/sda";
  const char *arg2969 = "primary";
  int ret2967;
  ret2967 = guestfs_part_add (g, arg2968, arg2969, 1, -1);
  if (ret2967 == -1)
    return -1;
  const char *arg2974 = "/dev/sda";
  int ret2973;
  ret2973 = guestfs_part_del (g, arg2974, 1);
  if (ret2973 == -1)
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
  const char *arg2978 = "/dev/sda";
  const char *arg2979 = "mbr";
  int ret2977;
  ret2977 = guestfs_part_disk (g, arg2978, arg2979);
  if (ret2977 == -1)
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
  const char *arg2982 = "/dev/sda";
  const char *arg2983 = "gpt";
  int ret2981;
  ret2981 = guestfs_part_disk (g, arg2982, arg2983);
  if (ret2981 == -1)
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
  const char *arg2986 = "/dev/sda";
  const char *arg2987 = "mbr";
  int ret2985;
  ret2985 = guestfs_part_init (g, arg2986, arg2987);
  if (ret2985 == -1)
    return -1;
  const char *arg2990 = "/dev/sda";
  const char *arg2991 = "primary";
  int ret2989;
  ret2989 = guestfs_part_add (g, arg2990, arg2991, 1, -1);
  if (ret2989 == -1)
    return -1;
  const char *arg2996 = "/dev/sda";
  int ret2995;
  ret2995 = guestfs_part_set_bootable (g, arg2996, 1, 1);
  if (ret2995 == -1)
    return -1;
  const char *arg3000 = "/dev/sda";
  int ret;
  ret = guestfs_part_get_bootable (g, arg3000, 1);
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

  const char *features3003[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3003)) {
    skipped ("test_part_get_disk_guid_0", "group %s not available in daemon",
             features3003[0]);
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
  const char *arg3005 = "/dev/sda";
  const char *arg3006 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret3004;
  ret3004 = guestfs_part_set_disk_guid (g, arg3005, arg3006);
  if (ret3004 == -1)
    return -1;
  const char *arg3008 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_disk_guid (g, arg3008);
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

  const char *features3010[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3010)) {
    skipped ("test_part_get_gpt_attributes_0", "group %s not available in daemon",
             features3010[0]);
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
  const char *arg3011 = "/dev/sda";
  int ret1;
  ret1 = guestfs_part_set_gpt_attributes (g, arg3011, 1, 0);
  if (ret1 == -1)
    return -1;
  const char *arg3015 = "/dev/sda";
  int64_t ret;
  ret = guestfs_part_get_gpt_attributes (g, arg3015, 1);
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

  const char *features3018[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3018)) {
    skipped ("test_part_get_gpt_guid_0", "group %s not available in daemon",
             features3018[0]);
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
  const char *arg3020 = "/dev/sda";
  const char *arg3022 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret3019;
  ret3019 = guestfs_part_set_gpt_guid (g, arg3020, 1, arg3022);
  if (ret3019 == -1)
    return -1;
  const char *arg3024 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_gpt_guid (g, arg3024, 1);
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

  const char *features3027[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3027)) {
    skipped ("test_part_get_gpt_type_0", "group %s not available in daemon",
             features3027[0]);
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
  const char *arg3029 = "/dev/sda";
  const char *arg3031 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret3028;
  ret3028 = guestfs_part_set_gpt_type (g, arg3029, 1, arg3031);
  if (ret3028 == -1)
    return -1;
  const char *arg3033 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_gpt_type (g, arg3033, 1);
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
  const char *arg3036 = "/dev/sda";
  const char *arg3037 = "mbr";
  int ret3;
  ret3 = guestfs_part_init (g, arg3036, arg3037);
  if (ret3 == -1)
    return -1;
  const char *arg3039 = "/dev/sda";
  const char *arg3040 = "primary";
  int ret2;
  ret2 = guestfs_part_add (g, arg3039, arg3040, 1, -1);
  if (ret2 == -1)
    return -1;
  const char *arg3044 = "/dev/sda";
  int ret1;
  ret1 = guestfs_part_set_mbr_id (g, arg3044, 1, 127);
  if (ret1 == -1)
    return -1;
  const char *arg3048 = "/dev/sda";
  int ret;
  ret = guestfs_part_get_mbr_id (g, arg3048, 1);
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
  const char *arg3052 = "/dev/sda";
  const char *arg3053 = "mbr";
  int ret3051;
  ret3051 = guestfs_part_init (g, arg3052, arg3053);
  if (ret3051 == -1)
    return -1;
  const char *arg3056 = "/dev/sda";
  const char *arg3057 = "p";
  int ret3055;
  ret3055 = guestfs_part_add (g, arg3056, arg3057, 64, 204799);
  if (ret3055 == -1)
    return -1;
  const char *arg3062 = "/dev/sda";
  const char *arg3063 = "e";
  int ret3061;
  ret3061 = guestfs_part_add (g, arg3062, arg3063, 204800, 614400);
  if (ret3061 == -1)
    return -1;
  const char *arg3068 = "/dev/sda";
  const char *arg3069 = "l";
  int ret3067;
  ret3067 = guestfs_part_add (g, arg3068, arg3069, 204864, 205988);
  if (ret3067 == -1)
    return -1;
  const char *arg3073 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_mbr_part_type (g, arg3073, 5);
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
  const char *arg3077 = "/dev/sda";
  const char *arg3078 = "mbr";
  int ret3076;
  ret3076 = guestfs_part_init (g, arg3077, arg3078);
  if (ret3076 == -1)
    return -1;
  const char *arg3081 = "/dev/sda";
  const char *arg3082 = "p";
  int ret3080;
  ret3080 = guestfs_part_add (g, arg3081, arg3082, 64, 204799);
  if (ret3080 == -1)
    return -1;
  const char *arg3087 = "/dev/sda";
  const char *arg3088 = "e";
  int ret3086;
  ret3086 = guestfs_part_add (g, arg3087, arg3088, 204800, 614400);
  if (ret3086 == -1)
    return -1;
  const char *arg3093 = "/dev/sda";
  const char *arg3094 = "l";
  int ret3092;
  ret3092 = guestfs_part_add (g, arg3093, arg3094, 204864, 205988);
  if (ret3092 == -1)
    return -1;
  const char *arg3098 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_mbr_part_type (g, arg3098, 2);
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
  const char *arg3102 = "/dev/sda";
  const char *arg3103 = "gpt";
  int ret3101;
  ret3101 = guestfs_part_disk (g, arg3102, arg3103);
  if (ret3101 == -1)
    return -1;
  const char *arg3105 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_parttype (g, arg3105);
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
  const char *arg3108 = "/dev/sda";
  const char *arg3109 = "gpt";
  int ret3107;
  ret3107 = guestfs_part_init (g, arg3108, arg3109);
  if (ret3107 == -1)
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
  const char *arg3112 = "/dev/sda";
  const char *arg3113 = "mbr";
  int ret3111;
  ret3111 = guestfs_part_init (g, arg3112, arg3113);
  if (ret3111 == -1)
    return -1;
  const char *arg3116 = "/dev/sda";
  const char *arg3117 = "primary";
  int ret3115;
  ret3115 = guestfs_part_add (g, arg3116, arg3117, 1, -1025);
  if (ret3115 == -1)
    return -1;
  const char *arg3122 = "/dev/sda";
  int ret3121;
  ret3121 = guestfs_part_resize (g, arg3122, 1, -1);
  if (ret3121 == -1)
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
  const char *arg3127 = "/dev/sda";
  const char *arg3128 = "mbr";
  int ret3126;
  ret3126 = guestfs_part_disk (g, arg3127, arg3128);
  if (ret3126 == -1)
    return -1;
  const char *arg3131 = "/dev/sda";
  int ret3130;
  ret3130 = guestfs_part_set_bootable (g, arg3131, 1, 1);
  if (ret3130 == -1)
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

  const char *features3135[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3135)) {
    skipped ("test_part_set_disk_guid_0", "group %s not available in daemon",
             features3135[0]);
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
  const char *arg3137 = "/dev/sda";
  const char *arg3138 = "f";
  int ret3136;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3136 = guestfs_part_set_disk_guid (g, arg3137, arg3138);
  guestfs_pop_error_handler (g);
  if (ret3136 != -1)
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

  const char *features3140[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3140)) {
    skipped ("test_part_set_disk_guid_1", "group %s not available in daemon",
             features3140[0]);
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
  const char *arg3142 = "/dev/sda";
  const char *arg3143 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret3141;
  ret3141 = guestfs_part_set_disk_guid (g, arg3142, arg3143);
  if (ret3141 == -1)
    return -1;
  const char *arg3145 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_disk_guid (g, arg3145);
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

  const char *features3147[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3147)) {
    skipped ("test_part_set_disk_guid_random_0", "group %s not available in daemon",
             features3147[0]);
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
  const char *arg3149 = "/dev/sda";
  int ret3148;
  ret3148 = guestfs_part_set_disk_guid_random (g, arg3149);
  if (ret3148 == -1)
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

  const char *features3151[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3151)) {
    skipped ("test_part_set_gpt_attributes_0", "group %s not available in daemon",
             features3151[0]);
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
  const char *arg3152 = "/dev/sda";
  int ret1;
  ret1 = guestfs_part_set_gpt_attributes (g, arg3152, 1, 4);
  if (ret1 == -1)
    return -1;
  const char *arg3156 = "/dev/sda";
  int64_t ret;
  ret = guestfs_part_get_gpt_attributes (g, arg3156, 1);
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

  const char *features3159[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3159)) {
    skipped ("test_part_set_gpt_guid_0", "group %s not available in daemon",
             features3159[0]);
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
  const char *arg3161 = "/dev/sda";
  const char *arg3163 = "f";
  int ret3160;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3160 = guestfs_part_set_gpt_guid (g, arg3161, 1, arg3163);
  guestfs_pop_error_handler (g);
  if (ret3160 != -1)
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

  const char *features3165[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3165)) {
    skipped ("test_part_set_gpt_guid_1", "group %s not available in daemon",
             features3165[0]);
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
  const char *arg3167 = "/dev/sda";
  const char *arg3169 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret3166;
  ret3166 = guestfs_part_set_gpt_guid (g, arg3167, 1, arg3169);
  if (ret3166 == -1)
    return -1;
  const char *arg3171 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_gpt_guid (g, arg3171, 1);
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

  const char *features3174[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3174)) {
    skipped ("test_part_set_gpt_type_0", "group %s not available in daemon",
             features3174[0]);
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
  const char *arg3176 = "/dev/sda";
  const char *arg3178 = "f";
  int ret3175;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3175 = guestfs_part_set_gpt_type (g, arg3176, 1, arg3178);
  guestfs_pop_error_handler (g);
  if (ret3175 != -1)
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

  const char *features3180[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3180)) {
    skipped ("test_part_set_gpt_type_1", "group %s not available in daemon",
             features3180[0]);
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
  const char *arg3182 = "/dev/sda";
  const char *arg3184 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret3181;
  ret3181 = guestfs_part_set_gpt_type (g, arg3182, 1, arg3184);
  if (ret3181 == -1)
    return -1;
  const char *arg3186 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_gpt_type (g, arg3186, 1);
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
  const char *arg3190 = "/dev/sda";
  const char *arg3191 = "gpt";
  int ret3189;
  ret3189 = guestfs_part_disk (g, arg3190, arg3191);
  if (ret3189 == -1)
    return -1;
  const char *arg3194 = "/dev/sda";
  const char *arg3196 = "thepartname";
  int ret3193;
  ret3193 = guestfs_part_set_name (g, arg3194, 1, arg3196);
  if (ret3193 == -1)
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
  const char *arg3198 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_to_dev (g, arg3198);
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
  const char *arg3201 = "/dev/sda";
  CLEANUP_FREE char *ret3200;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3200 = guestfs_part_to_dev (g, arg3201);
  guestfs_pop_error_handler (g);
  if (ret3200 != NULL)
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
  const char *arg3203 = "/dev/sda1";
  int ret;
  ret = guestfs_part_to_partnum (g, arg3203);
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
  const char *arg3206 = "/dev/sda";
  int ret3205;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3205 = guestfs_part_to_partnum (g, arg3206);
  guestfs_pop_error_handler (g);
  if (ret3205 != -1)
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
  int ret3208;
  ret3208 = guestfs_ping_daemon (g);
  if (ret3208 == -1)
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
  const char *arg3210 = "/known-4";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_pread (g, arg3210, 1, 3, &size);
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
  const char *arg3214 = "/empty";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_pread (g, arg3214, 0, 100, &size);
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
  const char *arg3218 = "/dev/sdd";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_pread_device (g, arg3218, 8, 32768, &size);
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

  const char *features3222[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3222)) {
    skipped ("test_pvchange_uuid_0", "group %s not available in daemon",
             features3222[0]);
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
  const char *arg3224 = "/dev/sda";
  const char *arg3225 = "mbr";
  int ret3223;
  ret3223 = guestfs_part_disk (g, arg3224, arg3225);
  if (ret3223 == -1)
    return -1;
  const char *arg3228 = "/dev/sda1";
  int ret3227;
  ret3227 = guestfs_pvcreate (g, arg3228);
  if (ret3227 == -1)
    return -1;
  const char *arg3231 = "/dev/sda1";
  int ret3230;
  ret3230 = guestfs_pvchange_uuid (g, arg3231);
  if (ret3230 == -1)
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

  const char *features3233[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3233)) {
    skipped ("test_pvchange_uuid_all_0", "group %s not available in daemon",
             features3233[0]);
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
  const char *arg3235 = "/dev/sda";
  const char *arg3236 = "mbr";
  int ret3234;
  ret3234 = guestfs_part_disk (g, arg3235, arg3236);
  if (ret3234 == -1)
    return -1;
  const char *arg3239 = "/dev/sda1";
  int ret3238;
  ret3238 = guestfs_pvcreate (g, arg3239);
  if (ret3238 == -1)
    return -1;
  int ret3241;
  ret3241 = guestfs_pvchange_uuid_all (g);
  if (ret3241 == -1)
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

  const char *features3243[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3243)) {
    skipped ("test_pvcreate_0", "group %s not available in daemon",
             features3243[0]);
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
  const char *arg3244 = "/dev/sda";
  const char *arg3245 = "mbr";
  int ret7;
  ret7 = guestfs_part_init (g, arg3244, arg3245);
  if (ret7 == -1)
    return -1;
  const char *arg3247 = "/dev/sda";
  const char *arg3248 = "p";
  int ret6;
  ret6 = guestfs_part_add (g, arg3247, arg3248, 64, 204799);
  if (ret6 == -1)
    return -1;
  const char *arg3252 = "/dev/sda";
  const char *arg3253 = "p";
  int ret5;
  ret5 = guestfs_part_add (g, arg3252, arg3253, 204800, 409599);
  if (ret5 == -1)
    return -1;
  const char *arg3257 = "/dev/sda";
  const char *arg3258 = "p";
  int ret4;
  ret4 = guestfs_part_add (g, arg3257, arg3258, 409600, -64);
  if (ret4 == -1)
    return -1;
  const char *arg3262 = "/dev/sda1";
  int ret3;
  ret3 = guestfs_pvcreate (g, arg3262);
  if (ret3 == -1)
    return -1;
  const char *arg3264 = "/dev/sda2";
  int ret2;
  ret2 = guestfs_pvcreate (g, arg3264);
  if (ret2 == -1)
    return -1;
  const char *arg3266 = "/dev/sda3";
  int ret1;
  ret1 = guestfs_pvcreate (g, arg3266);
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

  const char *features3269[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3269)) {
    skipped ("test_pvremove_0", "group %s not available in daemon",
             features3269[0]);
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
  const char *arg3270 = "/dev/sda";
  const char *arg3271 = "mbr";
  int ret7;
  ret7 = guestfs_part_disk (g, arg3270, arg3271);
  if (ret7 == -1)
    return -1;
  const char *arg3273 = "/dev/sda1";
  int ret6;
  ret6 = guestfs_pvcreate (g, arg3273);
  if (ret6 == -1)
    return -1;
  const char *arg3275 = "VG";
  const char *arg3276_0 = "/dev/sda1";
  const char *const arg3276[] = {
    arg3276_0,
    NULL
  };
  int ret5;
  ret5 = guestfs_vgcreate (g, arg3275, (char **) arg3276);
  if (ret5 == -1)
    return -1;
  const char *arg3278 = "LV1";
  const char *arg3279 = "VG";
  int ret4;
  ret4 = guestfs_lvcreate (g, arg3278, arg3279, 50);
  if (ret4 == -1)
    return -1;
  const char *arg3282 = "LV2";
  const char *arg3283 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg3282, arg3283, 50);
  if (ret3 == -1)
    return -1;
  const char *arg3286 = "VG";
  int ret2;
  ret2 = guestfs_vgremove (g, arg3286);
  if (ret2 == -1)
    return -1;
  const char *arg3288 = "/dev/sda1";
  int ret1;
  ret1 = guestfs_pvremove (g, arg3288);
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

  const char *features3291[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3291)) {
    skipped ("test_pvremove_1", "group %s not available in daemon",
             features3291[0]);
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
  const char *arg3292 = "/dev/sda";
  const char *arg3293 = "mbr";
  int ret7;
  ret7 = guestfs_part_disk (g, arg3292, arg3293);
  if (ret7 == -1)
    return -1;
  const char *arg3295 = "/dev/sda1";
  int ret6;
  ret6 = guestfs_pvcreate (g, arg3295);
  if (ret6 == -1)
    return -1;
  const char *arg3297 = "VG";
  const char *arg3298_0 = "/dev/sda1";
  const char *const arg3298[] = {
    arg3298_0,
    NULL
  };
  int ret5;
  ret5 = guestfs_vgcreate (g, arg3297, (char **) arg3298);
  if (ret5 == -1)
    return -1;
  const char *arg3300 = "LV1";
  const char *arg3301 = "VG";
  int ret4;
  ret4 = guestfs_lvcreate (g, arg3300, arg3301, 50);
  if (ret4 == -1)
    return -1;
  const char *arg3304 = "LV2";
  const char *arg3305 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg3304, arg3305, 50);
  if (ret3 == -1)
    return -1;
  const char *arg3308 = "VG";
  int ret2;
  ret2 = guestfs_vgremove (g, arg3308);
  if (ret2 == -1)
    return -1;
  const char *arg3310 = "/dev/sda1";
  int ret1;
  ret1 = guestfs_pvremove (g, arg3310);
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

  const char *features3313[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3313)) {
    skipped ("test_pvremove_2", "group %s not available in daemon",
             features3313[0]);
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
  const char *arg3314 = "/dev/sda";
  const char *arg3315 = "mbr";
  int ret7;
  ret7 = guestfs_part_disk (g, arg3314, arg3315);
  if (ret7 == -1)
    return -1;
  const char *arg3317 = "/dev/sda1";
  int ret6;
  ret6 = guestfs_pvcreate (g, arg3317);
  if (ret6 == -1)
    return -1;
  const char *arg3319 = "VG";
  const char *arg3320_0 = "/dev/sda1";
  const char *const arg3320[] = {
    arg3320_0,
    NULL
  };
  int ret5;
  ret5 = guestfs_vgcreate (g, arg3319, (char **) arg3320);
  if (ret5 == -1)
    return -1;
  const char *arg3322 = "LV1";
  const char *arg3323 = "VG";
  int ret4;
  ret4 = guestfs_lvcreate (g, arg3322, arg3323, 50);
  if (ret4 == -1)
    return -1;
  const char *arg3326 = "LV2";
  const char *arg3327 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg3326, arg3327, 50);
  if (ret3 == -1)
    return -1;
  const char *arg3330 = "VG";
  int ret2;
  ret2 = guestfs_vgremove (g, arg3330);
  if (ret2 == -1)
    return -1;
  const char *arg3332 = "/dev/sda1";
  int ret1;
  ret1 = guestfs_pvremove (g, arg3332);
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

  const char *features3335[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3335)) {
    skipped ("test_pvs_0", "group %s not available in daemon",
             features3335[0]);
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

  const char *features3337[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3337)) {
    skipped ("test_pvs_1", "group %s not available in daemon",
             features3337[0]);
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
  const char *arg3338 = "/dev/sda";
  const char *arg3339 = "mbr";
  int ret7;
  ret7 = guestfs_part_init (g, arg3338, arg3339);
  if (ret7 == -1)
    return -1;
  const char *arg3341 = "/dev/sda";
  const char *arg3342 = "p";
  int ret6;
  ret6 = guestfs_part_add (g, arg3341, arg3342, 64, 204799);
  if (ret6 == -1)
    return -1;
  const char *arg3346 = "/dev/sda";
  const char *arg3347 = "p";
  int ret5;
  ret5 = guestfs_part_add (g, arg3346, arg3347, 204800, 409599);
  if (ret5 == -1)
    return -1;
  const char *arg3351 = "/dev/sda";
  const char *arg3352 = "p";
  int ret4;
  ret4 = guestfs_part_add (g, arg3351, arg3352, 409600, -64);
  if (ret4 == -1)
    return -1;
  const char *arg3356 = "/dev/sda1";
  int ret3;
  ret3 = guestfs_pvcreate (g, arg3356);
  if (ret3 == -1)
    return -1;
  const char *arg3358 = "/dev/sda2";
  int ret2;
  ret2 = guestfs_pvcreate (g, arg3358);
  if (ret2 == -1)
    return -1;
  const char *arg3360 = "/dev/sda3";
  int ret1;
  ret1 = guestfs_pvcreate (g, arg3360);
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
  const char *arg3364 = "/pwrite";
  const char *arg3365 = "new file contents";
  size_t arg3365_size = 17;
  int ret3363;
  ret3363 = guestfs_write (g, arg3364, arg3365, arg3365_size);
  if (ret3363 == -1)
    return -1;
  const char *arg3368 = "/pwrite";
  const char *arg3369 = "data";
  size_t arg3369_size = 4;
  int ret3367;
  ret3367 = guestfs_pwrite (g, arg3368, arg3369, arg3369_size, 4);
  if (ret3367 == -1)
    return -1;
  const char *arg3372 = "/pwrite";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3372);
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
  const char *arg3375 = "/pwrite2";
  const char *arg3376 = "new file contents";
  size_t arg3376_size = 17;
  int ret3374;
  ret3374 = guestfs_write (g, arg3375, arg3376, arg3376_size);
  if (ret3374 == -1)
    return -1;
  const char *arg3379 = "/pwrite2";
  const char *arg3380 = "is extended";
  size_t arg3380_size = 11;
  int ret3378;
  ret3378 = guestfs_pwrite (g, arg3379, arg3380, arg3380_size, 9);
  if (ret3378 == -1)
    return -1;
  const char *arg3383 = "/pwrite2";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3383);
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
  const char *arg3386 = "/pwrite3";
  const char *arg3387 = "new file contents";
  size_t arg3387_size = 17;
  int ret3385;
  ret3385 = guestfs_write (g, arg3386, arg3387, arg3387_size);
  if (ret3385 == -1)
    return -1;
  const char *arg3390 = "/pwrite3";
  const char *arg3391 = "";
  size_t arg3391_size = 0;
  int ret3389;
  ret3389 = guestfs_pwrite (g, arg3390, arg3391, arg3391_size, 4);
  if (ret3389 == -1)
    return -1;
  const char *arg3394 = "/pwrite3";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3394);
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
  const char *arg3396 = "/dev/sda";
  const char *arg3397 = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
  size_t arg3397_size = 66;
  int ret2;
  ret2 = guestfs_pwrite_device (g, arg3396, arg3397, arg3397_size, 446);
  if (ret2 == -1)
    return -1;
  const char *arg3400 = "/dev/sda";
  int ret1;
  ret1 = guestfs_blockdev_rereadpt (g, arg3400);
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
  const char *arg3403 = "/known-4";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_read_file (g, arg3403, &size);
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
  const char *arg3405 = "/known-4";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3405);
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
  const char *arg3407 = "/empty";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3407);
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
  const char *arg3409 = "/read_lines1";
  const char *arg3410 = "\n";
  size_t arg3410_size = 1;
  int ret1;
  ret1 = guestfs_write (g, arg3409, arg3410, arg3410_size);
  if (ret1 == -1)
    return -1;
  const char *arg3412 = "/read_lines1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3412);
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
  const char *arg3414 = "/read_lines2";
  const char *arg3415 = "\r\n";
  size_t arg3415_size = 2;
  int ret1;
  ret1 = guestfs_write (g, arg3414, arg3415, arg3415_size);
  if (ret1 == -1)
    return -1;
  const char *arg3417 = "/read_lines2";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3417);
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
  const char *arg3419 = "/read_lines3";
  const char *arg3420 = "\n\r\n";
  size_t arg3420_size = 3;
  int ret1;
  ret1 = guestfs_write (g, arg3419, arg3420, arg3420_size);
  if (ret1 == -1)
    return -1;
  const char *arg3422 = "/read_lines3";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3422);
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
  const char *arg3424 = "/read_lines4";
  const char *arg3425 = "a";
  size_t arg3425_size = 1;
  int ret1;
  ret1 = guestfs_write (g, arg3424, arg3425, arg3425_size);
  if (ret1 == -1)
    return -1;
  const char *arg3427 = "/read_lines4";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3427);
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
  const char *arg3429 = "/read_lines5";
  const char *arg3430 = "a\nb";
  size_t arg3430_size = 3;
  int ret1;
  ret1 = guestfs_write (g, arg3429, arg3430, arg3430_size);
  if (ret1 == -1)
    return -1;
  const char *arg3432 = "/read_lines5";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3432);
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
  const char *arg3434 = "/read_lines6";
  const char *arg3435 = "a\nb\n";
  size_t arg3435_size = 4;
  int ret1;
  ret1 = guestfs_write (g, arg3434, arg3435, arg3435_size);
  if (ret1 == -1)
    return -1;
  const char *arg3437 = "/read_lines6";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3437);
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
  const char *arg3439 = "/read_lines7";
  const char *arg3440 = "a\nb\r\n";
  size_t arg3440_size = 5;
  int ret1;
  ret1 = guestfs_write (g, arg3439, arg3440, arg3440_size);
  if (ret1 == -1)
    return -1;
  const char *arg3442 = "/read_lines7";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3442);
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
  const char *arg3444 = "/read_lines8";
  const char *arg3445 = "a\nb\r\n\n";
  size_t arg3445_size = 6;
  int ret1;
  ret1 = guestfs_write (g, arg3444, arg3445, arg3445_size);
  if (ret1 == -1)
    return -1;
  const char *arg3447 = "/read_lines8";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3447);
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
  const char *arg3449 = "/../directory";
  CLEANUP_FREE char *ret;
  ret = guestfs_realpath (g, arg3449);
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
  const char *arg3452 = "/";
  struct guestfs_remount_argv optargs3453;
  optargs3453.rw = 0;
  optargs3453.bitmask = UINT64_C(0x1);
  int ret3451;
  ret3451 = guestfs_remount_argv (g, arg3452, &optargs3453);
  if (ret3451 == -1)
    return -1;
  const char *arg3455 = "/remount1";
  const char *arg3456 = "data";
  size_t arg3456_size = 4;
  int ret3454;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3454 = guestfs_write (g, arg3455, arg3456, arg3456_size);
  guestfs_pop_error_handler (g);
  if (ret3454 != -1)
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
  const char *arg3459 = "/";
  struct guestfs_remount_argv optargs3460;
  optargs3460.rw = 0;
  optargs3460.bitmask = UINT64_C(0x1);
  int ret3458;
  ret3458 = guestfs_remount_argv (g, arg3459, &optargs3460);
  if (ret3458 == -1)
    return -1;
  const char *arg3462 = "/";
  struct guestfs_remount_argv optargs3463;
  optargs3463.rw = 1;
  optargs3463.bitmask = UINT64_C(0x1);
  int ret3461;
  ret3461 = guestfs_remount_argv (g, arg3462, &optargs3463);
  if (ret3461 == -1)
    return -1;
  const char *arg3465 = "/remount2";
  const char *arg3466 = "data";
  size_t arg3466_size = 4;
  int ret3464;
  ret3464 = guestfs_write (g, arg3465, arg3466, arg3466_size);
  if (ret3464 == -1)
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
  const char *arg3469 = "/rename";
  int ret3468;
  ret3468 = guestfs_mkdir (g, arg3469);
  if (ret3468 == -1)
    return -1;
  const char *arg3472 = "/rename/old";
  const char *arg3473 = "file content";
  size_t arg3473_size = 12;
  int ret3471;
  ret3471 = guestfs_write (g, arg3472, arg3473, arg3473_size);
  if (ret3471 == -1)
    return -1;
  const char *arg3476 = "/rename/old";
  const char *arg3477 = "/rename/new";
  int ret3475;
  ret3475 = guestfs_rename (g, arg3476, arg3477);
  if (ret3475 == -1)
    return -1;
  const char *arg3479 = "/rename/old";
  struct guestfs_is_file_opts_argv optargs3480;
  optargs3480.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg3479, &optargs3480);
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
  const char *arg3482 = "/rm";
  int ret3481;
  ret3481 = guestfs_mkdir (g, arg3482);
  if (ret3481 == -1)
    return -1;
  const char *arg3485 = "/rm/new";
  int ret3484;
  ret3484 = guestfs_touch (g, arg3485);
  if (ret3484 == -1)
    return -1;
  const char *arg3488 = "/rm/new";
  int ret3487;
  ret3487 = guestfs_rm (g, arg3488);
  if (ret3487 == -1)
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
  const char *arg3491 = "/nosuchfile";
  int ret3490;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3490 = guestfs_rm (g, arg3491);
  guestfs_pop_error_handler (g);
  if (ret3490 != -1)
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
  const char *arg3494 = "/rm2";
  int ret3493;
  ret3493 = guestfs_mkdir (g, arg3494);
  if (ret3493 == -1)
    return -1;
  const char *arg3497 = "/rm2";
  int ret3496;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3496 = guestfs_rm (g, arg3497);
  guestfs_pop_error_handler (g);
  if (ret3496 != -1)
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
  const char *arg3500 = "/rm_f";
  int ret3499;
  ret3499 = guestfs_mkdir (g, arg3500);
  if (ret3499 == -1)
    return -1;
  const char *arg3503 = "/rm_f/foo";
  int ret3502;
  ret3502 = guestfs_touch (g, arg3503);
  if (ret3502 == -1)
    return -1;
  const char *arg3506 = "/rm_f/foo";
  int ret3505;
  ret3505 = guestfs_rm_f (g, arg3506);
  if (ret3505 == -1)
    return -1;
  const char *arg3509 = "/rm_f/not_exists";
  int ret3508;
  ret3508 = guestfs_rm_f (g, arg3509);
  if (ret3508 == -1)
    return -1;
  const char *arg3511 = "/rm_f/foo";
  int ret;
  ret = guestfs_exists (g, arg3511);
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
  const char *arg3514 = "/rm_f2";
  int ret3513;
  ret3513 = guestfs_mkdir (g, arg3514);
  if (ret3513 == -1)
    return -1;
  const char *arg3517 = "/rm_f2/foo";
  int ret3516;
  ret3516 = guestfs_mkdir (g, arg3517);
  if (ret3516 == -1)
    return -1;
  const char *arg3520 = "/rm_f2/foo";
  int ret3519;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3519 = guestfs_rm_f (g, arg3520);
  guestfs_pop_error_handler (g);
  if (ret3519 != -1)
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
  const char *arg3523 = "/rm_rf";
  int ret3522;
  ret3522 = guestfs_mkdir (g, arg3523);
  if (ret3522 == -1)
    return -1;
  const char *arg3526 = "/rm_rf/foo";
  int ret3525;
  ret3525 = guestfs_mkdir (g, arg3526);
  if (ret3525 == -1)
    return -1;
  const char *arg3529 = "/rm_rf/foo/bar";
  int ret3528;
  ret3528 = guestfs_touch (g, arg3529);
  if (ret3528 == -1)
    return -1;
  const char *arg3532 = "/rm_rf";
  int ret3531;
  ret3531 = guestfs_rm_rf (g, arg3532);
  if (ret3531 == -1)
    return -1;
  const char *arg3534 = "/rm_rf";
  int ret;
  ret = guestfs_exists (g, arg3534);
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
  const char *arg3537 = "/rmdir";
  int ret3536;
  ret3536 = guestfs_mkdir (g, arg3537);
  if (ret3536 == -1)
    return -1;
  const char *arg3540 = "/rmdir";
  int ret3539;
  ret3539 = guestfs_rmdir (g, arg3540);
  if (ret3539 == -1)
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
  const char *arg3543 = "/rmdir2";
  int ret3542;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3542 = guestfs_rmdir (g, arg3543);
  guestfs_pop_error_handler (g);
  if (ret3542 != -1)
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
  const char *arg3546 = "/rmdir3";
  int ret3545;
  ret3545 = guestfs_mkdir (g, arg3546);
  if (ret3545 == -1)
    return -1;
  const char *arg3549 = "/rmdir3/new";
  int ret3548;
  ret3548 = guestfs_touch (g, arg3549);
  if (ret3548 == -1)
    return -1;
  const char *arg3552 = "/rmdir3/new";
  int ret3551;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3551 = guestfs_rmdir (g, arg3552);
  guestfs_pop_error_handler (g);
  if (ret3551 != -1)
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

  const char *features3554[] = { "scrub", NULL };
  if (!guestfs_feature_available (g, (char **) features3554)) {
    skipped ("test_scrub_device_0", "group %s not available in daemon",
             features3554[0]);
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
  const char *arg3556 = "/dev/sdc";
  int ret3555;
  ret3555 = guestfs_scrub_device (g, arg3556);
  if (ret3555 == -1)
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

  const char *features3558[] = { "scrub", NULL };
  if (!guestfs_feature_available (g, (char **) features3558)) {
    skipped ("test_scrub_file_0", "group %s not available in daemon",
             features3558[0]);
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
  const char *arg3560 = "/scrub_file";
  const char *arg3561 = "content";
  size_t arg3561_size = 7;
  int ret3559;
  ret3559 = guestfs_write (g, arg3560, arg3561, arg3561_size);
  if (ret3559 == -1)
    return -1;
  const char *arg3564 = "/scrub_file";
  int ret3563;
  ret3563 = guestfs_scrub_file (g, arg3564);
  if (ret3563 == -1)
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

  const char *features3566[] = { "scrub", NULL };
  if (!guestfs_feature_available (g, (char **) features3566)) {
    skipped ("test_scrub_file_1", "group %s not available in daemon",
             features3566[0]);
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
  const char *arg3568 = "/scrub_file_2";
  const char *arg3569 = "content";
  size_t arg3569_size = 7;
  int ret3567;
  ret3567 = guestfs_write (g, arg3568, arg3569, arg3569_size);
  if (ret3567 == -1)
    return -1;
  const char *arg3572 = "/scrub_file_2";
  const char *arg3573 = "/scrub_file_2_link";
  int ret3571;
  ret3571 = guestfs_ln_s (g, arg3572, arg3573);
  if (ret3571 == -1)
    return -1;
  const char *arg3576 = "/scrub_file_2_link";
  int ret3575;
  ret3575 = guestfs_scrub_file (g, arg3576);
  if (ret3575 == -1)
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

  const char *features3578[] = { "scrub", NULL };
  if (!guestfs_feature_available (g, (char **) features3578)) {
    skipped ("test_scrub_file_2", "group %s not available in daemon",
             features3578[0]);
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
  const char *arg3580 = "/scrub_file_3_notexisting";
  const char *arg3581 = "/scrub_file_3_link";
  int ret3579;
  ret3579 = guestfs_ln_s (g, arg3580, arg3581);
  if (ret3579 == -1)
    return -1;
  const char *arg3584 = "/scrub_file_3_link";
  int ret3583;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3583 = guestfs_scrub_file (g, arg3584);
  guestfs_pop_error_handler (g);
  if (ret3583 != -1)
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

  const char *features3586[] = { "scrub", NULL };
  if (!guestfs_feature_available (g, (char **) features3586)) {
    skipped ("test_scrub_file_3", "group %s not available in daemon",
             features3586[0]);
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
  const char *arg3588 = "/scrub_file_4";
  const char *arg3589 = "content";
  size_t arg3589_size = 7;
  int ret3587;
  ret3587 = guestfs_write (g, arg3588, arg3589, arg3589_size);
  if (ret3587 == -1)
    return -1;
  const char *arg3592 = "../sysroot/scrub_file_4";
  const char *arg3593 = "/scrub_file_4_link";
  int ret3591;
  ret3591 = guestfs_ln_s (g, arg3592, arg3593);
  if (ret3591 == -1)
    return -1;
  const char *arg3596 = "/scrub_file_4_link";
  int ret3595;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3595 = guestfs_scrub_file (g, arg3596);
  guestfs_pop_error_handler (g);
  if (ret3595 != -1)
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
  const char *arg3599 = "/dev/sda1";
  const char *arg3600 = "testlabel";
  int ret3598;
  ret3598 = guestfs_set_e2label (g, arg3599, arg3600);
  if (ret3598 == -1)
    return -1;
  const char *arg3602 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2label (g, arg3602);
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
  const char *arg3605 = "/dev/sda1";
  const char *arg3606 = "76802f61-6cde-0f8b-e149-6849b3cb42b6";
  int ret3604;
  ret3604 = guestfs_set_e2uuid (g, arg3605, arg3606);
  if (ret3604 == -1)
    return -1;
  const char *arg3608 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2uuid (g, arg3608);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "76802f61-6cde-0f8b-e149-6849b3cb42b6")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_set_e2uuid_0", "get_e2uuid", "76802f61-6cde-0f8b-e149-6849b3cb42b6", ret);
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
  const char *arg3611 = "/dev/sda1";
  const char *arg3612 = "clear";
  int ret3610;
  ret3610 = guestfs_set_e2uuid (g, arg3611, arg3612);
  if (ret3610 == -1)
    return -1;
  const char *arg3614 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2uuid (g, arg3614);
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
  const char *arg3617 = "/dev/sda1";
  const char *arg3618 = "random";
  int ret3616;
  ret3616 = guestfs_set_e2uuid (g, arg3617, arg3618);
  if (ret3616 == -1)
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
  const char *arg3621 = "/dev/sda1";
  const char *arg3622 = "time";
  int ret3620;
  ret3620 = guestfs_set_e2uuid (g, arg3621, arg3622);
  if (ret3620 == -1)
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
  const char *arg3625 = "/dev/sda1";
  const char *arg3626 = "testlabel";
  int ret3624;
  ret3624 = guestfs_set_label (g, arg3625, arg3626);
  if (ret3624 == -1)
    return -1;
  const char *arg3628 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg3628);
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

  const char *features3630[] = { "ntfs3g", NULL };
  if (!guestfs_feature_available (g, (char **) features3630)) {
    skipped ("test_set_label_1", "group %s not available in daemon",
             features3630[0]);
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
  const char *arg3632 = "ntfs";
  const char *arg3633 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs3634;
  optargs3634.bitmask = UINT64_C(0x0);
  int ret3631;
  ret3631 = guestfs_mkfs_opts_argv (g, arg3632, arg3633, &optargs3634);
  if (ret3631 == -1)
    return -1;
  const char *arg3636 = "/dev/sda1";
  const char *arg3637 = "testlabel2";
  int ret3635;
  ret3635 = guestfs_set_label (g, arg3636, arg3637);
  if (ret3635 == -1)
    return -1;
  const char *arg3639 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg3639);
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
  const char *arg3642 = "/dev/sda1";
  int ret3641;
  ret3641 = guestfs_zero (g, arg3642);
  if (ret3641 == -1)
    return -1;
  const char *arg3645 = "/dev/sda1";
  const char *arg3646 = "testlabel2";
  int ret3644;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3644 = guestfs_set_label (g, arg3645, arg3646);
  guestfs_pop_error_handler (g);
  if (ret3644 != -1)
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
  int ret3648;
  ret3648 = guestfs_set_trace (g, 0);
  if (ret3648 == -1)
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
  const char *arg3653 = "/dev/sda1";
  const char *arg3654 = "76802f61-6cde-0f8b-e149-6849b3cb42b6";
  int ret3652;
  ret3652 = guestfs_set_uuid (g, arg3653, arg3654);
  if (ret3652 == -1)
    return -1;
  const char *arg3656 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_uuid (g, arg3656);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "76802f61-6cde-0f8b-e149-6849b3cb42b6")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_set_uuid_0", "vfs_uuid", "76802f61-6cde-0f8b-e149-6849b3cb42b6", ret);
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
  const char *arg3659 = "/dev/sda1";
  int ret3658;
  ret3658 = guestfs_set_uuid_random (g, arg3659);
  if (ret3658 == -1)
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
  int ret3661;
  ret3661 = guestfs_sleep (g, 1);
  if (ret3661 == -1)
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
  const char *arg3664 = "/empty";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3664);
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
  const char *arg3666 = "/empty";
  CLEANUP_FREE_STATNS struct guestfs_statns *ret;
  ret = guestfs_statns (g, arg3666);
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
  const char *arg3668 = "/";
  CLEANUP_FREE_STATVFS struct guestfs_statvfs *ret;
  ret = guestfs_statvfs (g, arg3668);
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
  const char *arg3670 = "/known-5";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_strings (g, arg3670);
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
  const char *arg3672 = "/empty";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_strings (g, arg3672);
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
  const char *arg3675 = "/abssymlink";
  CLEANUP_FREE_STRING_LIST char **ret3674;
  ret3674 = guestfs_strings (g, arg3675);
  if (ret3674 == NULL)
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
  const char *arg3677 = "b";
  const char *arg3678 = "/known-5";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_strings_e (g, arg3677, arg3678);
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
  const char *arg3680 = "/strings_e";
  const char *arg3681 = "\0h\0e\0l\0l\0o\0\n\0w\0o\0r\0l\0d\0\n";
  size_t arg3681_size = 24;
  int ret1;
  ret1 = guestfs_write (g, arg3680, arg3681, arg3681_size);
  if (ret1 == -1)
    return -1;
  const char *arg3683 = "b";
  const char *arg3684 = "/strings_e";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_strings_e (g, arg3683, arg3684);
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
  const char *arg3687 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs3688;
  optargs3688.bitmask = UINT64_C(0x0);
  int ret3686;
  ret3686 = guestfs_mkswap_opts_argv (g, arg3687, &optargs3688);
  if (ret3686 == -1)
    return -1;
  const char *arg3690 = "/dev/sda1";
  int ret3689;
  ret3689 = guestfs_swapon_device (g, arg3690);
  if (ret3689 == -1)
    return -1;
  const char *arg3693 = "/dev/sda1";
  int ret3692;
  ret3692 = guestfs_swapoff_device (g, arg3693);
  if (ret3692 == -1)
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
  const char *arg3696 = "/swapon_file";
  int ret3695;
  ret3695 = guestfs_fallocate (g, arg3696, 8388608);
  if (ret3695 == -1)
    return -1;
  const char *arg3700 = "/swapon_file";
  int ret3699;
  ret3699 = guestfs_mkswap_file (g, arg3700);
  if (ret3699 == -1)
    return -1;
  const char *arg3703 = "/swapon_file";
  int ret3702;
  ret3702 = guestfs_swapon_file (g, arg3703);
  if (ret3702 == -1)
    return -1;
  const char *arg3706 = "/swapon_file";
  int ret3705;
  ret3705 = guestfs_swapoff_file (g, arg3706);
  if (ret3705 == -1)
    return -1;
  const char *arg3709 = "/swapon_file";
  int ret3708;
  ret3708 = guestfs_rm (g, arg3709);
  if (ret3708 == -1)
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
  const char *arg3712 = "/dev/sda";
  const char *arg3713 = "mbr";
  int ret3711;
  ret3711 = guestfs_part_disk (g, arg3712, arg3713);
  if (ret3711 == -1)
    return -1;
  const char *arg3716 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs3717;
  optargs3717.label = "swapit";
  optargs3717.bitmask = UINT64_C(0x1);
  int ret3715;
  ret3715 = guestfs_mkswap_opts_argv (g, arg3716, &optargs3717);
  if (ret3715 == -1)
    return -1;
  const char *arg3719 = "swapit";
  int ret3718;
  ret3718 = guestfs_swapon_label (g, arg3719);
  if (ret3718 == -1)
    return -1;
  const char *arg3722 = "swapit";
  int ret3721;
  ret3721 = guestfs_swapoff_label (g, arg3722);
  if (ret3721 == -1)
    return -1;
  const char *arg3725 = "/dev/sda";
  int ret3724;
  ret3724 = guestfs_zero (g, arg3725);
  if (ret3724 == -1)
    return -1;
  const char *arg3728 = "/dev/sda";
  int ret3727;
  ret3727 = guestfs_blockdev_rereadpt (g, arg3728);
  if (ret3727 == -1)
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

  const char *features3730[] = { "linuxfsuuid", NULL };
  if (!guestfs_feature_available (g, (char **) features3730)) {
    skipped ("test_swapon_uuid_0", "group %s not available in daemon",
             features3730[0]);
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
  const char *arg3732 = "/dev/sdc";
  struct guestfs_mkswap_opts_argv optargs3733;
  optargs3733.uuid = "76802f61-6cde-0f8b-e149-6849b3cb42b6";
  optargs3733.bitmask = UINT64_C(0x2);
  int ret3731;
  ret3731 = guestfs_mkswap_opts_argv (g, arg3732, &optargs3733);
  if (ret3731 == -1)
    return -1;
  const char *arg3735 = "76802f61-6cde-0f8b-e149-6849b3cb42b6";
  int ret3734;
  ret3734 = guestfs_swapon_uuid (g, arg3735);
  if (ret3734 == -1)
    return -1;
  const char *arg3738 = "76802f61-6cde-0f8b-e149-6849b3cb42b6";
  int ret3737;
  ret3737 = guestfs_swapoff_uuid (g, arg3738);
  if (ret3737 == -1)
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
  int ret3740;
  ret3740 = guestfs_sync (g);
  if (ret3740 == -1)
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
  const char *arg3742 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tail (g, arg3742);
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
  const char *arg3745 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tail_n (g, 3, arg3745);
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
  const char *arg3748 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tail_n (g, -9998, arg3748);
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
  const char *arg3751 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tail_n (g, 0, arg3751);
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
  const char *arg3754 = "/tar_in";
  int ret3753;
  ret3753 = guestfs_mkdir (g, arg3754);
  if (ret3753 == -1)
    return -1;
  CLEANUP_FREE char *arg3757 = substitute_srcdir ("$srcdir/../test-data/files/helloworld.tar");
  const char *arg3758 = "/tar_in";
  struct guestfs_tar_in_opts_argv optargs3759;
  optargs3759.bitmask = UINT64_C(0x0);
  int ret3756;
  ret3756 = guestfs_tar_in_opts_argv (g, arg3757, arg3758, &optargs3759);
  if (ret3756 == -1)
    return -1;
  const char *arg3760 = "/tar_in/hello";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3760);
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
  const char *arg3763 = "/tar_in_gz";
  int ret3762;
  ret3762 = guestfs_mkdir (g, arg3763);
  if (ret3762 == -1)
    return -1;
  CLEANUP_FREE char *arg3766 = substitute_srcdir ("$srcdir/../test-data/files/helloworld.tar.gz");
  const char *arg3767 = "/tar_in_gz";
  struct guestfs_tar_in_opts_argv optargs3768;
  optargs3768.compress = "gzip";
  optargs3768.bitmask = UINT64_C(0x1);
  int ret3765;
  ret3765 = guestfs_tar_in_opts_argv (g, arg3766, arg3767, &optargs3768);
  if (ret3765 == -1)
    return -1;
  const char *arg3769 = "/tar_in_gz/hello";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3769);
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

  const char *features3771[] = { "xz", NULL };
  if (!guestfs_feature_available (g, (char **) features3771)) {
    skipped ("test_tar_in_2", "group %s not available in daemon",
             features3771[0]);
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
  const char *arg3773 = "/tar_in_xz";
  int ret3772;
  ret3772 = guestfs_mkdir (g, arg3773);
  if (ret3772 == -1)
    return -1;
  CLEANUP_FREE char *arg3776 = substitute_srcdir ("$srcdir/../test-data/files/helloworld.tar.xz");
  const char *arg3777 = "/tar_in_xz";
  struct guestfs_tar_in_opts_argv optargs3778;
  optargs3778.compress = "xz";
  optargs3778.bitmask = UINT64_C(0x1);
  int ret3775;
  ret3775 = guestfs_tar_in_opts_argv (g, arg3776, arg3777, &optargs3778);
  if (ret3775 == -1)
    return -1;
  const char *arg3779 = "/tar_in_xz/hello";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3779);
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
  const char *arg3782 = "/tgz_in";
  int ret3781;
  ret3781 = guestfs_mkdir (g, arg3782);
  if (ret3781 == -1)
    return -1;
  CLEANUP_FREE char *arg3785 = substitute_srcdir ("$srcdir/../test-data/files/helloworld.tar.gz");
  const char *arg3786 = "/tgz_in";
  int ret3784;
  ret3784 = guestfs_tgz_in (g, arg3785, arg3786);
  if (ret3784 == -1)
    return -1;
  const char *arg3788 = "/tgz_in/hello";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3788);
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
  const char *arg3791 = "/touch";
  int ret3790;
  ret3790 = guestfs_touch (g, arg3791);
  if (ret3790 == -1)
    return -1;
  const char *arg3793 = "/touch";
  int ret;
  ret = guestfs_exists (g, arg3793);
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
  const char *arg3795 = "/truncate";
  const char *arg3796 = "some stuff so size is not zero";
  size_t arg3796_size = 30;
  int ret2;
  ret2 = guestfs_write (g, arg3795, arg3796, arg3796_size);
  if (ret2 == -1)
    return -1;
  const char *arg3798 = "/truncate";
  int ret1;
  ret1 = guestfs_truncate (g, arg3798);
  if (ret1 == -1)
    return -1;
  const char *arg3800 = "/truncate";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3800);
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
  const char *arg3802 = "/truncate_size";
  int ret2;
  ret2 = guestfs_touch (g, arg3802);
  if (ret2 == -1)
    return -1;
  const char *arg3804 = "/truncate_size";
  int ret1;
  ret1 = guestfs_truncate_size (g, arg3804, 1000);
  if (ret1 == -1)
    return -1;
  const char *arg3807 = "/truncate_size";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3807);
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
  const char *arg3809 = "/dev/sdb1";
  struct guestfs_tune2fs_argv optargs3810;
  optargs3810.force = 0;
  optargs3810.maxmountcount = 0;
  optargs3810.intervalbetweenchecks = 0;
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
  const char *arg3813 = "/dev/sdb1";
  struct guestfs_tune2fs_argv optargs3814;
  optargs3814.force = 0;
  optargs3814.maxmountcount = 0;
  optargs3814.intervalbetweenchecks = 86400;
  optargs3814.bitmask = UINT64_C(0x23);
  int ret1;
  ret1 = guestfs_tune2fs_argv (g, arg3813, &optargs3814);
  if (ret1 == -1)
    return -1;
  const char *arg3815 = "/dev/sdb1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tune2fs_l (g, arg3815);
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
  const char *arg3817 = "/dev/sdb1";
  struct guestfs_tune2fs_argv optargs3818;
  optargs3818.force = 0;
  optargs3818.group = 1;
  optargs3818.user = 1;
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
  const char *arg3821 = "/dev/sdb1";
  struct guestfs_tune2fs_argv optargs3822;
  optargs3822.force = 0;
  optargs3822.group = 0;
  optargs3822.user = 0;
  optargs3822.bitmask = UINT64_C(0x211);
  int ret1;
  ret1 = guestfs_tune2fs_argv (g, arg3821, &optargs3822);
  if (ret1 == -1)
    return -1;
  const char *arg3823 = "/dev/sdb1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tune2fs_l (g, arg3823);
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
  const char *arg3825 = "/dev/sdb1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tune2fs_l (g, arg3825);
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

  const char *features3827[] = { "xz", NULL };
  if (!guestfs_feature_available (g, (char **) features3827)) {
    skipped ("test_txz_in_0", "group %s not available in daemon",
             features3827[0]);
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
  const char *arg3829 = "/txz_in";
  int ret3828;
  ret3828 = guestfs_mkdir (g, arg3829);
  if (ret3828 == -1)
    return -1;
  CLEANUP_FREE char *arg3832 = substitute_srcdir ("$srcdir/../test-data/files/helloworld.tar.xz");
  const char *arg3833 = "/txz_in";
  int ret3831;
  ret3831 = guestfs_txz_in (g, arg3832, arg3833);
  if (ret3831 == -1)
    return -1;
  const char *arg3835 = "/txz_in/hello";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3835);
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
  const char *arg3839 = "/dev/sda";
  const char *arg3840 = "mbr";
  int ret3;
  ret3 = guestfs_part_disk (g, arg3839, arg3840);
  if (ret3 == -1)
    return -1;
  const char *arg3842 = "ext2";
  const char *arg3843 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs3844;
  optargs3844.bitmask = UINT64_C(0x0);
  int ret2;
  ret2 = guestfs_mkfs_opts_argv (g, arg3842, arg3843, &optargs3844);
  if (ret2 == -1)
    return -1;
  const char *arg3845 = "/dev/sda1";
  const char *arg3846 = "/";
  int ret1;
  ret1 = guestfs_mount (g, arg3845, arg3846);
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
  const char *arg3849 = "/dev/sda";
  const char *arg3850 = "mbr";
  int ret4;
  ret4 = guestfs_part_disk (g, arg3849, arg3850);
  if (ret4 == -1)
    return -1;
  const char *arg3852 = "ext2";
  const char *arg3853 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs3854;
  optargs3854.bitmask = UINT64_C(0x0);
  int ret3;
  ret3 = guestfs_mkfs_opts_argv (g, arg3852, arg3853, &optargs3854);
  if (ret3 == -1)
    return -1;
  const char *arg3855 = "/dev/sda1";
  const char *arg3856 = "/";
  int ret2;
  ret2 = guestfs_mount (g, arg3855, arg3856);
  if (ret2 == -1)
    return -1;
  const char *arg3858 = "/";
  struct guestfs_umount_opts_argv optargs3859;
  optargs3859.force = 0;
  optargs3859.lazyunmount = 0;
  optargs3859.bitmask = UINT64_C(0x3);
  int ret1;
  ret1 = guestfs_umount_opts_argv (g, arg3858, &optargs3859);
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
  const char *arg3863 = "/dev/sda";
  const char *arg3864 = "mbr";
  int ret14;
  ret14 = guestfs_part_init (g, arg3863, arg3864);
  if (ret14 == -1)
    return -1;
  const char *arg3866 = "/dev/sda";
  const char *arg3867 = "p";
  int ret13;
  ret13 = guestfs_part_add (g, arg3866, arg3867, 64, 204799);
  if (ret13 == -1)
    return -1;
  const char *arg3871 = "/dev/sda";
  const char *arg3872 = "p";
  int ret12;
  ret12 = guestfs_part_add (g, arg3871, arg3872, 204800, 409599);
  if (ret12 == -1)
    return -1;
  const char *arg3876 = "/dev/sda";
  const char *arg3877 = "p";
  int ret11;
  ret11 = guestfs_part_add (g, arg3876, arg3877, 409600, -64);
  if (ret11 == -1)
    return -1;
  const char *arg3881 = "ext2";
  const char *arg3882 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs3883;
  optargs3883.bitmask = UINT64_C(0x0);
  int ret10;
  ret10 = guestfs_mkfs_opts_argv (g, arg3881, arg3882, &optargs3883);
  if (ret10 == -1)
    return -1;
  const char *arg3884 = "ext2";
  const char *arg3885 = "/dev/sda2";
  struct guestfs_mkfs_opts_argv optargs3886;
  optargs3886.bitmask = UINT64_C(0x0);
  int ret9;
  ret9 = guestfs_mkfs_opts_argv (g, arg3884, arg3885, &optargs3886);
  if (ret9 == -1)
    return -1;
  const char *arg3887 = "ext2";
  const char *arg3888 = "/dev/sda3";
  struct guestfs_mkfs_opts_argv optargs3889;
  optargs3889.bitmask = UINT64_C(0x0);
  int ret8;
  ret8 = guestfs_mkfs_opts_argv (g, arg3887, arg3888, &optargs3889);
  if (ret8 == -1)
    return -1;
  const char *arg3890 = "/dev/sda1";
  const char *arg3891 = "/";
  int ret7;
  ret7 = guestfs_mount (g, arg3890, arg3891);
  if (ret7 == -1)
    return -1;
  const char *arg3893 = "/mp1";
  int ret6;
  ret6 = guestfs_mkdir (g, arg3893);
  if (ret6 == -1)
    return -1;
  const char *arg3895 = "/dev/sda2";
  const char *arg3896 = "/mp1";
  int ret5;
  ret5 = guestfs_mount (g, arg3895, arg3896);
  if (ret5 == -1)
    return -1;
  const char *arg3898 = "/mp1/mp2";
  int ret4;
  ret4 = guestfs_mkdir (g, arg3898);
  if (ret4 == -1)
    return -1;
  const char *arg3900 = "/dev/sda3";
  const char *arg3901 = "/mp1/mp2";
  int ret3;
  ret3 = guestfs_mount (g, arg3900, arg3901);
  if (ret3 == -1)
    return -1;
  const char *arg3903 = "/mp1/mp2/mp3";
  int ret2;
  ret2 = guestfs_mkdir (g, arg3903);
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
  const char *arg3908 = "/upload";
  int ret3907;
  ret3907 = guestfs_mkdir (g, arg3908);
  if (ret3907 == -1)
    return -1;
  CLEANUP_FREE char *arg3911 = substitute_srcdir ("$srcdir/../COPYING.LIB");
  const char *arg3912 = "/upload/COPYING.LIB";
  int ret3910;
  ret3910 = guestfs_upload (g, arg3911, arg3912);
  if (ret3910 == -1)
    return -1;
  const char *arg3914 = "md5";
  const char *arg3915 = "/upload/COPYING.LIB";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg3914, arg3915);
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
  CLEANUP_FREE char *arg3918 = substitute_srcdir ("$srcdir/../COPYING.LIB");
  const char *arg3919 = "/upload_offset";
  int ret3917;
  ret3917 = guestfs_upload_offset (g, arg3918, arg3919, 0);
  if (ret3917 == -1)
    return -1;
  const char *arg3922 = "md5";
  const char *arg3923 = "/upload_offset";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg3922, arg3923);
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
  const char *arg3925 = "/utimens-file";
  int ret2;
  ret2 = guestfs_touch (g, arg3925);
  if (ret2 == -1)
    return -1;
  const char *arg3927 = "/utimens-file";
  int ret1;
  ret1 = guestfs_utimens (g, arg3927, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3933 = "/utimens-file";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3933);
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
  const char *arg3935 = "/utimens-dir";
  int ret2;
  ret2 = guestfs_mkdir (g, arg3935);
  if (ret2 == -1)
    return -1;
  const char *arg3937 = "/utimens-dir";
  int ret1;
  ret1 = guestfs_utimens (g, arg3937, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3943 = "/utimens-dir";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3943);
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
  const char *arg3946 = "/utimens-fifo";
  int ret2;
  ret2 = guestfs_mkfifo (g, 420, arg3946);
  if (ret2 == -1)
    return -1;
  const char *arg3948 = "/utimens-fifo";
  int ret1;
  ret1 = guestfs_utimens (g, arg3948, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3954 = "/utimens-fifo";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3954);
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
  const char *arg3956 = "/utimens-file";
  const char *arg3957 = "/utimens-link";
  int ret2;
  ret2 = guestfs_ln_sf (g, arg3956, arg3957);
  if (ret2 == -1)
    return -1;
  const char *arg3959 = "/utimens-link";
  int ret1;
  ret1 = guestfs_utimens (g, arg3959, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3965 = "/utimens-link";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3965);
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
  const char *arg3970 = "/utimens-block";
  int ret2;
  ret2 = guestfs_mknod_b (g, 420, 8, 0, arg3970);
  if (ret2 == -1)
    return -1;
  const char *arg3972 = "/utimens-block";
  int ret1;
  ret1 = guestfs_utimens (g, arg3972, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3978 = "/utimens-block";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3978);
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
  const char *arg3983 = "/utimens-char";
  int ret2;
  ret2 = guestfs_mknod_c (g, 420, 1, 3, arg3983);
  if (ret2 == -1)
    return -1;
  const char *arg3985 = "/utimens-char";
  int ret1;
  ret1 = guestfs_utimens (g, arg3985, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3991 = "/utimens-char";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3991);
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
  CLEANUP_FREE_UTSNAME struct guestfs_utsname *ret3993;
  ret3993 = guestfs_utsname (g);
  if (ret3993 == NULL)
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
  const char *arg3997 = "/dev/sda1";
  const char *arg3998 = "LTEST";
  int ret3996;
  ret3996 = guestfs_set_label (g, arg3997, arg3998);
  if (ret3996 == -1)
    return -1;
  const char *arg4000 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg4000);
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
  const char *arg4003 = "/dev/sda";
  const char *arg4004 = "mbr";
  int ret4002;
  ret4002 = guestfs_part_disk (g, arg4003, arg4004);
  if (ret4002 == -1)
    return -1;
  const char *arg4007 = "ext2";
  const char *arg4008 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4009;
  optargs4009.label = "test-label";
  optargs4009.bitmask = UINT64_C(0x10);
  int ret4006;
  ret4006 = guestfs_mkfs_opts_argv (g, arg4007, arg4008, &optargs4009);
  if (ret4006 == -1)
    return -1;
  const char *arg4010 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg4010);
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

  const char *features4012[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4012)) {
    skipped ("test_vfs_label_2", "group %s not available in daemon",
             features4012[0]);
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
  const char *arg4014 = "/dev/sda";
  const char *arg4015 = "mbr";
  int ret4013;
  ret4013 = guestfs_part_disk (g, arg4014, arg4015);
  if (ret4013 == -1)
    return -1;
  const char *arg4018 = "btrfs";
  const char *arg4019 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4020;
  optargs4020.label = "";
  optargs4020.bitmask = UINT64_C(0x10);
  int ret4017;
  ret4017 = guestfs_mkfs_opts_argv (g, arg4018, arg4019, &optargs4020);
  if (ret4017 == -1)
    return -1;
  const char *arg4022 = "/dev/sda1";
  const char *arg4023 = "test-label-btrfs";
  int ret4021;
  ret4021 = guestfs_set_label (g, arg4022, arg4023);
  if (ret4021 == -1)
    return -1;
  const char *arg4025 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg4025);
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
  const char *arg4028 = "/dev/sda1";
  int64_t ret4027;
  ret4027 = guestfs_vfs_minimum_size (g, arg4028);
  if (ret4027 == -1)
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

  const char *features4030[] = { "ntfsprogs", NULL };
  if (!guestfs_feature_available (g, (char **) features4030)) {
    skipped ("test_vfs_minimum_size_1", "group %s not available in daemon",
             features4030[0]);
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
  const char *arg4032 = "ntfs";
  const char *arg4033 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4034;
  optargs4034.bitmask = UINT64_C(0x0);
  int ret4031;
  ret4031 = guestfs_mkfs_opts_argv (g, arg4032, arg4033, &optargs4034);
  if (ret4031 == -1)
    return -1;
  const char *arg4036 = "/dev/sda1";
  int64_t ret4035;
  ret4035 = guestfs_vfs_minimum_size (g, arg4036);
  if (ret4035 == -1)
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

  const char *features4038[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4038)) {
    skipped ("test_vfs_minimum_size_2", "group %s not available in daemon",
             features4038[0]);
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
  const char *arg4040 = "btrfs";
  const char *arg4041 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4042;
  optargs4042.bitmask = UINT64_C(0x0);
  int ret4039;
  ret4039 = guestfs_mkfs_opts_argv (g, arg4040, arg4041, &optargs4042);
  if (ret4039 == -1)
    return -1;
  const char *arg4044 = "/dev/sda1";
  const char *arg4045 = "/";
  int ret4043;
  ret4043 = guestfs_mount (g, arg4044, arg4045);
  if (ret4043 == -1)
    return -1;
  const char *arg4047 = "/dev/sda1";
  int64_t ret;
  guestfs_push_error_handler (g, NULL, NULL);
  ret = guestfs_vfs_minimum_size (g, arg4047);
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

  const char *features4049[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4049)) {
    skipped ("test_vfs_minimum_size_3", "group %s not available in daemon",
             features4049[0]);
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
  const char *arg4051 = "xfs";
  const char *arg4052 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4053;
  optargs4053.bitmask = UINT64_C(0x0);
  int ret4050;
  ret4050 = guestfs_mkfs_opts_argv (g, arg4051, arg4052, &optargs4053);
  if (ret4050 == -1)
    return -1;
  const char *arg4055 = "/dev/sda1";
  const char *arg4056 = "/";
  int ret4054;
  ret4054 = guestfs_mount (g, arg4055, arg4056);
  if (ret4054 == -1)
    return -1;
  const char *arg4059 = "/dev/sda1";
  int64_t ret4058;
  ret4058 = guestfs_vfs_minimum_size (g, arg4059);
  if (ret4058 == -1)
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
  const char *arg4061 = "/dev/sdb1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_type (g, arg4061);
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
  const char *arg4064 = "/dev/sda1";
  const char *arg4065 = "76802f61-6cde-0f8b-e149-6849b3cb42b6";
  int ret4063;
  ret4063 = guestfs_set_e2uuid (g, arg4064, arg4065);
  if (ret4063 == -1)
    return -1;
  const char *arg4067 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_uuid (g, arg4067);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "76802f61-6cde-0f8b-e149-6849b3cb42b6")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_vfs_uuid_0", "vfs_uuid", "76802f61-6cde-0f8b-e149-6849b3cb42b6", ret);
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

  const char *features4069[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4069)) {
    skipped ("test_vgchange_uuid_0", "group %s not available in daemon",
             features4069[0]);
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
  const char *arg4071 = "/dev/sda";
  const char *arg4072 = "mbr";
  int ret4070;
  ret4070 = guestfs_part_disk (g, arg4071, arg4072);
  if (ret4070 == -1)
    return -1;
  const char *arg4075 = "/dev/sda1";
  int ret4074;
  ret4074 = guestfs_pvcreate (g, arg4075);
  if (ret4074 == -1)
    return -1;
  const char *arg4078 = "VG";
  const char *arg4079_0 = "/dev/sda1";
  const char *const arg4079[] = {
    arg4079_0,
    NULL
  };
  int ret4077;
  ret4077 = guestfs_vgcreate (g, arg4078, (char **) arg4079);
  if (ret4077 == -1)
    return -1;
  const char *arg4082 = "/dev/VG";
  int ret4081;
  ret4081 = guestfs_vgchange_uuid (g, arg4082);
  if (ret4081 == -1)
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

  const char *features4084[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4084)) {
    skipped ("test_vgchange_uuid_all_0", "group %s not available in daemon",
             features4084[0]);
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
  const char *arg4086 = "/dev/sda";
  const char *arg4087 = "mbr";
  int ret4085;
  ret4085 = guestfs_part_disk (g, arg4086, arg4087);
  if (ret4085 == -1)
    return -1;
  const char *arg4090 = "/dev/sda1";
  int ret4089;
  ret4089 = guestfs_pvcreate (g, arg4090);
  if (ret4089 == -1)
    return -1;
  const char *arg4093 = "VG";
  const char *arg4094_0 = "/dev/sda1";
  const char *const arg4094[] = {
    arg4094_0,
    NULL
  };
  int ret4092;
  ret4092 = guestfs_vgcreate (g, arg4093, (char **) arg4094);
  if (ret4092 == -1)
    return -1;
  int ret4096;
  ret4096 = guestfs_vgchange_uuid_all (g);
  if (ret4096 == -1)
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

  const char *features4098[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4098)) {
    skipped ("test_vgcreate_0", "group %s not available in daemon",
             features4098[0]);
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
  const char *arg4099 = "/dev/sda";
  const char *arg4100 = "mbr";
  int ret9;
  ret9 = guestfs_part_init (g, arg4099, arg4100);
  if (ret9 == -1)
    return -1;
  const char *arg4102 = "/dev/sda";
  const char *arg4103 = "p";
  int ret8;
  ret8 = guestfs_part_add (g, arg4102, arg4103, 64, 204799);
  if (ret8 == -1)
    return -1;
  const char *arg4107 = "/dev/sda";
  const char *arg4108 = "p";
  int ret7;
  ret7 = guestfs_part_add (g, arg4107, arg4108, 204800, 409599);
  if (ret7 == -1)
    return -1;
  const char *arg4112 = "/dev/sda";
  const char *arg4113 = "p";
  int ret6;
  ret6 = guestfs_part_add (g, arg4112, arg4113, 409600, -64);
  if (ret6 == -1)
    return -1;
  const char *arg4117 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg4117);
  if (ret5 == -1)
    return -1;
  const char *arg4119 = "/dev/sda2";
  int ret4;
  ret4 = guestfs_pvcreate (g, arg4119);
  if (ret4 == -1)
    return -1;
  const char *arg4121 = "/dev/sda3";
  int ret3;
  ret3 = guestfs_pvcreate (g, arg4121);
  if (ret3 == -1)
    return -1;
  const char *arg4123 = "VG1";
  const char *arg4124_0 = "/dev/sda1";
  const char *arg4124_1 = "/dev/sda2";
  const char *const arg4124[] = {
    arg4124_0,
    arg4124_1,
    NULL
  };
  int ret2;
  ret2 = guestfs_vgcreate (g, arg4123, (char **) arg4124);
  if (ret2 == -1)
    return -1;
  const char *arg4126 = "VG2";
  const char *arg4127_0 = "/dev/sda3";
  const char *const arg4127[] = {
    arg4127_0,
    NULL
  };
  int ret1;
  ret1 = guestfs_vgcreate (g, arg4126, (char **) arg4127);
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

  const char *features4130[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4130)) {
    skipped ("test_vgcreate_1", "group %s not available in daemon",
             features4130[0]);
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
  const char *arg4132 = "/dev/sda";
  const char *arg4133 = "mbr";
  int ret4131;
  ret4131 = guestfs_part_init (g, arg4132, arg4133);
  if (ret4131 == -1)
    return -1;
  const char *arg4136 = "/dev/sda";
  const char *arg4137 = "p";
  int ret4135;
  ret4135 = guestfs_part_add (g, arg4136, arg4137, 64, 204799);
  if (ret4135 == -1)
    return -1;
  const char *arg4142 = "/dev/sda";
  const char *arg4143 = "p";
  int ret4141;
  ret4141 = guestfs_part_add (g, arg4142, arg4143, 204800, 409599);
  if (ret4141 == -1)
    return -1;
  const char *arg4148 = "/dev/sda";
  const char *arg4149 = "p";
  int ret4147;
  ret4147 = guestfs_part_add (g, arg4148, arg4149, 409600, -64);
  if (ret4147 == -1)
    return -1;
  const char *arg4154 = "/dev/sda1";
  int ret4153;
  ret4153 = guestfs_pvcreate (g, arg4154);
  if (ret4153 == -1)
    return -1;
  const char *arg4157 = "/dev/sda2";
  int ret4156;
  ret4156 = guestfs_pvcreate (g, arg4157);
  if (ret4156 == -1)
    return -1;
  const char *arg4160 = "/dev/sda3";
  int ret4159;
  ret4159 = guestfs_pvcreate (g, arg4160);
  if (ret4159 == -1)
    return -1;
  const char *arg4163 = "VG1";
  const char *arg4164_0 = "/foo/bar";
  const char *arg4164_1 = "/dev/sda2";
  const char *const arg4164[] = {
    arg4164_0,
    arg4164_1,
    NULL
  };
  int ret4162;
  guestfs_push_error_handler (g, NULL, NULL);
  ret4162 = guestfs_vgcreate (g, arg4163, (char **) arg4164);
  guestfs_pop_error_handler (g);
  if (ret4162 != -1)
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

  const char *features4166[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4166)) {
    skipped ("test_vgremove_0", "group %s not available in daemon",
             features4166[0]);
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
  const char *arg4167 = "/dev/sda";
  const char *arg4168 = "mbr";
  int ret6;
  ret6 = guestfs_part_disk (g, arg4167, arg4168);
  if (ret6 == -1)
    return -1;
  const char *arg4170 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg4170);
  if (ret5 == -1)
    return -1;
  const char *arg4172 = "VG";
  const char *arg4173_0 = "/dev/sda1";
  const char *const arg4173[] = {
    arg4173_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg4172, (char **) arg4173);
  if (ret4 == -1)
    return -1;
  const char *arg4175 = "LV1";
  const char *arg4176 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg4175, arg4176, 50);
  if (ret3 == -1)
    return -1;
  const char *arg4179 = "LV2";
  const char *arg4180 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg4179, arg4180, 50);
  if (ret2 == -1)
    return -1;
  const char *arg4183 = "VG";
  int ret1;
  ret1 = guestfs_vgremove (g, arg4183);
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

  const char *features4186[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4186)) {
    skipped ("test_vgremove_1", "group %s not available in daemon",
             features4186[0]);
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
  const char *arg4187 = "/dev/sda";
  const char *arg4188 = "mbr";
  int ret6;
  ret6 = guestfs_part_disk (g, arg4187, arg4188);
  if (ret6 == -1)
    return -1;
  const char *arg4190 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg4190);
  if (ret5 == -1)
    return -1;
  const char *arg4192 = "VG";
  const char *arg4193_0 = "/dev/sda1";
  const char *const arg4193[] = {
    arg4193_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg4192, (char **) arg4193);
  if (ret4 == -1)
    return -1;
  const char *arg4195 = "LV1";
  const char *arg4196 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg4195, arg4196, 50);
  if (ret3 == -1)
    return -1;
  const char *arg4199 = "LV2";
  const char *arg4200 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg4199, arg4200, 50);
  if (ret2 == -1)
    return -1;
  const char *arg4203 = "VG";
  int ret1;
  ret1 = guestfs_vgremove (g, arg4203);
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
  const char *arg4206 = "/";
  struct guestfs_umount_opts_argv optargs4207;
  optargs4207.force = 0;
  optargs4207.lazyunmount = 0;
  optargs4207.bitmask = UINT64_C(0x3);
  int ret5;
  ret5 = guestfs_umount_opts_argv (g, arg4206, &optargs4207);
  if (ret5 == -1)
    return -1;
  const char *arg4209_0 = "VG";
  const char *const arg4209[] = {
    arg4209_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vg_activate (g, 0, (char **) arg4209);
  if (ret4 == -1)
    return -1;
  const char *arg4211 = "VG";
  const char *arg4212 = "VG2";
  int ret3;
  ret3 = guestfs_vgrename (g, arg4211, arg4212);
  if (ret3 == -1)
    return -1;
  const char *arg4215_0 = "VG2";
  const char *const arg4215[] = {
    arg4215_0,
    NULL
  };
  int ret2;
  ret2 = guestfs_vg_activate (g, 1, (char **) arg4215);
  if (ret2 == -1)
    return -1;
  const char *arg4217 = "/dev/VG2/LV";
  const char *arg4218 = "/";
  int ret1;
  ret1 = guestfs_mount (g, arg4217, arg4218);
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

  const char *features4221[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4221)) {
    skipped ("test_vgs_0", "group %s not available in daemon",
             features4221[0]);
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

  const char *features4223[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4223)) {
    skipped ("test_vgs_1", "group %s not available in daemon",
             features4223[0]);
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
  const char *arg4224 = "/dev/sda";
  const char *arg4225 = "mbr";
  int ret9;
  ret9 = guestfs_part_init (g, arg4224, arg4225);
  if (ret9 == -1)
    return -1;
  const char *arg4227 = "/dev/sda";
  const char *arg4228 = "p";
  int ret8;
  ret8 = guestfs_part_add (g, arg4227, arg4228, 64, 204799);
  if (ret8 == -1)
    return -1;
  const char *arg4232 = "/dev/sda";
  const char *arg4233 = "p";
  int ret7;
  ret7 = guestfs_part_add (g, arg4232, arg4233, 204800, 409599);
  if (ret7 == -1)
    return -1;
  const char *arg4237 = "/dev/sda";
  const char *arg4238 = "p";
  int ret6;
  ret6 = guestfs_part_add (g, arg4237, arg4238, 409600, -64);
  if (ret6 == -1)
    return -1;
  const char *arg4242 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg4242);
  if (ret5 == -1)
    return -1;
  const char *arg4244 = "/dev/sda2";
  int ret4;
  ret4 = guestfs_pvcreate (g, arg4244);
  if (ret4 == -1)
    return -1;
  const char *arg4246 = "/dev/sda3";
  int ret3;
  ret3 = guestfs_pvcreate (g, arg4246);
  if (ret3 == -1)
    return -1;
  const char *arg4248 = "VG1";
  const char *arg4249_0 = "/dev/sda1";
  const char *arg4249_1 = "/dev/sda2";
  const char *const arg4249[] = {
    arg4249_0,
    arg4249_1,
    NULL
  };
  int ret2;
  ret2 = guestfs_vgcreate (g, arg4248, (char **) arg4249);
  if (ret2 == -1)
    return -1;
  const char *arg4251 = "VG2";
  const char *arg4252_0 = "/dev/sda3";
  const char *const arg4252[] = {
    arg4252_0,
    NULL
  };
  int ret1;
  ret1 = guestfs_vgcreate (g, arg4251, (char **) arg4252);
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
  int ret4255;
  ret4255 = guestfs_vgscan (g);
  if (ret4255 == -1)
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
  const char *arg4257 = "/100kallspaces";
  int ret;
  ret = guestfs_wc_c (g, arg4257);
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
  const char *arg4259 = "/10klines";
  int ret;
  ret = guestfs_wc_l (g, arg4259);
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
  const char *arg4261 = "/abssymlink";
  int ret;
  ret = guestfs_wc_l (g, arg4261);
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
  const char *arg4263 = "/10klines";
  int ret;
  ret = guestfs_wc_w (g, arg4263);
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

  const char *features4265[] = { "wipefs", NULL };
  if (!guestfs_feature_available (g, (char **) features4265)) {
    skipped ("test_wipefs_0", "group %s not available in daemon",
             features4265[0]);
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
  const char *arg4267 = "/dev/VG/LV";
  struct guestfs_umount_opts_argv optargs4268;
  optargs4268.bitmask = UINT64_C(0x0);
  int ret4266;
  ret4266 = guestfs_umount_opts_argv (g, arg4267, &optargs4268);
  if (ret4266 == -1)
    return -1;
  const char *arg4270 = "/dev/VG/LV";
  int ret4269;
  ret4269 = guestfs_wipefs (g, arg4270);
  if (ret4269 == -1)
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
  const char *arg4273 = "/write";
  const char *arg4274 = "new file contents";
  size_t arg4274_size = 17;
  int ret4272;
  ret4272 = guestfs_write (g, arg4273, arg4274, arg4274_size);
  if (ret4272 == -1)
    return -1;
  const char *arg4276 = "/write";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4276);
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
  const char *arg4279 = "/write2";
  const char *arg4280 = "\nnew file contents\n";
  size_t arg4280_size = 19;
  int ret4278;
  ret4278 = guestfs_write (g, arg4279, arg4280, arg4280_size);
  if (ret4278 == -1)
    return -1;
  const char *arg4282 = "/write2";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4282);
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
  const char *arg4285 = "/write3";
  const char *arg4286 = "\n\n";
  size_t arg4286_size = 2;
  int ret4284;
  ret4284 = guestfs_write (g, arg4285, arg4286, arg4286_size);
  if (ret4284 == -1)
    return -1;
  const char *arg4288 = "/write3";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4288);
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
  const char *arg4291 = "/write4";
  const char *arg4292 = "";
  size_t arg4292_size = 0;
  int ret4290;
  ret4290 = guestfs_write (g, arg4291, arg4292, arg4292_size);
  if (ret4290 == -1)
    return -1;
  const char *arg4294 = "/write4";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4294);
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
  const char *arg4297 = "/write5";
  const char *arg4298 = "\n\n\n";
  size_t arg4298_size = 3;
  int ret4296;
  ret4296 = guestfs_write (g, arg4297, arg4298, arg4298_size);
  if (ret4296 == -1)
    return -1;
  const char *arg4300 = "/write5";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4300);
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
  const char *arg4303 = "/write6";
  const char *arg4304 = "\n";
  size_t arg4304_size = 1;
  int ret4302;
  ret4302 = guestfs_write (g, arg4303, arg4304, arg4304_size);
  if (ret4302 == -1)
    return -1;
  const char *arg4306 = "/write6";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4306);
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
  const char *arg4309 = "/write_append";
  const char *arg4310 = "line1\n";
  size_t arg4310_size = 6;
  int ret4308;
  ret4308 = guestfs_write (g, arg4309, arg4310, arg4310_size);
  if (ret4308 == -1)
    return -1;
  const char *arg4313 = "/write_append";
  const char *arg4314 = "line2\n";
  size_t arg4314_size = 6;
  int ret4312;
  ret4312 = guestfs_write_append (g, arg4313, arg4314, arg4314_size);
  if (ret4312 == -1)
    return -1;
  const char *arg4317 = "/write_append";
  const char *arg4318 = "line3a";
  size_t arg4318_size = 6;
  int ret4316;
  ret4316 = guestfs_write_append (g, arg4317, arg4318, arg4318_size);
  if (ret4316 == -1)
    return -1;
  const char *arg4321 = "/write_append";
  const char *arg4322 = "line3b\n";
  size_t arg4322_size = 7;
  int ret4320;
  ret4320 = guestfs_write_append (g, arg4321, arg4322, arg4322_size);
  if (ret4320 == -1)
    return -1;
  const char *arg4324 = "/write_append";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4324);
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
  const char *arg4327 = "/write_file";
  const char *arg4328 = "abc";
  int ret4326;
  guestfs_push_error_handler (g, NULL, NULL);
  ret4326 = guestfs_write_file (g, arg4327, arg4328, 10000);
  guestfs_pop_error_handler (g);
  if (ret4326 != -1)
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

  const char *features4331[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4331)) {
    skipped ("test_xfs_admin_0", "group %s not available in daemon",
             features4331[0]);
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
  const char *arg4333 = "/dev/sda";
  const char *arg4334 = "mbr";
  int ret4332;
  ret4332 = guestfs_part_disk (g, arg4333, arg4334);
  if (ret4332 == -1)
    return -1;
  const char *arg4337 = "xfs";
  const char *arg4338 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4339;
  optargs4339.bitmask = UINT64_C(0x0);
  int ret4336;
  ret4336 = guestfs_mkfs_opts_argv (g, arg4337, arg4338, &optargs4339);
  if (ret4336 == -1)
    return -1;
  const char *arg4341 = "/dev/sda1";
  struct guestfs_xfs_admin_argv optargs4342;
  optargs4342.uuid = "76802f61-6cde-0f8b-e149-6849b3cb42b6";
  optargs4342.bitmask = UINT64_C(0x40);
  int ret4340;
  ret4340 = guestfs_xfs_admin_argv (g, arg4341, &optargs4342);
  if (ret4340 == -1)
    return -1;
  const char *arg4343 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_uuid (g, arg4343);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "76802f61-6cde-0f8b-e149-6849b3cb42b6")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_xfs_admin_0", "vfs_uuid", "76802f61-6cde-0f8b-e149-6849b3cb42b6", ret);
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

  const char *features4345[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4345)) {
    skipped ("test_xfs_admin_1", "group %s not available in daemon",
             features4345[0]);
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
  const char *arg4347 = "/dev/sda";
  const char *arg4348 = "mbr";
  int ret4346;
  ret4346 = guestfs_part_disk (g, arg4347, arg4348);
  if (ret4346 == -1)
    return -1;
  const char *arg4351 = "xfs";
  const char *arg4352 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4353;
  optargs4353.bitmask = UINT64_C(0x0);
  int ret4350;
  ret4350 = guestfs_mkfs_opts_argv (g, arg4351, arg4352, &optargs4353);
  if (ret4350 == -1)
    return -1;
  const char *arg4355 = "/dev/sda1";
  struct guestfs_xfs_admin_argv optargs4356;
  optargs4356.label = "LBL-TEST";
  optargs4356.bitmask = UINT64_C(0x20);
  int ret4354;
  ret4354 = guestfs_xfs_admin_argv (g, arg4355, &optargs4356);
  if (ret4354 == -1)
    return -1;
  const char *arg4357 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg4357);
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

  const char *features4359[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4359)) {
    skipped ("test_xfs_growfs_0", "group %s not available in daemon",
             features4359[0]);
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
  const char *arg4360 = "/dev/sda";
  const char *arg4361 = "mbr";
  int ret8;
  ret8 = guestfs_part_disk (g, arg4360, arg4361);
  if (ret8 == -1)
    return -1;
  const char *arg4363 = "/dev/sda1";
  int ret7;
  ret7 = guestfs_pvcreate (g, arg4363);
  if (ret7 == -1)
    return -1;
  const char *arg4365 = "VG";
  const char *arg4366_0 = "/dev/sda1";
  const char *const arg4366[] = {
    arg4366_0,
    NULL
  };
  int ret6;
  ret6 = guestfs_vgcreate (g, arg4365, (char **) arg4366);
  if (ret6 == -1)
    return -1;
  const char *arg4368 = "LV";
  const char *arg4369 = "VG";
  int ret5;
  ret5 = guestfs_lvcreate (g, arg4368, arg4369, 300);
  if (ret5 == -1)
    return -1;
  const char *arg4372 = "xfs";
  const char *arg4373 = "/dev/VG/LV";
  struct guestfs_mkfs_opts_argv optargs4374;
  optargs4374.bitmask = UINT64_C(0x0);
  int ret4;
  ret4 = guestfs_mkfs_opts_argv (g, arg4372, arg4373, &optargs4374);
  if (ret4 == -1)
    return -1;
  const char *arg4375 = "/dev/VG/LV";
  int ret3;
  ret3 = guestfs_lvresize (g, arg4375, 400);
  if (ret3 == -1)
    return -1;
  const char *arg4378 = "/dev/VG/LV";
  const char *arg4379 = "/";
  int ret2;
  ret2 = guestfs_mount (g, arg4378, arg4379);
  if (ret2 == -1)
    return -1;
  const char *arg4381 = "/";
  struct guestfs_xfs_growfs_argv optargs4382;
  optargs4382.datasec = 1;
  optargs4382.logsec = 0;
  optargs4382.rtsec = 0;
  optargs4382.bitmask = UINT64_C(0x7);
  int ret1;
  ret1 = guestfs_xfs_growfs_argv (g, arg4381, &optargs4382);
  if (ret1 == -1)
    return -1;
  const char *arg4383 = "/";
  CLEANUP_FREE_XFSINFO struct guestfs_xfsinfo *ret;
  ret = guestfs_xfs_info (g, arg4383);
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

  const char *features4385[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4385)) {
    skipped ("test_xfs_info_0", "group %s not available in daemon",
             features4385[0]);
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
  const char *arg4386 = "/dev/sda";
  const char *arg4387 = "mbr";
  int ret3;
  ret3 = guestfs_part_disk (g, arg4386, arg4387);
  if (ret3 == -1)
    return -1;
  const char *arg4389 = "xfs";
  const char *arg4390 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4391;
  optargs4391.bitmask = UINT64_C(0x0);
  int ret2;
  ret2 = guestfs_mkfs_opts_argv (g, arg4389, arg4390, &optargs4391);
  if (ret2 == -1)
    return -1;
  const char *arg4392 = "/dev/sda1";
  const char *arg4393 = "/";
  int ret1;
  ret1 = guestfs_mount (g, arg4392, arg4393);
  if (ret1 == -1)
    return -1;
  const char *arg4395 = "/";
  CLEANUP_FREE_XFSINFO struct guestfs_xfsinfo *ret;
  ret = guestfs_xfs_info (g, arg4395);
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

  const char *features4397[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4397)) {
    skipped ("test_xfs_repair_0", "group %s not available in daemon",
             features4397[0]);
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
  const char *arg4399 = "/dev/sda";
  const char *arg4400 = "mbr";
  int ret4398;
  ret4398 = guestfs_part_disk (g, arg4399, arg4400);
  if (ret4398 == -1)
    return -1;
  const char *arg4403 = "xfs";
  const char *arg4404 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4405;
  optargs4405.bitmask = UINT64_C(0x0);
  int ret4402;
  ret4402 = guestfs_mkfs_opts_argv (g, arg4403, arg4404, &optargs4405);
  if (ret4402 == -1)
    return -1;
  const char *arg4407 = "/dev/sda1";
  struct guestfs_xfs_repair_argv optargs4408;
  optargs4408.nomodify = 1;
  optargs4408.bitmask = UINT64_C(0x2);
  int ret4406;
  ret4406 = guestfs_xfs_repair_argv (g, arg4407, &optargs4408);
  if (ret4406 == -1)
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
  const char *arg4409 = "abc";
  const char *arg4410 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zegrep (g, arg4409, arg4410);
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
  const char *arg4412 = "abc";
  const char *arg4413 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zegrepi (g, arg4412, arg4413);
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
  const char *arg4416 = "/dev/sda1";
  struct guestfs_umount_opts_argv optargs4417;
  optargs4417.force = 0;
  optargs4417.lazyunmount = 0;
  optargs4417.bitmask = UINT64_C(0x3);
  int ret4415;
  ret4415 = guestfs_umount_opts_argv (g, arg4416, &optargs4417);
  if (ret4415 == -1)
    return -1;
  const char *arg4419 = "/dev/sda1";
  int ret4418;
  ret4418 = guestfs_zero (g, arg4419);
  if (ret4418 == -1)
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
  const char *arg4422 = "/dev/VG/LV";
  int ret4421;
  ret4421 = guestfs_zero_device (g, arg4422);
  if (ret4421 == -1)
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
  const char *arg4425 = "/";
  int ret4424;
  ret4424 = guestfs_zero_free_space (g, arg4425);
  if (ret4424 == -1)
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

  const char *features4427[] = { "zerofree", NULL };
  if (!guestfs_feature_available (g, (char **) features4427)) {
    skipped ("test_zerofree_0", "group %s not available in daemon",
             features4427[0]);
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
  const char *arg4429 = "/dev/sda";
  const char *arg4430 = "mbr";
  int ret4428;
  ret4428 = guestfs_part_disk (g, arg4429, arg4430);
  if (ret4428 == -1)
    return -1;
  const char *arg4433 = "ext3";
  const char *arg4434 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4435;
  optargs4435.bitmask = UINT64_C(0x0);
  int ret4432;
  ret4432 = guestfs_mkfs_opts_argv (g, arg4433, arg4434, &optargs4435);
  if (ret4432 == -1)
    return -1;
  const char *arg4437 = "/dev/sda1";
  const char *arg4438 = "/";
  int ret4436;
  ret4436 = guestfs_mount (g, arg4437, arg4438);
  if (ret4436 == -1)
    return -1;
  const char *arg4441 = "/new";
  const char *arg4442 = "test file";
  size_t arg4442_size = 9;
  int ret4440;
  ret4440 = guestfs_write (g, arg4441, arg4442, arg4442_size);
  if (ret4440 == -1)
    return -1;
  const char *arg4445 = "/dev/sda1";
  struct guestfs_umount_opts_argv optargs4446;
  optargs4446.force = 0;
  optargs4446.lazyunmount = 0;
  optargs4446.bitmask = UINT64_C(0x3);
  int ret4444;
  ret4444 = guestfs_umount_opts_argv (g, arg4445, &optargs4446);
  if (ret4444 == -1)
    return -1;
  const char *arg4448 = "/dev/sda1";
  int ret4447;
  ret4447 = guestfs_zerofree (g, arg4448);
  if (ret4447 == -1)
    return -1;
  const char *arg4451 = "/dev/sda1";
  const char *arg4452 = "/";
  int ret4450;
  ret4450 = guestfs_mount (g, arg4451, arg4452);
  if (ret4450 == -1)
    return -1;
  const char *arg4454 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4454);
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
  const char *arg4456 = "abc";
  const char *arg4457 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zfgrep (g, arg4456, arg4457);
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
  const char *arg4459 = "abc";
  const char *arg4460 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zfgrepi (g, arg4459, arg4460);
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
  const char *arg4462 = "abc";
  const char *arg4463 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zgrep (g, arg4462, arg4463);
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
  const char *arg4465 = "abc";
  const char *arg4466 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zgrepi (g, arg4465, arg4466);
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
