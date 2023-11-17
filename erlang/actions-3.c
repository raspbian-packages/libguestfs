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
run_acl_get_file (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  CLEANUP_FREE char *acltype;
  if (decode_string (buff, idx, &acltype) != 0) return -1;
  char *r;

  r = guestfs_acl_get_file (g, path, acltype);
  if (r == NULL)
    return make_error (retbuff, "acl_get_file");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_aug_close (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_aug_close (g);
  if (r == -1)
    return make_error (retbuff, "aug_close");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_aug_defnode (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *name;
  if (decode_string (buff, idx, &name) != 0) return -1;
  CLEANUP_FREE char *expr;
  if (decode_string (buff, idx, &expr) != 0) return -1;
  CLEANUP_FREE char *val;
  if (decode_string (buff, idx, &val) != 0) return -1;
  struct guestfs_int_bool *r;

  r = guestfs_aug_defnode (g, name, expr, val);
  if (r == NULL)
    return make_error (retbuff, "aug_defnode");

  if (make_int_bool (retbuff, r) != 0) return -1;
  guestfs_free_int_bool (r);
  return 0;
}

int
run_aug_get (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *augpath;
  if (decode_string (buff, idx, &augpath) != 0) return -1;
  char *r;

  r = guestfs_aug_get (g, augpath);
  if (r == NULL)
    return make_error (retbuff, "aug_get");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_aug_save (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_aug_save (g);
  if (r == -1)
    return make_error (retbuff, "aug_save");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_aug_setm (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *base;
  if (decode_string (buff, idx, &base) != 0) return -1;
  CLEANUP_FREE char *sub;
  char sub_opt[MAXATOMLEN];
  if (ei_decode_atom(buff, idx, sub_opt) == 0) {
    if (atom_equals (sub_opt, "undefined"))
      sub = NULL;
    else
      sub = sub_opt;
  } else {
    if (decode_string (buff, idx, &sub) != 0) return -1;
  }
  CLEANUP_FREE char *val;
  if (decode_string (buff, idx, &val) != 0) return -1;
  int r;

  r = guestfs_aug_setm (g, base, sub, val);
  if (r == -1)
    return make_error (retbuff, "aug_setm");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_available (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE_STRING_LIST char **groups;
  if (decode_string_list (buff, idx, &groups) != 0) return -1;
  int r;

  r = guestfs_available (g, groups);
  if (r == -1)
    return make_error (retbuff, "available");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_blkdiscard (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_blkdiscard (g, device);
  if (r == -1)
    return make_error (retbuff, "blkdiscard");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_blockdev_getsz (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int64_t r;

  r = guestfs_blockdev_getsz (g, device);
  if (r == -1)
    return make_error (retbuff, "blockdev_getsz");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_blockdev_setro (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_blockdev_setro (g, device);
  if (r == -1)
    return make_error (retbuff, "blockdev_setro");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_balance_status (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  struct guestfs_btrfsbalance *r;

  r = guestfs_btrfs_balance_status (g, path);
  if (r == NULL)
    return make_error (retbuff, "btrfs_balance_status");

  if (make_btrfsbalance (retbuff, r) != 0) return -1;
  guestfs_free_btrfsbalance (r);
  return 0;
}

int
run_btrfs_device_delete (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE_STRING_LIST char **devices;
  if (decode_string_list (buff, idx, &devices) != 0) return -1;
  CLEANUP_FREE char *fs;
  if (decode_string (buff, idx, &fs) != 0) return -1;
  int r;

  r = guestfs_btrfs_device_delete (g, devices, fs);
  if (r == -1)
    return make_error (retbuff, "btrfs_device_delete");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_filesystem_defragment (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;

  struct guestfs_btrfs_filesystem_defragment_argv optargs_s = { .bitmask = 0 };
  struct guestfs_btrfs_filesystem_defragment_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "flush")) {
      optargs_s.bitmask |= GUESTFS_BTRFS_FILESYSTEM_DEFRAGMENT_FLUSH_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.flush) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "compress")) {
      optargs_s.bitmask |= GUESTFS_BTRFS_FILESYSTEM_DEFRAGMENT_COMPRESS_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.compress) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "btrfs_filesystem_defragment", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_btrfs_filesystem_defragment_argv (g, path, optargs);
  if ((optargs_s.bitmask & GUESTFS_BTRFS_FILESYSTEM_DEFRAGMENT_COMPRESS_BITMASK))
    free ((char *) optargs_s.compress);
  if (r == -1)
    return make_error (retbuff, "btrfs_filesystem_defragment");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_filesystem_resize (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *mountpoint;
  if (decode_string (buff, idx, &mountpoint) != 0) return -1;

  struct guestfs_btrfs_filesystem_resize_argv optargs_s = { .bitmask = 0 };
  struct guestfs_btrfs_filesystem_resize_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "size")) {
      optargs_s.bitmask |= GUESTFS_BTRFS_FILESYSTEM_RESIZE_SIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.size) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "btrfs_filesystem_resize", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_btrfs_filesystem_resize_argv (g, mountpoint, optargs);
  if (r == -1)
    return make_error (retbuff, "btrfs_filesystem_resize");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_filesystem_sync (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *fs;
  if (decode_string (buff, idx, &fs) != 0) return -1;
  int r;

  r = guestfs_btrfs_filesystem_sync (g, fs);
  if (r == -1)
    return make_error (retbuff, "btrfs_filesystem_sync");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_image (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE_STRING_LIST char **source;
  if (decode_string_list (buff, idx, &source) != 0) return -1;
  CLEANUP_FREE char *image;
  if (decode_string (buff, idx, &image) != 0) return -1;

  struct guestfs_btrfs_image_argv optargs_s = { .bitmask = 0 };
  struct guestfs_btrfs_image_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "compresslevel")) {
      optargs_s.bitmask |= GUESTFS_BTRFS_IMAGE_COMPRESSLEVEL_BITMASK;
      if (decode_int (buff, idx, &optargs_s.compresslevel) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "btrfs_image", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_btrfs_image_argv (g, source, image, optargs);
  if (r == -1)
    return make_error (retbuff, "btrfs_image");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_qgroup_destroy (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *qgroupid;
  if (decode_string (buff, idx, &qgroupid) != 0) return -1;
  CLEANUP_FREE char *subvolume;
  if (decode_string (buff, idx, &subvolume) != 0) return -1;
  int r;

  r = guestfs_btrfs_qgroup_destroy (g, qgroupid, subvolume);
  if (r == -1)
    return make_error (retbuff, "btrfs_qgroup_destroy");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_subvolume_delete (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *subvolume;
  if (decode_string (buff, idx, &subvolume) != 0) return -1;
  int r;

  r = guestfs_btrfs_subvolume_delete (g, subvolume);
  if (r == -1)
    return make_error (retbuff, "btrfs_subvolume_delete");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_subvolume_list (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *fs;
  if (decode_string (buff, idx, &fs) != 0) return -1;
  struct guestfs_btrfssubvolume_list *r;

  r = guestfs_btrfs_subvolume_list (g, fs);
  if (r == NULL)
    return make_error (retbuff, "btrfs_subvolume_list");

  if (make_btrfssubvolume_list (retbuff, r) != 0) return -1;
  guestfs_free_btrfssubvolume_list (r);
  return 0;
}

int
run_btrfstune_enable_skinny_metadata_extent_refs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_btrfstune_enable_skinny_metadata_extent_refs (g, device);
  if (r == -1)
    return make_error (retbuff, "btrfstune_enable_skinny_metadata_extent_refs");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_cap_get_file (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char *r;

  r = guestfs_cap_get_file (g, path);
  if (r == NULL)
    return make_error (retbuff, "cap_get_file");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_checksum (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *csumtype;
  if (decode_string (buff, idx, &csumtype) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char *r;

  r = guestfs_checksum (g, csumtype, path);
  if (r == NULL)
    return make_error (retbuff, "checksum");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_chmod (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int mode;
  if (decode_int (buff, idx, &mode) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_chmod (g, mode, path);
  if (r == -1)
    return make_error (retbuff, "chmod");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_copy_out (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *remotepath;
  if (decode_string (buff, idx, &remotepath) != 0) return -1;
  CLEANUP_FREE char *localdir;
  if (decode_string (buff, idx, &localdir) != 0) return -1;
  int r;

  r = guestfs_copy_out (g, remotepath, localdir);
  if (r == -1)
    return make_error (retbuff, "copy_out");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_disk_create (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  CLEANUP_FREE char *format;
  if (decode_string (buff, idx, &format) != 0) return -1;
  int64_t size;
  if (decode_int64 (buff, idx, &size) != 0) return -1;

  struct guestfs_disk_create_argv optargs_s = { .bitmask = 0 };
  struct guestfs_disk_create_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "backingfile")) {
      optargs_s.bitmask |= GUESTFS_DISK_CREATE_BACKINGFILE_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.backingfile) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "backingformat")) {
      optargs_s.bitmask |= GUESTFS_DISK_CREATE_BACKINGFORMAT_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.backingformat) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "preallocation")) {
      optargs_s.bitmask |= GUESTFS_DISK_CREATE_PREALLOCATION_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.preallocation) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "compat")) {
      optargs_s.bitmask |= GUESTFS_DISK_CREATE_COMPAT_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.compat) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "clustersize")) {
      optargs_s.bitmask |= GUESTFS_DISK_CREATE_CLUSTERSIZE_BITMASK;
      if (decode_int (buff, idx, &optargs_s.clustersize) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "disk_create", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_disk_create_argv (g, filename, format, size, optargs);
  if ((optargs_s.bitmask & GUESTFS_DISK_CREATE_BACKINGFILE_BITMASK))
    free ((char *) optargs_s.backingfile);
  if ((optargs_s.bitmask & GUESTFS_DISK_CREATE_BACKINGFORMAT_BITMASK))
    free ((char *) optargs_s.backingformat);
  if ((optargs_s.bitmask & GUESTFS_DISK_CREATE_PREALLOCATION_BITMASK))
    free ((char *) optargs_s.preallocation);
  if ((optargs_s.bitmask & GUESTFS_DISK_CREATE_COMPAT_BITMASK))
    free ((char *) optargs_s.compat);
  if (r == -1)
    return make_error (retbuff, "disk_create");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_dmesg (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char *r;

  r = guestfs_dmesg (g);
  if (r == NULL)
    return make_error (retbuff, "dmesg");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_download_blocks (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int64_t start;
  if (decode_int64 (buff, idx, &start) != 0) return -1;
  int64_t stop;
  if (decode_int64 (buff, idx, &stop) != 0) return -1;
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;

  struct guestfs_download_blocks_argv optargs_s = { .bitmask = 0 };
  struct guestfs_download_blocks_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "unallocated")) {
      optargs_s.bitmask |= GUESTFS_DOWNLOAD_BLOCKS_UNALLOCATED_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.unallocated) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "download_blocks", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_download_blocks_argv (g, device, start, stop, filename, optargs);
  if (r == -1)
    return make_error (retbuff, "download_blocks");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_du (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int64_t r;

  r = guestfs_du (g, path);
  if (r == -1)
    return make_error (retbuff, "du");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_e2fsck_f (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_e2fsck_f (g, device);
  if (r == -1)
    return make_error (retbuff, "e2fsck_f");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_echo_daemon (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE_STRING_LIST char **words;
  if (decode_string_list (buff, idx, &words) != 0) return -1;
  char *r;

  r = guestfs_echo_daemon (g, words);
  if (r == NULL)
    return make_error (retbuff, "echo_daemon");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_equal (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *file1;
  if (decode_string (buff, idx, &file1) != 0) return -1;
  CLEANUP_FREE char *file2;
  if (decode_string (buff, idx, &file2) != 0) return -1;
  int r;

  r = guestfs_equal (g, file1, file2);
  if (r == -1)
    return make_error (retbuff, "equal");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_fgrepi (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *pattern;
  if (decode_string (buff, idx, &pattern) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_fgrepi (g, pattern, path);
  if (r == NULL)
    return make_error (retbuff, "fgrepi");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_get_backend_setting (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *name;
  if (decode_string (buff, idx, &name) != 0) return -1;
  char *r;

  r = guestfs_get_backend_setting (g, name);
  if (r == NULL)
    return make_error (retbuff, "get_backend_setting");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_get_backend_settings (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_get_backend_settings (g);
  if (r == NULL)
    return make_error (retbuff, "get_backend_settings");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_get_e2label (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  char *r;

  r = guestfs_get_e2label (g, device);
  if (r == NULL)
    return make_error (retbuff, "get_e2label");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_get_recovery_proc (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_get_recovery_proc (g);
  if (r == -1)
    return make_error (retbuff, "get_recovery_proc");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_get_tmpdir (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char *r;

  r = guestfs_get_tmpdir (g);
  if (r == NULL)
    return make_error (retbuff, "get_tmpdir");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_getcon (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char *r;

  r = guestfs_getcon (g);
  if (r == NULL)
    return make_error (retbuff, "getcon");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_getxattr (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  CLEANUP_FREE char *name;
  if (decode_string (buff, idx, &name) != 0) return -1;
  char *r;
  size_t size;

  r = guestfs_getxattr (g, path, name, &size);
  if (r == NULL)
    return make_error (retbuff, "getxattr");

  if (ei_x_encode_binary (retbuff, r, size) != 0) return -1;
  free (r);
  return 0;
}

int
run_hivex_close (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_hivex_close (g);
  if (r == -1)
    return make_error (retbuff, "hivex_close");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_hivex_open (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;

  struct guestfs_hivex_open_argv optargs_s = { .bitmask = 0 };
  struct guestfs_hivex_open_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "verbose")) {
      optargs_s.bitmask |= GUESTFS_HIVEX_OPEN_VERBOSE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.verbose) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "debug")) {
      optargs_s.bitmask |= GUESTFS_HIVEX_OPEN_DEBUG_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.debug) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "write")) {
      optargs_s.bitmask |= GUESTFS_HIVEX_OPEN_WRITE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.write) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "unsafe")) {
      optargs_s.bitmask |= GUESTFS_HIVEX_OPEN_UNSAFE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.unsafe) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "hivex_open", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_hivex_open_argv (g, filename, optargs);
  if (r == -1)
    return make_error (retbuff, "hivex_open");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_hivex_value_utf8 (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t valueh;
  if (decode_int64 (buff, idx, &valueh) != 0) return -1;
  char *r;

  r = guestfs_hivex_value_utf8 (g, valueh);
  if (r == NULL)
    return make_error (retbuff, "hivex_value_utf8");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_inotify_add_watch (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int mask;
  if (decode_int (buff, idx, &mask) != 0) return -1;
  int64_t r;

  r = guestfs_inotify_add_watch (g, path, mask);
  if (r == -1)
    return make_error (retbuff, "inotify_add_watch");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_inotify_init (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int maxevents;
  if (decode_int (buff, idx, &maxevents) != 0) return -1;
  int r;

  r = guestfs_inotify_init (g, maxevents);
  if (r == -1)
    return make_error (retbuff, "inotify_init");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_inspect_get_type (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char *r;

  r = guestfs_inspect_get_type (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_type");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_inspect_is_live (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  int r;

  r = guestfs_inspect_is_live (g, root);
  if (r == -1)
    return make_error (retbuff, "inspect_is_live");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_internal_exit (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_internal_exit (g);
  if (r == -1)
    return make_error (retbuff, "internal_exit");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_internal_test_only_optargs (ei_x_buff *retbuff, const char *buff, int *idx)
{

  struct guestfs_internal_test_only_optargs_argv optargs_s = { .bitmask = 0 };
  struct guestfs_internal_test_only_optargs_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "test")) {
      optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_ONLY_OPTARGS_TEST_BITMASK;
      if (decode_int (buff, idx, &optargs_s.test) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "internal_test_only_optargs", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_internal_test_only_optargs_argv (g, optargs);
  if (r == -1)
    return make_error (retbuff, "internal_test_only_optargs");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_internal_test_rconststringerr (ei_x_buff *retbuff, const char *buff, int *idx)
{
  const char *r;

  r = guestfs_internal_test_rconststringerr (g);
  if (r == NULL)
    return make_error (retbuff, "internal_test_rconststringerr");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  return 0;
}

int
run_is_dir (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;

  struct guestfs_is_dir_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_is_dir_opts_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "followsymlinks")) {
      optargs_s.bitmask |= GUESTFS_IS_DIR_OPTS_FOLLOWSYMLINKS_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.followsymlinks) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "is_dir", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_is_dir_opts_argv (g, path, optargs);
  if (r == -1)
    return make_error (retbuff, "is_dir");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_is_file (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;

  struct guestfs_is_file_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_is_file_opts_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "followsymlinks")) {
      optargs_s.bitmask |= GUESTFS_IS_FILE_OPTS_FOLLOWSYMLINKS_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.followsymlinks) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "is_file", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_is_file_opts_argv (g, path, optargs);
  if (r == -1)
    return make_error (retbuff, "is_file");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_is_whole_device (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_is_whole_device (g, device);
  if (r == -1)
    return make_error (retbuff, "is_whole_device");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_is_zero_device (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_is_zero_device (g, device);
  if (r == -1)
    return make_error (retbuff, "is_zero_device");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_journal_get_realtime_usec (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t r;

  r = guestfs_journal_get_realtime_usec (g);
  if (r == -1)
    return make_error (retbuff, "journal_get_realtime_usec");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_journal_set_data_threshold (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t threshold;
  if (decode_int64 (buff, idx, &threshold) != 0) return -1;
  int r;

  r = guestfs_journal_set_data_threshold (g, threshold);
  if (r == -1)
    return make_error (retbuff, "journal_set_data_threshold");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_launch (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_launch (g);
  if (r == -1)
    return make_error (retbuff, "launch");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_ldmtool_remove_all (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_ldmtool_remove_all (g);
  if (r == -1)
    return make_error (retbuff, "ldmtool_remove_all");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_ldmtool_volume_hint (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *diskgroup;
  if (decode_string (buff, idx, &diskgroup) != 0) return -1;
  CLEANUP_FREE char *volume;
  if (decode_string (buff, idx, &volume) != 0) return -1;
  char *r;

  r = guestfs_ldmtool_volume_hint (g, diskgroup, volume);
  if (r == NULL)
    return make_error (retbuff, "ldmtool_volume_hint");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_ldmtool_volume_type (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *diskgroup;
  if (decode_string (buff, idx, &diskgroup) != 0) return -1;
  CLEANUP_FREE char *volume;
  if (decode_string (buff, idx, &volume) != 0) return -1;
  char *r;

  r = guestfs_ldmtool_volume_type (g, diskgroup, volume);
  if (r == NULL)
    return make_error (retbuff, "ldmtool_volume_type");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_list_devices (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_list_devices (g);
  if (r == NULL)
    return make_error (retbuff, "list_devices");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_list_filesystems (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_list_filesystems (g);
  if (r == NULL)
    return make_error (retbuff, "list_filesystems");

  if (make_table (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_ls (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *directory;
  if (decode_string (buff, idx, &directory) != 0) return -1;
  char **r;

  r = guestfs_ls (g, directory);
  if (r == NULL)
    return make_error (retbuff, "ls");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_ls0 (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *dir;
  if (decode_string (buff, idx, &dir) != 0) return -1;
  CLEANUP_FREE char *filenames;
  if (decode_string (buff, idx, &filenames) != 0) return -1;
  int r;

  r = guestfs_ls0 (g, dir, filenames);
  if (r == -1)
    return make_error (retbuff, "ls0");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_lstatns (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  struct guestfs_statns *r;

  r = guestfs_lstatns (g, path);
  if (r == NULL)
    return make_error (retbuff, "lstatns");

  if (make_statns (retbuff, r) != 0) return -1;
  guestfs_free_statns (r);
  return 0;
}

int
run_luks_uuid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  char *r;

  r = guestfs_luks_uuid (g, device);
  if (r == NULL)
    return make_error (retbuff, "luks_uuid");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_lxattrlist (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  CLEANUP_FREE_STRING_LIST char **names;
  if (decode_string_list (buff, idx, &names) != 0) return -1;
  struct guestfs_xattr_list *r;

  r = guestfs_lxattrlist (g, path, names);
  if (r == NULL)
    return make_error (retbuff, "lxattrlist");

  if (make_xattr_list (retbuff, r) != 0) return -1;
  guestfs_free_xattr_list (r);
  return 0;
}

int
run_mkdir_mode (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int mode;
  if (decode_int (buff, idx, &mode) != 0) return -1;
  int r;

  r = guestfs_mkdir_mode (g, path, mode);
  if (r == -1)
    return make_error (retbuff, "mkdir_mode");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mkdir_p (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_mkdir_p (g, path);
  if (r == -1)
    return make_error (retbuff, "mkdir_p");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mke2fs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;

  struct guestfs_mke2fs_argv optargs_s = { .bitmask = 0 };
  struct guestfs_mke2fs_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "blockscount")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_BLOCKSCOUNT_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.blockscount) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "blocksize")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_BLOCKSIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.blocksize) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "fragsize")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_FRAGSIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.fragsize) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "blockspergroup")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_BLOCKSPERGROUP_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.blockspergroup) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "numberofgroups")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_NUMBEROFGROUPS_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.numberofgroups) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "bytesperinode")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_BYTESPERINODE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.bytesperinode) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "inodesize")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_INODESIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.inodesize) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "journalsize")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_JOURNALSIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.journalsize) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "numberofinodes")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_NUMBEROFINODES_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.numberofinodes) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "stridesize")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_STRIDESIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.stridesize) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "stripewidth")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_STRIPEWIDTH_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.stripewidth) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "maxonlineresize")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_MAXONLINERESIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.maxonlineresize) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "reservedblockspercentage")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_RESERVEDBLOCKSPERCENTAGE_BITMASK;
      if (decode_int (buff, idx, &optargs_s.reservedblockspercentage) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "mmpupdateinterval")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_MMPUPDATEINTERVAL_BITMASK;
      if (decode_int (buff, idx, &optargs_s.mmpupdateinterval) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "journaldevice")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_JOURNALDEVICE_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.journaldevice) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "label")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_LABEL_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.label) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "lastmounteddir")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_LASTMOUNTEDDIR_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.lastmounteddir) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "creatoros")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_CREATOROS_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.creatoros) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "fstype")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_FSTYPE_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.fstype) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "usagetype")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_USAGETYPE_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.usagetype) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "uuid")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_UUID_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.uuid) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "forcecreate")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_FORCECREATE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.forcecreate) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "writesbandgrouponly")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_WRITESBANDGROUPONLY_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.writesbandgrouponly) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "lazyitableinit")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_LAZYITABLEINIT_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.lazyitableinit) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "lazyjournalinit")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_LAZYJOURNALINIT_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.lazyjournalinit) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "testfs")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_TESTFS_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.testfs) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "discard")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_DISCARD_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.discard) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "quotatype")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_QUOTATYPE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.quotatype) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "extent")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_EXTENT_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.extent) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "filetype")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_FILETYPE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.filetype) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "flexbg")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_FLEXBG_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.flexbg) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "hasjournal")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_HASJOURNAL_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.hasjournal) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "journaldev")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_JOURNALDEV_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.journaldev) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "largefile")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_LARGEFILE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.largefile) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "quota")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_QUOTA_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.quota) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "resizeinode")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_RESIZEINODE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.resizeinode) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "sparsesuper")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_SPARSESUPER_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.sparsesuper) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "uninitbg")) {
      optargs_s.bitmask |= GUESTFS_MKE2FS_UNINITBG_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.uninitbg) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "mke2fs", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_mke2fs_argv (g, device, optargs);
  if ((optargs_s.bitmask & GUESTFS_MKE2FS_JOURNALDEVICE_BITMASK))
    free ((char *) optargs_s.journaldevice);
  if ((optargs_s.bitmask & GUESTFS_MKE2FS_LABEL_BITMASK))
    free ((char *) optargs_s.label);
  if ((optargs_s.bitmask & GUESTFS_MKE2FS_LASTMOUNTEDDIR_BITMASK))
    free ((char *) optargs_s.lastmounteddir);
  if ((optargs_s.bitmask & GUESTFS_MKE2FS_CREATOROS_BITMASK))
    free ((char *) optargs_s.creatoros);
  if ((optargs_s.bitmask & GUESTFS_MKE2FS_FSTYPE_BITMASK))
    free ((char *) optargs_s.fstype);
  if ((optargs_s.bitmask & GUESTFS_MKE2FS_USAGETYPE_BITMASK))
    free ((char *) optargs_s.usagetype);
  if ((optargs_s.bitmask & GUESTFS_MKE2FS_UUID_BITMASK))
    free ((char *) optargs_s.uuid);
  if (r == -1)
    return make_error (retbuff, "mke2fs");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mke2fs_JL (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *fstype;
  if (decode_string (buff, idx, &fstype) != 0) return -1;
  int blocksize;
  if (decode_int (buff, idx, &blocksize) != 0) return -1;
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *label;
  if (decode_string (buff, idx, &label) != 0) return -1;
  int r;

  r = guestfs_mke2fs_JL (g, fstype, blocksize, device, label);
  if (r == -1)
    return make_error (retbuff, "mke2fs_JL");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mke2fs_JU (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *fstype;
  if (decode_string (buff, idx, &fstype) != 0) return -1;
  int blocksize;
  if (decode_int (buff, idx, &blocksize) != 0) return -1;
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *uuid;
  if (decode_string (buff, idx, &uuid) != 0) return -1;
  int r;

  r = guestfs_mke2fs_JU (g, fstype, blocksize, device, uuid);
  if (r == -1)
    return make_error (retbuff, "mke2fs_JU");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mke2journal (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int blocksize;
  if (decode_int (buff, idx, &blocksize) != 0) return -1;
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_mke2journal (g, blocksize, device);
  if (r == -1)
    return make_error (retbuff, "mke2journal");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mknod_b (ei_x_buff *retbuff, const char *buff, int *idx)
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

  r = guestfs_mknod_b (g, mode, devmajor, devminor, path);
  if (r == -1)
    return make_error (retbuff, "mknod_b");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mount_local (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *localmountpoint;
  if (decode_string (buff, idx, &localmountpoint) != 0) return -1;

  struct guestfs_mount_local_argv optargs_s = { .bitmask = 0 };
  struct guestfs_mount_local_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "readonly")) {
      optargs_s.bitmask |= GUESTFS_MOUNT_LOCAL_READONLY_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.readonly) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "options")) {
      optargs_s.bitmask |= GUESTFS_MOUNT_LOCAL_OPTIONS_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.options) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "cachetimeout")) {
      optargs_s.bitmask |= GUESTFS_MOUNT_LOCAL_CACHETIMEOUT_BITMASK;
      if (decode_int (buff, idx, &optargs_s.cachetimeout) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "debugcalls")) {
      optargs_s.bitmask |= GUESTFS_MOUNT_LOCAL_DEBUGCALLS_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.debugcalls) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "mount_local", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_mount_local_argv (g, localmountpoint, optargs);
  if ((optargs_s.bitmask & GUESTFS_MOUNT_LOCAL_OPTIONS_BITMASK))
    free ((char *) optargs_s.options);
  if (r == -1)
    return make_error (retbuff, "mount_local");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_ntfsresize_size (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int64_t size;
  if (decode_int64 (buff, idx, &size) != 0) return -1;
  int r;

  r = guestfs_ntfsresize_size (g, device, size);
  if (r == -1)
    return make_error (retbuff, "ntfsresize_size");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_del (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int partnum;
  if (decode_int (buff, idx, &partnum) != 0) return -1;
  int r;

  r = guestfs_part_del (g, device, partnum);
  if (r == -1)
    return make_error (retbuff, "part_del");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_get_gpt_type (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int partnum;
  if (decode_int (buff, idx, &partnum) != 0) return -1;
  char *r;

  r = guestfs_part_get_gpt_type (g, device, partnum);
  if (r == NULL)
    return make_error (retbuff, "part_get_gpt_type");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_ping_daemon (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_ping_daemon (g);
  if (r == -1)
    return make_error (retbuff, "ping_daemon");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_remove_drive (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *label;
  if (decode_string (buff, idx, &label) != 0) return -1;
  int r;

  r = guestfs_remove_drive (g, label);
  if (r == -1)
    return make_error (retbuff, "remove_drive");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_rm (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_rm (g, path);
  if (r == -1)
    return make_error (retbuff, "rm");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_rmdir (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_rmdir (g, path);
  if (r == -1)
    return make_error (retbuff, "rmdir");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_rsync (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *src;
  if (decode_string (buff, idx, &src) != 0) return -1;
  CLEANUP_FREE char *dest;
  if (decode_string (buff, idx, &dest) != 0) return -1;

  struct guestfs_rsync_argv optargs_s = { .bitmask = 0 };
  struct guestfs_rsync_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "archive")) {
      optargs_s.bitmask |= GUESTFS_RSYNC_ARCHIVE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.archive) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "deletedest")) {
      optargs_s.bitmask |= GUESTFS_RSYNC_DELETEDEST_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.deletedest) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "rsync", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_rsync_argv (g, src, dest, optargs);
  if (r == -1)
    return make_error (retbuff, "rsync");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_backend_settings (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE_STRING_LIST char **settings;
  if (decode_string_list (buff, idx, &settings) != 0) return -1;
  int r;

  r = guestfs_set_backend_settings (g, settings);
  if (r == -1)
    return make_error (retbuff, "set_backend_settings");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_hv (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *hv;
  if (decode_string (buff, idx, &hv) != 0) return -1;
  int r;

  r = guestfs_set_hv (g, hv);
  if (r == -1)
    return make_error (retbuff, "set_hv");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_qemu (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *hv;
  char hv_opt[MAXATOMLEN];
  if (ei_decode_atom(buff, idx, hv_opt) == 0) {
    if (atom_equals (hv_opt, "undefined"))
      hv = NULL;
    else
      hv = hv_opt;
  } else {
    if (decode_string (buff, idx, &hv) != 0) return -1;
  }
  int r;

  r = guestfs_set_qemu (g, hv);
  if (r == -1)
    return make_error (retbuff, "set_qemu");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_recovery_proc (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int recoveryproc;
  if (decode_bool (buff, idx, &recoveryproc) != 0) return -1;
  int r;

  r = guestfs_set_recovery_proc (g, recoveryproc);
  if (r == -1)
    return make_error (retbuff, "set_recovery_proc");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_uuid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *uuid;
  if (decode_string (buff, idx, &uuid) != 0) return -1;
  int r;

  r = guestfs_set_uuid (g, device, uuid);
  if (r == -1)
    return make_error (retbuff, "set_uuid");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_setcon (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *context;
  if (decode_string (buff, idx, &context) != 0) return -1;
  int r;

  r = guestfs_setcon (g, context);
  if (r == -1)
    return make_error (retbuff, "setcon");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_statvfs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  struct guestfs_statvfs *r;

  r = guestfs_statvfs (g, path);
  if (r == NULL)
    return make_error (retbuff, "statvfs");

  if (make_statvfs (retbuff, r) != 0) return -1;
  guestfs_free_statvfs (r);
  return 0;
}

int
run_strings (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_strings (g, path);
  if (r == NULL)
    return make_error (retbuff, "strings");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_swapoff_label (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *label;
  if (decode_string (buff, idx, &label) != 0) return -1;
  int r;

  r = guestfs_swapoff_label (g, label);
  if (r == -1)
    return make_error (retbuff, "swapoff_label");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_swapoff_uuid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *uuid;
  if (decode_string (buff, idx, &uuid) != 0) return -1;
  int r;

  r = guestfs_swapoff_uuid (g, uuid);
  if (r == -1)
    return make_error (retbuff, "swapoff_uuid");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_tar_in (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *tarfile;
  if (decode_string (buff, idx, &tarfile) != 0) return -1;
  CLEANUP_FREE char *directory;
  if (decode_string (buff, idx, &directory) != 0) return -1;

  struct guestfs_tar_in_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_tar_in_opts_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "compress")) {
      optargs_s.bitmask |= GUESTFS_TAR_IN_OPTS_COMPRESS_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.compress) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "xattrs")) {
      optargs_s.bitmask |= GUESTFS_TAR_IN_OPTS_XATTRS_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.xattrs) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "selinux")) {
      optargs_s.bitmask |= GUESTFS_TAR_IN_OPTS_SELINUX_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.selinux) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "acls")) {
      optargs_s.bitmask |= GUESTFS_TAR_IN_OPTS_ACLS_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.acls) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "tar_in", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_tar_in_opts_argv (g, tarfile, directory, optargs);
  if ((optargs_s.bitmask & GUESTFS_TAR_IN_OPTS_COMPRESS_BITMASK))
    free ((char *) optargs_s.compress);
  if (r == -1)
    return make_error (retbuff, "tar_in");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_truncate (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_truncate (g, path);
  if (r == -1)
    return make_error (retbuff, "truncate");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_tune2fs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;

  struct guestfs_tune2fs_argv optargs_s = { .bitmask = 0 };
  struct guestfs_tune2fs_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "force")) {
      optargs_s.bitmask |= GUESTFS_TUNE2FS_FORCE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.force) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "maxmountcount")) {
      optargs_s.bitmask |= GUESTFS_TUNE2FS_MAXMOUNTCOUNT_BITMASK;
      if (decode_int (buff, idx, &optargs_s.maxmountcount) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "mountcount")) {
      optargs_s.bitmask |= GUESTFS_TUNE2FS_MOUNTCOUNT_BITMASK;
      if (decode_int (buff, idx, &optargs_s.mountcount) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "errorbehavior")) {
      optargs_s.bitmask |= GUESTFS_TUNE2FS_ERRORBEHAVIOR_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.errorbehavior) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "group")) {
      optargs_s.bitmask |= GUESTFS_TUNE2FS_GROUP_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.group) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "intervalbetweenchecks")) {
      optargs_s.bitmask |= GUESTFS_TUNE2FS_INTERVALBETWEENCHECKS_BITMASK;
      if (decode_int (buff, idx, &optargs_s.intervalbetweenchecks) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "reservedblockspercentage")) {
      optargs_s.bitmask |= GUESTFS_TUNE2FS_RESERVEDBLOCKSPERCENTAGE_BITMASK;
      if (decode_int (buff, idx, &optargs_s.reservedblockspercentage) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "lastmounteddirectory")) {
      optargs_s.bitmask |= GUESTFS_TUNE2FS_LASTMOUNTEDDIRECTORY_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.lastmounteddirectory) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "reservedblockscount")) {
      optargs_s.bitmask |= GUESTFS_TUNE2FS_RESERVEDBLOCKSCOUNT_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.reservedblockscount) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "user")) {
      optargs_s.bitmask |= GUESTFS_TUNE2FS_USER_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.user) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "tune2fs", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_tune2fs_argv (g, device, optargs);
  if ((optargs_s.bitmask & GUESTFS_TUNE2FS_ERRORBEHAVIOR_BITMASK))
    free ((char *) optargs_s.errorbehavior);
  if ((optargs_s.bitmask & GUESTFS_TUNE2FS_LASTMOUNTEDDIRECTORY_BITMASK))
    free ((char *) optargs_s.lastmounteddirectory);
  if (r == -1)
    return make_error (retbuff, "tune2fs");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_upload (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  CLEANUP_FREE char *remotefilename;
  if (decode_string (buff, idx, &remotefilename) != 0) return -1;
  int r;

  r = guestfs_upload (g, filename, remotefilename);
  if (r == -1)
    return make_error (retbuff, "upload");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_utimens (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int64_t atsecs;
  if (decode_int64 (buff, idx, &atsecs) != 0) return -1;
  int64_t atnsecs;
  if (decode_int64 (buff, idx, &atnsecs) != 0) return -1;
  int64_t mtsecs;
  if (decode_int64 (buff, idx, &mtsecs) != 0) return -1;
  int64_t mtnsecs;
  if (decode_int64 (buff, idx, &mtnsecs) != 0) return -1;
  int r;

  r = guestfs_utimens (g, path, atsecs, atnsecs, mtsecs, mtnsecs);
  if (r == -1)
    return make_error (retbuff, "utimens");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_version (ei_x_buff *retbuff, const char *buff, int *idx)
{
  struct guestfs_version *r;

  r = guestfs_version (g);
  if (r == NULL)
    return make_error (retbuff, "version");

  if (make_version (retbuff, r) != 0) return -1;
  guestfs_free_version (r);
  return 0;
}

int
run_vfs_minimum_size (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *mountable;
  if (decode_string (buff, idx, &mountable) != 0) return -1;
  int64_t r;

  r = guestfs_vfs_minimum_size (g, mountable);
  if (r == -1)
    return make_error (retbuff, "vfs_minimum_size");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_vfs_uuid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *mountable;
  if (decode_string (buff, idx, &mountable) != 0) return -1;
  char *r;

  r = guestfs_vfs_uuid (g, mountable);
  if (r == NULL)
    return make_error (retbuff, "vfs_uuid");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_vgs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_vgs (g);
  if (r == NULL)
    return make_error (retbuff, "vgs");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_write_file (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  CLEANUP_FREE char *content;
  if (decode_string (buff, idx, &content) != 0) return -1;
  int size;
  if (decode_int (buff, idx, &size) != 0) return -1;
  int r;

  r = guestfs_write_file (g, path, content, size);
  if (r == -1)
    return make_error (retbuff, "write_file");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_zero (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_zero (g, device);
  if (r == -1)
    return make_error (retbuff, "zero");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_zerofree (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_zerofree (g, device);
  if (r == -1)
    return make_error (retbuff, "zerofree");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_zgrepi (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *regex;
  if (decode_string (buff, idx, &regex) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_zgrepi (g, regex, path);
  if (r == NULL)
    return make_error (retbuff, "zgrepi");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}
