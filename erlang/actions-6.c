/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM THE FOLLOWING FILES:
 *          generator/erlang.ml
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
#include <stdint.h>
#include <string.h>
#include <errno.h>

#include <ei.h>

#include "guestfs.h"
#include "guestfs-utils.h"

#include "actions.h"

int
run_aug_mv (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *src;
  if (decode_string (buff, idx, &src) != 0) return -1;
  CLEANUP_FREE char *dest;
  if (decode_string (buff, idx, &dest) != 0) return -1;
  int r;

  r = guestfs_aug_mv (g, src, dest);
  if (r == -1)
    return make_error (retbuff, "aug_mv");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_available_all_groups (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_available_all_groups (g);
  if (r == NULL)
    return make_error (retbuff, "available_all_groups");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_blockdev_getbsz (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_blockdev_getbsz (g, device);
  if (r == -1)
    return make_error (retbuff, "blockdev_getbsz");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_blockdev_getro (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_blockdev_getro (g, device);
  if (r == -1)
    return make_error (retbuff, "blockdev_getro");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_blockdev_setbsz (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int blocksize;
  if (decode_int (buff, idx, &blocksize) != 0) return -1;
  int r;

  r = guestfs_blockdev_setbsz (g, device, blocksize);
  if (r == -1)
    return make_error (retbuff, "blockdev_setbsz");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_qgroup_remove (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *src;
  if (decode_string (buff, idx, &src) != 0) return -1;
  CLEANUP_FREE char *dst;
  if (decode_string (buff, idx, &dst) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_btrfs_qgroup_remove (g, src, dst, path);
  if (r == -1)
    return make_error (retbuff, "btrfs_qgroup_remove");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_quota_enable (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *fs;
  if (decode_string (buff, idx, &fs) != 0) return -1;
  int enable;
  if (decode_bool (buff, idx, &enable) != 0) return -1;
  int r;

  r = guestfs_btrfs_quota_enable (g, fs, enable);
  if (r == -1)
    return make_error (retbuff, "btrfs_quota_enable");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_checksums_out (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *csumtype;
  if (decode_string (buff, idx, &csumtype) != 0) return -1;
  CLEANUP_FREE char *directory;
  if (decode_string (buff, idx, &directory) != 0) return -1;
  CLEANUP_FREE char *sumsfile;
  if (decode_string (buff, idx, &sumsfile) != 0) return -1;
  int r;

  r = guestfs_checksums_out (g, csumtype, directory, sumsfile);
  if (r == -1)
    return make_error (retbuff, "checksums_out");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_cp_a (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *src;
  if (decode_string (buff, idx, &src) != 0) return -1;
  CLEANUP_FREE char *dest;
  if (decode_string (buff, idx, &dest) != 0) return -1;
  int r;

  r = guestfs_cp_a (g, src, dest);
  if (r == -1)
    return make_error (retbuff, "cp_a");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_cryptsetup_open (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *key;
  if (decode_string (buff, idx, &key) != 0) return -1;
  CLEANUP_FREE char *mapname;
  if (decode_string (buff, idx, &mapname) != 0) return -1;

  struct guestfs_cryptsetup_open_argv optargs_s = { .bitmask = 0 };
  struct guestfs_cryptsetup_open_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "readonly")) {
      optargs_s.bitmask |= GUESTFS_CRYPTSETUP_OPEN_READONLY_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.readonly) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "crypttype")) {
      optargs_s.bitmask |= GUESTFS_CRYPTSETUP_OPEN_CRYPTTYPE_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.crypttype) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "cryptsetup_open", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_cryptsetup_open_argv (g, device, key, mapname, optargs);
  if ((optargs_s.bitmask & GUESTFS_CRYPTSETUP_OPEN_CRYPTTYPE_BITMASK))
    free ((char *) optargs_s.crypttype);
  if (r == -1)
    return make_error (retbuff, "cryptsetup_open");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_df (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char *r;

  r = guestfs_df (g);
  if (r == NULL)
    return make_error (retbuff, "df");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_disk_format (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  char *r;

  r = guestfs_disk_format (g, filename);
  if (r == NULL)
    return make_error (retbuff, "disk_format");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_egrepi (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *regex;
  if (decode_string (buff, idx, &regex) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_egrepi (g, regex, path);
  if (r == NULL)
    return make_error (retbuff, "egrepi");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_fallocate (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int len;
  if (decode_int (buff, idx, &len) != 0) return -1;
  int r;

  r = guestfs_fallocate (g, path, len);
  if (r == -1)
    return make_error (retbuff, "fallocate");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_fallocate64 (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int64_t len;
  if (decode_int64 (buff, idx, &len) != 0) return -1;
  int r;

  r = guestfs_fallocate64 (g, path, len);
  if (r == -1)
    return make_error (retbuff, "fallocate64");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_fgrep (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *pattern;
  if (decode_string (buff, idx, &pattern) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_fgrep (g, pattern, path);
  if (r == NULL)
    return make_error (retbuff, "fgrep");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_file (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char *r;

  r = guestfs_file (g, path);
  if (r == NULL)
    return make_error (retbuff, "file");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_filesize (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *file;
  if (decode_string (buff, idx, &file) != 0) return -1;
  int64_t r;

  r = guestfs_filesize (g, file);
  if (r == -1)
    return make_error (retbuff, "filesize");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_filesystem_available (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filesystem;
  if (decode_string (buff, idx, &filesystem) != 0) return -1;
  int r;

  r = guestfs_filesystem_available (g, filesystem);
  if (r == -1)
    return make_error (retbuff, "filesystem_available");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_fill (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int c;
  if (decode_int (buff, idx, &c) != 0) return -1;
  int len;
  if (decode_int (buff, idx, &len) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_fill (g, c, len, path);
  if (r == -1)
    return make_error (retbuff, "fill");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_find (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *directory;
  if (decode_string (buff, idx, &directory) != 0) return -1;
  char **r;

  r = guestfs_find (g, directory);
  if (r == NULL)
    return make_error (retbuff, "find");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_get_direct (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_get_direct (g);
  if (r == -1)
    return make_error (retbuff, "get_direct");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_get_hv (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char *r;

  r = guestfs_get_hv (g);
  if (r == NULL)
    return make_error (retbuff, "get_hv");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_get_libvirt_requested_credentials (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_get_libvirt_requested_credentials (g);
  if (r == NULL)
    return make_error (retbuff, "get_libvirt_requested_credentials");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_head (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_head (g, path);
  if (r == NULL)
    return make_error (retbuff, "head");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_hivex_node_name (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t nodeh;
  if (decode_int64 (buff, idx, &nodeh) != 0) return -1;
  char *r;

  r = guestfs_hivex_node_name (g, nodeh);
  if (r == NULL)
    return make_error (retbuff, "hivex_node_name");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_hivex_node_values (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t nodeh;
  if (decode_int64 (buff, idx, &nodeh) != 0) return -1;
  struct guestfs_hivex_value_list *r;

  r = guestfs_hivex_node_values (g, nodeh);
  if (r == NULL)
    return make_error (retbuff, "hivex_node_values");

  if (make_hivex_value_list (retbuff, r) != 0) return -1;
  guestfs_free_hivex_value_list (r);
  return 0;
}

int
run_inotify_read (ei_x_buff *retbuff, const char *buff, int *idx)
{
  struct guestfs_inotify_event_list *r;

  r = guestfs_inotify_read (g);
  if (r == NULL)
    return make_error (retbuff, "inotify_read");

  if (make_inotify_event_list (retbuff, r) != 0) return -1;
  guestfs_free_inotify_event_list (r);
  return 0;
}

int
run_inspect_get_build_id (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char *r;

  r = guestfs_inspect_get_build_id (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_build_id");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_inspect_get_mountpoints (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char **r;

  r = guestfs_inspect_get_mountpoints (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_mountpoints");

  if (make_table (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_inspect_get_package_management (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char *r;

  r = guestfs_inspect_get_package_management (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_package_management");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_inspect_get_product_name (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char *r;

  r = guestfs_inspect_get_product_name (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_product_name");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_internal_test_rconststring (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *val;
  if (decode_string (buff, idx, &val) != 0) return -1;
  const char *r;

  r = guestfs_internal_test_rconststring (g, val);
  if (r == NULL)
    return make_error (retbuff, "internal_test_rconststring");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  return 0;
}

int
run_internal_test_rint (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *val;
  if (decode_string (buff, idx, &val) != 0) return -1;
  int r;

  r = guestfs_internal_test_rint (g, val);
  if (r == -1)
    return make_error (retbuff, "internal_test_rint");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_internal_test_rint64err (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t r;

  r = guestfs_internal_test_rint64err (g);
  if (r == -1)
    return make_error (retbuff, "internal_test_rint64err");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_internal_test_rstruct (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *val;
  if (decode_string (buff, idx, &val) != 0) return -1;
  struct guestfs_lvm_pv *r;

  r = guestfs_internal_test_rstruct (g, val);
  if (r == NULL)
    return make_error (retbuff, "internal_test_rstruct");

  if (make_lvm_pv (retbuff, r) != 0) return -1;
  guestfs_free_lvm_pv (r);
  return 0;
}

int
run_isoinfo (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *isofile;
  if (decode_string (buff, idx, &isofile) != 0) return -1;
  struct guestfs_isoinfo *r;

  r = guestfs_isoinfo (g, isofile);
  if (r == NULL)
    return make_error (retbuff, "isoinfo");

  if (make_isoinfo (retbuff, r) != 0) return -1;
  guestfs_free_isoinfo (r);
  return 0;
}

int
run_journal_close (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_journal_close (g);
  if (r == -1)
    return make_error (retbuff, "journal_close");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_lgetxattr (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  CLEANUP_FREE char *name;
  if (decode_string (buff, idx, &name) != 0) return -1;
  char *r;
  size_t size;

  r = guestfs_lgetxattr (g, path, name, &size);
  if (r == NULL)
    return make_error (retbuff, "lgetxattr");

  if (ei_x_encode_binary (retbuff, r, size) != 0) return -1;
  free (r);
  return 0;
}

int
run_list_9p (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_list_9p (g);
  if (r == NULL)
    return make_error (retbuff, "list_9p");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_list_ldm_partitions (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_list_ldm_partitions (g);
  if (r == NULL)
    return make_error (retbuff, "list_ldm_partitions");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_luks_format_cipher (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *key;
  if (decode_string (buff, idx, &key) != 0) return -1;
  int keyslot;
  if (decode_int (buff, idx, &keyslot) != 0) return -1;
  CLEANUP_FREE char *cipher;
  if (decode_string (buff, idx, &cipher) != 0) return -1;
  int r;

  r = guestfs_luks_format_cipher (g, device, key, keyslot, cipher);
  if (r == -1)
    return make_error (retbuff, "luks_format_cipher");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_lvm_clear_filter (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_lvm_clear_filter (g);
  if (r == -1)
    return make_error (retbuff, "lvm_clear_filter");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_lvs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_lvs (g);
  if (r == NULL)
    return make_error (retbuff, "lvs");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_max_disks (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_max_disks (g);
  if (r == -1)
    return make_error (retbuff, "max_disks");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_md_detail (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *md;
  if (decode_string (buff, idx, &md) != 0) return -1;
  char **r;

  r = guestfs_md_detail (g, md);
  if (r == NULL)
    return make_error (retbuff, "md_detail");

  if (make_table (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_mke2journal_L (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int blocksize;
  if (decode_int (buff, idx, &blocksize) != 0) return -1;
  CLEANUP_FREE char *label;
  if (decode_string (buff, idx, &label) != 0) return -1;
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_mke2journal_L (g, blocksize, label, device);
  if (r == -1)
    return make_error (retbuff, "mke2journal_L");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mkswap (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;

  struct guestfs_mkswap_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_mkswap_opts_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "label")) {
      optargs_s.bitmask |= GUESTFS_MKSWAP_OPTS_LABEL_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.label) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "uuid")) {
      optargs_s.bitmask |= GUESTFS_MKSWAP_OPTS_UUID_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.uuid) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "mkswap", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_mkswap_opts_argv (g, device, optargs);
  if ((optargs_s.bitmask & GUESTFS_MKSWAP_OPTS_LABEL_BITMASK))
    free ((char *) optargs_s.label);
  if ((optargs_s.bitmask & GUESTFS_MKSWAP_OPTS_UUID_BITMASK))
    free ((char *) optargs_s.uuid);
  if (r == -1)
    return make_error (retbuff, "mkswap");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mkswap_L (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *label;
  if (decode_string (buff, idx, &label) != 0) return -1;
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_mkswap_L (g, label, device);
  if (r == -1)
    return make_error (retbuff, "mkswap_L");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mktemp (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *tmpl;
  if (decode_string (buff, idx, &tmpl) != 0) return -1;

  struct guestfs_mktemp_argv optargs_s = { .bitmask = 0 };
  struct guestfs_mktemp_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "suffix")) {
      optargs_s.bitmask |= GUESTFS_MKTEMP_SUFFIX_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.suffix) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "mktemp", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  char *r;

  r = guestfs_mktemp_argv (g, tmpl, optargs);
  if ((optargs_s.bitmask & GUESTFS_MKTEMP_SUFFIX_BITMASK))
    free ((char *) optargs_s.suffix);
  if (r == NULL)
    return make_error (retbuff, "mktemp");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_mount_loop (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *file;
  if (decode_string (buff, idx, &file) != 0) return -1;
  CLEANUP_FREE char *mountpoint;
  if (decode_string (buff, idx, &mountpoint) != 0) return -1;
  int r;

  r = guestfs_mount_loop (g, file, mountpoint);
  if (r == -1)
    return make_error (retbuff, "mount_loop");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mount_vfs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *options;
  if (decode_string (buff, idx, &options) != 0) return -1;
  CLEANUP_FREE char *vfstype;
  if (decode_string (buff, idx, &vfstype) != 0) return -1;
  CLEANUP_FREE char *mountable;
  if (decode_string (buff, idx, &mountable) != 0) return -1;
  CLEANUP_FREE char *mountpoint;
  if (decode_string (buff, idx, &mountpoint) != 0) return -1;
  int r;

  r = guestfs_mount_vfs (g, options, vfstype, mountable, mountpoint);
  if (r == -1)
    return make_error (retbuff, "mount_vfs");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_set_mbr_id (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int partnum;
  if (decode_int (buff, idx, &partnum) != 0) return -1;
  int idbyte;
  if (decode_int (buff, idx, &idbyte) != 0) return -1;
  int r;

  r = guestfs_part_set_mbr_id (g, device, partnum, idbyte);
  if (r == -1)
    return make_error (retbuff, "part_set_mbr_id");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_pread_device (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int count;
  if (decode_int (buff, idx, &count) != 0) return -1;
  int64_t offset;
  if (decode_int64 (buff, idx, &offset) != 0) return -1;
  char *r;
  size_t size;

  r = guestfs_pread_device (g, device, count, offset, &size);
  if (r == NULL)
    return make_error (retbuff, "pread_device");

  if (ei_x_encode_binary (retbuff, r, size) != 0) return -1;
  free (r);
  return 0;
}

int
run_pvchange_uuid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_pvchange_uuid (g, device);
  if (r == -1)
    return make_error (retbuff, "pvchange_uuid");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_pvchange_uuid_all (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_pvchange_uuid_all (g);
  if (r == -1)
    return make_error (retbuff, "pvchange_uuid_all");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_pvresize_size (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int64_t size;
  if (decode_int64 (buff, idx, &size) != 0) return -1;
  int r;

  r = guestfs_pvresize_size (g, device, size);
  if (r == -1)
    return make_error (retbuff, "pvresize_size");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_read_lines (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_read_lines (g, path);
  if (r == NULL)
    return make_error (retbuff, "read_lines");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_remount (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *mountpoint;
  if (decode_string (buff, idx, &mountpoint) != 0) return -1;

  struct guestfs_remount_argv optargs_s = { .bitmask = 0 };
  struct guestfs_remount_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "rw")) {
      optargs_s.bitmask |= GUESTFS_REMOUNT_RW_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.rw) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "remount", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_remount_argv (g, mountpoint, optargs);
  if (r == -1)
    return make_error (retbuff, "remount");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_removexattr (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *xattr;
  if (decode_string (buff, idx, &xattr) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_removexattr (g, xattr, path);
  if (r == -1)
    return make_error (retbuff, "removexattr");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_resize2fs_size (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int64_t size;
  if (decode_int64 (buff, idx, &size) != 0) return -1;
  int r;

  r = guestfs_resize2fs_size (g, device, size);
  if (r == -1)
    return make_error (retbuff, "resize2fs_size");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_rm_f (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_rm_f (g, path);
  if (r == -1)
    return make_error (retbuff, "rm_f");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_rsync_out (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *src;
  if (decode_string (buff, idx, &src) != 0) return -1;
  CLEANUP_FREE char *remote;
  if (decode_string (buff, idx, &remote) != 0) return -1;

  struct guestfs_rsync_out_argv optargs_s = { .bitmask = 0 };
  struct guestfs_rsync_out_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "archive")) {
      optargs_s.bitmask |= GUESTFS_RSYNC_OUT_ARCHIVE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.archive) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "deletedest")) {
      optargs_s.bitmask |= GUESTFS_RSYNC_OUT_DELETEDEST_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.deletedest) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "rsync_out", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_rsync_out_argv (g, src, remote, optargs);
  if (r == -1)
    return make_error (retbuff, "rsync_out");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_e2generation (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *file;
  if (decode_string (buff, idx, &file) != 0) return -1;
  int64_t generation;
  if (decode_int64 (buff, idx, &generation) != 0) return -1;
  int r;

  r = guestfs_set_e2generation (g, file, generation);
  if (r == -1)
    return make_error (retbuff, "set_e2generation");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_label (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *mountable;
  if (decode_string (buff, idx, &mountable) != 0) return -1;
  CLEANUP_FREE char *label;
  if (decode_string (buff, idx, &label) != 0) return -1;
  int r;

  r = guestfs_set_label (g, mountable, label);
  if (r == -1)
    return make_error (retbuff, "set_label");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_sfdisk_kernel_geometry (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  char *r;

  r = guestfs_sfdisk_kernel_geometry (g, device);
  if (r == NULL)
    return make_error (retbuff, "sfdisk_kernel_geometry");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_sleep (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int secs;
  if (decode_int (buff, idx, &secs) != 0) return -1;
  int r;

  r = guestfs_sleep (g, secs);
  if (r == -1)
    return make_error (retbuff, "sleep");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_strings_e (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *encoding;
  if (decode_string (buff, idx, &encoding) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_strings_e (g, encoding, path);
  if (r == NULL)
    return make_error (retbuff, "strings_e");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_sync (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_sync (g);
  if (r == -1)
    return make_error (retbuff, "sync");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_tail_n (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int nrlines;
  if (decode_int (buff, idx, &nrlines) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_tail_n (g, nrlines, path);
  if (r == NULL)
    return make_error (retbuff, "tail_n");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_tar_out (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *directory;
  if (decode_string (buff, idx, &directory) != 0) return -1;
  CLEANUP_FREE char *tarfile;
  if (decode_string (buff, idx, &tarfile) != 0) return -1;

  struct guestfs_tar_out_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_tar_out_opts_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "compress")) {
      optargs_s.bitmask |= GUESTFS_TAR_OUT_OPTS_COMPRESS_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.compress) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "numericowner")) {
      optargs_s.bitmask |= GUESTFS_TAR_OUT_OPTS_NUMERICOWNER_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.numericowner) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "excludes")) {
      optargs_s.bitmask |= GUESTFS_TAR_OUT_OPTS_EXCLUDES_BITMASK;
      if (decode_string_list (buff, idx, (char ***) &optargs_s.excludes) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "xattrs")) {
      optargs_s.bitmask |= GUESTFS_TAR_OUT_OPTS_XATTRS_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.xattrs) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "selinux")) {
      optargs_s.bitmask |= GUESTFS_TAR_OUT_OPTS_SELINUX_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.selinux) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "acls")) {
      optargs_s.bitmask |= GUESTFS_TAR_OUT_OPTS_ACLS_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.acls) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "tar_out", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_tar_out_opts_argv (g, directory, tarfile, optargs);
  if ((optargs_s.bitmask & GUESTFS_TAR_OUT_OPTS_COMPRESS_BITMASK))
    free ((char *) optargs_s.compress);
  if ((optargs_s.bitmask & GUESTFS_TAR_OUT_OPTS_EXCLUDES_BITMASK))
    guestfs_int_free_string_list ((char **) optargs_s.excludes);
  if (r == -1)
    return make_error (retbuff, "tar_out");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_vfs_type (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *mountable;
  if (decode_string (buff, idx, &mountable) != 0) return -1;
  char *r;

  r = guestfs_vfs_type (g, mountable);
  if (r == NULL)
    return make_error (retbuff, "vfs_type");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_vgcreate (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *volgroup;
  if (decode_string (buff, idx, &volgroup) != 0) return -1;
  CLEANUP_FREE_STRING_LIST char **physvols;
  if (decode_string_list (buff, idx, &physvols) != 0) return -1;
  int r;

  r = guestfs_vgcreate (g, volgroup, physvols);
  if (r == -1)
    return make_error (retbuff, "vgcreate");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_wait_ready (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_wait_ready (g);
  if (r == -1)
    return make_error (retbuff, "wait_ready");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_wc_c (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_wc_c (g, path);
  if (r == -1)
    return make_error (retbuff, "wc_c");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_yara_load (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  int r;

  r = guestfs_yara_load (g, filename);
  if (r == -1)
    return make_error (retbuff, "yara_load");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_zegrep (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *regex;
  if (decode_string (buff, idx, &regex) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_zegrep (g, regex, path);
  if (r == NULL)
    return make_error (retbuff, "zegrep");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}
