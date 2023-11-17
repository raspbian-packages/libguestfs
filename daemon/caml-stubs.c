/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM THE FOLLOWING FILES:
 *          generator/daemon.ml
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

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <inttypes.h>
#include <errno.h>

#include <caml/alloc.h>
#include <caml/callback.h>
#include <caml/fail.h>
#include <caml/memory.h>
#include <caml/mlvalues.h>

#include "daemon.h"
#include "actions.h"
#include "daemon-c.h"

/* Implement RStruct ("partition", _). */
static guestfs_int_partition *
return_partition (value retv)
{
  CLEANUP_FREE_PARTITION guestfs_int_partition *ret = NULL;
  guestfs_int_partition *real_ret;
  value v;

  ret = calloc (1, sizeof (*ret));
  if (ret == NULL) {
    reply_with_perror ("calloc");
    return NULL;
  }

  v = Field (retv, 0);
  ret->part_num = Int32_val (v);
  v = Field (retv, 1);
  ret->part_start = Int64_val (v);
  v = Field (retv, 2);
  ret->part_end = Int64_val (v);
  v = Field (retv, 3);
  ret->part_size = Int64_val (v);

  real_ret = ret;
  ret = NULL;
  return real_ret;
}

/* Implement RStructList ("partition", _). */
static guestfs_int_partition_list *
return_partition_list (value retv)
{
  CLEANUP_FREE_PARTITION_LIST guestfs_int_partition_list *ret = NULL;
  guestfs_int_partition_list *real_ret;
  guestfs_int_partition *r;
  size_t i, len;
  value v, rv;

  /* Count the number of elements in the list. */
  rv = retv;
  len = 0;
  while (rv != Val_int (0)) {
    len++;
    rv = Field (rv, 1);
  }

  ret = calloc (1, sizeof *ret);
  if (ret == NULL) {
    reply_with_perror ("calloc");
    return NULL;
  }
  if (len > 0) {
    ret->guestfs_int_partition_list_val =
      calloc (len, sizeof (guestfs_int_partition));
    if (ret->guestfs_int_partition_list_val == NULL) {
      reply_with_perror ("calloc");
      return NULL;
    }
    ret->guestfs_int_partition_list_len = len;
  }

  rv = retv;
  for (i = 0; i < len; ++i) {
    v = Field (rv, 0);
    r = return_partition (v);
    if (r == NULL)
      return NULL;
    memcpy (&ret->guestfs_int_partition_list_val[i], r, sizeof (*r));
    free (r);
    rv = Field (rv, 1);
  }

  real_ret = ret;
  ret = NULL;
  return real_ret;
}

/* Implement RStruct ("application2", _). */
static guestfs_int_application2 *
return_application2 (value retv)
{
  CLEANUP_FREE_APPLICATION2 guestfs_int_application2 *ret = NULL;
  guestfs_int_application2 *real_ret;
  value v;

  ret = calloc (1, sizeof (*ret));
  if (ret == NULL) {
    reply_with_perror ("calloc");
    return NULL;
  }

  v = Field (retv, 0);
  ret->app2_name = strdup (String_val (v));
  if (ret->app2_name == NULL) return NULL;
  v = Field (retv, 1);
  ret->app2_display_name = strdup (String_val (v));
  if (ret->app2_display_name == NULL) return NULL;
  v = Field (retv, 2);
  ret->app2_epoch = Int32_val (v);
  v = Field (retv, 3);
  ret->app2_version = strdup (String_val (v));
  if (ret->app2_version == NULL) return NULL;
  v = Field (retv, 4);
  ret->app2_release = strdup (String_val (v));
  if (ret->app2_release == NULL) return NULL;
  v = Field (retv, 5);
  ret->app2_arch = strdup (String_val (v));
  if (ret->app2_arch == NULL) return NULL;
  v = Field (retv, 6);
  ret->app2_install_path = strdup (String_val (v));
  if (ret->app2_install_path == NULL) return NULL;
  v = Field (retv, 7);
  ret->app2_trans_path = strdup (String_val (v));
  if (ret->app2_trans_path == NULL) return NULL;
  v = Field (retv, 8);
  ret->app2_publisher = strdup (String_val (v));
  if (ret->app2_publisher == NULL) return NULL;
  v = Field (retv, 9);
  ret->app2_url = strdup (String_val (v));
  if (ret->app2_url == NULL) return NULL;
  v = Field (retv, 10);
  ret->app2_source_package = strdup (String_val (v));
  if (ret->app2_source_package == NULL) return NULL;
  v = Field (retv, 11);
  ret->app2_summary = strdup (String_val (v));
  if (ret->app2_summary == NULL) return NULL;
  v = Field (retv, 12);
  ret->app2_description = strdup (String_val (v));
  if (ret->app2_description == NULL) return NULL;
  v = Field (retv, 13);
  ret->app2_spare1 = strdup (String_val (v));
  if (ret->app2_spare1 == NULL) return NULL;
  v = Field (retv, 14);
  ret->app2_spare2 = strdup (String_val (v));
  if (ret->app2_spare2 == NULL) return NULL;
  v = Field (retv, 15);
  ret->app2_spare3 = strdup (String_val (v));
  if (ret->app2_spare3 == NULL) return NULL;
  v = Field (retv, 16);
  ret->app2_spare4 = strdup (String_val (v));
  if (ret->app2_spare4 == NULL) return NULL;

  real_ret = ret;
  ret = NULL;
  return real_ret;
}

