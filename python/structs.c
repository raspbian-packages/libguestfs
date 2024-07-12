/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM THE FOLLOWING FILES:
 *          generator/python.ml
 *          and from the code in the generator/ subdirectory.
 * ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
 *
 * Copyright (C) 2009-2023 Red Hat Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#include <config.h>

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "actions.h"

#ifdef GUESTFS_HAVE_STRUCT_APPLICATION
PyObject *
guestfs_int_py_put_application (struct guestfs_application *application)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = guestfs_int_py_fromstring (application->app_name);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app_name", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application->app_display_name);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app_display_name", value);
  Py_DECREF (value);
  value = PyLong_FromLong (application->app_epoch);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app_epoch", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application->app_version);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app_version", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application->app_release);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app_release", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application->app_install_path);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app_install_path", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application->app_trans_path);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app_trans_path", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application->app_publisher);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app_publisher", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application->app_url);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app_url", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application->app_source_package);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app_source_package", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application->app_summary);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app_summary", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application->app_description);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app_description", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_APPLICATION2
PyObject *
guestfs_int_py_put_application2 (struct guestfs_application2 *application2)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = guestfs_int_py_fromstring (application2->app2_name);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app2_name", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application2->app2_display_name);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app2_display_name", value);
  Py_DECREF (value);
  value = PyLong_FromLong (application2->app2_epoch);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app2_epoch", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application2->app2_version);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app2_version", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application2->app2_release);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app2_release", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application2->app2_arch);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app2_arch", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application2->app2_install_path);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app2_install_path", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application2->app2_trans_path);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app2_trans_path", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application2->app2_publisher);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app2_publisher", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application2->app2_url);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app2_url", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application2->app2_source_package);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app2_source_package", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application2->app2_summary);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app2_summary", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application2->app2_description);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app2_description", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application2->app2_spare1);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app2_spare1", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application2->app2_spare2);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app2_spare2", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application2->app2_spare3);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app2_spare3", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (application2->app2_spare4);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "app2_spare4", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_BTRFSBALANCE
