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
run_acl_set_file (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  CLEANUP_FREE char *acltype;
  if (decode_string (buff, idx, &acltype) != 0) return -1;
  CLEANUP_FREE char *acl;
  if (decode_string (buff, idx, &acl) != 0) return -1;
  int r;

  r = guestfs_acl_set_file (g, path, acltype, acl);
  if (r == -1)
    return make_error (retbuff, "acl_set_file");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_add_drive_with_if (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  CLEANUP_FREE char *iface;
  if (decode_string (buff, idx, &iface) != 0) return -1;
  int r;

  r = guestfs_add_drive_with_if (g, filename, iface);
  if (r == -1)
    return make_error (retbuff, "add_drive_with_if");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_blockdev_flushbufs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_blockdev_flushbufs (g, device);
  if (r == -1)
    return make_error (retbuff, "blockdev_flushbufs");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_blockdev_setrw (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_blockdev_setrw (g, device);
  if (r == -1)
    return make_error (retbuff, "blockdev_setrw");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_balance_pause (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_btrfs_balance_pause (g, path);
  if (r == -1)
    return make_error (retbuff, "btrfs_balance_pause");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_device_add (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE_STRING_LIST char **devices;
  if (decode_string_list (buff, idx, &devices) != 0) return -1;
  CLEANUP_FREE char *fs;
  if (decode_string (buff, idx, &fs) != 0) return -1;
  int r;

  r = guestfs_btrfs_device_add (g, devices, fs);
  if (r == -1)
    return make_error (retbuff, "btrfs_device_add");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_filesystem_balance (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *fs;
  if (decode_string (buff, idx, &fs) != 0) return -1;
  int r;

  r = guestfs_btrfs_filesystem_balance (g, fs);
  if (r == -1)
    return make_error (retbuff, "btrfs_filesystem_balance");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_filesystem_show (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  char **r;

  r = guestfs_btrfs_filesystem_show (g, device);
  if (r == NULL)
    return make_error (retbuff, "btrfs_filesystem_show");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_btrfs_qgroup_assign (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *src;
  if (decode_string (buff, idx, &src) != 0) return -1;
  CLEANUP_FREE char *dst;
  if (decode_string (buff, idx, &dst) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_btrfs_qgroup_assign (g, src, dst, path);
  if (r == -1)
    return make_error (retbuff, "btrfs_qgroup_assign");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_replace (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *srcdev;
  if (decode_string (buff, idx, &srcdev) != 0) return -1;
  CLEANUP_FREE char *targetdev;
  if (decode_string (buff, idx, &targetdev) != 0) return -1;
  CLEANUP_FREE char *mntpoint;
  if (decode_string (buff, idx, &mntpoint) != 0) return -1;
  int r;

  r = guestfs_btrfs_replace (g, srcdev, targetdev, mntpoint);
  if (r == -1)
    return make_error (retbuff, "btrfs_replace");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_scrub_cancel (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_btrfs_scrub_cancel (g, path);
  if (r == -1)
    return make_error (retbuff, "btrfs_scrub_cancel");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_subvolume_get_default (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *fs;
  if (decode_string (buff, idx, &fs) != 0) return -1;
  int64_t r;

  r = guestfs_btrfs_subvolume_get_default (g, fs);
  if (r == -1)
    return make_error (retbuff, "btrfs_subvolume_get_default");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_btrfstune_seeding (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int seeding;
  if (decode_bool (buff, idx, &seeding) != 0) return -1;
  int r;

  r = guestfs_btrfstune_seeding (g, device, seeding);
  if (r == -1)
    return make_error (retbuff, "btrfstune_seeding");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_c_pointer (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t r;

  r = guestfs_c_pointer (g);
  if (r == -1)
    return make_error (retbuff, "c_pointer");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_cap_set_file (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  CLEANUP_FREE char *cap;
  if (decode_string (buff, idx, &cap) != 0) return -1;
  int r;

  r = guestfs_cap_set_file (g, path, cap);
  if (r == -1)
    return make_error (retbuff, "cap_set_file");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_copy_file_to_device (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *src;
  if (decode_string (buff, idx, &src) != 0) return -1;
  CLEANUP_FREE char *dest;
  if (decode_string (buff, idx, &dest) != 0) return -1;

  struct guestfs_copy_file_to_device_argv optargs_s = { .bitmask = 0 };
  struct guestfs_copy_file_to_device_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "srcoffset")) {
      optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_DEVICE_SRCOFFSET_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.srcoffset) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "destoffset")) {
      optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_DEVICE_DESTOFFSET_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.destoffset) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "size")) {
      optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_DEVICE_SIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.size) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "sparse")) {
      optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_DEVICE_SPARSE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.sparse) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "append")) {
      optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_DEVICE_APPEND_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.append) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "copy_file_to_device", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_copy_file_to_device_argv (g, src, dest, optargs);
  if (r == -1)
    return make_error (retbuff, "copy_file_to_device");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_copy_file_to_file (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *src;
  if (decode_string (buff, idx, &src) != 0) return -1;
  CLEANUP_FREE char *dest;
  if (decode_string (buff, idx, &dest) != 0) return -1;

  struct guestfs_copy_file_to_file_argv optargs_s = { .bitmask = 0 };
  struct guestfs_copy_file_to_file_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "srcoffset")) {
      optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_FILE_SRCOFFSET_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.srcoffset) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "destoffset")) {
      optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_FILE_DESTOFFSET_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.destoffset) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "size")) {
      optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_FILE_SIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.size) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "sparse")) {
      optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_FILE_SPARSE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.sparse) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "append")) {
      optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_FILE_APPEND_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.append) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "copy_file_to_file", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_copy_file_to_file_argv (g, src, dest, optargs);
  if (r == -1)
    return make_error (retbuff, "copy_file_to_file");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_cpio_out (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *directory;
  if (decode_string (buff, idx, &directory) != 0) return -1;
  CLEANUP_FREE char *cpiofile;
  if (decode_string (buff, idx, &cpiofile) != 0) return -1;

  struct guestfs_cpio_out_argv optargs_s = { .bitmask = 0 };
  struct guestfs_cpio_out_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "format")) {
      optargs_s.bitmask |= GUESTFS_CPIO_OUT_FORMAT_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.format) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "cpio_out", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_cpio_out_argv (g, directory, cpiofile, optargs);
  if ((optargs_s.bitmask & GUESTFS_CPIO_OUT_FORMAT_BITMASK))
    free ((char *) optargs_s.format);
  if (r == -1)
    return make_error (retbuff, "cpio_out");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_disk_virtual_size (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  int64_t r;

  r = guestfs_disk_virtual_size (g, filename);
  if (r == -1)
    return make_error (retbuff, "disk_virtual_size");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_download (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *remotefilename;
  if (decode_string (buff, idx, &remotefilename) != 0) return -1;
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  int r;

  r = guestfs_download (g, remotefilename, filename);
  if (r == -1)
    return make_error (retbuff, "download");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_feature_available (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE_STRING_LIST char **groups;
  if (decode_string_list (buff, idx, &groups) != 0) return -1;
  int r;

  r = guestfs_feature_available (g, groups);
  if (r == -1)
    return make_error (retbuff, "feature_available");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_fill_pattern (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *pattern;
  if (decode_string (buff, idx, &pattern) != 0) return -1;
  int len;
  if (decode_int (buff, idx, &len) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_fill_pattern (g, pattern, len, path);
  if (r == -1)
    return make_error (retbuff, "fill_pattern");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_find0 (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *directory;
  if (decode_string (buff, idx, &directory) != 0) return -1;
  CLEANUP_FREE char *files;
  if (decode_string (buff, idx, &files) != 0) return -1;
  int r;

  r = guestfs_find0 (g, directory, files);
  if (r == -1)
    return make_error (retbuff, "find0");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_get_append (ei_x_buff *retbuff, const char *buff, int *idx)
{
  const char *r;

  r = guestfs_get_append (g);

  if (r) {
    if (ei_x_encode_string (retbuff, r) != 0) return -1;
  } else {
    if (ei_x_encode_atom (retbuff, "undefined") != 0) return -1;
  }
  return 0;
}

int
run_get_memsize (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_get_memsize (g);
  if (r == -1)
    return make_error (retbuff, "get_memsize");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_get_program (ei_x_buff *retbuff, const char *buff, int *idx)
{
  const char *r;

  r = guestfs_get_program (g);
  if (r == NULL)
    return make_error (retbuff, "get_program");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  return 0;
}

int
run_head_n (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int nrlines;
  if (decode_int (buff, idx, &nrlines) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_head_n (g, nrlines, path);
  if (r == NULL)
    return make_error (retbuff, "head_n");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_hivex_commit (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  char filename_opt[MAXATOMLEN];
  if (ei_decode_atom(buff, idx, filename_opt) == 0) {
    if (atom_equals (filename_opt, "undefined"))
      filename = NULL;
    else
      filename = filename_opt;
  } else {
    if (decode_string (buff, idx, &filename) != 0) return -1;
  }
  int r;

  r = guestfs_hivex_commit (g, filename);
  if (r == -1)
    return make_error (retbuff, "hivex_commit");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_hivex_node_delete_child (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t nodeh;
  if (decode_int64 (buff, idx, &nodeh) != 0) return -1;
  int r;

  r = guestfs_hivex_node_delete_child (g, nodeh);
  if (r == -1)
    return make_error (retbuff, "hivex_node_delete_child");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_initrd_cat (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *initrdpath;
  if (decode_string (buff, idx, &initrdpath) != 0) return -1;
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  char *r;
  size_t size;

  r = guestfs_initrd_cat (g, initrdpath, filename, &size);
  if (r == NULL)
    return make_error (retbuff, "initrd_cat");

  if (ei_x_encode_binary (retbuff, r, size) != 0) return -1;
  free (r);
  return 0;
}

int
run_inotify_close (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_inotify_close (g);
  if (r == -1)
    return make_error (retbuff, "inotify_close");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_inspect_get_major_version (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  int r;

  r = guestfs_inspect_get_major_version (g, root);
  if (r == -1)
    return make_error (retbuff, "inspect_get_major_version");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_inspect_get_osinfo (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char *r;

  r = guestfs_inspect_get_osinfo (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_osinfo");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_inspect_get_roots (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_inspect_get_roots (g);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_roots");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_internal_test (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *str;
  if (decode_string (buff, idx, &str) != 0) return -1;
  CLEANUP_FREE char *optstr;
  char optstr_opt[MAXATOMLEN];
  if (ei_decode_atom(buff, idx, optstr_opt) == 0) {
    if (atom_equals (optstr_opt, "undefined"))
      optstr = NULL;
    else
      optstr = optstr_opt;
  } else {
    if (decode_string (buff, idx, &optstr) != 0) return -1;
  }
  CLEANUP_FREE_STRING_LIST char **strlist;
  if (decode_string_list (buff, idx, &strlist) != 0) return -1;
  int b;
  if (decode_bool (buff, idx, &b) != 0) return -1;
  int integer;
  if (decode_int (buff, idx, &integer) != 0) return -1;
  int64_t integer64;
  if (decode_int64 (buff, idx, &integer64) != 0) return -1;
  CLEANUP_FREE char *filein;
  if (decode_string (buff, idx, &filein) != 0) return -1;
  CLEANUP_FREE char *fileout;
  if (decode_string (buff, idx, &fileout) != 0) return -1;
  CLEANUP_FREE char *bufferin;
  size_t bufferin_size;
  if (decode_binary (buff, idx, &bufferin, &bufferin_size) != 0) return -1;

  struct guestfs_internal_test_argv optargs_s = { .bitmask = 0 };
  struct guestfs_internal_test_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "obool")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_OBOOL_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.obool) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "oint")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_OINT_BITMASK;
      if (decode_int (buff, idx, &optargs_s.oint) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "oint64")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_OINT64_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.oint64) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "ostring")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_OSTRING_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.ostring) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "ostringlist")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_OSTRINGLIST_BITMASK;
      if (decode_string_list (buff, idx, (char ***) &optargs_s.ostringlist) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "internal_test", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_internal_test_argv (g, str, optstr, strlist, b, integer, integer64, filein, fileout, bufferin, bufferin_size, optargs);
  if ((optargs_s.bitmask & GUESTFS_INTERNAL_TEST_OSTRING_BITMASK))
    free ((char *) optargs_s.ostring);
  if ((optargs_s.bitmask & GUESTFS_INTERNAL_TEST_OSTRINGLIST_BITMASK))
    guestfs_int_free_string_list ((char **) optargs_s.ostringlist);
  if (r == -1)
    return make_error (retbuff, "internal_test");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_internal_test_63_optargs (ei_x_buff *retbuff, const char *buff, int *idx)
{

  struct guestfs_internal_test_63_optargs_argv optargs_s = { .bitmask = 0 };
  struct guestfs_internal_test_63_optargs_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "opt1")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT1_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt1) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt2")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT2_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt2) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt3")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT3_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt3) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt4")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT4_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt4) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt5")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT5_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt5) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt6")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT6_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt6) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt7")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT7_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt7) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt8")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT8_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt8) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt9")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT9_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt9) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt10")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT10_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt10) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt11")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT11_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt11) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt12")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT12_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt12) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt13")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT13_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt13) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt14")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT14_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt14) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt15")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT15_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt15) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt16")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT16_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt16) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt17")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT17_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt17) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt18")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT18_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt18) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt19")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT19_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt19) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt20")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT20_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt20) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt21")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT21_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt21) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt22")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT22_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt22) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt23")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT23_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt23) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt24")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT24_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt24) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt25")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT25_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt25) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt26")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT26_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt26) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt27")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT27_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt27) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt28")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT28_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt28) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt29")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT29_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt29) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt30")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT30_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt30) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt31")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT31_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt31) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt32")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT32_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt32) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt33")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT33_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt33) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt34")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT34_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt34) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt35")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT35_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt35) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt36")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT36_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt36) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt37")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT37_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt37) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt38")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT38_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt38) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt39")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT39_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt39) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt40")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT40_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt40) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt41")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT41_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt41) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt42")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT42_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt42) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt43")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT43_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt43) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt44")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT44_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt44) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt45")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT45_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt45) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt46")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT46_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt46) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt47")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT47_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt47) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt48")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT48_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt48) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt49")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT49_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt49) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt50")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT50_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt50) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt51")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT51_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt51) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt52")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT52_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt52) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt53")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT53_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt53) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt54")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT54_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt54) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt55")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT55_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt55) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt56")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT56_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt56) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt57")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT57_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt57) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt58")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT58_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt58) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt59")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT59_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt59) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt60")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT60_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt60) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt61")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT61_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt61) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt62")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT62_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt62) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "opt63")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT63_BITMASK;
      if (decode_int (buff, idx, &optargs_s.opt63) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "internal_test_63_optargs", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_internal_test_63_optargs_argv (g, optargs);
  if (r == -1)
    return make_error (retbuff, "internal_test_63_optargs");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_internal_test_rhashtableerr (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_internal_test_rhashtableerr (g);
  if (r == NULL)
    return make_error (retbuff, "internal_test_rhashtableerr");

  if (make_table (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_is_blockdev (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;

  struct guestfs_is_blockdev_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_is_blockdev_opts_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "followsymlinks")) {
      optargs_s.bitmask |= GUESTFS_IS_BLOCKDEV_OPTS_FOLLOWSYMLINKS_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.followsymlinks) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "is_blockdev", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_is_blockdev_opts_argv (g, path, optargs);
  if (r == -1)
    return make_error (retbuff, "is_blockdev");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_is_config (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_is_config (g);
  if (r == -1)
    return make_error (retbuff, "is_config");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_is_fifo (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;

  struct guestfs_is_fifo_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_is_fifo_opts_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "followsymlinks")) {
      optargs_s.bitmask |= GUESTFS_IS_FIFO_OPTS_FOLLOWSYMLINKS_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.followsymlinks) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "is_fifo", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_is_fifo_opts_argv (g, path, optargs);
  if (r == -1)
    return make_error (retbuff, "is_fifo");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_isoinfo_device (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  struct guestfs_isoinfo *r;

  r = guestfs_isoinfo_device (g, device);
  if (r == NULL)
    return make_error (retbuff, "isoinfo_device");

  if (make_isoinfo (retbuff, r) != 0) return -1;
  guestfs_free_isoinfo (r);
  return 0;
}

int
run_journal_next (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_journal_next (g);
  if (r == -1)
    return make_error (retbuff, "journal_next");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_journal_skip (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t skip;
  if (decode_int64 (buff, idx, &skip) != 0) return -1;
  int64_t r;

  r = guestfs_journal_skip (g, skip);
  if (r == -1)
    return make_error (retbuff, "journal_skip");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_ldmtool_volume_partitions (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *diskgroup;
  if (decode_string (buff, idx, &diskgroup) != 0) return -1;
  CLEANUP_FREE char *volume;
  if (decode_string (buff, idx, &volume) != 0) return -1;
  char **r;

  r = guestfs_ldmtool_volume_partitions (g, diskgroup, volume);
  if (r == NULL)
    return make_error (retbuff, "ldmtool_volume_partitions");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_list_disk_labels (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_list_disk_labels (g);
  if (r == NULL)
    return make_error (retbuff, "list_disk_labels");

  if (make_table (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_list_md_devices (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_list_md_devices (g);
  if (r == NULL)
    return make_error (retbuff, "list_md_devices");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_ln (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *target;
  if (decode_string (buff, idx, &target) != 0) return -1;
  CLEANUP_FREE char *linkname;
  if (decode_string (buff, idx, &linkname) != 0) return -1;
  int r;

  r = guestfs_ln (g, target, linkname);
  if (r == -1)
    return make_error (retbuff, "ln");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_ln_sf (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *target;
  if (decode_string (buff, idx, &target) != 0) return -1;
  CLEANUP_FREE char *linkname;
  if (decode_string (buff, idx, &linkname) != 0) return -1;
  int r;

  r = guestfs_ln_sf (g, target, linkname);
  if (r == -1)
    return make_error (retbuff, "ln_sf");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_luks_add_key (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *key;
  if (decode_string (buff, idx, &key) != 0) return -1;
  CLEANUP_FREE char *newkey;
  if (decode_string (buff, idx, &newkey) != 0) return -1;
  int keyslot;
  if (decode_int (buff, idx, &keyslot) != 0) return -1;
  int r;

  r = guestfs_luks_add_key (g, device, key, newkey, keyslot);
  if (r == -1)
    return make_error (retbuff, "luks_add_key");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_lvcreate (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *logvol;
  if (decode_string (buff, idx, &logvol) != 0) return -1;
  CLEANUP_FREE char *volgroup;
  if (decode_string (buff, idx, &volgroup) != 0) return -1;
  int mbytes;
  if (decode_int (buff, idx, &mbytes) != 0) return -1;
  int r;

  r = guestfs_lvcreate (g, logvol, volgroup, mbytes);
  if (r == -1)
    return make_error (retbuff, "lvcreate");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_lvcreate_free (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *logvol;
  if (decode_string (buff, idx, &logvol) != 0) return -1;
  CLEANUP_FREE char *volgroup;
  if (decode_string (buff, idx, &volgroup) != 0) return -1;
  int percent;
  if (decode_int (buff, idx, &percent) != 0) return -1;
  int r;

  r = guestfs_lvcreate_free (g, logvol, volgroup, percent);
  if (r == -1)
    return make_error (retbuff, "lvcreate_free");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_lvm_set_filter (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE_STRING_LIST char **devices;
  if (decode_string_list (buff, idx, &devices) != 0) return -1;
  int r;

  r = guestfs_lvm_set_filter (g, devices);
  if (r == -1)
    return make_error (retbuff, "lvm_set_filter");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_lvs_full (ei_x_buff *retbuff, const char *buff, int *idx)
{
  struct guestfs_lvm_lv_list *r;

  r = guestfs_lvs_full (g);
  if (r == NULL)
    return make_error (retbuff, "lvs_full");

  if (make_lvm_lv_list (retbuff, r) != 0) return -1;
  guestfs_free_lvm_lv_list (r);
  return 0;
}

int
run_md_stat (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *md;
  if (decode_string (buff, idx, &md) != 0) return -1;
  struct guestfs_mdstat_list *r;

  r = guestfs_md_stat (g, md);
  if (r == NULL)
    return make_error (retbuff, "md_stat");

  if (make_mdstat_list (retbuff, r) != 0) return -1;
  guestfs_free_mdstat_list (r);
  return 0;
}

int
run_mkfs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *fstype;
  if (decode_string (buff, idx, &fstype) != 0) return -1;
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;

  struct guestfs_mkfs_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_mkfs_opts_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "blocksize")) {
      optargs_s.bitmask |= GUESTFS_MKFS_OPTS_BLOCKSIZE_BITMASK;
      if (decode_int (buff, idx, &optargs_s.blocksize) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "features")) {
      optargs_s.bitmask |= GUESTFS_MKFS_OPTS_FEATURES_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.features) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "inode")) {
      optargs_s.bitmask |= GUESTFS_MKFS_OPTS_INODE_BITMASK;
      if (decode_int (buff, idx, &optargs_s.inode) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "sectorsize")) {
      optargs_s.bitmask |= GUESTFS_MKFS_OPTS_SECTORSIZE_BITMASK;
      if (decode_int (buff, idx, &optargs_s.sectorsize) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "label")) {
      optargs_s.bitmask |= GUESTFS_MKFS_OPTS_LABEL_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.label) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "mkfs", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_mkfs_opts_argv (g, fstype, device, optargs);
  if ((optargs_s.bitmask & GUESTFS_MKFS_OPTS_FEATURES_BITMASK))
    free ((char *) optargs_s.features);
  if ((optargs_s.bitmask & GUESTFS_MKFS_OPTS_LABEL_BITMASK))
    free ((char *) optargs_s.label);
  if (r == -1)
    return make_error (retbuff, "mkfs");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mkfs_b (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *fstype;
  if (decode_string (buff, idx, &fstype) != 0) return -1;
  int blocksize;
  if (decode_int (buff, idx, &blocksize) != 0) return -1;
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_mkfs_b (g, fstype, blocksize, device);
  if (r == -1)
    return make_error (retbuff, "mkfs_b");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mkswap_U (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *uuid;
  if (decode_string (buff, idx, &uuid) != 0) return -1;
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_mkswap_U (g, uuid, device);
  if (r == -1)
    return make_error (retbuff, "mkswap_U");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mountpoints (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_mountpoints (g);
  if (r == NULL)
    return make_error (retbuff, "mountpoints");

  if (make_table (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_nr_devices (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_nr_devices (g);
  if (r == -1)
    return make_error (retbuff, "nr_devices");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_ntfsclone_in (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *backupfile;
  if (decode_string (buff, idx, &backupfile) != 0) return -1;
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_ntfsclone_in (g, backupfile, device);
  if (r == -1)
    return make_error (retbuff, "ntfsclone_in");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_parse_environment_list (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE_STRING_LIST char **environment;
  if (decode_string_list (buff, idx, &environment) != 0) return -1;
  int r;

  r = guestfs_parse_environment_list (g, environment);
  if (r == -1)
    return make_error (retbuff, "parse_environment_list");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_get_bootable (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int partnum;
  if (decode_int (buff, idx, &partnum) != 0) return -1;
  int r;

  r = guestfs_part_get_bootable (g, device, partnum);
  if (r == -1)
    return make_error (retbuff, "part_get_bootable");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_part_get_gpt_attributes (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int partnum;
  if (decode_int (buff, idx, &partnum) != 0) return -1;
  int64_t r;

  r = guestfs_part_get_gpt_attributes (g, device, partnum);
  if (r == -1)
    return make_error (retbuff, "part_get_gpt_attributes");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_part_set_gpt_type (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int partnum;
  if (decode_int (buff, idx, &partnum) != 0) return -1;
  CLEANUP_FREE char *guid;
  if (decode_string (buff, idx, &guid) != 0) return -1;
  int r;

  r = guestfs_part_set_gpt_type (g, device, partnum, guid);
  if (r == -1)
    return make_error (retbuff, "part_set_gpt_type");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_set_name (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int partnum;
  if (decode_int (buff, idx, &partnum) != 0) return -1;
  CLEANUP_FREE char *name;
  if (decode_string (buff, idx, &name) != 0) return -1;
  int r;

  r = guestfs_part_set_name (g, device, partnum, name);
  if (r == -1)
    return make_error (retbuff, "part_set_name");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_pvremove (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_pvremove (g, device);
  if (r == -1)
    return make_error (retbuff, "pvremove");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_scrub_freespace (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *dir;
  if (decode_string (buff, idx, &dir) != 0) return -1;
  int r;

  r = guestfs_scrub_freespace (g, dir);
  if (r == -1)
    return make_error (retbuff, "scrub_freespace");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_attach_method (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *backend;
  if (decode_string (buff, idx, &backend) != 0) return -1;
  int r;

  r = guestfs_set_attach_method (g, backend);
  if (r == -1)
    return make_error (retbuff, "set_attach_method");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_network (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int network;
  if (decode_bool (buff, idx, &network) != 0) return -1;
  int r;

  r = guestfs_set_network (g, network);
  if (r == -1)
    return make_error (retbuff, "set_network");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_smp (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int smp;
  if (decode_int (buff, idx, &smp) != 0) return -1;
  int r;

  r = guestfs_set_smp (g, smp);
  if (r == -1)
    return make_error (retbuff, "set_smp");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_tmpdir (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *tmpdir;
  char tmpdir_opt[MAXATOMLEN];
  if (ei_decode_atom(buff, idx, tmpdir_opt) == 0) {
    if (atom_equals (tmpdir_opt, "undefined"))
      tmpdir = NULL;
    else
      tmpdir = tmpdir_opt;
  } else {
    if (decode_string (buff, idx, &tmpdir) != 0) return -1;
  }
  int r;

  r = guestfs_set_tmpdir (g, tmpdir);
  if (r == -1)
    return make_error (retbuff, "set_tmpdir");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_trace (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int trace;
  if (decode_bool (buff, idx, &trace) != 0) return -1;
  int r;

  r = guestfs_set_trace (g, trace);
  if (r == -1)
    return make_error (retbuff, "set_trace");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_uuid_random (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_set_uuid_random (g, device);
  if (r == -1)
    return make_error (retbuff, "set_uuid_random");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_sfdisk (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int cyls;
  if (decode_int (buff, idx, &cyls) != 0) return -1;
  int heads;
  if (decode_int (buff, idx, &heads) != 0) return -1;
  int sectors;
  if (decode_int (buff, idx, &sectors) != 0) return -1;
  CLEANUP_FREE_STRING_LIST char **lines;
  if (decode_string_list (buff, idx, &lines) != 0) return -1;
  int r;

  r = guestfs_sfdisk (g, device, cyls, heads, sectors, lines);
  if (r == -1)
    return make_error (retbuff, "sfdisk");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_sfdiskM (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE_STRING_LIST char **lines;
  if (decode_string_list (buff, idx, &lines) != 0) return -1;
  int r;

  r = guestfs_sfdiskM (g, device, lines);
  if (r == -1)
    return make_error (retbuff, "sfdiskM");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_sfdisk_N (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int partnum;
  if (decode_int (buff, idx, &partnum) != 0) return -1;
  int cyls;
  if (decode_int (buff, idx, &cyls) != 0) return -1;
  int heads;
  if (decode_int (buff, idx, &heads) != 0) return -1;
  int sectors;
  if (decode_int (buff, idx, &sectors) != 0) return -1;
  CLEANUP_FREE char *line;
  if (decode_string (buff, idx, &line) != 0) return -1;
  int r;

  r = guestfs_sfdisk_N (g, device, partnum, cyls, heads, sectors, line);
  if (r == -1)
    return make_error (retbuff, "sfdisk_N");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_stat (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  struct guestfs_stat *r;

  r = guestfs_stat (g, path);
  if (r == NULL)
    return make_error (retbuff, "stat");

  if (make_stat (retbuff, r) != 0) return -1;
  guestfs_free_stat (r);
  return 0;
}

int
run_swapoff_device (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_swapoff_device (g, device);
  if (r == -1)
    return make_error (retbuff, "swapoff_device");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_swapon_device (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_swapon_device (g, device);
  if (r == -1)
    return make_error (retbuff, "swapon_device");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_swapon_uuid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *uuid;
  if (decode_string (buff, idx, &uuid) != 0) return -1;
  int r;

  r = guestfs_swapon_uuid (g, uuid);
  if (r == -1)
    return make_error (retbuff, "swapon_uuid");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_tgz_in (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *tarball;
  if (decode_string (buff, idx, &tarball) != 0) return -1;
  CLEANUP_FREE char *directory;
  if (decode_string (buff, idx, &directory) != 0) return -1;
  int r;

  r = guestfs_tgz_in (g, tarball, directory);
  if (r == -1)
    return make_error (retbuff, "tgz_in");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_truncate_size (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int64_t size;
  if (decode_int64 (buff, idx, &size) != 0) return -1;
  int r;

  r = guestfs_truncate_size (g, path, size);
  if (r == -1)
    return make_error (retbuff, "truncate_size");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_txz_in (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *tarball;
  if (decode_string (buff, idx, &tarball) != 0) return -1;
  CLEANUP_FREE char *directory;
  if (decode_string (buff, idx, &directory) != 0) return -1;
  int r;

  r = guestfs_txz_in (g, tarball, directory);
  if (r == -1)
    return make_error (retbuff, "txz_in");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_user_cancel (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_user_cancel (g);
  if (r == -1)
    return make_error (retbuff, "user_cancel");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_vgchange_uuid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *vg;
  if (decode_string (buff, idx, &vg) != 0) return -1;
  int r;

  r = guestfs_vgchange_uuid (g, vg);
  if (r == -1)
    return make_error (retbuff, "vgchange_uuid");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_vglvuuids (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *vgname;
  if (decode_string (buff, idx, &vgname) != 0) return -1;
  char **r;

  r = guestfs_vglvuuids (g, vgname);
  if (r == NULL)
    return make_error (retbuff, "vglvuuids");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_vgremove (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *vgname;
  if (decode_string (buff, idx, &vgname) != 0) return -1;
  int r;

  r = guestfs_vgremove (g, vgname);
  if (r == -1)
    return make_error (retbuff, "vgremove");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_wc_l (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_wc_l (g, path);
  if (r == -1)
    return make_error (retbuff, "wc_l");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_xfs_growfs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;

  struct guestfs_xfs_growfs_argv optargs_s = { .bitmask = 0 };
  struct guestfs_xfs_growfs_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "datasec")) {
      optargs_s.bitmask |= GUESTFS_XFS_GROWFS_DATASEC_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.datasec) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "logsec")) {
      optargs_s.bitmask |= GUESTFS_XFS_GROWFS_LOGSEC_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.logsec) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "rtsec")) {
      optargs_s.bitmask |= GUESTFS_XFS_GROWFS_RTSEC_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.rtsec) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "datasize")) {
      optargs_s.bitmask |= GUESTFS_XFS_GROWFS_DATASIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.datasize) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "logsize")) {
      optargs_s.bitmask |= GUESTFS_XFS_GROWFS_LOGSIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.logsize) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "rtsize")) {
      optargs_s.bitmask |= GUESTFS_XFS_GROWFS_RTSIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.rtsize) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "rtextsize")) {
      optargs_s.bitmask |= GUESTFS_XFS_GROWFS_RTEXTSIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.rtextsize) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "maxpct")) {
      optargs_s.bitmask |= GUESTFS_XFS_GROWFS_MAXPCT_BITMASK;
      if (decode_int (buff, idx, &optargs_s.maxpct) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "xfs_growfs", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_xfs_growfs_argv (g, path, optargs);
  if (r == -1)
    return make_error (retbuff, "xfs_growfs");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_xfs_info (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *pathordevice;
  if (decode_string (buff, idx, &pathordevice) != 0) return -1;
  struct guestfs_xfsinfo *r;

  r = guestfs_xfs_info (g, pathordevice);
  if (r == NULL)
    return make_error (retbuff, "xfs_info");

  if (make_xfsinfo (retbuff, r) != 0) return -1;
  guestfs_free_xfsinfo (r);
  return 0;
}

int
run_xfs_repair (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;

  struct guestfs_xfs_repair_argv optargs_s = { .bitmask = 0 };
  struct guestfs_xfs_repair_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "forcelogzero")) {
      optargs_s.bitmask |= GUESTFS_XFS_REPAIR_FORCELOGZERO_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.forcelogzero) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "nomodify")) {
      optargs_s.bitmask |= GUESTFS_XFS_REPAIR_NOMODIFY_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.nomodify) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "noprefetch")) {
      optargs_s.bitmask |= GUESTFS_XFS_REPAIR_NOPREFETCH_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.noprefetch) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "forcegeometry")) {
      optargs_s.bitmask |= GUESTFS_XFS_REPAIR_FORCEGEOMETRY_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.forcegeometry) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "maxmem")) {
      optargs_s.bitmask |= GUESTFS_XFS_REPAIR_MAXMEM_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.maxmem) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "ihashsize")) {
      optargs_s.bitmask |= GUESTFS_XFS_REPAIR_IHASHSIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.ihashsize) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "bhashsize")) {
      optargs_s.bitmask |= GUESTFS_XFS_REPAIR_BHASHSIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.bhashsize) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "agstride")) {
      optargs_s.bitmask |= GUESTFS_XFS_REPAIR_AGSTRIDE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.agstride) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "logdev")) {
      optargs_s.bitmask |= GUESTFS_XFS_REPAIR_LOGDEV_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.logdev) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "rtdev")) {
      optargs_s.bitmask |= GUESTFS_XFS_REPAIR_RTDEV_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.rtdev) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "xfs_repair", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_xfs_repair_argv (g, device, optargs);
  if ((optargs_s.bitmask & GUESTFS_XFS_REPAIR_LOGDEV_BITMASK))
    free ((char *) optargs_s.logdev);
  if ((optargs_s.bitmask & GUESTFS_XFS_REPAIR_RTDEV_BITMASK))
    free ((char *) optargs_s.rtdev);
  if (r == -1)
    return make_error (retbuff, "xfs_repair");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_zero_device (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_zero_device (g, device);
  if (r == -1)
    return make_error (retbuff, "zero_device");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_zero_free_space (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *directory;
  if (decode_string (buff, idx, &directory) != 0) return -1;
  int r;

  r = guestfs_zero_free_space (g, directory);
  if (r == -1)
    return make_error (retbuff, "zero_free_space");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}