/* Implement RStructList ("application2", _). */
static guestfs_int_application2_list *
return_application2_list (value retv)
{
  CLEANUP_FREE_APPLICATION2_LIST guestfs_int_application2_list *ret = NULL;
  guestfs_int_application2_list *real_ret;
  guestfs_int_application2 *r;
  size_t i, len;
  value v, rv;

  /* Count the number of elements in the list. */
  rv = retv;
  len = 0;
  while (rv != Val_int (0)) {
    len++;
    rv = Field (rv, 1);
  }

  ret = calloc (1, sizeof *ret);
  if (ret == NULL) {
    reply_with_perror ("calloc");
    return NULL;
  }
  if (len > 0) {
    ret->guestfs_int_application2_list_val =
      calloc (len, sizeof (guestfs_int_application2));
    if (ret->guestfs_int_application2_list_val == NULL) {
      reply_with_perror ("calloc");
      return NULL;
    }
    ret->guestfs_int_application2_list_len = len;
  }

  rv = retv;
  for (i = 0; i < len; ++i) {
    v = Field (rv, 0);
    r = return_application2 (v);
    if (r == NULL)
      return NULL;
    memcpy (&ret->guestfs_int_application2_list_val[i], r, sizeof (*r));
    free (r);
    rv = Field (rv, 1);
  }

  real_ret = ret;
  ret = NULL;
  return real_ret;
}

/* Implement RStruct ("isoinfo", _). */
static guestfs_int_isoinfo *
return_isoinfo (value retv)
{
  CLEANUP_FREE_ISOINFO guestfs_int_isoinfo *ret = NULL;
  guestfs_int_isoinfo *real_ret;
  value v;

  ret = calloc (1, sizeof (*ret));
  if (ret == NULL) {
    reply_with_perror ("calloc");
    return NULL;
  }

  v = Field (retv, 0);
  ret->iso_system_id = strdup (String_val (v));
  if (ret->iso_system_id == NULL) return NULL;
  v = Field (retv, 1);
  ret->iso_volume_id = strdup (String_val (v));
  if (ret->iso_volume_id == NULL) return NULL;
  v = Field (retv, 2);
  ret->iso_volume_space_size = Int32_val (v);
  v = Field (retv, 3);
  ret->iso_volume_set_size = Int32_val (v);
  v = Field (retv, 4);
  ret->iso_volume_sequence_number = Int32_val (v);
  v = Field (retv, 5);
  ret->iso_logical_block_size = Int32_val (v);
  v = Field (retv, 6);
  ret->iso_volume_set_id = strdup (String_val (v));
  if (ret->iso_volume_set_id == NULL) return NULL;
  v = Field (retv, 7);
  ret->iso_publisher_id = strdup (String_val (v));
  if (ret->iso_publisher_id == NULL) return NULL;
  v = Field (retv, 8);
  ret->iso_data_preparer_id = strdup (String_val (v));
  if (ret->iso_data_preparer_id == NULL) return NULL;
  v = Field (retv, 9);
  ret->iso_application_id = strdup (String_val (v));
  if (ret->iso_application_id == NULL) return NULL;
  v = Field (retv, 10);
  ret->iso_copyright_file_id = strdup (String_val (v));
  if (ret->iso_copyright_file_id == NULL) return NULL;
  v = Field (retv, 11);
  ret->iso_abstract_file_id = strdup (String_val (v));
  if (ret->iso_abstract_file_id == NULL) return NULL;
  v = Field (retv, 12);
  ret->iso_bibliographic_file_id = strdup (String_val (v));
  if (ret->iso_bibliographic_file_id == NULL) return NULL;
  v = Field (retv, 13);
  ret->iso_volume_creation_t = Int64_val (v);
  v = Field (retv, 14);
  ret->iso_volume_modification_t = Int64_val (v);
  v = Field (retv, 15);
  ret->iso_volume_expiration_t = Int64_val (v);
  v = Field (retv, 16);
  ret->iso_volume_effective_t = Int64_val (v);

  real_ret = ret;
  ret = NULL;
  return real_ret;
}