PyObject *
guestfs_int_py_put_btrfsbalance (struct guestfs_btrfsbalance *btrfsbalance)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = guestfs_int_py_fromstring (btrfsbalance->btrfsbalance_status);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsbalance_status", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsbalance->btrfsbalance_total);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsbalance_total", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsbalance->btrfsbalance_balanced);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsbalance_balanced", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsbalance->btrfsbalance_considered);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsbalance_considered", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsbalance->btrfsbalance_left);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsbalance_left", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_BTRFSQGROUP
PyObject *
guestfs_int_py_put_btrfsqgroup (struct guestfs_btrfsqgroup *btrfsqgroup)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = guestfs_int_py_fromstring (btrfsqgroup->btrfsqgroup_id);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsqgroup_id", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsqgroup->btrfsqgroup_rfer);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsqgroup_rfer", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsqgroup->btrfsqgroup_excl);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsqgroup_excl", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_BTRFSSCRUB
PyObject *
guestfs_int_py_put_btrfsscrub (struct guestfs_btrfsscrub *btrfsscrub)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = PyLong_FromUnsignedLongLong (btrfsscrub->btrfsscrub_data_extents_scrubbed);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsscrub_data_extents_scrubbed", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsscrub->btrfsscrub_tree_extents_scrubbed);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsscrub_tree_extents_scrubbed", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsscrub->btrfsscrub_data_bytes_scrubbed);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsscrub_data_bytes_scrubbed", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsscrub->btrfsscrub_tree_bytes_scrubbed);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsscrub_tree_bytes_scrubbed", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsscrub->btrfsscrub_read_errors);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsscrub_read_errors", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsscrub->btrfsscrub_csum_errors);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsscrub_csum_errors", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsscrub->btrfsscrub_verify_errors);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsscrub_verify_errors", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsscrub->btrfsscrub_no_csum);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsscrub_no_csum", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsscrub->btrfsscrub_csum_discards);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsscrub_csum_discards", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsscrub->btrfsscrub_super_errors);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsscrub_super_errors", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsscrub->btrfsscrub_malloc_errors);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsscrub_malloc_errors", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsscrub->btrfsscrub_uncorrectable_errors);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsscrub_uncorrectable_errors", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsscrub->btrfsscrub_unverified_errors);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsscrub_unverified_errors", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsscrub->btrfsscrub_corrected_errors);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsscrub_corrected_errors", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfsscrub->btrfsscrub_last_physical);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfsscrub_last_physical", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_BTRFSSUBVOLUME
PyObject *
guestfs_int_py_put_btrfssubvolume (struct guestfs_btrfssubvolume *btrfssubvolume)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = PyLong_FromUnsignedLongLong (btrfssubvolume->btrfssubvolume_id);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfssubvolume_id", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (btrfssubvolume->btrfssubvolume_top_level_id);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfssubvolume_top_level_id", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (btrfssubvolume->btrfssubvolume_path);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "btrfssubvolume_path", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_DIRENT
PyObject *
guestfs_int_py_put_dirent (struct guestfs_dirent *dirent)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = PyLong_FromLongLong (dirent->ino);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "ino", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstringsize (&dirent->ftyp, 1);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "ftyp", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (dirent->name);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "name", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_HIVEX_NODE
PyObject *
guestfs_int_py_put_hivex_node (struct guestfs_hivex_node *hivex_node)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = PyLong_FromLongLong (hivex_node->hivex_node_h);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "hivex_node_h", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_HIVEX_VALUE
PyObject *
guestfs_int_py_put_hivex_value (struct guestfs_hivex_value *hivex_value)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = PyLong_FromLongLong (hivex_value->hivex_value_h);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "hivex_value_h", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_INOTIFY_EVENT
PyObject *
guestfs_int_py_put_inotify_event (struct guestfs_inotify_event *inotify_event)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = PyLong_FromLongLong (inotify_event->in_wd);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "in_wd", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (inotify_event->in_mask);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "in_mask", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (inotify_event->in_cookie);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "in_cookie", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (inotify_event->in_name);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "in_name", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_INT_BOOL
PyObject *
guestfs_int_py_put_int_bool (struct guestfs_int_bool *int_bool)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = PyLong_FromLong (int_bool->i);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "i", value);
  Py_DECREF (value);
  value = PyLong_FromLong (int_bool->b);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "b", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_ISOINFO
PyObject *
guestfs_int_py_put_isoinfo (struct guestfs_isoinfo *isoinfo)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = guestfs_int_py_fromstring (isoinfo->iso_system_id);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "iso_system_id", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (isoinfo->iso_volume_id);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "iso_volume_id", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (isoinfo->iso_volume_space_size);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "iso_volume_space_size", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (isoinfo->iso_volume_set_size);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "iso_volume_set_size", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (isoinfo->iso_volume_sequence_number);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "iso_volume_sequence_number", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (isoinfo->iso_logical_block_size);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "iso_logical_block_size", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (isoinfo->iso_volume_set_id);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "iso_volume_set_id", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (isoinfo->iso_publisher_id);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "iso_publisher_id", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (isoinfo->iso_data_preparer_id);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "iso_data_preparer_id", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (isoinfo->iso_application_id);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "iso_application_id", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (isoinfo->iso_copyright_file_id);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "iso_copyright_file_id", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (isoinfo->iso_abstract_file_id);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "iso_abstract_file_id", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (isoinfo->iso_bibliographic_file_id);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "iso_bibliographic_file_id", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (isoinfo->iso_volume_creation_t);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "iso_volume_creation_t", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (isoinfo->iso_volume_modification_t);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "iso_volume_modification_t", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (isoinfo->iso_volume_expiration_t);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "iso_volume_expiration_t", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (isoinfo->iso_volume_effective_t);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "iso_volume_effective_t", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_LVM_LV
PyObject *
guestfs_int_py_put_lvm_lv (struct guestfs_lvm_lv *lvm_lv)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = guestfs_int_py_fromstring (lvm_lv->lv_name);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "lv_name", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstringsize (lvm_lv->lv_uuid, 32);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "lv_uuid", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (lvm_lv->lv_attr);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "lv_attr", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (lvm_lv->lv_major);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "lv_major", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (lvm_lv->lv_minor);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "lv_minor", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (lvm_lv->lv_kernel_major);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "lv_kernel_major", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (lvm_lv->lv_kernel_minor);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "lv_kernel_minor", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (lvm_lv->lv_size);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "lv_size", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (lvm_lv->seg_count);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "seg_count", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (lvm_lv->origin);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "origin", value);
  Py_DECREF (value);
  if (lvm_lv->snap_percent >= 0) {
    value = PyFloat_FromDouble ((double) lvm_lv->snap_percent);
    if (value == NULL)
      goto err;
    PyDict_SetItemString (dict, "snap_percent", value);
    Py_DECREF (value);
  }
  else {
    Py_INCREF (Py_None);
    PyDict_SetItemString (dict, "snap_percent", Py_None);
  }
  if (lvm_lv->copy_percent >= 0) {
    value = PyFloat_FromDouble ((double) lvm_lv->copy_percent);
    if (value == NULL)
      goto err;
    PyDict_SetItemString (dict, "copy_percent", value);
    Py_DECREF (value);
  }
  else {
    Py_INCREF (Py_None);
    PyDict_SetItemString (dict, "copy_percent", Py_None);
  }
  value = guestfs_int_py_fromstring (lvm_lv->move_pv);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "move_pv", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (lvm_lv->lv_tags);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "lv_tags", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (lvm_lv->mirror_log);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "mirror_log", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (lvm_lv->modules);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "modules", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_LVM_PV
