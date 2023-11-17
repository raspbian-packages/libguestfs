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
run_add_cdrom (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  int r;

  r = guestfs_add_cdrom (g, filename);
  if (r == -1)
    return make_error (retbuff, "add_cdrom");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_add_libvirt_dom (ei_x_buff *retbuff, const char *buff, int *idx)
{
  void * /* virDomainPtr */ dom = POINTER_NOT_IMPLEMENTED ("virDomainPtr");

  struct guestfs_add_libvirt_dom_argv optargs_s = { .bitmask = 0 };
  struct guestfs_add_libvirt_dom_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "readonly")) {
      optargs_s.bitmask |= GUESTFS_ADD_LIBVIRT_DOM_READONLY_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.readonly) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "iface")) {
      optargs_s.bitmask |= GUESTFS_ADD_LIBVIRT_DOM_IFACE_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.iface) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "live")) {
      optargs_s.bitmask |= GUESTFS_ADD_LIBVIRT_DOM_LIVE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.live) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "readonlydisk")) {
      optargs_s.bitmask |= GUESTFS_ADD_LIBVIRT_DOM_READONLYDISK_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.readonlydisk) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "cachemode")) {
      optargs_s.bitmask |= GUESTFS_ADD_LIBVIRT_DOM_CACHEMODE_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.cachemode) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "discard")) {
      optargs_s.bitmask |= GUESTFS_ADD_LIBVIRT_DOM_DISCARD_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.discard) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "copyonread")) {
      optargs_s.bitmask |= GUESTFS_ADD_LIBVIRT_DOM_COPYONREAD_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.copyonread) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "add_libvirt_dom", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_add_libvirt_dom_argv (g, dom, optargs);
  if ((optargs_s.bitmask & GUESTFS_ADD_LIBVIRT_DOM_IFACE_BITMASK))
    free ((char *) optargs_s.iface);
  if ((optargs_s.bitmask & GUESTFS_ADD_LIBVIRT_DOM_READONLYDISK_BITMASK))
    free ((char *) optargs_s.readonlydisk);
  if ((optargs_s.bitmask & GUESTFS_ADD_LIBVIRT_DOM_CACHEMODE_BITMASK))
    free ((char *) optargs_s.cachemode);
  if ((optargs_s.bitmask & GUESTFS_ADD_LIBVIRT_DOM_DISCARD_BITMASK))
    free ((char *) optargs_s.discard);
  if (r == -1)
    return make_error (retbuff, "add_libvirt_dom");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_aug_init (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  int flags;
  if (decode_int (buff, idx, &flags) != 0) return -1;
  int r;

  r = guestfs_aug_init (g, root, flags);
  if (r == -1)
    return make_error (retbuff, "aug_init");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_aug_insert (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *augpath;
  if (decode_string (buff, idx, &augpath) != 0) return -1;
  CLEANUP_FREE char *label;
  if (decode_string (buff, idx, &label) != 0) return -1;
  int before;
  if (decode_bool (buff, idx, &before) != 0) return -1;
  int r;

  r = guestfs_aug_insert (g, augpath, label, before);
  if (r == -1)
    return make_error (retbuff, "aug_insert");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_aug_load (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_aug_load (g);
  if (r == -1)
    return make_error (retbuff, "aug_load");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_aug_rm (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *augpath;
  if (decode_string (buff, idx, &augpath) != 0) return -1;
  int r;

  r = guestfs_aug_rm (g, augpath);
  if (r == -1)
    return make_error (retbuff, "aug_rm");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_aug_set (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *augpath;
  if (decode_string (buff, idx, &augpath) != 0) return -1;
  CLEANUP_FREE char *val;
  if (decode_string (buff, idx, &val) != 0) return -1;
  int r;

  r = guestfs_aug_set (g, augpath, val);
  if (r == -1)
    return make_error (retbuff, "aug_set");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_blkid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  char **r;

  r = guestfs_blkid (g, device);
  if (r == NULL)
    return make_error (retbuff, "blkid");

  if (make_table (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_blockdev_setra (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int sectors;
  if (decode_int (buff, idx, &sectors) != 0) return -1;
  int r;

  r = guestfs_blockdev_setra (g, device, sectors);
  if (r == -1)
    return make_error (retbuff, "blockdev_setra");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_scrub_start (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_btrfs_scrub_start (g, path);
  if (r == -1)
    return make_error (retbuff, "btrfs_scrub_start");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_scrub_status (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  struct guestfs_btrfsscrub *r;

  r = guestfs_btrfs_scrub_status (g, path);
  if (r == NULL)
    return make_error (retbuff, "btrfs_scrub_status");

  if (make_btrfsscrub (retbuff, r) != 0) return -1;
  guestfs_free_btrfsscrub (r);
  return 0;
}

int
run_btrfs_subvolume_create (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *dest;
  if (decode_string (buff, idx, &dest) != 0) return -1;

  struct guestfs_btrfs_subvolume_create_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_btrfs_subvolume_create_opts_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "qgroupid")) {
      optargs_s.bitmask |= GUESTFS_BTRFS_SUBVOLUME_CREATE_OPTS_QGROUPID_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.qgroupid) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "btrfs_subvolume_create", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_btrfs_subvolume_create_opts_argv (g, dest, optargs);
  if ((optargs_s.bitmask & GUESTFS_BTRFS_SUBVOLUME_CREATE_OPTS_QGROUPID_BITMASK))
    free ((char *) optargs_s.qgroupid);
  if (r == -1)
    return make_error (retbuff, "btrfs_subvolume_create");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_subvolume_set_default (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t id;
  if (decode_int64 (buff, idx, &id) != 0) return -1;
  CLEANUP_FREE char *fs;
  if (decode_string (buff, idx, &fs) != 0) return -1;
  int r;

  r = guestfs_btrfs_subvolume_set_default (g, id, fs);
  if (r == -1)
    return make_error (retbuff, "btrfs_subvolume_set_default");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_subvolume_snapshot (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *source;
  if (decode_string (buff, idx, &source) != 0) return -1;
  CLEANUP_FREE char *dest;
  if (decode_string (buff, idx, &dest) != 0) return -1;

  struct guestfs_btrfs_subvolume_snapshot_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_btrfs_subvolume_snapshot_opts_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "ro")) {
      optargs_s.bitmask |= GUESTFS_BTRFS_SUBVOLUME_SNAPSHOT_OPTS_RO_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.ro) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "qgroupid")) {
      optargs_s.bitmask |= GUESTFS_BTRFS_SUBVOLUME_SNAPSHOT_OPTS_QGROUPID_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.qgroupid) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "btrfs_subvolume_snapshot", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_btrfs_subvolume_snapshot_opts_argv (g, source, dest, optargs);
  if ((optargs_s.bitmask & GUESTFS_BTRFS_SUBVOLUME_SNAPSHOT_OPTS_QGROUPID_BITMASK))
    free ((char *) optargs_s.qgroupid);
  if (r == -1)
    return make_error (retbuff, "btrfs_subvolume_snapshot");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_canonical_device_name (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  char *r;

  r = guestfs_canonical_device_name (g, device);
  if (r == NULL)
    return make_error (retbuff, "canonical_device_name");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_case_sensitive_path (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char *r;

  r = guestfs_case_sensitive_path (g, path);
  if (r == NULL)
    return make_error (retbuff, "case_sensitive_path");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_copy_size (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *src;
  if (decode_string (buff, idx, &src) != 0) return -1;
  CLEANUP_FREE char *dest;
  if (decode_string (buff, idx, &dest) != 0) return -1;
  int64_t size;
  if (decode_int64 (buff, idx, &size) != 0) return -1;
  int r;

  r = guestfs_copy_size (g, src, dest, size);
  if (r == -1)
    return make_error (retbuff, "copy_size");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_debug_upload (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  CLEANUP_FREE char *tmpname;
  if (decode_string (buff, idx, &tmpname) != 0) return -1;
  int mode;
  if (decode_int (buff, idx, &mode) != 0) return -1;
  int r;

  r = guestfs_debug_upload (g, filename, tmpname, mode);
  if (r == -1)
    return make_error (retbuff, "debug_upload");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_download_offset (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *remotefilename;
  if (decode_string (buff, idx, &remotefilename) != 0) return -1;
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  int64_t offset;
  if (decode_int64 (buff, idx, &offset) != 0) return -1;
  int64_t size;
  if (decode_int64 (buff, idx, &size) != 0) return -1;
  int r;

  r = guestfs_download_offset (g, remotefilename, filename, offset, size);
  if (r == -1)
    return make_error (retbuff, "download_offset");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_find_inode (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int64_t inode;
  if (decode_int64 (buff, idx, &inode) != 0) return -1;
  struct guestfs_tsk_dirent_list *r;

  r = guestfs_find_inode (g, device, inode);
  if (r == NULL)
    return make_error (retbuff, "find_inode");

  if (make_tsk_dirent_list (retbuff, r) != 0) return -1;
  guestfs_free_tsk_dirent_list (r);
  return 0;
}

int
run_findfs_uuid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *uuid;
  if (decode_string (buff, idx, &uuid) != 0) return -1;
  char *r;

  r = guestfs_findfs_uuid (g, uuid);
  if (r == NULL)
    return make_error (retbuff, "findfs_uuid");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_fstrim (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *mountpoint;
  if (decode_string (buff, idx, &mountpoint) != 0) return -1;

  struct guestfs_fstrim_argv optargs_s = { .bitmask = 0 };
  struct guestfs_fstrim_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "offset")) {
      optargs_s.bitmask |= GUESTFS_FSTRIM_OFFSET_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.offset) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "length")) {
      optargs_s.bitmask |= GUESTFS_FSTRIM_LENGTH_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.length) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "minimumfreeextent")) {
      optargs_s.bitmask |= GUESTFS_FSTRIM_MINIMUMFREEEXTENT_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.minimumfreeextent) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "fstrim", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_fstrim_argv (g, mountpoint, optargs);
  if (r == -1)
    return make_error (retbuff, "fstrim");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_get_autosync (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_get_autosync (g);
  if (r == -1)
    return make_error (retbuff, "get_autosync");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_get_e2uuid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  char *r;

  r = guestfs_get_e2uuid (g, device);
  if (r == NULL)
    return make_error (retbuff, "get_e2uuid");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_get_libvirt_requested_credential_challenge (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int index;
  if (decode_int (buff, idx, &index) != 0) return -1;
  char *r;

  r = guestfs_get_libvirt_requested_credential_challenge (g, index);
  if (r == NULL)
    return make_error (retbuff, "get_libvirt_requested_credential_challenge");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_get_pid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_get_pid (g);
  if (r == -1)
    return make_error (retbuff, "get_pid");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_get_selinux (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_get_selinux (g);
  if (r == -1)
    return make_error (retbuff, "get_selinux");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_grepi (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *regex;
  if (decode_string (buff, idx, &regex) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_grepi (g, regex, path);
  if (r == NULL)
    return make_error (retbuff, "grepi");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_hexdump (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char *r;

  r = guestfs_hexdump (g, path);
  if (r == NULL)
    return make_error (retbuff, "hexdump");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_hivex_node_children (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t nodeh;
  if (decode_int64 (buff, idx, &nodeh) != 0) return -1;
  struct guestfs_hivex_node_list *r;

  r = guestfs_hivex_node_children (g, nodeh);
  if (r == NULL)
    return make_error (retbuff, "hivex_node_children");

  if (make_hivex_node_list (retbuff, r) != 0) return -1;
  guestfs_free_hivex_node_list (r);
  return 0;
}

int
run_inspect_get_format (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char *r;

  r = guestfs_inspect_get_format (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_format");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_inspect_get_hostname (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char *r;

  r = guestfs_inspect_get_hostname (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_hostname");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_inspect_is_multipart (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  int r;

  r = guestfs_inspect_is_multipart (g, root);
  if (r == -1)
    return make_error (retbuff, "inspect_is_multipart");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_internal_test_rbool (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *val;
  if (decode_string (buff, idx, &val) != 0) return -1;
  int r;

  r = guestfs_internal_test_rbool (g, val);
  if (r == -1)
    return make_error (retbuff, "internal_test_rbool");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_internal_test_rhashtable (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *val;
  if (decode_string (buff, idx, &val) != 0) return -1;
  char **r;

  r = guestfs_internal_test_rhashtable (g, val);
  if (r == NULL)
    return make_error (retbuff, "internal_test_rhashtable");

  if (make_table (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_internal_test_rstringlist (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *val;
  if (decode_string (buff, idx, &val) != 0) return -1;
  char **r;

  r = guestfs_internal_test_rstringlist (g, val);
  if (r == NULL)
    return make_error (retbuff, "internal_test_rstringlist");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_internal_test_rstringlisterr (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_internal_test_rstringlisterr (g);
  if (r == NULL)
    return make_error (retbuff, "internal_test_rstringlisterr");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_is_busy (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_is_busy (g);
  if (r == -1)
    return make_error (retbuff, "is_busy");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_is_ready (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_is_ready (g);
  if (r == -1)
    return make_error (retbuff, "is_ready");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_ldmtool_scan (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_ldmtool_scan (g);
  if (r == NULL)
    return make_error (retbuff, "ldmtool_scan");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_lgetxattrs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  struct guestfs_xattr_list *r;

  r = guestfs_lgetxattrs (g, path);
  if (r == NULL)
    return make_error (retbuff, "lgetxattrs");

  if (make_xattr_list (retbuff, r) != 0) return -1;
  guestfs_free_xattr_list (r);
  return 0;
}

int
run_list_dm_devices (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_list_dm_devices (g);
  if (r == NULL)
    return make_error (retbuff, "list_dm_devices");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_list_ldm_volumes (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_list_ldm_volumes (g);
  if (r == NULL)
    return make_error (retbuff, "list_ldm_volumes");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_luks_format (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *key;
  if (decode_string (buff, idx, &key) != 0) return -1;
  int keyslot;
  if (decode_int (buff, idx, &keyslot) != 0) return -1;
  int r;

  r = guestfs_luks_format (g, device, key, keyslot);
  if (r == -1)
    return make_error (retbuff, "luks_format");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_lvm_canonical_lv_name (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *lvname;
  if (decode_string (buff, idx, &lvname) != 0) return -1;
  char *r;

  r = guestfs_lvm_canonical_lv_name (g, lvname);
  if (r == NULL)
    return make_error (retbuff, "lvm_canonical_lv_name");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_lvrename (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *logvol;
  if (decode_string (buff, idx, &logvol) != 0) return -1;
  CLEANUP_FREE char *newlogvol;
  if (decode_string (buff, idx, &newlogvol) != 0) return -1;
  int r;

  r = guestfs_lvrename (g, logvol, newlogvol);
  if (r == -1)
    return make_error (retbuff, "lvrename");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_lvresize (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int mbytes;
  if (decode_int (buff, idx, &mbytes) != 0) return -1;
  int r;

  r = guestfs_lvresize (g, device, mbytes);
  if (r == -1)
    return make_error (retbuff, "lvresize");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_lvuuid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  char *r;

  r = guestfs_lvuuid (g, device);
  if (r == NULL)
    return make_error (retbuff, "lvuuid");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_mke2fs_J (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *fstype;
  if (decode_string (buff, idx, &fstype) != 0) return -1;
  int blocksize;
  if (decode_int (buff, idx, &blocksize) != 0) return -1;
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *journal;
  if (decode_string (buff, idx, &journal) != 0) return -1;
  int r;

  r = guestfs_mke2fs_J (g, fstype, blocksize, device, journal);
  if (r == -1)
    return make_error (retbuff, "mke2fs_J");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mke2journal_U (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int blocksize;
  if (decode_int (buff, idx, &blocksize) != 0) return -1;
  CLEANUP_FREE char *uuid;
  if (decode_string (buff, idx, &uuid) != 0) return -1;
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_mke2journal_U (g, blocksize, uuid, device);
  if (r == -1)
    return make_error (retbuff, "mke2journal_U");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mknod_c (ei_x_buff *retbuff, const char *buff, int *idx)
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

  r = guestfs_mknod_c (g, mode, devmajor, devminor, path);
  if (r == -1)
    return make_error (retbuff, "mknod_c");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mount_options (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *options;
  if (decode_string (buff, idx, &options) != 0) return -1;
  CLEANUP_FREE char *mountable;
  if (decode_string (buff, idx, &mountable) != 0) return -1;
  CLEANUP_FREE char *mountpoint;
  if (decode_string (buff, idx, &mountpoint) != 0) return -1;
  int r;

  r = guestfs_mount_options (g, options, mountable, mountpoint);
  if (r == -1)
    return make_error (retbuff, "mount_options");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_ntfsfix (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;

  struct guestfs_ntfsfix_argv optargs_s = { .bitmask = 0 };
  struct guestfs_ntfsfix_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "clearbadsectors")) {
      optargs_s.bitmask |= GUESTFS_NTFSFIX_CLEARBADSECTORS_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.clearbadsectors) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "ntfsfix", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_ntfsfix_argv (g, device, optargs);
  if (r == -1)
    return make_error (retbuff, "ntfsfix");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_add (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *prlogex;
  if (decode_string (buff, idx, &prlogex) != 0) return -1;
  int64_t startsect;
  if (decode_int64 (buff, idx, &startsect) != 0) return -1;
  int64_t endsect;
  if (decode_int64 (buff, idx, &endsect) != 0) return -1;
  int r;

  r = guestfs_part_add (g, device, prlogex, startsect, endsect);
  if (r == -1)
    return make_error (retbuff, "part_add");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_get_gpt_guid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int partnum;
  if (decode_int (buff, idx, &partnum) != 0) return -1;
  char *r;

  r = guestfs_part_get_gpt_guid (g, device, partnum);
  if (r == NULL)
    return make_error (retbuff, "part_get_gpt_guid");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_part_get_mbr_id (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int partnum;
  if (decode_int (buff, idx, &partnum) != 0) return -1;
  int r;

  r = guestfs_part_get_mbr_id (g, device, partnum);
  if (r == -1)
    return make_error (retbuff, "part_get_mbr_id");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_part_get_mbr_part_type (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int partnum;
  if (decode_int (buff, idx, &partnum) != 0) return -1;
  char *r;

  r = guestfs_part_get_mbr_part_type (g, device, partnum);
  if (r == NULL)
    return make_error (retbuff, "part_get_mbr_part_type");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_part_get_name (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int partnum;
  if (decode_int (buff, idx, &partnum) != 0) return -1;
  char *r;

  r = guestfs_part_get_name (g, device, partnum);
  if (r == NULL)
    return make_error (retbuff, "part_get_name");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_part_init (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *parttype;
  if (decode_string (buff, idx, &parttype) != 0) return -1;
  int r;

  r = guestfs_part_init (g, device, parttype);
  if (r == -1)
    return make_error (retbuff, "part_init");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_to_partnum (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *partition;
  if (decode_string (buff, idx, &partition) != 0) return -1;
  int r;

  r = guestfs_part_to_partnum (g, partition);
  if (r == -1)
    return make_error (retbuff, "part_to_partnum");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_pvuuid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  char *r;

  r = guestfs_pvuuid (g, device);
  if (r == NULL)
    return make_error (retbuff, "pvuuid");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_readlinklist (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  CLEANUP_FREE_STRING_LIST char **names;
  if (decode_string_list (buff, idx, &names) != 0) return -1;
  char **r;

  r = guestfs_readlinklist (g, path, names);
  if (r == NULL)
    return make_error (retbuff, "readlinklist");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_rmmountpoint (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *exemptpath;
  if (decode_string (buff, idx, &exemptpath) != 0) return -1;
  int r;

  r = guestfs_rmmountpoint (g, exemptpath);
  if (r == -1)
    return make_error (retbuff, "rmmountpoint");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_scrub_device (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_scrub_device (g, device);
  if (r == -1)
    return make_error (retbuff, "scrub_device");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_cachedir (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *cachedir;
  char cachedir_opt[MAXATOMLEN];
  if (ei_decode_atom(buff, idx, cachedir_opt) == 0) {
    if (atom_equals (cachedir_opt, "undefined"))
      cachedir = NULL;
    else
      cachedir = cachedir_opt;
  } else {
    if (decode_string (buff, idx, &cachedir) != 0) return -1;
  }
  int r;

  r = guestfs_set_cachedir (g, cachedir);
  if (r == -1)
    return make_error (retbuff, "set_cachedir");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_e2attrs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *file;
  if (decode_string (buff, idx, &file) != 0) return -1;
  CLEANUP_FREE char *attrs;
  if (decode_string (buff, idx, &attrs) != 0) return -1;

  struct guestfs_set_e2attrs_argv optargs_s = { .bitmask = 0 };
  struct guestfs_set_e2attrs_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "clear")) {
      optargs_s.bitmask |= GUESTFS_SET_E2ATTRS_CLEAR_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.clear) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "set_e2attrs", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_set_e2attrs_argv (g, file, attrs, optargs);
  if (r == -1)
    return make_error (retbuff, "set_e2attrs");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_e2label (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *label;
  if (decode_string (buff, idx, &label) != 0) return -1;
  int r;

  r = guestfs_set_e2label (g, device, label);
  if (r == -1)
    return make_error (retbuff, "set_e2label");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_sh_lines (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *command;
  if (decode_string (buff, idx, &command) != 0) return -1;
  char **r;

  r = guestfs_sh_lines (g, command);
  if (r == NULL)
    return make_error (retbuff, "sh_lines");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_shutdown (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_shutdown (g);
  if (r == -1)
    return make_error (retbuff, "shutdown");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_swapon_file (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *file;
  if (decode_string (buff, idx, &file) != 0) return -1;
  int r;

  r = guestfs_swapon_file (g, file);
  if (r == -1)
    return make_error (retbuff, "swapon_file");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_tgz_out (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *directory;
  if (decode_string (buff, idx, &directory) != 0) return -1;
  CLEANUP_FREE char *tarball;
  if (decode_string (buff, idx, &tarball) != 0) return -1;
  int r;

  r = guestfs_tgz_out (g, directory, tarball);
  if (r == -1)
    return make_error (retbuff, "tgz_out");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_umask (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int mask;
  if (decode_int (buff, idx, &mask) != 0) return -1;
  int r;

  r = guestfs_umask (g, mask);
  if (r == -1)
    return make_error (retbuff, "umask");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_wipefs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_wipefs (g, device);
  if (r == -1)
    return make_error (retbuff, "wipefs");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}