/* Implement RStruct ("btrfssubvolume", _). */
static guestfs_int_btrfssubvolume *
return_btrfssubvolume (value retv)
{
  CLEANUP_FREE_BTRFSSUBVOLUME guestfs_int_btrfssubvolume *ret = NULL;
  guestfs_int_btrfssubvolume *real_ret;
  value v;

  ret = calloc (1, sizeof (*ret));
  if (ret == NULL) {
    reply_with_perror ("calloc");
    return NULL;
  }

  v = Field (retv, 0);
  ret->btrfssubvolume_id = Int64_val (v);
  v = Field (retv, 1);
  ret->btrfssubvolume_top_level_id = Int64_val (v);
  v = Field (retv, 2);
  ret->btrfssubvolume_path = strdup (String_val (v));
  if (ret->btrfssubvolume_path == NULL) return NULL;

  real_ret = ret;
  ret = NULL;
  return real_ret;
}

/* Implement RStructList ("btrfssubvolume", _). */
static guestfs_int_btrfssubvolume_list *
return_btrfssubvolume_list (value retv)
{
  CLEANUP_FREE_BTRFSSUBVOLUME_LIST guestfs_int_btrfssubvolume_list *ret = NULL;
  guestfs_int_btrfssubvolume_list *real_ret;
  guestfs_int_btrfssubvolume *r;
  size_t i, len;
  value v, rv;

  /* Count the number of elements in the list. */
  rv = retv;
  len = 0;
  while (rv != Val_int (0)) {
    len++;
    rv = Field (rv, 1);
  }

  ret = calloc (1, sizeof *ret);
  if (ret == NULL) {
    reply_with_perror ("calloc");
    return NULL;
  }
  if (len > 0) {
    ret->guestfs_int_btrfssubvolume_list_val =
      calloc (len, sizeof (guestfs_int_btrfssubvolume));
    if (ret->guestfs_int_btrfssubvolume_list_val == NULL) {
      reply_with_perror ("calloc");
      return NULL;
    }
    ret->guestfs_int_btrfssubvolume_list_len = len;
  }

  rv = retv;
  for (i = 0; i < len; ++i) {
    v = Field (rv, 0);
    r = return_btrfssubvolume (v);
    if (r == NULL)
      return NULL;
    memcpy (&ret->guestfs_int_btrfssubvolume_list_val[i], r, sizeof (*r));
    free (r);
    rv = Field (rv, 1);
  }

  real_ret = ret;
  ret = NULL;
  return real_ret;
}

/* Implement RStruct ("statvfs", _). */
static guestfs_int_statvfs *
return_statvfs (value retv)
{
  CLEANUP_FREE_STATVFS guestfs_int_statvfs *ret = NULL;
  guestfs_int_statvfs *real_ret;
  value v;

  ret = calloc (1, sizeof (*ret));
  if (ret == NULL) {
    reply_with_perror ("calloc");
    return NULL;
  }

  v = Field (retv, 0);
  ret->bsize = Int64_val (v);
  v = Field (retv, 1);
  ret->frsize = Int64_val (v);
  v = Field (retv, 2);
  ret->blocks = Int64_val (v);
  v = Field (retv, 3);
  ret->bfree = Int64_val (v);
  v = Field (retv, 4);
  ret->bavail = Int64_val (v);
  v = Field (retv, 5);
  ret->files = Int64_val (v);
  v = Field (retv, 6);
  ret->ffree = Int64_val (v);
  v = Field (retv, 7);
  ret->favail = Int64_val (v);
  v = Field (retv, 8);
  ret->fsid = Int64_val (v);
  v = Field (retv, 9);
  ret->flag = Int64_val (v);
  v = Field (retv, 10);
  ret->namemax = Int64_val (v);

  real_ret = ret;
  ret = NULL;
  return real_ret;
}

/* Wrapper for OCaml function ‘Btrfs.btrfs_subvolume_get_default’. */
int64_t
do_btrfs_subvolume_get_default (const mountable_t *fs)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Btrfs.btrfs_subvolume_get_default");

  args[0] = guestfs_int_daemon_copy_mountable (fs);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("btrfs_subvolume_get_default", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, Int64_val (retv));
}