PyObject *
guestfs_int_py_put_lvm_pv (struct guestfs_lvm_pv *lvm_pv)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = guestfs_int_py_fromstring (lvm_pv->pv_name);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "pv_name", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstringsize (lvm_pv->pv_uuid, 32);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "pv_uuid", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (lvm_pv->pv_fmt);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "pv_fmt", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (lvm_pv->pv_size);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "pv_size", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (lvm_pv->dev_size);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "dev_size", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (lvm_pv->pv_free);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "pv_free", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (lvm_pv->pv_used);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "pv_used", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (lvm_pv->pv_attr);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "pv_attr", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (lvm_pv->pv_pe_count);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "pv_pe_count", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (lvm_pv->pv_pe_alloc_count);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "pv_pe_alloc_count", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (lvm_pv->pv_tags);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "pv_tags", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (lvm_pv->pe_start);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "pe_start", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (lvm_pv->pv_mda_count);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "pv_mda_count", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (lvm_pv->pv_mda_free);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "pv_mda_free", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_LVM_VG
PyObject *
guestfs_int_py_put_lvm_vg (struct guestfs_lvm_vg *lvm_vg)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = guestfs_int_py_fromstring (lvm_vg->vg_name);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "vg_name", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstringsize (lvm_vg->vg_uuid, 32);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "vg_uuid", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (lvm_vg->vg_fmt);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "vg_fmt", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (lvm_vg->vg_attr);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "vg_attr", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (lvm_vg->vg_size);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "vg_size", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (lvm_vg->vg_free);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "vg_free", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (lvm_vg->vg_sysid);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "vg_sysid", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (lvm_vg->vg_extent_size);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "vg_extent_size", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (lvm_vg->vg_extent_count);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "vg_extent_count", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (lvm_vg->vg_free_count);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "vg_free_count", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (lvm_vg->max_lv);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "max_lv", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (lvm_vg->max_pv);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "max_pv", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (lvm_vg->pv_count);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "pv_count", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (lvm_vg->lv_count);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "lv_count", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (lvm_vg->snap_count);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "snap_count", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (lvm_vg->vg_seqno);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "vg_seqno", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (lvm_vg->vg_tags);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "vg_tags", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (lvm_vg->vg_mda_count);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "vg_mda_count", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (lvm_vg->vg_mda_free);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "vg_mda_free", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_MDSTAT
PyObject *
guestfs_int_py_put_mdstat (struct guestfs_mdstat *mdstat)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = guestfs_int_py_fromstring (mdstat->mdstat_device);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "mdstat_device", value);
  Py_DECREF (value);
  value = PyLong_FromLong (mdstat->mdstat_index);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "mdstat_index", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (mdstat->mdstat_flags);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "mdstat_flags", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_PARTITION
