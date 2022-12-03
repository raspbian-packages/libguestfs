/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM THE FOLLOWING FILES:
 *          generator/tests_c_api.ml
 *          and from the code in the generator/ subdirectory.
 * ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
 *
 * Copyright (C) 2009-2020 Red Hat Inc.
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
  const char *arg1254 = "../test-data/blank-disks/blank-disk-1s.raw";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1254);
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
  const char *arg1256 = "../test-data/blank-disks/blank-disk-1s.qcow2";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1256);
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
  const char *arg1258 = "../test-data/blank-disks/blank-disk-1K.raw";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1258);
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
  const char *arg1260 = "../test-data/blank-disks/blank-disk-1K.qcow2";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1260);
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
  const char *arg1262 = "../test-data/blank-disks/blank-disk-1M.raw";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1262);
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
  const char *arg1264 = "../test-data/blank-disks/blank-disk-1M.qcow2";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1264);
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
  const char *arg1266 = "../test-data/blank-disks/blank-disk-with-backing.qcow2";
  CLEANUP_FREE char *ret;
  ret = guestfs_disk_format (g, arg1266);
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
  const char *arg1268 = "../test-data/blank-disks/blank-disk-1s.raw";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1268);
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
  const char *arg1270 = "../test-data/blank-disks/blank-disk-1s.qcow2";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1270);
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
  const char *arg1272 = "../test-data/blank-disks/blank-disk-1K.raw";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1272);
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
  const char *arg1274 = "../test-data/blank-disks/blank-disk-1K.qcow2";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1274);
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
  const char *arg1276 = "../test-data/blank-disks/blank-disk-1M.raw";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1276);
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
  const char *arg1278 = "../test-data/blank-disks/blank-disk-1M.qcow2";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1278);
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
  const char *arg1280 = "../test-data/blank-disks/blank-disk-with-backing.qcow2";
  int ret;
  ret = guestfs_disk_has_backing_file (g, arg1280);
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
  const char *arg1282 = "../test-data/blank-disks/blank-disk-1s.raw";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1282);
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
  const char *arg1284 = "../test-data/blank-disks/blank-disk-1s.qcow2";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1284);
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
  const char *arg1286 = "../test-data/blank-disks/blank-disk-1K.raw";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1286);
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
  const char *arg1288 = "../test-data/blank-disks/blank-disk-1K.qcow2";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1288);
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
  const char *arg1290 = "../test-data/blank-disks/blank-disk-1M.raw";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1290);
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
  const char *arg1292 = "../test-data/blank-disks/blank-disk-1M.qcow2";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1292);
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
  const char *arg1294 = "../test-data/blank-disks/blank-disk-with-backing.qcow2";
  int64_t ret;
  ret = guestfs_disk_virtual_size (g, arg1294);
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
  CLEANUP_FREE char *ret1296;
  ret1296 = guestfs_dmesg (g);
  if (ret1296 == NULL)
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
  const char *arg1299 = "/download";
  int ret1298;
  ret1298 = guestfs_mkdir (g, arg1299);
  if (ret1298 == -1)
    return -1;
  CLEANUP_FREE char *arg1302 = substitute_srcdir ("$srcdir/../COPYING.LIB");
  const char *arg1303 = "/download/COPYING.LIB";
  int ret1301;
  ret1301 = guestfs_upload (g, arg1302, arg1303);
  if (ret1301 == -1)
    return -1;
  const char *arg1306 = "/download/COPYING.LIB";
  int ret1305;
  ret1305 = guestfs_download (g, arg1306, "testdownload.tmp");
  if (ret1305 == -1)
    return -1;
  CLEANUP_FREE char *arg1310 = substitute_srcdir ("testdownload.tmp");
  const char *arg1311 = "/download/upload";
  int ret1309;
  ret1309 = guestfs_upload (g, arg1310, arg1311);
  if (ret1309 == -1)
    return -1;
  const char *arg1313 = "md5";
  const char *arg1314 = "/download/upload";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg1313, arg1314);
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
  const char *arg1317 = "/download_offset";
  int ret1316;
  ret1316 = guestfs_mkdir (g, arg1317);
  if (ret1316 == -1)
    return -1;
  CLEANUP_FREE char *arg1320 = substitute_srcdir ("$srcdir/../COPYING.LIB");
  const char *arg1321 = "/download_offset/COPYING.LIB";
  int ret1319;
  ret1319 = guestfs_upload (g, arg1320, arg1321);
  if (ret1319 == -1)
    return -1;
  const char *arg1324 = "/download_offset/COPYING.LIB";
  int ret1323;
  ret1323 = guestfs_download_offset (g, arg1324, "testdownload.tmp", 100, 26430);
  if (ret1323 == -1)
    return -1;
  CLEANUP_FREE char *arg1330 = substitute_srcdir ("testdownload.tmp");
  const char *arg1331 = "/download_offset/COPYING.LIB";
  int ret1329;
  ret1329 = guestfs_upload_offset (g, arg1330, arg1331, 100);
  if (ret1329 == -1)
    return -1;
  const char *arg1334 = "md5";
  const char *arg1335 = "/download_offset/COPYING.LIB";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg1334, arg1335);
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
  int ret1337;
  ret1337 = guestfs_drop_caches (g, 3);
  if (ret1337 == -1)
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
  const char *arg1340 = "/directory";
  int64_t ret;
  ret = guestfs_du (g, arg1340);
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
  const char *arg1342_0 = "This";
  const char *arg1342_1 = "is";
  const char *arg1342_2 = "a";
  const char *arg1342_3 = "test";
  const char *const arg1342[] = {
    arg1342_0,
    arg1342_1,
    arg1342_2,
    arg1342_3,
    NULL
  };
  CLEANUP_FREE char *ret;
  ret = guestfs_echo_daemon (g, (char **) arg1342);
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
  const char *const arg1344[1] = { NULL };
  CLEANUP_FREE char *ret;
  ret = guestfs_echo_daemon (g, (char **) arg1344);
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
  const char *arg1346 = "abc";
  const char *arg1347 = "/test-grep.txt";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_egrep (g, arg1346, arg1347);
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
  const char *arg1349 = "abc";
  const char *arg1350 = "/test-grep.txt";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_egrepi (g, arg1349, arg1350);
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
  const char *arg1353 = "/equal";
  int ret1352;
  ret1352 = guestfs_mkdir (g, arg1353);
  if (ret1352 == -1)
    return -1;
  const char *arg1356 = "/equal/file1";
  const char *arg1357 = "contents of a file";
  size_t arg1357_size = 18;
  int ret1355;
  ret1355 = guestfs_write (g, arg1356, arg1357, arg1357_size);
  if (ret1355 == -1)
    return -1;
  const char *arg1360 = "/equal/file1";
  const char *arg1361 = "/equal/file2";
  int ret1359;
  ret1359 = guestfs_cp (g, arg1360, arg1361);
  if (ret1359 == -1)
    return -1;
  const char *arg1363 = "/equal/file1";
  const char *arg1364 = "/equal/file2";
  int ret;
  ret = guestfs_equal (g, arg1363, arg1364);
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
  const char *arg1367 = "/equal2";
  int ret1366;
  ret1366 = guestfs_mkdir (g, arg1367);
  if (ret1366 == -1)
    return -1;
  const char *arg1370 = "/equal2/file1";
  const char *arg1371 = "contents of a file";
  size_t arg1371_size = 18;
  int ret1369;
  ret1369 = guestfs_write (g, arg1370, arg1371, arg1371_size);
  if (ret1369 == -1)
    return -1;
  const char *arg1374 = "/equal2/file2";
  const char *arg1375 = "contents of another file";
  size_t arg1375_size = 24;
  int ret1373;
  ret1373 = guestfs_write (g, arg1374, arg1375, arg1375_size);
  if (ret1373 == -1)
    return -1;
  const char *arg1377 = "/equal2/file1";
  const char *arg1378 = "/equal2/file2";
  int ret;
  ret = guestfs_equal (g, arg1377, arg1378);
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
  const char *arg1381 = "/equal3";
  int ret1380;
  ret1380 = guestfs_mkdir (g, arg1381);
  if (ret1380 == -1)
    return -1;
  const char *arg1384 = "/equal3/file1";
  const char *arg1385 = "/equal3/file2";
  int ret1383;
  guestfs_push_error_handler (g, NULL, NULL);
  ret1383 = guestfs_equal (g, arg1384, arg1385);
  guestfs_pop_error_handler (g);
  if (ret1383 != -1)
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
  const char *arg1387 = "/empty";
  int ret;
  ret = guestfs_exists (g, arg1387);
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
  const char *arg1389 = "/directory";
  int ret;
  ret = guestfs_exists (g, arg1389);
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
  const char *arg1391 = "/fallocate";
  int ret1;
  ret1 = guestfs_fallocate (g, arg1391, 1000000);
  if (ret1 == -1)
    return -1;
  const char *arg1394 = "/fallocate";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg1394);
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
  const char *arg1396 = "/fallocate64";
  int ret1;
  ret1 = guestfs_fallocate64 (g, arg1396, 1000000);
  if (ret1 == -1)
    return -1;
  const char *arg1399 = "/fallocate64";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg1399);
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
  const char *const arg1401[1] = { NULL };
  int ret;
  ret = guestfs_feature_available (g, (char **) arg1401);
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
  const char *arg1403 = "abc";
  const char *arg1404 = "/test-grep.txt";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_fgrep (g, arg1403, arg1404);
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
  const char *arg1406 = "abc";
  const char *arg1407 = "/test-grep.txt";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_fgrepi (g, arg1406, arg1407);
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
  const char *arg1409 = "/empty";
  CLEANUP_FREE char *ret;
  ret = guestfs_file (g, arg1409);
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
  const char *arg1411 = "/known-1";
  CLEANUP_FREE char *ret;
  ret = guestfs_file (g, arg1411);
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
  const char *arg1414 = "/notexists";
  CLEANUP_FREE char *ret1413;
  guestfs_push_error_handler (g, NULL, NULL);
  ret1413 = guestfs_file (g, arg1414);
  guestfs_pop_error_handler (g);
  if (ret1413 != NULL)
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
  const char *arg1416 = "/abssymlink";
  CLEANUP_FREE char *ret;
  ret = guestfs_file (g, arg1416);
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
  const char *arg1418 = "/directory";
  CLEANUP_FREE char *ret;
  ret = guestfs_file (g, arg1418);
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
  const char *arg1420 = "/bin-aarch64-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1420);
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
  const char *arg1422 = "/bin-armv7-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1422);
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
  const char *arg1424 = "/bin-i586-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1424);
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
  const char *arg1426 = "/bin-ppc64-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1426);
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
  const char *arg1428 = "/bin-ppc64le-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1428);
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
  const char *arg1430 = "/bin-riscv64-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1430);
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
  const char *arg1432 = "/bin-s390x-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1432);
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
  const char *arg1434 = "/bin-sparc-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1434);
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
  const char *arg1436 = "/bin-win32.exe";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1436);
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
  const char *arg1438 = "/bin-win64.exe";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1438);
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
  const char *arg1440 = "/bin-x86_64-dynamic";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1440);
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
  const char *arg1442 = "/lib-aarch64.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1442);
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
  const char *arg1444 = "/lib-armv7.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1444);
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
  const char *arg1446 = "/lib-i586.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1446);
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
  const char *arg1448 = "/lib-ppc64.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1448);
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
  const char *arg1450 = "/lib-ppc64le.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1450);
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
  const char *arg1452 = "/lib-riscv64.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1452);
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
  const char *arg1454 = "/lib-s390x.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1454);
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
  const char *arg1456 = "/lib-sparc.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1456);
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
  const char *arg1458 = "/lib-win32.dll";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1458);
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
  const char *arg1460 = "/lib-win64.dll";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1460);
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
  const char *arg1462 = "/lib-x86_64.so";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1462);
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
  const char *arg1464 = "/initrd-x86_64.img";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1464);
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
  const char *arg1466 = "/initrd-x86_64.img.gz";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1466);
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
  const char *arg1468 = "/bin-x86_64-dynamic.gz";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1468);
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
  const char *arg1470 = "/lib-i586.so.xz";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1470);
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
  const char *arg1472 = "/lib-i586.so.zst";
  CLEANUP_FREE char *ret;
  ret = guestfs_file_architecture (g, arg1472);
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
  const char *arg1474 = "/filesize";
  const char *arg1475 = "hello, world";
  size_t arg1475_size = 12;
  int ret1;
  ret1 = guestfs_write (g, arg1474, arg1475, arg1475_size);
  if (ret1 == -1)
    return -1;
  const char *arg1477 = "/filesize";
  int64_t ret;
  ret = guestfs_filesize (g, arg1477);
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
  const char *arg1481 = "/fill";
  int ret1;
  ret1 = guestfs_fill (g, 99, 10, arg1481);
  if (ret1 == -1)
    return -1;
  const char *arg1483 = "/fill";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_read_file (g, arg1483, &size);
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
  const char *arg1485 = "abcdefghijklmnopqrstuvwxyz";
  const char *arg1487 = "/fill_pattern";
  int ret1;
  ret1 = guestfs_fill_pattern (g, arg1485, 28, arg1487);
  if (ret1 == -1)
    return -1;
  const char *arg1489 = "/fill_pattern";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_read_file (g, arg1489, &size);
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
  const char *arg1491 = "/";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_find (g, arg1491);
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
  const char *arg1493 = "/a";
  int ret3;
  ret3 = guestfs_touch (g, arg1493);
  if (ret3 == -1)
    return -1;
  const char *arg1495 = "/b";
  int ret2;
  ret2 = guestfs_mkdir (g, arg1495);
  if (ret2 == -1)
    return -1;
  const char *arg1497 = "/b/c";
  int ret1;
  ret1 = guestfs_touch (g, arg1497);
  if (ret1 == -1)
    return -1;
  const char *arg1499 = "/";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_find (g, arg1499);
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
  const char *arg1501 = "/find/b/c";
  int ret2;
  ret2 = guestfs_mkdir_p (g, arg1501);
  if (ret2 == -1)
    return -1;
  const char *arg1503 = "/find/b/c/d";
  int ret1;
  ret1 = guestfs_touch (g, arg1503);
  if (ret1 == -1)
    return -1;
  const char *arg1505 = "/find/b/";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_find (g, arg1505);
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
  const char *arg1507 = "/dev/sda1";
  struct guestfs_umount_opts_argv optargs1508;
  optargs1508.force = 0;
  optargs1508.lazyunmount = 0;
  optargs1508.bitmask = UINT64_C(0x3);
  int ret1;
  ret1 = guestfs_umount_opts_argv (g, arg1507, &optargs1508);
  if (ret1 == -1)
    return -1;
  const char *arg1509 = "ext2";
  const char *arg1510 = "/dev/sda1";
  int ret;
  ret = guestfs_fsck (g, arg1509, arg1510);
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
  const char *arg1512 = "/dev/sda1";
  struct guestfs_umount_opts_argv optargs1513;
  optargs1513.force = 0;
  optargs1513.lazyunmount = 0;
  optargs1513.bitmask = UINT64_C(0x3);
  int ret2;
  ret2 = guestfs_umount_opts_argv (g, arg1512, &optargs1513);
  if (ret2 == -1)
    return -1;
  const char *arg1514 = "/dev/sda1";
  int ret1;
  ret1 = guestfs_zero (g, arg1514);
  if (ret1 == -1)
    return -1;
  const char *arg1516 = "ext2";
  const char *arg1517 = "/dev/sda1";
  int ret;
  ret = guestfs_fsck (g, arg1516, arg1517);
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
  CLEANUP_FREE char *ret1519;
  ret1519 = guestfs_get_attach_method (g);
  if (ret1519 == NULL)
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
  CLEANUP_FREE char *ret1522;
  ret1522 = guestfs_get_backend (g);
  if (ret1522 == NULL)
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
  CLEANUP_FREE_STRING_LIST char **ret1524;
  ret1524 = guestfs_get_backend_settings (g);
  if (ret1524 == NULL)
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
  const char *arg1527 = "/e2attrs1";
  int ret1526;
  ret1526 = guestfs_touch (g, arg1527);
  if (ret1526 == -1)
    return -1;
  const char *arg1529 = "/e2attrs1";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2attrs (g, arg1529);
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
  const char *arg1532 = "/e2attrs2";
  int ret1531;
  ret1531 = guestfs_touch (g, arg1532);
  if (ret1531 == -1)
    return -1;
  const char *arg1535 = "/e2attrs2";
  const char *arg1536 = "is";
  struct guestfs_set_e2attrs_argv optargs1537;
  optargs1537.clear = 0;
  optargs1537.bitmask = UINT64_C(0x1);
  int ret1534;
  ret1534 = guestfs_set_e2attrs_argv (g, arg1535, arg1536, &optargs1537);
  if (ret1534 == -1)
    return -1;
  const char *arg1538 = "/e2attrs2";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2attrs (g, arg1538);
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
  const char *arg1541 = "/e2attrs3";
  int ret1540;
  ret1540 = guestfs_touch (g, arg1541);
  if (ret1540 == -1)
    return -1;
  const char *arg1544 = "/e2attrs3";
  const char *arg1545 = "is";
  struct guestfs_set_e2attrs_argv optargs1546;
  optargs1546.clear = 0;
  optargs1546.bitmask = UINT64_C(0x1);
  int ret1543;
  ret1543 = guestfs_set_e2attrs_argv (g, arg1544, arg1545, &optargs1546);
  if (ret1543 == -1)
    return -1;
  const char *arg1548 = "/e2attrs3";
  const char *arg1549 = "i";
  struct guestfs_set_e2attrs_argv optargs1550;
  optargs1550.clear = 1;
  optargs1550.bitmask = UINT64_C(0x1);
  int ret1547;
  ret1547 = guestfs_set_e2attrs_argv (g, arg1548, arg1549, &optargs1550);
  if (ret1547 == -1)
    return -1;
  const char *arg1551 = "/e2attrs3";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2attrs (g, arg1551);
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
  const char *arg1554 = "/e2attrs4";
  int ret1553;
  ret1553 = guestfs_touch (g, arg1554);
  if (ret1553 == -1)
    return -1;
  const char *arg1557 = "/e2attrs4";
  const char *arg1558 = "adst";
  struct guestfs_set_e2attrs_argv optargs1559;
  optargs1559.clear = 0;
  optargs1559.bitmask = UINT64_C(0x1);
  int ret1556;
  ret1556 = guestfs_set_e2attrs_argv (g, arg1557, arg1558, &optargs1559);
  if (ret1556 == -1)
    return -1;
  const char *arg1561 = "/e2attrs4";
  const char *arg1562 = "iS";
  struct guestfs_set_e2attrs_argv optargs1563;
  optargs1563.clear = 0;
  optargs1563.bitmask = UINT64_C(0x1);
  int ret1560;
  ret1560 = guestfs_set_e2attrs_argv (g, arg1561, arg1562, &optargs1563);
  if (ret1560 == -1)
    return -1;
  const char *arg1565 = "/e2attrs4";
  const char *arg1566 = "i";
  struct guestfs_set_e2attrs_argv optargs1567;
  optargs1567.clear = 1;
  optargs1567.bitmask = UINT64_C(0x1);
  int ret1564;
  ret1564 = guestfs_set_e2attrs_argv (g, arg1565, arg1566, &optargs1567);
  if (ret1564 == -1)
    return -1;
  const char *arg1569 = "/e2attrs4";
  const char *arg1570 = "ad";
  struct guestfs_set_e2attrs_argv optargs1571;
  optargs1571.clear = 1;
  optargs1571.bitmask = UINT64_C(0x1);
  int ret1568;
  ret1568 = guestfs_set_e2attrs_argv (g, arg1569, arg1570, &optargs1571);
  if (ret1568 == -1)
    return -1;
  const char *arg1573 = "/e2attrs4";
  const char *arg1574 = "";
  struct guestfs_set_e2attrs_argv optargs1575;
  optargs1575.clear = 0;
  optargs1575.bitmask = UINT64_C(0x1);
  int ret1572;
  ret1572 = guestfs_set_e2attrs_argv (g, arg1573, arg1574, &optargs1575);
  if (ret1572 == -1)
    return -1;
  const char *arg1577 = "/e2attrs4";
  const char *arg1578 = "";
  struct guestfs_set_e2attrs_argv optargs1579;
  optargs1579.clear = 1;
  optargs1579.bitmask = UINT64_C(0x1);
  int ret1576;
  ret1576 = guestfs_set_e2attrs_argv (g, arg1577, arg1578, &optargs1579);
  if (ret1576 == -1)
    return -1;
  const char *arg1580 = "/e2attrs4";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2attrs (g, arg1580);
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
  const char *arg1583 = "/e2attrs5";
  int ret1582;
  ret1582 = guestfs_touch (g, arg1583);
  if (ret1582 == -1)
    return -1;
  const char *arg1586 = "/e2attrs5";
  const char *arg1587 = "R";
  struct guestfs_set_e2attrs_argv optargs1588;
  optargs1588.clear = 0;
  optargs1588.bitmask = UINT64_C(0x1);
  int ret1585;
  guestfs_push_error_handler (g, NULL, NULL);
  ret1585 = guestfs_set_e2attrs_argv (g, arg1586, arg1587, &optargs1588);
  guestfs_pop_error_handler (g);
  if (ret1585 != -1)
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
  const char *arg1590 = "/e2attrs6";
  int ret1589;
  ret1589 = guestfs_touch (g, arg1590);
  if (ret1589 == -1)
    return -1;
  const char *arg1593 = "/e2attrs6";
  const char *arg1594 = "v";
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
  const char *arg1597 = "/e2attrs7";
  int ret1596;
  ret1596 = guestfs_touch (g, arg1597);
  if (ret1596 == -1)
    return -1;
  const char *arg1600 = "/e2attrs7";
  const char *arg1601 = "aa";
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
  const char *arg1604 = "/e2attrs8";
  int ret1603;
  ret1603 = guestfs_touch (g, arg1604);
  if (ret1603 == -1)
    return -1;
  const char *arg1607 = "/e2attrs8";
  const char *arg1608 = "BabcdB";
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
  const char *arg1610 = "/e2generation";
  int ret2;
  ret2 = guestfs_touch (g, arg1610);
  if (ret2 == -1)
    return -1;
  const char *arg1612 = "/e2generation";
  int ret1;
  ret1 = guestfs_set_e2generation (g, arg1612, 123456);
  if (ret1 == -1)
    return -1;
  const char *arg1615 = "/e2generation";
  int64_t ret;
  ret = guestfs_get_e2generation (g, arg1615);
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
  const char *arg1619 = "/dev/sdc";
  int ret1617;
  ret1617 = guestfs_mke2journal (g, 1024, arg1619);
  if (ret1617 == -1)
    return -1;
  const char *arg1622 = "/dev/sdc";
  CLEANUP_FREE char *ret1621;
  ret1621 = guestfs_get_e2uuid (g, arg1622);
  if (ret1621 == NULL)
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
  CLEANUP_FREE char *ret1624;
  ret1624 = guestfs_get_hv (g);
  if (ret1624 == NULL)
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
  const char *ret1626;
  ret1626 = guestfs_get_identifier (g);
  if (ret1626 == NULL)
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
  const char *ret1629;
  ret1629 = guestfs_get_path (g);
  if (ret1629 == NULL)
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
  const char *ret1631;
  ret1631 = guestfs_get_program (g);
  if (ret1631 == NULL)
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
  const char *ret1633;
  ret1633 = guestfs_get_qemu (g);
  if (ret1633 == NULL)
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
  const char *arg1636 = "/glob_expand/b/c";
  int ret3;
  ret3 = guestfs_mkdir_p (g, arg1636);
  if (ret3 == -1)
    return -1;
  const char *arg1638 = "/glob_expand/b/c/d";
  int ret2;
  ret2 = guestfs_touch (g, arg1638);
  if (ret2 == -1)
    return -1;
  const char *arg1640 = "/glob_expand/b/c/e";
  int ret1;
  ret1 = guestfs_touch (g, arg1640);
  if (ret1 == -1)
    return -1;
  const char *arg1642 = "/glob_expand/b/c/*";
  struct guestfs_glob_expand_opts_argv optargs1643;
  optargs1643.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_glob_expand_opts_argv (g, arg1642, &optargs1643);
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
  const char *arg1644 = "/glob_expand2/b/c";
  int ret3;
  ret3 = guestfs_mkdir_p (g, arg1644);
  if (ret3 == -1)
    return -1;
  const char *arg1646 = "/glob_expand2/b/c/d";
  int ret2;
  ret2 = guestfs_touch (g, arg1646);
  if (ret2 == -1)
    return -1;
  const char *arg1648 = "/glob_expand2/b/c/e";
  int ret1;
  ret1 = guestfs_touch (g, arg1648);
  if (ret1 == -1)
    return -1;
  const char *arg1650 = "/glob_expand2/*/c/*";
  struct guestfs_glob_expand_opts_argv optargs1651;
  optargs1651.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_glob_expand_opts_argv (g, arg1650, &optargs1651);
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
  const char *arg1652 = "/glob_expand3/b/c";
  int ret3;
  ret3 = guestfs_mkdir_p (g, arg1652);
  if (ret3 == -1)
    return -1;
  const char *arg1654 = "/glob_expand3/b/c/d";
  int ret2;
  ret2 = guestfs_touch (g, arg1654);
  if (ret2 == -1)
    return -1;
  const char *arg1656 = "/glob_expand3/b/c/e";
  int ret1;
  ret1 = guestfs_touch (g, arg1656);
  if (ret1 == -1)
    return -1;
  const char *arg1658 = "/glob_expand3/*/x/*";
  struct guestfs_glob_expand_opts_argv optargs1659;
  optargs1659.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_glob_expand_opts_argv (g, arg1658, &optargs1659);
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
  const char *arg1660 = "/glob_expand4/b/c";
  int ret3;
  ret3 = guestfs_mkdir_p (g, arg1660);
  if (ret3 == -1)
    return -1;
  const char *arg1662 = "/glob_expand4/b1";
  int ret2;
  ret2 = guestfs_touch (g, arg1662);
  if (ret2 == -1)
    return -1;
  const char *arg1664 = "/glob_expand4/c1";
  int ret1;
  ret1 = guestfs_touch (g, arg1664);
  if (ret1 == -1)
    return -1;
  const char *arg1666 = "/glob_expand4/b*";
  struct guestfs_glob_expand_opts_argv optargs1667;
  optargs1667.directoryslash = 0;
  optargs1667.bitmask = UINT64_C(0x1);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_glob_expand_opts_argv (g, arg1666, &optargs1667);
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
  const char *arg1668 = "abc";
  const char *arg1669 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1670;
  optargs1670.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1668, arg1669, &optargs1670);
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
  const char *arg1671 = "nomatch";
  const char *arg1672 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1673;
  optargs1673.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1671, arg1672, &optargs1673);
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
  const char *arg1674 = "nomatch";
  const char *arg1675 = "/abssymlink";
  struct guestfs_grep_opts_argv optargs1676;
  optargs1676.bitmask = UINT64_C(0x0);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1674, arg1675, &optargs1676);
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
  const char *arg1677 = "abc";
  const char *arg1678 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1679;
  optargs1679.extended = 1;
  optargs1679.bitmask = UINT64_C(0x1);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1677, arg1678, &optargs1679);
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
  const char *arg1680 = "abc";
  const char *arg1681 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1682;
  optargs1682.fixed = 1;
  optargs1682.bitmask = UINT64_C(0x2);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1680, arg1681, &optargs1682);
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
  const char *arg1683 = "abc";
  const char *arg1684 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1685;
  optargs1685.insensitive = 1;
  optargs1685.bitmask = UINT64_C(0x4);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1683, arg1684, &optargs1685);
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
  const char *arg1686 = "abc";
  const char *arg1687 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1688;
  optargs1688.extended = 1;
  optargs1688.insensitive = 1;
  optargs1688.bitmask = UINT64_C(0x5);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1686, arg1687, &optargs1688);
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
  const char *arg1689 = "abc";
  const char *arg1690 = "/test-grep.txt";
  struct guestfs_grep_opts_argv optargs1691;
  optargs1691.fixed = 1;
  optargs1691.insensitive = 1;
  optargs1691.bitmask = UINT64_C(0x6);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1689, arg1690, &optargs1691);
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
  const char *arg1692 = "abc";
  const char *arg1693 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1694;
  optargs1694.compressed = 1;
  optargs1694.bitmask = UINT64_C(0x8);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1692, arg1693, &optargs1694);
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
  const char *arg1695 = "abc";
  const char *arg1696 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1697;
  optargs1697.extended = 1;
  optargs1697.compressed = 1;
  optargs1697.bitmask = UINT64_C(0x9);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1695, arg1696, &optargs1697);
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
  const char *arg1698 = "abc";
  const char *arg1699 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1700;
  optargs1700.fixed = 1;
  optargs1700.compressed = 1;
  optargs1700.bitmask = UINT64_C(0xa);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1698, arg1699, &optargs1700);
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
  const char *arg1701 = "abc";
  const char *arg1702 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1703;
  optargs1703.insensitive = 1;
  optargs1703.compressed = 1;
  optargs1703.bitmask = UINT64_C(0xc);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1701, arg1702, &optargs1703);
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
  const char *arg1704 = "abc";
  const char *arg1705 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1706;
  optargs1706.extended = 1;
  optargs1706.insensitive = 1;
  optargs1706.compressed = 1;
  optargs1706.bitmask = UINT64_C(0xd);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1704, arg1705, &optargs1706);
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
  const char *arg1707 = "abc";
  const char *arg1708 = "/test-grep.txt.gz";
  struct guestfs_grep_opts_argv optargs1709;
  optargs1709.fixed = 1;
  optargs1709.insensitive = 1;
  optargs1709.compressed = 1;
  optargs1709.bitmask = UINT64_C(0xe);
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grep_opts_argv (g, arg1707, arg1708, &optargs1709);
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
  const char *arg1710 = "abc";
  const char *arg1711 = "/test-grep.txt";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_grepi (g, arg1710, arg1711);
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

  const char *features1713[] = { "grub", NULL };
  if (!guestfs_feature_available (g, (char **) features1713)) {
    skipped ("test_grub_install_0", "group %s not available in daemon",
             features1713[0]);
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
  const char *arg1715 = "/boot/grub";
  int ret1714;
  ret1714 = guestfs_mkdir_p (g, arg1715);
  if (ret1714 == -1)
    return -1;
  const char *arg1718 = "/boot/grub/device.map";
  const char *arg1719 = "(hd0) /dev/sda";
  size_t arg1719_size = 14;
  int ret1717;
  ret1717 = guestfs_write (g, arg1718, arg1719, arg1719_size);
  if (ret1717 == -1)
    return -1;
  const char *arg1722 = "/";
  const char *arg1723 = "/dev/sda";
  int ret1721;
  ret1721 = guestfs_grub_install (g, arg1722, arg1723);
  if (ret1721 == -1)
    return -1;
  const char *arg1725 = "/boot";
  struct guestfs_is_dir_opts_argv optargs1726;
  optargs1726.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg1725, &optargs1726);
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
  const char *arg1727 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_head (g, arg1727);
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
  const char *arg1729 = "/abssymlink";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_head (g, arg1729);
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
  const char *arg1732 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_head_n (g, 3, arg1732);
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
  const char *arg1735 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_head_n (g, -9997, arg1735);
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
  const char *arg1738 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_head_n (g, 0, arg1738);
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
  const char *arg1740 = "/known-4";
  CLEANUP_FREE char *ret;
  ret = guestfs_hexdump (g, arg1740);
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
  const char *arg1743 = "/100krandom";
  CLEANUP_FREE char *ret1742;
  ret1742 = guestfs_hexdump (g, arg1743);
  if (ret1742 == NULL)
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
  const char *arg1746 = "/abssymlink";
  CLEANUP_FREE char *ret1745;
  ret1745 = guestfs_hexdump (g, arg1746);
  if (ret1745 == NULL)
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

  const char *features1748[] = { "hivex", NULL };
  if (!guestfs_feature_available (g, (char **) features1748)) {
    skipped ("test_hivex_commit_0", "group %s not available in daemon",
             features1748[0]);
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
  CLEANUP_FREE char *arg1750 = substitute_srcdir ("$srcdir/../test-data/files/minimal");
  const char *arg1751 = "/hivex_commit1";
  int ret1749;
  ret1749 = guestfs_upload (g, arg1750, arg1751);
  if (ret1749 == -1)
    return -1;
  const char *arg1754 = "/hivex_commit1";
  struct guestfs_hivex_open_argv optargs1755;
  optargs1755.write = 1;
  optargs1755.bitmask = UINT64_C(0x4);
  int ret1753;
  ret1753 = guestfs_hivex_open_argv (g, arg1754, &optargs1755);
  if (ret1753 == -1)
    return -1;
  int ret1756;
  ret1756 = guestfs_hivex_commit (g, NULL);
  if (ret1756 == -1)
    return -1;
  return 0;
}