/* Wrapper for OCaml function ‘Btrfs.btrfs_subvolume_list’. */
guestfs_int_btrfssubvolume_list *
do_btrfs_subvolume_list (const mountable_t *fs)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Btrfs.btrfs_subvolume_list");

  args[0] = guestfs_int_daemon_copy_mountable (fs);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("btrfs_subvolume_list", retv);
    CAMLreturnT (void *, NULL);
  }

  guestfs_int_btrfssubvolume_list *ret =
    return_btrfssubvolume_list (retv);
  /* caller frees */
  CAMLreturnT (guestfs_int_btrfssubvolume_list *, ret);
}

/* Wrapper for OCaml function ‘Realpath.case_sensitive_path’. */
char *
do_case_sensitive_path (const char *path)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Realpath.case_sensitive_path");

  args[0] = caml_copy_string (path);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("case_sensitive_path", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Cryptsetup.cryptsetup_close’. */
int
do_cryptsetup_close (const char *device)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Cryptsetup.cryptsetup_close");

  args[0] = caml_copy_string (device);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("cryptsetup_close", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, 0);
}

/* Wrapper for OCaml function ‘Cryptsetup.cryptsetup_open’. */
int
do_cryptsetup_open (const char *device,
                    const char *key,
                    const char *mapname,
                    int readonly,
                    const char *crypttype)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 5);

  if (cb == NULL)
    cb = caml_named_value ("Cryptsetup.cryptsetup_open");

  if ((optargs_bitmask & GUESTFS_CRYPTSETUP_OPEN_READONLY_BITMASK) == 0)
    args[0] = Val_int (0); /* None */
  else {
    v = Val_bool (readonly);
    args[0] = caml_alloc (1, 0);
    Store_field (args[0], 0, v);
  }
  if ((optargs_bitmask & GUESTFS_CRYPTSETUP_OPEN_CRYPTTYPE_BITMASK) == 0)
    args[1] = Val_int (0); /* None */
  else {
    v = caml_copy_string (crypttype);
    args[1] = caml_alloc (1, 0);
    Store_field (args[1], 0, v);
  }
  args[2] = caml_copy_string (device);
  args[3] = caml_copy_string (key);
  args[4] = caml_copy_string (mapname);
  retv = caml_callbackN_exn (*cb, 5, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("cryptsetup_open", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, 0);
}

