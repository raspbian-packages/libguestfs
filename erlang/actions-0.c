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
run_acl_delete_def_file (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *dir;
  if (decode_string (buff, idx, &dir) != 0) return -1;
  int r;

  r = guestfs_acl_delete_def_file (g, dir);
  if (r == -1)
    return make_error (retbuff, "acl_delete_def_file");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_add_domain (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *dom;
  if (decode_string (buff, idx, &dom) != 0) return -1;

  struct guestfs_add_domain_argv optargs_s = { .bitmask = 0 };
  struct guestfs_add_domain_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "libvirturi")) {
      optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_LIBVIRTURI_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.libvirturi) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "readonly")) {
      optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_READONLY_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.readonly) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "iface")) {
      optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_IFACE_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.iface) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "live")) {
      optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_LIVE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.live) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "allowuuid")) {
      optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_ALLOWUUID_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.allowuuid) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "readonlydisk")) {
      optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_READONLYDISK_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.readonlydisk) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "cachemode")) {
      optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_CACHEMODE_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.cachemode) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "discard")) {
      optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_DISCARD_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.discard) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "copyonread")) {
      optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_COPYONREAD_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.copyonread) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "add_domain", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_add_domain_argv (g, dom, optargs);
  if ((optargs_s.bitmask & GUESTFS_ADD_DOMAIN_LIBVIRTURI_BITMASK))
    free ((char *) optargs_s.libvirturi);
  if ((optargs_s.bitmask & GUESTFS_ADD_DOMAIN_IFACE_BITMASK))
    free ((char *) optargs_s.iface);
  if ((optargs_s.bitmask & GUESTFS_ADD_DOMAIN_READONLYDISK_BITMASK))
    free ((char *) optargs_s.readonlydisk);
  if ((optargs_s.bitmask & GUESTFS_ADD_DOMAIN_CACHEMODE_BITMASK))
    free ((char *) optargs_s.cachemode);
  if ((optargs_s.bitmask & GUESTFS_ADD_DOMAIN_DISCARD_BITMASK))
    free ((char *) optargs_s.discard);
  if (r == -1)
    return make_error (retbuff, "add_domain");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_add_drive_ro (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  int r;

  r = guestfs_add_drive_ro (g, filename);
  if (r == -1)
    return make_error (retbuff, "add_drive_ro");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_add_drive_ro_with_if (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  CLEANUP_FREE char *iface;
  if (decode_string (buff, idx, &iface) != 0) return -1;
  int r;

  r = guestfs_add_drive_ro_with_if (g, filename, iface);
  if (r == -1)
    return make_error (retbuff, "add_drive_ro_with_if");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_aug_ls (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *augpath;
  if (decode_string (buff, idx, &augpath) != 0) return -1;
  char **r;

  r = guestfs_aug_ls (g, augpath);
  if (r == NULL)
    return make_error (retbuff, "aug_ls");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_aug_match (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *augpath;
  if (decode_string (buff, idx, &augpath) != 0) return -1;
  char **r;

  r = guestfs_aug_match (g, augpath);
  if (r == NULL)
    return make_error (retbuff, "aug_match");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_aug_transform (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *lens;
  if (decode_string (buff, idx, &lens) != 0) return -1;
  CLEANUP_FREE char *file;
  if (decode_string (buff, idx, &file) != 0) return -1;

  struct guestfs_aug_transform_argv optargs_s = { .bitmask = 0 };
  struct guestfs_aug_transform_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "remove")) {
      optargs_s.bitmask |= GUESTFS_AUG_TRANSFORM_REMOVE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.remove) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "aug_transform", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_aug_transform_argv (g, lens, file, optargs);
  if (r == -1)
    return make_error (retbuff, "aug_transform");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_qgroup_create (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *qgroupid;
  if (decode_string (buff, idx, &qgroupid) != 0) return -1;
  CLEANUP_FREE char *subvolume;
  if (decode_string (buff, idx, &subvolume) != 0) return -1;
  int r;

  r = guestfs_btrfs_qgroup_create (g, qgroupid, subvolume);
  if (r == -1)
    return make_error (retbuff, "btrfs_qgroup_create");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_rescue_super_recover (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_btrfs_rescue_super_recover (g, device);
  if (r == -1)
    return make_error (retbuff, "btrfs_rescue_super_recover");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfstune_enable_extended_inode_refs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_btrfstune_enable_extended_inode_refs (g, device);
  if (r == -1)
    return make_error (retbuff, "btrfstune_enable_extended_inode_refs");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_clevis_luks_unlock (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *mapname;
  if (decode_string (buff, idx, &mapname) != 0) return -1;
  int r;

  r = guestfs_clevis_luks_unlock (g, device, mapname);
  if (r == -1)
    return make_error (retbuff, "clevis_luks_unlock");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_command_lines (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE_STRING_LIST char **arguments;
  if (decode_string_list (buff, idx, &arguments) != 0) return -1;
  char **r;

  r = guestfs_command_lines (g, arguments);
  if (r == NULL)
    return make_error (retbuff, "command_lines");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_compress_device_out (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *ctype;
  if (decode_string (buff, idx, &ctype) != 0) return -1;
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *zdevice;
  if (decode_string (buff, idx, &zdevice) != 0) return -1;

  struct guestfs_compress_device_out_argv optargs_s = { .bitmask = 0 };
  struct guestfs_compress_device_out_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "level")) {
      optargs_s.bitmask |= GUESTFS_COMPRESS_DEVICE_OUT_LEVEL_BITMASK;
      if (decode_int (buff, idx, &optargs_s.level) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "compress_device_out", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_compress_device_out_argv (g, ctype, device, zdevice, optargs);
  if (r == -1)
    return make_error (retbuff, "compress_device_out");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_compress_out (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *ctype;
  if (decode_string (buff, idx, &ctype) != 0) return -1;
  CLEANUP_FREE char *file;
  if (decode_string (buff, idx, &file) != 0) return -1;
  CLEANUP_FREE char *zfile;
  if (decode_string (buff, idx, &zfile) != 0) return -1;

  struct guestfs_compress_out_argv optargs_s = { .bitmask = 0 };
  struct guestfs_compress_out_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "level")) {
      optargs_s.bitmask |= GUESTFS_COMPRESS_OUT_LEVEL_BITMASK;
      if (decode_int (buff, idx, &optargs_s.level) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "compress_out", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_compress_out_argv (g, ctype, file, zfile, optargs);
  if (r == -1)
    return make_error (retbuff, "compress_out");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_copy_in (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *localpath;
  if (decode_string (buff, idx, &localpath) != 0) return -1;
  CLEANUP_FREE char *remotedir;
  if (decode_string (buff, idx, &remotedir) != 0) return -1;
  int r;

  r = guestfs_copy_in (g, localpath, remotedir);
  if (r == -1)
    return make_error (retbuff, "copy_in");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_cp (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *src;
  if (decode_string (buff, idx, &src) != 0) return -1;
  CLEANUP_FREE char *dest;
  if (decode_string (buff, idx, &dest) != 0) return -1;
  int r;

  r = guestfs_cp (g, src, dest);
  if (r == -1)
    return make_error (retbuff, "cp");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_cryptsetup_close (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_cryptsetup_close (g, device);
  if (r == -1)
    return make_error (retbuff, "cryptsetup_close");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_device_name (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int index;
  if (decode_int (buff, idx, &index) != 0) return -1;
  char *r;

  r = guestfs_device_name (g, index);
  if (r == NULL)
    return make_error (retbuff, "device_name");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_df_h (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char *r;

  r = guestfs_df_h (g);
  if (r == NULL)
    return make_error (retbuff, "df_h");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_disk_has_backing_file (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  int r;

  r = guestfs_disk_has_backing_file (g, filename);
  if (r == -1)
    return make_error (retbuff, "disk_has_backing_file");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_e2fsck (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;

  struct guestfs_e2fsck_argv optargs_s = { .bitmask = 0 };
  struct guestfs_e2fsck_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "correct")) {
      optargs_s.bitmask |= GUESTFS_E2FSCK_CORRECT_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.correct) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "forceall")) {
      optargs_s.bitmask |= GUESTFS_E2FSCK_FORCEALL_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.forceall) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "e2fsck", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_e2fsck_argv (g, device, optargs);
  if (r == -1)
    return make_error (retbuff, "e2fsck");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_extlinux (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *directory;
  if (decode_string (buff, idx, &directory) != 0) return -1;
  int r;

  r = guestfs_extlinux (g, directory);
  if (r == -1)
    return make_error (retbuff, "extlinux");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_fsck (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *fstype;
  if (decode_string (buff, idx, &fstype) != 0) return -1;
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_fsck (g, fstype, device);
  if (r == -1)
    return make_error (retbuff, "fsck");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_get_attach_method (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char *r;

  r = guestfs_get_attach_method (g);
  if (r == NULL)
    return make_error (retbuff, "get_attach_method");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_get_cachedir (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char *r;

  r = guestfs_get_cachedir (g);
  if (r == NULL)
    return make_error (retbuff, "get_cachedir");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_get_libvirt_requested_credential_defresult (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int index;
  if (decode_int (buff, idx, &index) != 0) return -1;
  char *r;

  r = guestfs_get_libvirt_requested_credential_defresult (g, index);
  if (r == NULL)
    return make_error (retbuff, "get_libvirt_requested_credential_defresult");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_get_path (ei_x_buff *retbuff, const char *buff, int *idx)
{
  const char *r;

  r = guestfs_get_path (g);
  if (r == NULL)
    return make_error (retbuff, "get_path");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  return 0;
}

int
run_get_pgroup (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_get_pgroup (g);
  if (r == -1)
    return make_error (retbuff, "get_pgroup");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_get_smp (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_get_smp (g);
  if (r == -1)
    return make_error (retbuff, "get_smp");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_get_sockdir (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char *r;

  r = guestfs_get_sockdir (g);
  if (r == NULL)
    return make_error (retbuff, "get_sockdir");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_get_trace (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_get_trace (g);
  if (r == -1)
    return make_error (retbuff, "get_trace");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_hivex_node_get_child (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t nodeh;
  if (decode_int64 (buff, idx, &nodeh) != 0) return -1;
  CLEANUP_FREE char *name;
  if (decode_string (buff, idx, &name) != 0) return -1;
  int64_t r;

  r = guestfs_hivex_node_get_child (g, nodeh, name);
  if (r == -1)
    return make_error (retbuff, "hivex_node_get_child");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_hivex_node_set_value (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t nodeh;
  if (decode_int64 (buff, idx, &nodeh) != 0) return -1;
  CLEANUP_FREE char *key;
  if (decode_string (buff, idx, &key) != 0) return -1;
  int64_t t;
  if (decode_int64 (buff, idx, &t) != 0) return -1;
  CLEANUP_FREE char *val;
  size_t val_size;
  if (decode_binary (buff, idx, &val, &val_size) != 0) return -1;
  int r;

  r = guestfs_hivex_node_set_value (g, nodeh, key, t, val, val_size);
  if (r == -1)
    return make_error (retbuff, "hivex_node_set_value");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_hivex_value_key (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t valueh;
  if (decode_int64 (buff, idx, &valueh) != 0) return -1;
  char *r;

  r = guestfs_hivex_value_key (g, valueh);
  if (r == NULL)
    return make_error (retbuff, "hivex_value_key");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_hivex_value_type (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t valueh;
  if (decode_int64 (buff, idx, &valueh) != 0) return -1;
  int64_t r;

  r = guestfs_hivex_value_type (g, valueh);
  if (r == -1)
    return make_error (retbuff, "hivex_value_type");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_inspect_get_distro (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char *r;

  r = guestfs_inspect_get_distro (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_distro");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_inspect_get_filesystems (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char **r;

  r = guestfs_inspect_get_filesystems (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_filesystems");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_inspect_get_minor_version (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  int r;

  r = guestfs_inspect_get_minor_version (g, root);
  if (r == -1)
    return make_error (retbuff, "inspect_get_minor_version");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_inspect_get_package_format (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char *r;

  r = guestfs_inspect_get_package_format (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_package_format");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_inspect_get_product_variant (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char *r;

  r = guestfs_inspect_get_product_variant (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_product_variant");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_inspect_get_windows_software_hive (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char *r;

  r = guestfs_inspect_get_windows_software_hive (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_windows_software_hive");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_inspect_list_applications (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  struct guestfs_application_list *r;

  r = guestfs_inspect_list_applications (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_list_applications");

  if (make_application_list (retbuff, r) != 0) return -1;
  guestfs_free_application_list (r);
  return 0;
}

int
run_inspect_os (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_inspect_os (g);
  if (r == NULL)
    return make_error (retbuff, "inspect_os");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_internal_test_rboolerr (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_internal_test_rboolerr (g);
  if (r == -1)
    return make_error (retbuff, "internal_test_rboolerr");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_internal_test_rstring (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *val;
  if (decode_string (buff, idx, &val) != 0) return -1;
  char *r;

  r = guestfs_internal_test_rstring (g, val);
  if (r == NULL)
    return make_error (retbuff, "internal_test_rstring");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_internal_test_rstructerr (ei_x_buff *retbuff, const char *buff, int *idx)
{
  struct guestfs_lvm_pv *r;

  r = guestfs_internal_test_rstructerr (g);
  if (r == NULL)
    return make_error (retbuff, "internal_test_rstructerr");

  if (make_lvm_pv (retbuff, r) != 0) return -1;
  guestfs_free_lvm_pv (r);
  return 0;
}

int
run_journal_get (ei_x_buff *retbuff, const char *buff, int *idx)
{
  struct guestfs_xattr_list *r;

  r = guestfs_journal_get (g);
  if (r == NULL)
    return make_error (retbuff, "journal_get");

  if (make_xattr_list (retbuff, r) != 0) return -1;
  guestfs_free_xattr_list (r);
  return 0;
}

int
run_journal_get_data_threshold (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t r;

  r = guestfs_journal_get_data_threshold (g);
  if (r == -1)
    return make_error (retbuff, "journal_get_data_threshold");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_ldmtool_diskgroup_name (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *diskgroup;
  if (decode_string (buff, idx, &diskgroup) != 0) return -1;
  char *r;

  r = guestfs_ldmtool_diskgroup_name (g, diskgroup);
  if (r == NULL)
    return make_error (retbuff, "ldmtool_diskgroup_name");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_ldmtool_diskgroup_volumes (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *diskgroup;
  if (decode_string (buff, idx, &diskgroup) != 0) return -1;
  char **r;

  r = guestfs_ldmtool_diskgroup_volumes (g, diskgroup);
  if (r == NULL)
    return make_error (retbuff, "ldmtool_diskgroup_volumes");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_ll (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *directory;
  if (decode_string (buff, idx, &directory) != 0) return -1;
  char *r;

  r = guestfs_ll (g, directory);
  if (r == NULL)
    return make_error (retbuff, "ll");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_ln_f (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *target;
  if (decode_string (buff, idx, &target) != 0) return -1;
  CLEANUP_FREE char *linkname;
  if (decode_string (buff, idx, &linkname) != 0) return -1;
  int r;

  r = guestfs_ln_f (g, target, linkname);
  if (r == -1)
    return make_error (retbuff, "ln_f");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_ln_s (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *target;
  if (decode_string (buff, idx, &target) != 0) return -1;
  CLEANUP_FREE char *linkname;
  if (decode_string (buff, idx, &linkname) != 0) return -1;
  int r;

  r = guestfs_ln_s (g, target, linkname);
  if (r == -1)
    return make_error (retbuff, "ln_s");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_lremovexattr (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *xattr;
  if (decode_string (buff, idx, &xattr) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_lremovexattr (g, xattr, path);
  if (r == -1)
    return make_error (retbuff, "lremovexattr");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_lstatnslist (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  CLEANUP_FREE_STRING_LIST char **names;
  if (decode_string_list (buff, idx, &names) != 0) return -1;
  struct guestfs_statns_list *r;

  r = guestfs_lstatnslist (g, path, names);
  if (r == NULL)
    return make_error (retbuff, "lstatnslist");

  if (make_statns_list (retbuff, r) != 0) return -1;
  guestfs_free_statns_list (r);
  return 0;
}

int
run_luks_close (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_luks_close (g, device);
  if (r == -1)
    return make_error (retbuff, "luks_close");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_lvremove (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_lvremove (g, device);
  if (r == -1)
    return make_error (retbuff, "lvremove");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_md_stop (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *md;
  if (decode_string (buff, idx, &md) != 0) return -1;
  int r;

  r = guestfs_md_stop (g, md);
  if (r == -1)
    return make_error (retbuff, "md_stop");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mkfs_btrfs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE_STRING_LIST char **devices;
  if (decode_string_list (buff, idx, &devices) != 0) return -1;

  struct guestfs_mkfs_btrfs_argv optargs_s = { .bitmask = 0 };
  struct guestfs_mkfs_btrfs_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "allocstart")) {
      optargs_s.bitmask |= GUESTFS_MKFS_BTRFS_ALLOCSTART_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.allocstart) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "bytecount")) {
      optargs_s.bitmask |= GUESTFS_MKFS_BTRFS_BYTECOUNT_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.bytecount) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "datatype")) {
      optargs_s.bitmask |= GUESTFS_MKFS_BTRFS_DATATYPE_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.datatype) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "leafsize")) {
      optargs_s.bitmask |= GUESTFS_MKFS_BTRFS_LEAFSIZE_BITMASK;
      if (decode_int (buff, idx, &optargs_s.leafsize) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "label")) {
      optargs_s.bitmask |= GUESTFS_MKFS_BTRFS_LABEL_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.label) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "metadata")) {
      optargs_s.bitmask |= GUESTFS_MKFS_BTRFS_METADATA_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.metadata) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "nodesize")) {
      optargs_s.bitmask |= GUESTFS_MKFS_BTRFS_NODESIZE_BITMASK;
      if (decode_int (buff, idx, &optargs_s.nodesize) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "sectorsize")) {
      optargs_s.bitmask |= GUESTFS_MKFS_BTRFS_SECTORSIZE_BITMASK;
      if (decode_int (buff, idx, &optargs_s.sectorsize) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "mkfs_btrfs", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_mkfs_btrfs_argv (g, devices, optargs);
  if ((optargs_s.bitmask & GUESTFS_MKFS_BTRFS_DATATYPE_BITMASK))
    free ((char *) optargs_s.datatype);
  if ((optargs_s.bitmask & GUESTFS_MKFS_BTRFS_LABEL_BITMASK))
    free ((char *) optargs_s.label);
  if ((optargs_s.bitmask & GUESTFS_MKFS_BTRFS_METADATA_BITMASK))
    free ((char *) optargs_s.metadata);
  if (r == -1)
    return make_error (retbuff, "mkfs_btrfs");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mklost_and_found (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *mountpoint;
  if (decode_string (buff, idx, &mountpoint) != 0) return -1;
  int r;

  r = guestfs_mklost_and_found (g, mountpoint);
  if (r == -1)
    return make_error (retbuff, "mklost_and_found");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mkmountpoint (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *exemptpath;
  if (decode_string (buff, idx, &exemptpath) != 0) return -1;
  int r;

  r = guestfs_mkmountpoint (g, exemptpath);
  if (r == -1)
    return make_error (retbuff, "mkmountpoint");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mkswap_file (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_mkswap_file (g, path);
  if (r == -1)
    return make_error (retbuff, "mkswap_file");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mount_9p (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *mounttag;
  if (decode_string (buff, idx, &mounttag) != 0) return -1;
  CLEANUP_FREE char *mountpoint;
  if (decode_string (buff, idx, &mountpoint) != 0) return -1;

  struct guestfs_mount_9p_argv optargs_s = { .bitmask = 0 };
  struct guestfs_mount_9p_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "options")) {
      optargs_s.bitmask |= GUESTFS_MOUNT_9P_OPTIONS_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.options) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "mount_9p", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_mount_9p_argv (g, mounttag, mountpoint, optargs);
  if ((optargs_s.bitmask & GUESTFS_MOUNT_9P_OPTIONS_BITMASK))
    free ((char *) optargs_s.options);
  if (r == -1)
    return make_error (retbuff, "mount_9p");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mountable_device (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *mountable;
  if (decode_string (buff, idx, &mountable) != 0) return -1;
  char *r;

  r = guestfs_mountable_device (g, mountable);
  if (r == NULL)
    return make_error (retbuff, "mountable_device");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_mv (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *src;
  if (decode_string (buff, idx, &src) != 0) return -1;
  CLEANUP_FREE char *dest;
  if (decode_string (buff, idx, &dest) != 0) return -1;
  int r;

  r = guestfs_mv (g, src, dest);
  if (r == -1)
    return make_error (retbuff, "mv");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_ntfsresize (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;

  struct guestfs_ntfsresize_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_ntfsresize_opts_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "size")) {
      optargs_s.bitmask |= GUESTFS_NTFSRESIZE_OPTS_SIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.size) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "force")) {
      optargs_s.bitmask |= GUESTFS_NTFSRESIZE_OPTS_FORCE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.force) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "ntfsresize", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_ntfsresize_opts_argv (g, device, optargs);
  if (r == -1)
    return make_error (retbuff, "ntfsresize");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_disk (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *parttype;
  if (decode_string (buff, idx, &parttype) != 0) return -1;
  int r;

  r = guestfs_part_disk (g, device, parttype);
  if (r == -1)
    return make_error (retbuff, "part_disk");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_expand_gpt (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_part_expand_gpt (g, device);
  if (r == -1)
    return make_error (retbuff, "part_expand_gpt");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_get_parttype (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  char *r;

  r = guestfs_part_get_parttype (g, device);
  if (r == NULL)
    return make_error (retbuff, "part_get_parttype");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_pvcreate (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_pvcreate (g, device);
  if (r == -1)
    return make_error (retbuff, "pvcreate");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_pvs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char **r;

  r = guestfs_pvs (g);
  if (r == NULL)
    return make_error (retbuff, "pvs");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_pwrite (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  CLEANUP_FREE char *content;
  size_t content_size;
  if (decode_binary (buff, idx, &content, &content_size) != 0) return -1;
  int64_t offset;
  if (decode_int64 (buff, idx, &offset) != 0) return -1;
  int r;

  r = guestfs_pwrite (g, path, content, content_size, offset);
  if (r == -1)
    return make_error (retbuff, "pwrite");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_read_file (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char *r;
  size_t size;

  r = guestfs_read_file (g, path, &size);
  if (r == NULL)
    return make_error (retbuff, "read_file");

  if (ei_x_encode_binary (retbuff, r, size) != 0) return -1;
  free (r);
  return 0;
}

int
run_rename (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *oldpath;
  if (decode_string (buff, idx, &oldpath) != 0) return -1;
  CLEANUP_FREE char *newpath;
  if (decode_string (buff, idx, &newpath) != 0) return -1;
  int r;

  r = guestfs_rename (g, oldpath, newpath);
  if (r == -1)
    return make_error (retbuff, "rename");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_resize2fs_M (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_resize2fs_M (g, device);
  if (r == -1)
    return make_error (retbuff, "resize2fs_M");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_rm_rf (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_rm_rf (g, path);
  if (r == -1)
    return make_error (retbuff, "rm_rf");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_scrub_file (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *file;
  if (decode_string (buff, idx, &file) != 0) return -1;
  int r;

  r = guestfs_scrub_file (g, file);
  if (r == -1)
    return make_error (retbuff, "scrub_file");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_append (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *append;
  char append_opt[MAXATOMLEN];
  if (ei_decode_atom(buff, idx, append_opt) == 0) {
    if (atom_equals (append_opt, "undefined"))
      append = NULL;
    else
      append = append_opt;
  } else {
    if (decode_string (buff, idx, &append) != 0) return -1;
  }
  int r;

  r = guestfs_set_append (g, append);
  if (r == -1)
    return make_error (retbuff, "set_append");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_backend (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *backend;
  if (decode_string (buff, idx, &backend) != 0) return -1;
  int r;

  r = guestfs_set_backend (g, backend);
  if (r == -1)
    return make_error (retbuff, "set_backend");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_direct (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int direct;
  if (decode_bool (buff, idx, &direct) != 0) return -1;
  int r;

  r = guestfs_set_direct (g, direct);
  if (r == -1)
    return make_error (retbuff, "set_direct");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_memsize (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int memsize;
  if (decode_int (buff, idx, &memsize) != 0) return -1;
  int r;

  r = guestfs_set_memsize (g, memsize);
  if (r == -1)
    return make_error (retbuff, "set_memsize");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_program (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *program;
  if (decode_string (buff, idx, &program) != 0) return -1;
  int r;

  r = guestfs_set_program (g, program);
  if (r == -1)
    return make_error (retbuff, "set_program");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_selinux (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int selinux;
  if (decode_bool (buff, idx, &selinux) != 0) return -1;
  int r;

  r = guestfs_set_selinux (g, selinux);
  if (r == -1)
    return make_error (retbuff, "set_selinux");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_setxattr (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *xattr;
  if (decode_string (buff, idx, &xattr) != 0) return -1;
  CLEANUP_FREE char *val;
  if (decode_string (buff, idx, &val) != 0) return -1;
  int vallen;
  if (decode_int (buff, idx, &vallen) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_setxattr (g, xattr, val, vallen, path);
  if (r == -1)
    return make_error (retbuff, "setxattr");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_sfdisk_l (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  char *r;

  r = guestfs_sfdisk_l (g, device);
  if (r == NULL)
    return make_error (retbuff, "sfdisk_l");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_umount_local (ei_x_buff *retbuff, const char *buff, int *idx)
{

  struct guestfs_umount_local_argv optargs_s = { .bitmask = 0 };
  struct guestfs_umount_local_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "retry")) {
      optargs_s.bitmask |= GUESTFS_UMOUNT_LOCAL_RETRY_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.retry) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "umount_local", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_umount_local_argv (g, optargs);
  if (r == -1)
    return make_error (retbuff, "umount_local");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_vfs_label (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *mountable;
  if (decode_string (buff, idx, &mountable) != 0) return -1;
  char *r;

  r = guestfs_vfs_label (g, mountable);
  if (r == NULL)
    return make_error (retbuff, "vfs_label");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_vg_activate_all (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int activate;
  if (decode_bool (buff, idx, &activate) != 0) return -1;
  int r;

  r = guestfs_vg_activate_all (g, activate);
  if (r == -1)
    return make_error (retbuff, "vg_activate_all");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_vgchange_uuid_all (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_vgchange_uuid_all (g);
  if (r == -1)
    return make_error (retbuff, "vgchange_uuid_all");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_vgmeta (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *vgname;
  if (decode_string (buff, idx, &vgname) != 0) return -1;
  char *r;
  size_t size;

  r = guestfs_vgmeta (g, vgname, &size);
  if (r == NULL)
    return make_error (retbuff, "vgmeta");

  if (ei_x_encode_binary (retbuff, r, size) != 0) return -1;
  free (r);
  return 0;
}

int
run_vgrename (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *volgroup;
  if (decode_string (buff, idx, &volgroup) != 0) return -1;
  CLEANUP_FREE char *newvolgroup;
  if (decode_string (buff, idx, &newvolgroup) != 0) return -1;
  int r;

  r = guestfs_vgrename (g, volgroup, newvolgroup);
  if (r == -1)
    return make_error (retbuff, "vgrename");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_vguuid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *vgname;
  if (decode_string (buff, idx, &vgname) != 0) return -1;
  char *r;

  r = guestfs_vguuid (g, vgname);
  if (r == NULL)
    return make_error (retbuff, "vguuid");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_wc_w (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_wc_w (g, path);
  if (r == -1)
    return make_error (retbuff, "wc_w");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_write (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  CLEANUP_FREE char *content;
  size_t content_size;
  if (decode_binary (buff, idx, &content, &content_size) != 0) return -1;
  int r;

  r = guestfs_write (g, path, content, content_size);
  if (r == -1)
    return make_error (retbuff, "write");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_zfgrepi (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *pattern;
  if (decode_string (buff, idx, &pattern) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_zfgrepi (g, pattern, path);
  if (r == NULL)
    return make_error (retbuff, "zfgrepi");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}