PyObject *
guestfs_int_py_put_partition (struct guestfs_partition *partition)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = PyLong_FromLong (partition->part_num);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "part_num", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (partition->part_start);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "part_start", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (partition->part_end);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "part_end", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (partition->part_size);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "part_size", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_STAT
PyObject *
guestfs_int_py_put_stat (struct guestfs_stat *stat)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = PyLong_FromLongLong (stat->dev);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "dev", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (stat->ino);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "ino", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (stat->mode);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "mode", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (stat->nlink);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "nlink", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (stat->uid);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "uid", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (stat->gid);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "gid", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (stat->rdev);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "rdev", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (stat->size);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "size", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (stat->blksize);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "blksize", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (stat->blocks);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "blocks", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (stat->atime);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "atime", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (stat->mtime);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "mtime", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (stat->ctime);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "ctime", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_STATNS
PyObject *
guestfs_int_py_put_statns (struct guestfs_statns *statns)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = PyLong_FromLongLong (statns->st_dev);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_dev", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_ino);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_ino", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_mode);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_mode", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_nlink);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_nlink", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_uid);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_uid", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_gid);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_gid", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_rdev);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_rdev", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_size);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_size", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_blksize);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_blksize", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_blocks);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_blocks", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_atime_sec);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_atime_sec", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_atime_nsec);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_atime_nsec", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_mtime_sec);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_mtime_sec", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_mtime_nsec);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_mtime_nsec", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_ctime_sec);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_ctime_sec", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_ctime_nsec);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_ctime_nsec", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_spare1);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_spare1", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_spare2);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_spare2", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_spare3);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_spare3", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_spare4);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_spare4", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_spare5);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_spare5", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statns->st_spare6);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "st_spare6", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_STATVFS
PyObject *
guestfs_int_py_put_statvfs (struct guestfs_statvfs *statvfs)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = PyLong_FromLongLong (statvfs->bsize);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "bsize", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statvfs->frsize);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "frsize", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statvfs->blocks);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "blocks", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statvfs->bfree);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "bfree", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statvfs->bavail);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "bavail", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statvfs->files);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "files", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statvfs->ffree);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "ffree", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statvfs->favail);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "favail", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statvfs->fsid);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "fsid", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statvfs->flag);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "flag", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (statvfs->namemax);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "namemax", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_TSK_DIRENT
PyObject *
guestfs_int_py_put_tsk_dirent (struct guestfs_tsk_dirent *tsk_dirent)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = PyLong_FromUnsignedLongLong (tsk_dirent->tsk_inode);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "tsk_inode", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstringsize (&tsk_dirent->tsk_type, 1);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "tsk_type", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (tsk_dirent->tsk_size);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "tsk_size", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (tsk_dirent->tsk_name);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "tsk_name", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (tsk_dirent->tsk_flags);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "tsk_flags", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (tsk_dirent->tsk_atime_sec);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "tsk_atime_sec", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (tsk_dirent->tsk_atime_nsec);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "tsk_atime_nsec", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (tsk_dirent->tsk_mtime_sec);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "tsk_mtime_sec", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (tsk_dirent->tsk_mtime_nsec);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "tsk_mtime_nsec", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (tsk_dirent->tsk_ctime_sec);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "tsk_ctime_sec", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (tsk_dirent->tsk_ctime_nsec);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "tsk_ctime_nsec", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (tsk_dirent->tsk_crtime_sec);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "tsk_crtime_sec", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (tsk_dirent->tsk_crtime_nsec);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "tsk_crtime_nsec", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (tsk_dirent->tsk_nlink);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "tsk_nlink", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (tsk_dirent->tsk_link);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "tsk_link", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (tsk_dirent->tsk_spare1);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "tsk_spare1", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_UTSNAME
PyObject *
guestfs_int_py_put_utsname (struct guestfs_utsname *utsname)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = guestfs_int_py_fromstring (utsname->uts_sysname);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "uts_sysname", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (utsname->uts_release);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "uts_release", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (utsname->uts_version);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "uts_version", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (utsname->uts_machine);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "uts_machine", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_VERSION
PyObject *
guestfs_int_py_put_version (struct guestfs_version *version)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = PyLong_FromLongLong (version->major);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "major", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (version->minor);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "minor", value);
  Py_DECREF (value);
  value = PyLong_FromLongLong (version->release);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "release", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (version->extra);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "extra", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_XATTR