/* Wrapper for OCaml function ‘File.file’. */
char *
do_file (const char *path)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("File.file");

  args[0] = caml_copy_string (path);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("file", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Filearch.file_architecture’. */
char *
do_file_architecture (const char *filename)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Filearch.file_architecture");

  args[0] = caml_copy_string (filename);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("file_architecture", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Findfs.findfs_label’. */
char *
do_findfs_label (const char *label)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Findfs.findfs_label");

  args[0] = caml_copy_string (label);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("findfs_label", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Findfs.findfs_uuid’. */
char *
do_findfs_uuid (const char *uuid)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Findfs.findfs_uuid");

  args[0] = caml_copy_string (uuid);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("findfs_uuid", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_arch’. */
char *
do_inspect_get_arch (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_arch");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_arch", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_build_id’. */
char *
do_inspect_get_build_id (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_build_id");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_build_id", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_distro’. */
char *
do_inspect_get_distro (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_distro");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_distro", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_drive_mappings’. */
char **
do_inspect_get_drive_mappings (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_drive_mappings");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_drive_mappings", retv);
    CAMLreturnT (void *, NULL);
  }

  char **ret =
    guestfs_int_daemon_return_hashtable_string_string (retv);
  CAMLreturnT (char **, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_filesystems’. */
char **
do_inspect_get_filesystems (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_filesystems");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_filesystems", retv);
    CAMLreturnT (void *, NULL);
  }

  char **ret =
    guestfs_int_daemon_return_string_mountable_list (retv);
  CAMLreturnT (char **, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_format’. */
char *
do_inspect_get_format (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_format");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_format", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_hostname’. */
char *
do_inspect_get_hostname (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_hostname");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_hostname", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_major_version’. */
int
do_inspect_get_major_version (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_major_version");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_major_version", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, Int_val (retv));
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_minor_version’. */
int
do_inspect_get_minor_version (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_minor_version");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_minor_version", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, Int_val (retv));
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_mountpoints’. */
char **
do_inspect_get_mountpoints (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_mountpoints");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_mountpoints", retv);
    CAMLreturnT (void *, NULL);
  }

  char **ret =
    guestfs_int_daemon_return_hashtable_string_mountable (retv);
  CAMLreturnT (char **, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_package_format’. */
char *
do_inspect_get_package_format (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_package_format");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_package_format", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_package_management’. */
char *
do_inspect_get_package_management (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_package_management");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_package_management", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_product_name’. */
char *
do_inspect_get_product_name (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_product_name");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_product_name", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_product_variant’. */
char *
do_inspect_get_product_variant (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_product_variant");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_product_variant", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_roots’. */
char **
do_inspect_get_roots (void)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_roots");

  args[0] = Val_unit;
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_roots", retv);
    CAMLreturnT (void *, NULL);
  }

  char **ret =
    guestfs_int_daemon_return_string_mountable_list (retv);
  CAMLreturnT (char **, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_type’. */
char *
do_inspect_get_type (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_type");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_type", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_windows_current_control_set’. */
char *
do_inspect_get_windows_current_control_set (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_windows_current_control_set");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_windows_current_control_set", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_windows_software_hive’. */
char *
do_inspect_get_windows_software_hive (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_windows_software_hive");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_windows_software_hive", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_windows_system_hive’. */
char *
do_inspect_get_windows_system_hive (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_windows_system_hive");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_windows_system_hive", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_get_windows_systemroot’. */
char *
do_inspect_get_windows_systemroot (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_get_windows_systemroot");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_get_windows_systemroot", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Inspect.inspect_is_live’. */
int
do_inspect_is_live (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_is_live");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_is_live", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, Bool_val (retv));
}

/* Wrapper for OCaml function ‘Inspect.inspect_is_multipart’. */
int
do_inspect_is_multipart (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_is_multipart");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_is_multipart", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, Bool_val (retv));
}

/* Wrapper for OCaml function ‘Inspect.inspect_is_netinst’. */
int
do_inspect_is_netinst (const mountable_t *root)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_is_netinst");

  args[0] = guestfs_int_daemon_copy_mountable (root);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_is_netinst", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, Bool_val (retv));
}

/* Wrapper for OCaml function ‘Inspect.inspect_os’. */
char **
do_inspect_os (void)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Inspect.inspect_os");

  args[0] = Val_unit;
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("inspect_os", retv);
    CAMLreturnT (void *, NULL);
  }

  char **ret =
    guestfs_int_daemon_return_string_mountable_list (retv);
  CAMLreturnT (char **, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Rpm.internal_list_rpm_applications’. */
guestfs_int_application2_list *
do_internal_list_rpm_applications (void)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Rpm.internal_list_rpm_applications");

  args[0] = Val_unit;
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("internal_list_rpm_applications", retv);
    CAMLreturnT (void *, NULL);
  }

  guestfs_int_application2_list *ret =
    return_application2_list (retv);
  /* caller frees */
  CAMLreturnT (guestfs_int_application2_list *, ret);
}

/* Wrapper for OCaml function ‘Is.is_dir’. */
int
do_is_dir (const char *path,
           int followsymlinks)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 2);

  if (cb == NULL)
    cb = caml_named_value ("Is.is_dir");

  if ((optargs_bitmask & GUESTFS_IS_DIR_FOLLOWSYMLINKS_BITMASK) == 0)
    args[0] = Val_int (0); /* None */
  else {
    v = Val_bool (followsymlinks);
    args[0] = caml_alloc (1, 0);
    Store_field (args[0], 0, v);
  }
  args[1] = caml_copy_string (path);
  retv = caml_callbackN_exn (*cb, 2, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("is_dir", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, Bool_val (retv));
}

/* Wrapper for OCaml function ‘Is.is_file’. */
int
do_is_file (const char *path,
            int followsymlinks)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 2);

  if (cb == NULL)
    cb = caml_named_value ("Is.is_file");

  if ((optargs_bitmask & GUESTFS_IS_FILE_FOLLOWSYMLINKS_BITMASK) == 0)
    args[0] = Val_int (0); /* None */
  else {
    v = Val_bool (followsymlinks);
    args[0] = caml_alloc (1, 0);
    Store_field (args[0], 0, v);
  }
  args[1] = caml_copy_string (path);
  retv = caml_callbackN_exn (*cb, 2, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("is_file", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, Bool_val (retv));
}

/* Wrapper for OCaml function ‘Is.is_symlink’. */
int
do_is_symlink (const char *path)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Is.is_symlink");

  args[0] = caml_copy_string (path);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("is_symlink", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, Bool_val (retv));
}

/* Wrapper for OCaml function ‘Devsparts.is_whole_device’. */
int
do_is_whole_device (const char *device)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Devsparts.is_whole_device");

  args[0] = caml_copy_string (device);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("is_whole_device", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, Bool_val (retv));
}

/* Wrapper for OCaml function ‘Isoinfo.isoinfo’. */
guestfs_int_isoinfo *
do_isoinfo (const char *isofile)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Isoinfo.isoinfo");

  args[0] = caml_copy_string (isofile);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("isoinfo", retv);
    CAMLreturnT (void *, NULL);
  }

  guestfs_int_isoinfo *ret =
    return_isoinfo (retv);
  /* caller frees */
  CAMLreturnT (guestfs_int_isoinfo *, ret);
}

/* Wrapper for OCaml function ‘Isoinfo.isoinfo_device’. */
guestfs_int_isoinfo *
do_isoinfo_device (const char *device)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Isoinfo.isoinfo_device");

  args[0] = caml_copy_string (device);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("isoinfo_device", retv);
    CAMLreturnT (void *, NULL);
  }

  guestfs_int_isoinfo *ret =
    return_isoinfo (retv);
  /* caller frees */
  CAMLreturnT (guestfs_int_isoinfo *, ret);
}

/* Wrapper for OCaml function ‘Devsparts.list_devices’. */
char **
do_list_devices (void)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Devsparts.list_devices");

  args[0] = Val_unit;
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("list_devices", retv);
    CAMLreturnT (void *, NULL);
  }

  char **ret = guestfs_int_daemon_return_string_list (retv);
  CAMLreturnT (char **, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Lvm_dm.list_dm_devices’. */
char **
do_list_dm_devices (void)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Lvm_dm.list_dm_devices");

  args[0] = Val_unit;
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("list_dm_devices", retv);
    CAMLreturnT (void *, NULL);
  }

  char **ret = guestfs_int_daemon_return_string_list (retv);
  CAMLreturnT (char **, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Listfs.list_filesystems’. */
char **
do_list_filesystems (void)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Listfs.list_filesystems");

  args[0] = Val_unit;
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("list_filesystems", retv);
    CAMLreturnT (void *, NULL);
  }

  char **ret =
    guestfs_int_daemon_return_hashtable_mountable_string (retv);
  CAMLreturnT (char **, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Ldm.list_ldm_partitions’. */
char **
do_list_ldm_partitions (void)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Ldm.list_ldm_partitions");

  args[0] = Val_unit;
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("list_ldm_partitions", retv);
    CAMLreturnT (void *, NULL);
  }

  char **ret = guestfs_int_daemon_return_string_list (retv);
  CAMLreturnT (char **, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Ldm.list_ldm_volumes’. */
char **
do_list_ldm_volumes (void)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Ldm.list_ldm_volumes");

  args[0] = Val_unit;
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("list_ldm_volumes", retv);
    CAMLreturnT (void *, NULL);
  }

  char **ret = guestfs_int_daemon_return_string_list (retv);
  CAMLreturnT (char **, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Md.list_md_devices’. */
char **
do_list_md_devices (void)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Md.list_md_devices");

  args[0] = Val_unit;
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("list_md_devices", retv);
    CAMLreturnT (void *, NULL);
  }

  char **ret = guestfs_int_daemon_return_string_list (retv);
  CAMLreturnT (char **, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Devsparts.list_partitions’. */
char **
do_list_partitions (void)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Devsparts.list_partitions");

  args[0] = Val_unit;
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("list_partitions", retv);
    CAMLreturnT (void *, NULL);
  }

  char **ret = guestfs_int_daemon_return_string_list (retv);
  CAMLreturnT (char **, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Cryptsetup.luks_close’. */
int
do_luks_close (const char *device)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Cryptsetup.luks_close");

  args[0] = caml_copy_string (device);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("luks_close", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, 0);
}

/* Wrapper for OCaml function ‘Cryptsetup.luks_open’. */
int
do_luks_open (const char *device,
              const char *key,
              const char *mapname)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 3);

  if (cb == NULL)
    cb = caml_named_value ("Cryptsetup.luks_open");

  args[0] = caml_copy_string (device);
  args[1] = caml_copy_string (key);
  args[2] = caml_copy_string (mapname);
  retv = caml_callbackN_exn (*cb, 3, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("luks_open", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, 0);
}

/* Wrapper for OCaml function ‘Cryptsetup.luks_open_ro’. */
int
do_luks_open_ro (const char *device,
                 const char *key,
                 const char *mapname)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 3);

  if (cb == NULL)
    cb = caml_named_value ("Cryptsetup.luks_open_ro");

  args[0] = caml_copy_string (device);
  args[1] = caml_copy_string (key);
  args[2] = caml_copy_string (mapname);
  retv = caml_callbackN_exn (*cb, 3, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("luks_open_ro", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, 0);
}

/* Wrapper for OCaml function ‘Lvm.lvs’. */
char **
do_lvs (void)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Lvm.lvs");

  args[0] = Val_unit;
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("lvs", retv);
    CAMLreturnT (void *, NULL);
  }

  char **ret = guestfs_int_daemon_return_string_list (retv);
  CAMLreturnT (char **, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Md.md_detail’. */
char **
do_md_detail (const char *md)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Md.md_detail");

  args[0] = caml_copy_string (md);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("md_detail", retv);
    CAMLreturnT (void *, NULL);
  }

  char **ret =
    guestfs_int_daemon_return_hashtable_string_string (retv);
  CAMLreturnT (char **, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Mount.mount’. */
int
do_mount (const mountable_t *mountable,
          const char *mountpoint)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 2);

  if (cb == NULL)
    cb = caml_named_value ("Mount.mount");

  args[0] = guestfs_int_daemon_copy_mountable (mountable);
  args[1] = caml_copy_string (mountpoint);
  retv = caml_callbackN_exn (*cb, 2, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("mount", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, 0);
}

/* Wrapper for OCaml function ‘Mount.mount_options’. */
int
do_mount_options (const char *options,
                  const mountable_t *mountable,
                  const char *mountpoint)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 3);

  if (cb == NULL)
    cb = caml_named_value ("Mount.mount_options");

  args[0] = caml_copy_string (options);
  args[1] = guestfs_int_daemon_copy_mountable (mountable);
  args[2] = caml_copy_string (mountpoint);
  retv = caml_callbackN_exn (*cb, 3, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("mount_options", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, 0);
}