static int
test_hivex_commit_0_cleanup (guestfs_h *g)
{
  int ret1759;
  ret1759 = guestfs_hivex_close (g);
  if (ret1759 == -1)
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

  const char *features1761[] = { "hivex", NULL };
  if (!guestfs_feature_available (g, (char **) features1761)) {
    skipped ("test_hivex_commit_1", "group %s not available in daemon",
             features1761[0]);
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
  CLEANUP_FREE char *arg1763 = substitute_srcdir ("$srcdir/../test-data/files/minimal");
  const char *arg1764 = "/hivex_commit2";
  int ret1762;
  ret1762 = guestfs_upload (g, arg1763, arg1764);
  if (ret1762 == -1)
    return -1;
  const char *arg1767 = "/hivex_commit2";
  struct guestfs_hivex_open_argv optargs1768;
  optargs1768.write = 1;
  optargs1768.bitmask = UINT64_C(0x4);
  int ret1766;
  ret1766 = guestfs_hivex_open_argv (g, arg1767, &optargs1768);
  if (ret1766 == -1)
    return -1;
  const char *arg1770 = "/hivex_commit2_copy";
  int ret1769;
  ret1769 = guestfs_hivex_commit (g, arg1770);
  if (ret1769 == -1)
    return -1;
  const char *arg1772 = "/hivex_commit2_copy";
  struct guestfs_is_file_opts_argv optargs1773;
  optargs1773.followsymlinks = 0;
  optargs1773.bitmask = UINT64_C(0x1);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg1772, &optargs1773);
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
  int ret1774;
  ret1774 = guestfs_hivex_close (g);
  if (ret1774 == -1)
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

  const char *features1776[] = { "hivex", NULL };
  if (!guestfs_feature_available (g, (char **) features1776)) {
    skipped ("test_hivex_open_0", "group %s not available in daemon",
             features1776[0]);
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
  CLEANUP_FREE char *arg1778 = substitute_srcdir ("$srcdir/../test-data/files/minimal");
  const char *arg1779 = "/hivex_open";
  int ret1777;
  ret1777 = guestfs_upload (g, arg1778, arg1779);
  if (ret1777 == -1)
    return -1;
  const char *arg1782 = "/hivex_open";
  struct guestfs_hivex_open_argv optargs1783;
  optargs1783.write = 0;
  optargs1783.bitmask = UINT64_C(0x4);
  int ret1781;
  ret1781 = guestfs_hivex_open_argv (g, arg1782, &optargs1783);
  if (ret1781 == -1)
    return -1;
  int64_t ret1784;
  ret1784 = guestfs_hivex_root (g);
  if (ret1784 == -1)
    return -1;
  CLEANUP_FREE char *ret1786;
  ret1786 = guestfs_hivex_node_name (g, 4128);
  if (ret1786 == NULL)
      return -1;
  CLEANUP_FREE_HIVEX_NODE_LIST struct guestfs_hivex_node_list *ret1789;
  ret1789 = guestfs_hivex_node_children (g, 4128);
  if (ret1789 == NULL)
      return -1;
  CLEANUP_FREE_HIVEX_VALUE_LIST struct guestfs_hivex_value_list *ret1792;
  ret1792 = guestfs_hivex_node_values (g, 4128);
  if (ret1792 == NULL)
      return -1;
  return 0;
}

static int
test_hivex_open_0_cleanup (guestfs_h *g)
{
  int ret1795;
  ret1795 = guestfs_hivex_close (g);
  if (ret1795 == -1)
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
  const char *arg1797 = "/initrd";
  const char *arg1798 = "known-4";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_initrd_cat (g, arg1797, arg1798, &size);
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
  const char *arg1800 = "/initrd";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_initrd_list (g, arg1800);
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

  const char *features1802[] = { "inotify", NULL };
  if (!guestfs_feature_available (g, (char **) features1802)) {
    skipped ("test_inotify_add_watch_0", "group %s not available in daemon",
             features1802[0]);
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
  const char *arg1803 = "/inotify_add_watch";
  int ret5;
  ret5 = guestfs_mkdir (g, arg1803);
  if (ret5 == -1)
    return -1;
  int ret4;
  ret4 = guestfs_inotify_init (g, 0);
  if (ret4 == -1)
    return -1;
  const char *arg1807 = "/inotify_add_watch";
  int64_t ret3;
  ret3 = guestfs_inotify_add_watch (g, arg1807, 4095);
  if (ret3 == -1)
    return -1;
  const char *arg1810 = "/inotify_add_watch/a";
  int ret2;
  ret2 = guestfs_touch (g, arg1810);
  if (ret2 == -1)
    return -1;
  const char *arg1812 = "/inotify_add_watch/b";
  int ret1;
  ret1 = guestfs_touch (g, arg1812);
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

  const char *features1815[] = { "inotify", NULL };
  if (!guestfs_feature_available (g, (char **) features1815)) {
    skipped ("test_inotify_init_0", "group %s not available in daemon",
             features1815[0]);
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
  int ret1816;
  ret1816 = guestfs_inotify_init (g, 0);
  if (ret1816 == -1)
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
  const char *arg1820 = "/internal_write";
  const char *arg1821 = "new file contents";
  size_t arg1821_size = 17;
  int ret1819;
  ret1819 = guestfs_internal_write (g, arg1820, arg1821, arg1821_size);
  if (ret1819 == -1)
    return -1;
  const char *arg1823 = "/internal_write";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1823);
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
  const char *arg1826 = "/internal_write2";
  const char *arg1827 = "\nnew file contents\n";
  size_t arg1827_size = 19;
  int ret1825;
  ret1825 = guestfs_internal_write (g, arg1826, arg1827, arg1827_size);
  if (ret1825 == -1)
    return -1;
  const char *arg1829 = "/internal_write2";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1829);
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
  const char *arg1832 = "/internal_write3";
  const char *arg1833 = "\n\n";
  size_t arg1833_size = 2;
  int ret1831;
  ret1831 = guestfs_internal_write (g, arg1832, arg1833, arg1833_size);
  if (ret1831 == -1)
    return -1;
  const char *arg1835 = "/internal_write3";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1835);
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
  const char *arg1838 = "/internal_write4";
  const char *arg1839 = "";
  size_t arg1839_size = 0;
  int ret1837;
  ret1837 = guestfs_internal_write (g, arg1838, arg1839, arg1839_size);
  if (ret1837 == -1)
    return -1;
  const char *arg1841 = "/internal_write4";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1841);
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
  const char *arg1844 = "/internal_write5";
  const char *arg1845 = "\n\n\n";
  size_t arg1845_size = 3;
  int ret1843;
  ret1843 = guestfs_internal_write (g, arg1844, arg1845, arg1845_size);
  if (ret1843 == -1)
    return -1;
  const char *arg1847 = "/internal_write5";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1847);
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
  const char *arg1850 = "/internal_write6";
  const char *arg1851 = "\n";
  size_t arg1851_size = 1;
  int ret1849;
  ret1849 = guestfs_internal_write (g, arg1850, arg1851, arg1851_size);
  if (ret1849 == -1)
    return -1;
  const char *arg1853 = "/internal_write6";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1853);
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
  const char *arg1856 = "/internal_write_append";
  const char *arg1857 = "line1\n";
  size_t arg1857_size = 6;
  int ret1855;
  ret1855 = guestfs_write (g, arg1856, arg1857, arg1857_size);
  if (ret1855 == -1)
    return -1;
  const char *arg1860 = "/internal_write_append";
  const char *arg1861 = "line2\n";
  size_t arg1861_size = 6;
  int ret1859;
  ret1859 = guestfs_internal_write_append (g, arg1860, arg1861, arg1861_size);
  if (ret1859 == -1)
    return -1;
  const char *arg1864 = "/internal_write_append";
  const char *arg1865 = "line3a";
  size_t arg1865_size = 6;
  int ret1863;
  ret1863 = guestfs_internal_write_append (g, arg1864, arg1865, arg1865_size);
  if (ret1863 == -1)
    return -1;
  const char *arg1868 = "/internal_write_append";
  const char *arg1869 = "line3b\n";
  size_t arg1869_size = 7;
  int ret1867;
  ret1867 = guestfs_internal_write_append (g, arg1868, arg1869, arg1869_size);
  if (ret1867 == -1)
    return -1;
  const char *arg1871 = "/internal_write_append";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg1871);
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
  const char *arg1873 = "/directory";
  struct guestfs_is_blockdev_opts_argv optargs1874;
  optargs1874.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_blockdev_opts_argv (g, arg1873, &optargs1874);
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
  const char *arg1879 = "/is_blockdev";
  int ret1875;
  ret1875 = guestfs_mknod_b (g, 511, 99, 66, arg1879);
  if (ret1875 == -1)
    return -1;
  const char *arg1881 = "/is_blockdev";
  struct guestfs_is_blockdev_opts_argv optargs1882;
  optargs1882.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_blockdev_opts_argv (g, arg1881, &optargs1882);
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
  const char *arg1884 = "/directory";
  struct guestfs_is_chardev_opts_argv optargs1885;
  optargs1885.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_chardev_opts_argv (g, arg1884, &optargs1885);
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
  const char *arg1890 = "/is_chardev";
  int ret1886;
  ret1886 = guestfs_mknod_c (g, 511, 99, 66, arg1890);
  if (ret1886 == -1)
    return -1;
  const char *arg1892 = "/is_chardev";
  struct guestfs_is_chardev_opts_argv optargs1893;
  optargs1893.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_chardev_opts_argv (g, arg1892, &optargs1893);
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
  const char *arg1895 = "/known-3";
  struct guestfs_is_dir_opts_argv optargs1896;
  optargs1896.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg1895, &optargs1896);
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
  const char *arg1897 = "/directory";
  struct guestfs_is_dir_opts_argv optargs1898;
  optargs1898.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg1897, &optargs1898);
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
  const char *arg1899 = "/directory";
  struct guestfs_is_fifo_opts_argv optargs1900;
  optargs1900.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_fifo_opts_argv (g, arg1899, &optargs1900);
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
  const char *arg1903 = "/is_fifo";
  int ret1901;
  ret1901 = guestfs_mkfifo (g, 511, arg1903);
  if (ret1901 == -1)
    return -1;
  const char *arg1905 = "/is_fifo";
  struct guestfs_is_fifo_opts_argv optargs1906;
  optargs1906.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_fifo_opts_argv (g, arg1905, &optargs1906);
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
  const char *arg1907 = "/known-1";
  struct guestfs_is_file_opts_argv optargs1908;
  optargs1908.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg1907, &optargs1908);
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
  const char *arg1909 = "/directory";
  struct guestfs_is_file_opts_argv optargs1910;
  optargs1910.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg1909, &optargs1910);
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
  const char *arg1911 = "/abssymlink";
  struct guestfs_is_file_opts_argv optargs1912;
  optargs1912.followsymlinks = 1;
  optargs1912.bitmask = UINT64_C(0x1);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg1911, &optargs1912);
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
  const char *arg1914 = "/dev/VG/LV";
  int ret;
  ret = guestfs_is_lv (g, arg1914);
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
  const char *arg1916 = "/dev/sda1";
  int ret;
  ret = guestfs_is_lv (g, arg1916);
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
  const char *arg1919 = "/directory";
  struct guestfs_is_socket_opts_argv optargs1920;
  optargs1920.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_socket_opts_argv (g, arg1919, &optargs1920);
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
  const char *arg1921 = "/directory";
  int ret;
  ret = guestfs_is_symlink (g, arg1921);
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
  const char *arg1923 = "/abssymlink";
  int ret;
  ret = guestfs_is_symlink (g, arg1923);
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
  const char *arg1925 = "/dev/sda";
  int ret;
  ret = guestfs_is_whole_device (g, arg1925);
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
  const char *arg1927 = "/dev/sda1";
  int ret;
  ret = guestfs_is_whole_device (g, arg1927);
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
  const char *arg1929 = "/dev/VG/LV";
  int ret;
  ret = guestfs_is_whole_device (g, arg1929);
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
  const char *arg1931 = "/100kallzeroes";
  int ret;
  ret = guestfs_is_zero (g, arg1931);
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
  const char *arg1933 = "/100kallspaces";
  int ret;
  ret = guestfs_is_zero (g, arg1933);
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
  const char *arg1936 = "/dev/sda1";
  struct guestfs_umount_opts_argv optargs1937;
  optargs1937.force = 0;
  optargs1937.lazyunmount = 0;
  optargs1937.bitmask = UINT64_C(0x3);
  int ret1935;
  ret1935 = guestfs_umount_opts_argv (g, arg1936, &optargs1937);
  if (ret1935 == -1)
    return -1;
  const char *arg1939 = "/dev/sda1";
  int ret1938;
  ret1938 = guestfs_zero_device (g, arg1939);
  if (ret1938 == -1)
    return -1;
  const char *arg1941 = "/dev/sda1";
  int ret;
  ret = guestfs_is_zero_device (g, arg1941);
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
  const char *arg1943 = "/dev/sda1";
  int ret;
  ret = guestfs_is_zero_device (g, arg1943);
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
  const char *arg1945 = "/dev/sdd";
  CLEANUP_FREE_ISOINFO struct guestfs_isoinfo *ret;
  ret = guestfs_isoinfo_device (g, arg1945);
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
  const char *arg1950 = "/dev/sda";
  const char *arg1951 = "mbr";
  int ret4;
  ret4 = guestfs_part_init (g, arg1950, arg1951);
  if (ret4 == -1)
    return -1;
  const char *arg1953 = "/dev/sda";
  const char *arg1954 = "p";
  int ret3;
  ret3 = guestfs_part_add (g, arg1953, arg1954, 64, 204799);
  if (ret3 == -1)
    return -1;
  const char *arg1958 = "/dev/sda";
  const char *arg1959 = "p";
  int ret2;
  ret2 = guestfs_part_add (g, arg1958, arg1959, 204800, 409599);
  if (ret2 == -1)
    return -1;
  const char *arg1963 = "/dev/sda";
  const char *arg1964 = "p";
  int ret1;
  ret1 = guestfs_part_add (g, arg1963, arg1964, 409600, -64);
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
  const char *arg1969 = "/ln";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1969);
  if (ret3 == -1)
    return -1;
  const char *arg1971 = "/ln/a";
  int ret2;
  ret2 = guestfs_touch (g, arg1971);
  if (ret2 == -1)
    return -1;
  const char *arg1973 = "/ln/a";
  const char *arg1974 = "/ln/b";
  int ret1;
  ret1 = guestfs_ln (g, arg1973, arg1974);
  if (ret1 == -1)
    return -1;
  const char *arg1976 = "/ln/b";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg1976);
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
  const char *arg1978 = "/ln_f";
  int ret4;
  ret4 = guestfs_mkdir (g, arg1978);
  if (ret4 == -1)
    return -1;
  const char *arg1980 = "/ln_f/a";
  int ret3;
  ret3 = guestfs_touch (g, arg1980);
  if (ret3 == -1)
    return -1;
  const char *arg1982 = "/ln_f/b";
  int ret2;
  ret2 = guestfs_touch (g, arg1982);
  if (ret2 == -1)
    return -1;
  const char *arg1984 = "/ln_f/a";
  const char *arg1985 = "/ln_f/b";
  int ret1;
  ret1 = guestfs_ln_f (g, arg1984, arg1985);
  if (ret1 == -1)
    return -1;
  const char *arg1987 = "/ln_f/b";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg1987);
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
  const char *arg1989 = "/ln_s";
  int ret3;
  ret3 = guestfs_mkdir (g, arg1989);
  if (ret3 == -1)
    return -1;
  const char *arg1991 = "/ln_s/a";
  int ret2;
  ret2 = guestfs_touch (g, arg1991);
  if (ret2 == -1)
    return -1;
  const char *arg1993 = "a";
  const char *arg1994 = "/ln_s/b";
  int ret1;
  ret1 = guestfs_ln_s (g, arg1993, arg1994);
  if (ret1 == -1)
    return -1;
  const char *arg1996 = "/ln_s/b";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_lstat (g, arg1996);
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
  const char *arg1999 = "/ln_sf/b";
  int ret1998;
  ret1998 = guestfs_mkdir_p (g, arg1999);
  if (ret1998 == -1)
    return -1;
  const char *arg2002 = "/ln_sf/b/c";
  int ret2001;
  ret2001 = guestfs_touch (g, arg2002);
  if (ret2001 == -1)
    return -1;
  const char *arg2005 = "../d";
  const char *arg2006 = "/ln_sf/b/c";
  int ret2004;
  ret2004 = guestfs_ln_sf (g, arg2005, arg2006);
  if (ret2004 == -1)
    return -1;
  const char *arg2008 = "/ln_sf/b/c";
  CLEANUP_FREE char *ret;
  ret = guestfs_readlink (g, arg2008);
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
  const char *arg2010 = "/ls";
  int ret4;
  ret4 = guestfs_mkdir (g, arg2010);
  if (ret4 == -1)
    return -1;
  const char *arg2012 = "/ls/new";
  int ret3;
  ret3 = guestfs_touch (g, arg2012);
  if (ret3 == -1)
    return -1;
  const char *arg2014 = "/ls/newer";
  int ret2;
  ret2 = guestfs_touch (g, arg2014);
  if (ret2 == -1)
    return -1;
  const char *arg2016 = "/ls/newest";
  int ret1;
  ret1 = guestfs_touch (g, arg2016);
  if (ret1 == -1)
    return -1;
  const char *arg2018 = "/ls";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_ls (g, arg2018);
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
  const char *arg2020 = "/empty";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_lstat (g, arg2020);
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
  const char *arg2022 = "/empty";
  CLEANUP_FREE_STATNS struct guestfs_statns *ret;
  ret = guestfs_lstatns (g, arg2022);
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

  const char *features2024[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2024)) {
    skipped ("test_lvcreate_0", "group %s not available in daemon",
             features2024[0]);
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
  const char *arg2025 = "/dev/sda";
  const char *arg2026 = "mbr";
  int ret14;
  ret14 = guestfs_part_init (g, arg2025, arg2026);
  if (ret14 == -1)
    return -1;
  const char *arg2028 = "/dev/sda";
  const char *arg2029 = "p";
  int ret13;
  ret13 = guestfs_part_add (g, arg2028, arg2029, 64, 204799);
  if (ret13 == -1)
    return -1;
  const char *arg2033 = "/dev/sda";
  const char *arg2034 = "p";
  int ret12;
  ret12 = guestfs_part_add (g, arg2033, arg2034, 204800, 409599);
  if (ret12 == -1)
    return -1;
  const char *arg2038 = "/dev/sda";
  const char *arg2039 = "p";
  int ret11;
  ret11 = guestfs_part_add (g, arg2038, arg2039, 409600, -64);
  if (ret11 == -1)
    return -1;
  const char *arg2043 = "/dev/sda1";
  int ret10;
  ret10 = guestfs_pvcreate (g, arg2043);
  if (ret10 == -1)
    return -1;
  const char *arg2045 = "/dev/sda2";
  int ret9;
  ret9 = guestfs_pvcreate (g, arg2045);
  if (ret9 == -1)
    return -1;
  const char *arg2047 = "/dev/sda3";
  int ret8;
  ret8 = guestfs_pvcreate (g, arg2047);
  if (ret8 == -1)
    return -1;
  const char *arg2049 = "VG1";
  const char *arg2050_0 = "/dev/sda1";
  const char *arg2050_1 = "/dev/sda2";
  const char *const arg2050[] = {
    arg2050_0,
    arg2050_1,
    NULL
  };
  int ret7;
  ret7 = guestfs_vgcreate (g, arg2049, (char **) arg2050);
  if (ret7 == -1)
    return -1;
  const char *arg2052 = "VG2";
  const char *arg2053_0 = "/dev/sda3";
  const char *const arg2053[] = {
    arg2053_0,
    NULL
  };
  int ret6;
  ret6 = guestfs_vgcreate (g, arg2052, (char **) arg2053);
  if (ret6 == -1)
    return -1;
  const char *arg2055 = "LV1";
  const char *arg2056 = "VG1";
  int ret5;
  ret5 = guestfs_lvcreate (g, arg2055, arg2056, 50);
  if (ret5 == -1)
    return -1;
  const char *arg2059 = "LV2";
  const char *arg2060 = "VG1";
  int ret4;
  ret4 = guestfs_lvcreate (g, arg2059, arg2060, 50);
  if (ret4 == -1)
    return -1;
  const char *arg2063 = "LV3";
  const char *arg2064 = "VG2";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg2063, arg2064, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2067 = "LV4";
  const char *arg2068 = "VG2";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg2067, arg2068, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2071 = "LV5";
  const char *arg2072 = "VG2";
  int ret1;
  ret1 = guestfs_lvcreate (g, arg2071, arg2072, 50);
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

  const char *features2076[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2076)) {
    skipped ("test_lvcreate_free_0", "group %s not available in daemon",
             features2076[0]);
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
  const char *arg2077 = "/dev/sda";
  const char *arg2078 = "mbr";
  int ret7;
  ret7 = guestfs_part_disk (g, arg2077, arg2078);
  if (ret7 == -1)
    return -1;
  const char *arg2080 = "/dev/sda1";
  int ret6;
  ret6 = guestfs_pvcreate (g, arg2080);
  if (ret6 == -1)
    return -1;
  const char *arg2082 = "VG";
  const char *arg2083_0 = "/dev/sda1";
  const char *const arg2083[] = {
    arg2083_0,
    NULL
  };
  int ret5;
  ret5 = guestfs_vgcreate (g, arg2082, (char **) arg2083);
  if (ret5 == -1)
    return -1;
  const char *arg2085 = "LV1";
  const char *arg2086 = "VG";
  int ret4;
  ret4 = guestfs_lvcreate_free (g, arg2085, arg2086, 50);
  if (ret4 == -1)
    return -1;
  const char *arg2089 = "LV2";
  const char *arg2090 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate_free (g, arg2089, arg2090, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2093 = "LV3";
  const char *arg2094 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate_free (g, arg2093, arg2094, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2097 = "LV4";
  const char *arg2098 = "VG";
  int ret1;
  ret1 = guestfs_lvcreate_free (g, arg2097, arg2098, 100);
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

  const char *features2102[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2102)) {
    skipped ("test_lvm_canonical_lv_name_0", "group %s not available in daemon",
             features2102[0]);
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
  const char *arg2103 = "/dev/mapper/VG-LV";
  CLEANUP_FREE char *ret;
  ret = guestfs_lvm_canonical_lv_name (g, arg2103);
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

  const char *features2105[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2105)) {
    skipped ("test_lvm_canonical_lv_name_1", "group %s not available in daemon",
             features2105[0]);
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
  const char *arg2106 = "/dev/VG/LV";
  CLEANUP_FREE char *ret;
  ret = guestfs_lvm_canonical_lv_name (g, arg2106);
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
  int ret2108;
  ret2108 = guestfs_lvm_scan (g, 1);
  if (ret2108 == -1)
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

  const char *features2111[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2111)) {
    skipped ("test_lvremove_0", "group %s not available in daemon",
             features2111[0]);
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
  const char *arg2112 = "/dev/sda";
  const char *arg2113 = "mbr";
  int ret6;
  ret6 = guestfs_part_disk (g, arg2112, arg2113);
  if (ret6 == -1)
    return -1;
  const char *arg2115 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg2115);
  if (ret5 == -1)
    return -1;
  const char *arg2117 = "VG";
  const char *arg2118_0 = "/dev/sda1";
  const char *const arg2118[] = {
    arg2118_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg2117, (char **) arg2118);
  if (ret4 == -1)
    return -1;
  const char *arg2120 = "LV1";
  const char *arg2121 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg2120, arg2121, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2124 = "LV2";
  const char *arg2125 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg2124, arg2125, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2128 = "/dev/VG/LV1";
  int ret1;
  ret1 = guestfs_lvremove (g, arg2128);
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

  const char *features2131[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2131)) {
    skipped ("test_lvremove_1", "group %s not available in daemon",
             features2131[0]);
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
  const char *arg2132 = "/dev/sda";
  const char *arg2133 = "mbr";
  int ret6;
  ret6 = guestfs_part_disk (g, arg2132, arg2133);
  if (ret6 == -1)
    return -1;
  const char *arg2135 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg2135);
  if (ret5 == -1)
    return -1;
  const char *arg2137 = "VG";
  const char *arg2138_0 = "/dev/sda1";
  const char *const arg2138[] = {
    arg2138_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg2137, (char **) arg2138);
  if (ret4 == -1)
    return -1;
  const char *arg2140 = "LV1";
  const char *arg2141 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg2140, arg2141, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2144 = "LV2";
  const char *arg2145 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg2144, arg2145, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2148 = "/dev/VG";
  int ret1;
  ret1 = guestfs_lvremove (g, arg2148);
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

  const char *features2151[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2151)) {
    skipped ("test_lvremove_2", "group %s not available in daemon",
             features2151[0]);
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
  const char *arg2152 = "/dev/sda";
  const char *arg2153 = "mbr";
  int ret6;
  ret6 = guestfs_part_disk (g, arg2152, arg2153);
  if (ret6 == -1)
    return -1;
  const char *arg2155 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg2155);
  if (ret5 == -1)
    return -1;
  const char *arg2157 = "VG";
  const char *arg2158_0 = "/dev/sda1";
  const char *const arg2158[] = {
    arg2158_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg2157, (char **) arg2158);
  if (ret4 == -1)
    return -1;
  const char *arg2160 = "LV1";
  const char *arg2161 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg2160, arg2161, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2164 = "LV2";
  const char *arg2165 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg2164, arg2165, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2168 = "/dev/VG";
  int ret1;
  ret1 = guestfs_lvremove (g, arg2168);
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
  const char *arg2171 = "/dev/VG/LV";
  const char *arg2172 = "/dev/VG/LV2";
  int ret1;
  ret1 = guestfs_lvrename (g, arg2171, arg2172);
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

  const char *features2175[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2175)) {
    skipped ("test_lvresize_0", "group %s not available in daemon",
             features2175[0]);
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
  const char *arg2177 = "/dev/sda";
  const char *arg2178 = "mbr";
  int ret2176;
  ret2176 = guestfs_part_disk (g, arg2177, arg2178);
  if (ret2176 == -1)
    return -1;
  const char *arg2181 = "/dev/sda1";
  int ret2180;
  ret2180 = guestfs_pvcreate (g, arg2181);
  if (ret2180 == -1)
    return -1;
  const char *arg2184 = "VG";
  const char *arg2185_0 = "/dev/sda1";
  const char *const arg2185[] = {
    arg2185_0,
    NULL
  };
  int ret2183;
  ret2183 = guestfs_vgcreate (g, arg2184, (char **) arg2185);
  if (ret2183 == -1)
    return -1;
  const char *arg2188 = "LV";
  const char *arg2189 = "VG";
  int ret2187;
  ret2187 = guestfs_lvcreate (g, arg2188, arg2189, 10);
  if (ret2187 == -1)
    return -1;
  const char *arg2193 = "ext2";
  const char *arg2194 = "/dev/VG/LV";
  struct guestfs_mkfs_opts_argv optargs2195;
  optargs2195.bitmask = UINT64_C(0x0);
  int ret2192;
  ret2192 = guestfs_mkfs_opts_argv (g, arg2193, arg2194, &optargs2195);
  if (ret2192 == -1)
    return -1;
  const char *arg2197 = "/dev/VG/LV";
  const char *arg2198 = "/";
  int ret2196;
  ret2196 = guestfs_mount (g, arg2197, arg2198);
  if (ret2196 == -1)
    return -1;
  const char *arg2201 = "/new";
  const char *arg2202 = "test content";
  size_t arg2202_size = 12;
  int ret2200;
  ret2200 = guestfs_write (g, arg2201, arg2202, arg2202_size);
  if (ret2200 == -1)
    return -1;
  const char *arg2205 = "/";
  struct guestfs_umount_opts_argv optargs2206;
  optargs2206.force = 0;
  optargs2206.lazyunmount = 0;
  optargs2206.bitmask = UINT64_C(0x3);
  int ret2204;
  ret2204 = guestfs_umount_opts_argv (g, arg2205, &optargs2206);
  if (ret2204 == -1)
    return -1;
  const char *arg2208 = "/dev/VG/LV";
  int ret2207;
  ret2207 = guestfs_lvresize (g, arg2208, 20);
  if (ret2207 == -1)
    return -1;
  const char *arg2212 = "/dev/VG/LV";
  int ret2211;
  ret2211 = guestfs_e2fsck_f (g, arg2212);
  if (ret2211 == -1)
    return -1;
  const char *arg2215 = "/dev/VG/LV";
  struct guestfs_e2fsck_argv optargs2216;
  optargs2216.correct = 1;
  optargs2216.forceall = 0;
  optargs2216.bitmask = UINT64_C(0x3);
  int ret2214;
  ret2214 = guestfs_e2fsck_argv (g, arg2215, &optargs2216);
  if (ret2214 == -1)
    return -1;
  const char *arg2218 = "/dev/VG/LV";
  struct guestfs_e2fsck_argv optargs2219;
  optargs2219.correct = 0;
  optargs2219.forceall = 1;
  optargs2219.bitmask = UINT64_C(0x3);
  int ret2217;
  ret2217 = guestfs_e2fsck_argv (g, arg2218, &optargs2219);
  if (ret2217 == -1)
    return -1;
  const char *arg2221 = "/dev/VG/LV";
  int ret2220;
  ret2220 = guestfs_resize2fs (g, arg2221);
  if (ret2220 == -1)
    return -1;
  const char *arg2224 = "/dev/VG/LV";
  const char *arg2225 = "/";
  int ret2223;
  ret2223 = guestfs_mount (g, arg2224, arg2225);
  if (ret2223 == -1)
    return -1;
  const char *arg2227 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2227);
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

  const char *features2229[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2229)) {
    skipped ("test_lvresize_1", "group %s not available in daemon",
             features2229[0]);
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
  const char *arg2231 = "/dev/sda";
  const char *arg2232 = "mbr";
  int ret2230;
  ret2230 = guestfs_part_disk (g, arg2231, arg2232);
  if (ret2230 == -1)
    return -1;
  const char *arg2235 = "/dev/sda1";
  int ret2234;
  ret2234 = guestfs_pvcreate (g, arg2235);
  if (ret2234 == -1)
    return -1;
  const char *arg2238 = "VG";
  const char *arg2239_0 = "/dev/sda1";
  const char *const arg2239[] = {
    arg2239_0,
    NULL
  };
  int ret2237;
  ret2237 = guestfs_vgcreate (g, arg2238, (char **) arg2239);
  if (ret2237 == -1)
    return -1;
  const char *arg2242 = "LV";
  const char *arg2243 = "VG";
  int ret2241;
  ret2241 = guestfs_lvcreate (g, arg2242, arg2243, 20);
  if (ret2241 == -1)
    return -1;
  const char *arg2247 = "/dev/VG/LV";
  int ret2246;
  ret2246 = guestfs_lvresize (g, arg2247, 10);
  if (ret2246 == -1)
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

  const char *features2250[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2250)) {
    skipped ("test_lvresize_free_0", "group %s not available in daemon",
             features2250[0]);
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
  const char *arg2252 = "/dev/sda";
  const char *arg2253 = "mbr";
  int ret2251;
  ret2251 = guestfs_part_disk (g, arg2252, arg2253);
  if (ret2251 == -1)
    return -1;
  const char *arg2256 = "/dev/sda1";
  int ret2255;
  ret2255 = guestfs_pvcreate (g, arg2256);
  if (ret2255 == -1)
    return -1;
  const char *arg2259 = "VG";
  const char *arg2260_0 = "/dev/sda1";
  const char *const arg2260[] = {
    arg2260_0,
    NULL
  };
  int ret2258;
  ret2258 = guestfs_vgcreate (g, arg2259, (char **) arg2260);
  if (ret2258 == -1)
    return -1;
  const char *arg2263 = "LV";
  const char *arg2264 = "VG";
  int ret2262;
  ret2262 = guestfs_lvcreate (g, arg2263, arg2264, 10);
  if (ret2262 == -1)
    return -1;
  const char *arg2268 = "/dev/VG/LV";
  int ret2267;
  ret2267 = guestfs_lvresize_free (g, arg2268, 100);
  if (ret2267 == -1)
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

  const char *features2271[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2271)) {
    skipped ("test_lvs_0", "group %s not available in daemon",
             features2271[0]);
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

  const char *features2273[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features2273)) {
    skipped ("test_lvs_1", "group %s not available in daemon",
             features2273[0]);
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
  const char *arg2274 = "/dev/sda";
  const char *arg2275 = "mbr";
  int ret12;
  ret12 = guestfs_part_init (g, arg2274, arg2275);
  if (ret12 == -1)
    return -1;
  const char *arg2277 = "/dev/sda";
  const char *arg2278 = "p";
  int ret11;
  ret11 = guestfs_part_add (g, arg2277, arg2278, 64, 204799);
  if (ret11 == -1)
    return -1;
  const char *arg2282 = "/dev/sda";
  const char *arg2283 = "p";
  int ret10;
  ret10 = guestfs_part_add (g, arg2282, arg2283, 204800, 409599);
  if (ret10 == -1)
    return -1;
  const char *arg2287 = "/dev/sda";
  const char *arg2288 = "p";
  int ret9;
  ret9 = guestfs_part_add (g, arg2287, arg2288, 409600, -64);
  if (ret9 == -1)
    return -1;
  const char *arg2292 = "/dev/sda1";
  int ret8;
  ret8 = guestfs_pvcreate (g, arg2292);
  if (ret8 == -1)
    return -1;
  const char *arg2294 = "/dev/sda2";
  int ret7;
  ret7 = guestfs_pvcreate (g, arg2294);
  if (ret7 == -1)
    return -1;
  const char *arg2296 = "/dev/sda3";
  int ret6;
  ret6 = guestfs_pvcreate (g, arg2296);
  if (ret6 == -1)
    return -1;
  const char *arg2298 = "VG1";
  const char *arg2299_0 = "/dev/sda1";
  const char *arg2299_1 = "/dev/sda2";
  const char *const arg2299[] = {
    arg2299_0,
    arg2299_1,
    NULL
  };
  int ret5;
  ret5 = guestfs_vgcreate (g, arg2298, (char **) arg2299);
  if (ret5 == -1)
    return -1;
  const char *arg2301 = "VG2";
  const char *arg2302_0 = "/dev/sda3";
  const char *const arg2302[] = {
    arg2302_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg2301, (char **) arg2302);
  if (ret4 == -1)
    return -1;
  const char *arg2304 = "LV1";
  const char *arg2305 = "VG1";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg2304, arg2305, 50);
  if (ret3 == -1)
    return -1;
  const char *arg2308 = "LV2";
  const char *arg2309 = "VG1";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg2308, arg2309, 50);
  if (ret2 == -1)
    return -1;
  const char *arg2312 = "LV3";
  const char *arg2313 = "VG2";
  int ret1;
  ret1 = guestfs_lvcreate (g, arg2312, arg2313, 50);
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
  const char *arg2318 = "/mkdir";
  int ret2317;
  ret2317 = guestfs_mkdir (g, arg2318);
  if (ret2317 == -1)
    return -1;
  const char *arg2320 = "/mkdir";
  struct guestfs_is_dir_opts_argv optargs2321;
  optargs2321.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg2320, &optargs2321);
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
  const char *arg2323 = "/mkdir2/foo/bar";
  int ret2322;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2322 = guestfs_mkdir (g, arg2323);
  guestfs_pop_error_handler (g);
  if (ret2322 != -1)
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
  const char *arg2325 = "/mkdir_mode";
  int ret1;
  ret1 = guestfs_mkdir_mode (g, arg2325, 73);
  if (ret1 == -1)
    return -1;
  const char *arg2328 = "/mkdir_mode";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2328);
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
  const char *arg2331 = "/mkdir_p/foo/bar";
  int ret2330;
  ret2330 = guestfs_mkdir_p (g, arg2331);
  if (ret2330 == -1)
    return -1;
  const char *arg2333 = "/mkdir_p/foo/bar";
  struct guestfs_is_dir_opts_argv optargs2334;
  optargs2334.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg2333, &optargs2334);
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
  const char *arg2336 = "/mkdir_p2/foo/bar";
  int ret2335;
  ret2335 = guestfs_mkdir_p (g, arg2336);
  if (ret2335 == -1)
    return -1;
  const char *arg2338 = "/mkdir_p2/foo";
  struct guestfs_is_dir_opts_argv optargs2339;
  optargs2339.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg2338, &optargs2339);
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
  const char *arg2341 = "/mkdir_p3/foo/bar";
  int ret2340;
  ret2340 = guestfs_mkdir_p (g, arg2341);
  if (ret2340 == -1)
    return -1;
  const char *arg2343 = "/mkdir_p3";
  struct guestfs_is_dir_opts_argv optargs2344;
  optargs2344.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_dir_opts_argv (g, arg2343, &optargs2344);
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
  const char *arg2346 = "/mkdir_p4";
  int ret2345;
  ret2345 = guestfs_mkdir (g, arg2346);
  if (ret2345 == -1)
    return -1;
  const char *arg2349 = "/mkdir_p4";
  int ret2348;
  ret2348 = guestfs_mkdir_p (g, arg2349);
  if (ret2348 == -1)
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
  const char *arg2352 = "/mkdir_p5";
  int ret2351;
  ret2351 = guestfs_touch (g, arg2352);
  if (ret2351 == -1)
    return -1;
  const char *arg2355 = "/mkdir_p5";
  int ret2354;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2354 = guestfs_mkdir_p (g, arg2355);
  guestfs_pop_error_handler (g);
  if (ret2354 != -1)
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
  const char *arg2358 = "/mkdtemp";
  int ret2357;
  ret2357 = guestfs_mkdir (g, arg2358);
  if (ret2357 == -1)
    return -1;
  const char *arg2361 = "/mkdtemp/tmpXXXXXX";
  CLEANUP_FREE char *ret2360;
  ret2360 = guestfs_mkdtemp (g, arg2361);
  if (ret2360 == NULL)
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
  const char *arg2364 = "/dev/sda";
  const char *arg2365 = "mbr";
  int ret2363;
  ret2363 = guestfs_part_init (g, arg2364, arg2365);
  if (ret2363 == -1)
    return -1;
  const char *arg2368 = "/dev/sda";
  const char *arg2369 = "p";
  int ret2367;
  ret2367 = guestfs_part_add (g, arg2368, arg2369, 64, 204799);
  if (ret2367 == -1)
    return -1;
  const char *arg2374 = "/dev/sda";
  const char *arg2375 = "p";
  int ret2373;
  ret2373 = guestfs_part_add (g, arg2374, arg2375, 204800, -64);
  if (ret2373 == -1)
    return -1;
  const char *arg2380 = "/dev/sda1";
  struct guestfs_mke2fs_argv optargs2381;
  optargs2381.blocksize = 4096;
  optargs2381.journaldev = 1;
  optargs2381.bitmask = UINT64_C(0x100000002);
  int ret2379;
  ret2379 = guestfs_mke2fs_argv (g, arg2380, &optargs2381);
  if (ret2379 == -1)
    return -1;
  const char *arg2383 = "/dev/sda2";
  struct guestfs_mke2fs_argv optargs2384;
  optargs2384.blocksize = 4096;
  optargs2384.journaldevice = "/dev/sda1";
  optargs2384.fstype = "ext2";
  optargs2384.bitmask = UINT64_C(0x44002);
  int ret2382;
  ret2382 = guestfs_mke2fs_argv (g, arg2383, &optargs2384);
  if (ret2382 == -1)
    return -1;
  const char *arg2386 = "/dev/sda2";
  const char *arg2387 = "/";
  int ret2385;
  ret2385 = guestfs_mount (g, arg2386, arg2387);
  if (ret2385 == -1)
    return -1;
  const char *arg2390 = "/new";
  const char *arg2391 = "new file contents";
  size_t arg2391_size = 17;
  int ret2389;
  ret2389 = guestfs_write (g, arg2390, arg2391, arg2391_size);
  if (ret2389 == -1)
    return -1;
  const char *arg2393 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2393);
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
  const char *arg2396 = "/dev/sda";
  const char *arg2397 = "mbr";
  int ret2395;
  ret2395 = guestfs_part_init (g, arg2396, arg2397);
  if (ret2395 == -1)
    return -1;
  const char *arg2400 = "/dev/sda";
  const char *arg2401 = "p";
  int ret2399;
  ret2399 = guestfs_part_add (g, arg2400, arg2401, 64, 204799);
  if (ret2399 == -1)
    return -1;
  const char *arg2406 = "/dev/sda";
  const char *arg2407 = "p";
  int ret2405;
  ret2405 = guestfs_part_add (g, arg2406, arg2407, 204800, -64);
  if (ret2405 == -1)
    return -1;
  const char *arg2412 = "/dev/sda1";
  struct guestfs_mke2fs_argv optargs2413;
  optargs2413.blocksize = 4096;
  optargs2413.journaldevice = "/dev/sda1";
  optargs2413.label = "JOURNAL";
  optargs2413.fstype = "ext2";
  optargs2413.journaldev = 1;
  optargs2413.bitmask = UINT64_C(0x10004c002);
  int ret2411;
  ret2411 = guestfs_mke2fs_argv (g, arg2412, &optargs2413);
  if (ret2411 == -1)
    return -1;
  const char *arg2415 = "/dev/sda2";
  struct guestfs_mke2fs_argv optargs2416;
  optargs2416.blocksize = 4096;
  optargs2416.journaldevice = "LABEL=JOURNAL";
  optargs2416.label = "JOURNAL";
  optargs2416.fstype = "ext2";
  optargs2416.bitmask = UINT64_C(0x4c002);
  int ret2414;
  ret2414 = guestfs_mke2fs_argv (g, arg2415, &optargs2416);
  if (ret2414 == -1)
    return -1;
  const char *arg2418 = "/dev/sda2";
  const char *arg2419 = "/";
  int ret2417;
  ret2417 = guestfs_mount (g, arg2418, arg2419);
  if (ret2417 == -1)
    return -1;
  const char *arg2422 = "/new";
  const char *arg2423 = "new file contents";
  size_t arg2423_size = 17;
  int ret2421;
  ret2421 = guestfs_write (g, arg2422, arg2423, arg2423_size);
  if (ret2421 == -1)
    return -1;
  const char *arg2425 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2425);
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
  const char *arg2428 = "/dev/sda";
  const char *arg2429 = "mbr";
  int ret2427;
  ret2427 = guestfs_part_init (g, arg2428, arg2429);
  if (ret2427 == -1)
    return -1;
  const char *arg2432 = "/dev/sda";
  const char *arg2433 = "p";
  int ret2431;
  ret2431 = guestfs_part_add (g, arg2432, arg2433, 64, 204799);
  if (ret2431 == -1)
    return -1;
  const char *arg2438 = "/dev/sda";
  const char *arg2439 = "p";
  int ret2437;
  ret2437 = guestfs_part_add (g, arg2438, arg2439, 204800, -64);
  if (ret2437 == -1)
    return -1;
  const char *arg2444 = "/dev/sda1";
  struct guestfs_mke2fs_argv optargs2445;
  optargs2445.blocksize = 4096;
  optargs2445.uuid = "1fcd9dde-504c-1950-e283-6620ffcdc4fa";
  optargs2445.journaldev = 1;
  optargs2445.bitmask = UINT64_C(0x100100002);
  int ret2443;
  ret2443 = guestfs_mke2fs_argv (g, arg2444, &optargs2445);
  if (ret2443 == -1)
    return -1;
  const char *arg2447 = "/dev/sda2";
  struct guestfs_mke2fs_argv optargs2448;
  optargs2448.blocksize = 4096;
  optargs2448.journaldevice = "UUID=1fcd9dde-504c-1950-e283-6620ffcdc4fa";
  optargs2448.label = "JOURNAL";
  optargs2448.fstype = "ext2";
  optargs2448.forcecreate = 1;
  optargs2448.bitmask = UINT64_C(0x24c002);
  int ret2446;
  ret2446 = guestfs_mke2fs_argv (g, arg2447, &optargs2448);
  if (ret2446 == -1)
    return -1;
  const char *arg2450 = "/dev/sda2";
  const char *arg2451 = "/";
  int ret2449;
  ret2449 = guestfs_mount (g, arg2450, arg2451);
  if (ret2449 == -1)
    return -1;
  const char *arg2454 = "/new";
  const char *arg2455 = "new file contents";
  size_t arg2455_size = 17;
  int ret2453;
  ret2453 = guestfs_write (g, arg2454, arg2455, arg2455_size);
  if (ret2453 == -1)
    return -1;
  const char *arg2457 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2457);
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
  const char *arg2460 = "/dev/sda";
  const char *arg2461 = "mbr";
  int ret2459;
  ret2459 = guestfs_part_init (g, arg2460, arg2461);
  if (ret2459 == -1)
    return -1;
  const char *arg2464 = "/dev/sda";
  const char *arg2465 = "p";
  int ret2463;
  ret2463 = guestfs_part_add (g, arg2464, arg2465, 64, 204799);
  if (ret2463 == -1)
    return -1;
  const char *arg2470 = "/dev/sda";
  const char *arg2471 = "p";
  int ret2469;
  ret2469 = guestfs_part_add (g, arg2470, arg2471, 204800, -64);
  if (ret2469 == -1)
    return -1;
  const char *arg2477 = "/dev/sda1";
  int ret2475;
  ret2475 = guestfs_mke2journal (g, 4096, arg2477);
  if (ret2475 == -1)
    return -1;
  const char *arg2480 = "ext2";
  const char *arg2482 = "/dev/sda2";
  const char *arg2483 = "/dev/sda1";
  int ret2479;
  ret2479 = guestfs_mke2fs_J (g, arg2480, 4096, arg2482, arg2483);
  if (ret2479 == -1)
    return -1;
  const char *arg2486 = "/dev/sda2";
  const char *arg2487 = "/";
  int ret2485;
  ret2485 = guestfs_mount (g, arg2486, arg2487);
  if (ret2485 == -1)
    return -1;
  const char *arg2490 = "/new";
  const char *arg2491 = "new file contents";
  size_t arg2491_size = 17;
  int ret2489;
  ret2489 = guestfs_write (g, arg2490, arg2491, arg2491_size);
  if (ret2489 == -1)
    return -1;
  const char *arg2493 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2493);
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
  const char *arg2496 = "/dev/sda";
  const char *arg2497 = "mbr";
  int ret2495;
  ret2495 = guestfs_part_init (g, arg2496, arg2497);
  if (ret2495 == -1)
    return -1;
  const char *arg2500 = "/dev/sda";
  const char *arg2501 = "p";
  int ret2499;
  ret2499 = guestfs_part_add (g, arg2500, arg2501, 64, 204799);
  if (ret2499 == -1)
    return -1;
  const char *arg2506 = "/dev/sda";
  const char *arg2507 = "p";
  int ret2505;
  ret2505 = guestfs_part_add (g, arg2506, arg2507, 204800, -64);
  if (ret2505 == -1)
    return -1;
  const char *arg2513 = "JOURNAL";
  const char *arg2514 = "/dev/sda1";
  int ret2511;
  ret2511 = guestfs_mke2journal_L (g, 4096, arg2513, arg2514);
  if (ret2511 == -1)
    return -1;
  const char *arg2517 = "ext2";
  const char *arg2519 = "/dev/sda2";
  const char *arg2520 = "JOURNAL";
  int ret2516;
  ret2516 = guestfs_mke2fs_JL (g, arg2517, 4096, arg2519, arg2520);
  if (ret2516 == -1)
    return -1;
  const char *arg2523 = "/dev/sda2";
  const char *arg2524 = "/";
  int ret2522;
  ret2522 = guestfs_mount (g, arg2523, arg2524);
  if (ret2522 == -1)
    return -1;
  const char *arg2527 = "/new";
  const char *arg2528 = "new file contents";
  size_t arg2528_size = 17;
  int ret2526;
  ret2526 = guestfs_write (g, arg2527, arg2528, arg2528_size);
  if (ret2526 == -1)
    return -1;
  const char *arg2530 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2530);
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

  const char *features2532[] = { "linuxfsuuid", NULL };
  if (!guestfs_feature_available (g, (char **) features2532)) {
    skipped ("test_mke2journal_U_0", "group %s not available in daemon",
             features2532[0]);
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
  const char *arg2534 = "/dev/sda";
  const char *arg2535 = "mbr";
  int ret2533;
  ret2533 = guestfs_part_init (g, arg2534, arg2535);
  if (ret2533 == -1)
    return -1;
  const char *arg2538 = "/dev/sda";
  const char *arg2539 = "p";
  int ret2537;
  ret2537 = guestfs_part_add (g, arg2538, arg2539, 64, 204799);
  if (ret2537 == -1)
    return -1;
  const char *arg2544 = "/dev/sda";
  const char *arg2545 = "p";
  int ret2543;
  ret2543 = guestfs_part_add (g, arg2544, arg2545, 204800, -64);
  if (ret2543 == -1)
    return -1;
  const char *arg2551 = "1fcd9dde-504c-1950-e283-6620ffcdc4fa";
  const char *arg2552 = "/dev/sda1";
  int ret2549;
  ret2549 = guestfs_mke2journal_U (g, 4096, arg2551, arg2552);
  if (ret2549 == -1)
    return -1;
  const char *arg2555 = "ext2";
  const char *arg2557 = "/dev/sda2";
  const char *arg2558 = "1fcd9dde-504c-1950-e283-6620ffcdc4fa";
  int ret2554;
  ret2554 = guestfs_mke2fs_JU (g, arg2555, 4096, arg2557, arg2558);
  if (ret2554 == -1)
    return -1;
  const char *arg2561 = "/dev/sda2";
  const char *arg2562 = "/";
  int ret2560;
  ret2560 = guestfs_mount (g, arg2561, arg2562);
  if (ret2560 == -1)
    return -1;
  const char *arg2565 = "/new";
  const char *arg2566 = "new file contents";
  size_t arg2566_size = 17;
  int ret2564;
  ret2564 = guestfs_write (g, arg2565, arg2566, arg2566_size);
  if (ret2564 == -1)
    return -1;
  const char *arg2568 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2568);
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

  const char *features2570[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2570)) {
    skipped ("test_mkfifo_0", "group %s not available in daemon",
             features2570[0]);
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
  const char *arg2572 = "/mkfifo";
  int ret1;
  ret1 = guestfs_mkfifo (g, 511, arg2572);
  if (ret1 == -1)
    return -1;
  const char *arg2574 = "/mkfifo";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2574);
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

  const char *features2576[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2576)) {
    skipped ("test_mkfifo_1", "group %s not available in daemon",
             features2576[0]);
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
  const char *arg2579 = "/mkfifo-2";
  int ret2577;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2577 = guestfs_mkfifo (g, 8703, arg2579);
  guestfs_pop_error_handler (g);
  if (ret2577 != -1)
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
  const char *arg2582 = "/dev/sda";
  const char *arg2583 = "mbr";
  int ret2581;
  ret2581 = guestfs_part_disk (g, arg2582, arg2583);
  if (ret2581 == -1)
    return -1;
  const char *arg2586 = "ext2";
  const char *arg2587 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs2588;
  optargs2588.bitmask = UINT64_C(0x0);
  int ret2585;
  ret2585 = guestfs_mkfs_opts_argv (g, arg2586, arg2587, &optargs2588);
  if (ret2585 == -1)
    return -1;
  const char *arg2590 = "/dev/sda1";
  const char *arg2591 = "/";
  int ret2589;
  ret2589 = guestfs_mount (g, arg2590, arg2591);
  if (ret2589 == -1)
    return -1;
  const char *arg2594 = "/new";
  const char *arg2595 = "new file contents";
  size_t arg2595_size = 17;
  int ret2593;
  ret2593 = guestfs_write (g, arg2594, arg2595, arg2595_size);
  if (ret2593 == -1)
    return -1;
  const char *arg2597 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2597);
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
  const char *arg2600 = "/dev/sda";
  const char *arg2601 = "mbr";
  int ret2599;
  ret2599 = guestfs_part_disk (g, arg2600, arg2601);
  if (ret2599 == -1)
    return -1;
  const char *arg2604 = "ext2";
  const char *arg2606 = "/dev/sda1";
  int ret2603;
  ret2603 = guestfs_mkfs_b (g, arg2604, 4096, arg2606);
  if (ret2603 == -1)
    return -1;
  const char *arg2609 = "/dev/sda1";
  const char *arg2610 = "/";
  int ret2608;
  ret2608 = guestfs_mount (g, arg2609, arg2610);
  if (ret2608 == -1)
    return -1;
  const char *arg2613 = "/new";
  const char *arg2614 = "new file contents";
  size_t arg2614_size = 17;
  int ret2612;
  ret2612 = guestfs_write (g, arg2613, arg2614, arg2614_size);
  if (ret2612 == -1)
    return -1;
  const char *arg2616 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2616);
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
  const char *arg2619 = "/dev/sda";
  const char *arg2620 = "mbr";
  int ret2618;
  ret2618 = guestfs_part_init (g, arg2619, arg2620);
  if (ret2618 == -1)
    return -1;
  const char *arg2623 = "/dev/sda";
  const char *arg2624 = "p";
  int ret2622;
  ret2622 = guestfs_part_add (g, arg2623, arg2624, 64, 204799);
  if (ret2622 == -1)
    return -1;
  const char *arg2629 = "vfat";
  const char *arg2631 = "/dev/sda1";
  int ret2628;
  ret2628 = guestfs_mkfs_b (g, arg2629, 32768, arg2631);
  if (ret2628 == -1)
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
  const char *arg2634 = "/dev/sda";
  const char *arg2635 = "mbr";
  int ret2633;
  ret2633 = guestfs_part_init (g, arg2634, arg2635);
  if (ret2633 == -1)
    return -1;
  const char *arg2638 = "/dev/sda";
  const char *arg2639 = "p";
  int ret2637;
  ret2637 = guestfs_part_add (g, arg2638, arg2639, 64, 204799);
  if (ret2637 == -1)
    return -1;
  const char *arg2644 = "vfat";
  const char *arg2646 = "/dev/sda1";
  int ret2643;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2643 = guestfs_mkfs_b (g, arg2644, 32769, arg2646);
  guestfs_pop_error_handler (g);
  if (ret2643 != -1)
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
  const char *arg2649 = "/dev/sda";
  const char *arg2650 = "mbr";
  int ret2648;
  ret2648 = guestfs_part_init (g, arg2649, arg2650);
  if (ret2648 == -1)
    return -1;
  const char *arg2653 = "/dev/sda";
  const char *arg2654 = "p";
  int ret2652;
  ret2652 = guestfs_part_add (g, arg2653, arg2654, 64, 204799);
  if (ret2652 == -1)
    return -1;
  const char *arg2659 = "vfat";
  const char *arg2661 = "/dev/sda1";
  int ret2658;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2658 = guestfs_mkfs_b (g, arg2659, 33280, arg2661);
  guestfs_pop_error_handler (g);
  if (ret2658 != -1)
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

  const char *features2663[] = { "ntfsprogs", NULL };
  if (!guestfs_feature_available (g, (char **) features2663)) {
    skipped ("test_mkfs_b_4", "group %s not available in daemon",
             features2663[0]);
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
  const char *arg2665 = "/dev/sda";
  const char *arg2666 = "mbr";
  int ret2664;
  ret2664 = guestfs_part_disk (g, arg2665, arg2666);
  if (ret2664 == -1)
    return -1;
  const char *arg2669 = "ntfs";
  const char *arg2671 = "/dev/sda1";
  int ret2668;
  ret2668 = guestfs_mkfs_b (g, arg2669, 32768, arg2671);
  if (ret2668 == -1)
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

  const char *features2673[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features2673)) {
    skipped ("test_mkfs_btrfs_0", "group %s not available in daemon",
             features2673[0]);
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
  const char *arg2675 = "/dev/sda";
  const char *arg2676 = "mbr";
  int ret2674;
  ret2674 = guestfs_part_disk (g, arg2675, arg2676);
  if (ret2674 == -1)
    return -1;
  const char *arg2679_0 = "/dev/sda1";
  const char *const arg2679[] = {
    arg2679_0,
    NULL
  };
  struct guestfs_mkfs_btrfs_argv optargs2680;
  optargs2680.allocstart = 0;
  optargs2680.bytecount = 268435456;
  optargs2680.datatype = "single";
  optargs2680.label = "test";
  optargs2680.metadata = "single";
  optargs2680.nodesize = 65536;
  optargs2680.sectorsize = 4096;
  optargs2680.bitmask = UINT64_C(0xf7);
  int ret2678;
  ret2678 = guestfs_mkfs_btrfs_argv (g, (char **) arg2679, &optargs2680);
  if (ret2678 == -1)
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
  const char *arg2682 = "/lost+found";
  int ret2681;
  ret2681 = guestfs_rm_rf (g, arg2682);
  if (ret2681 == -1)
    return -1;
  const char *arg2685 = "/";
  int ret2684;
  ret2684 = guestfs_mklost_and_found (g, arg2685);
  if (ret2684 == -1)
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

  const char *features2687[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2687)) {
    skipped ("test_mknod_0", "group %s not available in daemon",
             features2687[0]);
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
  const char *arg2691 = "/mknod";
  int ret1;
  ret1 = guestfs_mknod (g, 4607, 0, 0, arg2691);
  if (ret1 == -1)
    return -1;
  const char *arg2693 = "/mknod";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2693);
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

  const char *features2695[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2695)) {
    skipped ("test_mknod_1", "group %s not available in daemon",
             features2695[0]);
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
  const char *arg2699 = "/mknod2";
  int ret1;
  ret1 = guestfs_mknod (g, 25087, 66, 99, arg2699);
  if (ret1 == -1)
    return -1;
  const char *arg2701 = "/mknod2";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2701);
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

  const char *features2703[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2703)) {
    skipped ("test_mknod_b_0", "group %s not available in daemon",
             features2703[0]);
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
  const char *arg2707 = "/mknod_b";
  int ret1;
  ret1 = guestfs_mknod_b (g, 511, 99, 66, arg2707);
  if (ret1 == -1)
    return -1;
  const char *arg2709 = "/mknod_b";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2709);
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

  const char *features2711[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2711)) {
    skipped ("test_mknod_b_1", "group %s not available in daemon",
             features2711[0]);
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
  const char *arg2716 = "/mknod_b-2";
  int ret2712;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2712 = guestfs_mknod_b (g, 4607, 99, 66, arg2716);
  guestfs_pop_error_handler (g);
  if (ret2712 != -1)
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

  const char *features2718[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2718)) {
    skipped ("test_mknod_c_0", "group %s not available in daemon",
             features2718[0]);
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
  const char *arg2722 = "/mknod_c";
  int ret1;
  ret1 = guestfs_mknod_c (g, 511, 99, 66, arg2722);
  if (ret1 == -1)
    return -1;
  const char *arg2724 = "/mknod_c";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg2724);
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

  const char *features2726[] = { "mknod", NULL };
  if (!guestfs_feature_available (g, (char **) features2726)) {
    skipped ("test_mknod_c_1", "group %s not available in daemon",
             features2726[0]);
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
  const char *arg2731 = "/mknod_c-2";
  int ret2727;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2727 = guestfs_mknod_c (g, 8703, 99, 66, arg2731);
  guestfs_pop_error_handler (g);
  if (ret2727 != -1)
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
  const char *arg2734 = "/dev/sda";
  const char *arg2735 = "mbr";
  int ret2733;
  ret2733 = guestfs_part_disk (g, arg2734, arg2735);
  if (ret2733 == -1)
    return -1;
  const char *arg2738 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs2739;
  optargs2739.bitmask = UINT64_C(0x0);
  int ret2737;
  ret2737 = guestfs_mkswap_opts_argv (g, arg2738, &optargs2739);
  if (ret2737 == -1)
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
  const char *arg2741 = "/dev/sda";
  const char *arg2742 = "mbr";
  int ret2740;
  ret2740 = guestfs_part_disk (g, arg2741, arg2742);
  if (ret2740 == -1)
    return -1;
  const char *arg2745 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs2746;
  optargs2746.label = "hello";
  optargs2746.bitmask = UINT64_C(0x1);
  int ret2744;
  ret2744 = guestfs_mkswap_opts_argv (g, arg2745, &optargs2746);
  if (ret2744 == -1)
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
  const char *arg2748 = "/dev/sda";
  const char *arg2749 = "mbr";
  int ret2747;
  ret2747 = guestfs_part_disk (g, arg2748, arg2749);
  if (ret2747 == -1)
    return -1;
  const char *arg2752 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs2753;
  optargs2753.uuid = "1fcd9dde-504c-1950-e283-6620ffcdc4fa";
  optargs2753.bitmask = UINT64_C(0x2);
  int ret2751;
  ret2751 = guestfs_mkswap_opts_argv (g, arg2752, &optargs2753);
  if (ret2751 == -1)
    return -1;
  const char *arg2754 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_uuid (g, arg2754);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "1fcd9dde-504c-1950-e283-6620ffcdc4fa")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_mkswap_2", "vfs_uuid", "1fcd9dde-504c-1950-e283-6620ffcdc4fa", ret);
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
  const char *arg2757 = "/dev/sda";
  const char *arg2758 = "mbr";
  int ret2756;
  ret2756 = guestfs_part_disk (g, arg2757, arg2758);
  if (ret2756 == -1)
    return -1;
  const char *arg2761 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs2762;
  optargs2762.label = "hello";
  optargs2762.uuid = "1fcd9dde-504c-1950-e283-6620ffcdc4fa";
  optargs2762.bitmask = UINT64_C(0x3);
  int ret2760;
  ret2760 = guestfs_mkswap_opts_argv (g, arg2761, &optargs2762);
  if (ret2760 == -1)
    return -1;
  const char *arg2763 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg2763);
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
  const char *arg2766 = "/dev/sda";
  const char *arg2767 = "mbr";
  int ret2765;
  ret2765 = guestfs_part_disk (g, arg2766, arg2767);
  if (ret2765 == -1)
    return -1;
  const char *arg2770 = "hello";
  const char *arg2771 = "/dev/sda1";
  int ret2769;
  ret2769 = guestfs_mkswap_L (g, arg2770, arg2771);
  if (ret2769 == -1)
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

  const char *features2773[] = { "linuxfsuuid", NULL };
  if (!guestfs_feature_available (g, (char **) features2773)) {
    skipped ("test_mkswap_U_0", "group %s not available in daemon",
             features2773[0]);
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
  const char *arg2775 = "/dev/sda";
  const char *arg2776 = "mbr";
  int ret2774;
  ret2774 = guestfs_part_disk (g, arg2775, arg2776);
  if (ret2774 == -1)
    return -1;
  const char *arg2779 = "1fcd9dde-504c-1950-e283-6620ffcdc4fa";
  const char *arg2780 = "/dev/sda1";
  int ret2778;
  ret2778 = guestfs_mkswap_U (g, arg2779, arg2780);
  if (ret2778 == -1)
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
  const char *arg2783 = "/mkswap_file";
  int ret2782;
  ret2782 = guestfs_fallocate (g, arg2783, 8388608);
  if (ret2782 == -1)
    return -1;
  const char *arg2787 = "/mkswap_file";
  int ret2786;
  ret2786 = guestfs_mkswap_file (g, arg2787);
  if (ret2786 == -1)
    return -1;
  const char *arg2790 = "/mkswap_file";
  int ret2789;
  ret2789 = guestfs_rm (g, arg2790);
  if (ret2789 == -1)
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
  const char *arg2793 = "/mktemp";
  int ret2792;
  ret2792 = guestfs_mkdir (g, arg2793);
  if (ret2792 == -1)
    return -1;
  const char *arg2796 = "/mktemp/tmpXXXXXX";
  struct guestfs_mktemp_argv optargs2797;
  optargs2797.bitmask = UINT64_C(0x0);
  CLEANUP_FREE char *ret2795;
  ret2795 = guestfs_mktemp_argv (g, arg2796, &optargs2797);
  if (ret2795 == NULL)
      return -1;
  const char *arg2799 = "/mktemp/tmpXXXXXX";
  struct guestfs_mktemp_argv optargs2800;
  optargs2800.suffix = "suff";
  optargs2800.bitmask = UINT64_C(0x1);
  CLEANUP_FREE char *ret2798;
  ret2798 = guestfs_mktemp_argv (g, arg2799, &optargs2800);
  if (ret2798 == NULL)
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

  const char *features2801[] = { "linuxmodules", NULL };
  if (!guestfs_feature_available (g, (char **) features2801)) {
    skipped ("test_modprobe_0", "group %s not available in daemon",
             features2801[0]);
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
  const char *arg2803 = "fat";
  int ret2802;
  ret2802 = guestfs_modprobe (g, arg2803);
  if (ret2802 == -1)
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
  const char *arg2806 = "/dev/sda";
  const char *arg2807 = "mbr";
  int ret2805;
  ret2805 = guestfs_part_disk (g, arg2806, arg2807);
  if (ret2805 == -1)
    return -1;
  const char *arg2810 = "ext2";
  const char *arg2811 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs2812;
  optargs2812.bitmask = UINT64_C(0x0);
  int ret2809;
  ret2809 = guestfs_mkfs_opts_argv (g, arg2810, arg2811, &optargs2812);
  if (ret2809 == -1)
    return -1;
  const char *arg2814 = "/dev/sda1";
  const char *arg2815 = "/";
  int ret2813;
  ret2813 = guestfs_mount (g, arg2814, arg2815);
  if (ret2813 == -1)
    return -1;
  const char *arg2818 = "/new";
  const char *arg2819 = "new file contents";
  size_t arg2819_size = 17;
  int ret2817;
  ret2817 = guestfs_write (g, arg2818, arg2819, arg2819_size);
  if (ret2817 == -1)
    return -1;
  const char *arg2821 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2821);
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
  const char *arg2824 = "/";
  struct guestfs_umount_opts_argv optargs2825;
  optargs2825.force = 0;
  optargs2825.lazyunmount = 0;
  optargs2825.bitmask = UINT64_C(0x3);
  int ret2823;
  ret2823 = guestfs_umount_opts_argv (g, arg2824, &optargs2825);
  if (ret2823 == -1)
    return -1;
  const char *arg2827 = "/dev/sda1";
  const char *arg2828 = "/";
  int ret2826;
  ret2826 = guestfs_mount_ro (g, arg2827, arg2828);
  if (ret2826 == -1)
    return -1;
  const char *arg2831 = "/new";
  int ret2830;
  guestfs_push_error_handler (g, NULL, NULL);
  ret2830 = guestfs_touch (g, arg2831);
  guestfs_pop_error_handler (g);
  if (ret2830 != -1)
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
  const char *arg2834 = "/new";
  const char *arg2835 = "data";
  size_t arg2835_size = 4;
  int ret2833;
  ret2833 = guestfs_write (g, arg2834, arg2835, arg2835_size);
  if (ret2833 == -1)
    return -1;
  const char *arg2838 = "/";
  struct guestfs_umount_opts_argv optargs2839;
  optargs2839.force = 0;
  optargs2839.lazyunmount = 0;
  optargs2839.bitmask = UINT64_C(0x3);
  int ret2837;
  ret2837 = guestfs_umount_opts_argv (g, arg2838, &optargs2839);
  if (ret2837 == -1)
    return -1;
  const char *arg2841 = "/dev/sda1";
  const char *arg2842 = "/";
  int ret2840;
  ret2840 = guestfs_mount_ro (g, arg2841, arg2842);
  if (ret2840 == -1)
    return -1;
  const char *arg2844 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2844);
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
  const char *arg2848 = "/mv";
  int ret2847;
  ret2847 = guestfs_mkdir (g, arg2848);
  if (ret2847 == -1)
    return -1;
  const char *arg2851 = "/mv/old";
  const char *arg2852 = "file content";
  size_t arg2852_size = 12;
  int ret2850;
  ret2850 = guestfs_write (g, arg2851, arg2852, arg2852_size);
  if (ret2850 == -1)
    return -1;
  const char *arg2855 = "/mv/old";
  const char *arg2856 = "/mv/new";
  int ret2854;
  ret2854 = guestfs_mv (g, arg2855, arg2856);
  if (ret2854 == -1)
    return -1;
  const char *arg2858 = "/mv/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg2858);
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
  const char *arg2861 = "/mv2";
  int ret2860;
  ret2860 = guestfs_mkdir (g, arg2861);
  if (ret2860 == -1)
    return -1;
  const char *arg2864 = "/mv2/old";
  const char *arg2865 = "file content";
  size_t arg2865_size = 12;
  int ret2863;
  ret2863 = guestfs_write (g, arg2864, arg2865, arg2865_size);
  if (ret2863 == -1)
    return -1;
  const char *arg2868 = "/mv2/old";
  const char *arg2869 = "/mv2/new";
  int ret2867;
  ret2867 = guestfs_mv (g, arg2868, arg2869);
  if (ret2867 == -1)
    return -1;
  const char *arg2871 = "/mv2/old";
  struct guestfs_is_file_opts_argv optargs2872;
  optargs2872.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg2871, &optargs2872);
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

  const char *features2874[] = { "ntfs3g", NULL };
  if (!guestfs_feature_available (g, (char **) features2874)) {
    skipped ("test_ntfs_3g_probe_0", "group %s not available in daemon",
             features2874[0]);
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
  const char *arg2875 = "/dev/sda";
  const char *arg2876 = "mbr";
  int ret2;
  ret2 = guestfs_part_disk (g, arg2875, arg2876);
  if (ret2 == -1)
    return -1;
  const char *arg2878 = "ntfs";
  const char *arg2879 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs2880;
  optargs2880.bitmask = UINT64_C(0x0);
  int ret1;
  ret1 = guestfs_mkfs_opts_argv (g, arg2878, arg2879, &optargs2880);
  if (ret1 == -1)
    return -1;
  const char *arg2882 = "/dev/sda1";
  int ret;
  ret = guestfs_ntfs_3g_probe (g, 1, arg2882);
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

  const char *features2884[] = { "ntfs3g", NULL };
  if (!guestfs_feature_available (g, (char **) features2884)) {
    skipped ("test_ntfs_3g_probe_1", "group %s not available in daemon",
             features2884[0]);
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
  const char *arg2885 = "/dev/sda";
  const char *arg2886 = "mbr";
  int ret2;
  ret2 = guestfs_part_disk (g, arg2885, arg2886);
  if (ret2 == -1)
    return -1;
  const char *arg2888 = "ext2";
  const char *arg2889 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs2890;
  optargs2890.bitmask = UINT64_C(0x0);
  int ret1;
  ret1 = guestfs_mkfs_opts_argv (g, arg2888, arg2889, &optargs2890);
  if (ret1 == -1)
    return -1;
  const char *arg2892 = "/dev/sda1";
  int ret;
  ret = guestfs_ntfs_3g_probe (g, 1, arg2892);
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

  const char *features2894[] = { "ntfs3g", NULL };
  if (!guestfs_feature_available (g, (char **) features2894)) {
    skipped ("test_ntfsfix_0", "group %s not available in daemon",
             features2894[0]);
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
  const char *arg2896 = "ntfs";
  const char *arg2897 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs2898;
  optargs2898.bitmask = UINT64_C(0x0);
  int ret2895;
  ret2895 = guestfs_mkfs_opts_argv (g, arg2896, arg2897, &optargs2898);
  if (ret2895 == -1)
    return -1;
  const char *arg2900 = "/dev/sda1";
  struct guestfs_ntfsfix_argv optargs2901;
  optargs2901.clearbadsectors = 0;
  optargs2901.bitmask = UINT64_C(0x1);
  int ret2899;
  ret2899 = guestfs_ntfsfix_argv (g, arg2900, &optargs2901);
  if (ret2899 == -1)
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
  const char *arg2903 = "/dev/sda";
  const char *arg2904 = "mbr";
  int ret2902;
  ret2902 = guestfs_part_init (g, arg2903, arg2904);
  if (ret2902 == -1)
    return -1;
  const char *arg2907 = "/dev/sda";
  const char *arg2908 = "primary";
  int ret2906;
  ret2906 = guestfs_part_add (g, arg2907, arg2908, 1, -1);
  if (ret2906 == -1)
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
  const char *arg2913 = "/dev/sda";
  const char *arg2914 = "gpt";
  int ret2912;
  ret2912 = guestfs_part_init (g, arg2913, arg2914);
  if (ret2912 == -1)
    return -1;
  const char *arg2917 = "/dev/sda";
  const char *arg2918 = "primary";
  int ret2916;
  ret2916 = guestfs_part_add (g, arg2917, arg2918, 34, 127);
  if (ret2916 == -1)
    return -1;
  const char *arg2923 = "/dev/sda";
  const char *arg2924 = "primary";
  int ret2922;
  ret2922 = guestfs_part_add (g, arg2923, arg2924, 128, -34);
  if (ret2922 == -1)
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
  const char *arg2929 = "/dev/sda";
  const char *arg2930 = "mbr";
  int ret2928;
  ret2928 = guestfs_part_init (g, arg2929, arg2930);
  if (ret2928 == -1)
    return -1;
  const char *arg2933 = "/dev/sda";
  const char *arg2934 = "primary";
  int ret2932;
  ret2932 = guestfs_part_add (g, arg2933, arg2934, 32, 127);
  if (ret2932 == -1)
    return -1;
  const char *arg2939 = "/dev/sda";
  const char *arg2940 = "primary";
  int ret2938;
  ret2938 = guestfs_part_add (g, arg2939, arg2940, 128, 255);
  if (ret2938 == -1)
    return -1;
  const char *arg2945 = "/dev/sda";
  const char *arg2946 = "primary";
  int ret2944;
  ret2944 = guestfs_part_add (g, arg2945, arg2946, 256, 511);
  if (ret2944 == -1)
    return -1;
  const char *arg2951 = "/dev/sda";
  const char *arg2952 = "primary";
  int ret2950;
  ret2950 = guestfs_part_add (g, arg2951, arg2952, 512, -1);
  if (ret2950 == -1)
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
  const char *arg2957 = "/dev/sda";
  const char *arg2958 = "mbr";
  int ret2956;
  ret2956 = guestfs_part_init (g, arg2957, arg2958);
  if (ret2956 == -1)
    return -1;
  const char *arg2961 = "/dev/sda";
  const char *arg2962 = "primary";
  int ret2960;
  ret2960 = guestfs_part_add (g, arg2961, arg2962, 1, -1);
  if (ret2960 == -1)
    return -1;
  const char *arg2967 = "/dev/sda";
  int ret2966;
  ret2966 = guestfs_part_del (g, arg2967, 1);
  if (ret2966 == -1)
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
  const char *arg2971 = "/dev/sda";
  const char *arg2972 = "mbr";
  int ret2970;
  ret2970 = guestfs_part_disk (g, arg2971, arg2972);
  if (ret2970 == -1)
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
  const char *arg2975 = "/dev/sda";
  const char *arg2976 = "gpt";
  int ret2974;
  ret2974 = guestfs_part_disk (g, arg2975, arg2976);
  if (ret2974 == -1)
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
  const char *arg2979 = "/dev/sda";
  const char *arg2980 = "mbr";
  int ret2978;
  ret2978 = guestfs_part_init (g, arg2979, arg2980);
  if (ret2978 == -1)
    return -1;
  const char *arg2983 = "/dev/sda";
  const char *arg2984 = "primary";
  int ret2982;
  ret2982 = guestfs_part_add (g, arg2983, arg2984, 1, -1);
  if (ret2982 == -1)
    return -1;
  const char *arg2989 = "/dev/sda";
  int ret2988;
  ret2988 = guestfs_part_set_bootable (g, arg2989, 1, 1);
  if (ret2988 == -1)
    return -1;
  const char *arg2993 = "/dev/sda";
  int ret;
  ret = guestfs_part_get_bootable (g, arg2993, 1);
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

  const char *features2996[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features2996)) {
    skipped ("test_part_get_disk_guid_0", "group %s not available in daemon",
             features2996[0]);
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
  const char *arg2998 = "/dev/sda";
  const char *arg2999 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret2997;
  ret2997 = guestfs_part_set_disk_guid (g, arg2998, arg2999);
  if (ret2997 == -1)
    return -1;
  const char *arg3001 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_disk_guid (g, arg3001);
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

  const char *features3003[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3003)) {
    skipped ("test_part_get_gpt_attributes_0", "group %s not available in daemon",
             features3003[0]);
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
  const char *arg3004 = "/dev/sda";
  int ret1;
  ret1 = guestfs_part_set_gpt_attributes (g, arg3004, 1, 0);
  if (ret1 == -1)
    return -1;
  const char *arg3008 = "/dev/sda";
  int64_t ret;
  ret = guestfs_part_get_gpt_attributes (g, arg3008, 1);
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

  const char *features3011[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3011)) {
    skipped ("test_part_get_gpt_guid_0", "group %s not available in daemon",
             features3011[0]);
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
  const char *arg3013 = "/dev/sda";
  const char *arg3015 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret3012;
  ret3012 = guestfs_part_set_gpt_guid (g, arg3013, 1, arg3015);
  if (ret3012 == -1)
    return -1;
  const char *arg3017 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_gpt_guid (g, arg3017, 1);
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

  const char *features3020[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3020)) {
    skipped ("test_part_get_gpt_type_0", "group %s not available in daemon",
             features3020[0]);
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
  const char *arg3022 = "/dev/sda";
  const char *arg3024 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret3021;
  ret3021 = guestfs_part_set_gpt_type (g, arg3022, 1, arg3024);
  if (ret3021 == -1)
    return -1;
  const char *arg3026 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_gpt_type (g, arg3026, 1);
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
  const char *arg3029 = "/dev/sda";
  const char *arg3030 = "mbr";
  int ret3;
  ret3 = guestfs_part_init (g, arg3029, arg3030);
  if (ret3 == -1)
    return -1;
  const char *arg3032 = "/dev/sda";
  const char *arg3033 = "primary";
  int ret2;
  ret2 = guestfs_part_add (g, arg3032, arg3033, 1, -1);
  if (ret2 == -1)
    return -1;
  const char *arg3037 = "/dev/sda";
  int ret1;
  ret1 = guestfs_part_set_mbr_id (g, arg3037, 1, 127);
  if (ret1 == -1)
    return -1;
  const char *arg3041 = "/dev/sda";
  int ret;
  ret = guestfs_part_get_mbr_id (g, arg3041, 1);
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
  const char *arg3045 = "/dev/sda";
  const char *arg3046 = "mbr";
  int ret3044;
  ret3044 = guestfs_part_init (g, arg3045, arg3046);
  if (ret3044 == -1)
    return -1;
  const char *arg3049 = "/dev/sda";
  const char *arg3050 = "p";
  int ret3048;
  ret3048 = guestfs_part_add (g, arg3049, arg3050, 64, 204799);
  if (ret3048 == -1)
    return -1;
  const char *arg3055 = "/dev/sda";
  const char *arg3056 = "e";
  int ret3054;
  ret3054 = guestfs_part_add (g, arg3055, arg3056, 204800, 614400);
  if (ret3054 == -1)
    return -1;
  const char *arg3061 = "/dev/sda";
  const char *arg3062 = "l";
  int ret3060;
  ret3060 = guestfs_part_add (g, arg3061, arg3062, 204864, 205988);
  if (ret3060 == -1)
    return -1;
  const char *arg3066 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_mbr_part_type (g, arg3066, 5);
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
  const char *arg3070 = "/dev/sda";
  const char *arg3071 = "mbr";
  int ret3069;
  ret3069 = guestfs_part_init (g, arg3070, arg3071);
  if (ret3069 == -1)
    return -1;
  const char *arg3074 = "/dev/sda";
  const char *arg3075 = "p";
  int ret3073;
  ret3073 = guestfs_part_add (g, arg3074, arg3075, 64, 204799);
  if (ret3073 == -1)
    return -1;
  const char *arg3080 = "/dev/sda";
  const char *arg3081 = "e";
  int ret3079;
  ret3079 = guestfs_part_add (g, arg3080, arg3081, 204800, 614400);
  if (ret3079 == -1)
    return -1;
  const char *arg3086 = "/dev/sda";
  const char *arg3087 = "l";
  int ret3085;
  ret3085 = guestfs_part_add (g, arg3086, arg3087, 204864, 205988);
  if (ret3085 == -1)
    return -1;
  const char *arg3091 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_mbr_part_type (g, arg3091, 2);
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
  const char *arg3095 = "/dev/sda";
  const char *arg3096 = "gpt";
  int ret3094;
  ret3094 = guestfs_part_disk (g, arg3095, arg3096);
  if (ret3094 == -1)
    return -1;
  const char *arg3098 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_parttype (g, arg3098);
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
  const char *arg3101 = "/dev/sda";
  const char *arg3102 = "gpt";
  int ret3100;
  ret3100 = guestfs_part_init (g, arg3101, arg3102);
  if (ret3100 == -1)
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
  const char *arg3105 = "/dev/sda";
  const char *arg3106 = "mbr";
  int ret3104;
  ret3104 = guestfs_part_init (g, arg3105, arg3106);
  if (ret3104 == -1)
    return -1;
  const char *arg3109 = "/dev/sda";
  const char *arg3110 = "primary";
  int ret3108;
  ret3108 = guestfs_part_add (g, arg3109, arg3110, 1, -1025);
  if (ret3108 == -1)
    return -1;
  const char *arg3115 = "/dev/sda";
  int ret3114;
  ret3114 = guestfs_part_resize (g, arg3115, 1, -1);
  if (ret3114 == -1)
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
  const char *arg3120 = "/dev/sda";
  const char *arg3121 = "mbr";
  int ret3119;
  ret3119 = guestfs_part_disk (g, arg3120, arg3121);
  if (ret3119 == -1)
    return -1;
  const char *arg3124 = "/dev/sda";
  int ret3123;
  ret3123 = guestfs_part_set_bootable (g, arg3124, 1, 1);
  if (ret3123 == -1)
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

  const char *features3128[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3128)) {
    skipped ("test_part_set_disk_guid_0", "group %s not available in daemon",
             features3128[0]);
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
  const char *arg3130 = "/dev/sda";
  const char *arg3131 = "f";
  int ret3129;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3129 = guestfs_part_set_disk_guid (g, arg3130, arg3131);
  guestfs_pop_error_handler (g);
  if (ret3129 != -1)
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

  const char *features3133[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3133)) {
    skipped ("test_part_set_disk_guid_1", "group %s not available in daemon",
             features3133[0]);
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
  const char *arg3135 = "/dev/sda";
  const char *arg3136 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret3134;
  ret3134 = guestfs_part_set_disk_guid (g, arg3135, arg3136);
  if (ret3134 == -1)
    return -1;
  const char *arg3138 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_disk_guid (g, arg3138);
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

  const char *features3140[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3140)) {
    skipped ("test_part_set_disk_guid_random_0", "group %s not available in daemon",
             features3140[0]);
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
  const char *arg3142 = "/dev/sda";
  int ret3141;
  ret3141 = guestfs_part_set_disk_guid_random (g, arg3142);
  if (ret3141 == -1)
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

  const char *features3144[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3144)) {
    skipped ("test_part_set_gpt_attributes_0", "group %s not available in daemon",
             features3144[0]);
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
  const char *arg3145 = "/dev/sda";
  int ret1;
  ret1 = guestfs_part_set_gpt_attributes (g, arg3145, 1, 4);
  if (ret1 == -1)
    return -1;
  const char *arg3149 = "/dev/sda";
  int64_t ret;
  ret = guestfs_part_get_gpt_attributes (g, arg3149, 1);
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

  const char *features3152[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3152)) {
    skipped ("test_part_set_gpt_guid_0", "group %s not available in daemon",
             features3152[0]);
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
  const char *arg3154 = "/dev/sda";
  const char *arg3156 = "f";
  int ret3153;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3153 = guestfs_part_set_gpt_guid (g, arg3154, 1, arg3156);
  guestfs_pop_error_handler (g);
  if (ret3153 != -1)
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

  const char *features3158[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3158)) {
    skipped ("test_part_set_gpt_guid_1", "group %s not available in daemon",
             features3158[0]);
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
  const char *arg3160 = "/dev/sda";
  const char *arg3162 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret3159;
  ret3159 = guestfs_part_set_gpt_guid (g, arg3160, 1, arg3162);
  if (ret3159 == -1)
    return -1;
  const char *arg3164 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_gpt_guid (g, arg3164, 1);
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

  const char *features3167[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3167)) {
    skipped ("test_part_set_gpt_type_0", "group %s not available in daemon",
             features3167[0]);
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
  const char *arg3169 = "/dev/sda";
  const char *arg3171 = "f";
  int ret3168;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3168 = guestfs_part_set_gpt_type (g, arg3169, 1, arg3171);
  guestfs_pop_error_handler (g);
  if (ret3168 != -1)
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

  const char *features3173[] = { "gdisk", NULL };
  if (!guestfs_feature_available (g, (char **) features3173)) {
    skipped ("test_part_set_gpt_type_1", "group %s not available in daemon",
             features3173[0]);
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
  const char *arg3175 = "/dev/sda";
  const char *arg3177 = "01234567-89AB-CDEF-0123-456789ABCDEF";
  int ret3174;
  ret3174 = guestfs_part_set_gpt_type (g, arg3175, 1, arg3177);
  if (ret3174 == -1)
    return -1;
  const char *arg3179 = "/dev/sda";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_get_gpt_type (g, arg3179, 1);
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
  const char *arg3183 = "/dev/sda";
  const char *arg3184 = "gpt";
  int ret3182;
  ret3182 = guestfs_part_disk (g, arg3183, arg3184);
  if (ret3182 == -1)
    return -1;
  const char *arg3187 = "/dev/sda";
  const char *arg3189 = "thepartname";
  int ret3186;
  ret3186 = guestfs_part_set_name (g, arg3187, 1, arg3189);
  if (ret3186 == -1)
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
  const char *arg3191 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_part_to_dev (g, arg3191);
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
  const char *arg3194 = "/dev/sda";
  CLEANUP_FREE char *ret3193;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3193 = guestfs_part_to_dev (g, arg3194);
  guestfs_pop_error_handler (g);
  if (ret3193 != NULL)
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
  const char *arg3196 = "/dev/sda1";
  int ret;
  ret = guestfs_part_to_partnum (g, arg3196);
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
  const char *arg3199 = "/dev/sda";
  int ret3198;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3198 = guestfs_part_to_partnum (g, arg3199);
  guestfs_pop_error_handler (g);
  if (ret3198 != -1)
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
  int ret3201;
  ret3201 = guestfs_ping_daemon (g);
  if (ret3201 == -1)
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
  const char *arg3203 = "/known-4";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_pread (g, arg3203, 1, 3, &size);
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
  const char *arg3207 = "/empty";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_pread (g, arg3207, 0, 100, &size);
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
  const char *arg3211 = "/dev/sdd";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_pread_device (g, arg3211, 8, 32768, &size);
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

  const char *features3215[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3215)) {
    skipped ("test_pvchange_uuid_0", "group %s not available in daemon",
             features3215[0]);
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
  const char *arg3217 = "/dev/sda";
  const char *arg3218 = "mbr";
  int ret3216;
  ret3216 = guestfs_part_disk (g, arg3217, arg3218);
  if (ret3216 == -1)
    return -1;
  const char *arg3221 = "/dev/sda1";
  int ret3220;
  ret3220 = guestfs_pvcreate (g, arg3221);
  if (ret3220 == -1)
    return -1;
  const char *arg3224 = "/dev/sda1";
  int ret3223;
  ret3223 = guestfs_pvchange_uuid (g, arg3224);
  if (ret3223 == -1)
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

  const char *features3226[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3226)) {
    skipped ("test_pvchange_uuid_all_0", "group %s not available in daemon",
             features3226[0]);
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
  const char *arg3228 = "/dev/sda";
  const char *arg3229 = "mbr";
  int ret3227;
  ret3227 = guestfs_part_disk (g, arg3228, arg3229);
  if (ret3227 == -1)
    return -1;
  const char *arg3232 = "/dev/sda1";
  int ret3231;
  ret3231 = guestfs_pvcreate (g, arg3232);
  if (ret3231 == -1)
    return -1;
  int ret3234;
  ret3234 = guestfs_pvchange_uuid_all (g);
  if (ret3234 == -1)
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

  const char *features3236[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3236)) {
    skipped ("test_pvcreate_0", "group %s not available in daemon",
             features3236[0]);
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
  const char *arg3237 = "/dev/sda";
  const char *arg3238 = "mbr";
  int ret7;
  ret7 = guestfs_part_init (g, arg3237, arg3238);
  if (ret7 == -1)
    return -1;
  const char *arg3240 = "/dev/sda";
  const char *arg3241 = "p";
  int ret6;
  ret6 = guestfs_part_add (g, arg3240, arg3241, 64, 204799);
  if (ret6 == -1)
    return -1;
  const char *arg3245 = "/dev/sda";
  const char *arg3246 = "p";
  int ret5;
  ret5 = guestfs_part_add (g, arg3245, arg3246, 204800, 409599);
  if (ret5 == -1)
    return -1;
  const char *arg3250 = "/dev/sda";
  const char *arg3251 = "p";
  int ret4;
  ret4 = guestfs_part_add (g, arg3250, arg3251, 409600, -64);
  if (ret4 == -1)
    return -1;
  const char *arg3255 = "/dev/sda1";
  int ret3;
  ret3 = guestfs_pvcreate (g, arg3255);
  if (ret3 == -1)
    return -1;
  const char *arg3257 = "/dev/sda2";
  int ret2;
  ret2 = guestfs_pvcreate (g, arg3257);
  if (ret2 == -1)
    return -1;
  const char *arg3259 = "/dev/sda3";
  int ret1;
  ret1 = guestfs_pvcreate (g, arg3259);
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

  const char *features3262[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3262)) {
    skipped ("test_pvremove_0", "group %s not available in daemon",
             features3262[0]);
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
  const char *arg3263 = "/dev/sda";
  const char *arg3264 = "mbr";
  int ret7;
  ret7 = guestfs_part_disk (g, arg3263, arg3264);
  if (ret7 == -1)
    return -1;
  const char *arg3266 = "/dev/sda1";
  int ret6;
  ret6 = guestfs_pvcreate (g, arg3266);
  if (ret6 == -1)
    return -1;
  const char *arg3268 = "VG";
  const char *arg3269_0 = "/dev/sda1";
  const char *const arg3269[] = {
    arg3269_0,
    NULL
  };
  int ret5;
  ret5 = guestfs_vgcreate (g, arg3268, (char **) arg3269);
  if (ret5 == -1)
    return -1;
  const char *arg3271 = "LV1";
  const char *arg3272 = "VG";
  int ret4;
  ret4 = guestfs_lvcreate (g, arg3271, arg3272, 50);
  if (ret4 == -1)
    return -1;
  const char *arg3275 = "LV2";
  const char *arg3276 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg3275, arg3276, 50);
  if (ret3 == -1)
    return -1;
  const char *arg3279 = "VG";
  int ret2;
  ret2 = guestfs_vgremove (g, arg3279);
  if (ret2 == -1)
    return -1;
  const char *arg3281 = "/dev/sda1";
  int ret1;
  ret1 = guestfs_pvremove (g, arg3281);
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

  const char *features3284[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3284)) {
    skipped ("test_pvremove_1", "group %s not available in daemon",
             features3284[0]);
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
  const char *arg3285 = "/dev/sda";
  const char *arg3286 = "mbr";
  int ret7;
  ret7 = guestfs_part_disk (g, arg3285, arg3286);
  if (ret7 == -1)
    return -1;
  const char *arg3288 = "/dev/sda1";
  int ret6;
  ret6 = guestfs_pvcreate (g, arg3288);
  if (ret6 == -1)
    return -1;
  const char *arg3290 = "VG";
  const char *arg3291_0 = "/dev/sda1";
  const char *const arg3291[] = {
    arg3291_0,
    NULL
  };
  int ret5;
  ret5 = guestfs_vgcreate (g, arg3290, (char **) arg3291);
  if (ret5 == -1)
    return -1;
  const char *arg3293 = "LV1";
  const char *arg3294 = "VG";
  int ret4;
  ret4 = guestfs_lvcreate (g, arg3293, arg3294, 50);
  if (ret4 == -1)
    return -1;
  const char *arg3297 = "LV2";
  const char *arg3298 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg3297, arg3298, 50);
  if (ret3 == -1)
    return -1;
  const char *arg3301 = "VG";
  int ret2;
  ret2 = guestfs_vgremove (g, arg3301);
  if (ret2 == -1)
    return -1;
  const char *arg3303 = "/dev/sda1";
  int ret1;
  ret1 = guestfs_pvremove (g, arg3303);
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

  const char *features3306[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3306)) {
    skipped ("test_pvremove_2", "group %s not available in daemon",
             features3306[0]);
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
  const char *arg3307 = "/dev/sda";
  const char *arg3308 = "mbr";
  int ret7;
  ret7 = guestfs_part_disk (g, arg3307, arg3308);
  if (ret7 == -1)
    return -1;
  const char *arg3310 = "/dev/sda1";
  int ret6;
  ret6 = guestfs_pvcreate (g, arg3310);
  if (ret6 == -1)
    return -1;
  const char *arg3312 = "VG";
  const char *arg3313_0 = "/dev/sda1";
  const char *const arg3313[] = {
    arg3313_0,
    NULL
  };
  int ret5;
  ret5 = guestfs_vgcreate (g, arg3312, (char **) arg3313);
  if (ret5 == -1)
    return -1;
  const char *arg3315 = "LV1";
  const char *arg3316 = "VG";
  int ret4;
  ret4 = guestfs_lvcreate (g, arg3315, arg3316, 50);
  if (ret4 == -1)
    return -1;
  const char *arg3319 = "LV2";
  const char *arg3320 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg3319, arg3320, 50);
  if (ret3 == -1)
    return -1;
  const char *arg3323 = "VG";
  int ret2;
  ret2 = guestfs_vgremove (g, arg3323);
  if (ret2 == -1)
    return -1;
  const char *arg3325 = "/dev/sda1";
  int ret1;
  ret1 = guestfs_pvremove (g, arg3325);
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

  const char *features3328[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3328)) {
    skipped ("test_pvs_0", "group %s not available in daemon",
             features3328[0]);
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

  const char *features3330[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features3330)) {
    skipped ("test_pvs_1", "group %s not available in daemon",
             features3330[0]);
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
  const char *arg3331 = "/dev/sda";
  const char *arg3332 = "mbr";
  int ret7;
  ret7 = guestfs_part_init (g, arg3331, arg3332);
  if (ret7 == -1)
    return -1;
  const char *arg3334 = "/dev/sda";
  const char *arg3335 = "p";
  int ret6;
  ret6 = guestfs_part_add (g, arg3334, arg3335, 64, 204799);
  if (ret6 == -1)
    return -1;
  const char *arg3339 = "/dev/sda";
  const char *arg3340 = "p";
  int ret5;
  ret5 = guestfs_part_add (g, arg3339, arg3340, 204800, 409599);
  if (ret5 == -1)
    return -1;
  const char *arg3344 = "/dev/sda";
  const char *arg3345 = "p";
  int ret4;
  ret4 = guestfs_part_add (g, arg3344, arg3345, 409600, -64);
  if (ret4 == -1)
    return -1;
  const char *arg3349 = "/dev/sda1";
  int ret3;
  ret3 = guestfs_pvcreate (g, arg3349);
  if (ret3 == -1)
    return -1;
  const char *arg3351 = "/dev/sda2";
  int ret2;
  ret2 = guestfs_pvcreate (g, arg3351);
  if (ret2 == -1)
    return -1;
  const char *arg3353 = "/dev/sda3";
  int ret1;
  ret1 = guestfs_pvcreate (g, arg3353);
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
  const char *arg3357 = "/pwrite";
  const char *arg3358 = "new file contents";
  size_t arg3358_size = 17;
  int ret3356;
  ret3356 = guestfs_write (g, arg3357, arg3358, arg3358_size);
  if (ret3356 == -1)
    return -1;
  const char *arg3361 = "/pwrite";
  const char *arg3362 = "data";
  size_t arg3362_size = 4;
  int ret3360;
  ret3360 = guestfs_pwrite (g, arg3361, arg3362, arg3362_size, 4);
  if (ret3360 == -1)
    return -1;
  const char *arg3365 = "/pwrite";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3365);
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
  const char *arg3368 = "/pwrite2";
  const char *arg3369 = "new file contents";
  size_t arg3369_size = 17;
  int ret3367;
  ret3367 = guestfs_write (g, arg3368, arg3369, arg3369_size);
  if (ret3367 == -1)
    return -1;
  const char *arg3372 = "/pwrite2";
  const char *arg3373 = "is extended";
  size_t arg3373_size = 11;
  int ret3371;
  ret3371 = guestfs_pwrite (g, arg3372, arg3373, arg3373_size, 9);
  if (ret3371 == -1)
    return -1;
  const char *arg3376 = "/pwrite2";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3376);
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
  const char *arg3379 = "/pwrite3";
  const char *arg3380 = "new file contents";
  size_t arg3380_size = 17;
  int ret3378;
  ret3378 = guestfs_write (g, arg3379, arg3380, arg3380_size);
  if (ret3378 == -1)
    return -1;
  const char *arg3383 = "/pwrite3";
  const char *arg3384 = "";
  size_t arg3384_size = 0;
  int ret3382;
  ret3382 = guestfs_pwrite (g, arg3383, arg3384, arg3384_size, 4);
  if (ret3382 == -1)
    return -1;
  const char *arg3387 = "/pwrite3";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3387);
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
  const char *arg3389 = "/dev/sda";
  const char *arg3390 = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
  size_t arg3390_size = 66;
  int ret2;
  ret2 = guestfs_pwrite_device (g, arg3389, arg3390, arg3390_size, 446);
  if (ret2 == -1)
    return -1;
  const char *arg3393 = "/dev/sda";
  int ret1;
  ret1 = guestfs_blockdev_rereadpt (g, arg3393);
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
  const char *arg3396 = "/known-4";
  CLEANUP_FREE char *ret;
  size_t size;
  ret = guestfs_read_file (g, arg3396, &size);
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
  const char *arg3398 = "/known-4";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3398);
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
  const char *arg3400 = "/empty";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3400);
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
  const char *arg3402 = "/read_lines1";
  const char *arg3403 = "\n";
  size_t arg3403_size = 1;
  int ret1;
  ret1 = guestfs_write (g, arg3402, arg3403, arg3403_size);
  if (ret1 == -1)
    return -1;
  const char *arg3405 = "/read_lines1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3405);
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
  const char *arg3407 = "/read_lines2";
  const char *arg3408 = "\r\n";
  size_t arg3408_size = 2;
  int ret1;
  ret1 = guestfs_write (g, arg3407, arg3408, arg3408_size);
  if (ret1 == -1)
    return -1;
  const char *arg3410 = "/read_lines2";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3410);
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
  const char *arg3412 = "/read_lines3";
  const char *arg3413 = "\n\r\n";
  size_t arg3413_size = 3;
  int ret1;
  ret1 = guestfs_write (g, arg3412, arg3413, arg3413_size);
  if (ret1 == -1)
    return -1;
  const char *arg3415 = "/read_lines3";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3415);
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
  const char *arg3417 = "/read_lines4";
  const char *arg3418 = "a";
  size_t arg3418_size = 1;
  int ret1;
  ret1 = guestfs_write (g, arg3417, arg3418, arg3418_size);
  if (ret1 == -1)
    return -1;
  const char *arg3420 = "/read_lines4";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3420);
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
  const char *arg3422 = "/read_lines5";
  const char *arg3423 = "a\nb";
  size_t arg3423_size = 3;
  int ret1;
  ret1 = guestfs_write (g, arg3422, arg3423, arg3423_size);
  if (ret1 == -1)
    return -1;
  const char *arg3425 = "/read_lines5";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3425);
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
  const char *arg3427 = "/read_lines6";
  const char *arg3428 = "a\nb\n";
  size_t arg3428_size = 4;
  int ret1;
  ret1 = guestfs_write (g, arg3427, arg3428, arg3428_size);
  if (ret1 == -1)
    return -1;
  const char *arg3430 = "/read_lines6";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3430);
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
  const char *arg3432 = "/read_lines7";
  const char *arg3433 = "a\nb\r\n";
  size_t arg3433_size = 5;
  int ret1;
  ret1 = guestfs_write (g, arg3432, arg3433, arg3433_size);
  if (ret1 == -1)
    return -1;
  const char *arg3435 = "/read_lines7";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3435);
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
  const char *arg3437 = "/read_lines8";
  const char *arg3438 = "a\nb\r\n\n";
  size_t arg3438_size = 6;
  int ret1;
  ret1 = guestfs_write (g, arg3437, arg3438, arg3438_size);
  if (ret1 == -1)
    return -1;
  const char *arg3440 = "/read_lines8";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_read_lines (g, arg3440);
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
  const char *arg3442 = "/../directory";
  CLEANUP_FREE char *ret;
  ret = guestfs_realpath (g, arg3442);
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
  const char *arg3445 = "/";
  struct guestfs_remount_argv optargs3446;
  optargs3446.rw = 0;
  optargs3446.bitmask = UINT64_C(0x1);
  int ret3444;
  ret3444 = guestfs_remount_argv (g, arg3445, &optargs3446);
  if (ret3444 == -1)
    return -1;
  const char *arg3448 = "/remount1";
  const char *arg3449 = "data";
  size_t arg3449_size = 4;
  int ret3447;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3447 = guestfs_write (g, arg3448, arg3449, arg3449_size);
  guestfs_pop_error_handler (g);
  if (ret3447 != -1)
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
  const char *arg3452 = "/";
  struct guestfs_remount_argv optargs3453;
  optargs3453.rw = 0;
  optargs3453.bitmask = UINT64_C(0x1);
  int ret3451;
  ret3451 = guestfs_remount_argv (g, arg3452, &optargs3453);
  if (ret3451 == -1)
    return -1;
  const char *arg3455 = "/";
  struct guestfs_remount_argv optargs3456;
  optargs3456.rw = 1;
  optargs3456.bitmask = UINT64_C(0x1);
  int ret3454;
  ret3454 = guestfs_remount_argv (g, arg3455, &optargs3456);
  if (ret3454 == -1)
    return -1;
  const char *arg3458 = "/remount2";
  const char *arg3459 = "data";
  size_t arg3459_size = 4;
  int ret3457;
  ret3457 = guestfs_write (g, arg3458, arg3459, arg3459_size);
  if (ret3457 == -1)
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
  const char *arg3462 = "/rename";
  int ret3461;
  ret3461 = guestfs_mkdir (g, arg3462);
  if (ret3461 == -1)
    return -1;
  const char *arg3465 = "/rename/old";
  const char *arg3466 = "file content";
  size_t arg3466_size = 12;
  int ret3464;
  ret3464 = guestfs_write (g, arg3465, arg3466, arg3466_size);
  if (ret3464 == -1)
    return -1;
  const char *arg3469 = "/rename/old";
  const char *arg3470 = "/rename/new";
  int ret3468;
  ret3468 = guestfs_rename (g, arg3469, arg3470);
  if (ret3468 == -1)
    return -1;
  const char *arg3472 = "/rename/old";
  struct guestfs_is_file_opts_argv optargs3473;
  optargs3473.bitmask = UINT64_C(0x0);
  int ret;
  ret = guestfs_is_file_opts_argv (g, arg3472, &optargs3473);
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
  const char *arg3475 = "/rm";
  int ret3474;
  ret3474 = guestfs_mkdir (g, arg3475);
  if (ret3474 == -1)
    return -1;
  const char *arg3478 = "/rm/new";
  int ret3477;
  ret3477 = guestfs_touch (g, arg3478);
  if (ret3477 == -1)
    return -1;
  const char *arg3481 = "/rm/new";
  int ret3480;
  ret3480 = guestfs_rm (g, arg3481);
  if (ret3480 == -1)
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
  const char *arg3484 = "/nosuchfile";
  int ret3483;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3483 = guestfs_rm (g, arg3484);
  guestfs_pop_error_handler (g);
  if (ret3483 != -1)
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
  const char *arg3487 = "/rm2";
  int ret3486;
  ret3486 = guestfs_mkdir (g, arg3487);
  if (ret3486 == -1)
    return -1;
  const char *arg3490 = "/rm2";
  int ret3489;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3489 = guestfs_rm (g, arg3490);
  guestfs_pop_error_handler (g);
  if (ret3489 != -1)
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
  const char *arg3493 = "/rm_f";
  int ret3492;
  ret3492 = guestfs_mkdir (g, arg3493);
  if (ret3492 == -1)
    return -1;
  const char *arg3496 = "/rm_f/foo";
  int ret3495;
  ret3495 = guestfs_touch (g, arg3496);
  if (ret3495 == -1)
    return -1;
  const char *arg3499 = "/rm_f/foo";
  int ret3498;
  ret3498 = guestfs_rm_f (g, arg3499);
  if (ret3498 == -1)
    return -1;
  const char *arg3502 = "/rm_f/not_exists";
  int ret3501;
  ret3501 = guestfs_rm_f (g, arg3502);
  if (ret3501 == -1)
    return -1;
  const char *arg3504 = "/rm_f/foo";
  int ret;
  ret = guestfs_exists (g, arg3504);
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
  const char *arg3507 = "/rm_f2";
  int ret3506;
  ret3506 = guestfs_mkdir (g, arg3507);
  if (ret3506 == -1)
    return -1;
  const char *arg3510 = "/rm_f2/foo";
  int ret3509;
  ret3509 = guestfs_mkdir (g, arg3510);
  if (ret3509 == -1)
    return -1;
  const char *arg3513 = "/rm_f2/foo";
  int ret3512;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3512 = guestfs_rm_f (g, arg3513);
  guestfs_pop_error_handler (g);
  if (ret3512 != -1)
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
  const char *arg3516 = "/rm_rf";
  int ret3515;
  ret3515 = guestfs_mkdir (g, arg3516);
  if (ret3515 == -1)
    return -1;
  const char *arg3519 = "/rm_rf/foo";
  int ret3518;
  ret3518 = guestfs_mkdir (g, arg3519);
  if (ret3518 == -1)
    return -1;
  const char *arg3522 = "/rm_rf/foo/bar";
  int ret3521;
  ret3521 = guestfs_touch (g, arg3522);
  if (ret3521 == -1)
    return -1;
  const char *arg3525 = "/rm_rf";
  int ret3524;
  ret3524 = guestfs_rm_rf (g, arg3525);
  if (ret3524 == -1)
    return -1;
  const char *arg3527 = "/rm_rf";
  int ret;
  ret = guestfs_exists (g, arg3527);
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
  const char *arg3530 = "/rmdir";
  int ret3529;
  ret3529 = guestfs_mkdir (g, arg3530);
  if (ret3529 == -1)
    return -1;
  const char *arg3533 = "/rmdir";
  int ret3532;
  ret3532 = guestfs_rmdir (g, arg3533);
  if (ret3532 == -1)
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
  const char *arg3536 = "/rmdir2";
  int ret3535;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3535 = guestfs_rmdir (g, arg3536);
  guestfs_pop_error_handler (g);
  if (ret3535 != -1)
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
  const char *arg3539 = "/rmdir3";
  int ret3538;
  ret3538 = guestfs_mkdir (g, arg3539);
  if (ret3538 == -1)
    return -1;
  const char *arg3542 = "/rmdir3/new";
  int ret3541;
  ret3541 = guestfs_touch (g, arg3542);
  if (ret3541 == -1)
    return -1;
  const char *arg3545 = "/rmdir3/new";
  int ret3544;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3544 = guestfs_rmdir (g, arg3545);
  guestfs_pop_error_handler (g);
  if (ret3544 != -1)
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

  const char *features3547[] = { "scrub", NULL };
  if (!guestfs_feature_available (g, (char **) features3547)) {
    skipped ("test_scrub_device_0", "group %s not available in daemon",
             features3547[0]);
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
  const char *arg3549 = "/dev/sdc";
  int ret3548;
  ret3548 = guestfs_scrub_device (g, arg3549);
  if (ret3548 == -1)
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

  const char *features3551[] = { "scrub", NULL };
  if (!guestfs_feature_available (g, (char **) features3551)) {
    skipped ("test_scrub_file_0", "group %s not available in daemon",
             features3551[0]);
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
  const char *arg3553 = "/scrub_file";
  const char *arg3554 = "content";
  size_t arg3554_size = 7;
  int ret3552;
  ret3552 = guestfs_write (g, arg3553, arg3554, arg3554_size);
  if (ret3552 == -1)
    return -1;
  const char *arg3557 = "/scrub_file";
  int ret3556;
  ret3556 = guestfs_scrub_file (g, arg3557);
  if (ret3556 == -1)
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

  const char *features3559[] = { "scrub", NULL };
  if (!guestfs_feature_available (g, (char **) features3559)) {
    skipped ("test_scrub_file_1", "group %s not available in daemon",
             features3559[0]);
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
  const char *arg3561 = "/scrub_file_2";
  const char *arg3562 = "content";
  size_t arg3562_size = 7;
  int ret3560;
  ret3560 = guestfs_write (g, arg3561, arg3562, arg3562_size);
  if (ret3560 == -1)
    return -1;
  const char *arg3565 = "/scrub_file_2";
  const char *arg3566 = "/scrub_file_2_link";
  int ret3564;
  ret3564 = guestfs_ln_s (g, arg3565, arg3566);
  if (ret3564 == -1)
    return -1;
  const char *arg3569 = "/scrub_file_2_link";
  int ret3568;
  ret3568 = guestfs_scrub_file (g, arg3569);
  if (ret3568 == -1)
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

  const char *features3571[] = { "scrub", NULL };
  if (!guestfs_feature_available (g, (char **) features3571)) {
    skipped ("test_scrub_file_2", "group %s not available in daemon",
             features3571[0]);
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
  const char *arg3573 = "/scrub_file_3_notexisting";
  const char *arg3574 = "/scrub_file_3_link";
  int ret3572;
  ret3572 = guestfs_ln_s (g, arg3573, arg3574);
  if (ret3572 == -1)
    return -1;
  const char *arg3577 = "/scrub_file_3_link";
  int ret3576;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3576 = guestfs_scrub_file (g, arg3577);
  guestfs_pop_error_handler (g);
  if (ret3576 != -1)
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

  const char *features3579[] = { "scrub", NULL };
  if (!guestfs_feature_available (g, (char **) features3579)) {
    skipped ("test_scrub_file_3", "group %s not available in daemon",
             features3579[0]);
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
  const char *arg3581 = "/scrub_file_4";
  const char *arg3582 = "content";
  size_t arg3582_size = 7;
  int ret3580;
  ret3580 = guestfs_write (g, arg3581, arg3582, arg3582_size);
  if (ret3580 == -1)
    return -1;
  const char *arg3585 = "../sysroot/scrub_file_4";
  const char *arg3586 = "/scrub_file_4_link";
  int ret3584;
  ret3584 = guestfs_ln_s (g, arg3585, arg3586);
  if (ret3584 == -1)
    return -1;
  const char *arg3589 = "/scrub_file_4_link";
  int ret3588;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3588 = guestfs_scrub_file (g, arg3589);
  guestfs_pop_error_handler (g);
  if (ret3588 != -1)
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
  const char *arg3592 = "/dev/sda1";
  const char *arg3593 = "testlabel";
  int ret3591;
  ret3591 = guestfs_set_e2label (g, arg3592, arg3593);
  if (ret3591 == -1)
    return -1;
  const char *arg3595 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2label (g, arg3595);
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
  const char *arg3598 = "/dev/sda1";
  const char *arg3599 = "1fcd9dde-504c-1950-e283-6620ffcdc4fa";
  int ret3597;
  ret3597 = guestfs_set_e2uuid (g, arg3598, arg3599);
  if (ret3597 == -1)
    return -1;
  const char *arg3601 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2uuid (g, arg3601);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "1fcd9dde-504c-1950-e283-6620ffcdc4fa")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_set_e2uuid_0", "get_e2uuid", "1fcd9dde-504c-1950-e283-6620ffcdc4fa", ret);
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
  const char *arg3604 = "/dev/sda1";
  const char *arg3605 = "clear";
  int ret3603;
  ret3603 = guestfs_set_e2uuid (g, arg3604, arg3605);
  if (ret3603 == -1)
    return -1;
  const char *arg3607 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_get_e2uuid (g, arg3607);
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
  const char *arg3610 = "/dev/sda1";
  const char *arg3611 = "random";
  int ret3609;
  ret3609 = guestfs_set_e2uuid (g, arg3610, arg3611);
  if (ret3609 == -1)
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
  const char *arg3614 = "/dev/sda1";
  const char *arg3615 = "time";
  int ret3613;
  ret3613 = guestfs_set_e2uuid (g, arg3614, arg3615);
  if (ret3613 == -1)
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
  const char *arg3618 = "/dev/sda1";
  const char *arg3619 = "testlabel";
  int ret3617;
  ret3617 = guestfs_set_label (g, arg3618, arg3619);
  if (ret3617 == -1)
    return -1;
  const char *arg3621 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg3621);
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

  const char *features3623[] = { "ntfs3g", NULL };
  if (!guestfs_feature_available (g, (char **) features3623)) {
    skipped ("test_set_label_1", "group %s not available in daemon",
             features3623[0]);
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
  const char *arg3625 = "ntfs";
  const char *arg3626 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs3627;
  optargs3627.bitmask = UINT64_C(0x0);
  int ret3624;
  ret3624 = guestfs_mkfs_opts_argv (g, arg3625, arg3626, &optargs3627);
  if (ret3624 == -1)
    return -1;
  const char *arg3629 = "/dev/sda1";
  const char *arg3630 = "testlabel2";
  int ret3628;
  ret3628 = guestfs_set_label (g, arg3629, arg3630);
  if (ret3628 == -1)
    return -1;
  const char *arg3632 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg3632);
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
  const char *arg3635 = "/dev/sda1";
  int ret3634;
  ret3634 = guestfs_zero (g, arg3635);
  if (ret3634 == -1)
    return -1;
  const char *arg3638 = "/dev/sda1";
  const char *arg3639 = "testlabel2";
  int ret3637;
  guestfs_push_error_handler (g, NULL, NULL);
  ret3637 = guestfs_set_label (g, arg3638, arg3639);
  guestfs_pop_error_handler (g);
  if (ret3637 != -1)
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
  int ret3641;
  ret3641 = guestfs_set_trace (g, 0);
  if (ret3641 == -1)
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
  const char *arg3646 = "/dev/sda1";
  const char *arg3647 = "1fcd9dde-504c-1950-e283-6620ffcdc4fa";
  int ret3645;
  ret3645 = guestfs_set_uuid (g, arg3646, arg3647);
  if (ret3645 == -1)
    return -1;
  const char *arg3649 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_uuid (g, arg3649);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "1fcd9dde-504c-1950-e283-6620ffcdc4fa")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_set_uuid_0", "vfs_uuid", "1fcd9dde-504c-1950-e283-6620ffcdc4fa", ret);
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
  const char *arg3652 = "/dev/sda1";
  int ret3651;
  ret3651 = guestfs_set_uuid_random (g, arg3652);
  if (ret3651 == -1)
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
  int ret3654;
  ret3654 = guestfs_sleep (g, 1);
  if (ret3654 == -1)
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
  const char *arg3657 = "/empty";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3657);
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
  const char *arg3659 = "/empty";
  CLEANUP_FREE_STATNS struct guestfs_statns *ret;
  ret = guestfs_statns (g, arg3659);
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
  const char *arg3661 = "/";
  CLEANUP_FREE_STATVFS struct guestfs_statvfs *ret;
  ret = guestfs_statvfs (g, arg3661);
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
  const char *arg3663 = "/known-5";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_strings (g, arg3663);
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
  const char *arg3665 = "/empty";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_strings (g, arg3665);
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
  const char *arg3668 = "/abssymlink";
  CLEANUP_FREE_STRING_LIST char **ret3667;
  ret3667 = guestfs_strings (g, arg3668);
  if (ret3667 == NULL)
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
  const char *arg3670 = "b";
  const char *arg3671 = "/known-5";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_strings_e (g, arg3670, arg3671);
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
  const char *arg3673 = "/strings_e";
  const char *arg3674 = "\0h\0e\0l\0l\0o\0\n\0w\0o\0r\0l\0d\0\n";
  size_t arg3674_size = 24;
  int ret1;
  ret1 = guestfs_write (g, arg3673, arg3674, arg3674_size);
  if (ret1 == -1)
    return -1;
  const char *arg3676 = "b";
  const char *arg3677 = "/strings_e";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_strings_e (g, arg3676, arg3677);
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
  const char *arg3680 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs3681;
  optargs3681.bitmask = UINT64_C(0x0);
  int ret3679;
  ret3679 = guestfs_mkswap_opts_argv (g, arg3680, &optargs3681);
  if (ret3679 == -1)
    return -1;
  const char *arg3683 = "/dev/sda1";
  int ret3682;
  ret3682 = guestfs_swapon_device (g, arg3683);
  if (ret3682 == -1)
    return -1;
  const char *arg3686 = "/dev/sda1";
  int ret3685;
  ret3685 = guestfs_swapoff_device (g, arg3686);
  if (ret3685 == -1)
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
  const char *arg3689 = "/swapon_file";
  int ret3688;
  ret3688 = guestfs_fallocate (g, arg3689, 8388608);
  if (ret3688 == -1)
    return -1;
  const char *arg3693 = "/swapon_file";
  int ret3692;
  ret3692 = guestfs_mkswap_file (g, arg3693);
  if (ret3692 == -1)
    return -1;
  const char *arg3696 = "/swapon_file";
  int ret3695;
  ret3695 = guestfs_swapon_file (g, arg3696);
  if (ret3695 == -1)
    return -1;
  const char *arg3699 = "/swapon_file";
  int ret3698;
  ret3698 = guestfs_swapoff_file (g, arg3699);
  if (ret3698 == -1)
    return -1;
  const char *arg3702 = "/swapon_file";
  int ret3701;
  ret3701 = guestfs_rm (g, arg3702);
  if (ret3701 == -1)
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
  const char *arg3705 = "/dev/sda";
  const char *arg3706 = "mbr";
  int ret3704;
  ret3704 = guestfs_part_disk (g, arg3705, arg3706);
  if (ret3704 == -1)
    return -1;
  const char *arg3709 = "/dev/sda1";
  struct guestfs_mkswap_opts_argv optargs3710;
  optargs3710.label = "swapit";
  optargs3710.bitmask = UINT64_C(0x1);
  int ret3708;
  ret3708 = guestfs_mkswap_opts_argv (g, arg3709, &optargs3710);
  if (ret3708 == -1)
    return -1;
  const char *arg3712 = "swapit";
  int ret3711;
  ret3711 = guestfs_swapon_label (g, arg3712);
  if (ret3711 == -1)
    return -1;
  const char *arg3715 = "swapit";
  int ret3714;
  ret3714 = guestfs_swapoff_label (g, arg3715);
  if (ret3714 == -1)
    return -1;
  const char *arg3718 = "/dev/sda";
  int ret3717;
  ret3717 = guestfs_zero (g, arg3718);
  if (ret3717 == -1)
    return -1;
  const char *arg3721 = "/dev/sda";
  int ret3720;
  ret3720 = guestfs_blockdev_rereadpt (g, arg3721);
  if (ret3720 == -1)
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

  const char *features3723[] = { "linuxfsuuid", NULL };
  if (!guestfs_feature_available (g, (char **) features3723)) {
    skipped ("test_swapon_uuid_0", "group %s not available in daemon",
             features3723[0]);
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
  const char *arg3725 = "/dev/sdc";
  struct guestfs_mkswap_opts_argv optargs3726;
  optargs3726.uuid = "1fcd9dde-504c-1950-e283-6620ffcdc4fa";
  optargs3726.bitmask = UINT64_C(0x2);
  int ret3724;
  ret3724 = guestfs_mkswap_opts_argv (g, arg3725, &optargs3726);
  if (ret3724 == -1)
    return -1;
  const char *arg3728 = "1fcd9dde-504c-1950-e283-6620ffcdc4fa";
  int ret3727;
  ret3727 = guestfs_swapon_uuid (g, arg3728);
  if (ret3727 == -1)
    return -1;
  const char *arg3731 = "1fcd9dde-504c-1950-e283-6620ffcdc4fa";
  int ret3730;
  ret3730 = guestfs_swapoff_uuid (g, arg3731);
  if (ret3730 == -1)
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
  int ret3733;
  ret3733 = guestfs_sync (g);
  if (ret3733 == -1)
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
  const char *arg3735 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tail (g, arg3735);
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
  const char *arg3738 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tail_n (g, 3, arg3738);
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
  const char *arg3741 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tail_n (g, -9998, arg3741);
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
  const char *arg3744 = "/10klines";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tail_n (g, 0, arg3744);
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
  const char *arg3747 = "/tar_in";
  int ret3746;
  ret3746 = guestfs_mkdir (g, arg3747);
  if (ret3746 == -1)
    return -1;
  CLEANUP_FREE char *arg3750 = substitute_srcdir ("$srcdir/../test-data/files/helloworld.tar");
  const char *arg3751 = "/tar_in";
  struct guestfs_tar_in_opts_argv optargs3752;
  optargs3752.bitmask = UINT64_C(0x0);
  int ret3749;
  ret3749 = guestfs_tar_in_opts_argv (g, arg3750, arg3751, &optargs3752);
  if (ret3749 == -1)
    return -1;
  const char *arg3753 = "/tar_in/hello";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3753);
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
  const char *arg3756 = "/tar_in_gz";
  int ret3755;
  ret3755 = guestfs_mkdir (g, arg3756);
  if (ret3755 == -1)
    return -1;
  CLEANUP_FREE char *arg3759 = substitute_srcdir ("$srcdir/../test-data/files/helloworld.tar.gz");
  const char *arg3760 = "/tar_in_gz";
  struct guestfs_tar_in_opts_argv optargs3761;
  optargs3761.compress = "gzip";
  optargs3761.bitmask = UINT64_C(0x1);
  int ret3758;
  ret3758 = guestfs_tar_in_opts_argv (g, arg3759, arg3760, &optargs3761);
  if (ret3758 == -1)
    return -1;
  const char *arg3762 = "/tar_in_gz/hello";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3762);
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

  const char *features3764[] = { "xz", NULL };
  if (!guestfs_feature_available (g, (char **) features3764)) {
    skipped ("test_tar_in_2", "group %s not available in daemon",
             features3764[0]);
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
  const char *arg3766 = "/tar_in_xz";
  int ret3765;
  ret3765 = guestfs_mkdir (g, arg3766);
  if (ret3765 == -1)
    return -1;
  CLEANUP_FREE char *arg3769 = substitute_srcdir ("$srcdir/../test-data/files/helloworld.tar.xz");
  const char *arg3770 = "/tar_in_xz";
  struct guestfs_tar_in_opts_argv optargs3771;
  optargs3771.compress = "xz";
  optargs3771.bitmask = UINT64_C(0x1);
  int ret3768;
  ret3768 = guestfs_tar_in_opts_argv (g, arg3769, arg3770, &optargs3771);
  if (ret3768 == -1)
    return -1;
  const char *arg3772 = "/tar_in_xz/hello";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3772);
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
  const char *arg3775 = "/tgz_in";
  int ret3774;
  ret3774 = guestfs_mkdir (g, arg3775);
  if (ret3774 == -1)
    return -1;
  CLEANUP_FREE char *arg3778 = substitute_srcdir ("$srcdir/../test-data/files/helloworld.tar.gz");
  const char *arg3779 = "/tgz_in";
  int ret3777;
  ret3777 = guestfs_tgz_in (g, arg3778, arg3779);
  if (ret3777 == -1)
    return -1;
  const char *arg3781 = "/tgz_in/hello";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3781);
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
  const char *arg3784 = "/touch";
  int ret3783;
  ret3783 = guestfs_touch (g, arg3784);
  if (ret3783 == -1)
    return -1;
  const char *arg3786 = "/touch";
  int ret;
  ret = guestfs_exists (g, arg3786);
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
  const char *arg3788 = "/truncate";
  const char *arg3789 = "some stuff so size is not zero";
  size_t arg3789_size = 30;
  int ret2;
  ret2 = guestfs_write (g, arg3788, arg3789, arg3789_size);
  if (ret2 == -1)
    return -1;
  const char *arg3791 = "/truncate";
  int ret1;
  ret1 = guestfs_truncate (g, arg3791);
  if (ret1 == -1)
    return -1;
  const char *arg3793 = "/truncate";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3793);
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
  const char *arg3795 = "/truncate_size";
  int ret2;
  ret2 = guestfs_touch (g, arg3795);
  if (ret2 == -1)
    return -1;
  const char *arg3797 = "/truncate_size";
  int ret1;
  ret1 = guestfs_truncate_size (g, arg3797, 1000);
  if (ret1 == -1)
    return -1;
  const char *arg3800 = "/truncate_size";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3800);
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
  const char *arg3802 = "/dev/sdb1";
  struct guestfs_tune2fs_argv optargs3803;
  optargs3803.force = 0;
  optargs3803.maxmountcount = 0;
  optargs3803.intervalbetweenchecks = 0;
  optargs3803.bitmask = UINT64_C(0x23);
  int ret1;
  ret1 = guestfs_tune2fs_argv (g, arg3802, &optargs3803);
  if (ret1 == -1)
    return -1;
  const char *arg3804 = "/dev/sdb1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tune2fs_l (g, arg3804);
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
  const char *arg3806 = "/dev/sdb1";
  struct guestfs_tune2fs_argv optargs3807;
  optargs3807.force = 0;
  optargs3807.maxmountcount = 0;
  optargs3807.intervalbetweenchecks = 86400;
  optargs3807.bitmask = UINT64_C(0x23);
  int ret1;
  ret1 = guestfs_tune2fs_argv (g, arg3806, &optargs3807);
  if (ret1 == -1)
    return -1;
  const char *arg3808 = "/dev/sdb1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tune2fs_l (g, arg3808);
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
  const char *arg3810 = "/dev/sdb1";
  struct guestfs_tune2fs_argv optargs3811;
  optargs3811.force = 0;
  optargs3811.group = 1;
  optargs3811.user = 1;
  optargs3811.bitmask = UINT64_C(0x211);
  int ret1;
  ret1 = guestfs_tune2fs_argv (g, arg3810, &optargs3811);
  if (ret1 == -1)
    return -1;
  const char *arg3812 = "/dev/sdb1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tune2fs_l (g, arg3812);
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
  const char *arg3814 = "/dev/sdb1";
  struct guestfs_tune2fs_argv optargs3815;
  optargs3815.force = 0;
  optargs3815.group = 0;
  optargs3815.user = 0;
  optargs3815.bitmask = UINT64_C(0x211);
  int ret1;
  ret1 = guestfs_tune2fs_argv (g, arg3814, &optargs3815);
  if (ret1 == -1)
    return -1;
  const char *arg3816 = "/dev/sdb1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tune2fs_l (g, arg3816);
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
  const char *arg3818 = "/dev/sdb1";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_tune2fs_l (g, arg3818);
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

  const char *features3820[] = { "xz", NULL };
  if (!guestfs_feature_available (g, (char **) features3820)) {
    skipped ("test_txz_in_0", "group %s not available in daemon",
             features3820[0]);
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
  const char *arg3822 = "/txz_in";
  int ret3821;
  ret3821 = guestfs_mkdir (g, arg3822);
  if (ret3821 == -1)
    return -1;
  CLEANUP_FREE char *arg3825 = substitute_srcdir ("$srcdir/../test-data/files/helloworld.tar.xz");
  const char *arg3826 = "/txz_in";
  int ret3824;
  ret3824 = guestfs_txz_in (g, arg3825, arg3826);
  if (ret3824 == -1)
    return -1;
  const char *arg3828 = "/txz_in/hello";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg3828);
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
  const char *arg3832 = "/dev/sda";
  const char *arg3833 = "mbr";
  int ret3;
  ret3 = guestfs_part_disk (g, arg3832, arg3833);
  if (ret3 == -1)
    return -1;
  const char *arg3835 = "ext2";
  const char *arg3836 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs3837;
  optargs3837.bitmask = UINT64_C(0x0);
  int ret2;
  ret2 = guestfs_mkfs_opts_argv (g, arg3835, arg3836, &optargs3837);
  if (ret2 == -1)
    return -1;
  const char *arg3838 = "/dev/sda1";
  const char *arg3839 = "/";
  int ret1;
  ret1 = guestfs_mount (g, arg3838, arg3839);
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
  const char *arg3842 = "/dev/sda";
  const char *arg3843 = "mbr";
  int ret4;
  ret4 = guestfs_part_disk (g, arg3842, arg3843);
  if (ret4 == -1)
    return -1;
  const char *arg3845 = "ext2";
  const char *arg3846 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs3847;
  optargs3847.bitmask = UINT64_C(0x0);
  int ret3;
  ret3 = guestfs_mkfs_opts_argv (g, arg3845, arg3846, &optargs3847);
  if (ret3 == -1)
    return -1;
  const char *arg3848 = "/dev/sda1";
  const char *arg3849 = "/";
  int ret2;
  ret2 = guestfs_mount (g, arg3848, arg3849);
  if (ret2 == -1)
    return -1;
  const char *arg3851 = "/";
  struct guestfs_umount_opts_argv optargs3852;
  optargs3852.force = 0;
  optargs3852.lazyunmount = 0;
  optargs3852.bitmask = UINT64_C(0x3);
  int ret1;
  ret1 = guestfs_umount_opts_argv (g, arg3851, &optargs3852);
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
  const char *arg3856 = "/dev/sda";
  const char *arg3857 = "mbr";
  int ret14;
  ret14 = guestfs_part_init (g, arg3856, arg3857);
  if (ret14 == -1)
    return -1;
  const char *arg3859 = "/dev/sda";
  const char *arg3860 = "p";
  int ret13;
  ret13 = guestfs_part_add (g, arg3859, arg3860, 64, 204799);
  if (ret13 == -1)
    return -1;
  const char *arg3864 = "/dev/sda";
  const char *arg3865 = "p";
  int ret12;
  ret12 = guestfs_part_add (g, arg3864, arg3865, 204800, 409599);
  if (ret12 == -1)
    return -1;
  const char *arg3869 = "/dev/sda";
  const char *arg3870 = "p";
  int ret11;
  ret11 = guestfs_part_add (g, arg3869, arg3870, 409600, -64);
  if (ret11 == -1)
    return -1;
  const char *arg3874 = "ext2";
  const char *arg3875 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs3876;
  optargs3876.bitmask = UINT64_C(0x0);
  int ret10;
  ret10 = guestfs_mkfs_opts_argv (g, arg3874, arg3875, &optargs3876);
  if (ret10 == -1)
    return -1;
  const char *arg3877 = "ext2";
  const char *arg3878 = "/dev/sda2";
  struct guestfs_mkfs_opts_argv optargs3879;
  optargs3879.bitmask = UINT64_C(0x0);
  int ret9;
  ret9 = guestfs_mkfs_opts_argv (g, arg3877, arg3878, &optargs3879);
  if (ret9 == -1)
    return -1;
  const char *arg3880 = "ext2";
  const char *arg3881 = "/dev/sda3";
  struct guestfs_mkfs_opts_argv optargs3882;
  optargs3882.bitmask = UINT64_C(0x0);
  int ret8;
  ret8 = guestfs_mkfs_opts_argv (g, arg3880, arg3881, &optargs3882);
  if (ret8 == -1)
    return -1;
  const char *arg3883 = "/dev/sda1";
  const char *arg3884 = "/";
  int ret7;
  ret7 = guestfs_mount (g, arg3883, arg3884);
  if (ret7 == -1)
    return -1;
  const char *arg3886 = "/mp1";
  int ret6;
  ret6 = guestfs_mkdir (g, arg3886);
  if (ret6 == -1)
    return -1;
  const char *arg3888 = "/dev/sda2";
  const char *arg3889 = "/mp1";
  int ret5;
  ret5 = guestfs_mount (g, arg3888, arg3889);
  if (ret5 == -1)
    return -1;
  const char *arg3891 = "/mp1/mp2";
  int ret4;
  ret4 = guestfs_mkdir (g, arg3891);
  if (ret4 == -1)
    return -1;
  const char *arg3893 = "/dev/sda3";
  const char *arg3894 = "/mp1/mp2";
  int ret3;
  ret3 = guestfs_mount (g, arg3893, arg3894);
  if (ret3 == -1)
    return -1;
  const char *arg3896 = "/mp1/mp2/mp3";
  int ret2;
  ret2 = guestfs_mkdir (g, arg3896);
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
  const char *arg3901 = "/upload";
  int ret3900;
  ret3900 = guestfs_mkdir (g, arg3901);
  if (ret3900 == -1)
    return -1;
  CLEANUP_FREE char *arg3904 = substitute_srcdir ("$srcdir/../COPYING.LIB");
  const char *arg3905 = "/upload/COPYING.LIB";
  int ret3903;
  ret3903 = guestfs_upload (g, arg3904, arg3905);
  if (ret3903 == -1)
    return -1;
  const char *arg3907 = "md5";
  const char *arg3908 = "/upload/COPYING.LIB";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg3907, arg3908);
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
  CLEANUP_FREE char *arg3911 = substitute_srcdir ("$srcdir/../COPYING.LIB");
  const char *arg3912 = "/upload_offset";
  int ret3910;
  ret3910 = guestfs_upload_offset (g, arg3911, arg3912, 0);
  if (ret3910 == -1)
    return -1;
  const char *arg3915 = "md5";
  const char *arg3916 = "/upload_offset";
  CLEANUP_FREE char *ret;
  ret = guestfs_checksum (g, arg3915, arg3916);
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
  const char *arg3918 = "/utimens-file";
  int ret2;
  ret2 = guestfs_touch (g, arg3918);
  if (ret2 == -1)
    return -1;
  const char *arg3920 = "/utimens-file";
  int ret1;
  ret1 = guestfs_utimens (g, arg3920, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3926 = "/utimens-file";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3926);
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
  const char *arg3928 = "/utimens-dir";
  int ret2;
  ret2 = guestfs_mkdir (g, arg3928);
  if (ret2 == -1)
    return -1;
  const char *arg3930 = "/utimens-dir";
  int ret1;
  ret1 = guestfs_utimens (g, arg3930, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3936 = "/utimens-dir";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3936);
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
  const char *arg3939 = "/utimens-fifo";
  int ret2;
  ret2 = guestfs_mkfifo (g, 420, arg3939);
  if (ret2 == -1)
    return -1;
  const char *arg3941 = "/utimens-fifo";
  int ret1;
  ret1 = guestfs_utimens (g, arg3941, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3947 = "/utimens-fifo";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3947);
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
  const char *arg3949 = "/utimens-file";
  const char *arg3950 = "/utimens-link";
  int ret2;
  ret2 = guestfs_ln_sf (g, arg3949, arg3950);
  if (ret2 == -1)
    return -1;
  const char *arg3952 = "/utimens-link";
  int ret1;
  ret1 = guestfs_utimens (g, arg3952, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3958 = "/utimens-link";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3958);
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
  const char *arg3963 = "/utimens-block";
  int ret2;
  ret2 = guestfs_mknod_b (g, 420, 8, 0, arg3963);
  if (ret2 == -1)
    return -1;
  const char *arg3965 = "/utimens-block";
  int ret1;
  ret1 = guestfs_utimens (g, arg3965, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3971 = "/utimens-block";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3971);
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
  const char *arg3976 = "/utimens-char";
  int ret2;
  ret2 = guestfs_mknod_c (g, 420, 1, 3, arg3976);
  if (ret2 == -1)
    return -1;
  const char *arg3978 = "/utimens-char";
  int ret1;
  ret1 = guestfs_utimens (g, arg3978, 12345, 67890, 9876, 5432);
  if (ret1 == -1)
    return -1;
  const char *arg3984 = "/utimens-char";
  CLEANUP_FREE_STAT struct guestfs_stat *ret;
  ret = guestfs_stat (g, arg3984);
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
  CLEANUP_FREE_UTSNAME struct guestfs_utsname *ret3986;
  ret3986 = guestfs_utsname (g);
  if (ret3986 == NULL)
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
  const char *arg3990 = "/dev/sda1";
  const char *arg3991 = "LTEST";
  int ret3989;
  ret3989 = guestfs_set_label (g, arg3990, arg3991);
  if (ret3989 == -1)
    return -1;
  const char *arg3993 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg3993);
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
  const char *arg3996 = "/dev/sda";
  const char *arg3997 = "mbr";
  int ret3995;
  ret3995 = guestfs_part_disk (g, arg3996, arg3997);
  if (ret3995 == -1)
    return -1;
  const char *arg4000 = "ext2";
  const char *arg4001 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4002;
  optargs4002.label = "test-label";
  optargs4002.bitmask = UINT64_C(0x10);
  int ret3999;
  ret3999 = guestfs_mkfs_opts_argv (g, arg4000, arg4001, &optargs4002);
  if (ret3999 == -1)
    return -1;
  const char *arg4003 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg4003);
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

  const char *features4005[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4005)) {
    skipped ("test_vfs_label_2", "group %s not available in daemon",
             features4005[0]);
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
  const char *arg4007 = "/dev/sda";
  const char *arg4008 = "mbr";
  int ret4006;
  ret4006 = guestfs_part_disk (g, arg4007, arg4008);
  if (ret4006 == -1)
    return -1;
  const char *arg4011 = "btrfs";
  const char *arg4012 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4013;
  optargs4013.label = "";
  optargs4013.bitmask = UINT64_C(0x10);
  int ret4010;
  ret4010 = guestfs_mkfs_opts_argv (g, arg4011, arg4012, &optargs4013);
  if (ret4010 == -1)
    return -1;
  const char *arg4015 = "/dev/sda1";
  const char *arg4016 = "test-label-btrfs";
  int ret4014;
  ret4014 = guestfs_set_label (g, arg4015, arg4016);
  if (ret4014 == -1)
    return -1;
  const char *arg4018 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg4018);
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
  const char *arg4021 = "/dev/sda1";
  int64_t ret4020;
  ret4020 = guestfs_vfs_minimum_size (g, arg4021);
  if (ret4020 == -1)
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

  const char *features4023[] = { "ntfsprogs", NULL };
  if (!guestfs_feature_available (g, (char **) features4023)) {
    skipped ("test_vfs_minimum_size_1", "group %s not available in daemon",
             features4023[0]);
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
  const char *arg4025 = "ntfs";
  const char *arg4026 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4027;
  optargs4027.bitmask = UINT64_C(0x0);
  int ret4024;
  ret4024 = guestfs_mkfs_opts_argv (g, arg4025, arg4026, &optargs4027);
  if (ret4024 == -1)
    return -1;
  const char *arg4029 = "/dev/sda1";
  int64_t ret4028;
  ret4028 = guestfs_vfs_minimum_size (g, arg4029);
  if (ret4028 == -1)
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

  const char *features4031[] = { "btrfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4031)) {
    skipped ("test_vfs_minimum_size_2", "group %s not available in daemon",
             features4031[0]);
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
  const char *arg4033 = "btrfs";
  const char *arg4034 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4035;
  optargs4035.bitmask = UINT64_C(0x0);
  int ret4032;
  ret4032 = guestfs_mkfs_opts_argv (g, arg4033, arg4034, &optargs4035);
  if (ret4032 == -1)
    return -1;
  const char *arg4037 = "/dev/sda1";
  const char *arg4038 = "/";
  int ret4036;
  ret4036 = guestfs_mount (g, arg4037, arg4038);
  if (ret4036 == -1)
    return -1;
  const char *arg4040 = "/dev/sda1";
  int64_t ret;
  guestfs_push_error_handler (g, NULL, NULL);
  ret = guestfs_vfs_minimum_size (g, arg4040);
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

  const char *features4042[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4042)) {
    skipped ("test_vfs_minimum_size_3", "group %s not available in daemon",
             features4042[0]);
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
  const char *arg4044 = "xfs";
  const char *arg4045 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4046;
  optargs4046.bitmask = UINT64_C(0x0);
  int ret4043;
  ret4043 = guestfs_mkfs_opts_argv (g, arg4044, arg4045, &optargs4046);
  if (ret4043 == -1)
    return -1;
  const char *arg4048 = "/dev/sda1";
  const char *arg4049 = "/";
  int ret4047;
  ret4047 = guestfs_mount (g, arg4048, arg4049);
  if (ret4047 == -1)
    return -1;
  const char *arg4052 = "/dev/sda1";
  int64_t ret4051;
  ret4051 = guestfs_vfs_minimum_size (g, arg4052);
  if (ret4051 == -1)
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
  const char *arg4054 = "/dev/sdb1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_type (g, arg4054);
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
  const char *arg4057 = "/dev/sda1";
  const char *arg4058 = "1fcd9dde-504c-1950-e283-6620ffcdc4fa";
  int ret4056;
  ret4056 = guestfs_set_e2uuid (g, arg4057, arg4058);
  if (ret4056 == -1)
    return -1;
  const char *arg4060 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_uuid (g, arg4060);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "1fcd9dde-504c-1950-e283-6620ffcdc4fa")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_vfs_uuid_0", "vfs_uuid", "1fcd9dde-504c-1950-e283-6620ffcdc4fa", ret);
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

  const char *features4062[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4062)) {
    skipped ("test_vgchange_uuid_0", "group %s not available in daemon",
             features4062[0]);
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
  const char *arg4064 = "/dev/sda";
  const char *arg4065 = "mbr";
  int ret4063;
  ret4063 = guestfs_part_disk (g, arg4064, arg4065);
  if (ret4063 == -1)
    return -1;
  const char *arg4068 = "/dev/sda1";
  int ret4067;
  ret4067 = guestfs_pvcreate (g, arg4068);
  if (ret4067 == -1)
    return -1;
  const char *arg4071 = "VG";
  const char *arg4072_0 = "/dev/sda1";
  const char *const arg4072[] = {
    arg4072_0,
    NULL
  };
  int ret4070;
  ret4070 = guestfs_vgcreate (g, arg4071, (char **) arg4072);
  if (ret4070 == -1)
    return -1;
  const char *arg4075 = "/dev/VG";
  int ret4074;
  ret4074 = guestfs_vgchange_uuid (g, arg4075);
  if (ret4074 == -1)
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

  const char *features4077[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4077)) {
    skipped ("test_vgchange_uuid_all_0", "group %s not available in daemon",
             features4077[0]);
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
  const char *arg4079 = "/dev/sda";
  const char *arg4080 = "mbr";
  int ret4078;
  ret4078 = guestfs_part_disk (g, arg4079, arg4080);
  if (ret4078 == -1)
    return -1;
  const char *arg4083 = "/dev/sda1";
  int ret4082;
  ret4082 = guestfs_pvcreate (g, arg4083);
  if (ret4082 == -1)
    return -1;
  const char *arg4086 = "VG";
  const char *arg4087_0 = "/dev/sda1";
  const char *const arg4087[] = {
    arg4087_0,
    NULL
  };
  int ret4085;
  ret4085 = guestfs_vgcreate (g, arg4086, (char **) arg4087);
  if (ret4085 == -1)
    return -1;
  int ret4089;
  ret4089 = guestfs_vgchange_uuid_all (g);
  if (ret4089 == -1)
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

  const char *features4091[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4091)) {
    skipped ("test_vgcreate_0", "group %s not available in daemon",
             features4091[0]);
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
  const char *arg4092 = "/dev/sda";
  const char *arg4093 = "mbr";
  int ret9;
  ret9 = guestfs_part_init (g, arg4092, arg4093);
  if (ret9 == -1)
    return -1;
  const char *arg4095 = "/dev/sda";
  const char *arg4096 = "p";
  int ret8;
  ret8 = guestfs_part_add (g, arg4095, arg4096, 64, 204799);
  if (ret8 == -1)
    return -1;
  const char *arg4100 = "/dev/sda";
  const char *arg4101 = "p";
  int ret7;
  ret7 = guestfs_part_add (g, arg4100, arg4101, 204800, 409599);
  if (ret7 == -1)
    return -1;
  const char *arg4105 = "/dev/sda";
  const char *arg4106 = "p";
  int ret6;
  ret6 = guestfs_part_add (g, arg4105, arg4106, 409600, -64);
  if (ret6 == -1)
    return -1;
  const char *arg4110 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg4110);
  if (ret5 == -1)
    return -1;
  const char *arg4112 = "/dev/sda2";
  int ret4;
  ret4 = guestfs_pvcreate (g, arg4112);
  if (ret4 == -1)
    return -1;
  const char *arg4114 = "/dev/sda3";
  int ret3;
  ret3 = guestfs_pvcreate (g, arg4114);
  if (ret3 == -1)
    return -1;
  const char *arg4116 = "VG1";
  const char *arg4117_0 = "/dev/sda1";
  const char *arg4117_1 = "/dev/sda2";
  const char *const arg4117[] = {
    arg4117_0,
    arg4117_1,
    NULL
  };
  int ret2;
  ret2 = guestfs_vgcreate (g, arg4116, (char **) arg4117);
  if (ret2 == -1)
    return -1;
  const char *arg4119 = "VG2";
  const char *arg4120_0 = "/dev/sda3";
  const char *const arg4120[] = {
    arg4120_0,
    NULL
  };
  int ret1;
  ret1 = guestfs_vgcreate (g, arg4119, (char **) arg4120);
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

  const char *features4123[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4123)) {
    skipped ("test_vgcreate_1", "group %s not available in daemon",
             features4123[0]);
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
  const char *arg4125 = "/dev/sda";
  const char *arg4126 = "mbr";
  int ret4124;
  ret4124 = guestfs_part_init (g, arg4125, arg4126);
  if (ret4124 == -1)
    return -1;
  const char *arg4129 = "/dev/sda";
  const char *arg4130 = "p";
  int ret4128;
  ret4128 = guestfs_part_add (g, arg4129, arg4130, 64, 204799);
  if (ret4128 == -1)
    return -1;
  const char *arg4135 = "/dev/sda";
  const char *arg4136 = "p";
  int ret4134;
  ret4134 = guestfs_part_add (g, arg4135, arg4136, 204800, 409599);
  if (ret4134 == -1)
    return -1;
  const char *arg4141 = "/dev/sda";
  const char *arg4142 = "p";
  int ret4140;
  ret4140 = guestfs_part_add (g, arg4141, arg4142, 409600, -64);
  if (ret4140 == -1)
    return -1;
  const char *arg4147 = "/dev/sda1";
  int ret4146;
  ret4146 = guestfs_pvcreate (g, arg4147);
  if (ret4146 == -1)
    return -1;
  const char *arg4150 = "/dev/sda2";
  int ret4149;
  ret4149 = guestfs_pvcreate (g, arg4150);
  if (ret4149 == -1)
    return -1;
  const char *arg4153 = "/dev/sda3";
  int ret4152;
  ret4152 = guestfs_pvcreate (g, arg4153);
  if (ret4152 == -1)
    return -1;
  const char *arg4156 = "VG1";
  const char *arg4157_0 = "/foo/bar";
  const char *arg4157_1 = "/dev/sda2";
  const char *const arg4157[] = {
    arg4157_0,
    arg4157_1,
    NULL
  };
  int ret4155;
  guestfs_push_error_handler (g, NULL, NULL);
  ret4155 = guestfs_vgcreate (g, arg4156, (char **) arg4157);
  guestfs_pop_error_handler (g);
  if (ret4155 != -1)
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

  const char *features4159[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4159)) {
    skipped ("test_vgremove_0", "group %s not available in daemon",
             features4159[0]);
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
  const char *arg4160 = "/dev/sda";
  const char *arg4161 = "mbr";
  int ret6;
  ret6 = guestfs_part_disk (g, arg4160, arg4161);
  if (ret6 == -1)
    return -1;
  const char *arg4163 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg4163);
  if (ret5 == -1)
    return -1;
  const char *arg4165 = "VG";
  const char *arg4166_0 = "/dev/sda1";
  const char *const arg4166[] = {
    arg4166_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg4165, (char **) arg4166);
  if (ret4 == -1)
    return -1;
  const char *arg4168 = "LV1";
  const char *arg4169 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg4168, arg4169, 50);
  if (ret3 == -1)
    return -1;
  const char *arg4172 = "LV2";
  const char *arg4173 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg4172, arg4173, 50);
  if (ret2 == -1)
    return -1;
  const char *arg4176 = "VG";
  int ret1;
  ret1 = guestfs_vgremove (g, arg4176);
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

  const char *features4179[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4179)) {
    skipped ("test_vgremove_1", "group %s not available in daemon",
             features4179[0]);
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
  const char *arg4180 = "/dev/sda";
  const char *arg4181 = "mbr";
  int ret6;
  ret6 = guestfs_part_disk (g, arg4180, arg4181);
  if (ret6 == -1)
    return -1;
  const char *arg4183 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg4183);
  if (ret5 == -1)
    return -1;
  const char *arg4185 = "VG";
  const char *arg4186_0 = "/dev/sda1";
  const char *const arg4186[] = {
    arg4186_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vgcreate (g, arg4185, (char **) arg4186);
  if (ret4 == -1)
    return -1;
  const char *arg4188 = "LV1";
  const char *arg4189 = "VG";
  int ret3;
  ret3 = guestfs_lvcreate (g, arg4188, arg4189, 50);
  if (ret3 == -1)
    return -1;
  const char *arg4192 = "LV2";
  const char *arg4193 = "VG";
  int ret2;
  ret2 = guestfs_lvcreate (g, arg4192, arg4193, 50);
  if (ret2 == -1)
    return -1;
  const char *arg4196 = "VG";
  int ret1;
  ret1 = guestfs_vgremove (g, arg4196);
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
  const char *arg4199 = "/";
  struct guestfs_umount_opts_argv optargs4200;
  optargs4200.force = 0;
  optargs4200.lazyunmount = 0;
  optargs4200.bitmask = UINT64_C(0x3);
  int ret5;
  ret5 = guestfs_umount_opts_argv (g, arg4199, &optargs4200);
  if (ret5 == -1)
    return -1;
  const char *arg4202_0 = "VG";
  const char *const arg4202[] = {
    arg4202_0,
    NULL
  };
  int ret4;
  ret4 = guestfs_vg_activate (g, 0, (char **) arg4202);
  if (ret4 == -1)
    return -1;
  const char *arg4204 = "VG";
  const char *arg4205 = "VG2";
  int ret3;
  ret3 = guestfs_vgrename (g, arg4204, arg4205);
  if (ret3 == -1)
    return -1;
  const char *arg4208_0 = "VG2";
  const char *const arg4208[] = {
    arg4208_0,
    NULL
  };
  int ret2;
  ret2 = guestfs_vg_activate (g, 1, (char **) arg4208);
  if (ret2 == -1)
    return -1;
  const char *arg4210 = "/dev/VG2/LV";
  const char *arg4211 = "/";
  int ret1;
  ret1 = guestfs_mount (g, arg4210, arg4211);
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

  const char *features4214[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4214)) {
    skipped ("test_vgs_0", "group %s not available in daemon",
             features4214[0]);
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

  const char *features4216[] = { "lvm2", NULL };
  if (!guestfs_feature_available (g, (char **) features4216)) {
    skipped ("test_vgs_1", "group %s not available in daemon",
             features4216[0]);
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
  const char *arg4217 = "/dev/sda";
  const char *arg4218 = "mbr";
  int ret9;
  ret9 = guestfs_part_init (g, arg4217, arg4218);
  if (ret9 == -1)
    return -1;
  const char *arg4220 = "/dev/sda";
  const char *arg4221 = "p";
  int ret8;
  ret8 = guestfs_part_add (g, arg4220, arg4221, 64, 204799);
  if (ret8 == -1)
    return -1;
  const char *arg4225 = "/dev/sda";
  const char *arg4226 = "p";
  int ret7;
  ret7 = guestfs_part_add (g, arg4225, arg4226, 204800, 409599);
  if (ret7 == -1)
    return -1;
  const char *arg4230 = "/dev/sda";
  const char *arg4231 = "p";
  int ret6;
  ret6 = guestfs_part_add (g, arg4230, arg4231, 409600, -64);
  if (ret6 == -1)
    return -1;
  const char *arg4235 = "/dev/sda1";
  int ret5;
  ret5 = guestfs_pvcreate (g, arg4235);
  if (ret5 == -1)
    return -1;
  const char *arg4237 = "/dev/sda2";
  int ret4;
  ret4 = guestfs_pvcreate (g, arg4237);
  if (ret4 == -1)
    return -1;
  const char *arg4239 = "/dev/sda3";
  int ret3;
  ret3 = guestfs_pvcreate (g, arg4239);
  if (ret3 == -1)
    return -1;
  const char *arg4241 = "VG1";
  const char *arg4242_0 = "/dev/sda1";
  const char *arg4242_1 = "/dev/sda2";
  const char *const arg4242[] = {
    arg4242_0,
    arg4242_1,
    NULL
  };
  int ret2;
  ret2 = guestfs_vgcreate (g, arg4241, (char **) arg4242);
  if (ret2 == -1)
    return -1;
  const char *arg4244 = "VG2";
  const char *arg4245_0 = "/dev/sda3";
  const char *const arg4245[] = {
    arg4245_0,
    NULL
  };
  int ret1;
  ret1 = guestfs_vgcreate (g, arg4244, (char **) arg4245);
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
  int ret4248;
  ret4248 = guestfs_vgscan (g);
  if (ret4248 == -1)
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
  const char *arg4250 = "/100kallspaces";
  int ret;
  ret = guestfs_wc_c (g, arg4250);
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
  const char *arg4252 = "/10klines";
  int ret;
  ret = guestfs_wc_l (g, arg4252);
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
  const char *arg4254 = "/abssymlink";
  int ret;
  ret = guestfs_wc_l (g, arg4254);
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
  const char *arg4256 = "/10klines";
  int ret;
  ret = guestfs_wc_w (g, arg4256);
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

  const char *features4258[] = { "wipefs", NULL };
  if (!guestfs_feature_available (g, (char **) features4258)) {
    skipped ("test_wipefs_0", "group %s not available in daemon",
             features4258[0]);
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
  const char *arg4260 = "/dev/VG/LV";
  struct guestfs_umount_opts_argv optargs4261;
  optargs4261.bitmask = UINT64_C(0x0);
  int ret4259;
  ret4259 = guestfs_umount_opts_argv (g, arg4260, &optargs4261);
  if (ret4259 == -1)
    return -1;
  const char *arg4263 = "/dev/VG/LV";
  int ret4262;
  ret4262 = guestfs_wipefs (g, arg4263);
  if (ret4262 == -1)
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
  const char *arg4266 = "/write";
  const char *arg4267 = "new file contents";
  size_t arg4267_size = 17;
  int ret4265;
  ret4265 = guestfs_write (g, arg4266, arg4267, arg4267_size);
  if (ret4265 == -1)
    return -1;
  const char *arg4269 = "/write";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4269);
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
  const char *arg4272 = "/write2";
  const char *arg4273 = "\nnew file contents\n";
  size_t arg4273_size = 19;
  int ret4271;
  ret4271 = guestfs_write (g, arg4272, arg4273, arg4273_size);
  if (ret4271 == -1)
    return -1;
  const char *arg4275 = "/write2";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4275);
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
  const char *arg4278 = "/write3";
  const char *arg4279 = "\n\n";
  size_t arg4279_size = 2;
  int ret4277;
  ret4277 = guestfs_write (g, arg4278, arg4279, arg4279_size);
  if (ret4277 == -1)
    return -1;
  const char *arg4281 = "/write3";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4281);
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
  const char *arg4284 = "/write4";
  const char *arg4285 = "";
  size_t arg4285_size = 0;
  int ret4283;
  ret4283 = guestfs_write (g, arg4284, arg4285, arg4285_size);
  if (ret4283 == -1)
    return -1;
  const char *arg4287 = "/write4";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4287);
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
  const char *arg4290 = "/write5";
  const char *arg4291 = "\n\n\n";
  size_t arg4291_size = 3;
  int ret4289;
  ret4289 = guestfs_write (g, arg4290, arg4291, arg4291_size);
  if (ret4289 == -1)
    return -1;
  const char *arg4293 = "/write5";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4293);
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
  const char *arg4296 = "/write6";
  const char *arg4297 = "\n";
  size_t arg4297_size = 1;
  int ret4295;
  ret4295 = guestfs_write (g, arg4296, arg4297, arg4297_size);
  if (ret4295 == -1)
    return -1;
  const char *arg4299 = "/write6";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4299);
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
  const char *arg4302 = "/write_append";
  const char *arg4303 = "line1\n";
  size_t arg4303_size = 6;
  int ret4301;
  ret4301 = guestfs_write (g, arg4302, arg4303, arg4303_size);
  if (ret4301 == -1)
    return -1;
  const char *arg4306 = "/write_append";
  const char *arg4307 = "line2\n";
  size_t arg4307_size = 6;
  int ret4305;
  ret4305 = guestfs_write_append (g, arg4306, arg4307, arg4307_size);
  if (ret4305 == -1)
    return -1;
  const char *arg4310 = "/write_append";
  const char *arg4311 = "line3a";
  size_t arg4311_size = 6;
  int ret4309;
  ret4309 = guestfs_write_append (g, arg4310, arg4311, arg4311_size);
  if (ret4309 == -1)
    return -1;
  const char *arg4314 = "/write_append";
  const char *arg4315 = "line3b\n";
  size_t arg4315_size = 7;
  int ret4313;
  ret4313 = guestfs_write_append (g, arg4314, arg4315, arg4315_size);
  if (ret4313 == -1)
    return -1;
  const char *arg4317 = "/write_append";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4317);
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
  const char *arg4320 = "/write_file";
  const char *arg4321 = "abc";
  int ret4319;
  guestfs_push_error_handler (g, NULL, NULL);
  ret4319 = guestfs_write_file (g, arg4320, arg4321, 10000);
  guestfs_pop_error_handler (g);
  if (ret4319 != -1)
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

  const char *features4324[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4324)) {
    skipped ("test_xfs_admin_0", "group %s not available in daemon",
             features4324[0]);
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
  const char *arg4326 = "/dev/sda";
  const char *arg4327 = "mbr";
  int ret4325;
  ret4325 = guestfs_part_disk (g, arg4326, arg4327);
  if (ret4325 == -1)
    return -1;
  const char *arg4330 = "xfs";
  const char *arg4331 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4332;
  optargs4332.bitmask = UINT64_C(0x0);
  int ret4329;
  ret4329 = guestfs_mkfs_opts_argv (g, arg4330, arg4331, &optargs4332);
  if (ret4329 == -1)
    return -1;
  const char *arg4334 = "/dev/sda1";
  struct guestfs_xfs_admin_argv optargs4335;
  optargs4335.uuid = "1fcd9dde-504c-1950-e283-6620ffcdc4fa";
  optargs4335.bitmask = UINT64_C(0x40);
  int ret4333;
  ret4333 = guestfs_xfs_admin_argv (g, arg4334, &optargs4335);
  if (ret4333 == -1)
    return -1;
  const char *arg4336 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_uuid (g, arg4336);
  if (ret == NULL)
      return -1;
  if (! STREQ (ret, "1fcd9dde-504c-1950-e283-6620ffcdc4fa")) {
    fprintf (stderr, "%s: test failed: expected last command %s to return \"%s\" but it returned \"%s\"\n",
             "test_xfs_admin_0", "vfs_uuid", "1fcd9dde-504c-1950-e283-6620ffcdc4fa", ret);
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

  const char *features4338[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4338)) {
    skipped ("test_xfs_admin_1", "group %s not available in daemon",
             features4338[0]);
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
  const char *arg4340 = "/dev/sda";
  const char *arg4341 = "mbr";
  int ret4339;
  ret4339 = guestfs_part_disk (g, arg4340, arg4341);
  if (ret4339 == -1)
    return -1;
  const char *arg4344 = "xfs";
  const char *arg4345 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4346;
  optargs4346.bitmask = UINT64_C(0x0);
  int ret4343;
  ret4343 = guestfs_mkfs_opts_argv (g, arg4344, arg4345, &optargs4346);
  if (ret4343 == -1)
    return -1;
  const char *arg4348 = "/dev/sda1";
  struct guestfs_xfs_admin_argv optargs4349;
  optargs4349.label = "LBL-TEST";
  optargs4349.bitmask = UINT64_C(0x20);
  int ret4347;
  ret4347 = guestfs_xfs_admin_argv (g, arg4348, &optargs4349);
  if (ret4347 == -1)
    return -1;
  const char *arg4350 = "/dev/sda1";
  CLEANUP_FREE char *ret;
  ret = guestfs_vfs_label (g, arg4350);
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

  const char *features4352[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4352)) {
    skipped ("test_xfs_growfs_0", "group %s not available in daemon",
             features4352[0]);
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
  const char *arg4353 = "/dev/sda";
  const char *arg4354 = "mbr";
  int ret8;
  ret8 = guestfs_part_disk (g, arg4353, arg4354);
  if (ret8 == -1)
    return -1;
  const char *arg4356 = "/dev/sda1";
  int ret7;
  ret7 = guestfs_pvcreate (g, arg4356);
  if (ret7 == -1)
    return -1;
  const char *arg4358 = "VG";
  const char *arg4359_0 = "/dev/sda1";
  const char *const arg4359[] = {
    arg4359_0,
    NULL
  };
  int ret6;
  ret6 = guestfs_vgcreate (g, arg4358, (char **) arg4359);
  if (ret6 == -1)
    return -1;
  const char *arg4361 = "LV";
  const char *arg4362 = "VG";
  int ret5;
  ret5 = guestfs_lvcreate (g, arg4361, arg4362, 40);
  if (ret5 == -1)
    return -1;
  const char *arg4365 = "xfs";
  const char *arg4366 = "/dev/VG/LV";
  struct guestfs_mkfs_opts_argv optargs4367;
  optargs4367.bitmask = UINT64_C(0x0);
  int ret4;
  ret4 = guestfs_mkfs_opts_argv (g, arg4365, arg4366, &optargs4367);
  if (ret4 == -1)
    return -1;
  const char *arg4368 = "/dev/VG/LV";
  int ret3;
  ret3 = guestfs_lvresize (g, arg4368, 80);
  if (ret3 == -1)
    return -1;
  const char *arg4371 = "/dev/VG/LV";
  const char *arg4372 = "/";
  int ret2;
  ret2 = guestfs_mount (g, arg4371, arg4372);
  if (ret2 == -1)
    return -1;
  const char *arg4374 = "/";
  struct guestfs_xfs_growfs_argv optargs4375;
  optargs4375.datasec = 1;
  optargs4375.logsec = 0;
  optargs4375.rtsec = 0;
  optargs4375.bitmask = UINT64_C(0x7);
  int ret1;
  ret1 = guestfs_xfs_growfs_argv (g, arg4374, &optargs4375);
  if (ret1 == -1)
    return -1;
  const char *arg4376 = "/";
  CLEANUP_FREE_XFSINFO struct guestfs_xfsinfo *ret;
  ret = guestfs_xfs_info (g, arg4376);
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

  const char *features4378[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4378)) {
    skipped ("test_xfs_info_0", "group %s not available in daemon",
             features4378[0]);
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
  const char *arg4379 = "/dev/sda";
  const char *arg4380 = "mbr";
  int ret3;
  ret3 = guestfs_part_disk (g, arg4379, arg4380);
  if (ret3 == -1)
    return -1;
  const char *arg4382 = "xfs";
  const char *arg4383 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4384;
  optargs4384.bitmask = UINT64_C(0x0);
  int ret2;
  ret2 = guestfs_mkfs_opts_argv (g, arg4382, arg4383, &optargs4384);
  if (ret2 == -1)
    return -1;
  const char *arg4385 = "/dev/sda1";
  const char *arg4386 = "/";
  int ret1;
  ret1 = guestfs_mount (g, arg4385, arg4386);
  if (ret1 == -1)
    return -1;
  const char *arg4388 = "/";
  CLEANUP_FREE_XFSINFO struct guestfs_xfsinfo *ret;
  ret = guestfs_xfs_info (g, arg4388);
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

  const char *features4390[] = { "xfs", NULL };
  if (!guestfs_feature_available (g, (char **) features4390)) {
    skipped ("test_xfs_repair_0", "group %s not available in daemon",
             features4390[0]);
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
  const char *arg4392 = "/dev/sda";
  const char *arg4393 = "mbr";
  int ret4391;
  ret4391 = guestfs_part_disk (g, arg4392, arg4393);
  if (ret4391 == -1)
    return -1;
  const char *arg4396 = "xfs";
  const char *arg4397 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4398;
  optargs4398.bitmask = UINT64_C(0x0);
  int ret4395;
  ret4395 = guestfs_mkfs_opts_argv (g, arg4396, arg4397, &optargs4398);
  if (ret4395 == -1)
    return -1;
  const char *arg4400 = "/dev/sda1";
  struct guestfs_xfs_repair_argv optargs4401;
  optargs4401.nomodify = 1;
  optargs4401.bitmask = UINT64_C(0x2);
  int ret4399;
  ret4399 = guestfs_xfs_repair_argv (g, arg4400, &optargs4401);
  if (ret4399 == -1)
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
  const char *arg4402 = "abc";
  const char *arg4403 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zegrep (g, arg4402, arg4403);
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
  const char *arg4405 = "abc";
  const char *arg4406 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zegrepi (g, arg4405, arg4406);
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
  const char *arg4409 = "/dev/sda1";
  struct guestfs_umount_opts_argv optargs4410;
  optargs4410.force = 0;
  optargs4410.lazyunmount = 0;
  optargs4410.bitmask = UINT64_C(0x3);
  int ret4408;
  ret4408 = guestfs_umount_opts_argv (g, arg4409, &optargs4410);
  if (ret4408 == -1)
    return -1;
  const char *arg4412 = "/dev/sda1";
  int ret4411;
  ret4411 = guestfs_zero (g, arg4412);
  if (ret4411 == -1)
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
  const char *arg4415 = "/dev/VG/LV";
  int ret4414;
  ret4414 = guestfs_zero_device (g, arg4415);
  if (ret4414 == -1)
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
  const char *arg4418 = "/";
  int ret4417;
  ret4417 = guestfs_zero_free_space (g, arg4418);
  if (ret4417 == -1)
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

  const char *features4420[] = { "zerofree", NULL };
  if (!guestfs_feature_available (g, (char **) features4420)) {
    skipped ("test_zerofree_0", "group %s not available in daemon",
             features4420[0]);
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
  const char *arg4422 = "/dev/sda";
  const char *arg4423 = "mbr";
  int ret4421;
  ret4421 = guestfs_part_disk (g, arg4422, arg4423);
  if (ret4421 == -1)
    return -1;
  const char *arg4426 = "ext3";
  const char *arg4427 = "/dev/sda1";
  struct guestfs_mkfs_opts_argv optargs4428;
  optargs4428.bitmask = UINT64_C(0x0);
  int ret4425;
  ret4425 = guestfs_mkfs_opts_argv (g, arg4426, arg4427, &optargs4428);
  if (ret4425 == -1)
    return -1;
  const char *arg4430 = "/dev/sda1";
  const char *arg4431 = "/";
  int ret4429;
  ret4429 = guestfs_mount (g, arg4430, arg4431);
  if (ret4429 == -1)
    return -1;
  const char *arg4434 = "/new";
  const char *arg4435 = "test file";
  size_t arg4435_size = 9;
  int ret4433;
  ret4433 = guestfs_write (g, arg4434, arg4435, arg4435_size);
  if (ret4433 == -1)
    return -1;
  const char *arg4438 = "/dev/sda1";
  struct guestfs_umount_opts_argv optargs4439;
  optargs4439.force = 0;
  optargs4439.lazyunmount = 0;
  optargs4439.bitmask = UINT64_C(0x3);
  int ret4437;
  ret4437 = guestfs_umount_opts_argv (g, arg4438, &optargs4439);
  if (ret4437 == -1)
    return -1;
  const char *arg4441 = "/dev/sda1";
  int ret4440;
  ret4440 = guestfs_zerofree (g, arg4441);
  if (ret4440 == -1)
    return -1;
  const char *arg4444 = "/dev/sda1";
  const char *arg4445 = "/";
  int ret4443;
  ret4443 = guestfs_mount (g, arg4444, arg4445);
  if (ret4443 == -1)
    return -1;
  const char *arg4447 = "/new";
  CLEANUP_FREE char *ret;
  ret = guestfs_cat (g, arg4447);
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
  const char *arg4449 = "abc";
  const char *arg4450 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zfgrep (g, arg4449, arg4450);
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
  const char *arg4452 = "abc";
  const char *arg4453 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zfgrepi (g, arg4452, arg4453);
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
  const char *arg4455 = "abc";
  const char *arg4456 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zgrep (g, arg4455, arg4456);
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
  const char *arg4458 = "abc";
  const char *arg4459 = "/test-grep.txt.gz";
  CLEANUP_FREE_STRING_LIST char **ret;
  ret = guestfs_zgrepi (g, arg4458, arg4459);
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

size_t nr_tests = 550;

struct test tests[550] = {
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