PyObject *
guestfs_int_py_put_xattr (struct guestfs_xattr *xattr)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = guestfs_int_py_fromstring (xattr->attrname);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "attrname", value);
  Py_DECREF (value);
  value = PyBytes_FromStringAndSize (xattr->attrval, xattr->attrval_len);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "attrval", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_XFSINFO
PyObject *
guestfs_int_py_put_xfsinfo (struct guestfs_xfsinfo *xfsinfo)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = guestfs_int_py_fromstring (xfsinfo->xfs_mntpoint);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_mntpoint", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_inodesize);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_inodesize", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_agcount);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_agcount", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_agsize);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_agsize", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_sectsize);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_sectsize", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_attr);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_attr", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_blocksize);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_blocksize", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (xfsinfo->xfs_datablocks);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_datablocks", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_imaxpct);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_imaxpct", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_sunit);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_sunit", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_swidth);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_swidth", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_dirversion);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_dirversion", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_dirblocksize);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_dirblocksize", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_cimode);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_cimode", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (xfsinfo->xfs_logname);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_logname", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_logblocksize);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_logblocksize", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_logblocks);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_logblocks", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_logversion);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_logversion", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_logsectsize);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_logsectsize", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_logsunit);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_logsunit", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_lazycount);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_lazycount", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (xfsinfo->xfs_rtname);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_rtname", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLong (xfsinfo->xfs_rtextsize);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_rtextsize", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (xfsinfo->xfs_rtblocks);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_rtblocks", value);
  Py_DECREF (value);
  value = PyLong_FromUnsignedLongLong (xfsinfo->xfs_rtextents);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "xfs_rtextents", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_YARA_DETECTION
PyObject *
guestfs_int_py_put_yara_detection (struct guestfs_yara_detection *yara_detection)
{
  PyObject *dict, *value;

  dict = PyDict_New ();
  if (dict == NULL)
    return NULL;
  value = guestfs_int_py_fromstring (yara_detection->yara_name);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "yara_name", value);
  Py_DECREF (value);
  value = guestfs_int_py_fromstring (yara_detection->yara_rule);
  if (value == NULL)
    goto err;
  PyDict_SetItemString (dict, "yara_rule", value);
  Py_DECREF (value);
  return dict;
 err:
  Py_CLEAR (dict);
  return NULL;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_DIRENT