/* Wrapper for OCaml function ‘Mount.mount_ro’. */
int
do_mount_ro (const mountable_t *mountable,
             const char *mountpoint)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 2);

  if (cb == NULL)
    cb = caml_named_value ("Mount.mount_ro");

  args[0] = guestfs_int_daemon_copy_mountable (mountable);
  args[1] = caml_copy_string (mountpoint);
  retv = caml_callbackN_exn (*cb, 2, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("mount_ro", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, 0);
}

/* Wrapper for OCaml function ‘Mount.mount_vfs’. */
int
do_mount_vfs (const char *options,
              const char *vfstype,
              const mountable_t *mountable,
              const char *mountpoint)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 4);

  if (cb == NULL)
    cb = caml_named_value ("Mount.mount_vfs");

  args[0] = caml_copy_string (options);
  args[1] = caml_copy_string (vfstype);
  args[2] = guestfs_int_daemon_copy_mountable (mountable);
  args[3] = caml_copy_string (mountpoint);
  retv = caml_callbackN_exn (*cb, 4, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("mount_vfs", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, 0);
}

/* Wrapper for OCaml function ‘Devsparts.nr_devices’. */
int
do_nr_devices (void)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Devsparts.nr_devices");

  args[0] = Val_unit;
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("nr_devices", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, Int_val (retv));
}

