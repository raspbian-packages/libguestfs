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
run_aug_clear (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *augpath;
  if (decode_string (buff, idx, &augpath) != 0) return -1;
  int r;

  r = guestfs_aug_clear (g, augpath);
  if (r == -1)
    return make_error (retbuff, "aug_clear");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_aug_defvar (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *name;
  if (decode_string (buff, idx, &name) != 0) return -1;
  CLEANUP_FREE char *expr;
  char expr_opt[MAXATOMLEN];
  if (ei_decode_atom(buff, idx, expr_opt) == 0) {
    if (atom_equals (expr_opt, "undefined"))
      expr = NULL;
    else
      expr = expr_opt;
  } else {
    if (decode_string (buff, idx, &expr) != 0) return -1;
  }
  int r;

  r = guestfs_aug_defvar (g, name, expr);
  if (r == -1)
    return make_error (retbuff, "aug_defvar");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_base64_in (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *base64file;
  if (decode_string (buff, idx, &base64file) != 0) return -1;
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  int r;

  r = guestfs_base64_in (g, base64file, filename);
  if (r == -1)
    return make_error (retbuff, "base64_in");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_base64_out (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  CLEANUP_FREE char *base64file;
  if (decode_string (buff, idx, &base64file) != 0) return -1;
  int r;

  r = guestfs_base64_out (g, filename, base64file);
  if (r == -1)
    return make_error (retbuff, "base64_out");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_balance_resume (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_btrfs_balance_resume (g, path);
  if (r == -1)
    return make_error (retbuff, "btrfs_balance_resume");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_fsck (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;

  struct guestfs_btrfs_fsck_argv optargs_s = { .bitmask = 0 };
  struct guestfs_btrfs_fsck_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "superblock")) {
      optargs_s.bitmask |= GUESTFS_BTRFS_FSCK_SUPERBLOCK_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.superblock) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "repair")) {
      optargs_s.bitmask |= GUESTFS_BTRFS_FSCK_REPAIR_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.repair) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "btrfs_fsck", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_btrfs_fsck_argv (g, device, optargs);
  if (r == -1)
    return make_error (retbuff, "btrfs_fsck");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_qgroup_show (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  struct guestfs_btrfsqgroup_list *r;

  r = guestfs_btrfs_qgroup_show (g, path);
  if (r == NULL)
    return make_error (retbuff, "btrfs_qgroup_show");

  if (make_btrfsqgroup_list (retbuff, r) != 0) return -1;
  guestfs_free_btrfsqgroup_list (r);
  return 0;
}

int
run_btrfs_rescue_chunk_recover (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_btrfs_rescue_chunk_recover (g, device);
  if (r == -1)
    return make_error (retbuff, "btrfs_rescue_chunk_recover");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_scrub_resume (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_btrfs_scrub_resume (g, path);
  if (r == -1)
    return make_error (retbuff, "btrfs_scrub_resume");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_cat (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char *r;

  r = guestfs_cat (g, path);
  if (r == NULL)
    return make_error (retbuff, "cat");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_checksum_device (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *csumtype;
  if (decode_string (buff, idx, &csumtype) != 0) return -1;
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  char *r;

  r = guestfs_checksum_device (g, csumtype, device);
  if (r == NULL)
    return make_error (retbuff, "checksum_device");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_clear_backend_setting (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *name;
  if (decode_string (buff, idx, &name) != 0) return -1;
  int r;

  r = guestfs_clear_backend_setting (g, name);
  if (r == -1)
    return make_error (retbuff, "clear_backend_setting");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_config (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *hvparam;
  if (decode_string (buff, idx, &hvparam) != 0) return -1;
  CLEANUP_FREE char *hvvalue;
  char hvvalue_opt[MAXATOMLEN];
  if (ei_decode_atom(buff, idx, hvvalue_opt) == 0) {
    if (atom_equals (hvvalue_opt, "undefined"))
      hvvalue = NULL;
    else
      hvvalue = hvvalue_opt;
  } else {
    if (decode_string (buff, idx, &hvvalue) != 0) return -1;
  }
  int r;

  r = guestfs_config (g, hvparam, hvvalue);
  if (r == -1)
    return make_error (retbuff, "config");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_copy_attributes (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *src;
  if (decode_string (buff, idx, &src) != 0) return -1;
  CLEANUP_FREE char *dest;
  if (decode_string (buff, idx, &dest) != 0) return -1;

  struct guestfs_copy_attributes_argv optargs_s = { .bitmask = 0 };
  struct guestfs_copy_attributes_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "all")) {
      optargs_s.bitmask |= GUESTFS_COPY_ATTRIBUTES_ALL_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.all) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "mode")) {
      optargs_s.bitmask |= GUESTFS_COPY_ATTRIBUTES_MODE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.mode) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "xattributes")) {
      optargs_s.bitmask |= GUESTFS_COPY_ATTRIBUTES_XATTRIBUTES_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.xattributes) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "ownership")) {
      optargs_s.bitmask |= GUESTFS_COPY_ATTRIBUTES_OWNERSHIP_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.ownership) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "copy_attributes", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_copy_attributes_argv (g, src, dest, optargs);
  if (r == -1)
    return make_error (retbuff, "copy_attributes");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_copy_device_to_device (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *src;
  if (decode_string (buff, idx, &src) != 0) return -1;
  CLEANUP_FREE char *dest;
  if (decode_string (buff, idx, &dest) != 0) return -1;

  struct guestfs_copy_device_to_device_argv optargs_s = { .bitmask = 0 };
  struct guestfs_copy_device_to_device_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "srcoffset")) {
      optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_DEVICE_SRCOFFSET_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.srcoffset) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "destoffset")) {
      optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_DEVICE_DESTOFFSET_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.destoffset) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "size")) {
      optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_DEVICE_SIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.size) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "sparse")) {
      optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_DEVICE_SPARSE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.sparse) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "append")) {
      optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_DEVICE_APPEND_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.append) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "copy_device_to_device", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_copy_device_to_device_argv (g, src, dest, optargs);
  if (r == -1)
    return make_error (retbuff, "copy_device_to_device");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_dd (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *src;
  if (decode_string (buff, idx, &src) != 0) return -1;
  CLEANUP_FREE char *dest;
  if (decode_string (buff, idx, &dest) != 0) return -1;
  int r;

  r = guestfs_dd (g, src, dest);
  if (r == -1)
    return make_error (retbuff, "dd");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_debug_drives (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_debug_drives (g);
  if (r == NULL)
    return make_error (retbuff, "debug_drives");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_device_index (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_device_index (g, device);
  if (r == -1)
    return make_error (retbuff, "device_index");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_download_inode (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int64_t inode;
  if (decode_int64 (buff, idx, &inode) != 0) return -1;
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  int r;

  r = guestfs_download_inode (g, device, inode, filename);
  if (r == -1)
    return make_error (retbuff, "download_inode");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_exists (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_exists (g, path);
  if (r == -1)
    return make_error (retbuff, "exists");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_f2fs_expand (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_f2fs_expand (g, device);
  if (r == -1)
    return make_error (retbuff, "f2fs_expand");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_filesystem_walk (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  struct guestfs_tsk_dirent_list *r;

  r = guestfs_filesystem_walk (g, device);
  if (r == NULL)
    return make_error (retbuff, "filesystem_walk");

  if (make_tsk_dirent_list (retbuff, r) != 0) return -1;
  guestfs_free_tsk_dirent_list (r);
  return 0;
}

int
run_fill_dir (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *dir;
  if (decode_string (buff, idx, &dir) != 0) return -1;
  int nr;
  if (decode_int (buff, idx, &nr) != 0) return -1;
  int r;

  r = guestfs_fill_dir (g, dir, nr);
  if (r == -1)
    return make_error (retbuff, "fill_dir");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_findfs_label (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *label;
  if (decode_string (buff, idx, &label) != 0) return -1;
  char *r;

  r = guestfs_findfs_label (g, label);
  if (r == NULL)
    return make_error (retbuff, "findfs_label");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_get_identifier (ei_x_buff *retbuff, const char *buff, int *idx)
{
  const char *r;

  r = guestfs_get_identifier (g);
  if (r == NULL)
    return make_error (retbuff, "get_identifier");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  return 0;
}

int
run_get_libvirt_requested_credential_prompt (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int index;
  if (decode_int (buff, idx, &index) != 0) return -1;
  char *r;

  r = guestfs_get_libvirt_requested_credential_prompt (g, index);
  if (r == NULL)
    return make_error (retbuff, "get_libvirt_requested_credential_prompt");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_get_network (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_get_network (g);
  if (r == -1)
    return make_error (retbuff, "get_network");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_get_qemu (ei_x_buff *retbuff, const char *buff, int *idx)
{
  const char *r;

  r = guestfs_get_qemu (g);
  if (r == NULL)
    return make_error (retbuff, "get_qemu");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  return 0;
}

int
run_get_state (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_get_state (g);
  if (r == -1)
    return make_error (retbuff, "get_state");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_get_umask (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_get_umask (g);
  if (r == -1)
    return make_error (retbuff, "get_umask");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_get_verbose (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_get_verbose (g);
  if (r == -1)
    return make_error (retbuff, "get_verbose");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_getxattrs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  struct guestfs_xattr_list *r;

  r = guestfs_getxattrs (g, path);
  if (r == NULL)
    return make_error (retbuff, "getxattrs");

  if (make_xattr_list (retbuff, r) != 0) return -1;
  guestfs_free_xattr_list (r);
  return 0;
}

int
run_grep (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *regex;
  if (decode_string (buff, idx, &regex) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;

  struct guestfs_grep_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_grep_opts_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "extended")) {
      optargs_s.bitmask |= GUESTFS_GREP_OPTS_EXTENDED_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.extended) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "fixed")) {
      optargs_s.bitmask |= GUESTFS_GREP_OPTS_FIXED_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.fixed) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "insensitive")) {
      optargs_s.bitmask |= GUESTFS_GREP_OPTS_INSENSITIVE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.insensitive) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "compressed")) {
      optargs_s.bitmask |= GUESTFS_GREP_OPTS_COMPRESSED_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.compressed) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "grep", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  char **r;

  r = guestfs_grep_opts_argv (g, regex, path, optargs);
  if (r == NULL)
    return make_error (retbuff, "grep");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_hivex_node_parent (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t nodeh;
  if (decode_int64 (buff, idx, &nodeh) != 0) return -1;
  int64_t r;

  r = guestfs_hivex_node_parent (g, nodeh);
  if (r == -1)
    return make_error (retbuff, "hivex_node_parent");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_hivex_root (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t r;

  r = guestfs_hivex_root (g);
  if (r == -1)
    return make_error (retbuff, "hivex_root");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_hivex_value_string (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t valueh;
  if (decode_int64 (buff, idx, &valueh) != 0) return -1;
  char *r;

  r = guestfs_hivex_value_string (g, valueh);
  if (r == NULL)
    return make_error (retbuff, "hivex_value_string");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_hivex_value_value (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t valueh;
  if (decode_int64 (buff, idx, &valueh) != 0) return -1;
  char *r;
  size_t size;

  r = guestfs_hivex_value_value (g, valueh, &size);
  if (r == NULL)
    return make_error (retbuff, "hivex_value_value");

  if (ei_x_encode_binary (retbuff, r, size) != 0) return -1;
  free (r);
  return 0;
}

int
run_initrd_list (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_initrd_list (g, path);
  if (r == NULL)
    return make_error (retbuff, "initrd_list");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_inotify_files (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_inotify_files (g);
  if (r == NULL)
    return make_error (retbuff, "inotify_files");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_inotify_rm_watch (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int wd;
  if (decode_int (buff, idx, &wd) != 0) return -1;
  int r;

  r = guestfs_inotify_rm_watch (g, wd);
  if (r == -1)
    return make_error (retbuff, "inotify_rm_watch");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_inspect_get_icon (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;

  struct guestfs_inspect_get_icon_argv optargs_s = { .bitmask = 0 };
  struct guestfs_inspect_get_icon_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "favicon")) {
      optargs_s.bitmask |= GUESTFS_INSPECT_GET_ICON_FAVICON_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.favicon) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "highquality")) {
      optargs_s.bitmask |= GUESTFS_INSPECT_GET_ICON_HIGHQUALITY_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.highquality) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "inspect_get_icon", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  char *r;
  size_t size;

  r = guestfs_inspect_get_icon_argv (g, root, &size, optargs);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_icon");

  if (ei_x_encode_binary (retbuff, r, size) != 0) return -1;
  free (r);
  return 0;
}

int
run_inspect_get_windows_system_hive (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char *r;

  r = guestfs_inspect_get_windows_system_hive (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_windows_system_hive");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_inspect_is_netinst (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  int r;

  r = guestfs_inspect_is_netinst (g, root);
  if (r == -1)
    return make_error (retbuff, "inspect_is_netinst");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_inspect_list_applications2 (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  struct guestfs_application2_list *r;

  r = guestfs_inspect_list_applications2 (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_list_applications2");

  if (make_application2_list (retbuff, r) != 0) return -1;
  guestfs_free_application2_list (r);
  return 0;
}

int
run_internal_test_rbufferouterr (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char *r;
  size_t size;

  r = guestfs_internal_test_rbufferouterr (g, &size);
  if (r == NULL)
    return make_error (retbuff, "internal_test_rbufferouterr");

  if (ei_x_encode_binary (retbuff, r, size) != 0) return -1;
  free (r);
  return 0;
}

int
run_internal_test_rconstoptstring (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *val;
  if (decode_string (buff, idx, &val) != 0) return -1;
  const char *r;

  r = guestfs_internal_test_rconstoptstring (g, val);

  if (r) {
    if (ei_x_encode_string (retbuff, r) != 0) return -1;
  } else {
    if (ei_x_encode_atom (retbuff, "undefined") != 0) return -1;
  }
  return 0;
}

int
run_internal_test_rint64 (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *val;
  if (decode_string (buff, idx, &val) != 0) return -1;
  int64_t r;

  r = guestfs_internal_test_rint64 (g, val);
  if (r == -1)
    return make_error (retbuff, "internal_test_rint64");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_internal_test_rstringerr (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char *r;

  r = guestfs_internal_test_rstringerr (g);
  if (r == NULL)
    return make_error (retbuff, "internal_test_rstringerr");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_internal_test_rstructlist (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *val;
  if (decode_string (buff, idx, &val) != 0) return -1;
  struct guestfs_lvm_pv_list *r;

  r = guestfs_internal_test_rstructlist (g, val);
  if (r == NULL)
    return make_error (retbuff, "internal_test_rstructlist");

  if (make_lvm_pv_list (retbuff, r) != 0) return -1;
  guestfs_free_lvm_pv_list (r);
  return 0;
}

int
run_internal_test_rstructlisterr (ei_x_buff *retbuff, const char *buff, int *idx)
{
  struct guestfs_lvm_pv_list *r;

  r = guestfs_internal_test_rstructlisterr (g);
  if (r == NULL)
    return make_error (retbuff, "internal_test_rstructlisterr");

  if (make_lvm_pv_list (retbuff, r) != 0) return -1;
  guestfs_free_lvm_pv_list (r);
  return 0;
}

int
run_is_symlink (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_is_symlink (g, path);
  if (r == -1)
    return make_error (retbuff, "is_symlink");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_is_zero (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_is_zero (g, path);
  if (r == -1)
    return make_error (retbuff, "is_zero");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_lchown (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int owner;
  if (decode_int (buff, idx, &owner) != 0) return -1;
  int group;
  if (decode_int (buff, idx, &group) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_lchown (g, owner, group, path);
  if (r == -1)
    return make_error (retbuff, "lchown");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_ldmtool_create_all (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_ldmtool_create_all (g);
  if (r == -1)
    return make_error (retbuff, "ldmtool_create_all");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_ldmtool_diskgroup_disks (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *diskgroup;
  if (decode_string (buff, idx, &diskgroup) != 0) return -1;
  char **r;

  r = guestfs_ldmtool_diskgroup_disks (g, diskgroup);
  if (r == NULL)
    return make_error (retbuff, "ldmtool_diskgroup_disks");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_list_partitions (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_list_partitions (g);
  if (r == NULL)
    return make_error (retbuff, "list_partitions");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_llz (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *directory;
  if (decode_string (buff, idx, &directory) != 0) return -1;
  char *r;

  r = guestfs_llz (g, directory);
  if (r == NULL)
    return make_error (retbuff, "llz");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_lstat (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  struct guestfs_stat *r;

  r = guestfs_lstat (g, path);
  if (r == NULL)
    return make_error (retbuff, "lstat");

  if (make_stat (retbuff, r) != 0) return -1;
  guestfs_free_stat (r);
  return 0;
}

int
run_lstatlist (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  CLEANUP_FREE_STRING_LIST char **names;
  if (decode_string_list (buff, idx, &names) != 0) return -1;
  struct guestfs_stat_list *r;

  r = guestfs_lstatlist (g, path, names);
  if (r == NULL)
    return make_error (retbuff, "lstatlist");

  if (make_stat_list (retbuff, r) != 0) return -1;
  guestfs_free_stat_list (r);
  return 0;
}

int
run_luks_open (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *key;
  if (decode_string (buff, idx, &key) != 0) return -1;
  CLEANUP_FREE char *mapname;
  if (decode_string (buff, idx, &mapname) != 0) return -1;
  int r;

  r = guestfs_luks_open (g, device, key, mapname);
  if (r == -1)
    return make_error (retbuff, "luks_open");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_luks_open_ro (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *key;
  if (decode_string (buff, idx, &key) != 0) return -1;
  CLEANUP_FREE char *mapname;
  if (decode_string (buff, idx, &mapname) != 0) return -1;
  int r;

  r = guestfs_luks_open_ro (g, device, key, mapname);
  if (r == -1)
    return make_error (retbuff, "luks_open_ro");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_lvm_remove_all (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_lvm_remove_all (g);
  if (r == -1)
    return make_error (retbuff, "lvm_remove_all");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_lvresize_free (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *lv;
  if (decode_string (buff, idx, &lv) != 0) return -1;
  int percent;
  if (decode_int (buff, idx, &percent) != 0) return -1;
  int r;

  r = guestfs_lvresize_free (g, lv, percent);
  if (r == -1)
    return make_error (retbuff, "lvresize_free");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_md_create (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *name;
  if (decode_string (buff, idx, &name) != 0) return -1;
  CLEANUP_FREE_STRING_LIST char **devices;
  if (decode_string_list (buff, idx, &devices) != 0) return -1;

  struct guestfs_md_create_argv optargs_s = { .bitmask = 0 };
  struct guestfs_md_create_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "missingbitmap")) {
      optargs_s.bitmask |= GUESTFS_MD_CREATE_MISSINGBITMAP_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.missingbitmap) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "nrdevices")) {
      optargs_s.bitmask |= GUESTFS_MD_CREATE_NRDEVICES_BITMASK;
      if (decode_int (buff, idx, &optargs_s.nrdevices) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "spare")) {
      optargs_s.bitmask |= GUESTFS_MD_CREATE_SPARE_BITMASK;
      if (decode_int (buff, idx, &optargs_s.spare) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "chunk")) {
      optargs_s.bitmask |= GUESTFS_MD_CREATE_CHUNK_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.chunk) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "level")) {
      optargs_s.bitmask |= GUESTFS_MD_CREATE_LEVEL_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.level) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "md_create", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_md_create_argv (g, name, devices, optargs);
  if ((optargs_s.bitmask & GUESTFS_MD_CREATE_LEVEL_BITMASK))
    free ((char *) optargs_s.level);
  if (r == -1)
    return make_error (retbuff, "md_create");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mkdtemp (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *tmpl;
  if (decode_string (buff, idx, &tmpl) != 0) return -1;
  char *r;

  r = guestfs_mkdtemp (g, tmpl);
  if (r == NULL)
    return make_error (retbuff, "mkdtemp");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_mknod (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int mode;
  if (decode_int (buff, idx, &mode) != 0) return -1;
  int devmajor;
  if (decode_int (buff, idx, &devmajor) != 0) return -1;
  int devminor;
  if (decode_int (buff, idx, &devminor) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_mknod (g, mode, devmajor, devminor, path);
  if (r == -1)
    return make_error (retbuff, "mknod");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mount (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *mountable;
  if (decode_string (buff, idx, &mountable) != 0) return -1;
  CLEANUP_FREE char *mountpoint;
  if (decode_string (buff, idx, &mountpoint) != 0) return -1;
  int r;

  r = guestfs_mount (g, mountable, mountpoint);
  if (r == -1)
    return make_error (retbuff, "mount");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mount_local_run (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_mount_local_run (g);
  if (r == -1)
    return make_error (retbuff, "mount_local_run");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mount_ro (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *mountable;
  if (decode_string (buff, idx, &mountable) != 0) return -1;
  CLEANUP_FREE char *mountpoint;
  if (decode_string (buff, idx, &mountpoint) != 0) return -1;
  int r;

  r = guestfs_mount_ro (g, mountable, mountpoint);
  if (r == -1)
    return make_error (retbuff, "mount_ro");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mountable_subvolume (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *mountable;
  if (decode_string (buff, idx, &mountable) != 0) return -1;
  char *r;

  r = guestfs_mountable_subvolume (g, mountable);
  if (r == NULL)
    return make_error (retbuff, "mountable_subvolume");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_mounts (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_mounts (g);
  if (r == NULL)
    return make_error (retbuff, "mounts");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_ntfs_3g_probe (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int rw;
  if (decode_bool (buff, idx, &rw) != 0) return -1;
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_ntfs_3g_probe (g, rw, device);
  if (r == -1)
    return make_error (retbuff, "ntfs_3g_probe");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_ntfsclone_out (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *backupfile;
  if (decode_string (buff, idx, &backupfile) != 0) return -1;

  struct guestfs_ntfsclone_out_argv optargs_s = { .bitmask = 0 };
  struct guestfs_ntfsclone_out_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "metadataonly")) {
      optargs_s.bitmask |= GUESTFS_NTFSCLONE_OUT_METADATAONLY_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.metadataonly) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "rescue")) {
      optargs_s.bitmask |= GUESTFS_NTFSCLONE_OUT_RESCUE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.rescue) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "ignorefscheck")) {
      optargs_s.bitmask |= GUESTFS_NTFSCLONE_OUT_IGNOREFSCHECK_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.ignorefscheck) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "preservetimestamps")) {
      optargs_s.bitmask |= GUESTFS_NTFSCLONE_OUT_PRESERVETIMESTAMPS_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.preservetimestamps) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "force")) {
      optargs_s.bitmask |= GUESTFS_NTFSCLONE_OUT_FORCE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.force) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "ntfsclone_out", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_ntfsclone_out_argv (g, device, backupfile, optargs);
  if (r == -1)
    return make_error (retbuff, "ntfsclone_out");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_resize (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int partnum;
  if (decode_int (buff, idx, &partnum) != 0) return -1;
  int64_t endsect;
  if (decode_int64 (buff, idx, &endsect) != 0) return -1;
  int r;

  r = guestfs_part_resize (g, device, partnum, endsect);
  if (r == -1)
    return make_error (retbuff, "part_resize");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_set_disk_guid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *guid;
  if (decode_string (buff, idx, &guid) != 0) return -1;
  int r;

  r = guestfs_part_set_disk_guid (g, device, guid);
  if (r == -1)
    return make_error (retbuff, "part_set_disk_guid");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_set_disk_guid_random (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_part_set_disk_guid_random (g, device);
  if (r == -1)
    return make_error (retbuff, "part_set_disk_guid_random");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_pread (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int count;
  if (decode_int (buff, idx, &count) != 0) return -1;
  int64_t offset;
  if (decode_int64 (buff, idx, &offset) != 0) return -1;
  char *r;
  size_t size;

  r = guestfs_pread (g, path, count, offset, &size);
  if (r == NULL)
    return make_error (retbuff, "pread");

  if (ei_x_encode_binary (retbuff, r, size) != 0) return -1;
  free (r);
  return 0;
}

int
run_realpath (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char *r;

  r = guestfs_realpath (g, path);
  if (r == NULL)
    return make_error (retbuff, "realpath");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_selinux_relabel (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *specfile;
  if (decode_string (buff, idx, &specfile) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;

  struct guestfs_selinux_relabel_argv optargs_s = { .bitmask = 0 };
  struct guestfs_selinux_relabel_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "force")) {
      optargs_s.bitmask |= GUESTFS_SELINUX_RELABEL_FORCE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.force) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "selinux_relabel", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_selinux_relabel_argv (g, specfile, path, optargs);
  if (r == -1)
    return make_error (retbuff, "selinux_relabel");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_autosync (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int autosync;
  if (decode_bool (buff, idx, &autosync) != 0) return -1;
  int r;

  r = guestfs_set_autosync (g, autosync);
  if (r == -1)
    return make_error (retbuff, "set_autosync");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_backend_setting (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *name;
  if (decode_string (buff, idx, &name) != 0) return -1;
  CLEANUP_FREE char *val;
  if (decode_string (buff, idx, &val) != 0) return -1;
  int r;

  r = guestfs_set_backend_setting (g, name, val);
  if (r == -1)
    return make_error (retbuff, "set_backend_setting");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_identifier (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *identifier;
  if (decode_string (buff, idx, &identifier) != 0) return -1;
  int r;

  r = guestfs_set_identifier (g, identifier);
  if (r == -1)
    return make_error (retbuff, "set_identifier");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_verbose (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int verbose;
  if (decode_bool (buff, idx, &verbose) != 0) return -1;
  int r;

  r = guestfs_set_verbose (g, verbose);
  if (r == -1)
    return make_error (retbuff, "set_verbose");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_swapoff_file (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *file;
  if (decode_string (buff, idx, &file) != 0) return -1;
  int r;

  r = guestfs_swapoff_file (g, file);
  if (r == -1)
    return make_error (retbuff, "swapoff_file");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_syslinux (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;

  struct guestfs_syslinux_argv optargs_s = { .bitmask = 0 };
  struct guestfs_syslinux_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "directory")) {
      optargs_s.bitmask |= GUESTFS_SYSLINUX_DIRECTORY_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.directory) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "syslinux", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_syslinux_argv (g, device, optargs);
  if ((optargs_s.bitmask & GUESTFS_SYSLINUX_DIRECTORY_BITMASK))
    free ((char *) optargs_s.directory);
  if (r == -1)
    return make_error (retbuff, "syslinux");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_tail (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_tail (g, path);
  if (r == NULL)
    return make_error (retbuff, "tail");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_touch (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_touch (g, path);
  if (r == -1)
    return make_error (retbuff, "touch");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_tune2fs_l (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  char **r;

  r = guestfs_tune2fs_l (g, device);
  if (r == NULL)
    return make_error (retbuff, "tune2fs_l");

  if (make_table (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_umount (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *pathordevice;
  if (decode_string (buff, idx, &pathordevice) != 0) return -1;

  struct guestfs_umount_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_umount_opts_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "force")) {
      optargs_s.bitmask |= GUESTFS_UMOUNT_OPTS_FORCE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.force) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "lazyunmount")) {
      optargs_s.bitmask |= GUESTFS_UMOUNT_OPTS_LAZYUNMOUNT_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.lazyunmount) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "umount", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_umount_opts_argv (g, pathordevice, optargs);
  if (r == -1)
    return make_error (retbuff, "umount");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_vg_activate (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int activate;
  if (decode_bool (buff, idx, &activate) != 0) return -1;
  CLEANUP_FREE_STRING_LIST char **volgroups;
  if (decode_string_list (buff, idx, &volgroups) != 0) return -1;
  int r;

  r = guestfs_vg_activate (g, activate, volgroups);
  if (r == -1)
    return make_error (retbuff, "vg_activate");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_vgs_full (ei_x_buff *retbuff, const char *buff, int *idx)
{
  struct guestfs_lvm_vg_list *r;

  r = guestfs_vgs_full (g);
  if (r == NULL)
    return make_error (retbuff, "vgs_full");

  if (make_lvm_vg_list (retbuff, r) != 0) return -1;
  guestfs_free_lvm_vg_list (r);
  return 0;
}

int
run_vgscan (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_vgscan (g);
  if (r == -1)
    return make_error (retbuff, "vgscan");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_xfs_admin (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;

  struct guestfs_xfs_admin_argv optargs_s = { .bitmask = 0 };
  struct guestfs_xfs_admin_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "extunwritten")) {
      optargs_s.bitmask |= GUESTFS_XFS_ADMIN_EXTUNWRITTEN_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.extunwritten) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "imgfile")) {
      optargs_s.bitmask |= GUESTFS_XFS_ADMIN_IMGFILE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.imgfile) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "v2log")) {
      optargs_s.bitmask |= GUESTFS_XFS_ADMIN_V2LOG_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.v2log) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "projid32bit")) {
      optargs_s.bitmask |= GUESTFS_XFS_ADMIN_PROJID32BIT_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.projid32bit) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "lazycounter")) {
      optargs_s.bitmask |= GUESTFS_XFS_ADMIN_LAZYCOUNTER_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.lazycounter) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "label")) {
      optargs_s.bitmask |= GUESTFS_XFS_ADMIN_LABEL_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.label) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "uuid")) {
      optargs_s.bitmask |= GUESTFS_XFS_ADMIN_UUID_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.uuid) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "xfs_admin", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_xfs_admin_argv (g, device, optargs);
  if ((optargs_s.bitmask & GUESTFS_XFS_ADMIN_LABEL_BITMASK))
    free ((char *) optargs_s.label);
  if ((optargs_s.bitmask & GUESTFS_XFS_ADMIN_UUID_BITMASK))
    free ((char *) optargs_s.uuid);
  if (r == -1)
    return make_error (retbuff, "xfs_admin");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_yara_destroy (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_yara_destroy (g);
  if (r == -1)
    return make_error (retbuff, "yara_destroy");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_zegrepi (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *regex;
  if (decode_string (buff, idx, &regex) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_zegrepi (g, regex, path);
  if (r == NULL)
    return make_error (retbuff, "zegrepi");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_zfgrep (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *pattern;
  if (decode_string (buff, idx, &pattern) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_zfgrep (g, pattern, path);
  if (r == NULL)
    return make_error (retbuff, "zfgrep");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_zfile (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *meth;
  if (decode_string (buff, idx, &meth) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char *r;

  r = guestfs_zfile (g, meth, path);
  if (r == NULL)
    return make_error (retbuff, "zfile");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}
