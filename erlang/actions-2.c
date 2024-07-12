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
run_add_drive (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;

  struct guestfs_add_drive_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_add_drive_opts_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "readonly")) {
      optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_READONLY_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.readonly) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "format")) {
      optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_FORMAT_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.format) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "iface")) {
      optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_IFACE_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.iface) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "name")) {
      optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_NAME_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.name) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "label")) {
      optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_LABEL_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.label) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "protocol")) {
      optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_PROTOCOL_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.protocol) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "server")) {
      optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_SERVER_BITMASK;
      if (decode_string_list (buff, idx, (char ***) &optargs_s.server) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "username")) {
      optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_USERNAME_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.username) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "secret")) {
      optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_SECRET_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.secret) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "cachemode")) {
      optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_CACHEMODE_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.cachemode) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "discard")) {
      optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_DISCARD_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.discard) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "copyonread")) {
      optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_COPYONREAD_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.copyonread) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "blocksize")) {
      optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_BLOCKSIZE_BITMASK;
      if (decode_int (buff, idx, &optargs_s.blocksize) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "add_drive", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_add_drive_opts_argv (g, filename, optargs);
  if ((optargs_s.bitmask & GUESTFS_ADD_DRIVE_OPTS_FORMAT_BITMASK))
    free ((char *) optargs_s.format);
  if ((optargs_s.bitmask & GUESTFS_ADD_DRIVE_OPTS_IFACE_BITMASK))
    free ((char *) optargs_s.iface);
  if ((optargs_s.bitmask & GUESTFS_ADD_DRIVE_OPTS_NAME_BITMASK))
    free ((char *) optargs_s.name);
  if ((optargs_s.bitmask & GUESTFS_ADD_DRIVE_OPTS_LABEL_BITMASK))
    free ((char *) optargs_s.label);
  if ((optargs_s.bitmask & GUESTFS_ADD_DRIVE_OPTS_PROTOCOL_BITMASK))
    free ((char *) optargs_s.protocol);
  if ((optargs_s.bitmask & GUESTFS_ADD_DRIVE_OPTS_SERVER_BITMASK))
    guestfs_int_free_string_list ((char **) optargs_s.server);
  if ((optargs_s.bitmask & GUESTFS_ADD_DRIVE_OPTS_USERNAME_BITMASK))
    free ((char *) optargs_s.username);
  if ((optargs_s.bitmask & GUESTFS_ADD_DRIVE_OPTS_SECRET_BITMASK))
    free ((char *) optargs_s.secret);
  if ((optargs_s.bitmask & GUESTFS_ADD_DRIVE_OPTS_CACHEMODE_BITMASK))
    free ((char *) optargs_s.cachemode);
  if ((optargs_s.bitmask & GUESTFS_ADD_DRIVE_OPTS_DISCARD_BITMASK))
    free ((char *) optargs_s.discard);
  if (r == -1)
    return make_error (retbuff, "add_drive");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_add_drive_scratch (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t size;
  if (decode_int64 (buff, idx, &size) != 0) return -1;

  struct guestfs_add_drive_scratch_argv optargs_s = { .bitmask = 0 };
  struct guestfs_add_drive_scratch_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "name")) {
      optargs_s.bitmask |= GUESTFS_ADD_DRIVE_SCRATCH_NAME_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.name) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "label")) {
      optargs_s.bitmask |= GUESTFS_ADD_DRIVE_SCRATCH_LABEL_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.label) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "blocksize")) {
      optargs_s.bitmask |= GUESTFS_ADD_DRIVE_SCRATCH_BLOCKSIZE_BITMASK;
      if (decode_int (buff, idx, &optargs_s.blocksize) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "add_drive_scratch", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_add_drive_scratch_argv (g, size, optargs);
  if ((optargs_s.bitmask & GUESTFS_ADD_DRIVE_SCRATCH_NAME_BITMASK))
    free ((char *) optargs_s.name);
  if ((optargs_s.bitmask & GUESTFS_ADD_DRIVE_SCRATCH_LABEL_BITMASK))
    free ((char *) optargs_s.label);
  if (r == -1)
    return make_error (retbuff, "add_drive_scratch");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_aug_label (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *augpath;
  if (decode_string (buff, idx, &augpath) != 0) return -1;
  char *r;

  r = guestfs_aug_label (g, augpath);
  if (r == NULL)
    return make_error (retbuff, "aug_label");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_blkdiscardzeroes (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_blkdiscardzeroes (g, device);
  if (r == -1)
    return make_error (retbuff, "blkdiscardzeroes");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_blockdev_getsize64 (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int64_t r;

  r = guestfs_blockdev_getsize64 (g, device);
  if (r == -1)
    return make_error (retbuff, "blockdev_getsize64");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_blockdev_getss (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_blockdev_getss (g, device);
  if (r == -1)
    return make_error (retbuff, "blockdev_getss");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_blockdev_rereadpt (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_blockdev_rereadpt (g, device);
  if (r == -1)
    return make_error (retbuff, "blockdev_rereadpt");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_balance_cancel (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_btrfs_balance_cancel (g, path);
  if (r == -1)
    return make_error (retbuff, "btrfs_balance_cancel");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_qgroup_limit (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *subvolume;
  if (decode_string (buff, idx, &subvolume) != 0) return -1;
  int64_t size;
  if (decode_int64 (buff, idx, &size) != 0) return -1;
  int r;

  r = guestfs_btrfs_qgroup_limit (g, subvolume, size);
  if (r == -1)
    return make_error (retbuff, "btrfs_qgroup_limit");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_quota_rescan (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *fs;
  if (decode_string (buff, idx, &fs) != 0) return -1;
  int r;

  r = guestfs_btrfs_quota_rescan (g, fs);
  if (r == -1)
    return make_error (retbuff, "btrfs_quota_rescan");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_set_seeding (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int seeding;
  if (decode_bool (buff, idx, &seeding) != 0) return -1;
  int r;

  r = guestfs_btrfs_set_seeding (g, device, seeding);
  if (r == -1)
    return make_error (retbuff, "btrfs_set_seeding");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_btrfs_subvolume_show (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *subvolume;
  if (decode_string (buff, idx, &subvolume) != 0) return -1;
  char **r;

  r = guestfs_btrfs_subvolume_show (g, subvolume);
  if (r == NULL)
    return make_error (retbuff, "btrfs_subvolume_show");

  if (make_table (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_chown (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int owner;
  if (decode_int (buff, idx, &owner) != 0) return -1;
  int group;
  if (decode_int (buff, idx, &group) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_chown (g, owner, group, path);
  if (r == -1)
    return make_error (retbuff, "chown");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_command (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE_STRING_LIST char **arguments;
  if (decode_string_list (buff, idx, &arguments) != 0) return -1;
  char *r;

  r = guestfs_command (g, arguments);
  if (r == NULL)
    return make_error (retbuff, "command");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_copy_device_to_file (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *src;
  if (decode_string (buff, idx, &src) != 0) return -1;
  CLEANUP_FREE char *dest;
  if (decode_string (buff, idx, &dest) != 0) return -1;

  struct guestfs_copy_device_to_file_argv optargs_s = { .bitmask = 0 };
  struct guestfs_copy_device_to_file_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "srcoffset")) {
      optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_FILE_SRCOFFSET_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.srcoffset) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "destoffset")) {
      optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_FILE_DESTOFFSET_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.destoffset) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "size")) {
      optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_FILE_SIZE_BITMASK;
      if (decode_int64 (buff, idx, &optargs_s.size) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "sparse")) {
      optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_FILE_SPARSE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.sparse) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "append")) {
      optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_FILE_APPEND_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.append) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "copy_device_to_file", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_copy_device_to_file_argv (g, src, dest, optargs);
  if (r == -1)
    return make_error (retbuff, "copy_device_to_file");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_cp_r (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *src;
  if (decode_string (buff, idx, &src) != 0) return -1;
  CLEANUP_FREE char *dest;
  if (decode_string (buff, idx, &dest) != 0) return -1;
  int r;

  r = guestfs_cp_r (g, src, dest);
  if (r == -1)
    return make_error (retbuff, "cp_r");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_debug (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *subcmd;
  if (decode_string (buff, idx, &subcmd) != 0) return -1;
  CLEANUP_FREE_STRING_LIST char **extraargs;
  if (decode_string_list (buff, idx, &extraargs) != 0) return -1;
  char *r;

  r = guestfs_debug (g, subcmd, extraargs);
  if (r == NULL)
    return make_error (retbuff, "debug");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_drop_caches (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int whattodrop;
  if (decode_int (buff, idx, &whattodrop) != 0) return -1;
  int r;

  r = guestfs_drop_caches (g, whattodrop);
  if (r == -1)
    return make_error (retbuff, "drop_caches");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_egrep (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *regex;
  if (decode_string (buff, idx, &regex) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_egrep (g, regex, path);
  if (r == NULL)
    return make_error (retbuff, "egrep");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_file_architecture (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  char *r;

  r = guestfs_file_architecture (g, filename);
  if (r == NULL)
    return make_error (retbuff, "file_architecture");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_get_backend (ei_x_buff *retbuff, const char *buff, int *idx)
{
  char *r;

  r = guestfs_get_backend (g);
  if (r == NULL)
    return make_error (retbuff, "get_backend");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_get_e2attrs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *file;
  if (decode_string (buff, idx, &file) != 0) return -1;
  char *r;

  r = guestfs_get_e2attrs (g, file);
  if (r == NULL)
    return make_error (retbuff, "get_e2attrs");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_get_e2generation (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *file;
  if (decode_string (buff, idx, &file) != 0) return -1;
  int64_t r;

  r = guestfs_get_e2generation (g, file);
  if (r == -1)
    return make_error (retbuff, "get_e2generation");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_glob_expand (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *pattern;
  if (decode_string (buff, idx, &pattern) != 0) return -1;

  struct guestfs_glob_expand_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_glob_expand_opts_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "directoryslash")) {
      optargs_s.bitmask |= GUESTFS_GLOB_EXPAND_OPTS_DIRECTORYSLASH_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.directoryslash) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "glob_expand", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  char **r;

  r = guestfs_glob_expand_opts_argv (g, pattern, optargs);
  if (r == NULL)
    return make_error (retbuff, "glob_expand");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_grub_install (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_grub_install (g, root, device);
  if (r == -1)
    return make_error (retbuff, "grub_install");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_hivex_node_add_child (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t parent;
  if (decode_int64 (buff, idx, &parent) != 0) return -1;
  CLEANUP_FREE char *name;
  if (decode_string (buff, idx, &name) != 0) return -1;
  int64_t r;

  r = guestfs_hivex_node_add_child (g, parent, name);
  if (r == -1)
    return make_error (retbuff, "hivex_node_add_child");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_hivex_node_get_value (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int64_t nodeh;
  if (decode_int64 (buff, idx, &nodeh) != 0) return -1;
  CLEANUP_FREE char *key;
  if (decode_string (buff, idx, &key) != 0) return -1;
  int64_t r;

  r = guestfs_hivex_node_get_value (g, nodeh, key);
  if (r == -1)
    return make_error (retbuff, "hivex_node_get_value");

  if (ei_x_encode_longlong (retbuff, r) != 0) return -1;
  return 0;
}

int
run_inspect_get_arch (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char *r;

  r = guestfs_inspect_get_arch (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_arch");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_inspect_get_drive_mappings (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char **r;

  r = guestfs_inspect_get_drive_mappings (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_drive_mappings");

  if (make_table (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_inspect_get_windows_current_control_set (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char *r;

  r = guestfs_inspect_get_windows_current_control_set (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_windows_current_control_set");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_inspect_get_windows_systemroot (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *root;
  if (decode_string (buff, idx, &root) != 0) return -1;
  char *r;

  r = guestfs_inspect_get_windows_systemroot (g, root);
  if (r == NULL)
    return make_error (retbuff, "inspect_get_windows_systemroot");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_internal_test_close_output (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_internal_test_close_output (g);
  if (r == -1)
    return make_error (retbuff, "internal_test_close_output");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_internal_test_rbufferout (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *val;
  if (decode_string (buff, idx, &val) != 0) return -1;
  char *r;
  size_t size;

  r = guestfs_internal_test_rbufferout (g, val, &size);
  if (r == NULL)
    return make_error (retbuff, "internal_test_rbufferout");

  if (ei_x_encode_binary (retbuff, r, size) != 0) return -1;
  free (r);
  return 0;
}

int
run_internal_test_rconstoptstringerr (ei_x_buff *retbuff, const char *buff, int *idx)
{
  const char *r;

  r = guestfs_internal_test_rconstoptstringerr (g);

  if (r) {
    if (ei_x_encode_string (retbuff, r) != 0) return -1;
  } else {
    if (ei_x_encode_atom (retbuff, "undefined") != 0) return -1;
  }
  return 0;
}

int
run_internal_test_rinterr (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_internal_test_rinterr (g);
  if (r == -1)
    return make_error (retbuff, "internal_test_rinterr");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_internal_test_set_output (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  int r;

  r = guestfs_internal_test_set_output (g, filename);
  if (r == -1)
    return make_error (retbuff, "internal_test_set_output");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_is_chardev (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;

  struct guestfs_is_chardev_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_is_chardev_opts_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "followsymlinks")) {
      optargs_s.bitmask |= GUESTFS_IS_CHARDEV_OPTS_FOLLOWSYMLINKS_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.followsymlinks) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "is_chardev", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_is_chardev_opts_argv (g, path, optargs);
  if (r == -1)
    return make_error (retbuff, "is_chardev");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_is_launching (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_is_launching (g);
  if (r == -1)
    return make_error (retbuff, "is_launching");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_is_lv (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *mountable;
  if (decode_string (buff, idx, &mountable) != 0) return -1;
  int r;

  r = guestfs_is_lv (g, mountable);
  if (r == -1)
    return make_error (retbuff, "is_lv");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_is_socket (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;

  struct guestfs_is_socket_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_is_socket_opts_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "followsymlinks")) {
      optargs_s.bitmask |= GUESTFS_IS_SOCKET_OPTS_FOLLOWSYMLINKS_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.followsymlinks) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "is_socket", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_is_socket_opts_argv (g, path, optargs);
  if (r == -1)
    return make_error (retbuff, "is_socket");

  if (make_bool (retbuff, r) != 0) return -1;
  return 0;
}

int
run_journal_open (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *directory;
  if (decode_string (buff, idx, &directory) != 0) return -1;
  int r;

  r = guestfs_journal_open (g, directory);
  if (r == -1)
    return make_error (retbuff, "journal_open");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_kill_subprocess (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_kill_subprocess (g);
  if (r == -1)
    return make_error (retbuff, "kill_subprocess");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_ldmtool_scan_devices (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE_STRING_LIST char **devices;
  if (decode_string_list (buff, idx, &devices) != 0) return -1;
  char **r;

  r = guestfs_ldmtool_scan_devices (g, devices);
  if (r == NULL)
    return make_error (retbuff, "ldmtool_scan_devices");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_lsetxattr (ei_x_buff *retbuff, const char *buff, int *idx)
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

  r = guestfs_lsetxattr (g, xattr, val, vallen, path);
  if (r == -1)
    return make_error (retbuff, "lsetxattr");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_luks_kill_slot (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *key;
  if (decode_string (buff, idx, &key) != 0) return -1;
  int keyslot;
  if (decode_int (buff, idx, &keyslot) != 0) return -1;
  int r;

  r = guestfs_luks_kill_slot (g, device, key, keyslot);
  if (r == -1)
    return make_error (retbuff, "luks_kill_slot");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_lvm_scan (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int activate;
  if (decode_bool (buff, idx, &activate) != 0) return -1;
  int r;

  r = guestfs_lvm_scan (g, activate);
  if (r == -1)
    return make_error (retbuff, "lvm_scan");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mkdir (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_mkdir (g, path);
  if (r == -1)
    return make_error (retbuff, "mkdir");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mkfifo (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int mode;
  if (decode_int (buff, idx, &mode) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  int r;

  r = guestfs_mkfifo (g, mode, path);
  if (r == -1)
    return make_error (retbuff, "mkfifo");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_mksquashfs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;

  struct guestfs_mksquashfs_argv optargs_s = { .bitmask = 0 };
  struct guestfs_mksquashfs_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "compress")) {
      optargs_s.bitmask |= GUESTFS_MKSQUASHFS_COMPRESS_BITMASK;
      if (decode_string (buff, idx, (char **) &optargs_s.compress) != 0) return -1;
    }
    else
    if (atom_equals (hd_name, "excludes")) {
      optargs_s.bitmask |= GUESTFS_MKSQUASHFS_EXCLUDES_BITMASK;
      if (decode_string_list (buff, idx, (char ***) &optargs_s.excludes) != 0) return -1;
    }
    else
      return unknown_optarg (retbuff, "mksquashfs", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_mksquashfs_argv (g, path, filename, optargs);
  if ((optargs_s.bitmask & GUESTFS_MKSQUASHFS_COMPRESS_BITMASK))
    free ((char *) optargs_s.compress);
  if ((optargs_s.bitmask & GUESTFS_MKSQUASHFS_EXCLUDES_BITMASK))
    guestfs_int_free_string_list ((char **) optargs_s.excludes);
  if (r == -1)
    return make_error (retbuff, "mksquashfs");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_modprobe (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *modulename;
  if (decode_string (buff, idx, &modulename) != 0) return -1;
  int r;

  r = guestfs_modprobe (g, modulename);
  if (r == -1)
    return make_error (retbuff, "modprobe");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_ntfscat_i (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int64_t inode;
  if (decode_int64 (buff, idx, &inode) != 0) return -1;
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  int r;

  r = guestfs_ntfscat_i (g, device, inode, filename);
  if (r == -1)
    return make_error (retbuff, "ntfscat_i");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_parse_environment (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_parse_environment (g);
  if (r == -1)
    return make_error (retbuff, "parse_environment");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_get_disk_guid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  char *r;

  r = guestfs_part_get_disk_guid (g, device);
  if (r == NULL)
    return make_error (retbuff, "part_get_disk_guid");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_part_list (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  struct guestfs_partition_list *r;

  r = guestfs_part_list (g, device);
  if (r == NULL)
    return make_error (retbuff, "part_list");

  if (make_partition_list (retbuff, r) != 0) return -1;
  guestfs_free_partition_list (r);
  return 0;
}

int
run_part_set_bootable (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int partnum;
  if (decode_int (buff, idx, &partnum) != 0) return -1;
  int bootable;
  if (decode_bool (buff, idx, &bootable) != 0) return -1;
  int r;

  r = guestfs_part_set_bootable (g, device, partnum, bootable);
  if (r == -1)
    return make_error (retbuff, "part_set_bootable");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_set_gpt_attributes (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int partnum;
  if (decode_int (buff, idx, &partnum) != 0) return -1;
  int64_t attributes;
  if (decode_int64 (buff, idx, &attributes) != 0) return -1;
  int r;

  r = guestfs_part_set_gpt_attributes (g, device, partnum, attributes);
  if (r == -1)
    return make_error (retbuff, "part_set_gpt_attributes");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_set_gpt_guid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int partnum;
  if (decode_int (buff, idx, &partnum) != 0) return -1;
  CLEANUP_FREE char *guid;
  if (decode_string (buff, idx, &guid) != 0) return -1;
  int r;

  r = guestfs_part_set_gpt_guid (g, device, partnum, guid);
  if (r == -1)
    return make_error (retbuff, "part_set_gpt_guid");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_part_to_dev (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *partition;
  if (decode_string (buff, idx, &partition) != 0) return -1;
  char *r;

  r = guestfs_part_to_dev (g, partition);
  if (r == NULL)
    return make_error (retbuff, "part_to_dev");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_pvresize (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_pvresize (g, device);
  if (r == -1)
    return make_error (retbuff, "pvresize");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_pvs_full (ei_x_buff *retbuff, const char *buff, int *idx)
{
  struct guestfs_lvm_pv_list *r;

  r = guestfs_pvs_full (g);
  if (r == NULL)
    return make_error (retbuff, "pvs_full");

  if (make_lvm_pv_list (retbuff, r) != 0) return -1;
  guestfs_free_lvm_pv_list (r);
  return 0;
}

int
run_pwrite_device (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *content;
  size_t content_size;
  if (decode_binary (buff, idx, &content, &content_size) != 0) return -1;
  int64_t offset;
  if (decode_int64 (buff, idx, &offset) != 0) return -1;
  int r;

  r = guestfs_pwrite_device (g, device, content, content_size, offset);
  if (r == -1)
    return make_error (retbuff, "pwrite_device");

  if (ei_x_encode_long (retbuff, r) != 0) return -1;
  return 0;
}

int
run_readdir (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *dir;
  if (decode_string (buff, idx, &dir) != 0) return -1;
  struct guestfs_dirent_list *r;

  r = guestfs_readdir (g, dir);
  if (r == NULL)
    return make_error (retbuff, "readdir");

  if (make_dirent_list (retbuff, r) != 0) return -1;
  guestfs_free_dirent_list (r);
  return 0;
}

int
run_readlink (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char *r;

  r = guestfs_readlink (g, path);
  if (r == NULL)
    return make_error (retbuff, "readlink");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_resize2fs (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  int r;

  r = guestfs_resize2fs (g, device);
  if (r == -1)
    return make_error (retbuff, "resize2fs");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_rsync_in (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *remote;
  if (decode_string (buff, idx, &remote) != 0) return -1;
  CLEANUP_FREE char *dest;
  if (decode_string (buff, idx, &dest) != 0) return -1;

  struct guestfs_rsync_in_argv optargs_s = { .bitmask = 0 };
  struct guestfs_rsync_in_argv *optargs = &optargs_s;
  int optargsize;
  if (ei_decode_list_header (buff, idx, &optargsize) != 0) return -1;
  for (int i = 0; i < optargsize; i++) {
    int hd;
    if (ei_decode_tuple_header (buff, idx, &hd) != 0) return -1;
    char hd_name[MAXATOMLEN];
    if (ei_decode_atom (buff, idx, hd_name) != 0) return -1;

    if (atom_equals (hd_name, "archive")) {
      optargs_s.bitmask |= GUESTFS_RSYNC_IN_ARCHIVE_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.archive) != 0) return -1;;
    }
    else
    if (atom_equals (hd_name, "deletedest")) {
      optargs_s.bitmask |= GUESTFS_RSYNC_IN_DELETEDEST_BITMASK;
      if (decode_bool (buff, idx, &optargs_s.deletedest) != 0) return -1;;
    }
    else
      return unknown_optarg (retbuff, "rsync_in", hd_name);
  }
  if (optargsize > 0 && buff[*idx] == ERL_NIL_EXT)
    (*idx)++;

  int r;

  r = guestfs_rsync_in_argv (g, remote, dest, optargs);
  if (r == -1)
    return make_error (retbuff, "rsync_in");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_e2uuid (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  CLEANUP_FREE char *uuid;
  if (decode_string (buff, idx, &uuid) != 0) return -1;
  int r;

  r = guestfs_set_e2uuid (g, device, uuid);
  if (r == -1)
    return make_error (retbuff, "set_e2uuid");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_libvirt_requested_credential (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int index;
  if (decode_int (buff, idx, &index) != 0) return -1;
  CLEANUP_FREE char *cred;
  size_t cred_size;
  if (decode_binary (buff, idx, &cred, &cred_size) != 0) return -1;
  int r;

  r = guestfs_set_libvirt_requested_credential (g, index, cred, cred_size);
  if (r == -1)
    return make_error (retbuff, "set_libvirt_requested_credential");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_libvirt_supported_credentials (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE_STRING_LIST char **creds;
  if (decode_string_list (buff, idx, &creds) != 0) return -1;
  int r;

  r = guestfs_set_libvirt_supported_credentials (g, creds);
  if (r == -1)
    return make_error (retbuff, "set_libvirt_supported_credentials");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_path (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *searchpath;
  char searchpath_opt[MAXATOMLEN];
  if (ei_decode_atom(buff, idx, searchpath_opt) == 0) {
    if (atom_equals (searchpath_opt, "undefined"))
      searchpath = NULL;
    else
      searchpath = searchpath_opt;
  } else {
    if (decode_string (buff, idx, &searchpath) != 0) return -1;
  }
  int r;

  r = guestfs_set_path (g, searchpath);
  if (r == -1)
    return make_error (retbuff, "set_path");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_set_pgroup (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int pgroup;
  if (decode_bool (buff, idx, &pgroup) != 0) return -1;
  int r;

  r = guestfs_set_pgroup (g, pgroup);
  if (r == -1)
    return make_error (retbuff, "set_pgroup");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_sfdisk_disk_geometry (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *device;
  if (decode_string (buff, idx, &device) != 0) return -1;
  char *r;

  r = guestfs_sfdisk_disk_geometry (g, device);
  if (r == NULL)
    return make_error (retbuff, "sfdisk_disk_geometry");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_sh (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *command;
  if (decode_string (buff, idx, &command) != 0) return -1;
  char *r;

  r = guestfs_sh (g, command);
  if (r == NULL)
    return make_error (retbuff, "sh");

  if (ei_x_encode_string (retbuff, r) != 0) return -1;
  free (r);
  return 0;
}

int
run_statns (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  struct guestfs_statns *r;

  r = guestfs_statns (g, path);
  if (r == NULL)
    return make_error (retbuff, "statns");

  if (make_statns (retbuff, r) != 0) return -1;
  guestfs_free_statns (r);
  return 0;
}

int
run_swapon_label (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *label;
  if (decode_string (buff, idx, &label) != 0) return -1;
  int r;

  r = guestfs_swapon_label (g, label);
  if (r == -1)
    return make_error (retbuff, "swapon_label");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_txz_out (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *directory;
  if (decode_string (buff, idx, &directory) != 0) return -1;
  CLEANUP_FREE char *tarball;
  if (decode_string (buff, idx, &tarball) != 0) return -1;
  int r;

  r = guestfs_txz_out (g, directory, tarball);
  if (r == -1)
    return make_error (retbuff, "txz_out");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_umount_all (ei_x_buff *retbuff, const char *buff, int *idx)
{
  int r;

  r = guestfs_umount_all (g);
  if (r == -1)
    return make_error (retbuff, "umount_all");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_upload_offset (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *filename;
  if (decode_string (buff, idx, &filename) != 0) return -1;
  CLEANUP_FREE char *remotefilename;
  if (decode_string (buff, idx, &remotefilename) != 0) return -1;
  int64_t offset;
  if (decode_int64 (buff, idx, &offset) != 0) return -1;
  int r;

  r = guestfs_upload_offset (g, filename, remotefilename, offset);
  if (r == -1)
    return make_error (retbuff, "upload_offset");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_utsname (ei_x_buff *retbuff, const char *buff, int *idx)
{
  struct guestfs_utsname *r;

  r = guestfs_utsname (g);
  if (r == NULL)
    return make_error (retbuff, "utsname");

  if (make_utsname (retbuff, r) != 0) return -1;
  guestfs_free_utsname (r);
  return 0;
}

int
run_vgpvuuids (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *vgname;
  if (decode_string (buff, idx, &vgname) != 0) return -1;
  char **r;

  r = guestfs_vgpvuuids (g, vgname);
  if (r == NULL)
    return make_error (retbuff, "vgpvuuids");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}

int
run_write_append (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  CLEANUP_FREE char *content;
  size_t content_size;
  if (decode_binary (buff, idx, &content, &content_size) != 0) return -1;
  int r;

  r = guestfs_write_append (g, path, content, content_size);
  if (r == -1)
    return make_error (retbuff, "write_append");

  if (ei_x_encode_atom (retbuff, "ok") != 0) return -1;
  return 0;
}

int
run_yara_scan (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  struct guestfs_yara_detection_list *r;

  r = guestfs_yara_scan (g, path);
  if (r == NULL)
    return make_error (retbuff, "yara_scan");

  if (make_yara_detection_list (retbuff, r) != 0) return -1;
  guestfs_free_yara_detection_list (r);
  return 0;
}

int
run_zgrep (ei_x_buff *retbuff, const char *buff, int *idx)
{
  CLEANUP_FREE char *regex;
  if (decode_string (buff, idx, &regex) != 0) return -1;
  CLEANUP_FREE char *path;
  if (decode_string (buff, idx, &path) != 0) return -1;
  char **r;

  r = guestfs_zgrep (g, regex, path);
  if (r == NULL)
    return make_error (retbuff, "zgrep");

  if (make_string_list (retbuff, r) != 0) return -1;
  guestfs_int_free_string_list (r);
  return 0;
}