/* Wrapper for OCaml function ‘Parted.part_get_gpt_attributes’. */
int64_t
do_part_get_gpt_attributes (const char *device,
                            int partnum)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 2);

  if (cb == NULL)
    cb = caml_named_value ("Parted.part_get_gpt_attributes");

  args[0] = caml_copy_string (device);
  args[1] = Val_int (partnum);
  retv = caml_callbackN_exn (*cb, 2, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("part_get_gpt_attributes", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, Int64_val (retv));
}

/* Wrapper for OCaml function ‘Parted.part_get_gpt_guid’. */
char *
do_part_get_gpt_guid (const char *device,
                      int partnum)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 2);

  if (cb == NULL)
    cb = caml_named_value ("Parted.part_get_gpt_guid");

  args[0] = caml_copy_string (device);
  args[1] = Val_int (partnum);
  retv = caml_callbackN_exn (*cb, 2, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("part_get_gpt_guid", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Parted.part_get_gpt_type’. */
char *
do_part_get_gpt_type (const char *device,
                      int partnum)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 2);

  if (cb == NULL)
    cb = caml_named_value ("Parted.part_get_gpt_type");

  args[0] = caml_copy_string (device);
  args[1] = Val_int (partnum);
  retv = caml_callbackN_exn (*cb, 2, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("part_get_gpt_type", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Parted.part_get_mbr_id’. */
int
do_part_get_mbr_id (const char *device,
                    int partnum)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 2);

  if (cb == NULL)
    cb = caml_named_value ("Parted.part_get_mbr_id");

  args[0] = caml_copy_string (device);
  args[1] = Val_int (partnum);
  retv = caml_callbackN_exn (*cb, 2, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("part_get_mbr_id", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, Int_val (retv));
}

/* Wrapper for OCaml function ‘Parted.part_get_mbr_part_type’. */
char *
do_part_get_mbr_part_type (const char *device,
                           int partnum)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 2);

  if (cb == NULL)
    cb = caml_named_value ("Parted.part_get_mbr_part_type");

  args[0] = caml_copy_string (device);
  args[1] = Val_int (partnum);
  retv = caml_callbackN_exn (*cb, 2, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("part_get_mbr_part_type", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Parted.part_get_parttype’. */
char *
do_part_get_parttype (const char *device)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Parted.part_get_parttype");

  args[0] = caml_copy_string (device);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("part_get_parttype", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Parted.part_list’. */
guestfs_int_partition_list *
do_part_list (const char *device)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Parted.part_list");

  args[0] = caml_copy_string (device);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("part_list", retv);
    CAMLreturnT (void *, NULL);
  }

  guestfs_int_partition_list *ret =
    return_partition_list (retv);
  /* caller frees */
  CAMLreturnT (guestfs_int_partition_list *, ret);
}

/* Wrapper for OCaml function ‘Parted.part_set_gpt_attributes’. */
int
do_part_set_gpt_attributes (const char *device,
                            int partnum,
                            int64_t attributes)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 3);

  if (cb == NULL)
    cb = caml_named_value ("Parted.part_set_gpt_attributes");

  args[0] = caml_copy_string (device);
  args[1] = Val_int (partnum);
  args[2] = caml_copy_int64 (attributes);
  retv = caml_callbackN_exn (*cb, 3, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("part_set_gpt_attributes", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, 0);
}

/* Wrapper for OCaml function ‘Devsparts.part_to_dev’. */
char *
do_part_to_dev (const char *partition)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Devsparts.part_to_dev");

  args[0] = caml_copy_string (partition);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("part_to_dev", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Devsparts.part_to_partnum’. */
int
do_part_to_partnum (const char *partition)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Devsparts.part_to_partnum");

  args[0] = caml_copy_string (partition);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("part_to_partnum", retv);
    CAMLreturnT (int, -1);
  }

  CAMLreturnT (int, Int_val (retv));
}

