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
make_application (ei_x_buff *buff, const struct guestfs_application *application)
{
  if (ei_x_encode_list_header (buff, 12) !=0) return -1;

  if (ei_x_encode_string (buff, application->app_name) != 0) return -1;
  if (ei_x_encode_string (buff, application->app_display_name) != 0) return -1;
  if (ei_x_encode_long (buff, application->app_epoch) != 0) return -1;
  if (ei_x_encode_string (buff, application->app_version) != 0) return -1;
  if (ei_x_encode_string (buff, application->app_release) != 0) return -1;
  if (ei_x_encode_string (buff, application->app_install_path) != 0) return -1;
  if (ei_x_encode_string (buff, application->app_trans_path) != 0) return -1;
  if (ei_x_encode_string (buff, application->app_publisher) != 0) return -1;
  if (ei_x_encode_string (buff, application->app_url) != 0) return -1;
  if (ei_x_encode_string (buff, application->app_source_package) != 0) return -1;
  if (ei_x_encode_string (buff, application->app_summary) != 0) return -1;
  if (ei_x_encode_string (buff, application->app_description) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_application2 (ei_x_buff *buff, const struct guestfs_application2 *application2)
{
  if (ei_x_encode_list_header (buff, 17) !=0) return -1;

  if (ei_x_encode_string (buff, application2->app2_name) != 0) return -1;
  if (ei_x_encode_string (buff, application2->app2_display_name) != 0) return -1;
  if (ei_x_encode_long (buff, application2->app2_epoch) != 0) return -1;
  if (ei_x_encode_string (buff, application2->app2_version) != 0) return -1;
  if (ei_x_encode_string (buff, application2->app2_release) != 0) return -1;
  if (ei_x_encode_string (buff, application2->app2_arch) != 0) return -1;
  if (ei_x_encode_string (buff, application2->app2_install_path) != 0) return -1;
  if (ei_x_encode_string (buff, application2->app2_trans_path) != 0) return -1;
  if (ei_x_encode_string (buff, application2->app2_publisher) != 0) return -1;
  if (ei_x_encode_string (buff, application2->app2_url) != 0) return -1;
  if (ei_x_encode_string (buff, application2->app2_source_package) != 0) return -1;
  if (ei_x_encode_string (buff, application2->app2_summary) != 0) return -1;
  if (ei_x_encode_string (buff, application2->app2_description) != 0) return -1;
  if (ei_x_encode_string (buff, application2->app2_spare1) != 0) return -1;
  if (ei_x_encode_string (buff, application2->app2_spare2) != 0) return -1;
  if (ei_x_encode_string (buff, application2->app2_spare3) != 0) return -1;
  if (ei_x_encode_string (buff, application2->app2_spare4) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_btrfsbalance (ei_x_buff *buff, const struct guestfs_btrfsbalance *btrfsbalance)
{
  if (ei_x_encode_list_header (buff, 5) !=0) return -1;

  if (ei_x_encode_string (buff, btrfsbalance->btrfsbalance_status) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsbalance->btrfsbalance_total) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsbalance->btrfsbalance_balanced) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsbalance->btrfsbalance_considered) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsbalance->btrfsbalance_left) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_btrfsqgroup (ei_x_buff *buff, const struct guestfs_btrfsqgroup *btrfsqgroup)
{
  if (ei_x_encode_list_header (buff, 3) !=0) return -1;

  if (ei_x_encode_string (buff, btrfsqgroup->btrfsqgroup_id) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsqgroup->btrfsqgroup_rfer) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsqgroup->btrfsqgroup_excl) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_btrfsscrub (ei_x_buff *buff, const struct guestfs_btrfsscrub *btrfsscrub)
{
  if (ei_x_encode_list_header (buff, 15) !=0) return -1;

  if (ei_x_encode_longlong (buff, btrfsscrub->btrfsscrub_data_extents_scrubbed) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsscrub->btrfsscrub_tree_extents_scrubbed) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsscrub->btrfsscrub_data_bytes_scrubbed) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsscrub->btrfsscrub_tree_bytes_scrubbed) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsscrub->btrfsscrub_read_errors) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsscrub->btrfsscrub_csum_errors) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsscrub->btrfsscrub_verify_errors) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsscrub->btrfsscrub_no_csum) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsscrub->btrfsscrub_csum_discards) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsscrub->btrfsscrub_super_errors) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsscrub->btrfsscrub_malloc_errors) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsscrub->btrfsscrub_uncorrectable_errors) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsscrub->btrfsscrub_unverified_errors) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsscrub->btrfsscrub_corrected_errors) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfsscrub->btrfsscrub_last_physical) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_btrfssubvolume (ei_x_buff *buff, const struct guestfs_btrfssubvolume *btrfssubvolume)
{
  if (ei_x_encode_list_header (buff, 3) !=0) return -1;

  if (ei_x_encode_longlong (buff, btrfssubvolume->btrfssubvolume_id) != 0) return -1;
  if (ei_x_encode_longlong (buff, btrfssubvolume->btrfssubvolume_top_level_id) != 0) return -1;
  if (ei_x_encode_string (buff, btrfssubvolume->btrfssubvolume_path) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_dirent (ei_x_buff *buff, const struct guestfs_dirent *dirent)
{
  if (ei_x_encode_list_header (buff, 3) !=0) return -1;

  if (ei_x_encode_longlong (buff, dirent->ino) != 0) return -1;
  if (ei_x_encode_char (buff, dirent->ftyp) != 0) return -1;
  if (ei_x_encode_string (buff, dirent->name) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_hivex_node (ei_x_buff *buff, const struct guestfs_hivex_node *hivex_node)
{
  if (ei_x_encode_list_header (buff, 1) !=0) return -1;

  if (ei_x_encode_longlong (buff, hivex_node->hivex_node_h) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_hivex_value (ei_x_buff *buff, const struct guestfs_hivex_value *hivex_value)
{
  if (ei_x_encode_list_header (buff, 1) !=0) return -1;

  if (ei_x_encode_longlong (buff, hivex_value->hivex_value_h) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_inotify_event (ei_x_buff *buff, const struct guestfs_inotify_event *inotify_event)
{
  if (ei_x_encode_list_header (buff, 4) !=0) return -1;

  if (ei_x_encode_longlong (buff, inotify_event->in_wd) != 0) return -1;
  if (ei_x_encode_long (buff, inotify_event->in_mask) != 0) return -1;
  if (ei_x_encode_long (buff, inotify_event->in_cookie) != 0) return -1;
  if (ei_x_encode_string (buff, inotify_event->in_name) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_int_bool (ei_x_buff *buff, const struct guestfs_int_bool *int_bool)
{
  if (ei_x_encode_list_header (buff, 2) !=0) return -1;

  if (ei_x_encode_long (buff, int_bool->i) != 0) return -1;
  if (ei_x_encode_long (buff, int_bool->b) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_isoinfo (ei_x_buff *buff, const struct guestfs_isoinfo *isoinfo)
{
  if (ei_x_encode_list_header (buff, 17) !=0) return -1;

  if (ei_x_encode_string (buff, isoinfo->iso_system_id) != 0) return -1;
  if (ei_x_encode_string (buff, isoinfo->iso_volume_id) != 0) return -1;
  if (ei_x_encode_long (buff, isoinfo->iso_volume_space_size) != 0) return -1;
  if (ei_x_encode_long (buff, isoinfo->iso_volume_set_size) != 0) return -1;
  if (ei_x_encode_long (buff, isoinfo->iso_volume_sequence_number) != 0) return -1;
  if (ei_x_encode_long (buff, isoinfo->iso_logical_block_size) != 0) return -1;
  if (ei_x_encode_string (buff, isoinfo->iso_volume_set_id) != 0) return -1;
  if (ei_x_encode_string (buff, isoinfo->iso_publisher_id) != 0) return -1;
  if (ei_x_encode_string (buff, isoinfo->iso_data_preparer_id) != 0) return -1;
  if (ei_x_encode_string (buff, isoinfo->iso_application_id) != 0) return -1;
  if (ei_x_encode_string (buff, isoinfo->iso_copyright_file_id) != 0) return -1;
  if (ei_x_encode_string (buff, isoinfo->iso_abstract_file_id) != 0) return -1;
  if (ei_x_encode_string (buff, isoinfo->iso_bibliographic_file_id) != 0) return -1;
  if (ei_x_encode_longlong (buff, isoinfo->iso_volume_creation_t) != 0) return -1;
  if (ei_x_encode_longlong (buff, isoinfo->iso_volume_modification_t) != 0) return -1;
  if (ei_x_encode_longlong (buff, isoinfo->iso_volume_expiration_t) != 0) return -1;
  if (ei_x_encode_longlong (buff, isoinfo->iso_volume_effective_t) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_lvm_lv (ei_x_buff *buff, const struct guestfs_lvm_lv *lvm_lv)
{
  if (ei_x_encode_list_header (buff, 16) !=0) return -1;

  if (ei_x_encode_string (buff, lvm_lv->lv_name) != 0) return -1;
  if (ei_x_encode_string_len (buff, lvm_lv->lv_uuid, 32) != 0) return -1;
  if (ei_x_encode_string (buff, lvm_lv->lv_attr) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_lv->lv_major) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_lv->lv_minor) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_lv->lv_kernel_major) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_lv->lv_kernel_minor) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_lv->lv_size) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_lv->seg_count) != 0) return -1;
  if (ei_x_encode_string (buff, lvm_lv->origin) != 0) return -1;
  if (lvm_lv->snap_percent >= 0) {
    if (ei_x_encode_double (buff, lvm_lv->snap_percent) != 0) return -1;
  } else {
    if (ei_x_encode_atom (buff, "undefined") != 0) return -1;
  }
  if (lvm_lv->copy_percent >= 0) {
    if (ei_x_encode_double (buff, lvm_lv->copy_percent) != 0) return -1;
  } else {
    if (ei_x_encode_atom (buff, "undefined") != 0) return -1;
  }
  if (ei_x_encode_string (buff, lvm_lv->move_pv) != 0) return -1;
  if (ei_x_encode_string (buff, lvm_lv->lv_tags) != 0) return -1;
  if (ei_x_encode_string (buff, lvm_lv->mirror_log) != 0) return -1;
  if (ei_x_encode_string (buff, lvm_lv->modules) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_lvm_pv (ei_x_buff *buff, const struct guestfs_lvm_pv *lvm_pv)
{
  if (ei_x_encode_list_header (buff, 14) !=0) return -1;

  if (ei_x_encode_string (buff, lvm_pv->pv_name) != 0) return -1;
  if (ei_x_encode_string_len (buff, lvm_pv->pv_uuid, 32) != 0) return -1;
  if (ei_x_encode_string (buff, lvm_pv->pv_fmt) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_pv->pv_size) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_pv->dev_size) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_pv->pv_free) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_pv->pv_used) != 0) return -1;
  if (ei_x_encode_string (buff, lvm_pv->pv_attr) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_pv->pv_pe_count) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_pv->pv_pe_alloc_count) != 0) return -1;
  if (ei_x_encode_string (buff, lvm_pv->pv_tags) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_pv->pe_start) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_pv->pv_mda_count) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_pv->pv_mda_free) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_lvm_vg (ei_x_buff *buff, const struct guestfs_lvm_vg *lvm_vg)
{
  if (ei_x_encode_list_header (buff, 19) !=0) return -1;

  if (ei_x_encode_string (buff, lvm_vg->vg_name) != 0) return -1;
  if (ei_x_encode_string_len (buff, lvm_vg->vg_uuid, 32) != 0) return -1;
  if (ei_x_encode_string (buff, lvm_vg->vg_fmt) != 0) return -1;
  if (ei_x_encode_string (buff, lvm_vg->vg_attr) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_vg->vg_size) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_vg->vg_free) != 0) return -1;
  if (ei_x_encode_string (buff, lvm_vg->vg_sysid) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_vg->vg_extent_size) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_vg->vg_extent_count) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_vg->vg_free_count) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_vg->max_lv) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_vg->max_pv) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_vg->pv_count) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_vg->lv_count) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_vg->snap_count) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_vg->vg_seqno) != 0) return -1;
  if (ei_x_encode_string (buff, lvm_vg->vg_tags) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_vg->vg_mda_count) != 0) return -1;
  if (ei_x_encode_longlong (buff, lvm_vg->vg_mda_free) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_mdstat (ei_x_buff *buff, const struct guestfs_mdstat *mdstat)
{
  if (ei_x_encode_list_header (buff, 3) !=0) return -1;

  if (ei_x_encode_string (buff, mdstat->mdstat_device) != 0) return -1;
  if (ei_x_encode_long (buff, mdstat->mdstat_index) != 0) return -1;
  if (ei_x_encode_string (buff, mdstat->mdstat_flags) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_partition (ei_x_buff *buff, const struct guestfs_partition *partition)
{
  if (ei_x_encode_list_header (buff, 4) !=0) return -1;

  if (ei_x_encode_long (buff, partition->part_num) != 0) return -1;
  if (ei_x_encode_longlong (buff, partition->part_start) != 0) return -1;
  if (ei_x_encode_longlong (buff, partition->part_end) != 0) return -1;
  if (ei_x_encode_longlong (buff, partition->part_size) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_stat (ei_x_buff *buff, const struct guestfs_stat *stat)
{
  if (ei_x_encode_list_header (buff, 13) !=0) return -1;

  if (ei_x_encode_longlong (buff, stat->dev) != 0) return -1;
  if (ei_x_encode_longlong (buff, stat->ino) != 0) return -1;
  if (ei_x_encode_longlong (buff, stat->mode) != 0) return -1;
  if (ei_x_encode_longlong (buff, stat->nlink) != 0) return -1;
  if (ei_x_encode_longlong (buff, stat->uid) != 0) return -1;
  if (ei_x_encode_longlong (buff, stat->gid) != 0) return -1;
  if (ei_x_encode_longlong (buff, stat->rdev) != 0) return -1;
  if (ei_x_encode_longlong (buff, stat->size) != 0) return -1;
  if (ei_x_encode_longlong (buff, stat->blksize) != 0) return -1;
  if (ei_x_encode_longlong (buff, stat->blocks) != 0) return -1;
  if (ei_x_encode_longlong (buff, stat->atime) != 0) return -1;
  if (ei_x_encode_longlong (buff, stat->mtime) != 0) return -1;
  if (ei_x_encode_longlong (buff, stat->ctime) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_statns (ei_x_buff *buff, const struct guestfs_statns *statns)
{
  if (ei_x_encode_list_header (buff, 22) !=0) return -1;

  if (ei_x_encode_longlong (buff, statns->st_dev) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_ino) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_mode) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_nlink) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_uid) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_gid) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_rdev) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_size) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_blksize) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_blocks) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_atime_sec) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_atime_nsec) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_mtime_sec) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_mtime_nsec) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_ctime_sec) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_ctime_nsec) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_spare1) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_spare2) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_spare3) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_spare4) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_spare5) != 0) return -1;
  if (ei_x_encode_longlong (buff, statns->st_spare6) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_statvfs (ei_x_buff *buff, const struct guestfs_statvfs *statvfs)
{
  if (ei_x_encode_list_header (buff, 11) !=0) return -1;

  if (ei_x_encode_longlong (buff, statvfs->bsize) != 0) return -1;
  if (ei_x_encode_longlong (buff, statvfs->frsize) != 0) return -1;
  if (ei_x_encode_longlong (buff, statvfs->blocks) != 0) return -1;
  if (ei_x_encode_longlong (buff, statvfs->bfree) != 0) return -1;
  if (ei_x_encode_longlong (buff, statvfs->bavail) != 0) return -1;
  if (ei_x_encode_longlong (buff, statvfs->files) != 0) return -1;
  if (ei_x_encode_longlong (buff, statvfs->ffree) != 0) return -1;
  if (ei_x_encode_longlong (buff, statvfs->favail) != 0) return -1;
  if (ei_x_encode_longlong (buff, statvfs->fsid) != 0) return -1;
  if (ei_x_encode_longlong (buff, statvfs->flag) != 0) return -1;
  if (ei_x_encode_longlong (buff, statvfs->namemax) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_tsk_dirent (ei_x_buff *buff, const struct guestfs_tsk_dirent *tsk_dirent)
{
  if (ei_x_encode_list_header (buff, 16) !=0) return -1;

  if (ei_x_encode_longlong (buff, tsk_dirent->tsk_inode) != 0) return -1;
  if (ei_x_encode_char (buff, tsk_dirent->tsk_type) != 0) return -1;
  if (ei_x_encode_longlong (buff, tsk_dirent->tsk_size) != 0) return -1;
  if (ei_x_encode_string (buff, tsk_dirent->tsk_name) != 0) return -1;
  if (ei_x_encode_long (buff, tsk_dirent->tsk_flags) != 0) return -1;
  if (ei_x_encode_longlong (buff, tsk_dirent->tsk_atime_sec) != 0) return -1;
  if (ei_x_encode_longlong (buff, tsk_dirent->tsk_atime_nsec) != 0) return -1;
  if (ei_x_encode_longlong (buff, tsk_dirent->tsk_mtime_sec) != 0) return -1;
  if (ei_x_encode_longlong (buff, tsk_dirent->tsk_mtime_nsec) != 0) return -1;
  if (ei_x_encode_longlong (buff, tsk_dirent->tsk_ctime_sec) != 0) return -1;
  if (ei_x_encode_longlong (buff, tsk_dirent->tsk_ctime_nsec) != 0) return -1;
  if (ei_x_encode_longlong (buff, tsk_dirent->tsk_crtime_sec) != 0) return -1;
  if (ei_x_encode_longlong (buff, tsk_dirent->tsk_crtime_nsec) != 0) return -1;
  if (ei_x_encode_longlong (buff, tsk_dirent->tsk_nlink) != 0) return -1;
  if (ei_x_encode_string (buff, tsk_dirent->tsk_link) != 0) return -1;
  if (ei_x_encode_longlong (buff, tsk_dirent->tsk_spare1) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_utsname (ei_x_buff *buff, const struct guestfs_utsname *utsname)
{
  if (ei_x_encode_list_header (buff, 4) !=0) return -1;

  if (ei_x_encode_string (buff, utsname->uts_sysname) != 0) return -1;
  if (ei_x_encode_string (buff, utsname->uts_release) != 0) return -1;
  if (ei_x_encode_string (buff, utsname->uts_version) != 0) return -1;
  if (ei_x_encode_string (buff, utsname->uts_machine) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_version (ei_x_buff *buff, const struct guestfs_version *version)
{
  if (ei_x_encode_list_header (buff, 4) !=0) return -1;

  if (ei_x_encode_longlong (buff, version->major) != 0) return -1;
  if (ei_x_encode_longlong (buff, version->minor) != 0) return -1;
  if (ei_x_encode_longlong (buff, version->release) != 0) return -1;
  if (ei_x_encode_string (buff, version->extra) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_xattr (ei_x_buff *buff, const struct guestfs_xattr *xattr)
{
  if (ei_x_encode_list_header (buff, 2) !=0) return -1;

  if (ei_x_encode_string (buff, xattr->attrname) != 0) return -1;
  if (ei_x_encode_string_len (buff, xattr->attrval, xattr->attrval_len) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_xfsinfo (ei_x_buff *buff, const struct guestfs_xfsinfo *xfsinfo)
{
  if (ei_x_encode_list_header (buff, 25) !=0) return -1;

  if (ei_x_encode_string (buff, xfsinfo->xfs_mntpoint) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_inodesize) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_agcount) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_agsize) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_sectsize) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_attr) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_blocksize) != 0) return -1;
  if (ei_x_encode_longlong (buff, xfsinfo->xfs_datablocks) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_imaxpct) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_sunit) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_swidth) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_dirversion) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_dirblocksize) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_cimode) != 0) return -1;
  if (ei_x_encode_string (buff, xfsinfo->xfs_logname) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_logblocksize) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_logblocks) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_logversion) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_logsectsize) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_logsunit) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_lazycount) != 0) return -1;
  if (ei_x_encode_string (buff, xfsinfo->xfs_rtname) != 0) return -1;
  if (ei_x_encode_long (buff, xfsinfo->xfs_rtextsize) != 0) return -1;
  if (ei_x_encode_longlong (buff, xfsinfo->xfs_rtblocks) != 0) return -1;
  if (ei_x_encode_longlong (buff, xfsinfo->xfs_rtextents) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_yara_detection (ei_x_buff *buff, const struct guestfs_yara_detection *yara_detection)
{
  if (ei_x_encode_list_header (buff, 2) !=0) return -1;

  if (ei_x_encode_string (buff, yara_detection->yara_name) != 0) return -1;
  if (ei_x_encode_string (buff, yara_detection->yara_rule) != 0) return -1;

  if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_dirent_list (ei_x_buff *buff, const struct guestfs_dirent_list *dirents)
{
  size_t len = dirents->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_dirent (buff, &dirents->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_lvm_lv_list (ei_x_buff *buff, const struct guestfs_lvm_lv_list *lvm_lvs)
{
  size_t len = lvm_lvs->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_lvm_lv (buff, &lvm_lvs->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_btrfsqgroup_list (ei_x_buff *buff, const struct guestfs_btrfsqgroup_list *btrfsqgroups)
{
  size_t len = btrfsqgroups->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_btrfsqgroup (buff, &btrfsqgroups->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_tsk_dirent_list (ei_x_buff *buff, const struct guestfs_tsk_dirent_list *tsk_dirents)
{
  size_t len = tsk_dirents->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_tsk_dirent (buff, &tsk_dirents->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_partition_list (ei_x_buff *buff, const struct guestfs_partition_list *partitions)
{
  size_t len = partitions->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_partition (buff, &partitions->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_statns_list (ei_x_buff *buff, const struct guestfs_statns_list *statnss)
{
  size_t len = statnss->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_statns (buff, &statnss->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_application2_list (ei_x_buff *buff, const struct guestfs_application2_list *application2s)
{
  size_t len = application2s->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_application2 (buff, &application2s->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_inotify_event_list (ei_x_buff *buff, const struct guestfs_inotify_event_list *inotify_events)
{
  size_t len = inotify_events->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_inotify_event (buff, &inotify_events->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_application_list (ei_x_buff *buff, const struct guestfs_application_list *applications)
{
  size_t len = applications->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_application (buff, &applications->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_hivex_value_list (ei_x_buff *buff, const struct guestfs_hivex_value_list *hivex_values)
{
  size_t len = hivex_values->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_hivex_value (buff, &hivex_values->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_xattr_list (ei_x_buff *buff, const struct guestfs_xattr_list *xattrs)
{
  size_t len = xattrs->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_xattr (buff, &xattrs->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_lvm_pv_list (ei_x_buff *buff, const struct guestfs_lvm_pv_list *lvm_pvs)
{
  size_t len = lvm_pvs->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_lvm_pv (buff, &lvm_pvs->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_yara_detection_list (ei_x_buff *buff, const struct guestfs_yara_detection_list *yara_detections)
{
  size_t len = yara_detections->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_yara_detection (buff, &yara_detections->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_lvm_vg_list (ei_x_buff *buff, const struct guestfs_lvm_vg_list *lvm_vgs)
{
  size_t len = lvm_vgs->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_lvm_vg (buff, &lvm_vgs->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_btrfssubvolume_list (ei_x_buff *buff, const struct guestfs_btrfssubvolume_list *btrfssubvolumes)
{
  size_t len = btrfssubvolumes->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_btrfssubvolume (buff, &btrfssubvolumes->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_mdstat_list (ei_x_buff *buff, const struct guestfs_mdstat_list *mdstats)
{
  size_t len = mdstats->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_mdstat (buff, &mdstats->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_hivex_node_list (ei_x_buff *buff, const struct guestfs_hivex_node_list *hivex_nodes)
{
  size_t len = hivex_nodes->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_hivex_node (buff, &hivex_nodes->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}

int
make_stat_list (ei_x_buff *buff, const struct guestfs_stat_list *stats)
{
  size_t len = stats->len;
  size_t i;

  if (ei_x_encode_list_header (buff, len) != 0) return -1;
  for (i = 0; i < len; ++i) {
    if (make_stat (buff, &stats->val[i]) != 0) return -1;
  }
  if (len > 0)
    if (ei_x_encode_empty_list (buff) != 0) return -1;

  return 0;
}