PyObject *
guestfs_int_py_put_dirent_list (struct guestfs_dirent_list *dirents)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (dirents->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < dirents->len; ++i) {
    element = guestfs_int_py_put_dirent (&dirents->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_LVM_LV
PyObject *
guestfs_int_py_put_lvm_lv_list (struct guestfs_lvm_lv_list *lvm_lvs)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (lvm_lvs->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < lvm_lvs->len; ++i) {
    element = guestfs_int_py_put_lvm_lv (&lvm_lvs->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_BTRFSQGROUP
PyObject *
guestfs_int_py_put_btrfsqgroup_list (struct guestfs_btrfsqgroup_list *btrfsqgroups)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (btrfsqgroups->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < btrfsqgroups->len; ++i) {
    element = guestfs_int_py_put_btrfsqgroup (&btrfsqgroups->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_TSK_DIRENT
PyObject *
guestfs_int_py_put_tsk_dirent_list (struct guestfs_tsk_dirent_list *tsk_dirents)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (tsk_dirents->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < tsk_dirents->len; ++i) {
    element = guestfs_int_py_put_tsk_dirent (&tsk_dirents->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_PARTITION
PyObject *
guestfs_int_py_put_partition_list (struct guestfs_partition_list *partitions)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (partitions->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < partitions->len; ++i) {
    element = guestfs_int_py_put_partition (&partitions->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_STATNS
PyObject *
guestfs_int_py_put_statns_list (struct guestfs_statns_list *statnss)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (statnss->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < statnss->len; ++i) {
    element = guestfs_int_py_put_statns (&statnss->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_APPLICATION2
PyObject *
guestfs_int_py_put_application2_list (struct guestfs_application2_list *application2s)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (application2s->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < application2s->len; ++i) {
    element = guestfs_int_py_put_application2 (&application2s->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_INOTIFY_EVENT
PyObject *
guestfs_int_py_put_inotify_event_list (struct guestfs_inotify_event_list *inotify_events)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (inotify_events->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < inotify_events->len; ++i) {
    element = guestfs_int_py_put_inotify_event (&inotify_events->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_APPLICATION
PyObject *
guestfs_int_py_put_application_list (struct guestfs_application_list *applications)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (applications->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < applications->len; ++i) {
    element = guestfs_int_py_put_application (&applications->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_HIVEX_VALUE
PyObject *
guestfs_int_py_put_hivex_value_list (struct guestfs_hivex_value_list *hivex_values)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (hivex_values->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < hivex_values->len; ++i) {
    element = guestfs_int_py_put_hivex_value (&hivex_values->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_XATTR
PyObject *
guestfs_int_py_put_xattr_list (struct guestfs_xattr_list *xattrs)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (xattrs->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < xattrs->len; ++i) {
    element = guestfs_int_py_put_xattr (&xattrs->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_LVM_PV
PyObject *
guestfs_int_py_put_lvm_pv_list (struct guestfs_lvm_pv_list *lvm_pvs)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (lvm_pvs->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < lvm_pvs->len; ++i) {
    element = guestfs_int_py_put_lvm_pv (&lvm_pvs->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_YARA_DETECTION
PyObject *
guestfs_int_py_put_yara_detection_list (struct guestfs_yara_detection_list *yara_detections)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (yara_detections->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < yara_detections->len; ++i) {
    element = guestfs_int_py_put_yara_detection (&yara_detections->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_LVM_VG
PyObject *
guestfs_int_py_put_lvm_vg_list (struct guestfs_lvm_vg_list *lvm_vgs)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (lvm_vgs->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < lvm_vgs->len; ++i) {
    element = guestfs_int_py_put_lvm_vg (&lvm_vgs->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_BTRFSSUBVOLUME
PyObject *
guestfs_int_py_put_btrfssubvolume_list (struct guestfs_btrfssubvolume_list *btrfssubvolumes)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (btrfssubvolumes->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < btrfssubvolumes->len; ++i) {
    element = guestfs_int_py_put_btrfssubvolume (&btrfssubvolumes->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_MDSTAT
PyObject *
guestfs_int_py_put_mdstat_list (struct guestfs_mdstat_list *mdstats)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (mdstats->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < mdstats->len; ++i) {
    element = guestfs_int_py_put_mdstat (&mdstats->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_HIVEX_NODE
PyObject *
guestfs_int_py_put_hivex_node_list (struct guestfs_hivex_node_list *hivex_nodes)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (hivex_nodes->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < hivex_nodes->len; ++i) {
    element = guestfs_int_py_put_hivex_node (&hivex_nodes->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

#ifdef GUESTFS_HAVE_STRUCT_STAT
PyObject *
guestfs_int_py_put_stat_list (struct guestfs_stat_list *stats)
{
  PyObject *list, *element;
  size_t i;

  list = PyList_New (stats->len);
  if (list == NULL)
    return NULL;
  for (i = 0; i < stats->len; ++i) {
    element = guestfs_int_py_put_stat (&stats->val[i]);
    if (element == NULL) {
      Py_CLEAR (list);
      return NULL;
    }
    PyList_SetItem (list, i, element);
  }
  return list;
};
#endif