/* Wrapper for OCaml function ‘Link.readlink’. */
char *
do_readlink (const char *path)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Link.readlink");

  args[0] = caml_copy_string (path);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("readlink", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Realpath.realpath’. */
char *
do_realpath (const char *path)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Realpath.realpath");

  args[0] = caml_copy_string (path);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("realpath", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

/* Wrapper for OCaml function ‘Statvfs.statvfs’. */
guestfs_int_statvfs *
do_statvfs (const char *path)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Statvfs.statvfs");

  args[0] = caml_copy_string (path);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("statvfs", retv);
    CAMLreturnT (void *, NULL);
  }

  guestfs_int_statvfs *ret =
    return_statvfs (retv);
  /* caller frees */
  CAMLreturnT (guestfs_int_statvfs *, ret);
}

/* Wrapper for OCaml function ‘Blkid.vfs_type’. */
char *
do_vfs_type (const mountable_t *mountable)
{
  static const value *cb = NULL;
  CAMLparam0 ();
  CAMLlocal2 (v, retv);
  CAMLlocalN (args, 1);

  if (cb == NULL)
    cb = caml_named_value ("Blkid.vfs_type");

  args[0] = guestfs_int_daemon_copy_mountable (mountable);
  retv = caml_callbackN_exn (*cb, 1, args);

  if (Is_exception_result (retv)) {
    retv = Extract_exception (retv);
    guestfs_int_daemon_exn_to_reply_with_error ("vfs_type", retv);
    CAMLreturnT (void *, NULL);
  }

  char *ret = strdup (String_val (retv));
  if (ret == NULL) {
    reply_with_perror ("strdup");
    CAMLreturnT (char *, NULL);
  }
  CAMLreturnT (char *, ret); /* caller frees */
}

