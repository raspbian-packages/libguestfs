/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED
 *          from the code in the generator/ subdirectory.
 * ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
 *
 * Copyright (C) 2009-2023 Hiroyuki Katsura <hiroyuki.katsura.0513@gmail.com>
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


use crate::base::*;
use crate::utils::*;
use crate::error::*;
use std::collections;
use std::convert;
use std::convert::TryFrom;
use std::ffi;
use std::os::raw::{c_char, c_int, c_void};
use std::ptr;
use std::slice;

extern "C" {
    fn free(buf: *const c_void);
}

pub enum Event {
    Close,
    SubprocessQuit,
    LaunchDone,
    Progress,
    Appliance,
    Library,
    Trace,
    Enter,
    LibvirtAuth,
    Warning,
}

impl Event {
    pub fn to_u64(&self) -> u64 {
        match self {
            Event::Close => 1,
            Event::SubprocessQuit => 2,
            Event::LaunchDone => 4,
            Event::Progress => 8,
            Event::Appliance => 16,
            Event::Library => 32,
            Event::Trace => 64,
            Event::Enter => 128,
            Event::LibvirtAuth => 256,
            Event::Warning => 512,
        }
    }
    pub fn from_bitmask(bitmask: u64) -> Option<Event> {
        match bitmask {
            1 => Some(Event::Close),
            2 => Some(Event::SubprocessQuit),
            4 => Some(Event::LaunchDone),
            8 => Some(Event::Progress),
            16 => Some(Event::Appliance),
            32 => Some(Event::Library),
            64 => Some(Event::Trace),
            128 => Some(Event::Enter),
            256 => Some(Event::LibvirtAuth),
            512 => Some(Event::Warning),
            _ => None,
        }
    }
}

pub const EVENT_ALL: [Event; 10] = [
    Event::Close,
    Event::SubprocessQuit,
    Event::LaunchDone,
    Event::Progress,
    Event::Appliance,
    Event::Library,
    Event::Trace,
    Event::Enter,
    Event::LibvirtAuth,
    Event::Warning,
];

pub struct Application {
    pub app_name: String,
    pub app_display_name: String,
    pub app_epoch: i32,
    pub app_version: String,
    pub app_release: String,
    pub app_install_path: String,
    pub app_trans_path: String,
    pub app_publisher: String,
    pub app_url: String,
    pub app_source_package: String,
    pub app_summary: String,
    pub app_description: String,
}
#[repr(C)]
struct RawApplication {
    app_name: *const c_char,
    app_display_name: *const c_char,
    app_epoch: i32,
    app_version: *const c_char,
    app_release: *const c_char,
    app_install_path: *const c_char,
    app_trans_path: *const c_char,
    app_publisher: *const c_char,
    app_url: *const c_char,
    app_source_package: *const c_char,
    app_summary: *const c_char,
    app_description: *const c_char,
}

impl TryFrom<*const RawApplication> for Application {
    type Error = Error;
    fn try_from(raw: *const RawApplication) -> Result<Self, Self::Error> {
        Ok(unsafe {
            Application {
                app_name: char_ptr_to_string((*raw).app_name)?,
                app_display_name: char_ptr_to_string((*raw).app_display_name)?,
                app_epoch: (*raw).app_epoch,
                app_version: char_ptr_to_string((*raw).app_version)?,
                app_release: char_ptr_to_string((*raw).app_release)?,
                app_install_path: char_ptr_to_string((*raw).app_install_path)?,
                app_trans_path: char_ptr_to_string((*raw).app_trans_path)?,
                app_publisher: char_ptr_to_string((*raw).app_publisher)?,
                app_url: char_ptr_to_string((*raw).app_url)?,
                app_source_package: char_ptr_to_string((*raw).app_source_package)?,
                app_summary: char_ptr_to_string((*raw).app_summary)?,
                app_description: char_ptr_to_string((*raw).app_description)?,
            }
        })
    }
}

pub struct Application2 {
    pub app2_name: String,
    pub app2_display_name: String,
    pub app2_epoch: i32,
    pub app2_version: String,
    pub app2_release: String,
    pub app2_arch: String,
    pub app2_install_path: String,
    pub app2_trans_path: String,
    pub app2_publisher: String,
    pub app2_url: String,
    pub app2_source_package: String,
    pub app2_summary: String,
    pub app2_description: String,
    pub app2_spare1: String,
    pub app2_spare2: String,
    pub app2_spare3: String,
    pub app2_spare4: String,
}
#[repr(C)]
struct RawApplication2 {
    app2_name: *const c_char,
    app2_display_name: *const c_char,
    app2_epoch: i32,
    app2_version: *const c_char,
    app2_release: *const c_char,
    app2_arch: *const c_char,
    app2_install_path: *const c_char,
    app2_trans_path: *const c_char,
    app2_publisher: *const c_char,
    app2_url: *const c_char,
    app2_source_package: *const c_char,
    app2_summary: *const c_char,
    app2_description: *const c_char,
    app2_spare1: *const c_char,
    app2_spare2: *const c_char,
    app2_spare3: *const c_char,
    app2_spare4: *const c_char,
}

impl TryFrom<*const RawApplication2> for Application2 {
    type Error = Error;
    fn try_from(raw: *const RawApplication2) -> Result<Self, Self::Error> {
        Ok(unsafe {
            Application2 {
                app2_name: char_ptr_to_string((*raw).app2_name)?,
                app2_display_name: char_ptr_to_string((*raw).app2_display_name)?,
                app2_epoch: (*raw).app2_epoch,
                app2_version: char_ptr_to_string((*raw).app2_version)?,
                app2_release: char_ptr_to_string((*raw).app2_release)?,
                app2_arch: char_ptr_to_string((*raw).app2_arch)?,
                app2_install_path: char_ptr_to_string((*raw).app2_install_path)?,
                app2_trans_path: char_ptr_to_string((*raw).app2_trans_path)?,
                app2_publisher: char_ptr_to_string((*raw).app2_publisher)?,
                app2_url: char_ptr_to_string((*raw).app2_url)?,
                app2_source_package: char_ptr_to_string((*raw).app2_source_package)?,
                app2_summary: char_ptr_to_string((*raw).app2_summary)?,
                app2_description: char_ptr_to_string((*raw).app2_description)?,
                app2_spare1: char_ptr_to_string((*raw).app2_spare1)?,
                app2_spare2: char_ptr_to_string((*raw).app2_spare2)?,
                app2_spare3: char_ptr_to_string((*raw).app2_spare3)?,
                app2_spare4: char_ptr_to_string((*raw).app2_spare4)?,
            }
        })
    }
}

pub struct BTRFSBalance {
    pub btrfsbalance_status: String,
    pub btrfsbalance_total: u64,
    pub btrfsbalance_balanced: u64,
    pub btrfsbalance_considered: u64,
    pub btrfsbalance_left: u64,
}
#[repr(C)]
struct RawBTRFSBalance {
    btrfsbalance_status: *const c_char,
    btrfsbalance_total: u64,
    btrfsbalance_balanced: u64,
    btrfsbalance_considered: u64,
    btrfsbalance_left: u64,
}

impl TryFrom<*const RawBTRFSBalance> for BTRFSBalance {
    type Error = Error;
    fn try_from(raw: *const RawBTRFSBalance) -> Result<Self, Self::Error> {
        Ok(unsafe {
            BTRFSBalance {
                btrfsbalance_status: char_ptr_to_string((*raw).btrfsbalance_status)?,
                btrfsbalance_total: (*raw).btrfsbalance_total,
                btrfsbalance_balanced: (*raw).btrfsbalance_balanced,
                btrfsbalance_considered: (*raw).btrfsbalance_considered,
                btrfsbalance_left: (*raw).btrfsbalance_left,
            }
        })
    }
}

pub struct BTRFSQgroup {
    pub btrfsqgroup_id: String,
    pub btrfsqgroup_rfer: u64,
    pub btrfsqgroup_excl: u64,
}
#[repr(C)]
struct RawBTRFSQgroup {
    btrfsqgroup_id: *const c_char,
    btrfsqgroup_rfer: u64,
    btrfsqgroup_excl: u64,
}

impl TryFrom<*const RawBTRFSQgroup> for BTRFSQgroup {
    type Error = Error;
    fn try_from(raw: *const RawBTRFSQgroup) -> Result<Self, Self::Error> {
        Ok(unsafe {
            BTRFSQgroup {
                btrfsqgroup_id: char_ptr_to_string((*raw).btrfsqgroup_id)?,
                btrfsqgroup_rfer: (*raw).btrfsqgroup_rfer,
                btrfsqgroup_excl: (*raw).btrfsqgroup_excl,
            }
        })
    }
}

pub struct BTRFSScrub {
    pub btrfsscrub_data_extents_scrubbed: u64,
    pub btrfsscrub_tree_extents_scrubbed: u64,
    pub btrfsscrub_data_bytes_scrubbed: u64,
    pub btrfsscrub_tree_bytes_scrubbed: u64,
    pub btrfsscrub_read_errors: u64,
    pub btrfsscrub_csum_errors: u64,
    pub btrfsscrub_verify_errors: u64,
    pub btrfsscrub_no_csum: u64,
    pub btrfsscrub_csum_discards: u64,
    pub btrfsscrub_super_errors: u64,
    pub btrfsscrub_malloc_errors: u64,
    pub btrfsscrub_uncorrectable_errors: u64,
    pub btrfsscrub_unverified_errors: u64,
    pub btrfsscrub_corrected_errors: u64,
    pub btrfsscrub_last_physical: u64,
}
#[repr(C)]
struct RawBTRFSScrub {
    btrfsscrub_data_extents_scrubbed: u64,
    btrfsscrub_tree_extents_scrubbed: u64,
    btrfsscrub_data_bytes_scrubbed: u64,
    btrfsscrub_tree_bytes_scrubbed: u64,
    btrfsscrub_read_errors: u64,
    btrfsscrub_csum_errors: u64,
    btrfsscrub_verify_errors: u64,
    btrfsscrub_no_csum: u64,
    btrfsscrub_csum_discards: u64,
    btrfsscrub_super_errors: u64,
    btrfsscrub_malloc_errors: u64,
    btrfsscrub_uncorrectable_errors: u64,
    btrfsscrub_unverified_errors: u64,
    btrfsscrub_corrected_errors: u64,
    btrfsscrub_last_physical: u64,
}

impl TryFrom<*const RawBTRFSScrub> for BTRFSScrub {
    type Error = Error;
    fn try_from(raw: *const RawBTRFSScrub) -> Result<Self, Self::Error> {
        Ok(unsafe {
            BTRFSScrub {
                btrfsscrub_data_extents_scrubbed: (*raw).btrfsscrub_data_extents_scrubbed,
                btrfsscrub_tree_extents_scrubbed: (*raw).btrfsscrub_tree_extents_scrubbed,
                btrfsscrub_data_bytes_scrubbed: (*raw).btrfsscrub_data_bytes_scrubbed,
                btrfsscrub_tree_bytes_scrubbed: (*raw).btrfsscrub_tree_bytes_scrubbed,
                btrfsscrub_read_errors: (*raw).btrfsscrub_read_errors,
                btrfsscrub_csum_errors: (*raw).btrfsscrub_csum_errors,
                btrfsscrub_verify_errors: (*raw).btrfsscrub_verify_errors,
                btrfsscrub_no_csum: (*raw).btrfsscrub_no_csum,
                btrfsscrub_csum_discards: (*raw).btrfsscrub_csum_discards,
                btrfsscrub_super_errors: (*raw).btrfsscrub_super_errors,
                btrfsscrub_malloc_errors: (*raw).btrfsscrub_malloc_errors,
                btrfsscrub_uncorrectable_errors: (*raw).btrfsscrub_uncorrectable_errors,
                btrfsscrub_unverified_errors: (*raw).btrfsscrub_unverified_errors,
                btrfsscrub_corrected_errors: (*raw).btrfsscrub_corrected_errors,
                btrfsscrub_last_physical: (*raw).btrfsscrub_last_physical,
            }
        })
    }
}

pub struct BTRFSSubvolume {
    pub btrfssubvolume_id: u64,
    pub btrfssubvolume_top_level_id: u64,
    pub btrfssubvolume_path: String,
}
#[repr(C)]
struct RawBTRFSSubvolume {
    btrfssubvolume_id: u64,
    btrfssubvolume_top_level_id: u64,
    btrfssubvolume_path: *const c_char,
}

impl TryFrom<*const RawBTRFSSubvolume> for BTRFSSubvolume {
    type Error = Error;
    fn try_from(raw: *const RawBTRFSSubvolume) -> Result<Self, Self::Error> {
        Ok(unsafe {
            BTRFSSubvolume {
                btrfssubvolume_id: (*raw).btrfssubvolume_id,
                btrfssubvolume_top_level_id: (*raw).btrfssubvolume_top_level_id,
                btrfssubvolume_path: char_ptr_to_string((*raw).btrfssubvolume_path)?,
            }
        })
    }
}

pub struct Dirent {
    pub ino: i64,
    pub ftyp: i8,
    pub name: String,
}
#[repr(C)]
struct RawDirent {
    ino: i64,
    ftyp: c_char,
    name: *const c_char,
}

impl TryFrom<*const RawDirent> for Dirent {
    type Error = Error;
    fn try_from(raw: *const RawDirent) -> Result<Self, Self::Error> {
        Ok(unsafe {
            Dirent {
                ino: (*raw).ino,
                ftyp: (*raw).ftyp as i8,
                name: char_ptr_to_string((*raw).name)?,
            }
        })
    }
}

pub struct HivexNode {
    pub hivex_node_h: i64,
}
#[repr(C)]
struct RawHivexNode {
    hivex_node_h: i64,
}

impl TryFrom<*const RawHivexNode> for HivexNode {
    type Error = Error;
    fn try_from(raw: *const RawHivexNode) -> Result<Self, Self::Error> {
        Ok(unsafe {
            HivexNode {
                hivex_node_h: (*raw).hivex_node_h,
            }
        })
    }
}

pub struct HivexValue {
    pub hivex_value_h: i64,
}
#[repr(C)]
struct RawHivexValue {
    hivex_value_h: i64,
}

impl TryFrom<*const RawHivexValue> for HivexValue {
    type Error = Error;
    fn try_from(raw: *const RawHivexValue) -> Result<Self, Self::Error> {
        Ok(unsafe {
            HivexValue {
                hivex_value_h: (*raw).hivex_value_h,
            }
        })
    }
}

pub struct INotifyEvent {
    pub in_wd: i64,
    pub in_mask: u32,
    pub in_cookie: u32,
    pub in_name: String,
}
#[repr(C)]
struct RawINotifyEvent {
    in_wd: i64,
    in_mask: u32,
    in_cookie: u32,
    in_name: *const c_char,
}

impl TryFrom<*const RawINotifyEvent> for INotifyEvent {
    type Error = Error;
    fn try_from(raw: *const RawINotifyEvent) -> Result<Self, Self::Error> {
        Ok(unsafe {
            INotifyEvent {
                in_wd: (*raw).in_wd,
                in_mask: (*raw).in_mask,
                in_cookie: (*raw).in_cookie,
                in_name: char_ptr_to_string((*raw).in_name)?,
            }
        })
    }
}

pub struct IntBool {
    pub i: i32,
    pub b: i32,
}
#[repr(C)]
struct RawIntBool {
    i: i32,
    b: i32,
}

impl TryFrom<*const RawIntBool> for IntBool {
    type Error = Error;
    fn try_from(raw: *const RawIntBool) -> Result<Self, Self::Error> {
        Ok(unsafe {
            IntBool {
                i: (*raw).i,
                b: (*raw).b,
            }
        })
    }
}

pub struct ISOInfo {
    pub iso_system_id: String,
    pub iso_volume_id: String,
    pub iso_volume_space_size: u32,
    pub iso_volume_set_size: u32,
    pub iso_volume_sequence_number: u32,
    pub iso_logical_block_size: u32,
    pub iso_volume_set_id: String,
    pub iso_publisher_id: String,
    pub iso_data_preparer_id: String,
    pub iso_application_id: String,
    pub iso_copyright_file_id: String,
    pub iso_abstract_file_id: String,
    pub iso_bibliographic_file_id: String,
    pub iso_volume_creation_t: i64,
    pub iso_volume_modification_t: i64,
    pub iso_volume_expiration_t: i64,
    pub iso_volume_effective_t: i64,
}
#[repr(C)]
struct RawISOInfo {
    iso_system_id: *const c_char,
    iso_volume_id: *const c_char,
    iso_volume_space_size: u32,
    iso_volume_set_size: u32,
    iso_volume_sequence_number: u32,
    iso_logical_block_size: u32,
    iso_volume_set_id: *const c_char,
    iso_publisher_id: *const c_char,
    iso_data_preparer_id: *const c_char,
    iso_application_id: *const c_char,
    iso_copyright_file_id: *const c_char,
    iso_abstract_file_id: *const c_char,
    iso_bibliographic_file_id: *const c_char,
    iso_volume_creation_t: i64,
    iso_volume_modification_t: i64,
    iso_volume_expiration_t: i64,
    iso_volume_effective_t: i64,
}

impl TryFrom<*const RawISOInfo> for ISOInfo {
    type Error = Error;
    fn try_from(raw: *const RawISOInfo) -> Result<Self, Self::Error> {
        Ok(unsafe {
            ISOInfo {
                iso_system_id: char_ptr_to_string((*raw).iso_system_id)?,
                iso_volume_id: char_ptr_to_string((*raw).iso_volume_id)?,
                iso_volume_space_size: (*raw).iso_volume_space_size,
                iso_volume_set_size: (*raw).iso_volume_set_size,
                iso_volume_sequence_number: (*raw).iso_volume_sequence_number,
                iso_logical_block_size: (*raw).iso_logical_block_size,
                iso_volume_set_id: char_ptr_to_string((*raw).iso_volume_set_id)?,
                iso_publisher_id: char_ptr_to_string((*raw).iso_publisher_id)?,
                iso_data_preparer_id: char_ptr_to_string((*raw).iso_data_preparer_id)?,
                iso_application_id: char_ptr_to_string((*raw).iso_application_id)?,
                iso_copyright_file_id: char_ptr_to_string((*raw).iso_copyright_file_id)?,
                iso_abstract_file_id: char_ptr_to_string((*raw).iso_abstract_file_id)?,
                iso_bibliographic_file_id: char_ptr_to_string((*raw).iso_bibliographic_file_id)?,
                iso_volume_creation_t: (*raw).iso_volume_creation_t,
                iso_volume_modification_t: (*raw).iso_volume_modification_t,
                iso_volume_expiration_t: (*raw).iso_volume_expiration_t,
                iso_volume_effective_t: (*raw).iso_volume_effective_t,
            }
        })
    }
}

pub struct LV {
    pub lv_name: String,
    pub lv_uuid: UUID,
    pub lv_attr: String,
    pub lv_major: i64,
    pub lv_minor: i64,
    pub lv_kernel_major: i64,
    pub lv_kernel_minor: i64,
    pub lv_size: u64,
    pub seg_count: i64,
    pub origin: String,
    pub snap_percent: Option<f32>,
    pub copy_percent: Option<f32>,
    pub move_pv: String,
    pub lv_tags: String,
    pub mirror_log: String,
    pub modules: String,
}
#[repr(C)]
struct RawLV {
    lv_name: *const c_char,
    lv_uuid: [u8; 32],
    lv_attr: *const c_char,
    lv_major: i64,
    lv_minor: i64,
    lv_kernel_major: i64,
    lv_kernel_minor: i64,
    lv_size: u64,
    seg_count: i64,
    origin: *const c_char,
    snap_percent: f32,
    copy_percent: f32,
    move_pv: *const c_char,
    lv_tags: *const c_char,
    mirror_log: *const c_char,
    modules: *const c_char,
}

impl TryFrom<*const RawLV> for LV {
    type Error = Error;
    fn try_from(raw: *const RawLV) -> Result<Self, Self::Error> {
        Ok(unsafe {
            LV {
                lv_name: char_ptr_to_string((*raw).lv_name)?,
                lv_uuid: UUID::new((*raw).lv_uuid),
                lv_attr: char_ptr_to_string((*raw).lv_attr)?,
                lv_major: (*raw).lv_major,
                lv_minor: (*raw).lv_minor,
                lv_kernel_major: (*raw).lv_kernel_major,
                lv_kernel_minor: (*raw).lv_kernel_minor,
                lv_size: (*raw).lv_size,
                seg_count: (*raw).seg_count,
                origin: char_ptr_to_string((*raw).origin)?,
                snap_percent: if (*raw).snap_percent < 0.0 {
                    None
                } else {
                    Some((*raw).snap_percent)
                },
                copy_percent: if (*raw).copy_percent < 0.0 {
                    None
                } else {
                    Some((*raw).copy_percent)
                },
                move_pv: char_ptr_to_string((*raw).move_pv)?,
                lv_tags: char_ptr_to_string((*raw).lv_tags)?,
                mirror_log: char_ptr_to_string((*raw).mirror_log)?,
                modules: char_ptr_to_string((*raw).modules)?,
            }
        })
    }
}

pub struct PV {
    pub pv_name: String,
    pub pv_uuid: UUID,
    pub pv_fmt: String,
    pub pv_size: u64,
    pub dev_size: u64,
    pub pv_free: u64,
    pub pv_used: u64,
    pub pv_attr: String,
    pub pv_pe_count: i64,
    pub pv_pe_alloc_count: i64,
    pub pv_tags: String,
    pub pe_start: u64,
    pub pv_mda_count: i64,
    pub pv_mda_free: u64,
}
#[repr(C)]
struct RawPV {
    pv_name: *const c_char,
    pv_uuid: [u8; 32],
    pv_fmt: *const c_char,
    pv_size: u64,
    dev_size: u64,
    pv_free: u64,
    pv_used: u64,
    pv_attr: *const c_char,
    pv_pe_count: i64,
    pv_pe_alloc_count: i64,
    pv_tags: *const c_char,
    pe_start: u64,
    pv_mda_count: i64,
    pv_mda_free: u64,
}

impl TryFrom<*const RawPV> for PV {
    type Error = Error;
    fn try_from(raw: *const RawPV) -> Result<Self, Self::Error> {
        Ok(unsafe {
            PV {
                pv_name: char_ptr_to_string((*raw).pv_name)?,
                pv_uuid: UUID::new((*raw).pv_uuid),
                pv_fmt: char_ptr_to_string((*raw).pv_fmt)?,
                pv_size: (*raw).pv_size,
                dev_size: (*raw).dev_size,
                pv_free: (*raw).pv_free,
                pv_used: (*raw).pv_used,
                pv_attr: char_ptr_to_string((*raw).pv_attr)?,
                pv_pe_count: (*raw).pv_pe_count,
                pv_pe_alloc_count: (*raw).pv_pe_alloc_count,
                pv_tags: char_ptr_to_string((*raw).pv_tags)?,
                pe_start: (*raw).pe_start,
                pv_mda_count: (*raw).pv_mda_count,
                pv_mda_free: (*raw).pv_mda_free,
            }
        })
    }
}

pub struct VG {
    pub vg_name: String,
    pub vg_uuid: UUID,
    pub vg_fmt: String,
    pub vg_attr: String,
    pub vg_size: u64,
    pub vg_free: u64,
    pub vg_sysid: String,
    pub vg_extent_size: u64,
    pub vg_extent_count: i64,
    pub vg_free_count: i64,
    pub max_lv: i64,
    pub max_pv: i64,
    pub pv_count: i64,
    pub lv_count: i64,
    pub snap_count: i64,
    pub vg_seqno: i64,
    pub vg_tags: String,
    pub vg_mda_count: i64,
    pub vg_mda_free: u64,
}
#[repr(C)]
struct RawVG {
    vg_name: *const c_char,
    vg_uuid: [u8; 32],
    vg_fmt: *const c_char,
    vg_attr: *const c_char,
    vg_size: u64,
    vg_free: u64,
    vg_sysid: *const c_char,
    vg_extent_size: u64,
    vg_extent_count: i64,
    vg_free_count: i64,
    max_lv: i64,
    max_pv: i64,
    pv_count: i64,
    lv_count: i64,
    snap_count: i64,
    vg_seqno: i64,
    vg_tags: *const c_char,
    vg_mda_count: i64,
    vg_mda_free: u64,
}

impl TryFrom<*const RawVG> for VG {
    type Error = Error;
    fn try_from(raw: *const RawVG) -> Result<Self, Self::Error> {
        Ok(unsafe {
            VG {
                vg_name: char_ptr_to_string((*raw).vg_name)?,
                vg_uuid: UUID::new((*raw).vg_uuid),
                vg_fmt: char_ptr_to_string((*raw).vg_fmt)?,
                vg_attr: char_ptr_to_string((*raw).vg_attr)?,
                vg_size: (*raw).vg_size,
                vg_free: (*raw).vg_free,
                vg_sysid: char_ptr_to_string((*raw).vg_sysid)?,
                vg_extent_size: (*raw).vg_extent_size,
                vg_extent_count: (*raw).vg_extent_count,
                vg_free_count: (*raw).vg_free_count,
                max_lv: (*raw).max_lv,
                max_pv: (*raw).max_pv,
                pv_count: (*raw).pv_count,
                lv_count: (*raw).lv_count,
                snap_count: (*raw).snap_count,
                vg_seqno: (*raw).vg_seqno,
                vg_tags: char_ptr_to_string((*raw).vg_tags)?,
                vg_mda_count: (*raw).vg_mda_count,
                vg_mda_free: (*raw).vg_mda_free,
            }
        })
    }
}

pub struct MDStat {
    pub mdstat_device: String,
    pub mdstat_index: i32,
    pub mdstat_flags: String,
}
#[repr(C)]
struct RawMDStat {
    mdstat_device: *const c_char,
    mdstat_index: i32,
    mdstat_flags: *const c_char,
}

impl TryFrom<*const RawMDStat> for MDStat {
    type Error = Error;
    fn try_from(raw: *const RawMDStat) -> Result<Self, Self::Error> {
        Ok(unsafe {
            MDStat {
                mdstat_device: char_ptr_to_string((*raw).mdstat_device)?,
                mdstat_index: (*raw).mdstat_index,
                mdstat_flags: char_ptr_to_string((*raw).mdstat_flags)?,
            }
        })
    }
}

pub struct Partition {
    pub part_num: i32,
    pub part_start: u64,
    pub part_end: u64,
    pub part_size: u64,
}
#[repr(C)]
struct RawPartition {
    part_num: i32,
    part_start: u64,
    part_end: u64,
    part_size: u64,
}

impl TryFrom<*const RawPartition> for Partition {
    type Error = Error;
    fn try_from(raw: *const RawPartition) -> Result<Self, Self::Error> {
        Ok(unsafe {
            Partition {
                part_num: (*raw).part_num,
                part_start: (*raw).part_start,
                part_end: (*raw).part_end,
                part_size: (*raw).part_size,
            }
        })
    }
}

pub struct Stat {
    pub dev: i64,
    pub ino: i64,
    pub mode: i64,
    pub nlink: i64,
    pub uid: i64,
    pub gid: i64,
    pub rdev: i64,
    pub size: i64,
    pub blksize: i64,
    pub blocks: i64,
    pub atime: i64,
    pub mtime: i64,
    pub ctime: i64,
}
#[repr(C)]
struct RawStat {
    dev: i64,
    ino: i64,
    mode: i64,
    nlink: i64,
    uid: i64,
    gid: i64,
    rdev: i64,
    size: i64,
    blksize: i64,
    blocks: i64,
    atime: i64,
    mtime: i64,
    ctime: i64,
}

impl TryFrom<*const RawStat> for Stat {
    type Error = Error;
    fn try_from(raw: *const RawStat) -> Result<Self, Self::Error> {
        Ok(unsafe {
            Stat {
                dev: (*raw).dev,
                ino: (*raw).ino,
                mode: (*raw).mode,
                nlink: (*raw).nlink,
                uid: (*raw).uid,
                gid: (*raw).gid,
                rdev: (*raw).rdev,
                size: (*raw).size,
                blksize: (*raw).blksize,
                blocks: (*raw).blocks,
                atime: (*raw).atime,
                mtime: (*raw).mtime,
                ctime: (*raw).ctime,
            }
        })
    }
}

pub struct StatNS {
    pub st_dev: i64,
    pub st_ino: i64,
    pub st_mode: i64,
    pub st_nlink: i64,
    pub st_uid: i64,
    pub st_gid: i64,
    pub st_rdev: i64,
    pub st_size: i64,
    pub st_blksize: i64,
    pub st_blocks: i64,
    pub st_atime_sec: i64,
    pub st_atime_nsec: i64,
    pub st_mtime_sec: i64,
    pub st_mtime_nsec: i64,
    pub st_ctime_sec: i64,
    pub st_ctime_nsec: i64,
    pub st_spare1: i64,
    pub st_spare2: i64,
    pub st_spare3: i64,
    pub st_spare4: i64,
    pub st_spare5: i64,
    pub st_spare6: i64,
}
#[repr(C)]
struct RawStatNS {
    st_dev: i64,
    st_ino: i64,
    st_mode: i64,
    st_nlink: i64,
    st_uid: i64,
    st_gid: i64,
    st_rdev: i64,
    st_size: i64,
    st_blksize: i64,
    st_blocks: i64,
    st_atime_sec: i64,
    st_atime_nsec: i64,
    st_mtime_sec: i64,
    st_mtime_nsec: i64,
    st_ctime_sec: i64,
    st_ctime_nsec: i64,
    st_spare1: i64,
    st_spare2: i64,
    st_spare3: i64,
    st_spare4: i64,
    st_spare5: i64,
    st_spare6: i64,
}

impl TryFrom<*const RawStatNS> for StatNS {
    type Error = Error;
    fn try_from(raw: *const RawStatNS) -> Result<Self, Self::Error> {
        Ok(unsafe {
            StatNS {
                st_dev: (*raw).st_dev,
                st_ino: (*raw).st_ino,
                st_mode: (*raw).st_mode,
                st_nlink: (*raw).st_nlink,
                st_uid: (*raw).st_uid,
                st_gid: (*raw).st_gid,
                st_rdev: (*raw).st_rdev,
                st_size: (*raw).st_size,
                st_blksize: (*raw).st_blksize,
                st_blocks: (*raw).st_blocks,
                st_atime_sec: (*raw).st_atime_sec,
                st_atime_nsec: (*raw).st_atime_nsec,
                st_mtime_sec: (*raw).st_mtime_sec,
                st_mtime_nsec: (*raw).st_mtime_nsec,
                st_ctime_sec: (*raw).st_ctime_sec,
                st_ctime_nsec: (*raw).st_ctime_nsec,
                st_spare1: (*raw).st_spare1,
                st_spare2: (*raw).st_spare2,
                st_spare3: (*raw).st_spare3,
                st_spare4: (*raw).st_spare4,
                st_spare5: (*raw).st_spare5,
                st_spare6: (*raw).st_spare6,
            }
        })
    }
}

pub struct StatVFS {
    pub bsize: i64,
    pub frsize: i64,
    pub blocks: i64,
    pub bfree: i64,
    pub bavail: i64,
    pub files: i64,
    pub ffree: i64,
    pub favail: i64,
    pub fsid: i64,
    pub flag: i64,
    pub namemax: i64,
}
#[repr(C)]
struct RawStatVFS {
    bsize: i64,
    frsize: i64,
    blocks: i64,
    bfree: i64,
    bavail: i64,
    files: i64,
    ffree: i64,
    favail: i64,
    fsid: i64,
    flag: i64,
    namemax: i64,
}

impl TryFrom<*const RawStatVFS> for StatVFS {
    type Error = Error;
    fn try_from(raw: *const RawStatVFS) -> Result<Self, Self::Error> {
        Ok(unsafe {
            StatVFS {
                bsize: (*raw).bsize,
                frsize: (*raw).frsize,
                blocks: (*raw).blocks,
                bfree: (*raw).bfree,
                bavail: (*raw).bavail,
                files: (*raw).files,
                ffree: (*raw).ffree,
                favail: (*raw).favail,
                fsid: (*raw).fsid,
                flag: (*raw).flag,
                namemax: (*raw).namemax,
            }
        })
    }
}

pub struct TSKDirent {
    pub tsk_inode: u64,
    pub tsk_type: i8,
    pub tsk_size: i64,
    pub tsk_name: String,
    pub tsk_flags: u32,
    pub tsk_atime_sec: i64,
    pub tsk_atime_nsec: i64,
    pub tsk_mtime_sec: i64,
    pub tsk_mtime_nsec: i64,
    pub tsk_ctime_sec: i64,
    pub tsk_ctime_nsec: i64,
    pub tsk_crtime_sec: i64,
    pub tsk_crtime_nsec: i64,
    pub tsk_nlink: i64,
    pub tsk_link: String,
    pub tsk_spare1: i64,
}
#[repr(C)]
struct RawTSKDirent {
    tsk_inode: u64,
    tsk_type: c_char,
    tsk_size: i64,
    tsk_name: *const c_char,
    tsk_flags: u32,
    tsk_atime_sec: i64,
    tsk_atime_nsec: i64,
    tsk_mtime_sec: i64,
    tsk_mtime_nsec: i64,
    tsk_ctime_sec: i64,
    tsk_ctime_nsec: i64,
    tsk_crtime_sec: i64,
    tsk_crtime_nsec: i64,
    tsk_nlink: i64,
    tsk_link: *const c_char,
    tsk_spare1: i64,
}

impl TryFrom<*const RawTSKDirent> for TSKDirent {
    type Error = Error;
    fn try_from(raw: *const RawTSKDirent) -> Result<Self, Self::Error> {
        Ok(unsafe {
            TSKDirent {
                tsk_inode: (*raw).tsk_inode,
                tsk_type: (*raw).tsk_type as i8,
                tsk_size: (*raw).tsk_size,
                tsk_name: char_ptr_to_string((*raw).tsk_name)?,
                tsk_flags: (*raw).tsk_flags,
                tsk_atime_sec: (*raw).tsk_atime_sec,
                tsk_atime_nsec: (*raw).tsk_atime_nsec,
                tsk_mtime_sec: (*raw).tsk_mtime_sec,
                tsk_mtime_nsec: (*raw).tsk_mtime_nsec,
                tsk_ctime_sec: (*raw).tsk_ctime_sec,
                tsk_ctime_nsec: (*raw).tsk_ctime_nsec,
                tsk_crtime_sec: (*raw).tsk_crtime_sec,
                tsk_crtime_nsec: (*raw).tsk_crtime_nsec,
                tsk_nlink: (*raw).tsk_nlink,
                tsk_link: char_ptr_to_string((*raw).tsk_link)?,
                tsk_spare1: (*raw).tsk_spare1,
            }
        })
    }
}

pub struct UTSName {
    pub uts_sysname: String,
    pub uts_release: String,
    pub uts_version: String,
    pub uts_machine: String,
}
#[repr(C)]
struct RawUTSName {
    uts_sysname: *const c_char,
    uts_release: *const c_char,
    uts_version: *const c_char,
    uts_machine: *const c_char,
}

impl TryFrom<*const RawUTSName> for UTSName {
    type Error = Error;
    fn try_from(raw: *const RawUTSName) -> Result<Self, Self::Error> {
        Ok(unsafe {
            UTSName {
                uts_sysname: char_ptr_to_string((*raw).uts_sysname)?,
                uts_release: char_ptr_to_string((*raw).uts_release)?,
                uts_version: char_ptr_to_string((*raw).uts_version)?,
                uts_machine: char_ptr_to_string((*raw).uts_machine)?,
            }
        })
    }
}

pub struct Version {
    pub major: i64,
    pub minor: i64,
    pub release: i64,
    pub extra: String,
}
#[repr(C)]
struct RawVersion {
    major: i64,
    minor: i64,
    release: i64,
    extra: *const c_char,
}

impl TryFrom<*const RawVersion> for Version {
    type Error = Error;
    fn try_from(raw: *const RawVersion) -> Result<Self, Self::Error> {
        Ok(unsafe {
            Version {
                major: (*raw).major,
                minor: (*raw).minor,
                release: (*raw).release,
                extra: char_ptr_to_string((*raw).extra)?,
            }
        })
    }
}

pub struct XAttr {
    pub attrname: String,
    pub attrval: Vec<u8>,
}
#[repr(C)]
struct RawXAttr {
    attrname: *const c_char,
    attrval_len: usize,
    attrval: *const c_char,
}

impl TryFrom<*const RawXAttr> for XAttr {
    type Error = Error;
    fn try_from(raw: *const RawXAttr) -> Result<Self, Self::Error> {
        Ok(unsafe {
            XAttr {
                attrname: char_ptr_to_string((*raw).attrname)?,
                attrval: slice::from_raw_parts((*raw).attrval as *const u8, (*raw).attrval_len).to_vec(),
            }
        })
    }
}

pub struct XFSInfo {
    pub xfs_mntpoint: String,
    pub xfs_inodesize: u32,
    pub xfs_agcount: u32,
    pub xfs_agsize: u32,
    pub xfs_sectsize: u32,
    pub xfs_attr: u32,
    pub xfs_blocksize: u32,
    pub xfs_datablocks: u64,
    pub xfs_imaxpct: u32,
    pub xfs_sunit: u32,
    pub xfs_swidth: u32,
    pub xfs_dirversion: u32,
    pub xfs_dirblocksize: u32,
    pub xfs_cimode: u32,
    pub xfs_logname: String,
    pub xfs_logblocksize: u32,
    pub xfs_logblocks: u32,
    pub xfs_logversion: u32,
    pub xfs_logsectsize: u32,
    pub xfs_logsunit: u32,
    pub xfs_lazycount: u32,
    pub xfs_rtname: String,
    pub xfs_rtextsize: u32,
    pub xfs_rtblocks: u64,
    pub xfs_rtextents: u64,
}
#[repr(C)]
struct RawXFSInfo {
    xfs_mntpoint: *const c_char,
    xfs_inodesize: u32,
    xfs_agcount: u32,
    xfs_agsize: u32,
    xfs_sectsize: u32,
    xfs_attr: u32,
    xfs_blocksize: u32,
    xfs_datablocks: u64,
    xfs_imaxpct: u32,
    xfs_sunit: u32,
    xfs_swidth: u32,
    xfs_dirversion: u32,
    xfs_dirblocksize: u32,
    xfs_cimode: u32,
    xfs_logname: *const c_char,
    xfs_logblocksize: u32,
    xfs_logblocks: u32,
    xfs_logversion: u32,
    xfs_logsectsize: u32,
    xfs_logsunit: u32,
    xfs_lazycount: u32,
    xfs_rtname: *const c_char,
    xfs_rtextsize: u32,
    xfs_rtblocks: u64,
    xfs_rtextents: u64,
}

impl TryFrom<*const RawXFSInfo> for XFSInfo {
    type Error = Error;
    fn try_from(raw: *const RawXFSInfo) -> Result<Self, Self::Error> {
        Ok(unsafe {
            XFSInfo {
                xfs_mntpoint: char_ptr_to_string((*raw).xfs_mntpoint)?,
                xfs_inodesize: (*raw).xfs_inodesize,
                xfs_agcount: (*raw).xfs_agcount,
                xfs_agsize: (*raw).xfs_agsize,
                xfs_sectsize: (*raw).xfs_sectsize,
                xfs_attr: (*raw).xfs_attr,
                xfs_blocksize: (*raw).xfs_blocksize,
                xfs_datablocks: (*raw).xfs_datablocks,
                xfs_imaxpct: (*raw).xfs_imaxpct,
                xfs_sunit: (*raw).xfs_sunit,
                xfs_swidth: (*raw).xfs_swidth,
                xfs_dirversion: (*raw).xfs_dirversion,
                xfs_dirblocksize: (*raw).xfs_dirblocksize,
                xfs_cimode: (*raw).xfs_cimode,
                xfs_logname: char_ptr_to_string((*raw).xfs_logname)?,
                xfs_logblocksize: (*raw).xfs_logblocksize,
                xfs_logblocks: (*raw).xfs_logblocks,
                xfs_logversion: (*raw).xfs_logversion,
                xfs_logsectsize: (*raw).xfs_logsectsize,
                xfs_logsunit: (*raw).xfs_logsunit,
                xfs_lazycount: (*raw).xfs_lazycount,
                xfs_rtname: char_ptr_to_string((*raw).xfs_rtname)?,
                xfs_rtextsize: (*raw).xfs_rtextsize,
                xfs_rtblocks: (*raw).xfs_rtblocks,
                xfs_rtextents: (*raw).xfs_rtextents,
            }
        })
    }
}

pub struct YaraDetection {
    pub yara_name: String,
    pub yara_rule: String,
}
#[repr(C)]
struct RawYaraDetection {
    yara_name: *const c_char,
    yara_rule: *const c_char,
}

impl TryFrom<*const RawYaraDetection> for YaraDetection {
    type Error = Error;
    fn try_from(raw: *const RawYaraDetection) -> Result<Self, Self::Error> {
        Ok(unsafe {
            YaraDetection {
                yara_name: char_ptr_to_string((*raw).yara_name)?,
                yara_rule: char_ptr_to_string((*raw).yara_rule)?,
            }
        })
    }
}

extern "C" {
    #[allow(dead_code)]
    fn guestfs_free_application(v: *const RawApplication);
    #[allow(dead_code)]
    fn guestfs_free_application_list(l: *const RawList<RawApplication>);
    #[allow(dead_code)]
    fn guestfs_free_application2(v: *const RawApplication2);
    #[allow(dead_code)]
    fn guestfs_free_application2_list(l: *const RawList<RawApplication2>);
    #[allow(dead_code)]
    fn guestfs_free_btrfsbalance(v: *const RawBTRFSBalance);
    #[allow(dead_code)]
    fn guestfs_free_btrfsbalance_list(l: *const RawList<RawBTRFSBalance>);
    #[allow(dead_code)]
    fn guestfs_free_btrfsqgroup(v: *const RawBTRFSQgroup);
    #[allow(dead_code)]
    fn guestfs_free_btrfsqgroup_list(l: *const RawList<RawBTRFSQgroup>);
    #[allow(dead_code)]
    fn guestfs_free_btrfsscrub(v: *const RawBTRFSScrub);
    #[allow(dead_code)]
    fn guestfs_free_btrfsscrub_list(l: *const RawList<RawBTRFSScrub>);
    #[allow(dead_code)]
    fn guestfs_free_btrfssubvolume(v: *const RawBTRFSSubvolume);
    #[allow(dead_code)]
    fn guestfs_free_btrfssubvolume_list(l: *const RawList<RawBTRFSSubvolume>);
    #[allow(dead_code)]
    fn guestfs_free_dirent(v: *const RawDirent);
    #[allow(dead_code)]
    fn guestfs_free_dirent_list(l: *const RawList<RawDirent>);
    #[allow(dead_code)]
    fn guestfs_free_hivex_node(v: *const RawHivexNode);
    #[allow(dead_code)]
    fn guestfs_free_hivex_node_list(l: *const RawList<RawHivexNode>);
    #[allow(dead_code)]
    fn guestfs_free_hivex_value(v: *const RawHivexValue);
    #[allow(dead_code)]
    fn guestfs_free_hivex_value_list(l: *const RawList<RawHivexValue>);
    #[allow(dead_code)]
    fn guestfs_free_inotify_event(v: *const RawINotifyEvent);
    #[allow(dead_code)]
    fn guestfs_free_inotify_event_list(l: *const RawList<RawINotifyEvent>);
    #[allow(dead_code)]
    fn guestfs_free_int_bool(v: *const RawIntBool);
    #[allow(dead_code)]
    fn guestfs_free_int_bool_list(l: *const RawList<RawIntBool>);
    #[allow(dead_code)]
    fn guestfs_free_isoinfo(v: *const RawISOInfo);
    #[allow(dead_code)]
    fn guestfs_free_isoinfo_list(l: *const RawList<RawISOInfo>);
    #[allow(dead_code)]
    fn guestfs_free_lvm_lv(v: *const RawLV);
    #[allow(dead_code)]
    fn guestfs_free_lvm_lv_list(l: *const RawList<RawLV>);
    #[allow(dead_code)]
    fn guestfs_free_lvm_pv(v: *const RawPV);
    #[allow(dead_code)]
    fn guestfs_free_lvm_pv_list(l: *const RawList<RawPV>);
    #[allow(dead_code)]
    fn guestfs_free_lvm_vg(v: *const RawVG);
    #[allow(dead_code)]
    fn guestfs_free_lvm_vg_list(l: *const RawList<RawVG>);
    #[allow(dead_code)]
    fn guestfs_free_mdstat(v: *const RawMDStat);
    #[allow(dead_code)]
    fn guestfs_free_mdstat_list(l: *const RawList<RawMDStat>);
    #[allow(dead_code)]
    fn guestfs_free_partition(v: *const RawPartition);
    #[allow(dead_code)]
    fn guestfs_free_partition_list(l: *const RawList<RawPartition>);
    #[allow(dead_code)]
    fn guestfs_free_stat(v: *const RawStat);
    #[allow(dead_code)]
    fn guestfs_free_stat_list(l: *const RawList<RawStat>);
    #[allow(dead_code)]
    fn guestfs_free_statns(v: *const RawStatNS);
    #[allow(dead_code)]
    fn guestfs_free_statns_list(l: *const RawList<RawStatNS>);
    #[allow(dead_code)]
    fn guestfs_free_statvfs(v: *const RawStatVFS);
    #[allow(dead_code)]
    fn guestfs_free_statvfs_list(l: *const RawList<RawStatVFS>);
    #[allow(dead_code)]
    fn guestfs_free_tsk_dirent(v: *const RawTSKDirent);
    #[allow(dead_code)]
    fn guestfs_free_tsk_dirent_list(l: *const RawList<RawTSKDirent>);
    #[allow(dead_code)]
    fn guestfs_free_utsname(v: *const RawUTSName);
    #[allow(dead_code)]
    fn guestfs_free_utsname_list(l: *const RawList<RawUTSName>);
    #[allow(dead_code)]
    fn guestfs_free_version(v: *const RawVersion);
    #[allow(dead_code)]
    fn guestfs_free_version_list(l: *const RawList<RawVersion>);
    #[allow(dead_code)]
    fn guestfs_free_xattr(v: *const RawXAttr);
    #[allow(dead_code)]
    fn guestfs_free_xattr_list(l: *const RawList<RawXAttr>);
    #[allow(dead_code)]
    fn guestfs_free_xfsinfo(v: *const RawXFSInfo);
    #[allow(dead_code)]
    fn guestfs_free_xfsinfo_list(l: *const RawList<RawXFSInfo>);
    #[allow(dead_code)]
    fn guestfs_free_yara_detection(v: *const RawYaraDetection);
    #[allow(dead_code)]
    fn guestfs_free_yara_detection_list(l: *const RawList<RawYaraDetection>);
}

/* Optional Structs */
#[derive(Default)]
pub struct AddDomainOptArgs<'a> {
    pub libvirturi: Option<&'a str>,
    pub readonly: Option<bool>,
    pub iface: Option<&'a str>,
    pub live: Option<bool>,
    pub allowuuid: Option<bool>,
    pub readonlydisk: Option<&'a str>,
    pub cachemode: Option<&'a str>,
    pub discard: Option<&'a str>,
    pub copyonread: Option<bool>,
}

struct CExprAddDomainOptArgs {
    libvirturi: Option<ffi::CString>,
    readonly: Option<c_int>,
    iface: Option<ffi::CString>,
    live: Option<c_int>,
    allowuuid: Option<c_int>,
    readonlydisk: Option<ffi::CString>,
    cachemode: Option<ffi::CString>,
    discard: Option<ffi::CString>,
    copyonread: Option<c_int>,
}

impl<'a> TryFrom<AddDomainOptArgs<'a>> for CExprAddDomainOptArgs {
    type Error = Error;
    fn try_from(optargs: AddDomainOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprAddDomainOptArgs {
        libvirturi: optargs.libvirturi.map(|v| ffi::CString::new(v)).transpose()?,
        readonly: optargs.readonly.map(|b| if b { 1 } else { 0 }),
        iface: optargs.iface.map(|v| ffi::CString::new(v)).transpose()?,
        live: optargs.live.map(|b| if b { 1 } else { 0 }),
        allowuuid: optargs.allowuuid.map(|b| if b { 1 } else { 0 }),
        readonlydisk: optargs.readonlydisk.map(|v| ffi::CString::new(v)).transpose()?,
        cachemode: optargs.cachemode.map(|v| ffi::CString::new(v)).transpose()?,
        discard: optargs.discard.map(|v| ffi::CString::new(v)).transpose()?,
        copyonread: optargs.copyonread.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawAddDomainOptArgs {
    bitmask: u64,
    libvirturi: *const c_char,
    readonly: c_int,
    iface: *const c_char,
    live: c_int,
    allowuuid: c_int,
    readonlydisk: *const c_char,
    cachemode: *const c_char,
    discard: *const c_char,
    copyonread: c_int,
}

impl convert::From<&CExprAddDomainOptArgs> for RawAddDomainOptArgs {
    fn from(optargs: &CExprAddDomainOptArgs) -> Self {
        let mut bitmask = 0;
        RawAddDomainOptArgs {
        libvirturi: if let Some(ref v) = optargs.libvirturi {
            bitmask |= 1 << 0;
            v.as_ptr()
        } else {
            ptr::null()
        },
        readonly: if let Some(v) = optargs.readonly {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        iface: if let Some(ref v) = optargs.iface {
            bitmask |= 1 << 2;
            v.as_ptr()
        } else {
            ptr::null()
        },
        live: if let Some(v) = optargs.live {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
        allowuuid: if let Some(v) = optargs.allowuuid {
            bitmask |= 1 << 4;
            v
        } else {
            0
        },
        readonlydisk: if let Some(ref v) = optargs.readonlydisk {
            bitmask |= 1 << 5;
            v.as_ptr()
        } else {
            ptr::null()
        },
        cachemode: if let Some(ref v) = optargs.cachemode {
            bitmask |= 1 << 6;
            v.as_ptr()
        } else {
            ptr::null()
        },
        discard: if let Some(ref v) = optargs.discard {
            bitmask |= 1 << 7;
            v.as_ptr()
        } else {
            ptr::null()
        },
        copyonread: if let Some(v) = optargs.copyonread {
            bitmask |= 1 << 8;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct AddDriveOptArgs<'a> {
    pub readonly: Option<bool>,
    pub format: Option<&'a str>,
    pub iface: Option<&'a str>,
    pub name: Option<&'a str>,
    pub label: Option<&'a str>,
    pub protocol: Option<&'a str>,
    pub server: Option<&'a [&'a str]>,
    pub username: Option<&'a str>,
    pub secret: Option<&'a str>,
    pub cachemode: Option<&'a str>,
    pub discard: Option<&'a str>,
    pub copyonread: Option<bool>,
    pub blocksize: Option<i32>,
}

struct CExprAddDriveOptArgs {
    readonly: Option<c_int>,
    format: Option<ffi::CString>,
    iface: Option<ffi::CString>,
    name: Option<ffi::CString>,
    label: Option<ffi::CString>,
    protocol: Option<ffi::CString>,
    server: Option<(Vec<ffi::CString>, Vec<*const c_char>)>,
    username: Option<ffi::CString>,
    secret: Option<ffi::CString>,
    cachemode: Option<ffi::CString>,
    discard: Option<ffi::CString>,
    copyonread: Option<c_int>,
    blocksize: Option<c_int>,
}

impl<'a> TryFrom<AddDriveOptArgs<'a>> for CExprAddDriveOptArgs {
    type Error = Error;
    fn try_from(optargs: AddDriveOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprAddDriveOptArgs {
        readonly: optargs.readonly.map(|b| if b { 1 } else { 0 }),
        format: optargs.format.map(|v| ffi::CString::new(v)).transpose()?,
        iface: optargs.iface.map(|v| ffi::CString::new(v)).transpose()?,
        name: optargs.name.map(|v| ffi::CString::new(v)).transpose()?,
        label: optargs.label.map(|v| ffi::CString::new(v)).transpose()?,
        protocol: optargs.protocol.map(|v| ffi::CString::new(v)).transpose()?,
        server: optargs.server.map(
                |v| Ok::<_, Error>({
                         let v = arg_string_list(v)?;
                         let mut w = (&v).into_iter()
                                         .map(|v| v.as_ptr())
                                         .collect::<Vec<_>>();
                         w.push(ptr::null());
                         (v, w)
                    })
                ).transpose()?,
        username: optargs.username.map(|v| ffi::CString::new(v)).transpose()?,
        secret: optargs.secret.map(|v| ffi::CString::new(v)).transpose()?,
        cachemode: optargs.cachemode.map(|v| ffi::CString::new(v)).transpose()?,
        discard: optargs.discard.map(|v| ffi::CString::new(v)).transpose()?,
        copyonread: optargs.copyonread.map(|b| if b { 1 } else { 0 }),
        blocksize: optargs.blocksize, 
         })
    }
}
#[repr(C)]
struct RawAddDriveOptArgs {
    bitmask: u64,
    readonly: c_int,
    format: *const c_char,
    iface: *const c_char,
    name: *const c_char,
    label: *const c_char,
    protocol: *const c_char,
    server: *const *const c_char,
    username: *const c_char,
    secret: *const c_char,
    cachemode: *const c_char,
    discard: *const c_char,
    copyonread: c_int,
    blocksize: c_int,
}

impl convert::From<&CExprAddDriveOptArgs> for RawAddDriveOptArgs {
    fn from(optargs: &CExprAddDriveOptArgs) -> Self {
        let mut bitmask = 0;
        RawAddDriveOptArgs {
        readonly: if let Some(v) = optargs.readonly {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        format: if let Some(ref v) = optargs.format {
            bitmask |= 1 << 1;
            v.as_ptr()
        } else {
            ptr::null()
        },
        iface: if let Some(ref v) = optargs.iface {
            bitmask |= 1 << 2;
            v.as_ptr()
        } else {
            ptr::null()
        },
        name: if let Some(ref v) = optargs.name {
            bitmask |= 1 << 3;
            v.as_ptr()
        } else {
            ptr::null()
        },
        label: if let Some(ref v) = optargs.label {
            bitmask |= 1 << 4;
            v.as_ptr()
        } else {
            ptr::null()
        },
        protocol: if let Some(ref v) = optargs.protocol {
            bitmask |= 1 << 5;
            v.as_ptr()
        } else {
            ptr::null()
        },
        server: if let Some((_, ref v)) = optargs.server {
            bitmask |= 1 << 6;
            v.as_ptr()
        } else {
            ptr::null()
        },
        username: if let Some(ref v) = optargs.username {
            bitmask |= 1 << 7;
            v.as_ptr()
        } else {
            ptr::null()
        },
        secret: if let Some(ref v) = optargs.secret {
            bitmask |= 1 << 8;
            v.as_ptr()
        } else {
            ptr::null()
        },
        cachemode: if let Some(ref v) = optargs.cachemode {
            bitmask |= 1 << 9;
            v.as_ptr()
        } else {
            ptr::null()
        },
        discard: if let Some(ref v) = optargs.discard {
            bitmask |= 1 << 10;
            v.as_ptr()
        } else {
            ptr::null()
        },
        copyonread: if let Some(v) = optargs.copyonread {
            bitmask |= 1 << 11;
            v
        } else {
            0
        },
        blocksize: if let Some(v) = optargs.blocksize {
            bitmask |= 1 << 12;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct AddDriveScratchOptArgs<'a> {
    pub name: Option<&'a str>,
    pub label: Option<&'a str>,
    pub blocksize: Option<i32>,
}

struct CExprAddDriveScratchOptArgs {
    name: Option<ffi::CString>,
    label: Option<ffi::CString>,
    blocksize: Option<c_int>,
}

impl<'a> TryFrom<AddDriveScratchOptArgs<'a>> for CExprAddDriveScratchOptArgs {
    type Error = Error;
    fn try_from(optargs: AddDriveScratchOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprAddDriveScratchOptArgs {
        name: optargs.name.map(|v| ffi::CString::new(v)).transpose()?,
        label: optargs.label.map(|v| ffi::CString::new(v)).transpose()?,
        blocksize: optargs.blocksize, 
         })
    }
}
#[repr(C)]
struct RawAddDriveScratchOptArgs {
    bitmask: u64,
    name: *const c_char,
    label: *const c_char,
    blocksize: c_int,
}

impl convert::From<&CExprAddDriveScratchOptArgs> for RawAddDriveScratchOptArgs {
    fn from(optargs: &CExprAddDriveScratchOptArgs) -> Self {
        let mut bitmask = 0;
        RawAddDriveScratchOptArgs {
        name: if let Some(ref v) = optargs.name {
            bitmask |= 1 << 0;
            v.as_ptr()
        } else {
            ptr::null()
        },
        label: if let Some(ref v) = optargs.label {
            bitmask |= 1 << 1;
            v.as_ptr()
        } else {
            ptr::null()
        },
        blocksize: if let Some(v) = optargs.blocksize {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct AddLibvirtDomOptArgs<'a> {
    pub readonly: Option<bool>,
    pub iface: Option<&'a str>,
    pub live: Option<bool>,
    pub readonlydisk: Option<&'a str>,
    pub cachemode: Option<&'a str>,
    pub discard: Option<&'a str>,
    pub copyonread: Option<bool>,
}

struct CExprAddLibvirtDomOptArgs {
    readonly: Option<c_int>,
    iface: Option<ffi::CString>,
    live: Option<c_int>,
    readonlydisk: Option<ffi::CString>,
    cachemode: Option<ffi::CString>,
    discard: Option<ffi::CString>,
    copyonread: Option<c_int>,
}

impl<'a> TryFrom<AddLibvirtDomOptArgs<'a>> for CExprAddLibvirtDomOptArgs {
    type Error = Error;
    fn try_from(optargs: AddLibvirtDomOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprAddLibvirtDomOptArgs {
        readonly: optargs.readonly.map(|b| if b { 1 } else { 0 }),
        iface: optargs.iface.map(|v| ffi::CString::new(v)).transpose()?,
        live: optargs.live.map(|b| if b { 1 } else { 0 }),
        readonlydisk: optargs.readonlydisk.map(|v| ffi::CString::new(v)).transpose()?,
        cachemode: optargs.cachemode.map(|v| ffi::CString::new(v)).transpose()?,
        discard: optargs.discard.map(|v| ffi::CString::new(v)).transpose()?,
        copyonread: optargs.copyonread.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawAddLibvirtDomOptArgs {
    bitmask: u64,
    readonly: c_int,
    iface: *const c_char,
    live: c_int,
    readonlydisk: *const c_char,
    cachemode: *const c_char,
    discard: *const c_char,
    copyonread: c_int,
}

impl convert::From<&CExprAddLibvirtDomOptArgs> for RawAddLibvirtDomOptArgs {
    fn from(optargs: &CExprAddLibvirtDomOptArgs) -> Self {
        let mut bitmask = 0;
        RawAddLibvirtDomOptArgs {
        readonly: if let Some(v) = optargs.readonly {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        iface: if let Some(ref v) = optargs.iface {
            bitmask |= 1 << 1;
            v.as_ptr()
        } else {
            ptr::null()
        },
        live: if let Some(v) = optargs.live {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        readonlydisk: if let Some(ref v) = optargs.readonlydisk {
            bitmask |= 1 << 3;
            v.as_ptr()
        } else {
            ptr::null()
        },
        cachemode: if let Some(ref v) = optargs.cachemode {
            bitmask |= 1 << 4;
            v.as_ptr()
        } else {
            ptr::null()
        },
        discard: if let Some(ref v) = optargs.discard {
            bitmask |= 1 << 5;
            v.as_ptr()
        } else {
            ptr::null()
        },
        copyonread: if let Some(v) = optargs.copyonread {
            bitmask |= 1 << 6;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct AugTransformOptArgs {
    pub remove: Option<bool>,
}

struct CExprAugTransformOptArgs {
    remove: Option<c_int>,
}

impl TryFrom<AugTransformOptArgs> for CExprAugTransformOptArgs {
    type Error = Error;
    fn try_from(optargs: AugTransformOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprAugTransformOptArgs {
        remove: optargs.remove.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawAugTransformOptArgs {
    bitmask: u64,
    remove: c_int,
}

impl convert::From<&CExprAugTransformOptArgs> for RawAugTransformOptArgs {
    fn from(optargs: &CExprAugTransformOptArgs) -> Self {
        let mut bitmask = 0;
        RawAugTransformOptArgs {
        remove: if let Some(v) = optargs.remove {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct BtrfsFilesystemDefragmentOptArgs<'a> {
    pub flush: Option<bool>,
    pub compress: Option<&'a str>,
}

struct CExprBtrfsFilesystemDefragmentOptArgs {
    flush: Option<c_int>,
    compress: Option<ffi::CString>,
}

impl<'a> TryFrom<BtrfsFilesystemDefragmentOptArgs<'a>> for CExprBtrfsFilesystemDefragmentOptArgs {
    type Error = Error;
    fn try_from(optargs: BtrfsFilesystemDefragmentOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprBtrfsFilesystemDefragmentOptArgs {
        flush: optargs.flush.map(|b| if b { 1 } else { 0 }),
        compress: optargs.compress.map(|v| ffi::CString::new(v)).transpose()?,
         })
    }
}
#[repr(C)]
struct RawBtrfsFilesystemDefragmentOptArgs {
    bitmask: u64,
    flush: c_int,
    compress: *const c_char,
}

impl convert::From<&CExprBtrfsFilesystemDefragmentOptArgs> for RawBtrfsFilesystemDefragmentOptArgs {
    fn from(optargs: &CExprBtrfsFilesystemDefragmentOptArgs) -> Self {
        let mut bitmask = 0;
        RawBtrfsFilesystemDefragmentOptArgs {
        flush: if let Some(v) = optargs.flush {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        compress: if let Some(ref v) = optargs.compress {
            bitmask |= 1 << 1;
            v.as_ptr()
        } else {
            ptr::null()
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct BtrfsFilesystemResizeOptArgs {
    pub size: Option<i64>,
}

struct CExprBtrfsFilesystemResizeOptArgs {
    size: Option<i64>,
}

impl TryFrom<BtrfsFilesystemResizeOptArgs> for CExprBtrfsFilesystemResizeOptArgs {
    type Error = Error;
    fn try_from(optargs: BtrfsFilesystemResizeOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprBtrfsFilesystemResizeOptArgs {
        size: optargs.size, 
         })
    }
}
#[repr(C)]
struct RawBtrfsFilesystemResizeOptArgs {
    bitmask: u64,
    size: i64,
}

impl convert::From<&CExprBtrfsFilesystemResizeOptArgs> for RawBtrfsFilesystemResizeOptArgs {
    fn from(optargs: &CExprBtrfsFilesystemResizeOptArgs) -> Self {
        let mut bitmask = 0;
        RawBtrfsFilesystemResizeOptArgs {
        size: if let Some(v) = optargs.size {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct BtrfsFsckOptArgs {
    pub superblock: Option<i64>,
    pub repair: Option<bool>,
}

struct CExprBtrfsFsckOptArgs {
    superblock: Option<i64>,
    repair: Option<c_int>,
}

impl TryFrom<BtrfsFsckOptArgs> for CExprBtrfsFsckOptArgs {
    type Error = Error;
    fn try_from(optargs: BtrfsFsckOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprBtrfsFsckOptArgs {
        superblock: optargs.superblock, 
        repair: optargs.repair.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawBtrfsFsckOptArgs {
    bitmask: u64,
    superblock: i64,
    repair: c_int,
}

impl convert::From<&CExprBtrfsFsckOptArgs> for RawBtrfsFsckOptArgs {
    fn from(optargs: &CExprBtrfsFsckOptArgs) -> Self {
        let mut bitmask = 0;
        RawBtrfsFsckOptArgs {
        superblock: if let Some(v) = optargs.superblock {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        repair: if let Some(v) = optargs.repair {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct BtrfsImageOptArgs {
    pub compresslevel: Option<i32>,
}

struct CExprBtrfsImageOptArgs {
    compresslevel: Option<c_int>,
}

impl TryFrom<BtrfsImageOptArgs> for CExprBtrfsImageOptArgs {
    type Error = Error;
    fn try_from(optargs: BtrfsImageOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprBtrfsImageOptArgs {
        compresslevel: optargs.compresslevel, 
         })
    }
}
#[repr(C)]
struct RawBtrfsImageOptArgs {
    bitmask: u64,
    compresslevel: c_int,
}

impl convert::From<&CExprBtrfsImageOptArgs> for RawBtrfsImageOptArgs {
    fn from(optargs: &CExprBtrfsImageOptArgs) -> Self {
        let mut bitmask = 0;
        RawBtrfsImageOptArgs {
        compresslevel: if let Some(v) = optargs.compresslevel {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct BtrfsSubvolumeCreateOptArgs<'a> {
    pub qgroupid: Option<&'a str>,
}

struct CExprBtrfsSubvolumeCreateOptArgs {
    qgroupid: Option<ffi::CString>,
}

impl<'a> TryFrom<BtrfsSubvolumeCreateOptArgs<'a>> for CExprBtrfsSubvolumeCreateOptArgs {
    type Error = Error;
    fn try_from(optargs: BtrfsSubvolumeCreateOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprBtrfsSubvolumeCreateOptArgs {
        qgroupid: optargs.qgroupid.map(|v| ffi::CString::new(v)).transpose()?,
         })
    }
}
#[repr(C)]
struct RawBtrfsSubvolumeCreateOptArgs {
    bitmask: u64,
    qgroupid: *const c_char,
}

impl convert::From<&CExprBtrfsSubvolumeCreateOptArgs> for RawBtrfsSubvolumeCreateOptArgs {
    fn from(optargs: &CExprBtrfsSubvolumeCreateOptArgs) -> Self {
        let mut bitmask = 0;
        RawBtrfsSubvolumeCreateOptArgs {
        qgroupid: if let Some(ref v) = optargs.qgroupid {
            bitmask |= 1 << 0;
            v.as_ptr()
        } else {
            ptr::null()
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct BtrfsSubvolumeSnapshotOptArgs<'a> {
    pub ro: Option<bool>,
    pub qgroupid: Option<&'a str>,
}

struct CExprBtrfsSubvolumeSnapshotOptArgs {
    ro: Option<c_int>,
    qgroupid: Option<ffi::CString>,
}

impl<'a> TryFrom<BtrfsSubvolumeSnapshotOptArgs<'a>> for CExprBtrfsSubvolumeSnapshotOptArgs {
    type Error = Error;
    fn try_from(optargs: BtrfsSubvolumeSnapshotOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprBtrfsSubvolumeSnapshotOptArgs {
        ro: optargs.ro.map(|b| if b { 1 } else { 0 }),
        qgroupid: optargs.qgroupid.map(|v| ffi::CString::new(v)).transpose()?,
         })
    }
}
#[repr(C)]
struct RawBtrfsSubvolumeSnapshotOptArgs {
    bitmask: u64,
    ro: c_int,
    qgroupid: *const c_char,
}

impl convert::From<&CExprBtrfsSubvolumeSnapshotOptArgs> for RawBtrfsSubvolumeSnapshotOptArgs {
    fn from(optargs: &CExprBtrfsSubvolumeSnapshotOptArgs) -> Self {
        let mut bitmask = 0;
        RawBtrfsSubvolumeSnapshotOptArgs {
        ro: if let Some(v) = optargs.ro {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        qgroupid: if let Some(ref v) = optargs.qgroupid {
            bitmask |= 1 << 1;
            v.as_ptr()
        } else {
            ptr::null()
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct CompressDeviceOutOptArgs {
    pub level: Option<i32>,
}

struct CExprCompressDeviceOutOptArgs {
    level: Option<c_int>,
}

impl TryFrom<CompressDeviceOutOptArgs> for CExprCompressDeviceOutOptArgs {
    type Error = Error;
    fn try_from(optargs: CompressDeviceOutOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprCompressDeviceOutOptArgs {
        level: optargs.level, 
         })
    }
}
#[repr(C)]
struct RawCompressDeviceOutOptArgs {
    bitmask: u64,
    level: c_int,
}

impl convert::From<&CExprCompressDeviceOutOptArgs> for RawCompressDeviceOutOptArgs {
    fn from(optargs: &CExprCompressDeviceOutOptArgs) -> Self {
        let mut bitmask = 0;
        RawCompressDeviceOutOptArgs {
        level: if let Some(v) = optargs.level {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct CompressOutOptArgs {
    pub level: Option<i32>,
}

struct CExprCompressOutOptArgs {
    level: Option<c_int>,
}

impl TryFrom<CompressOutOptArgs> for CExprCompressOutOptArgs {
    type Error = Error;
    fn try_from(optargs: CompressOutOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprCompressOutOptArgs {
        level: optargs.level, 
         })
    }
}
#[repr(C)]
struct RawCompressOutOptArgs {
    bitmask: u64,
    level: c_int,
}

impl convert::From<&CExprCompressOutOptArgs> for RawCompressOutOptArgs {
    fn from(optargs: &CExprCompressOutOptArgs) -> Self {
        let mut bitmask = 0;
        RawCompressOutOptArgs {
        level: if let Some(v) = optargs.level {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct CopyAttributesOptArgs {
    pub all: Option<bool>,
    pub mode: Option<bool>,
    pub xattributes: Option<bool>,
    pub ownership: Option<bool>,
}

struct CExprCopyAttributesOptArgs {
    all: Option<c_int>,
    mode: Option<c_int>,
    xattributes: Option<c_int>,
    ownership: Option<c_int>,
}

impl TryFrom<CopyAttributesOptArgs> for CExprCopyAttributesOptArgs {
    type Error = Error;
    fn try_from(optargs: CopyAttributesOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprCopyAttributesOptArgs {
        all: optargs.all.map(|b| if b { 1 } else { 0 }),
        mode: optargs.mode.map(|b| if b { 1 } else { 0 }),
        xattributes: optargs.xattributes.map(|b| if b { 1 } else { 0 }),
        ownership: optargs.ownership.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawCopyAttributesOptArgs {
    bitmask: u64,
    all: c_int,
    mode: c_int,
    xattributes: c_int,
    ownership: c_int,
}

impl convert::From<&CExprCopyAttributesOptArgs> for RawCopyAttributesOptArgs {
    fn from(optargs: &CExprCopyAttributesOptArgs) -> Self {
        let mut bitmask = 0;
        RawCopyAttributesOptArgs {
        all: if let Some(v) = optargs.all {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        mode: if let Some(v) = optargs.mode {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        xattributes: if let Some(v) = optargs.xattributes {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        ownership: if let Some(v) = optargs.ownership {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct CopyDeviceToDeviceOptArgs {
    pub srcoffset: Option<i64>,
    pub destoffset: Option<i64>,
    pub size: Option<i64>,
    pub sparse: Option<bool>,
    pub append: Option<bool>,
}

struct CExprCopyDeviceToDeviceOptArgs {
    srcoffset: Option<i64>,
    destoffset: Option<i64>,
    size: Option<i64>,
    sparse: Option<c_int>,
    append: Option<c_int>,
}

impl TryFrom<CopyDeviceToDeviceOptArgs> for CExprCopyDeviceToDeviceOptArgs {
    type Error = Error;
    fn try_from(optargs: CopyDeviceToDeviceOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprCopyDeviceToDeviceOptArgs {
        srcoffset: optargs.srcoffset, 
        destoffset: optargs.destoffset, 
        size: optargs.size, 
        sparse: optargs.sparse.map(|b| if b { 1 } else { 0 }),
        append: optargs.append.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawCopyDeviceToDeviceOptArgs {
    bitmask: u64,
    srcoffset: i64,
    destoffset: i64,
    size: i64,
    sparse: c_int,
    append: c_int,
}

impl convert::From<&CExprCopyDeviceToDeviceOptArgs> for RawCopyDeviceToDeviceOptArgs {
    fn from(optargs: &CExprCopyDeviceToDeviceOptArgs) -> Self {
        let mut bitmask = 0;
        RawCopyDeviceToDeviceOptArgs {
        srcoffset: if let Some(v) = optargs.srcoffset {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        destoffset: if let Some(v) = optargs.destoffset {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        size: if let Some(v) = optargs.size {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        sparse: if let Some(v) = optargs.sparse {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
        append: if let Some(v) = optargs.append {
            bitmask |= 1 << 4;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct CopyDeviceToFileOptArgs {
    pub srcoffset: Option<i64>,
    pub destoffset: Option<i64>,
    pub size: Option<i64>,
    pub sparse: Option<bool>,
    pub append: Option<bool>,
}

struct CExprCopyDeviceToFileOptArgs {
    srcoffset: Option<i64>,
    destoffset: Option<i64>,
    size: Option<i64>,
    sparse: Option<c_int>,
    append: Option<c_int>,
}

impl TryFrom<CopyDeviceToFileOptArgs> for CExprCopyDeviceToFileOptArgs {
    type Error = Error;
    fn try_from(optargs: CopyDeviceToFileOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprCopyDeviceToFileOptArgs {
        srcoffset: optargs.srcoffset, 
        destoffset: optargs.destoffset, 
        size: optargs.size, 
        sparse: optargs.sparse.map(|b| if b { 1 } else { 0 }),
        append: optargs.append.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawCopyDeviceToFileOptArgs {
    bitmask: u64,
    srcoffset: i64,
    destoffset: i64,
    size: i64,
    sparse: c_int,
    append: c_int,
}

impl convert::From<&CExprCopyDeviceToFileOptArgs> for RawCopyDeviceToFileOptArgs {
    fn from(optargs: &CExprCopyDeviceToFileOptArgs) -> Self {
        let mut bitmask = 0;
        RawCopyDeviceToFileOptArgs {
        srcoffset: if let Some(v) = optargs.srcoffset {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        destoffset: if let Some(v) = optargs.destoffset {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        size: if let Some(v) = optargs.size {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        sparse: if let Some(v) = optargs.sparse {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
        append: if let Some(v) = optargs.append {
            bitmask |= 1 << 4;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct CopyFileToDeviceOptArgs {
    pub srcoffset: Option<i64>,
    pub destoffset: Option<i64>,
    pub size: Option<i64>,
    pub sparse: Option<bool>,
    pub append: Option<bool>,
}

struct CExprCopyFileToDeviceOptArgs {
    srcoffset: Option<i64>,
    destoffset: Option<i64>,
    size: Option<i64>,
    sparse: Option<c_int>,
    append: Option<c_int>,
}

impl TryFrom<CopyFileToDeviceOptArgs> for CExprCopyFileToDeviceOptArgs {
    type Error = Error;
    fn try_from(optargs: CopyFileToDeviceOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprCopyFileToDeviceOptArgs {
        srcoffset: optargs.srcoffset, 
        destoffset: optargs.destoffset, 
        size: optargs.size, 
        sparse: optargs.sparse.map(|b| if b { 1 } else { 0 }),
        append: optargs.append.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawCopyFileToDeviceOptArgs {
    bitmask: u64,
    srcoffset: i64,
    destoffset: i64,
    size: i64,
    sparse: c_int,
    append: c_int,
}

impl convert::From<&CExprCopyFileToDeviceOptArgs> for RawCopyFileToDeviceOptArgs {
    fn from(optargs: &CExprCopyFileToDeviceOptArgs) -> Self {
        let mut bitmask = 0;
        RawCopyFileToDeviceOptArgs {
        srcoffset: if let Some(v) = optargs.srcoffset {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        destoffset: if let Some(v) = optargs.destoffset {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        size: if let Some(v) = optargs.size {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        sparse: if let Some(v) = optargs.sparse {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
        append: if let Some(v) = optargs.append {
            bitmask |= 1 << 4;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct CopyFileToFileOptArgs {
    pub srcoffset: Option<i64>,
    pub destoffset: Option<i64>,
    pub size: Option<i64>,
    pub sparse: Option<bool>,
    pub append: Option<bool>,
}

struct CExprCopyFileToFileOptArgs {
    srcoffset: Option<i64>,
    destoffset: Option<i64>,
    size: Option<i64>,
    sparse: Option<c_int>,
    append: Option<c_int>,
}

impl TryFrom<CopyFileToFileOptArgs> for CExprCopyFileToFileOptArgs {
    type Error = Error;
    fn try_from(optargs: CopyFileToFileOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprCopyFileToFileOptArgs {
        srcoffset: optargs.srcoffset, 
        destoffset: optargs.destoffset, 
        size: optargs.size, 
        sparse: optargs.sparse.map(|b| if b { 1 } else { 0 }),
        append: optargs.append.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawCopyFileToFileOptArgs {
    bitmask: u64,
    srcoffset: i64,
    destoffset: i64,
    size: i64,
    sparse: c_int,
    append: c_int,
}

impl convert::From<&CExprCopyFileToFileOptArgs> for RawCopyFileToFileOptArgs {
    fn from(optargs: &CExprCopyFileToFileOptArgs) -> Self {
        let mut bitmask = 0;
        RawCopyFileToFileOptArgs {
        srcoffset: if let Some(v) = optargs.srcoffset {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        destoffset: if let Some(v) = optargs.destoffset {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        size: if let Some(v) = optargs.size {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        sparse: if let Some(v) = optargs.sparse {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
        append: if let Some(v) = optargs.append {
            bitmask |= 1 << 4;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct CpioOutOptArgs<'a> {
    pub format: Option<&'a str>,
}

struct CExprCpioOutOptArgs {
    format: Option<ffi::CString>,
}

impl<'a> TryFrom<CpioOutOptArgs<'a>> for CExprCpioOutOptArgs {
    type Error = Error;
    fn try_from(optargs: CpioOutOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprCpioOutOptArgs {
        format: optargs.format.map(|v| ffi::CString::new(v)).transpose()?,
         })
    }
}
#[repr(C)]
struct RawCpioOutOptArgs {
    bitmask: u64,
    format: *const c_char,
}

impl convert::From<&CExprCpioOutOptArgs> for RawCpioOutOptArgs {
    fn from(optargs: &CExprCpioOutOptArgs) -> Self {
        let mut bitmask = 0;
        RawCpioOutOptArgs {
        format: if let Some(ref v) = optargs.format {
            bitmask |= 1 << 0;
            v.as_ptr()
        } else {
            ptr::null()
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct CryptsetupOpenOptArgs<'a> {
    pub readonly: Option<bool>,
    pub crypttype: Option<&'a str>,
}

struct CExprCryptsetupOpenOptArgs {
    readonly: Option<c_int>,
    crypttype: Option<ffi::CString>,
}

impl<'a> TryFrom<CryptsetupOpenOptArgs<'a>> for CExprCryptsetupOpenOptArgs {
    type Error = Error;
    fn try_from(optargs: CryptsetupOpenOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprCryptsetupOpenOptArgs {
        readonly: optargs.readonly.map(|b| if b { 1 } else { 0 }),
        crypttype: optargs.crypttype.map(|v| ffi::CString::new(v)).transpose()?,
         })
    }
}
#[repr(C)]
struct RawCryptsetupOpenOptArgs {
    bitmask: u64,
    readonly: c_int,
    crypttype: *const c_char,
}

impl convert::From<&CExprCryptsetupOpenOptArgs> for RawCryptsetupOpenOptArgs {
    fn from(optargs: &CExprCryptsetupOpenOptArgs) -> Self {
        let mut bitmask = 0;
        RawCryptsetupOpenOptArgs {
        readonly: if let Some(v) = optargs.readonly {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        crypttype: if let Some(ref v) = optargs.crypttype {
            bitmask |= 1 << 1;
            v.as_ptr()
        } else {
            ptr::null()
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct DiskCreateOptArgs<'a> {
    pub backingfile: Option<&'a str>,
    pub backingformat: Option<&'a str>,
    pub preallocation: Option<&'a str>,
    pub compat: Option<&'a str>,
    pub clustersize: Option<i32>,
}

struct CExprDiskCreateOptArgs {
    backingfile: Option<ffi::CString>,
    backingformat: Option<ffi::CString>,
    preallocation: Option<ffi::CString>,
    compat: Option<ffi::CString>,
    clustersize: Option<c_int>,
}

impl<'a> TryFrom<DiskCreateOptArgs<'a>> for CExprDiskCreateOptArgs {
    type Error = Error;
    fn try_from(optargs: DiskCreateOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprDiskCreateOptArgs {
        backingfile: optargs.backingfile.map(|v| ffi::CString::new(v)).transpose()?,
        backingformat: optargs.backingformat.map(|v| ffi::CString::new(v)).transpose()?,
        preallocation: optargs.preallocation.map(|v| ffi::CString::new(v)).transpose()?,
        compat: optargs.compat.map(|v| ffi::CString::new(v)).transpose()?,
        clustersize: optargs.clustersize, 
         })
    }
}
#[repr(C)]
struct RawDiskCreateOptArgs {
    bitmask: u64,
    backingfile: *const c_char,
    backingformat: *const c_char,
    preallocation: *const c_char,
    compat: *const c_char,
    clustersize: c_int,
}

impl convert::From<&CExprDiskCreateOptArgs> for RawDiskCreateOptArgs {
    fn from(optargs: &CExprDiskCreateOptArgs) -> Self {
        let mut bitmask = 0;
        RawDiskCreateOptArgs {
        backingfile: if let Some(ref v) = optargs.backingfile {
            bitmask |= 1 << 0;
            v.as_ptr()
        } else {
            ptr::null()
        },
        backingformat: if let Some(ref v) = optargs.backingformat {
            bitmask |= 1 << 1;
            v.as_ptr()
        } else {
            ptr::null()
        },
        preallocation: if let Some(ref v) = optargs.preallocation {
            bitmask |= 1 << 2;
            v.as_ptr()
        } else {
            ptr::null()
        },
        compat: if let Some(ref v) = optargs.compat {
            bitmask |= 1 << 3;
            v.as_ptr()
        } else {
            ptr::null()
        },
        clustersize: if let Some(v) = optargs.clustersize {
            bitmask |= 1 << 4;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct DownloadBlocksOptArgs {
    pub unallocated: Option<bool>,
}

struct CExprDownloadBlocksOptArgs {
    unallocated: Option<c_int>,
}

impl TryFrom<DownloadBlocksOptArgs> for CExprDownloadBlocksOptArgs {
    type Error = Error;
    fn try_from(optargs: DownloadBlocksOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprDownloadBlocksOptArgs {
        unallocated: optargs.unallocated.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawDownloadBlocksOptArgs {
    bitmask: u64,
    unallocated: c_int,
}

impl convert::From<&CExprDownloadBlocksOptArgs> for RawDownloadBlocksOptArgs {
    fn from(optargs: &CExprDownloadBlocksOptArgs) -> Self {
        let mut bitmask = 0;
        RawDownloadBlocksOptArgs {
        unallocated: if let Some(v) = optargs.unallocated {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct E2fsckOptArgs {
    pub correct: Option<bool>,
    pub forceall: Option<bool>,
}

struct CExprE2fsckOptArgs {
    correct: Option<c_int>,
    forceall: Option<c_int>,
}

impl TryFrom<E2fsckOptArgs> for CExprE2fsckOptArgs {
    type Error = Error;
    fn try_from(optargs: E2fsckOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprE2fsckOptArgs {
        correct: optargs.correct.map(|b| if b { 1 } else { 0 }),
        forceall: optargs.forceall.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawE2fsckOptArgs {
    bitmask: u64,
    correct: c_int,
    forceall: c_int,
}

impl convert::From<&CExprE2fsckOptArgs> for RawE2fsckOptArgs {
    fn from(optargs: &CExprE2fsckOptArgs) -> Self {
        let mut bitmask = 0;
        RawE2fsckOptArgs {
        correct: if let Some(v) = optargs.correct {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        forceall: if let Some(v) = optargs.forceall {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct FstrimOptArgs {
    pub offset: Option<i64>,
    pub length: Option<i64>,
    pub minimumfreeextent: Option<i64>,
}

struct CExprFstrimOptArgs {
    offset: Option<i64>,
    length: Option<i64>,
    minimumfreeextent: Option<i64>,
}

impl TryFrom<FstrimOptArgs> for CExprFstrimOptArgs {
    type Error = Error;
    fn try_from(optargs: FstrimOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprFstrimOptArgs {
        offset: optargs.offset, 
        length: optargs.length, 
        minimumfreeextent: optargs.minimumfreeextent, 
         })
    }
}
#[repr(C)]
struct RawFstrimOptArgs {
    bitmask: u64,
    offset: i64,
    length: i64,
    minimumfreeextent: i64,
}

impl convert::From<&CExprFstrimOptArgs> for RawFstrimOptArgs {
    fn from(optargs: &CExprFstrimOptArgs) -> Self {
        let mut bitmask = 0;
        RawFstrimOptArgs {
        offset: if let Some(v) = optargs.offset {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        length: if let Some(v) = optargs.length {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        minimumfreeextent: if let Some(v) = optargs.minimumfreeextent {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct GlobExpandOptArgs {
    pub directoryslash: Option<bool>,
}

struct CExprGlobExpandOptArgs {
    directoryslash: Option<c_int>,
}

impl TryFrom<GlobExpandOptArgs> for CExprGlobExpandOptArgs {
    type Error = Error;
    fn try_from(optargs: GlobExpandOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprGlobExpandOptArgs {
        directoryslash: optargs.directoryslash.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawGlobExpandOptArgs {
    bitmask: u64,
    directoryslash: c_int,
}

impl convert::From<&CExprGlobExpandOptArgs> for RawGlobExpandOptArgs {
    fn from(optargs: &CExprGlobExpandOptArgs) -> Self {
        let mut bitmask = 0;
        RawGlobExpandOptArgs {
        directoryslash: if let Some(v) = optargs.directoryslash {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct GrepOptArgs {
    pub extended: Option<bool>,
    pub fixed: Option<bool>,
    pub insensitive: Option<bool>,
    pub compressed: Option<bool>,
}

struct CExprGrepOptArgs {
    extended: Option<c_int>,
    fixed: Option<c_int>,
    insensitive: Option<c_int>,
    compressed: Option<c_int>,
}

impl TryFrom<GrepOptArgs> for CExprGrepOptArgs {
    type Error = Error;
    fn try_from(optargs: GrepOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprGrepOptArgs {
        extended: optargs.extended.map(|b| if b { 1 } else { 0 }),
        fixed: optargs.fixed.map(|b| if b { 1 } else { 0 }),
        insensitive: optargs.insensitive.map(|b| if b { 1 } else { 0 }),
        compressed: optargs.compressed.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawGrepOptArgs {
    bitmask: u64,
    extended: c_int,
    fixed: c_int,
    insensitive: c_int,
    compressed: c_int,
}

impl convert::From<&CExprGrepOptArgs> for RawGrepOptArgs {
    fn from(optargs: &CExprGrepOptArgs) -> Self {
        let mut bitmask = 0;
        RawGrepOptArgs {
        extended: if let Some(v) = optargs.extended {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        fixed: if let Some(v) = optargs.fixed {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        insensitive: if let Some(v) = optargs.insensitive {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        compressed: if let Some(v) = optargs.compressed {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct HivexOpenOptArgs {
    pub verbose: Option<bool>,
    pub debug: Option<bool>,
    pub write: Option<bool>,
    pub unsafe_: Option<bool>,
}

struct CExprHivexOpenOptArgs {
    verbose: Option<c_int>,
    debug: Option<c_int>,
    write: Option<c_int>,
    unsafe_: Option<c_int>,
}

impl TryFrom<HivexOpenOptArgs> for CExprHivexOpenOptArgs {
    type Error = Error;
    fn try_from(optargs: HivexOpenOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprHivexOpenOptArgs {
        verbose: optargs.verbose.map(|b| if b { 1 } else { 0 }),
        debug: optargs.debug.map(|b| if b { 1 } else { 0 }),
        write: optargs.write.map(|b| if b { 1 } else { 0 }),
        unsafe_: optargs.unsafe_.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawHivexOpenOptArgs {
    bitmask: u64,
    verbose: c_int,
    debug: c_int,
    write: c_int,
    unsafe_: c_int,
}

impl convert::From<&CExprHivexOpenOptArgs> for RawHivexOpenOptArgs {
    fn from(optargs: &CExprHivexOpenOptArgs) -> Self {
        let mut bitmask = 0;
        RawHivexOpenOptArgs {
        verbose: if let Some(v) = optargs.verbose {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        debug: if let Some(v) = optargs.debug {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        write: if let Some(v) = optargs.write {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        unsafe_: if let Some(v) = optargs.unsafe_ {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct InspectGetIconOptArgs {
    pub favicon: Option<bool>,
    pub highquality: Option<bool>,
}

struct CExprInspectGetIconOptArgs {
    favicon: Option<c_int>,
    highquality: Option<c_int>,
}

impl TryFrom<InspectGetIconOptArgs> for CExprInspectGetIconOptArgs {
    type Error = Error;
    fn try_from(optargs: InspectGetIconOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprInspectGetIconOptArgs {
        favicon: optargs.favicon.map(|b| if b { 1 } else { 0 }),
        highquality: optargs.highquality.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawInspectGetIconOptArgs {
    bitmask: u64,
    favicon: c_int,
    highquality: c_int,
}

impl convert::From<&CExprInspectGetIconOptArgs> for RawInspectGetIconOptArgs {
    fn from(optargs: &CExprInspectGetIconOptArgs) -> Self {
        let mut bitmask = 0;
        RawInspectGetIconOptArgs {
        favicon: if let Some(v) = optargs.favicon {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        highquality: if let Some(v) = optargs.highquality {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct InternalTestOptArgs<'a> {
    pub obool: Option<bool>,
    pub oint: Option<i32>,
    pub oint64: Option<i64>,
    pub ostring: Option<&'a str>,
    pub ostringlist: Option<&'a [&'a str]>,
}

struct CExprInternalTestOptArgs {
    obool: Option<c_int>,
    oint: Option<c_int>,
    oint64: Option<i64>,
    ostring: Option<ffi::CString>,
    ostringlist: Option<(Vec<ffi::CString>, Vec<*const c_char>)>,
}

impl<'a> TryFrom<InternalTestOptArgs<'a>> for CExprInternalTestOptArgs {
    type Error = Error;
    fn try_from(optargs: InternalTestOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprInternalTestOptArgs {
        obool: optargs.obool.map(|b| if b { 1 } else { 0 }),
        oint: optargs.oint, 
        oint64: optargs.oint64, 
        ostring: optargs.ostring.map(|v| ffi::CString::new(v)).transpose()?,
        ostringlist: optargs.ostringlist.map(
                |v| Ok::<_, Error>({
                         let v = arg_string_list(v)?;
                         let mut w = (&v).into_iter()
                                         .map(|v| v.as_ptr())
                                         .collect::<Vec<_>>();
                         w.push(ptr::null());
                         (v, w)
                    })
                ).transpose()?,
         })
    }
}
#[repr(C)]
struct RawInternalTestOptArgs {
    bitmask: u64,
    obool: c_int,
    oint: c_int,
    oint64: i64,
    ostring: *const c_char,
    ostringlist: *const *const c_char,
}

impl convert::From<&CExprInternalTestOptArgs> for RawInternalTestOptArgs {
    fn from(optargs: &CExprInternalTestOptArgs) -> Self {
        let mut bitmask = 0;
        RawInternalTestOptArgs {
        obool: if let Some(v) = optargs.obool {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        oint: if let Some(v) = optargs.oint {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        oint64: if let Some(v) = optargs.oint64 {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        ostring: if let Some(ref v) = optargs.ostring {
            bitmask |= 1 << 3;
            v.as_ptr()
        } else {
            ptr::null()
        },
        ostringlist: if let Some((_, ref v)) = optargs.ostringlist {
            bitmask |= 1 << 4;
            v.as_ptr()
        } else {
            ptr::null()
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct InternalTest63OptargsOptArgs {
    pub opt1: Option<i32>,
    pub opt2: Option<i32>,
    pub opt3: Option<i32>,
    pub opt4: Option<i32>,
    pub opt5: Option<i32>,
    pub opt6: Option<i32>,
    pub opt7: Option<i32>,
    pub opt8: Option<i32>,
    pub opt9: Option<i32>,
    pub opt10: Option<i32>,
    pub opt11: Option<i32>,
    pub opt12: Option<i32>,
    pub opt13: Option<i32>,
    pub opt14: Option<i32>,
    pub opt15: Option<i32>,
    pub opt16: Option<i32>,
    pub opt17: Option<i32>,
    pub opt18: Option<i32>,
    pub opt19: Option<i32>,
    pub opt20: Option<i32>,
    pub opt21: Option<i32>,
    pub opt22: Option<i32>,
    pub opt23: Option<i32>,
    pub opt24: Option<i32>,
    pub opt25: Option<i32>,
    pub opt26: Option<i32>,
    pub opt27: Option<i32>,
    pub opt28: Option<i32>,
    pub opt29: Option<i32>,
    pub opt30: Option<i32>,
    pub opt31: Option<i32>,
    pub opt32: Option<i32>,
    pub opt33: Option<i32>,
    pub opt34: Option<i32>,
    pub opt35: Option<i32>,
    pub opt36: Option<i32>,
    pub opt37: Option<i32>,
    pub opt38: Option<i32>,
    pub opt39: Option<i32>,
    pub opt40: Option<i32>,
    pub opt41: Option<i32>,
    pub opt42: Option<i32>,
    pub opt43: Option<i32>,
    pub opt44: Option<i32>,
    pub opt45: Option<i32>,
    pub opt46: Option<i32>,
    pub opt47: Option<i32>,
    pub opt48: Option<i32>,
    pub opt49: Option<i32>,
    pub opt50: Option<i32>,
    pub opt51: Option<i32>,
    pub opt52: Option<i32>,
    pub opt53: Option<i32>,
    pub opt54: Option<i32>,
    pub opt55: Option<i32>,
    pub opt56: Option<i32>,
    pub opt57: Option<i32>,
    pub opt58: Option<i32>,
    pub opt59: Option<i32>,
    pub opt60: Option<i32>,
    pub opt61: Option<i32>,
    pub opt62: Option<i32>,
    pub opt63: Option<i32>,
}

struct CExprInternalTest63OptargsOptArgs {
    opt1: Option<c_int>,
    opt2: Option<c_int>,
    opt3: Option<c_int>,
    opt4: Option<c_int>,
    opt5: Option<c_int>,
    opt6: Option<c_int>,
    opt7: Option<c_int>,
    opt8: Option<c_int>,
    opt9: Option<c_int>,
    opt10: Option<c_int>,
    opt11: Option<c_int>,
    opt12: Option<c_int>,
    opt13: Option<c_int>,
    opt14: Option<c_int>,
    opt15: Option<c_int>,
    opt16: Option<c_int>,
    opt17: Option<c_int>,
    opt18: Option<c_int>,
    opt19: Option<c_int>,
    opt20: Option<c_int>,
    opt21: Option<c_int>,
    opt22: Option<c_int>,
    opt23: Option<c_int>,
    opt24: Option<c_int>,
    opt25: Option<c_int>,
    opt26: Option<c_int>,
    opt27: Option<c_int>,
    opt28: Option<c_int>,
    opt29: Option<c_int>,
    opt30: Option<c_int>,
    opt31: Option<c_int>,
    opt32: Option<c_int>,
    opt33: Option<c_int>,
    opt34: Option<c_int>,
    opt35: Option<c_int>,
    opt36: Option<c_int>,
    opt37: Option<c_int>,
    opt38: Option<c_int>,
    opt39: Option<c_int>,
    opt40: Option<c_int>,
    opt41: Option<c_int>,
    opt42: Option<c_int>,
    opt43: Option<c_int>,
    opt44: Option<c_int>,
    opt45: Option<c_int>,
    opt46: Option<c_int>,
    opt47: Option<c_int>,
    opt48: Option<c_int>,
    opt49: Option<c_int>,
    opt50: Option<c_int>,
    opt51: Option<c_int>,
    opt52: Option<c_int>,
    opt53: Option<c_int>,
    opt54: Option<c_int>,
    opt55: Option<c_int>,
    opt56: Option<c_int>,
    opt57: Option<c_int>,
    opt58: Option<c_int>,
    opt59: Option<c_int>,
    opt60: Option<c_int>,
    opt61: Option<c_int>,
    opt62: Option<c_int>,
    opt63: Option<c_int>,
}

impl TryFrom<InternalTest63OptargsOptArgs> for CExprInternalTest63OptargsOptArgs {
    type Error = Error;
    fn try_from(optargs: InternalTest63OptargsOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprInternalTest63OptargsOptArgs {
        opt1: optargs.opt1, 
        opt2: optargs.opt2, 
        opt3: optargs.opt3, 
        opt4: optargs.opt4, 
        opt5: optargs.opt5, 
        opt6: optargs.opt6, 
        opt7: optargs.opt7, 
        opt8: optargs.opt8, 
        opt9: optargs.opt9, 
        opt10: optargs.opt10, 
        opt11: optargs.opt11, 
        opt12: optargs.opt12, 
        opt13: optargs.opt13, 
        opt14: optargs.opt14, 
        opt15: optargs.opt15, 
        opt16: optargs.opt16, 
        opt17: optargs.opt17, 
        opt18: optargs.opt18, 
        opt19: optargs.opt19, 
        opt20: optargs.opt20, 
        opt21: optargs.opt21, 
        opt22: optargs.opt22, 
        opt23: optargs.opt23, 
        opt24: optargs.opt24, 
        opt25: optargs.opt25, 
        opt26: optargs.opt26, 
        opt27: optargs.opt27, 
        opt28: optargs.opt28, 
        opt29: optargs.opt29, 
        opt30: optargs.opt30, 
        opt31: optargs.opt31, 
        opt32: optargs.opt32, 
        opt33: optargs.opt33, 
        opt34: optargs.opt34, 
        opt35: optargs.opt35, 
        opt36: optargs.opt36, 
        opt37: optargs.opt37, 
        opt38: optargs.opt38, 
        opt39: optargs.opt39, 
        opt40: optargs.opt40, 
        opt41: optargs.opt41, 
        opt42: optargs.opt42, 
        opt43: optargs.opt43, 
        opt44: optargs.opt44, 
        opt45: optargs.opt45, 
        opt46: optargs.opt46, 
        opt47: optargs.opt47, 
        opt48: optargs.opt48, 
        opt49: optargs.opt49, 
        opt50: optargs.opt50, 
        opt51: optargs.opt51, 
        opt52: optargs.opt52, 
        opt53: optargs.opt53, 
        opt54: optargs.opt54, 
        opt55: optargs.opt55, 
        opt56: optargs.opt56, 
        opt57: optargs.opt57, 
        opt58: optargs.opt58, 
        opt59: optargs.opt59, 
        opt60: optargs.opt60, 
        opt61: optargs.opt61, 
        opt62: optargs.opt62, 
        opt63: optargs.opt63, 
         })
    }
}
#[repr(C)]
struct RawInternalTest63OptargsOptArgs {
    bitmask: u64,
    opt1: c_int,
    opt2: c_int,
    opt3: c_int,
    opt4: c_int,
    opt5: c_int,
    opt6: c_int,
    opt7: c_int,
    opt8: c_int,
    opt9: c_int,
    opt10: c_int,
    opt11: c_int,
    opt12: c_int,
    opt13: c_int,
    opt14: c_int,
    opt15: c_int,
    opt16: c_int,
    opt17: c_int,
    opt18: c_int,
    opt19: c_int,
    opt20: c_int,
    opt21: c_int,
    opt22: c_int,
    opt23: c_int,
    opt24: c_int,
    opt25: c_int,
    opt26: c_int,
    opt27: c_int,
    opt28: c_int,
    opt29: c_int,
    opt30: c_int,
    opt31: c_int,
    opt32: c_int,
    opt33: c_int,
    opt34: c_int,
    opt35: c_int,
    opt36: c_int,
    opt37: c_int,
    opt38: c_int,
    opt39: c_int,
    opt40: c_int,
    opt41: c_int,
    opt42: c_int,
    opt43: c_int,
    opt44: c_int,
    opt45: c_int,
    opt46: c_int,
    opt47: c_int,
    opt48: c_int,
    opt49: c_int,
    opt50: c_int,
    opt51: c_int,
    opt52: c_int,
    opt53: c_int,
    opt54: c_int,
    opt55: c_int,
    opt56: c_int,
    opt57: c_int,
    opt58: c_int,
    opt59: c_int,
    opt60: c_int,
    opt61: c_int,
    opt62: c_int,
    opt63: c_int,
}

impl convert::From<&CExprInternalTest63OptargsOptArgs> for RawInternalTest63OptargsOptArgs {
    fn from(optargs: &CExprInternalTest63OptargsOptArgs) -> Self {
        let mut bitmask = 0;
        RawInternalTest63OptargsOptArgs {
        opt1: if let Some(v) = optargs.opt1 {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        opt2: if let Some(v) = optargs.opt2 {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        opt3: if let Some(v) = optargs.opt3 {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        opt4: if let Some(v) = optargs.opt4 {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
        opt5: if let Some(v) = optargs.opt5 {
            bitmask |= 1 << 4;
            v
        } else {
            0
        },
        opt6: if let Some(v) = optargs.opt6 {
            bitmask |= 1 << 5;
            v
        } else {
            0
        },
        opt7: if let Some(v) = optargs.opt7 {
            bitmask |= 1 << 6;
            v
        } else {
            0
        },
        opt8: if let Some(v) = optargs.opt8 {
            bitmask |= 1 << 7;
            v
        } else {
            0
        },
        opt9: if let Some(v) = optargs.opt9 {
            bitmask |= 1 << 8;
            v
        } else {
            0
        },
        opt10: if let Some(v) = optargs.opt10 {
            bitmask |= 1 << 9;
            v
        } else {
            0
        },
        opt11: if let Some(v) = optargs.opt11 {
            bitmask |= 1 << 10;
            v
        } else {
            0
        },
        opt12: if let Some(v) = optargs.opt12 {
            bitmask |= 1 << 11;
            v
        } else {
            0
        },
        opt13: if let Some(v) = optargs.opt13 {
            bitmask |= 1 << 12;
            v
        } else {
            0
        },
        opt14: if let Some(v) = optargs.opt14 {
            bitmask |= 1 << 13;
            v
        } else {
            0
        },
        opt15: if let Some(v) = optargs.opt15 {
            bitmask |= 1 << 14;
            v
        } else {
            0
        },
        opt16: if let Some(v) = optargs.opt16 {
            bitmask |= 1 << 15;
            v
        } else {
            0
        },
        opt17: if let Some(v) = optargs.opt17 {
            bitmask |= 1 << 16;
            v
        } else {
            0
        },
        opt18: if let Some(v) = optargs.opt18 {
            bitmask |= 1 << 17;
            v
        } else {
            0
        },
        opt19: if let Some(v) = optargs.opt19 {
            bitmask |= 1 << 18;
            v
        } else {
            0
        },
        opt20: if let Some(v) = optargs.opt20 {
            bitmask |= 1 << 19;
            v
        } else {
            0
        },
        opt21: if let Some(v) = optargs.opt21 {
            bitmask |= 1 << 20;
            v
        } else {
            0
        },
        opt22: if let Some(v) = optargs.opt22 {
            bitmask |= 1 << 21;
            v
        } else {
            0
        },
        opt23: if let Some(v) = optargs.opt23 {
            bitmask |= 1 << 22;
            v
        } else {
            0
        },
        opt24: if let Some(v) = optargs.opt24 {
            bitmask |= 1 << 23;
            v
        } else {
            0
        },
        opt25: if let Some(v) = optargs.opt25 {
            bitmask |= 1 << 24;
            v
        } else {
            0
        },
        opt26: if let Some(v) = optargs.opt26 {
            bitmask |= 1 << 25;
            v
        } else {
            0
        },
        opt27: if let Some(v) = optargs.opt27 {
            bitmask |= 1 << 26;
            v
        } else {
            0
        },
        opt28: if let Some(v) = optargs.opt28 {
            bitmask |= 1 << 27;
            v
        } else {
            0
        },
        opt29: if let Some(v) = optargs.opt29 {
            bitmask |= 1 << 28;
            v
        } else {
            0
        },
        opt30: if let Some(v) = optargs.opt30 {
            bitmask |= 1 << 29;
            v
        } else {
            0
        },
        opt31: if let Some(v) = optargs.opt31 {
            bitmask |= 1 << 30;
            v
        } else {
            0
        },
        opt32: if let Some(v) = optargs.opt32 {
            bitmask |= 1 << 31;
            v
        } else {
            0
        },
        opt33: if let Some(v) = optargs.opt33 {
            bitmask |= 1 << 32;
            v
        } else {
            0
        },
        opt34: if let Some(v) = optargs.opt34 {
            bitmask |= 1 << 33;
            v
        } else {
            0
        },
        opt35: if let Some(v) = optargs.opt35 {
            bitmask |= 1 << 34;
            v
        } else {
            0
        },
        opt36: if let Some(v) = optargs.opt36 {
            bitmask |= 1 << 35;
            v
        } else {
            0
        },
        opt37: if let Some(v) = optargs.opt37 {
            bitmask |= 1 << 36;
            v
        } else {
            0
        },
        opt38: if let Some(v) = optargs.opt38 {
            bitmask |= 1 << 37;
            v
        } else {
            0
        },
        opt39: if let Some(v) = optargs.opt39 {
            bitmask |= 1 << 38;
            v
        } else {
            0
        },
        opt40: if let Some(v) = optargs.opt40 {
            bitmask |= 1 << 39;
            v
        } else {
            0
        },
        opt41: if let Some(v) = optargs.opt41 {
            bitmask |= 1 << 40;
            v
        } else {
            0
        },
        opt42: if let Some(v) = optargs.opt42 {
            bitmask |= 1 << 41;
            v
        } else {
            0
        },
        opt43: if let Some(v) = optargs.opt43 {
            bitmask |= 1 << 42;
            v
        } else {
            0
        },
        opt44: if let Some(v) = optargs.opt44 {
            bitmask |= 1 << 43;
            v
        } else {
            0
        },
        opt45: if let Some(v) = optargs.opt45 {
            bitmask |= 1 << 44;
            v
        } else {
            0
        },
        opt46: if let Some(v) = optargs.opt46 {
            bitmask |= 1 << 45;
            v
        } else {
            0
        },
        opt47: if let Some(v) = optargs.opt47 {
            bitmask |= 1 << 46;
            v
        } else {
            0
        },
        opt48: if let Some(v) = optargs.opt48 {
            bitmask |= 1 << 47;
            v
        } else {
            0
        },
        opt49: if let Some(v) = optargs.opt49 {
            bitmask |= 1 << 48;
            v
        } else {
            0
        },
        opt50: if let Some(v) = optargs.opt50 {
            bitmask |= 1 << 49;
            v
        } else {
            0
        },
        opt51: if let Some(v) = optargs.opt51 {
            bitmask |= 1 << 50;
            v
        } else {
            0
        },
        opt52: if let Some(v) = optargs.opt52 {
            bitmask |= 1 << 51;
            v
        } else {
            0
        },
        opt53: if let Some(v) = optargs.opt53 {
            bitmask |= 1 << 52;
            v
        } else {
            0
        },
        opt54: if let Some(v) = optargs.opt54 {
            bitmask |= 1 << 53;
            v
        } else {
            0
        },
        opt55: if let Some(v) = optargs.opt55 {
            bitmask |= 1 << 54;
            v
        } else {
            0
        },
        opt56: if let Some(v) = optargs.opt56 {
            bitmask |= 1 << 55;
            v
        } else {
            0
        },
        opt57: if let Some(v) = optargs.opt57 {
            bitmask |= 1 << 56;
            v
        } else {
            0
        },
        opt58: if let Some(v) = optargs.opt58 {
            bitmask |= 1 << 57;
            v
        } else {
            0
        },
        opt59: if let Some(v) = optargs.opt59 {
            bitmask |= 1 << 58;
            v
        } else {
            0
        },
        opt60: if let Some(v) = optargs.opt60 {
            bitmask |= 1 << 59;
            v
        } else {
            0
        },
        opt61: if let Some(v) = optargs.opt61 {
            bitmask |= 1 << 60;
            v
        } else {
            0
        },
        opt62: if let Some(v) = optargs.opt62 {
            bitmask |= 1 << 61;
            v
        } else {
            0
        },
        opt63: if let Some(v) = optargs.opt63 {
            bitmask |= 1 << 62;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct InternalTestOnlyOptargsOptArgs {
    pub test: Option<i32>,
}

struct CExprInternalTestOnlyOptargsOptArgs {
    test: Option<c_int>,
}

impl TryFrom<InternalTestOnlyOptargsOptArgs> for CExprInternalTestOnlyOptargsOptArgs {
    type Error = Error;
    fn try_from(optargs: InternalTestOnlyOptargsOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprInternalTestOnlyOptargsOptArgs {
        test: optargs.test, 
         })
    }
}
#[repr(C)]
struct RawInternalTestOnlyOptargsOptArgs {
    bitmask: u64,
    test: c_int,
}

impl convert::From<&CExprInternalTestOnlyOptargsOptArgs> for RawInternalTestOnlyOptargsOptArgs {
    fn from(optargs: &CExprInternalTestOnlyOptargsOptArgs) -> Self {
        let mut bitmask = 0;
        RawInternalTestOnlyOptargsOptArgs {
        test: if let Some(v) = optargs.test {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct IsBlockdevOptArgs {
    pub followsymlinks: Option<bool>,
}

struct CExprIsBlockdevOptArgs {
    followsymlinks: Option<c_int>,
}

impl TryFrom<IsBlockdevOptArgs> for CExprIsBlockdevOptArgs {
    type Error = Error;
    fn try_from(optargs: IsBlockdevOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprIsBlockdevOptArgs {
        followsymlinks: optargs.followsymlinks.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawIsBlockdevOptArgs {
    bitmask: u64,
    followsymlinks: c_int,
}

impl convert::From<&CExprIsBlockdevOptArgs> for RawIsBlockdevOptArgs {
    fn from(optargs: &CExprIsBlockdevOptArgs) -> Self {
        let mut bitmask = 0;
        RawIsBlockdevOptArgs {
        followsymlinks: if let Some(v) = optargs.followsymlinks {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct IsChardevOptArgs {
    pub followsymlinks: Option<bool>,
}

struct CExprIsChardevOptArgs {
    followsymlinks: Option<c_int>,
}

impl TryFrom<IsChardevOptArgs> for CExprIsChardevOptArgs {
    type Error = Error;
    fn try_from(optargs: IsChardevOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprIsChardevOptArgs {
        followsymlinks: optargs.followsymlinks.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawIsChardevOptArgs {
    bitmask: u64,
    followsymlinks: c_int,
}

impl convert::From<&CExprIsChardevOptArgs> for RawIsChardevOptArgs {
    fn from(optargs: &CExprIsChardevOptArgs) -> Self {
        let mut bitmask = 0;
        RawIsChardevOptArgs {
        followsymlinks: if let Some(v) = optargs.followsymlinks {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct IsDirOptArgs {
    pub followsymlinks: Option<bool>,
}

struct CExprIsDirOptArgs {
    followsymlinks: Option<c_int>,
}

impl TryFrom<IsDirOptArgs> for CExprIsDirOptArgs {
    type Error = Error;
    fn try_from(optargs: IsDirOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprIsDirOptArgs {
        followsymlinks: optargs.followsymlinks.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawIsDirOptArgs {
    bitmask: u64,
    followsymlinks: c_int,
}

impl convert::From<&CExprIsDirOptArgs> for RawIsDirOptArgs {
    fn from(optargs: &CExprIsDirOptArgs) -> Self {
        let mut bitmask = 0;
        RawIsDirOptArgs {
        followsymlinks: if let Some(v) = optargs.followsymlinks {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct IsFifoOptArgs {
    pub followsymlinks: Option<bool>,
}

struct CExprIsFifoOptArgs {
    followsymlinks: Option<c_int>,
}

impl TryFrom<IsFifoOptArgs> for CExprIsFifoOptArgs {
    type Error = Error;
    fn try_from(optargs: IsFifoOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprIsFifoOptArgs {
        followsymlinks: optargs.followsymlinks.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawIsFifoOptArgs {
    bitmask: u64,
    followsymlinks: c_int,
}

impl convert::From<&CExprIsFifoOptArgs> for RawIsFifoOptArgs {
    fn from(optargs: &CExprIsFifoOptArgs) -> Self {
        let mut bitmask = 0;
        RawIsFifoOptArgs {
        followsymlinks: if let Some(v) = optargs.followsymlinks {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct IsFileOptArgs {
    pub followsymlinks: Option<bool>,
}

struct CExprIsFileOptArgs {
    followsymlinks: Option<c_int>,
}

impl TryFrom<IsFileOptArgs> for CExprIsFileOptArgs {
    type Error = Error;
    fn try_from(optargs: IsFileOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprIsFileOptArgs {
        followsymlinks: optargs.followsymlinks.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawIsFileOptArgs {
    bitmask: u64,
    followsymlinks: c_int,
}

impl convert::From<&CExprIsFileOptArgs> for RawIsFileOptArgs {
    fn from(optargs: &CExprIsFileOptArgs) -> Self {
        let mut bitmask = 0;
        RawIsFileOptArgs {
        followsymlinks: if let Some(v) = optargs.followsymlinks {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct IsSocketOptArgs {
    pub followsymlinks: Option<bool>,
}

struct CExprIsSocketOptArgs {
    followsymlinks: Option<c_int>,
}

impl TryFrom<IsSocketOptArgs> for CExprIsSocketOptArgs {
    type Error = Error;
    fn try_from(optargs: IsSocketOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprIsSocketOptArgs {
        followsymlinks: optargs.followsymlinks.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawIsSocketOptArgs {
    bitmask: u64,
    followsymlinks: c_int,
}

impl convert::From<&CExprIsSocketOptArgs> for RawIsSocketOptArgs {
    fn from(optargs: &CExprIsSocketOptArgs) -> Self {
        let mut bitmask = 0;
        RawIsSocketOptArgs {
        followsymlinks: if let Some(v) = optargs.followsymlinks {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct MdCreateOptArgs<'a> {
    pub missingbitmap: Option<i64>,
    pub nrdevices: Option<i32>,
    pub spare: Option<i32>,
    pub chunk: Option<i64>,
    pub level: Option<&'a str>,
}

struct CExprMdCreateOptArgs {
    missingbitmap: Option<i64>,
    nrdevices: Option<c_int>,
    spare: Option<c_int>,
    chunk: Option<i64>,
    level: Option<ffi::CString>,
}

impl<'a> TryFrom<MdCreateOptArgs<'a>> for CExprMdCreateOptArgs {
    type Error = Error;
    fn try_from(optargs: MdCreateOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprMdCreateOptArgs {
        missingbitmap: optargs.missingbitmap, 
        nrdevices: optargs.nrdevices, 
        spare: optargs.spare, 
        chunk: optargs.chunk, 
        level: optargs.level.map(|v| ffi::CString::new(v)).transpose()?,
         })
    }
}
#[repr(C)]
struct RawMdCreateOptArgs {
    bitmask: u64,
    missingbitmap: i64,
    nrdevices: c_int,
    spare: c_int,
    chunk: i64,
    level: *const c_char,
}

impl convert::From<&CExprMdCreateOptArgs> for RawMdCreateOptArgs {
    fn from(optargs: &CExprMdCreateOptArgs) -> Self {
        let mut bitmask = 0;
        RawMdCreateOptArgs {
        missingbitmap: if let Some(v) = optargs.missingbitmap {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        nrdevices: if let Some(v) = optargs.nrdevices {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        spare: if let Some(v) = optargs.spare {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        chunk: if let Some(v) = optargs.chunk {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
        level: if let Some(ref v) = optargs.level {
            bitmask |= 1 << 4;
            v.as_ptr()
        } else {
            ptr::null()
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct Mke2fsOptArgs<'a> {
    pub blockscount: Option<i64>,
    pub blocksize: Option<i64>,
    pub fragsize: Option<i64>,
    pub blockspergroup: Option<i64>,
    pub numberofgroups: Option<i64>,
    pub bytesperinode: Option<i64>,
    pub inodesize: Option<i64>,
    pub journalsize: Option<i64>,
    pub numberofinodes: Option<i64>,
    pub stridesize: Option<i64>,
    pub stripewidth: Option<i64>,
    pub maxonlineresize: Option<i64>,
    pub reservedblockspercentage: Option<i32>,
    pub mmpupdateinterval: Option<i32>,
    pub journaldevice: Option<&'a str>,
    pub label: Option<&'a str>,
    pub lastmounteddir: Option<&'a str>,
    pub creatoros: Option<&'a str>,
    pub fstype: Option<&'a str>,
    pub usagetype: Option<&'a str>,
    pub uuid: Option<&'a str>,
    pub forcecreate: Option<bool>,
    pub writesbandgrouponly: Option<bool>,
    pub lazyitableinit: Option<bool>,
    pub lazyjournalinit: Option<bool>,
    pub testfs: Option<bool>,
    pub discard: Option<bool>,
    pub quotatype: Option<bool>,
    pub extent: Option<bool>,
    pub filetype: Option<bool>,
    pub flexbg: Option<bool>,
    pub hasjournal: Option<bool>,
    pub journaldev: Option<bool>,
    pub largefile: Option<bool>,
    pub quota: Option<bool>,
    pub resizeinode: Option<bool>,
    pub sparsesuper: Option<bool>,
    pub uninitbg: Option<bool>,
}

struct CExprMke2fsOptArgs {
    blockscount: Option<i64>,
    blocksize: Option<i64>,
    fragsize: Option<i64>,
    blockspergroup: Option<i64>,
    numberofgroups: Option<i64>,
    bytesperinode: Option<i64>,
    inodesize: Option<i64>,
    journalsize: Option<i64>,
    numberofinodes: Option<i64>,
    stridesize: Option<i64>,
    stripewidth: Option<i64>,
    maxonlineresize: Option<i64>,
    reservedblockspercentage: Option<c_int>,
    mmpupdateinterval: Option<c_int>,
    journaldevice: Option<ffi::CString>,
    label: Option<ffi::CString>,
    lastmounteddir: Option<ffi::CString>,
    creatoros: Option<ffi::CString>,
    fstype: Option<ffi::CString>,
    usagetype: Option<ffi::CString>,
    uuid: Option<ffi::CString>,
    forcecreate: Option<c_int>,
    writesbandgrouponly: Option<c_int>,
    lazyitableinit: Option<c_int>,
    lazyjournalinit: Option<c_int>,
    testfs: Option<c_int>,
    discard: Option<c_int>,
    quotatype: Option<c_int>,
    extent: Option<c_int>,
    filetype: Option<c_int>,
    flexbg: Option<c_int>,
    hasjournal: Option<c_int>,
    journaldev: Option<c_int>,
    largefile: Option<c_int>,
    quota: Option<c_int>,
    resizeinode: Option<c_int>,
    sparsesuper: Option<c_int>,
    uninitbg: Option<c_int>,
}

impl<'a> TryFrom<Mke2fsOptArgs<'a>> for CExprMke2fsOptArgs {
    type Error = Error;
    fn try_from(optargs: Mke2fsOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprMke2fsOptArgs {
        blockscount: optargs.blockscount, 
        blocksize: optargs.blocksize, 
        fragsize: optargs.fragsize, 
        blockspergroup: optargs.blockspergroup, 
        numberofgroups: optargs.numberofgroups, 
        bytesperinode: optargs.bytesperinode, 
        inodesize: optargs.inodesize, 
        journalsize: optargs.journalsize, 
        numberofinodes: optargs.numberofinodes, 
        stridesize: optargs.stridesize, 
        stripewidth: optargs.stripewidth, 
        maxonlineresize: optargs.maxonlineresize, 
        reservedblockspercentage: optargs.reservedblockspercentage, 
        mmpupdateinterval: optargs.mmpupdateinterval, 
        journaldevice: optargs.journaldevice.map(|v| ffi::CString::new(v)).transpose()?,
        label: optargs.label.map(|v| ffi::CString::new(v)).transpose()?,
        lastmounteddir: optargs.lastmounteddir.map(|v| ffi::CString::new(v)).transpose()?,
        creatoros: optargs.creatoros.map(|v| ffi::CString::new(v)).transpose()?,
        fstype: optargs.fstype.map(|v| ffi::CString::new(v)).transpose()?,
        usagetype: optargs.usagetype.map(|v| ffi::CString::new(v)).transpose()?,
        uuid: optargs.uuid.map(|v| ffi::CString::new(v)).transpose()?,
        forcecreate: optargs.forcecreate.map(|b| if b { 1 } else { 0 }),
        writesbandgrouponly: optargs.writesbandgrouponly.map(|b| if b { 1 } else { 0 }),
        lazyitableinit: optargs.lazyitableinit.map(|b| if b { 1 } else { 0 }),
        lazyjournalinit: optargs.lazyjournalinit.map(|b| if b { 1 } else { 0 }),
        testfs: optargs.testfs.map(|b| if b { 1 } else { 0 }),
        discard: optargs.discard.map(|b| if b { 1 } else { 0 }),
        quotatype: optargs.quotatype.map(|b| if b { 1 } else { 0 }),
        extent: optargs.extent.map(|b| if b { 1 } else { 0 }),
        filetype: optargs.filetype.map(|b| if b { 1 } else { 0 }),
        flexbg: optargs.flexbg.map(|b| if b { 1 } else { 0 }),
        hasjournal: optargs.hasjournal.map(|b| if b { 1 } else { 0 }),
        journaldev: optargs.journaldev.map(|b| if b { 1 } else { 0 }),
        largefile: optargs.largefile.map(|b| if b { 1 } else { 0 }),
        quota: optargs.quota.map(|b| if b { 1 } else { 0 }),
        resizeinode: optargs.resizeinode.map(|b| if b { 1 } else { 0 }),
        sparsesuper: optargs.sparsesuper.map(|b| if b { 1 } else { 0 }),
        uninitbg: optargs.uninitbg.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawMke2fsOptArgs {
    bitmask: u64,
    blockscount: i64,
    blocksize: i64,
    fragsize: i64,
    blockspergroup: i64,
    numberofgroups: i64,
    bytesperinode: i64,
    inodesize: i64,
    journalsize: i64,
    numberofinodes: i64,
    stridesize: i64,
    stripewidth: i64,
    maxonlineresize: i64,
    reservedblockspercentage: c_int,
    mmpupdateinterval: c_int,
    journaldevice: *const c_char,
    label: *const c_char,
    lastmounteddir: *const c_char,
    creatoros: *const c_char,
    fstype: *const c_char,
    usagetype: *const c_char,
    uuid: *const c_char,
    forcecreate: c_int,
    writesbandgrouponly: c_int,
    lazyitableinit: c_int,
    lazyjournalinit: c_int,
    testfs: c_int,
    discard: c_int,
    quotatype: c_int,
    extent: c_int,
    filetype: c_int,
    flexbg: c_int,
    hasjournal: c_int,
    journaldev: c_int,
    largefile: c_int,
    quota: c_int,
    resizeinode: c_int,
    sparsesuper: c_int,
    uninitbg: c_int,
}

impl convert::From<&CExprMke2fsOptArgs> for RawMke2fsOptArgs {
    fn from(optargs: &CExprMke2fsOptArgs) -> Self {
        let mut bitmask = 0;
        RawMke2fsOptArgs {
        blockscount: if let Some(v) = optargs.blockscount {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        blocksize: if let Some(v) = optargs.blocksize {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        fragsize: if let Some(v) = optargs.fragsize {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        blockspergroup: if let Some(v) = optargs.blockspergroup {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
        numberofgroups: if let Some(v) = optargs.numberofgroups {
            bitmask |= 1 << 4;
            v
        } else {
            0
        },
        bytesperinode: if let Some(v) = optargs.bytesperinode {
            bitmask |= 1 << 5;
            v
        } else {
            0
        },
        inodesize: if let Some(v) = optargs.inodesize {
            bitmask |= 1 << 6;
            v
        } else {
            0
        },
        journalsize: if let Some(v) = optargs.journalsize {
            bitmask |= 1 << 7;
            v
        } else {
            0
        },
        numberofinodes: if let Some(v) = optargs.numberofinodes {
            bitmask |= 1 << 8;
            v
        } else {
            0
        },
        stridesize: if let Some(v) = optargs.stridesize {
            bitmask |= 1 << 9;
            v
        } else {
            0
        },
        stripewidth: if let Some(v) = optargs.stripewidth {
            bitmask |= 1 << 10;
            v
        } else {
            0
        },
        maxonlineresize: if let Some(v) = optargs.maxonlineresize {
            bitmask |= 1 << 11;
            v
        } else {
            0
        },
        reservedblockspercentage: if let Some(v) = optargs.reservedblockspercentage {
            bitmask |= 1 << 12;
            v
        } else {
            0
        },
        mmpupdateinterval: if let Some(v) = optargs.mmpupdateinterval {
            bitmask |= 1 << 13;
            v
        } else {
            0
        },
        journaldevice: if let Some(ref v) = optargs.journaldevice {
            bitmask |= 1 << 14;
            v.as_ptr()
        } else {
            ptr::null()
        },
        label: if let Some(ref v) = optargs.label {
            bitmask |= 1 << 15;
            v.as_ptr()
        } else {
            ptr::null()
        },
        lastmounteddir: if let Some(ref v) = optargs.lastmounteddir {
            bitmask |= 1 << 16;
            v.as_ptr()
        } else {
            ptr::null()
        },
        creatoros: if let Some(ref v) = optargs.creatoros {
            bitmask |= 1 << 17;
            v.as_ptr()
        } else {
            ptr::null()
        },
        fstype: if let Some(ref v) = optargs.fstype {
            bitmask |= 1 << 18;
            v.as_ptr()
        } else {
            ptr::null()
        },
        usagetype: if let Some(ref v) = optargs.usagetype {
            bitmask |= 1 << 19;
            v.as_ptr()
        } else {
            ptr::null()
        },
        uuid: if let Some(ref v) = optargs.uuid {
            bitmask |= 1 << 20;
            v.as_ptr()
        } else {
            ptr::null()
        },
        forcecreate: if let Some(v) = optargs.forcecreate {
            bitmask |= 1 << 21;
            v
        } else {
            0
        },
        writesbandgrouponly: if let Some(v) = optargs.writesbandgrouponly {
            bitmask |= 1 << 22;
            v
        } else {
            0
        },
        lazyitableinit: if let Some(v) = optargs.lazyitableinit {
            bitmask |= 1 << 23;
            v
        } else {
            0
        },
        lazyjournalinit: if let Some(v) = optargs.lazyjournalinit {
            bitmask |= 1 << 24;
            v
        } else {
            0
        },
        testfs: if let Some(v) = optargs.testfs {
            bitmask |= 1 << 25;
            v
        } else {
            0
        },
        discard: if let Some(v) = optargs.discard {
            bitmask |= 1 << 26;
            v
        } else {
            0
        },
        quotatype: if let Some(v) = optargs.quotatype {
            bitmask |= 1 << 27;
            v
        } else {
            0
        },
        extent: if let Some(v) = optargs.extent {
            bitmask |= 1 << 28;
            v
        } else {
            0
        },
        filetype: if let Some(v) = optargs.filetype {
            bitmask |= 1 << 29;
            v
        } else {
            0
        },
        flexbg: if let Some(v) = optargs.flexbg {
            bitmask |= 1 << 30;
            v
        } else {
            0
        },
        hasjournal: if let Some(v) = optargs.hasjournal {
            bitmask |= 1 << 31;
            v
        } else {
            0
        },
        journaldev: if let Some(v) = optargs.journaldev {
            bitmask |= 1 << 32;
            v
        } else {
            0
        },
        largefile: if let Some(v) = optargs.largefile {
            bitmask |= 1 << 33;
            v
        } else {
            0
        },
        quota: if let Some(v) = optargs.quota {
            bitmask |= 1 << 34;
            v
        } else {
            0
        },
        resizeinode: if let Some(v) = optargs.resizeinode {
            bitmask |= 1 << 35;
            v
        } else {
            0
        },
        sparsesuper: if let Some(v) = optargs.sparsesuper {
            bitmask |= 1 << 36;
            v
        } else {
            0
        },
        uninitbg: if let Some(v) = optargs.uninitbg {
            bitmask |= 1 << 37;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct MkfsOptArgs<'a> {
    pub blocksize: Option<i32>,
    pub features: Option<&'a str>,
    pub inode: Option<i32>,
    pub sectorsize: Option<i32>,
    pub label: Option<&'a str>,
}

struct CExprMkfsOptArgs {
    blocksize: Option<c_int>,
    features: Option<ffi::CString>,
    inode: Option<c_int>,
    sectorsize: Option<c_int>,
    label: Option<ffi::CString>,
}

impl<'a> TryFrom<MkfsOptArgs<'a>> for CExprMkfsOptArgs {
    type Error = Error;
    fn try_from(optargs: MkfsOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprMkfsOptArgs {
        blocksize: optargs.blocksize, 
        features: optargs.features.map(|v| ffi::CString::new(v)).transpose()?,
        inode: optargs.inode, 
        sectorsize: optargs.sectorsize, 
        label: optargs.label.map(|v| ffi::CString::new(v)).transpose()?,
         })
    }
}
#[repr(C)]
struct RawMkfsOptArgs {
    bitmask: u64,
    blocksize: c_int,
    features: *const c_char,
    inode: c_int,
    sectorsize: c_int,
    label: *const c_char,
}

impl convert::From<&CExprMkfsOptArgs> for RawMkfsOptArgs {
    fn from(optargs: &CExprMkfsOptArgs) -> Self {
        let mut bitmask = 0;
        RawMkfsOptArgs {
        blocksize: if let Some(v) = optargs.blocksize {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        features: if let Some(ref v) = optargs.features {
            bitmask |= 1 << 1;
            v.as_ptr()
        } else {
            ptr::null()
        },
        inode: if let Some(v) = optargs.inode {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        sectorsize: if let Some(v) = optargs.sectorsize {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
        label: if let Some(ref v) = optargs.label {
            bitmask |= 1 << 4;
            v.as_ptr()
        } else {
            ptr::null()
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct MkfsBtrfsOptArgs<'a> {
    pub allocstart: Option<i64>,
    pub bytecount: Option<i64>,
    pub datatype: Option<&'a str>,
    pub leafsize: Option<i32>,
    pub label: Option<&'a str>,
    pub metadata: Option<&'a str>,
    pub nodesize: Option<i32>,
    pub sectorsize: Option<i32>,
}

struct CExprMkfsBtrfsOptArgs {
    allocstart: Option<i64>,
    bytecount: Option<i64>,
    datatype: Option<ffi::CString>,
    leafsize: Option<c_int>,
    label: Option<ffi::CString>,
    metadata: Option<ffi::CString>,
    nodesize: Option<c_int>,
    sectorsize: Option<c_int>,
}

impl<'a> TryFrom<MkfsBtrfsOptArgs<'a>> for CExprMkfsBtrfsOptArgs {
    type Error = Error;
    fn try_from(optargs: MkfsBtrfsOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprMkfsBtrfsOptArgs {
        allocstart: optargs.allocstart, 
        bytecount: optargs.bytecount, 
        datatype: optargs.datatype.map(|v| ffi::CString::new(v)).transpose()?,
        leafsize: optargs.leafsize, 
        label: optargs.label.map(|v| ffi::CString::new(v)).transpose()?,
        metadata: optargs.metadata.map(|v| ffi::CString::new(v)).transpose()?,
        nodesize: optargs.nodesize, 
        sectorsize: optargs.sectorsize, 
         })
    }
}
#[repr(C)]
struct RawMkfsBtrfsOptArgs {
    bitmask: u64,
    allocstart: i64,
    bytecount: i64,
    datatype: *const c_char,
    leafsize: c_int,
    label: *const c_char,
    metadata: *const c_char,
    nodesize: c_int,
    sectorsize: c_int,
}

impl convert::From<&CExprMkfsBtrfsOptArgs> for RawMkfsBtrfsOptArgs {
    fn from(optargs: &CExprMkfsBtrfsOptArgs) -> Self {
        let mut bitmask = 0;
        RawMkfsBtrfsOptArgs {
        allocstart: if let Some(v) = optargs.allocstart {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        bytecount: if let Some(v) = optargs.bytecount {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        datatype: if let Some(ref v) = optargs.datatype {
            bitmask |= 1 << 2;
            v.as_ptr()
        } else {
            ptr::null()
        },
        leafsize: if let Some(v) = optargs.leafsize {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
        label: if let Some(ref v) = optargs.label {
            bitmask |= 1 << 4;
            v.as_ptr()
        } else {
            ptr::null()
        },
        metadata: if let Some(ref v) = optargs.metadata {
            bitmask |= 1 << 5;
            v.as_ptr()
        } else {
            ptr::null()
        },
        nodesize: if let Some(v) = optargs.nodesize {
            bitmask |= 1 << 6;
            v
        } else {
            0
        },
        sectorsize: if let Some(v) = optargs.sectorsize {
            bitmask |= 1 << 7;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct MksquashfsOptArgs<'a> {
    pub compress: Option<&'a str>,
    pub excludes: Option<&'a [&'a str]>,
}

struct CExprMksquashfsOptArgs {
    compress: Option<ffi::CString>,
    excludes: Option<(Vec<ffi::CString>, Vec<*const c_char>)>,
}

impl<'a> TryFrom<MksquashfsOptArgs<'a>> for CExprMksquashfsOptArgs {
    type Error = Error;
    fn try_from(optargs: MksquashfsOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprMksquashfsOptArgs {
        compress: optargs.compress.map(|v| ffi::CString::new(v)).transpose()?,
        excludes: optargs.excludes.map(
                |v| Ok::<_, Error>({
                         let v = arg_string_list(v)?;
                         let mut w = (&v).into_iter()
                                         .map(|v| v.as_ptr())
                                         .collect::<Vec<_>>();
                         w.push(ptr::null());
                         (v, w)
                    })
                ).transpose()?,
         })
    }
}
#[repr(C)]
struct RawMksquashfsOptArgs {
    bitmask: u64,
    compress: *const c_char,
    excludes: *const *const c_char,
}

impl convert::From<&CExprMksquashfsOptArgs> for RawMksquashfsOptArgs {
    fn from(optargs: &CExprMksquashfsOptArgs) -> Self {
        let mut bitmask = 0;
        RawMksquashfsOptArgs {
        compress: if let Some(ref v) = optargs.compress {
            bitmask |= 1 << 0;
            v.as_ptr()
        } else {
            ptr::null()
        },
        excludes: if let Some((_, ref v)) = optargs.excludes {
            bitmask |= 1 << 1;
            v.as_ptr()
        } else {
            ptr::null()
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct MkswapOptArgs<'a> {
    pub label: Option<&'a str>,
    pub uuid: Option<&'a str>,
}

struct CExprMkswapOptArgs {
    label: Option<ffi::CString>,
    uuid: Option<ffi::CString>,
}

impl<'a> TryFrom<MkswapOptArgs<'a>> for CExprMkswapOptArgs {
    type Error = Error;
    fn try_from(optargs: MkswapOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprMkswapOptArgs {
        label: optargs.label.map(|v| ffi::CString::new(v)).transpose()?,
        uuid: optargs.uuid.map(|v| ffi::CString::new(v)).transpose()?,
         })
    }
}
#[repr(C)]
struct RawMkswapOptArgs {
    bitmask: u64,
    label: *const c_char,
    uuid: *const c_char,
}

impl convert::From<&CExprMkswapOptArgs> for RawMkswapOptArgs {
    fn from(optargs: &CExprMkswapOptArgs) -> Self {
        let mut bitmask = 0;
        RawMkswapOptArgs {
        label: if let Some(ref v) = optargs.label {
            bitmask |= 1 << 0;
            v.as_ptr()
        } else {
            ptr::null()
        },
        uuid: if let Some(ref v) = optargs.uuid {
            bitmask |= 1 << 1;
            v.as_ptr()
        } else {
            ptr::null()
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct MktempOptArgs<'a> {
    pub suffix: Option<&'a str>,
}

struct CExprMktempOptArgs {
    suffix: Option<ffi::CString>,
}

impl<'a> TryFrom<MktempOptArgs<'a>> for CExprMktempOptArgs {
    type Error = Error;
    fn try_from(optargs: MktempOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprMktempOptArgs {
        suffix: optargs.suffix.map(|v| ffi::CString::new(v)).transpose()?,
         })
    }
}
#[repr(C)]
struct RawMktempOptArgs {
    bitmask: u64,
    suffix: *const c_char,
}

impl convert::From<&CExprMktempOptArgs> for RawMktempOptArgs {
    fn from(optargs: &CExprMktempOptArgs) -> Self {
        let mut bitmask = 0;
        RawMktempOptArgs {
        suffix: if let Some(ref v) = optargs.suffix {
            bitmask |= 1 << 0;
            v.as_ptr()
        } else {
            ptr::null()
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct Mount9pOptArgs<'a> {
    pub options: Option<&'a str>,
}

struct CExprMount9pOptArgs {
    options: Option<ffi::CString>,
}

impl<'a> TryFrom<Mount9pOptArgs<'a>> for CExprMount9pOptArgs {
    type Error = Error;
    fn try_from(optargs: Mount9pOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprMount9pOptArgs {
        options: optargs.options.map(|v| ffi::CString::new(v)).transpose()?,
         })
    }
}
#[repr(C)]
struct RawMount9pOptArgs {
    bitmask: u64,
    options: *const c_char,
}

impl convert::From<&CExprMount9pOptArgs> for RawMount9pOptArgs {
    fn from(optargs: &CExprMount9pOptArgs) -> Self {
        let mut bitmask = 0;
        RawMount9pOptArgs {
        options: if let Some(ref v) = optargs.options {
            bitmask |= 1 << 0;
            v.as_ptr()
        } else {
            ptr::null()
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct MountLocalOptArgs<'a> {
    pub readonly: Option<bool>,
    pub options: Option<&'a str>,
    pub cachetimeout: Option<i32>,
    pub debugcalls: Option<bool>,
}

struct CExprMountLocalOptArgs {
    readonly: Option<c_int>,
    options: Option<ffi::CString>,
    cachetimeout: Option<c_int>,
    debugcalls: Option<c_int>,
}

impl<'a> TryFrom<MountLocalOptArgs<'a>> for CExprMountLocalOptArgs {
    type Error = Error;
    fn try_from(optargs: MountLocalOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprMountLocalOptArgs {
        readonly: optargs.readonly.map(|b| if b { 1 } else { 0 }),
        options: optargs.options.map(|v| ffi::CString::new(v)).transpose()?,
        cachetimeout: optargs.cachetimeout, 
        debugcalls: optargs.debugcalls.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawMountLocalOptArgs {
    bitmask: u64,
    readonly: c_int,
    options: *const c_char,
    cachetimeout: c_int,
    debugcalls: c_int,
}

impl convert::From<&CExprMountLocalOptArgs> for RawMountLocalOptArgs {
    fn from(optargs: &CExprMountLocalOptArgs) -> Self {
        let mut bitmask = 0;
        RawMountLocalOptArgs {
        readonly: if let Some(v) = optargs.readonly {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        options: if let Some(ref v) = optargs.options {
            bitmask |= 1 << 1;
            v.as_ptr()
        } else {
            ptr::null()
        },
        cachetimeout: if let Some(v) = optargs.cachetimeout {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        debugcalls: if let Some(v) = optargs.debugcalls {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct NtfscloneOutOptArgs {
    pub metadataonly: Option<bool>,
    pub rescue: Option<bool>,
    pub ignorefscheck: Option<bool>,
    pub preservetimestamps: Option<bool>,
    pub force: Option<bool>,
}

struct CExprNtfscloneOutOptArgs {
    metadataonly: Option<c_int>,
    rescue: Option<c_int>,
    ignorefscheck: Option<c_int>,
    preservetimestamps: Option<c_int>,
    force: Option<c_int>,
}

impl TryFrom<NtfscloneOutOptArgs> for CExprNtfscloneOutOptArgs {
    type Error = Error;
    fn try_from(optargs: NtfscloneOutOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprNtfscloneOutOptArgs {
        metadataonly: optargs.metadataonly.map(|b| if b { 1 } else { 0 }),
        rescue: optargs.rescue.map(|b| if b { 1 } else { 0 }),
        ignorefscheck: optargs.ignorefscheck.map(|b| if b { 1 } else { 0 }),
        preservetimestamps: optargs.preservetimestamps.map(|b| if b { 1 } else { 0 }),
        force: optargs.force.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawNtfscloneOutOptArgs {
    bitmask: u64,
    metadataonly: c_int,
    rescue: c_int,
    ignorefscheck: c_int,
    preservetimestamps: c_int,
    force: c_int,
}

impl convert::From<&CExprNtfscloneOutOptArgs> for RawNtfscloneOutOptArgs {
    fn from(optargs: &CExprNtfscloneOutOptArgs) -> Self {
        let mut bitmask = 0;
        RawNtfscloneOutOptArgs {
        metadataonly: if let Some(v) = optargs.metadataonly {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        rescue: if let Some(v) = optargs.rescue {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        ignorefscheck: if let Some(v) = optargs.ignorefscheck {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        preservetimestamps: if let Some(v) = optargs.preservetimestamps {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
        force: if let Some(v) = optargs.force {
            bitmask |= 1 << 4;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct NtfsfixOptArgs {
    pub clearbadsectors: Option<bool>,
}

struct CExprNtfsfixOptArgs {
    clearbadsectors: Option<c_int>,
}

impl TryFrom<NtfsfixOptArgs> for CExprNtfsfixOptArgs {
    type Error = Error;
    fn try_from(optargs: NtfsfixOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprNtfsfixOptArgs {
        clearbadsectors: optargs.clearbadsectors.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawNtfsfixOptArgs {
    bitmask: u64,
    clearbadsectors: c_int,
}

impl convert::From<&CExprNtfsfixOptArgs> for RawNtfsfixOptArgs {
    fn from(optargs: &CExprNtfsfixOptArgs) -> Self {
        let mut bitmask = 0;
        RawNtfsfixOptArgs {
        clearbadsectors: if let Some(v) = optargs.clearbadsectors {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct NtfsresizeOptArgs {
    pub size: Option<i64>,
    pub force: Option<bool>,
}

struct CExprNtfsresizeOptArgs {
    size: Option<i64>,
    force: Option<c_int>,
}

impl TryFrom<NtfsresizeOptArgs> for CExprNtfsresizeOptArgs {
    type Error = Error;
    fn try_from(optargs: NtfsresizeOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprNtfsresizeOptArgs {
        size: optargs.size, 
        force: optargs.force.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawNtfsresizeOptArgs {
    bitmask: u64,
    size: i64,
    force: c_int,
}

impl convert::From<&CExprNtfsresizeOptArgs> for RawNtfsresizeOptArgs {
    fn from(optargs: &CExprNtfsresizeOptArgs) -> Self {
        let mut bitmask = 0;
        RawNtfsresizeOptArgs {
        size: if let Some(v) = optargs.size {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        force: if let Some(v) = optargs.force {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct RemountOptArgs {
    pub rw: Option<bool>,
}

struct CExprRemountOptArgs {
    rw: Option<c_int>,
}

impl TryFrom<RemountOptArgs> for CExprRemountOptArgs {
    type Error = Error;
    fn try_from(optargs: RemountOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprRemountOptArgs {
        rw: optargs.rw.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawRemountOptArgs {
    bitmask: u64,
    rw: c_int,
}

impl convert::From<&CExprRemountOptArgs> for RawRemountOptArgs {
    fn from(optargs: &CExprRemountOptArgs) -> Self {
        let mut bitmask = 0;
        RawRemountOptArgs {
        rw: if let Some(v) = optargs.rw {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct RsyncOptArgs {
    pub archive: Option<bool>,
    pub deletedest: Option<bool>,
}

struct CExprRsyncOptArgs {
    archive: Option<c_int>,
    deletedest: Option<c_int>,
}

impl TryFrom<RsyncOptArgs> for CExprRsyncOptArgs {
    type Error = Error;
    fn try_from(optargs: RsyncOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprRsyncOptArgs {
        archive: optargs.archive.map(|b| if b { 1 } else { 0 }),
        deletedest: optargs.deletedest.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawRsyncOptArgs {
    bitmask: u64,
    archive: c_int,
    deletedest: c_int,
}

impl convert::From<&CExprRsyncOptArgs> for RawRsyncOptArgs {
    fn from(optargs: &CExprRsyncOptArgs) -> Self {
        let mut bitmask = 0;
        RawRsyncOptArgs {
        archive: if let Some(v) = optargs.archive {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        deletedest: if let Some(v) = optargs.deletedest {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct RsyncInOptArgs {
    pub archive: Option<bool>,
    pub deletedest: Option<bool>,
}

struct CExprRsyncInOptArgs {
    archive: Option<c_int>,
    deletedest: Option<c_int>,
}

impl TryFrom<RsyncInOptArgs> for CExprRsyncInOptArgs {
    type Error = Error;
    fn try_from(optargs: RsyncInOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprRsyncInOptArgs {
        archive: optargs.archive.map(|b| if b { 1 } else { 0 }),
        deletedest: optargs.deletedest.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawRsyncInOptArgs {
    bitmask: u64,
    archive: c_int,
    deletedest: c_int,
}

impl convert::From<&CExprRsyncInOptArgs> for RawRsyncInOptArgs {
    fn from(optargs: &CExprRsyncInOptArgs) -> Self {
        let mut bitmask = 0;
        RawRsyncInOptArgs {
        archive: if let Some(v) = optargs.archive {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        deletedest: if let Some(v) = optargs.deletedest {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct RsyncOutOptArgs {
    pub archive: Option<bool>,
    pub deletedest: Option<bool>,
}

struct CExprRsyncOutOptArgs {
    archive: Option<c_int>,
    deletedest: Option<c_int>,
}

impl TryFrom<RsyncOutOptArgs> for CExprRsyncOutOptArgs {
    type Error = Error;
    fn try_from(optargs: RsyncOutOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprRsyncOutOptArgs {
        archive: optargs.archive.map(|b| if b { 1 } else { 0 }),
        deletedest: optargs.deletedest.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawRsyncOutOptArgs {
    bitmask: u64,
    archive: c_int,
    deletedest: c_int,
}

impl convert::From<&CExprRsyncOutOptArgs> for RawRsyncOutOptArgs {
    fn from(optargs: &CExprRsyncOutOptArgs) -> Self {
        let mut bitmask = 0;
        RawRsyncOutOptArgs {
        archive: if let Some(v) = optargs.archive {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        deletedest: if let Some(v) = optargs.deletedest {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct SelinuxRelabelOptArgs {
    pub force: Option<bool>,
}

struct CExprSelinuxRelabelOptArgs {
    force: Option<c_int>,
}

impl TryFrom<SelinuxRelabelOptArgs> for CExprSelinuxRelabelOptArgs {
    type Error = Error;
    fn try_from(optargs: SelinuxRelabelOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprSelinuxRelabelOptArgs {
        force: optargs.force.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawSelinuxRelabelOptArgs {
    bitmask: u64,
    force: c_int,
}

impl convert::From<&CExprSelinuxRelabelOptArgs> for RawSelinuxRelabelOptArgs {
    fn from(optargs: &CExprSelinuxRelabelOptArgs) -> Self {
        let mut bitmask = 0;
        RawSelinuxRelabelOptArgs {
        force: if let Some(v) = optargs.force {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct SetE2attrsOptArgs {
    pub clear: Option<bool>,
}

struct CExprSetE2attrsOptArgs {
    clear: Option<c_int>,
}

impl TryFrom<SetE2attrsOptArgs> for CExprSetE2attrsOptArgs {
    type Error = Error;
    fn try_from(optargs: SetE2attrsOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprSetE2attrsOptArgs {
        clear: optargs.clear.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawSetE2attrsOptArgs {
    bitmask: u64,
    clear: c_int,
}

impl convert::From<&CExprSetE2attrsOptArgs> for RawSetE2attrsOptArgs {
    fn from(optargs: &CExprSetE2attrsOptArgs) -> Self {
        let mut bitmask = 0;
        RawSetE2attrsOptArgs {
        clear: if let Some(v) = optargs.clear {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct SyslinuxOptArgs<'a> {
    pub directory: Option<&'a str>,
}

struct CExprSyslinuxOptArgs {
    directory: Option<ffi::CString>,
}

impl<'a> TryFrom<SyslinuxOptArgs<'a>> for CExprSyslinuxOptArgs {
    type Error = Error;
    fn try_from(optargs: SyslinuxOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprSyslinuxOptArgs {
        directory: optargs.directory.map(|v| ffi::CString::new(v)).transpose()?,
         })
    }
}
#[repr(C)]
struct RawSyslinuxOptArgs {
    bitmask: u64,
    directory: *const c_char,
}

impl convert::From<&CExprSyslinuxOptArgs> for RawSyslinuxOptArgs {
    fn from(optargs: &CExprSyslinuxOptArgs) -> Self {
        let mut bitmask = 0;
        RawSyslinuxOptArgs {
        directory: if let Some(ref v) = optargs.directory {
            bitmask |= 1 << 0;
            v.as_ptr()
        } else {
            ptr::null()
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct TarInOptArgs<'a> {
    pub compress: Option<&'a str>,
    pub xattrs: Option<bool>,
    pub selinux: Option<bool>,
    pub acls: Option<bool>,
}

struct CExprTarInOptArgs {
    compress: Option<ffi::CString>,
    xattrs: Option<c_int>,
    selinux: Option<c_int>,
    acls: Option<c_int>,
}

impl<'a> TryFrom<TarInOptArgs<'a>> for CExprTarInOptArgs {
    type Error = Error;
    fn try_from(optargs: TarInOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprTarInOptArgs {
        compress: optargs.compress.map(|v| ffi::CString::new(v)).transpose()?,
        xattrs: optargs.xattrs.map(|b| if b { 1 } else { 0 }),
        selinux: optargs.selinux.map(|b| if b { 1 } else { 0 }),
        acls: optargs.acls.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawTarInOptArgs {
    bitmask: u64,
    compress: *const c_char,
    xattrs: c_int,
    selinux: c_int,
    acls: c_int,
}

impl convert::From<&CExprTarInOptArgs> for RawTarInOptArgs {
    fn from(optargs: &CExprTarInOptArgs) -> Self {
        let mut bitmask = 0;
        RawTarInOptArgs {
        compress: if let Some(ref v) = optargs.compress {
            bitmask |= 1 << 0;
            v.as_ptr()
        } else {
            ptr::null()
        },
        xattrs: if let Some(v) = optargs.xattrs {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        selinux: if let Some(v) = optargs.selinux {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        acls: if let Some(v) = optargs.acls {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct TarOutOptArgs<'a> {
    pub compress: Option<&'a str>,
    pub numericowner: Option<bool>,
    pub excludes: Option<&'a [&'a str]>,
    pub xattrs: Option<bool>,
    pub selinux: Option<bool>,
    pub acls: Option<bool>,
}

struct CExprTarOutOptArgs {
    compress: Option<ffi::CString>,
    numericowner: Option<c_int>,
    excludes: Option<(Vec<ffi::CString>, Vec<*const c_char>)>,
    xattrs: Option<c_int>,
    selinux: Option<c_int>,
    acls: Option<c_int>,
}

impl<'a> TryFrom<TarOutOptArgs<'a>> for CExprTarOutOptArgs {
    type Error = Error;
    fn try_from(optargs: TarOutOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprTarOutOptArgs {
        compress: optargs.compress.map(|v| ffi::CString::new(v)).transpose()?,
        numericowner: optargs.numericowner.map(|b| if b { 1 } else { 0 }),
        excludes: optargs.excludes.map(
                |v| Ok::<_, Error>({
                         let v = arg_string_list(v)?;
                         let mut w = (&v).into_iter()
                                         .map(|v| v.as_ptr())
                                         .collect::<Vec<_>>();
                         w.push(ptr::null());
                         (v, w)
                    })
                ).transpose()?,
        xattrs: optargs.xattrs.map(|b| if b { 1 } else { 0 }),
        selinux: optargs.selinux.map(|b| if b { 1 } else { 0 }),
        acls: optargs.acls.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawTarOutOptArgs {
    bitmask: u64,
    compress: *const c_char,
    numericowner: c_int,
    excludes: *const *const c_char,
    xattrs: c_int,
    selinux: c_int,
    acls: c_int,
}

impl convert::From<&CExprTarOutOptArgs> for RawTarOutOptArgs {
    fn from(optargs: &CExprTarOutOptArgs) -> Self {
        let mut bitmask = 0;
        RawTarOutOptArgs {
        compress: if let Some(ref v) = optargs.compress {
            bitmask |= 1 << 0;
            v.as_ptr()
        } else {
            ptr::null()
        },
        numericowner: if let Some(v) = optargs.numericowner {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        excludes: if let Some((_, ref v)) = optargs.excludes {
            bitmask |= 1 << 2;
            v.as_ptr()
        } else {
            ptr::null()
        },
        xattrs: if let Some(v) = optargs.xattrs {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
        selinux: if let Some(v) = optargs.selinux {
            bitmask |= 1 << 4;
            v
        } else {
            0
        },
        acls: if let Some(v) = optargs.acls {
            bitmask |= 1 << 5;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct Tune2fsOptArgs<'a> {
    pub force: Option<bool>,
    pub maxmountcount: Option<i32>,
    pub mountcount: Option<i32>,
    pub errorbehavior: Option<&'a str>,
    pub group: Option<i64>,
    pub intervalbetweenchecks: Option<i32>,
    pub reservedblockspercentage: Option<i32>,
    pub lastmounteddirectory: Option<&'a str>,
    pub reservedblockscount: Option<i64>,
    pub user: Option<i64>,
}

struct CExprTune2fsOptArgs {
    force: Option<c_int>,
    maxmountcount: Option<c_int>,
    mountcount: Option<c_int>,
    errorbehavior: Option<ffi::CString>,
    group: Option<i64>,
    intervalbetweenchecks: Option<c_int>,
    reservedblockspercentage: Option<c_int>,
    lastmounteddirectory: Option<ffi::CString>,
    reservedblockscount: Option<i64>,
    user: Option<i64>,
}

impl<'a> TryFrom<Tune2fsOptArgs<'a>> for CExprTune2fsOptArgs {
    type Error = Error;
    fn try_from(optargs: Tune2fsOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprTune2fsOptArgs {
        force: optargs.force.map(|b| if b { 1 } else { 0 }),
        maxmountcount: optargs.maxmountcount, 
        mountcount: optargs.mountcount, 
        errorbehavior: optargs.errorbehavior.map(|v| ffi::CString::new(v)).transpose()?,
        group: optargs.group, 
        intervalbetweenchecks: optargs.intervalbetweenchecks, 
        reservedblockspercentage: optargs.reservedblockspercentage, 
        lastmounteddirectory: optargs.lastmounteddirectory.map(|v| ffi::CString::new(v)).transpose()?,
        reservedblockscount: optargs.reservedblockscount, 
        user: optargs.user, 
         })
    }
}
#[repr(C)]
struct RawTune2fsOptArgs {
    bitmask: u64,
    force: c_int,
    maxmountcount: c_int,
    mountcount: c_int,
    errorbehavior: *const c_char,
    group: i64,
    intervalbetweenchecks: c_int,
    reservedblockspercentage: c_int,
    lastmounteddirectory: *const c_char,
    reservedblockscount: i64,
    user: i64,
}

impl convert::From<&CExprTune2fsOptArgs> for RawTune2fsOptArgs {
    fn from(optargs: &CExprTune2fsOptArgs) -> Self {
        let mut bitmask = 0;
        RawTune2fsOptArgs {
        force: if let Some(v) = optargs.force {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        maxmountcount: if let Some(v) = optargs.maxmountcount {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        mountcount: if let Some(v) = optargs.mountcount {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        errorbehavior: if let Some(ref v) = optargs.errorbehavior {
            bitmask |= 1 << 3;
            v.as_ptr()
        } else {
            ptr::null()
        },
        group: if let Some(v) = optargs.group {
            bitmask |= 1 << 4;
            v
        } else {
            0
        },
        intervalbetweenchecks: if let Some(v) = optargs.intervalbetweenchecks {
            bitmask |= 1 << 5;
            v
        } else {
            0
        },
        reservedblockspercentage: if let Some(v) = optargs.reservedblockspercentage {
            bitmask |= 1 << 6;
            v
        } else {
            0
        },
        lastmounteddirectory: if let Some(ref v) = optargs.lastmounteddirectory {
            bitmask |= 1 << 7;
            v.as_ptr()
        } else {
            ptr::null()
        },
        reservedblockscount: if let Some(v) = optargs.reservedblockscount {
            bitmask |= 1 << 8;
            v
        } else {
            0
        },
        user: if let Some(v) = optargs.user {
            bitmask |= 1 << 9;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct UmountOptArgs {
    pub force: Option<bool>,
    pub lazyunmount: Option<bool>,
}

struct CExprUmountOptArgs {
    force: Option<c_int>,
    lazyunmount: Option<c_int>,
}

impl TryFrom<UmountOptArgs> for CExprUmountOptArgs {
    type Error = Error;
    fn try_from(optargs: UmountOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprUmountOptArgs {
        force: optargs.force.map(|b| if b { 1 } else { 0 }),
        lazyunmount: optargs.lazyunmount.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawUmountOptArgs {
    bitmask: u64,
    force: c_int,
    lazyunmount: c_int,
}

impl convert::From<&CExprUmountOptArgs> for RawUmountOptArgs {
    fn from(optargs: &CExprUmountOptArgs) -> Self {
        let mut bitmask = 0;
        RawUmountOptArgs {
        force: if let Some(v) = optargs.force {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        lazyunmount: if let Some(v) = optargs.lazyunmount {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct UmountLocalOptArgs {
    pub retry: Option<bool>,
}

struct CExprUmountLocalOptArgs {
    retry: Option<c_int>,
}

impl TryFrom<UmountLocalOptArgs> for CExprUmountLocalOptArgs {
    type Error = Error;
    fn try_from(optargs: UmountLocalOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprUmountLocalOptArgs {
        retry: optargs.retry.map(|b| if b { 1 } else { 0 }),
         })
    }
}
#[repr(C)]
struct RawUmountLocalOptArgs {
    bitmask: u64,
    retry: c_int,
}

impl convert::From<&CExprUmountLocalOptArgs> for RawUmountLocalOptArgs {
    fn from(optargs: &CExprUmountLocalOptArgs) -> Self {
        let mut bitmask = 0;
        RawUmountLocalOptArgs {
        retry: if let Some(v) = optargs.retry {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct XfsAdminOptArgs<'a> {
    pub extunwritten: Option<bool>,
    pub imgfile: Option<bool>,
    pub v2log: Option<bool>,
    pub projid32bit: Option<bool>,
    pub lazycounter: Option<bool>,
    pub label: Option<&'a str>,
    pub uuid: Option<&'a str>,
}

struct CExprXfsAdminOptArgs {
    extunwritten: Option<c_int>,
    imgfile: Option<c_int>,
    v2log: Option<c_int>,
    projid32bit: Option<c_int>,
    lazycounter: Option<c_int>,
    label: Option<ffi::CString>,
    uuid: Option<ffi::CString>,
}

impl<'a> TryFrom<XfsAdminOptArgs<'a>> for CExprXfsAdminOptArgs {
    type Error = Error;
    fn try_from(optargs: XfsAdminOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprXfsAdminOptArgs {
        extunwritten: optargs.extunwritten.map(|b| if b { 1 } else { 0 }),
        imgfile: optargs.imgfile.map(|b| if b { 1 } else { 0 }),
        v2log: optargs.v2log.map(|b| if b { 1 } else { 0 }),
        projid32bit: optargs.projid32bit.map(|b| if b { 1 } else { 0 }),
        lazycounter: optargs.lazycounter.map(|b| if b { 1 } else { 0 }),
        label: optargs.label.map(|v| ffi::CString::new(v)).transpose()?,
        uuid: optargs.uuid.map(|v| ffi::CString::new(v)).transpose()?,
         })
    }
}
#[repr(C)]
struct RawXfsAdminOptArgs {
    bitmask: u64,
    extunwritten: c_int,
    imgfile: c_int,
    v2log: c_int,
    projid32bit: c_int,
    lazycounter: c_int,
    label: *const c_char,
    uuid: *const c_char,
}

impl convert::From<&CExprXfsAdminOptArgs> for RawXfsAdminOptArgs {
    fn from(optargs: &CExprXfsAdminOptArgs) -> Self {
        let mut bitmask = 0;
        RawXfsAdminOptArgs {
        extunwritten: if let Some(v) = optargs.extunwritten {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        imgfile: if let Some(v) = optargs.imgfile {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        v2log: if let Some(v) = optargs.v2log {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        projid32bit: if let Some(v) = optargs.projid32bit {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
        lazycounter: if let Some(v) = optargs.lazycounter {
            bitmask |= 1 << 4;
            v
        } else {
            0
        },
        label: if let Some(ref v) = optargs.label {
            bitmask |= 1 << 5;
            v.as_ptr()
        } else {
            ptr::null()
        },
        uuid: if let Some(ref v) = optargs.uuid {
            bitmask |= 1 << 6;
            v.as_ptr()
        } else {
            ptr::null()
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct XfsGrowfsOptArgs {
    pub datasec: Option<bool>,
    pub logsec: Option<bool>,
    pub rtsec: Option<bool>,
    pub datasize: Option<i64>,
    pub logsize: Option<i64>,
    pub rtsize: Option<i64>,
    pub rtextsize: Option<i64>,
    pub maxpct: Option<i32>,
}

struct CExprXfsGrowfsOptArgs {
    datasec: Option<c_int>,
    logsec: Option<c_int>,
    rtsec: Option<c_int>,
    datasize: Option<i64>,
    logsize: Option<i64>,
    rtsize: Option<i64>,
    rtextsize: Option<i64>,
    maxpct: Option<c_int>,
}

impl TryFrom<XfsGrowfsOptArgs> for CExprXfsGrowfsOptArgs {
    type Error = Error;
    fn try_from(optargs: XfsGrowfsOptArgs) -> Result<Self, Self::Error> {
        Ok(CExprXfsGrowfsOptArgs {
        datasec: optargs.datasec.map(|b| if b { 1 } else { 0 }),
        logsec: optargs.logsec.map(|b| if b { 1 } else { 0 }),
        rtsec: optargs.rtsec.map(|b| if b { 1 } else { 0 }),
        datasize: optargs.datasize, 
        logsize: optargs.logsize, 
        rtsize: optargs.rtsize, 
        rtextsize: optargs.rtextsize, 
        maxpct: optargs.maxpct, 
         })
    }
}
#[repr(C)]
struct RawXfsGrowfsOptArgs {
    bitmask: u64,
    datasec: c_int,
    logsec: c_int,
    rtsec: c_int,
    datasize: i64,
    logsize: i64,
    rtsize: i64,
    rtextsize: i64,
    maxpct: c_int,
}

impl convert::From<&CExprXfsGrowfsOptArgs> for RawXfsGrowfsOptArgs {
    fn from(optargs: &CExprXfsGrowfsOptArgs) -> Self {
        let mut bitmask = 0;
        RawXfsGrowfsOptArgs {
        datasec: if let Some(v) = optargs.datasec {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        logsec: if let Some(v) = optargs.logsec {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        rtsec: if let Some(v) = optargs.rtsec {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        datasize: if let Some(v) = optargs.datasize {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
        logsize: if let Some(v) = optargs.logsize {
            bitmask |= 1 << 4;
            v
        } else {
            0
        },
        rtsize: if let Some(v) = optargs.rtsize {
            bitmask |= 1 << 5;
            v
        } else {
            0
        },
        rtextsize: if let Some(v) = optargs.rtextsize {
            bitmask |= 1 << 6;
            v
        } else {
            0
        },
        maxpct: if let Some(v) = optargs.maxpct {
            bitmask |= 1 << 7;
            v
        } else {
            0
        },
              bitmask,
         }
    }
}

/* Optional Structs */
#[derive(Default)]
pub struct XfsRepairOptArgs<'a> {
    pub forcelogzero: Option<bool>,
    pub nomodify: Option<bool>,
    pub noprefetch: Option<bool>,
    pub forcegeometry: Option<bool>,
    pub maxmem: Option<i64>,
    pub ihashsize: Option<i64>,
    pub bhashsize: Option<i64>,
    pub agstride: Option<i64>,
    pub logdev: Option<&'a str>,
    pub rtdev: Option<&'a str>,
}

struct CExprXfsRepairOptArgs {
    forcelogzero: Option<c_int>,
    nomodify: Option<c_int>,
    noprefetch: Option<c_int>,
    forcegeometry: Option<c_int>,
    maxmem: Option<i64>,
    ihashsize: Option<i64>,
    bhashsize: Option<i64>,
    agstride: Option<i64>,
    logdev: Option<ffi::CString>,
    rtdev: Option<ffi::CString>,
}

impl<'a> TryFrom<XfsRepairOptArgs<'a>> for CExprXfsRepairOptArgs {
    type Error = Error;
    fn try_from(optargs: XfsRepairOptArgs<'a>) -> Result<Self, Self::Error> {
        Ok(CExprXfsRepairOptArgs {
        forcelogzero: optargs.forcelogzero.map(|b| if b { 1 } else { 0 }),
        nomodify: optargs.nomodify.map(|b| if b { 1 } else { 0 }),
        noprefetch: optargs.noprefetch.map(|b| if b { 1 } else { 0 }),
        forcegeometry: optargs.forcegeometry.map(|b| if b { 1 } else { 0 }),
        maxmem: optargs.maxmem, 
        ihashsize: optargs.ihashsize, 
        bhashsize: optargs.bhashsize, 
        agstride: optargs.agstride, 
        logdev: optargs.logdev.map(|v| ffi::CString::new(v)).transpose()?,
        rtdev: optargs.rtdev.map(|v| ffi::CString::new(v)).transpose()?,
         })
    }
}
#[repr(C)]
struct RawXfsRepairOptArgs {
    bitmask: u64,
    forcelogzero: c_int,
    nomodify: c_int,
    noprefetch: c_int,
    forcegeometry: c_int,
    maxmem: i64,
    ihashsize: i64,
    bhashsize: i64,
    agstride: i64,
    logdev: *const c_char,
    rtdev: *const c_char,
}

impl convert::From<&CExprXfsRepairOptArgs> for RawXfsRepairOptArgs {
    fn from(optargs: &CExprXfsRepairOptArgs) -> Self {
        let mut bitmask = 0;
        RawXfsRepairOptArgs {
        forcelogzero: if let Some(v) = optargs.forcelogzero {
            bitmask |= 1 << 0;
            v
        } else {
            0
        },
        nomodify: if let Some(v) = optargs.nomodify {
            bitmask |= 1 << 1;
            v
        } else {
            0
        },
        noprefetch: if let Some(v) = optargs.noprefetch {
            bitmask |= 1 << 2;
            v
        } else {
            0
        },
        forcegeometry: if let Some(v) = optargs.forcegeometry {
            bitmask |= 1 << 3;
            v
        } else {
            0
        },
        maxmem: if let Some(v) = optargs.maxmem {
            bitmask |= 1 << 4;
            v
        } else {
            0
        },
        ihashsize: if let Some(v) = optargs.ihashsize {
            bitmask |= 1 << 5;
            v
        } else {
            0
        },
        bhashsize: if let Some(v) = optargs.bhashsize {
            bitmask |= 1 << 6;
            v
        } else {
            0
        },
        agstride: if let Some(v) = optargs.agstride {
            bitmask |= 1 << 7;
            v
        } else {
            0
        },
        logdev: if let Some(ref v) = optargs.logdev {
            bitmask |= 1 << 8;
            v.as_ptr()
        } else {
            ptr::null()
        },
        rtdev: if let Some(ref v) = optargs.rtdev {
            bitmask |= 1 << 9;
            v.as_ptr()
        } else {
            ptr::null()
        },
              bitmask,
         }
    }
}
extern "C" {
    #[allow(non_snake_case)]
    fn guestfs_acl_delete_def_file(g: *const guestfs_h, dir: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_acl_get_file(g: *const guestfs_h, path: *const c_char, acltype: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_acl_set_file(g: *const guestfs_h, path: *const c_char, acltype: *const c_char, acl: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_add_cdrom(g: *const guestfs_h, filename: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_add_domain_argv(g: *const guestfs_h, dom: *const c_char, optarg: *const RawAddDomainOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_add_drive_opts_argv(g: *const guestfs_h, filename: *const c_char, optarg: *const RawAddDriveOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_add_drive_ro(g: *const guestfs_h, filename: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_add_drive_ro_with_if(g: *const guestfs_h, filename: *const c_char, iface: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_add_drive_scratch_argv(g: *const guestfs_h, size: i64, optarg: *const RawAddDriveScratchOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_add_drive_with_if(g: *const guestfs_h, filename: *const c_char, iface: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_add_libvirt_dom_argv(g: *const guestfs_h, dom: *const ffi::c_void, optarg: *const RawAddLibvirtDomOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_aug_clear(g: *const guestfs_h, augpath: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_aug_close(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_aug_defnode(g: *const guestfs_h, name: *const c_char, expr: *const c_char, val: *const c_char) -> *const RawIntBool;
    #[allow(non_snake_case)]
    fn guestfs_aug_defvar(g: *const guestfs_h, name: *const c_char, expr: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_aug_get(g: *const guestfs_h, augpath: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_aug_init(g: *const guestfs_h, root: *const c_char, flags: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_aug_insert(g: *const guestfs_h, augpath: *const c_char, label: *const c_char, before: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_aug_label(g: *const guestfs_h, augpath: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_aug_load(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_aug_ls(g: *const guestfs_h, augpath: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_aug_match(g: *const guestfs_h, augpath: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_aug_mv(g: *const guestfs_h, src: *const c_char, dest: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_aug_rm(g: *const guestfs_h, augpath: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_aug_save(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_aug_set(g: *const guestfs_h, augpath: *const c_char, val: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_aug_setm(g: *const guestfs_h, base: *const c_char, sub: *const c_char, val: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_aug_transform_argv(g: *const guestfs_h, lens: *const c_char, file: *const c_char, optarg: *const RawAugTransformOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_available(g: *const guestfs_h, groups: *const *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_available_all_groups(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_base64_in(g: *const guestfs_h, base64file: *const c_char, filename: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_base64_out(g: *const guestfs_h, filename: *const c_char, base64file: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_blkdiscard(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_blkdiscardzeroes(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_blkid(g: *const guestfs_h, device: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_blockdev_flushbufs(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_blockdev_getbsz(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_blockdev_getro(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_blockdev_getsize64(g: *const guestfs_h, device: *const c_char) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_blockdev_getss(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_blockdev_getsz(g: *const guestfs_h, device: *const c_char) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_blockdev_rereadpt(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_blockdev_setbsz(g: *const guestfs_h, device: *const c_char, blocksize: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_blockdev_setra(g: *const guestfs_h, device: *const c_char, sectors: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_blockdev_setro(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_blockdev_setrw(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_balance_cancel(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_balance_pause(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_balance_resume(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_balance_status(g: *const guestfs_h, path: *const c_char) -> *const RawBTRFSBalance;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_device_add(g: *const guestfs_h, devices: *const *const c_char, fs: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_device_delete(g: *const guestfs_h, devices: *const *const c_char, fs: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_filesystem_balance(g: *const guestfs_h, fs: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_filesystem_defragment_argv(g: *const guestfs_h, path: *const c_char, optarg: *const RawBtrfsFilesystemDefragmentOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_filesystem_resize_argv(g: *const guestfs_h, mountpoint: *const c_char, optarg: *const RawBtrfsFilesystemResizeOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_filesystem_show(g: *const guestfs_h, device: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_filesystem_sync(g: *const guestfs_h, fs: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_fsck_argv(g: *const guestfs_h, device: *const c_char, optarg: *const RawBtrfsFsckOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_image_argv(g: *const guestfs_h, source: *const *const c_char, image: *const c_char, optarg: *const RawBtrfsImageOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_qgroup_assign(g: *const guestfs_h, src: *const c_char, dst: *const c_char, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_qgroup_create(g: *const guestfs_h, qgroupid: *const c_char, subvolume: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_qgroup_destroy(g: *const guestfs_h, qgroupid: *const c_char, subvolume: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_qgroup_limit(g: *const guestfs_h, subvolume: *const c_char, size: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_qgroup_remove(g: *const guestfs_h, src: *const c_char, dst: *const c_char, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_qgroup_show(g: *const guestfs_h, path: *const c_char) -> *const RawList<RawBTRFSQgroup>;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_quota_enable(g: *const guestfs_h, fs: *const c_char, enable: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_quota_rescan(g: *const guestfs_h, fs: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_replace(g: *const guestfs_h, srcdev: *const c_char, targetdev: *const c_char, mntpoint: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_rescue_chunk_recover(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_rescue_super_recover(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_scrub_cancel(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_scrub_resume(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_scrub_start(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_scrub_status(g: *const guestfs_h, path: *const c_char) -> *const RawBTRFSScrub;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_set_seeding(g: *const guestfs_h, device: *const c_char, seeding: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_subvolume_create_opts_argv(g: *const guestfs_h, dest: *const c_char, optarg: *const RawBtrfsSubvolumeCreateOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_subvolume_delete(g: *const guestfs_h, subvolume: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_subvolume_get_default(g: *const guestfs_h, fs: *const c_char) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_subvolume_list(g: *const guestfs_h, fs: *const c_char) -> *const RawList<RawBTRFSSubvolume>;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_subvolume_set_default(g: *const guestfs_h, id: i64, fs: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_subvolume_show(g: *const guestfs_h, subvolume: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_btrfs_subvolume_snapshot_opts_argv(g: *const guestfs_h, source: *const c_char, dest: *const c_char, optarg: *const RawBtrfsSubvolumeSnapshotOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfstune_enable_extended_inode_refs(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfstune_enable_skinny_metadata_extent_refs(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_btrfstune_seeding(g: *const guestfs_h, device: *const c_char, seeding: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_c_pointer(g: *const guestfs_h) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_canonical_device_name(g: *const guestfs_h, device: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_cap_get_file(g: *const guestfs_h, path: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_cap_set_file(g: *const guestfs_h, path: *const c_char, cap: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_case_sensitive_path(g: *const guestfs_h, path: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_cat(g: *const guestfs_h, path: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_checksum(g: *const guestfs_h, csumtype: *const c_char, path: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_checksum_device(g: *const guestfs_h, csumtype: *const c_char, device: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_checksums_out(g: *const guestfs_h, csumtype: *const c_char, directory: *const c_char, sumsfile: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_chmod(g: *const guestfs_h, mode: c_int, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_chown(g: *const guestfs_h, owner: c_int, group: c_int, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_clear_backend_setting(g: *const guestfs_h, name: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_clevis_luks_unlock(g: *const guestfs_h, device: *const c_char, mapname: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_command(g: *const guestfs_h, arguments: *const *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_command_lines(g: *const guestfs_h, arguments: *const *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_compress_device_out_argv(g: *const guestfs_h, ctype: *const c_char, device: *const c_char, zdevice: *const c_char, optarg: *const RawCompressDeviceOutOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_compress_out_argv(g: *const guestfs_h, ctype: *const c_char, file: *const c_char, zfile: *const c_char, optarg: *const RawCompressOutOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_config(g: *const guestfs_h, hvparam: *const c_char, hvvalue: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_copy_attributes_argv(g: *const guestfs_h, src: *const c_char, dest: *const c_char, optarg: *const RawCopyAttributesOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_copy_device_to_device_argv(g: *const guestfs_h, src: *const c_char, dest: *const c_char, optarg: *const RawCopyDeviceToDeviceOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_copy_device_to_file_argv(g: *const guestfs_h, src: *const c_char, dest: *const c_char, optarg: *const RawCopyDeviceToFileOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_copy_file_to_device_argv(g: *const guestfs_h, src: *const c_char, dest: *const c_char, optarg: *const RawCopyFileToDeviceOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_copy_file_to_file_argv(g: *const guestfs_h, src: *const c_char, dest: *const c_char, optarg: *const RawCopyFileToFileOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_copy_in(g: *const guestfs_h, localpath: *const c_char, remotedir: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_copy_out(g: *const guestfs_h, remotepath: *const c_char, localdir: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_copy_size(g: *const guestfs_h, src: *const c_char, dest: *const c_char, size: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_cp(g: *const guestfs_h, src: *const c_char, dest: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_cp_a(g: *const guestfs_h, src: *const c_char, dest: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_cp_r(g: *const guestfs_h, src: *const c_char, dest: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_cpio_out_argv(g: *const guestfs_h, directory: *const c_char, cpiofile: *const c_char, optarg: *const RawCpioOutOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_cryptsetup_close(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_cryptsetup_open_argv(g: *const guestfs_h, device: *const c_char, key: *const c_char, mapname: *const c_char, optarg: *const RawCryptsetupOpenOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_dd(g: *const guestfs_h, src: *const c_char, dest: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_debug(g: *const guestfs_h, subcmd: *const c_char, extraargs: *const *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_debug_drives(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_debug_upload(g: *const guestfs_h, filename: *const c_char, tmpname: *const c_char, mode: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_device_index(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_device_name(g: *const guestfs_h, index: c_int) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_df(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_df_h(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_disk_create_argv(g: *const guestfs_h, filename: *const c_char, format: *const c_char, size: i64, optarg: *const RawDiskCreateOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_disk_format(g: *const guestfs_h, filename: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_disk_has_backing_file(g: *const guestfs_h, filename: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_disk_virtual_size(g: *const guestfs_h, filename: *const c_char) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_dmesg(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_download(g: *const guestfs_h, remotefilename: *const c_char, filename: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_download_blocks_argv(g: *const guestfs_h, device: *const c_char, start: i64, stop: i64, filename: *const c_char, optarg: *const RawDownloadBlocksOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_download_inode(g: *const guestfs_h, device: *const c_char, inode: i64, filename: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_download_offset(g: *const guestfs_h, remotefilename: *const c_char, filename: *const c_char, offset: i64, size: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_drop_caches(g: *const guestfs_h, whattodrop: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_du(g: *const guestfs_h, path: *const c_char) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_e2fsck_argv(g: *const guestfs_h, device: *const c_char, optarg: *const RawE2fsckOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_e2fsck_f(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_echo_daemon(g: *const guestfs_h, words: *const *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_egrep(g: *const guestfs_h, regex: *const c_char, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_egrepi(g: *const guestfs_h, regex: *const c_char, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_equal(g: *const guestfs_h, file1: *const c_char, file2: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_exists(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_extlinux(g: *const guestfs_h, directory: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_f2fs_expand(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_fallocate(g: *const guestfs_h, path: *const c_char, len: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_fallocate64(g: *const guestfs_h, path: *const c_char, len: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_feature_available(g: *const guestfs_h, groups: *const *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_fgrep(g: *const guestfs_h, pattern: *const c_char, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_fgrepi(g: *const guestfs_h, pattern: *const c_char, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_file(g: *const guestfs_h, path: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_file_architecture(g: *const guestfs_h, filename: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_filesize(g: *const guestfs_h, file: *const c_char) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_filesystem_available(g: *const guestfs_h, filesystem: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_filesystem_walk(g: *const guestfs_h, device: *const c_char) -> *const RawList<RawTSKDirent>;
    #[allow(non_snake_case)]
    fn guestfs_fill(g: *const guestfs_h, c: c_int, len: c_int, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_fill_dir(g: *const guestfs_h, dir: *const c_char, nr: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_fill_pattern(g: *const guestfs_h, pattern: *const c_char, len: c_int, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_find(g: *const guestfs_h, directory: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_find0(g: *const guestfs_h, directory: *const c_char, files: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_find_inode(g: *const guestfs_h, device: *const c_char, inode: i64) -> *const RawList<RawTSKDirent>;
    #[allow(non_snake_case)]
    fn guestfs_findfs_label(g: *const guestfs_h, label: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_findfs_uuid(g: *const guestfs_h, uuid: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_fsck(g: *const guestfs_h, fstype: *const c_char, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_fstrim_argv(g: *const guestfs_h, mountpoint: *const c_char, optarg: *const RawFstrimOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_get_append(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_attach_method(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_autosync(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_get_backend(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_backend_setting(g: *const guestfs_h, name: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_backend_settings(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_cachedir(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_direct(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_get_e2attrs(g: *const guestfs_h, file: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_e2generation(g: *const guestfs_h, file: *const c_char) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_get_e2label(g: *const guestfs_h, device: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_e2uuid(g: *const guestfs_h, device: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_hv(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_identifier(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_libvirt_requested_credential_challenge(g: *const guestfs_h, index: c_int) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_libvirt_requested_credential_defresult(g: *const guestfs_h, index: c_int) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_libvirt_requested_credential_prompt(g: *const guestfs_h, index: c_int) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_libvirt_requested_credentials(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_memsize(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_get_network(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_get_path(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_pgroup(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_get_pid(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_get_program(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_qemu(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_recovery_proc(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_get_selinux(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_get_smp(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_get_sockdir(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_state(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_get_tmpdir(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_get_trace(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_get_umask(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_get_verbose(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_getcon(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_getxattr(g: *const guestfs_h, path: *const c_char, name: *const c_char, size: *const usize) -> *const u8;
    #[allow(non_snake_case)]
    fn guestfs_getxattrs(g: *const guestfs_h, path: *const c_char) -> *const RawList<RawXAttr>;
    #[allow(non_snake_case)]
    fn guestfs_glob_expand_opts_argv(g: *const guestfs_h, pattern: *const c_char, optarg: *const RawGlobExpandOptArgs) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_grep_opts_argv(g: *const guestfs_h, regex: *const c_char, path: *const c_char, optarg: *const RawGrepOptArgs) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_grepi(g: *const guestfs_h, regex: *const c_char, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_grub_install(g: *const guestfs_h, root: *const c_char, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_head(g: *const guestfs_h, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_head_n(g: *const guestfs_h, nrlines: c_int, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_hexdump(g: *const guestfs_h, path: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_hivex_close(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_hivex_commit(g: *const guestfs_h, filename: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_hivex_node_add_child(g: *const guestfs_h, parent: i64, name: *const c_char) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_hivex_node_children(g: *const guestfs_h, nodeh: i64) -> *const RawList<RawHivexNode>;
    #[allow(non_snake_case)]
    fn guestfs_hivex_node_delete_child(g: *const guestfs_h, nodeh: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_hivex_node_get_child(g: *const guestfs_h, nodeh: i64, name: *const c_char) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_hivex_node_get_value(g: *const guestfs_h, nodeh: i64, key: *const c_char) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_hivex_node_name(g: *const guestfs_h, nodeh: i64) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_hivex_node_parent(g: *const guestfs_h, nodeh: i64) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_hivex_node_set_value(g: *const guestfs_h, nodeh: i64, key: *const c_char, t: i64, val: *const c_char, val_len: usize) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_hivex_node_values(g: *const guestfs_h, nodeh: i64) -> *const RawList<RawHivexValue>;
    #[allow(non_snake_case)]
    fn guestfs_hivex_open_argv(g: *const guestfs_h, filename: *const c_char, optarg: *const RawHivexOpenOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_hivex_root(g: *const guestfs_h) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_hivex_value_key(g: *const guestfs_h, valueh: i64) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_hivex_value_string(g: *const guestfs_h, valueh: i64) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_hivex_value_type(g: *const guestfs_h, valueh: i64) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_hivex_value_utf8(g: *const guestfs_h, valueh: i64) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_hivex_value_value(g: *const guestfs_h, valueh: i64, size: *const usize) -> *const u8;
    #[allow(non_snake_case)]
    fn guestfs_initrd_cat(g: *const guestfs_h, initrdpath: *const c_char, filename: *const c_char, size: *const usize) -> *const u8;
    #[allow(non_snake_case)]
    fn guestfs_initrd_list(g: *const guestfs_h, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inotify_add_watch(g: *const guestfs_h, path: *const c_char, mask: c_int) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_inotify_close(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_inotify_files(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inotify_init(g: *const guestfs_h, maxevents: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_inotify_read(g: *const guestfs_h) -> *const RawList<RawINotifyEvent>;
    #[allow(non_snake_case)]
    fn guestfs_inotify_rm_watch(g: *const guestfs_h, wd: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_arch(g: *const guestfs_h, root: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_build_id(g: *const guestfs_h, root: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_distro(g: *const guestfs_h, root: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_drive_mappings(g: *const guestfs_h, root: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_filesystems(g: *const guestfs_h, root: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_format(g: *const guestfs_h, root: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_hostname(g: *const guestfs_h, root: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_icon_argv(g: *const guestfs_h, root: *const c_char, size: *const usize, optarg: *const RawInspectGetIconOptArgs) -> *const u8;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_major_version(g: *const guestfs_h, root: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_minor_version(g: *const guestfs_h, root: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_mountpoints(g: *const guestfs_h, root: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_osinfo(g: *const guestfs_h, root: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_package_format(g: *const guestfs_h, root: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_package_management(g: *const guestfs_h, root: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_product_name(g: *const guestfs_h, root: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_product_variant(g: *const guestfs_h, root: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_roots(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_type(g: *const guestfs_h, root: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_windows_current_control_set(g: *const guestfs_h, root: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_windows_software_hive(g: *const guestfs_h, root: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_windows_system_hive(g: *const guestfs_h, root: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_get_windows_systemroot(g: *const guestfs_h, root: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_inspect_is_live(g: *const guestfs_h, root: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_inspect_is_multipart(g: *const guestfs_h, root: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_inspect_is_netinst(g: *const guestfs_h, root: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_inspect_list_applications(g: *const guestfs_h, root: *const c_char) -> *const RawList<RawApplication>;
    #[allow(non_snake_case)]
    fn guestfs_inspect_list_applications2(g: *const guestfs_h, root: *const c_char) -> *const RawList<RawApplication2>;
    #[allow(non_snake_case)]
    fn guestfs_inspect_os(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_internal_exit(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_argv(g: *const guestfs_h, str: *const c_char, optstr: *const c_char, strlist: *const *const c_char, b: c_int, integer: c_int, integer64: i64, filein: *const c_char, fileout: *const c_char, bufferin: *const c_char, bufferin_len: usize, optarg: *const RawInternalTestOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_63_optargs_argv(g: *const guestfs_h, optarg: *const RawInternalTest63OptargsOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_close_output(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_only_optargs_argv(g: *const guestfs_h, optarg: *const RawInternalTestOnlyOptargsOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rbool(g: *const guestfs_h, val: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rboolerr(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rbufferout(g: *const guestfs_h, val: *const c_char, size: *const usize) -> *const u8;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rbufferouterr(g: *const guestfs_h, size: *const usize) -> *const u8;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rconstoptstring(g: *const guestfs_h, val: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rconstoptstringerr(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rconststring(g: *const guestfs_h, val: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rconststringerr(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rhashtable(g: *const guestfs_h, val: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rhashtableerr(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rint(g: *const guestfs_h, val: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rint64(g: *const guestfs_h, val: *const c_char) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rint64err(g: *const guestfs_h) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rinterr(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rstring(g: *const guestfs_h, val: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rstringerr(g: *const guestfs_h) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rstringlist(g: *const guestfs_h, val: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rstringlisterr(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rstruct(g: *const guestfs_h, val: *const c_char) -> *const RawPV;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rstructerr(g: *const guestfs_h) -> *const RawPV;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rstructlist(g: *const guestfs_h, val: *const c_char) -> *const RawList<RawPV>;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_rstructlisterr(g: *const guestfs_h) -> *const RawList<RawPV>;
    #[allow(non_snake_case)]
    fn guestfs_internal_test_set_output(g: *const guestfs_h, filename: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_is_blockdev_opts_argv(g: *const guestfs_h, path: *const c_char, optarg: *const RawIsBlockdevOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_is_busy(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_is_chardev_opts_argv(g: *const guestfs_h, path: *const c_char, optarg: *const RawIsChardevOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_is_config(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_is_dir_opts_argv(g: *const guestfs_h, path: *const c_char, optarg: *const RawIsDirOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_is_fifo_opts_argv(g: *const guestfs_h, path: *const c_char, optarg: *const RawIsFifoOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_is_file_opts_argv(g: *const guestfs_h, path: *const c_char, optarg: *const RawIsFileOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_is_launching(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_is_lv(g: *const guestfs_h, mountable: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_is_ready(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_is_socket_opts_argv(g: *const guestfs_h, path: *const c_char, optarg: *const RawIsSocketOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_is_symlink(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_is_whole_device(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_is_zero(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_is_zero_device(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_isoinfo(g: *const guestfs_h, isofile: *const c_char) -> *const RawISOInfo;
    #[allow(non_snake_case)]
    fn guestfs_isoinfo_device(g: *const guestfs_h, device: *const c_char) -> *const RawISOInfo;
    #[allow(non_snake_case)]
    fn guestfs_journal_close(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_journal_get(g: *const guestfs_h) -> *const RawList<RawXAttr>;
    #[allow(non_snake_case)]
    fn guestfs_journal_get_data_threshold(g: *const guestfs_h) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_journal_get_realtime_usec(g: *const guestfs_h) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_journal_next(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_journal_open(g: *const guestfs_h, directory: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_journal_set_data_threshold(g: *const guestfs_h, threshold: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_journal_skip(g: *const guestfs_h, skip: i64) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_kill_subprocess(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_launch(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_lchown(g: *const guestfs_h, owner: c_int, group: c_int, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_ldmtool_create_all(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_ldmtool_diskgroup_disks(g: *const guestfs_h, diskgroup: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_ldmtool_diskgroup_name(g: *const guestfs_h, diskgroup: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_ldmtool_diskgroup_volumes(g: *const guestfs_h, diskgroup: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_ldmtool_remove_all(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_ldmtool_scan(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_ldmtool_scan_devices(g: *const guestfs_h, devices: *const *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_ldmtool_volume_hint(g: *const guestfs_h, diskgroup: *const c_char, volume: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_ldmtool_volume_partitions(g: *const guestfs_h, diskgroup: *const c_char, volume: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_ldmtool_volume_type(g: *const guestfs_h, diskgroup: *const c_char, volume: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_lgetxattr(g: *const guestfs_h, path: *const c_char, name: *const c_char, size: *const usize) -> *const u8;
    #[allow(non_snake_case)]
    fn guestfs_lgetxattrs(g: *const guestfs_h, path: *const c_char) -> *const RawList<RawXAttr>;
    #[allow(non_snake_case)]
    fn guestfs_list_9p(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_list_devices(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_list_disk_labels(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_list_dm_devices(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_list_filesystems(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_list_ldm_partitions(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_list_ldm_volumes(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_list_md_devices(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_list_partitions(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_ll(g: *const guestfs_h, directory: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_llz(g: *const guestfs_h, directory: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_ln(g: *const guestfs_h, target: *const c_char, linkname: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_ln_f(g: *const guestfs_h, target: *const c_char, linkname: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_ln_s(g: *const guestfs_h, target: *const c_char, linkname: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_ln_sf(g: *const guestfs_h, target: *const c_char, linkname: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_lremovexattr(g: *const guestfs_h, xattr: *const c_char, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_ls(g: *const guestfs_h, directory: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_ls0(g: *const guestfs_h, dir: *const c_char, filenames: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_lsetxattr(g: *const guestfs_h, xattr: *const c_char, val: *const c_char, vallen: c_int, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_lstat(g: *const guestfs_h, path: *const c_char) -> *const RawStat;
    #[allow(non_snake_case)]
    fn guestfs_lstatlist(g: *const guestfs_h, path: *const c_char, names: *const *const c_char) -> *const RawList<RawStat>;
    #[allow(non_snake_case)]
    fn guestfs_lstatns(g: *const guestfs_h, path: *const c_char) -> *const RawStatNS;
    #[allow(non_snake_case)]
    fn guestfs_lstatnslist(g: *const guestfs_h, path: *const c_char, names: *const *const c_char) -> *const RawList<RawStatNS>;
    #[allow(non_snake_case)]
    fn guestfs_luks_add_key(g: *const guestfs_h, device: *const c_char, key: *const c_char, newkey: *const c_char, keyslot: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_luks_close(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_luks_format(g: *const guestfs_h, device: *const c_char, key: *const c_char, keyslot: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_luks_format_cipher(g: *const guestfs_h, device: *const c_char, key: *const c_char, keyslot: c_int, cipher: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_luks_kill_slot(g: *const guestfs_h, device: *const c_char, key: *const c_char, keyslot: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_luks_open(g: *const guestfs_h, device: *const c_char, key: *const c_char, mapname: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_luks_open_ro(g: *const guestfs_h, device: *const c_char, key: *const c_char, mapname: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_luks_uuid(g: *const guestfs_h, device: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_lvcreate(g: *const guestfs_h, logvol: *const c_char, volgroup: *const c_char, mbytes: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_lvcreate_free(g: *const guestfs_h, logvol: *const c_char, volgroup: *const c_char, percent: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_lvm_canonical_lv_name(g: *const guestfs_h, lvname: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_lvm_clear_filter(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_lvm_remove_all(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_lvm_scan(g: *const guestfs_h, activate: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_lvm_set_filter(g: *const guestfs_h, devices: *const *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_lvremove(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_lvrename(g: *const guestfs_h, logvol: *const c_char, newlogvol: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_lvresize(g: *const guestfs_h, device: *const c_char, mbytes: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_lvresize_free(g: *const guestfs_h, lv: *const c_char, percent: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_lvs(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_lvs_full(g: *const guestfs_h) -> *const RawList<RawLV>;
    #[allow(non_snake_case)]
    fn guestfs_lvuuid(g: *const guestfs_h, device: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_lxattrlist(g: *const guestfs_h, path: *const c_char, names: *const *const c_char) -> *const RawList<RawXAttr>;
    #[allow(non_snake_case)]
    fn guestfs_max_disks(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_md_create_argv(g: *const guestfs_h, name: *const c_char, devices: *const *const c_char, optarg: *const RawMdCreateOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_md_detail(g: *const guestfs_h, md: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_md_stat(g: *const guestfs_h, md: *const c_char) -> *const RawList<RawMDStat>;
    #[allow(non_snake_case)]
    fn guestfs_md_stop(g: *const guestfs_h, md: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mkdir(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mkdir_mode(g: *const guestfs_h, path: *const c_char, mode: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mkdir_p(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mkdtemp(g: *const guestfs_h, tmpl: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_mke2fs_argv(g: *const guestfs_h, device: *const c_char, optarg: *const RawMke2fsOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mke2fs_J(g: *const guestfs_h, fstype: *const c_char, blocksize: c_int, device: *const c_char, journal: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mke2fs_JL(g: *const guestfs_h, fstype: *const c_char, blocksize: c_int, device: *const c_char, label: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mke2fs_JU(g: *const guestfs_h, fstype: *const c_char, blocksize: c_int, device: *const c_char, uuid: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mke2journal(g: *const guestfs_h, blocksize: c_int, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mke2journal_L(g: *const guestfs_h, blocksize: c_int, label: *const c_char, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mke2journal_U(g: *const guestfs_h, blocksize: c_int, uuid: *const c_char, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mkfifo(g: *const guestfs_h, mode: c_int, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mkfs_opts_argv(g: *const guestfs_h, fstype: *const c_char, device: *const c_char, optarg: *const RawMkfsOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mkfs_b(g: *const guestfs_h, fstype: *const c_char, blocksize: c_int, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mkfs_btrfs_argv(g: *const guestfs_h, devices: *const *const c_char, optarg: *const RawMkfsBtrfsOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mklost_and_found(g: *const guestfs_h, mountpoint: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mkmountpoint(g: *const guestfs_h, exemptpath: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mknod(g: *const guestfs_h, mode: c_int, devmajor: c_int, devminor: c_int, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mknod_b(g: *const guestfs_h, mode: c_int, devmajor: c_int, devminor: c_int, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mknod_c(g: *const guestfs_h, mode: c_int, devmajor: c_int, devminor: c_int, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mksquashfs_argv(g: *const guestfs_h, path: *const c_char, filename: *const c_char, optarg: *const RawMksquashfsOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mkswap_opts_argv(g: *const guestfs_h, device: *const c_char, optarg: *const RawMkswapOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mkswap_L(g: *const guestfs_h, label: *const c_char, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mkswap_U(g: *const guestfs_h, uuid: *const c_char, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mkswap_file(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mktemp_argv(g: *const guestfs_h, tmpl: *const c_char, optarg: *const RawMktempOptArgs) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_modprobe(g: *const guestfs_h, modulename: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mount(g: *const guestfs_h, mountable: *const c_char, mountpoint: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mount_9p_argv(g: *const guestfs_h, mounttag: *const c_char, mountpoint: *const c_char, optarg: *const RawMount9pOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mount_local_argv(g: *const guestfs_h, localmountpoint: *const c_char, optarg: *const RawMountLocalOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mount_local_run(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mount_loop(g: *const guestfs_h, file: *const c_char, mountpoint: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mount_options(g: *const guestfs_h, options: *const c_char, mountable: *const c_char, mountpoint: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mount_ro(g: *const guestfs_h, mountable: *const c_char, mountpoint: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mount_vfs(g: *const guestfs_h, options: *const c_char, vfstype: *const c_char, mountable: *const c_char, mountpoint: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_mountable_device(g: *const guestfs_h, mountable: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_mountable_subvolume(g: *const guestfs_h, mountable: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_mountpoints(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_mounts(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_mv(g: *const guestfs_h, src: *const c_char, dest: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_nr_devices(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_ntfs_3g_probe(g: *const guestfs_h, rw: c_int, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_ntfscat_i(g: *const guestfs_h, device: *const c_char, inode: i64, filename: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_ntfsclone_in(g: *const guestfs_h, backupfile: *const c_char, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_ntfsclone_out_argv(g: *const guestfs_h, device: *const c_char, backupfile: *const c_char, optarg: *const RawNtfscloneOutOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_ntfsfix_argv(g: *const guestfs_h, device: *const c_char, optarg: *const RawNtfsfixOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_ntfsresize_opts_argv(g: *const guestfs_h, device: *const c_char, optarg: *const RawNtfsresizeOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_ntfsresize_size(g: *const guestfs_h, device: *const c_char, size: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_parse_environment(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_parse_environment_list(g: *const guestfs_h, environment: *const *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_part_add(g: *const guestfs_h, device: *const c_char, prlogex: *const c_char, startsect: i64, endsect: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_part_del(g: *const guestfs_h, device: *const c_char, partnum: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_part_disk(g: *const guestfs_h, device: *const c_char, parttype: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_part_expand_gpt(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_part_get_bootable(g: *const guestfs_h, device: *const c_char, partnum: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_part_get_disk_guid(g: *const guestfs_h, device: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_part_get_gpt_attributes(g: *const guestfs_h, device: *const c_char, partnum: c_int) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_part_get_gpt_guid(g: *const guestfs_h, device: *const c_char, partnum: c_int) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_part_get_gpt_type(g: *const guestfs_h, device: *const c_char, partnum: c_int) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_part_get_mbr_id(g: *const guestfs_h, device: *const c_char, partnum: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_part_get_mbr_part_type(g: *const guestfs_h, device: *const c_char, partnum: c_int) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_part_get_name(g: *const guestfs_h, device: *const c_char, partnum: c_int) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_part_get_parttype(g: *const guestfs_h, device: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_part_init(g: *const guestfs_h, device: *const c_char, parttype: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_part_list(g: *const guestfs_h, device: *const c_char) -> *const RawList<RawPartition>;
    #[allow(non_snake_case)]
    fn guestfs_part_resize(g: *const guestfs_h, device: *const c_char, partnum: c_int, endsect: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_part_set_bootable(g: *const guestfs_h, device: *const c_char, partnum: c_int, bootable: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_part_set_disk_guid(g: *const guestfs_h, device: *const c_char, guid: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_part_set_disk_guid_random(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_part_set_gpt_attributes(g: *const guestfs_h, device: *const c_char, partnum: c_int, attributes: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_part_set_gpt_guid(g: *const guestfs_h, device: *const c_char, partnum: c_int, guid: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_part_set_gpt_type(g: *const guestfs_h, device: *const c_char, partnum: c_int, guid: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_part_set_mbr_id(g: *const guestfs_h, device: *const c_char, partnum: c_int, idbyte: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_part_set_name(g: *const guestfs_h, device: *const c_char, partnum: c_int, name: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_part_to_dev(g: *const guestfs_h, partition: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_part_to_partnum(g: *const guestfs_h, partition: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_ping_daemon(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_pread(g: *const guestfs_h, path: *const c_char, count: c_int, offset: i64, size: *const usize) -> *const u8;
    #[allow(non_snake_case)]
    fn guestfs_pread_device(g: *const guestfs_h, device: *const c_char, count: c_int, offset: i64, size: *const usize) -> *const u8;
    #[allow(non_snake_case)]
    fn guestfs_pvchange_uuid(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_pvchange_uuid_all(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_pvcreate(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_pvremove(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_pvresize(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_pvresize_size(g: *const guestfs_h, device: *const c_char, size: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_pvs(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_pvs_full(g: *const guestfs_h) -> *const RawList<RawPV>;
    #[allow(non_snake_case)]
    fn guestfs_pvuuid(g: *const guestfs_h, device: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_pwrite(g: *const guestfs_h, path: *const c_char, content: *const c_char, content_len: usize, offset: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_pwrite_device(g: *const guestfs_h, device: *const c_char, content: *const c_char, content_len: usize, offset: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_read_file(g: *const guestfs_h, path: *const c_char, size: *const usize) -> *const u8;
    #[allow(non_snake_case)]
    fn guestfs_read_lines(g: *const guestfs_h, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_readdir(g: *const guestfs_h, dir: *const c_char) -> *const RawList<RawDirent>;
    #[allow(non_snake_case)]
    fn guestfs_readlink(g: *const guestfs_h, path: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_readlinklist(g: *const guestfs_h, path: *const c_char, names: *const *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_realpath(g: *const guestfs_h, path: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_remount_argv(g: *const guestfs_h, mountpoint: *const c_char, optarg: *const RawRemountOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_remove_drive(g: *const guestfs_h, label: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_removexattr(g: *const guestfs_h, xattr: *const c_char, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_rename(g: *const guestfs_h, oldpath: *const c_char, newpath: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_resize2fs(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_resize2fs_M(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_resize2fs_size(g: *const guestfs_h, device: *const c_char, size: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_rm(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_rm_f(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_rm_rf(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_rmdir(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_rmmountpoint(g: *const guestfs_h, exemptpath: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_rsync_argv(g: *const guestfs_h, src: *const c_char, dest: *const c_char, optarg: *const RawRsyncOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_rsync_in_argv(g: *const guestfs_h, remote: *const c_char, dest: *const c_char, optarg: *const RawRsyncInOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_rsync_out_argv(g: *const guestfs_h, src: *const c_char, remote: *const c_char, optarg: *const RawRsyncOutOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_scrub_device(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_scrub_file(g: *const guestfs_h, file: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_scrub_freespace(g: *const guestfs_h, dir: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_selinux_relabel_argv(g: *const guestfs_h, specfile: *const c_char, path: *const c_char, optarg: *const RawSelinuxRelabelOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_append(g: *const guestfs_h, append: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_attach_method(g: *const guestfs_h, backend: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_autosync(g: *const guestfs_h, autosync: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_backend(g: *const guestfs_h, backend: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_backend_setting(g: *const guestfs_h, name: *const c_char, val: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_backend_settings(g: *const guestfs_h, settings: *const *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_cachedir(g: *const guestfs_h, cachedir: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_direct(g: *const guestfs_h, direct: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_e2attrs_argv(g: *const guestfs_h, file: *const c_char, attrs: *const c_char, optarg: *const RawSetE2attrsOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_e2generation(g: *const guestfs_h, file: *const c_char, generation: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_e2label(g: *const guestfs_h, device: *const c_char, label: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_e2uuid(g: *const guestfs_h, device: *const c_char, uuid: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_hv(g: *const guestfs_h, hv: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_identifier(g: *const guestfs_h, identifier: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_label(g: *const guestfs_h, mountable: *const c_char, label: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_libvirt_requested_credential(g: *const guestfs_h, index: c_int, cred: *const c_char, cred_len: usize) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_libvirt_supported_credentials(g: *const guestfs_h, creds: *const *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_memsize(g: *const guestfs_h, memsize: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_network(g: *const guestfs_h, network: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_path(g: *const guestfs_h, searchpath: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_pgroup(g: *const guestfs_h, pgroup: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_program(g: *const guestfs_h, program: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_qemu(g: *const guestfs_h, hv: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_recovery_proc(g: *const guestfs_h, recoveryproc: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_selinux(g: *const guestfs_h, selinux: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_smp(g: *const guestfs_h, smp: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_tmpdir(g: *const guestfs_h, tmpdir: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_trace(g: *const guestfs_h, trace: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_uuid(g: *const guestfs_h, device: *const c_char, uuid: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_uuid_random(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_set_verbose(g: *const guestfs_h, verbose: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_setcon(g: *const guestfs_h, context: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_setxattr(g: *const guestfs_h, xattr: *const c_char, val: *const c_char, vallen: c_int, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_sfdisk(g: *const guestfs_h, device: *const c_char, cyls: c_int, heads: c_int, sectors: c_int, lines: *const *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_sfdiskM(g: *const guestfs_h, device: *const c_char, lines: *const *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_sfdisk_N(g: *const guestfs_h, device: *const c_char, partnum: c_int, cyls: c_int, heads: c_int, sectors: c_int, line: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_sfdisk_disk_geometry(g: *const guestfs_h, device: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_sfdisk_kernel_geometry(g: *const guestfs_h, device: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_sfdisk_l(g: *const guestfs_h, device: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_sh(g: *const guestfs_h, command: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_sh_lines(g: *const guestfs_h, command: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_shutdown(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_sleep(g: *const guestfs_h, secs: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_stat(g: *const guestfs_h, path: *const c_char) -> *const RawStat;
    #[allow(non_snake_case)]
    fn guestfs_statns(g: *const guestfs_h, path: *const c_char) -> *const RawStatNS;
    #[allow(non_snake_case)]
    fn guestfs_statvfs(g: *const guestfs_h, path: *const c_char) -> *const RawStatVFS;
    #[allow(non_snake_case)]
    fn guestfs_strings(g: *const guestfs_h, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_strings_e(g: *const guestfs_h, encoding: *const c_char, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_swapoff_device(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_swapoff_file(g: *const guestfs_h, file: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_swapoff_label(g: *const guestfs_h, label: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_swapoff_uuid(g: *const guestfs_h, uuid: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_swapon_device(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_swapon_file(g: *const guestfs_h, file: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_swapon_label(g: *const guestfs_h, label: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_swapon_uuid(g: *const guestfs_h, uuid: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_sync(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_syslinux_argv(g: *const guestfs_h, device: *const c_char, optarg: *const RawSyslinuxOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_tail(g: *const guestfs_h, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_tail_n(g: *const guestfs_h, nrlines: c_int, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_tar_in_opts_argv(g: *const guestfs_h, tarfile: *const c_char, directory: *const c_char, optarg: *const RawTarInOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_tar_out_opts_argv(g: *const guestfs_h, directory: *const c_char, tarfile: *const c_char, optarg: *const RawTarOutOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_tgz_in(g: *const guestfs_h, tarball: *const c_char, directory: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_tgz_out(g: *const guestfs_h, directory: *const c_char, tarball: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_touch(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_truncate(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_truncate_size(g: *const guestfs_h, path: *const c_char, size: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_tune2fs_argv(g: *const guestfs_h, device: *const c_char, optarg: *const RawTune2fsOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_tune2fs_l(g: *const guestfs_h, device: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_txz_in(g: *const guestfs_h, tarball: *const c_char, directory: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_txz_out(g: *const guestfs_h, directory: *const c_char, tarball: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_umask(g: *const guestfs_h, mask: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_umount_opts_argv(g: *const guestfs_h, pathordevice: *const c_char, optarg: *const RawUmountOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_umount_all(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_umount_local_argv(g: *const guestfs_h, optarg: *const RawUmountLocalOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_upload(g: *const guestfs_h, filename: *const c_char, remotefilename: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_upload_offset(g: *const guestfs_h, filename: *const c_char, remotefilename: *const c_char, offset: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_user_cancel(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_utimens(g: *const guestfs_h, path: *const c_char, atsecs: i64, atnsecs: i64, mtsecs: i64, mtnsecs: i64) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_utsname(g: *const guestfs_h) -> *const RawUTSName;
    #[allow(non_snake_case)]
    fn guestfs_version(g: *const guestfs_h) -> *const RawVersion;
    #[allow(non_snake_case)]
    fn guestfs_vfs_label(g: *const guestfs_h, mountable: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_vfs_minimum_size(g: *const guestfs_h, mountable: *const c_char) -> i64;
    #[allow(non_snake_case)]
    fn guestfs_vfs_type(g: *const guestfs_h, mountable: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_vfs_uuid(g: *const guestfs_h, mountable: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_vg_activate(g: *const guestfs_h, activate: c_int, volgroups: *const *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_vg_activate_all(g: *const guestfs_h, activate: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_vgchange_uuid(g: *const guestfs_h, vg: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_vgchange_uuid_all(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_vgcreate(g: *const guestfs_h, volgroup: *const c_char, physvols: *const *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_vglvuuids(g: *const guestfs_h, vgname: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_vgmeta(g: *const guestfs_h, vgname: *const c_char, size: *const usize) -> *const u8;
    #[allow(non_snake_case)]
    fn guestfs_vgpvuuids(g: *const guestfs_h, vgname: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_vgremove(g: *const guestfs_h, vgname: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_vgrename(g: *const guestfs_h, volgroup: *const c_char, newvolgroup: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_vgs(g: *const guestfs_h) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_vgs_full(g: *const guestfs_h) -> *const RawList<RawVG>;
    #[allow(non_snake_case)]
    fn guestfs_vgscan(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_vguuid(g: *const guestfs_h, vgname: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_wait_ready(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_wc_c(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_wc_l(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_wc_w(g: *const guestfs_h, path: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_wipefs(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_write(g: *const guestfs_h, path: *const c_char, content: *const c_char, content_len: usize) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_write_append(g: *const guestfs_h, path: *const c_char, content: *const c_char, content_len: usize) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_write_file(g: *const guestfs_h, path: *const c_char, content: *const c_char, size: c_int) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_xfs_admin_argv(g: *const guestfs_h, device: *const c_char, optarg: *const RawXfsAdminOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_xfs_growfs_argv(g: *const guestfs_h, path: *const c_char, optarg: *const RawXfsGrowfsOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_xfs_info(g: *const guestfs_h, pathordevice: *const c_char) -> *const RawXFSInfo;
    #[allow(non_snake_case)]
    fn guestfs_xfs_repair_argv(g: *const guestfs_h, device: *const c_char, optarg: *const RawXfsRepairOptArgs) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_yara_destroy(g: *const guestfs_h) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_yara_load(g: *const guestfs_h, filename: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_yara_scan(g: *const guestfs_h, path: *const c_char) -> *const RawList<RawYaraDetection>;
    #[allow(non_snake_case)]
    fn guestfs_zegrep(g: *const guestfs_h, regex: *const c_char, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_zegrepi(g: *const guestfs_h, regex: *const c_char, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_zero(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_zero_device(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_zero_free_space(g: *const guestfs_h, directory: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_zerofree(g: *const guestfs_h, device: *const c_char) -> c_int;
    #[allow(non_snake_case)]
    fn guestfs_zfgrep(g: *const guestfs_h, pattern: *const c_char, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_zfgrepi(g: *const guestfs_h, pattern: *const c_char, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_zfile(g: *const guestfs_h, meth: *const c_char, path: *const c_char) -> *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_zgrep(g: *const guestfs_h, regex: *const c_char, path: *const c_char) -> *const *const c_char;
    #[allow(non_snake_case)]
    fn guestfs_zgrepi(g: *const guestfs_h, regex: *const c_char, path: *const c_char) -> *const *const c_char;
}
impl<'a> Handle<'a> {
    /// delete the default POSIX ACL of a directory
    #[allow(non_snake_case)]
    pub fn acl_delete_def_file(&self, dir: &str) -> Result<(), Error> {
        let c_dir = ffi::CString::new(dir)?;
        
        let r = unsafe { guestfs_acl_delete_def_file(self.g, (&c_dir).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("acl_delete_def_file"));
        }
        drop(c_dir);
        Ok(())
    }

    /// get the POSIX ACL attached to a file
    #[allow(non_snake_case)]
    pub fn acl_get_file(&self, path: &str, acltype: &str) -> Result<String, Error> {
        let c_path = ffi::CString::new(path)?;
        let c_acltype = ffi::CString::new(acltype)?;
        
        let r = unsafe { guestfs_acl_get_file(self.g, (&c_path).as_ptr(), (&c_acltype).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("acl_get_file"));
        }
        drop(c_path);
        drop(c_acltype);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// set the POSIX ACL attached to a file
    #[allow(non_snake_case)]
    pub fn acl_set_file(&self, path: &str, acltype: &str, acl: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        let c_acltype = ffi::CString::new(acltype)?;
        let c_acl = ffi::CString::new(acl)?;
        
        let r = unsafe { guestfs_acl_set_file(self.g, (&c_path).as_ptr(), (&c_acltype).as_ptr(), (&c_acl).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("acl_set_file"));
        }
        drop(c_path);
        drop(c_acltype);
        drop(c_acl);
        Ok(())
    }

    /// add a CD-ROM disk image to examine
    #[allow(non_snake_case)]
    pub fn add_cdrom(&self, filename: &str) -> Result<(), Error> {
        let c_filename = ffi::CString::new(filename)?;
        
        let r = unsafe { guestfs_add_cdrom(self.g, (&c_filename).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("add_cdrom"));
        }
        drop(c_filename);
        Ok(())
    }

    /// add the disk(s) from a named libvirt domain
    #[allow(non_snake_case)]
    pub fn add_domain(&self, dom: &str, optargs: AddDomainOptArgs) -> Result<i32, Error> {
        let c_dom = ffi::CString::new(dom)?;
        let optargs_cexpr = CExprAddDomainOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_add_domain_argv(self.g, (&c_dom).as_ptr(), &(RawAddDomainOptArgs::from(&optargs_cexpr)) as *const RawAddDomainOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("add_domain"));
        }
        drop(c_dom);
        drop(optargs_cexpr);
        Ok(r)
    }

    /// add an image to examine or modify
    #[allow(non_snake_case)]
    pub fn add_drive(&self, filename: &str, optargs: AddDriveOptArgs) -> Result<(), Error> {
        let c_filename = ffi::CString::new(filename)?;
        let optargs_cexpr = CExprAddDriveOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_add_drive_opts_argv(self.g, (&c_filename).as_ptr(), &(RawAddDriveOptArgs::from(&optargs_cexpr)) as *const RawAddDriveOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("add_drive"));
        }
        drop(c_filename);
        drop(optargs_cexpr);
        Ok(())
    }

    /// add a drive in snapshot mode (read-only)
    #[allow(non_snake_case)]
    pub fn add_drive_ro(&self, filename: &str) -> Result<(), Error> {
        let c_filename = ffi::CString::new(filename)?;
        
        let r = unsafe { guestfs_add_drive_ro(self.g, (&c_filename).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("add_drive_ro"));
        }
        drop(c_filename);
        Ok(())
    }

    /// add a drive read-only specifying the QEMU block emulation to use
    #[allow(non_snake_case)]
    pub fn add_drive_ro_with_if(&self, filename: &str, iface: &str) -> Result<(), Error> {
        let c_filename = ffi::CString::new(filename)?;
        let c_iface = ffi::CString::new(iface)?;
        
        let r = unsafe { guestfs_add_drive_ro_with_if(self.g, (&c_filename).as_ptr(), (&c_iface).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("add_drive_ro_with_if"));
        }
        drop(c_filename);
        drop(c_iface);
        Ok(())
    }

    /// add a temporary scratch drive
    #[allow(non_snake_case)]
    pub fn add_drive_scratch(&self, size: i64, optargs: AddDriveScratchOptArgs) -> Result<(), Error> {
        let optargs_cexpr = CExprAddDriveScratchOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_add_drive_scratch_argv(self.g, size, &(RawAddDriveScratchOptArgs::from(&optargs_cexpr)) as *const RawAddDriveScratchOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("add_drive_scratch"));
        }
        drop(optargs_cexpr);
        Ok(())
    }

    /// add a drive specifying the QEMU block emulation to use
    #[allow(non_snake_case)]
    pub fn add_drive_with_if(&self, filename: &str, iface: &str) -> Result<(), Error> {
        let c_filename = ffi::CString::new(filename)?;
        let c_iface = ffi::CString::new(iface)?;
        
        let r = unsafe { guestfs_add_drive_with_if(self.g, (&c_filename).as_ptr(), (&c_iface).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("add_drive_with_if"));
        }
        drop(c_filename);
        drop(c_iface);
        Ok(())
    }

    /// add the disk(s) from a libvirt domain
    #[allow(non_snake_case)]
    pub fn add_libvirt_dom(&self, dom: *mut c_void, optargs: AddLibvirtDomOptArgs) -> Result<i32, Error> {
        let optargs_cexpr = CExprAddLibvirtDomOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_add_libvirt_dom_argv(self.g, dom, &(RawAddLibvirtDomOptArgs::from(&optargs_cexpr)) as *const RawAddLibvirtDomOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("add_libvirt_dom"));
        }
        drop(optargs_cexpr);
        Ok(r)
    }

    /// clear Augeas path
    #[allow(non_snake_case)]
    pub fn aug_clear(&self, augpath: &str) -> Result<(), Error> {
        let c_augpath = ffi::CString::new(augpath)?;
        
        let r = unsafe { guestfs_aug_clear(self.g, (&c_augpath).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("aug_clear"));
        }
        drop(c_augpath);
        Ok(())
    }

    /// close the current Augeas handle
    #[allow(non_snake_case)]
    pub fn aug_close(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_aug_close(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("aug_close"));
        }
        Ok(())
    }

    /// define an Augeas node
    #[allow(non_snake_case)]
    pub fn aug_defnode(&self, name: &str, expr: &str, val: &str) -> Result<IntBool, Error> {
        let c_name = ffi::CString::new(name)?;
        let c_expr = ffi::CString::new(expr)?;
        let c_val = ffi::CString::new(val)?;
        
        let r = unsafe { guestfs_aug_defnode(self.g, (&c_name).as_ptr(), (&c_expr).as_ptr(), (&c_val).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("aug_defnode"));
        }
        drop(c_name);
        drop(c_expr);
        drop(c_val);
        Ok({
            let s = IntBool::try_from(r);
            unsafe { guestfs_free_int_bool(r) };
            s?
        })
    }

    /// define an Augeas variable
    #[allow(non_snake_case)]
    pub fn aug_defvar(&self, name: &str, expr: Option<&str>) -> Result<i32, Error> {
        let c_name = ffi::CString::new(name)?;
        let c_expr = expr.map(|s| ffi::CString::new(s)).transpose()?;
        
        let r = unsafe { guestfs_aug_defvar(self.g, (&c_name).as_ptr(), match &c_expr { Some(ref s) => s.as_ptr(), None => ptr::null() }
) };
        if r == -1 {
            return Err(self.get_error_from_handle("aug_defvar"));
        }
        drop(c_name);
        drop(c_expr);
        Ok(r)
    }

    /// look up the value of an Augeas path
    #[allow(non_snake_case)]
    pub fn aug_get(&self, augpath: &str) -> Result<String, Error> {
        let c_augpath = ffi::CString::new(augpath)?;
        
        let r = unsafe { guestfs_aug_get(self.g, (&c_augpath).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("aug_get"));
        }
        drop(c_augpath);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// create a new Augeas handle
    #[allow(non_snake_case)]
    pub fn aug_init(&self, root: &str, flags: i32) -> Result<(), Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_aug_init(self.g, (&c_root).as_ptr(), flags) };
        if r == -1 {
            return Err(self.get_error_from_handle("aug_init"));
        }
        drop(c_root);
        Ok(())
    }

    /// insert a sibling Augeas node
    #[allow(non_snake_case)]
    pub fn aug_insert(&self, augpath: &str, label: &str, before: bool) -> Result<(), Error> {
        let c_augpath = ffi::CString::new(augpath)?;
        let c_label = ffi::CString::new(label)?;
        let before = if before { 1 } else { 0 };
        
        let r = unsafe { guestfs_aug_insert(self.g, (&c_augpath).as_ptr(), (&c_label).as_ptr(), before) };
        if r == -1 {
            return Err(self.get_error_from_handle("aug_insert"));
        }
        drop(c_augpath);
        drop(c_label);
        Ok(())
    }

    /// return the label from an Augeas path expression
    #[allow(non_snake_case)]
    pub fn aug_label(&self, augpath: &str) -> Result<String, Error> {
        let c_augpath = ffi::CString::new(augpath)?;
        
        let r = unsafe { guestfs_aug_label(self.g, (&c_augpath).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("aug_label"));
        }
        drop(c_augpath);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// load files into the tree
    #[allow(non_snake_case)]
    pub fn aug_load(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_aug_load(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("aug_load"));
        }
        Ok(())
    }

    /// list Augeas nodes under augpath
    #[allow(non_snake_case)]
    pub fn aug_ls(&self, augpath: &str) -> Result<Vec<String>, Error> {
        let c_augpath = ffi::CString::new(augpath)?;
        
        let r = unsafe { guestfs_aug_ls(self.g, (&c_augpath).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("aug_ls"));
        }
        drop(c_augpath);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// return Augeas nodes which match augpath
    #[allow(non_snake_case)]
    pub fn aug_match(&self, augpath: &str) -> Result<Vec<String>, Error> {
        let c_augpath = ffi::CString::new(augpath)?;
        
        let r = unsafe { guestfs_aug_match(self.g, (&c_augpath).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("aug_match"));
        }
        drop(c_augpath);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// move Augeas node
    #[allow(non_snake_case)]
    pub fn aug_mv(&self, src: &str, dest: &str) -> Result<(), Error> {
        let c_src = ffi::CString::new(src)?;
        let c_dest = ffi::CString::new(dest)?;
        
        let r = unsafe { guestfs_aug_mv(self.g, (&c_src).as_ptr(), (&c_dest).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("aug_mv"));
        }
        drop(c_src);
        drop(c_dest);
        Ok(())
    }

    /// remove an Augeas path
    #[allow(non_snake_case)]
    pub fn aug_rm(&self, augpath: &str) -> Result<i32, Error> {
        let c_augpath = ffi::CString::new(augpath)?;
        
        let r = unsafe { guestfs_aug_rm(self.g, (&c_augpath).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("aug_rm"));
        }
        drop(c_augpath);
        Ok(r)
    }

    /// write all pending Augeas changes to disk
    #[allow(non_snake_case)]
    pub fn aug_save(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_aug_save(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("aug_save"));
        }
        Ok(())
    }

    /// set Augeas path to value
    #[allow(non_snake_case)]
    pub fn aug_set(&self, augpath: &str, val: &str) -> Result<(), Error> {
        let c_augpath = ffi::CString::new(augpath)?;
        let c_val = ffi::CString::new(val)?;
        
        let r = unsafe { guestfs_aug_set(self.g, (&c_augpath).as_ptr(), (&c_val).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("aug_set"));
        }
        drop(c_augpath);
        drop(c_val);
        Ok(())
    }

    /// set multiple Augeas nodes
    #[allow(non_snake_case)]
    pub fn aug_setm(&self, base: &str, sub: Option<&str>, val: &str) -> Result<i32, Error> {
        let c_base = ffi::CString::new(base)?;
        let c_sub = sub.map(|s| ffi::CString::new(s)).transpose()?;
        let c_val = ffi::CString::new(val)?;
        
        let r = unsafe { guestfs_aug_setm(self.g, (&c_base).as_ptr(), match &c_sub { Some(ref s) => s.as_ptr(), None => ptr::null() }
, (&c_val).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("aug_setm"));
        }
        drop(c_base);
        drop(c_sub);
        drop(c_val);
        Ok(r)
    }

    /// add/remove an Augeas lens transformation
    #[allow(non_snake_case)]
    pub fn aug_transform(&self, lens: &str, file: &str, optargs: AugTransformOptArgs) -> Result<(), Error> {
        let c_lens = ffi::CString::new(lens)?;
        let c_file = ffi::CString::new(file)?;
        let optargs_cexpr = CExprAugTransformOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_aug_transform_argv(self.g, (&c_lens).as_ptr(), (&c_file).as_ptr(), &(RawAugTransformOptArgs::from(&optargs_cexpr)) as *const RawAugTransformOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("aug_transform"));
        }
        drop(c_lens);
        drop(c_file);
        drop(optargs_cexpr);
        Ok(())
    }

    /// test availability of some parts of the API
    #[allow(non_snake_case)]
    pub fn available(&self, groups: &[&str]) -> Result<(), Error> {
        let c_groups_v = arg_string_list(groups)?;
        let mut c_groups = (&c_groups_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_groups.push(ptr::null());
        
        let r = unsafe { guestfs_available(self.g, (&c_groups).as_ptr() as *const *const c_char) };
        if r == -1 {
            return Err(self.get_error_from_handle("available"));
        }
        drop(c_groups);
        drop(c_groups_v);
        Ok(())
    }

    /// return a list of all optional groups
    #[allow(non_snake_case)]
    pub fn available_all_groups(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_available_all_groups(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("available_all_groups"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// upload base64-encoded data to file
    #[allow(non_snake_case)]
    pub fn base64_in(&self, base64file: &str, filename: &str) -> Result<(), Error> {
        let c_base64file = ffi::CString::new(base64file)?;
        let c_filename = ffi::CString::new(filename)?;
        
        let r = unsafe { guestfs_base64_in(self.g, (&c_base64file).as_ptr(), (&c_filename).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("base64_in"));
        }
        drop(c_base64file);
        drop(c_filename);
        Ok(())
    }

    /// download file and encode as base64
    #[allow(non_snake_case)]
    pub fn base64_out(&self, filename: &str, base64file: &str) -> Result<(), Error> {
        let c_filename = ffi::CString::new(filename)?;
        let c_base64file = ffi::CString::new(base64file)?;
        
        let r = unsafe { guestfs_base64_out(self.g, (&c_filename).as_ptr(), (&c_base64file).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("base64_out"));
        }
        drop(c_filename);
        drop(c_base64file);
        Ok(())
    }

    /// discard all blocks on a device
    #[allow(non_snake_case)]
    pub fn blkdiscard(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_blkdiscard(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("blkdiscard"));
        }
        drop(c_device);
        Ok(())
    }

    /// return true if discarded blocks are read as zeroes
    #[allow(non_snake_case)]
    pub fn blkdiscardzeroes(&self, device: &str) -> Result<bool, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_blkdiscardzeroes(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("blkdiscardzeroes"));
        }
        drop(c_device);
        Ok(r != 0)
    }

    /// print block device attributes
    #[allow(non_snake_case)]
    pub fn blkid(&self, device: &str) -> Result<collections::HashMap<String, String>, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_blkid(self.g, (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("blkid"));
        }
        drop(c_device);
        Ok({
            let h = hashmap(r);
            free_string_list(r);
            h?
        })
    }

    /// flush device buffers
    #[allow(non_snake_case)]
    pub fn blockdev_flushbufs(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_blockdev_flushbufs(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("blockdev_flushbufs"));
        }
        drop(c_device);
        Ok(())
    }

    /// get blocksize of block device
    #[allow(non_snake_case)]
    pub fn blockdev_getbsz(&self, device: &str) -> Result<i32, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_blockdev_getbsz(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("blockdev_getbsz"));
        }
        drop(c_device);
        Ok(r)
    }

    /// is block device set to read-only
    #[allow(non_snake_case)]
    pub fn blockdev_getro(&self, device: &str) -> Result<bool, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_blockdev_getro(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("blockdev_getro"));
        }
        drop(c_device);
        Ok(r != 0)
    }

    /// get total size of device in bytes
    #[allow(non_snake_case)]
    pub fn blockdev_getsize64(&self, device: &str) -> Result<i64, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_blockdev_getsize64(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("blockdev_getsize64"));
        }
        drop(c_device);
        Ok(r)
    }

    /// get sectorsize of block device
    #[allow(non_snake_case)]
    pub fn blockdev_getss(&self, device: &str) -> Result<i32, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_blockdev_getss(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("blockdev_getss"));
        }
        drop(c_device);
        Ok(r)
    }

    /// get total size of device in 512-byte sectors
    #[allow(non_snake_case)]
    pub fn blockdev_getsz(&self, device: &str) -> Result<i64, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_blockdev_getsz(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("blockdev_getsz"));
        }
        drop(c_device);
        Ok(r)
    }

    /// reread partition table
    #[allow(non_snake_case)]
    pub fn blockdev_rereadpt(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_blockdev_rereadpt(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("blockdev_rereadpt"));
        }
        drop(c_device);
        Ok(())
    }

    /// set blocksize of block device
    #[allow(non_snake_case)]
    pub fn blockdev_setbsz(&self, device: &str, blocksize: i32) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_blockdev_setbsz(self.g, (&c_device).as_ptr(), blocksize) };
        if r == -1 {
            return Err(self.get_error_from_handle("blockdev_setbsz"));
        }
        drop(c_device);
        Ok(())
    }

    /// set readahead
    #[allow(non_snake_case)]
    pub fn blockdev_setra(&self, device: &str, sectors: i32) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_blockdev_setra(self.g, (&c_device).as_ptr(), sectors) };
        if r == -1 {
            return Err(self.get_error_from_handle("blockdev_setra"));
        }
        drop(c_device);
        Ok(())
    }

    /// set block device to read-only
    #[allow(non_snake_case)]
    pub fn blockdev_setro(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_blockdev_setro(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("blockdev_setro"));
        }
        drop(c_device);
        Ok(())
    }

    /// set block device to read-write
    #[allow(non_snake_case)]
    pub fn blockdev_setrw(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_blockdev_setrw(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("blockdev_setrw"));
        }
        drop(c_device);
        Ok(())
    }

    /// cancel a running or paused balance
    #[allow(non_snake_case)]
    pub fn btrfs_balance_cancel(&self, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_btrfs_balance_cancel(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_balance_cancel"));
        }
        drop(c_path);
        Ok(())
    }

    /// pause a running balance
    #[allow(non_snake_case)]
    pub fn btrfs_balance_pause(&self, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_btrfs_balance_pause(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_balance_pause"));
        }
        drop(c_path);
        Ok(())
    }

    /// resume a paused balance
    #[allow(non_snake_case)]
    pub fn btrfs_balance_resume(&self, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_btrfs_balance_resume(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_balance_resume"));
        }
        drop(c_path);
        Ok(())
    }

    /// show the status of a running or paused balance
    #[allow(non_snake_case)]
    pub fn btrfs_balance_status(&self, path: &str) -> Result<BTRFSBalance, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_btrfs_balance_status(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("btrfs_balance_status"));
        }
        drop(c_path);
        Ok({
            let s = BTRFSBalance::try_from(r);
            unsafe { guestfs_free_btrfsbalance(r) };
            s?
        })
    }

    /// add devices to a btrfs filesystem
    #[allow(non_snake_case)]
    pub fn btrfs_device_add(&self, devices: &[&str], fs: &str) -> Result<(), Error> {
        let c_devices_v = arg_string_list(devices)?;
        let mut c_devices = (&c_devices_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_devices.push(ptr::null());
        let c_fs = ffi::CString::new(fs)?;
        
        let r = unsafe { guestfs_btrfs_device_add(self.g, (&c_devices).as_ptr() as *const *const c_char, (&c_fs).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_device_add"));
        }
        drop(c_devices);
        drop(c_devices_v);
        drop(c_fs);
        Ok(())
    }

    /// remove devices from a btrfs filesystem
    #[allow(non_snake_case)]
    pub fn btrfs_device_delete(&self, devices: &[&str], fs: &str) -> Result<(), Error> {
        let c_devices_v = arg_string_list(devices)?;
        let mut c_devices = (&c_devices_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_devices.push(ptr::null());
        let c_fs = ffi::CString::new(fs)?;
        
        let r = unsafe { guestfs_btrfs_device_delete(self.g, (&c_devices).as_ptr() as *const *const c_char, (&c_fs).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_device_delete"));
        }
        drop(c_devices);
        drop(c_devices_v);
        drop(c_fs);
        Ok(())
    }

    /// balance a btrfs filesystem
    #[allow(non_snake_case)]
    pub fn btrfs_filesystem_balance(&self, fs: &str) -> Result<(), Error> {
        let c_fs = ffi::CString::new(fs)?;
        
        let r = unsafe { guestfs_btrfs_filesystem_balance(self.g, (&c_fs).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_filesystem_balance"));
        }
        drop(c_fs);
        Ok(())
    }

    /// defragment a file or directory
    #[allow(non_snake_case)]
    pub fn btrfs_filesystem_defragment(&self, path: &str, optargs: BtrfsFilesystemDefragmentOptArgs) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        let optargs_cexpr = CExprBtrfsFilesystemDefragmentOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_btrfs_filesystem_defragment_argv(self.g, (&c_path).as_ptr(), &(RawBtrfsFilesystemDefragmentOptArgs::from(&optargs_cexpr)) as *const RawBtrfsFilesystemDefragmentOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_filesystem_defragment"));
        }
        drop(c_path);
        drop(optargs_cexpr);
        Ok(())
    }

    /// resize a btrfs filesystem
    #[allow(non_snake_case)]
    pub fn btrfs_filesystem_resize(&self, mountpoint: &str, optargs: BtrfsFilesystemResizeOptArgs) -> Result<(), Error> {
        let c_mountpoint = ffi::CString::new(mountpoint)?;
        let optargs_cexpr = CExprBtrfsFilesystemResizeOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_btrfs_filesystem_resize_argv(self.g, (&c_mountpoint).as_ptr(), &(RawBtrfsFilesystemResizeOptArgs::from(&optargs_cexpr)) as *const RawBtrfsFilesystemResizeOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_filesystem_resize"));
        }
        drop(c_mountpoint);
        drop(optargs_cexpr);
        Ok(())
    }

    /// list devices for btrfs filesystem
    #[allow(non_snake_case)]
    pub fn btrfs_filesystem_show(&self, device: &str) -> Result<Vec<String>, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_btrfs_filesystem_show(self.g, (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("btrfs_filesystem_show"));
        }
        drop(c_device);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// sync a btrfs filesystem
    #[allow(non_snake_case)]
    pub fn btrfs_filesystem_sync(&self, fs: &str) -> Result<(), Error> {
        let c_fs = ffi::CString::new(fs)?;
        
        let r = unsafe { guestfs_btrfs_filesystem_sync(self.g, (&c_fs).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_filesystem_sync"));
        }
        drop(c_fs);
        Ok(())
    }

    /// check a btrfs filesystem
    #[allow(non_snake_case)]
    pub fn btrfs_fsck(&self, device: &str, optargs: BtrfsFsckOptArgs) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let optargs_cexpr = CExprBtrfsFsckOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_btrfs_fsck_argv(self.g, (&c_device).as_ptr(), &(RawBtrfsFsckOptArgs::from(&optargs_cexpr)) as *const RawBtrfsFsckOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_fsck"));
        }
        drop(c_device);
        drop(optargs_cexpr);
        Ok(())
    }

    /// create an image of a btrfs filesystem
    #[allow(non_snake_case)]
    pub fn btrfs_image(&self, source: &[&str], image: &str, optargs: BtrfsImageOptArgs) -> Result<(), Error> {
        let c_source_v = arg_string_list(source)?;
        let mut c_source = (&c_source_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_source.push(ptr::null());
        let c_image = ffi::CString::new(image)?;
        let optargs_cexpr = CExprBtrfsImageOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_btrfs_image_argv(self.g, (&c_source).as_ptr() as *const *const c_char, (&c_image).as_ptr(), &(RawBtrfsImageOptArgs::from(&optargs_cexpr)) as *const RawBtrfsImageOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_image"));
        }
        drop(c_source);
        drop(c_source_v);
        drop(c_image);
        drop(optargs_cexpr);
        Ok(())
    }

    /// add a qgroup to a parent qgroup
    #[allow(non_snake_case)]
    pub fn btrfs_qgroup_assign(&self, src: &str, dst: &str, path: &str) -> Result<(), Error> {
        let c_src = ffi::CString::new(src)?;
        let c_dst = ffi::CString::new(dst)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_btrfs_qgroup_assign(self.g, (&c_src).as_ptr(), (&c_dst).as_ptr(), (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_qgroup_assign"));
        }
        drop(c_src);
        drop(c_dst);
        drop(c_path);
        Ok(())
    }

    /// create a subvolume quota group
    #[allow(non_snake_case)]
    pub fn btrfs_qgroup_create(&self, qgroupid: &str, subvolume: &str) -> Result<(), Error> {
        let c_qgroupid = ffi::CString::new(qgroupid)?;
        let c_subvolume = ffi::CString::new(subvolume)?;
        
        let r = unsafe { guestfs_btrfs_qgroup_create(self.g, (&c_qgroupid).as_ptr(), (&c_subvolume).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_qgroup_create"));
        }
        drop(c_qgroupid);
        drop(c_subvolume);
        Ok(())
    }

    /// destroy a subvolume quota group
    #[allow(non_snake_case)]
    pub fn btrfs_qgroup_destroy(&self, qgroupid: &str, subvolume: &str) -> Result<(), Error> {
        let c_qgroupid = ffi::CString::new(qgroupid)?;
        let c_subvolume = ffi::CString::new(subvolume)?;
        
        let r = unsafe { guestfs_btrfs_qgroup_destroy(self.g, (&c_qgroupid).as_ptr(), (&c_subvolume).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_qgroup_destroy"));
        }
        drop(c_qgroupid);
        drop(c_subvolume);
        Ok(())
    }

    /// limit the size of a subvolume
    #[allow(non_snake_case)]
    pub fn btrfs_qgroup_limit(&self, subvolume: &str, size: i64) -> Result<(), Error> {
        let c_subvolume = ffi::CString::new(subvolume)?;
        
        let r = unsafe { guestfs_btrfs_qgroup_limit(self.g, (&c_subvolume).as_ptr(), size) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_qgroup_limit"));
        }
        drop(c_subvolume);
        Ok(())
    }

    /// remove a qgroup from its parent qgroup
    #[allow(non_snake_case)]
    pub fn btrfs_qgroup_remove(&self, src: &str, dst: &str, path: &str) -> Result<(), Error> {
        let c_src = ffi::CString::new(src)?;
        let c_dst = ffi::CString::new(dst)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_btrfs_qgroup_remove(self.g, (&c_src).as_ptr(), (&c_dst).as_ptr(), (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_qgroup_remove"));
        }
        drop(c_src);
        drop(c_dst);
        drop(c_path);
        Ok(())
    }

    /// show subvolume quota groups
    #[allow(non_snake_case)]
    pub fn btrfs_qgroup_show(&self, path: &str) -> Result<Vec<BTRFSQgroup>, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_btrfs_qgroup_show(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("btrfs_qgroup_show"));
        }
        drop(c_path);
        Ok({
            let l = struct_list::<RawBTRFSQgroup, BTRFSQgroup>(r);
            unsafe { guestfs_free_btrfsqgroup_list(r) };
            l?
        })
    }

    /// enable or disable subvolume quota support
    #[allow(non_snake_case)]
    pub fn btrfs_quota_enable(&self, fs: &str, enable: bool) -> Result<(), Error> {
        let c_fs = ffi::CString::new(fs)?;
        let enable = if enable { 1 } else { 0 };
        
        let r = unsafe { guestfs_btrfs_quota_enable(self.g, (&c_fs).as_ptr(), enable) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_quota_enable"));
        }
        drop(c_fs);
        Ok(())
    }

    /// trash all qgroup numbers and scan the metadata again with the current config
    #[allow(non_snake_case)]
    pub fn btrfs_quota_rescan(&self, fs: &str) -> Result<(), Error> {
        let c_fs = ffi::CString::new(fs)?;
        
        let r = unsafe { guestfs_btrfs_quota_rescan(self.g, (&c_fs).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_quota_rescan"));
        }
        drop(c_fs);
        Ok(())
    }

    /// replace a btrfs managed device with another device
    #[allow(non_snake_case)]
    pub fn btrfs_replace(&self, srcdev: &str, targetdev: &str, mntpoint: &str) -> Result<(), Error> {
        let c_srcdev = ffi::CString::new(srcdev)?;
        let c_targetdev = ffi::CString::new(targetdev)?;
        let c_mntpoint = ffi::CString::new(mntpoint)?;
        
        let r = unsafe { guestfs_btrfs_replace(self.g, (&c_srcdev).as_ptr(), (&c_targetdev).as_ptr(), (&c_mntpoint).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_replace"));
        }
        drop(c_srcdev);
        drop(c_targetdev);
        drop(c_mntpoint);
        Ok(())
    }

    /// recover the chunk tree of btrfs filesystem
    #[allow(non_snake_case)]
    pub fn btrfs_rescue_chunk_recover(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_btrfs_rescue_chunk_recover(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_rescue_chunk_recover"));
        }
        drop(c_device);
        Ok(())
    }

    /// recover bad superblocks from good copies
    #[allow(non_snake_case)]
    pub fn btrfs_rescue_super_recover(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_btrfs_rescue_super_recover(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_rescue_super_recover"));
        }
        drop(c_device);
        Ok(())
    }

    /// cancel a running scrub
    #[allow(non_snake_case)]
    pub fn btrfs_scrub_cancel(&self, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_btrfs_scrub_cancel(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_scrub_cancel"));
        }
        drop(c_path);
        Ok(())
    }

    /// resume a previously canceled or interrupted scrub
    #[allow(non_snake_case)]
    pub fn btrfs_scrub_resume(&self, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_btrfs_scrub_resume(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_scrub_resume"));
        }
        drop(c_path);
        Ok(())
    }

    /// read all data from all disks and verify checksums
    #[allow(non_snake_case)]
    pub fn btrfs_scrub_start(&self, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_btrfs_scrub_start(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_scrub_start"));
        }
        drop(c_path);
        Ok(())
    }

    /// show status of running or finished scrub
    #[allow(non_snake_case)]
    pub fn btrfs_scrub_status(&self, path: &str) -> Result<BTRFSScrub, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_btrfs_scrub_status(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("btrfs_scrub_status"));
        }
        drop(c_path);
        Ok({
            let s = BTRFSScrub::try_from(r);
            unsafe { guestfs_free_btrfsscrub(r) };
            s?
        })
    }

    /// enable or disable the seeding feature of device
    #[allow(non_snake_case)]
    pub fn btrfs_set_seeding(&self, device: &str, seeding: bool) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let seeding = if seeding { 1 } else { 0 };
        
        let r = unsafe { guestfs_btrfs_set_seeding(self.g, (&c_device).as_ptr(), seeding) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_set_seeding"));
        }
        drop(c_device);
        Ok(())
    }

    /// create a btrfs subvolume
    #[allow(non_snake_case)]
    pub fn btrfs_subvolume_create(&self, dest: &str, optargs: BtrfsSubvolumeCreateOptArgs) -> Result<(), Error> {
        let c_dest = ffi::CString::new(dest)?;
        let optargs_cexpr = CExprBtrfsSubvolumeCreateOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_btrfs_subvolume_create_opts_argv(self.g, (&c_dest).as_ptr(), &(RawBtrfsSubvolumeCreateOptArgs::from(&optargs_cexpr)) as *const RawBtrfsSubvolumeCreateOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_subvolume_create"));
        }
        drop(c_dest);
        drop(optargs_cexpr);
        Ok(())
    }

    /// delete a btrfs subvolume or snapshot
    #[allow(non_snake_case)]
    pub fn btrfs_subvolume_delete(&self, subvolume: &str) -> Result<(), Error> {
        let c_subvolume = ffi::CString::new(subvolume)?;
        
        let r = unsafe { guestfs_btrfs_subvolume_delete(self.g, (&c_subvolume).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_subvolume_delete"));
        }
        drop(c_subvolume);
        Ok(())
    }

    /// get the default subvolume or snapshot of a filesystem
    #[allow(non_snake_case)]
    pub fn btrfs_subvolume_get_default(&self, fs: &str) -> Result<i64, Error> {
        let c_fs = ffi::CString::new(fs)?;
        
        let r = unsafe { guestfs_btrfs_subvolume_get_default(self.g, (&c_fs).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_subvolume_get_default"));
        }
        drop(c_fs);
        Ok(r)
    }

    /// list btrfs snapshots and subvolumes
    #[allow(non_snake_case)]
    pub fn btrfs_subvolume_list(&self, fs: &str) -> Result<Vec<BTRFSSubvolume>, Error> {
        let c_fs = ffi::CString::new(fs)?;
        
        let r = unsafe { guestfs_btrfs_subvolume_list(self.g, (&c_fs).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("btrfs_subvolume_list"));
        }
        drop(c_fs);
        Ok({
            let l = struct_list::<RawBTRFSSubvolume, BTRFSSubvolume>(r);
            unsafe { guestfs_free_btrfssubvolume_list(r) };
            l?
        })
    }

    /// set default btrfs subvolume
    #[allow(non_snake_case)]
    pub fn btrfs_subvolume_set_default(&self, id: i64, fs: &str) -> Result<(), Error> {
        let c_fs = ffi::CString::new(fs)?;
        
        let r = unsafe { guestfs_btrfs_subvolume_set_default(self.g, id, (&c_fs).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_subvolume_set_default"));
        }
        drop(c_fs);
        Ok(())
    }

    /// return detailed information of the subvolume
    #[allow(non_snake_case)]
    pub fn btrfs_subvolume_show(&self, subvolume: &str) -> Result<collections::HashMap<String, String>, Error> {
        let c_subvolume = ffi::CString::new(subvolume)?;
        
        let r = unsafe { guestfs_btrfs_subvolume_show(self.g, (&c_subvolume).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("btrfs_subvolume_show"));
        }
        drop(c_subvolume);
        Ok({
            let h = hashmap(r);
            free_string_list(r);
            h?
        })
    }

    /// create a btrfs snapshot
    #[allow(non_snake_case)]
    pub fn btrfs_subvolume_snapshot(&self, source: &str, dest: &str, optargs: BtrfsSubvolumeSnapshotOptArgs) -> Result<(), Error> {
        let c_source = ffi::CString::new(source)?;
        let c_dest = ffi::CString::new(dest)?;
        let optargs_cexpr = CExprBtrfsSubvolumeSnapshotOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_btrfs_subvolume_snapshot_opts_argv(self.g, (&c_source).as_ptr(), (&c_dest).as_ptr(), &(RawBtrfsSubvolumeSnapshotOptArgs::from(&optargs_cexpr)) as *const RawBtrfsSubvolumeSnapshotOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfs_subvolume_snapshot"));
        }
        drop(c_source);
        drop(c_dest);
        drop(optargs_cexpr);
        Ok(())
    }

    /// enable extended inode refs
    #[allow(non_snake_case)]
    pub fn btrfstune_enable_extended_inode_refs(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_btrfstune_enable_extended_inode_refs(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfstune_enable_extended_inode_refs"));
        }
        drop(c_device);
        Ok(())
    }

    /// enable skinny metadata extent refs
    #[allow(non_snake_case)]
    pub fn btrfstune_enable_skinny_metadata_extent_refs(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_btrfstune_enable_skinny_metadata_extent_refs(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfstune_enable_skinny_metadata_extent_refs"));
        }
        drop(c_device);
        Ok(())
    }

    /// enable or disable seeding of a btrfs device
    #[allow(non_snake_case)]
    pub fn btrfstune_seeding(&self, device: &str, seeding: bool) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let seeding = if seeding { 1 } else { 0 };
        
        let r = unsafe { guestfs_btrfstune_seeding(self.g, (&c_device).as_ptr(), seeding) };
        if r == -1 {
            return Err(self.get_error_from_handle("btrfstune_seeding"));
        }
        drop(c_device);
        Ok(())
    }

    /// return the C pointer to the guestfs_h handle
    #[allow(non_snake_case)]
    pub fn c_pointer(&self, ) -> Result<i64, Error> {
        
        let r = unsafe { guestfs_c_pointer(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("c_pointer"));
        }
        Ok(r)
    }

    /// return canonical device name
    #[allow(non_snake_case)]
    pub fn canonical_device_name(&self, device: &str) -> Result<String, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_canonical_device_name(self.g, (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("canonical_device_name"));
        }
        drop(c_device);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get the Linux capabilities attached to a file
    #[allow(non_snake_case)]
    pub fn cap_get_file(&self, path: &str) -> Result<String, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_cap_get_file(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("cap_get_file"));
        }
        drop(c_path);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// set the Linux capabilities attached to a file
    #[allow(non_snake_case)]
    pub fn cap_set_file(&self, path: &str, cap: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        let c_cap = ffi::CString::new(cap)?;
        
        let r = unsafe { guestfs_cap_set_file(self.g, (&c_path).as_ptr(), (&c_cap).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("cap_set_file"));
        }
        drop(c_path);
        drop(c_cap);
        Ok(())
    }

    /// return true path on case-insensitive filesystem
    #[allow(non_snake_case)]
    pub fn case_sensitive_path(&self, path: &str) -> Result<String, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_case_sensitive_path(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("case_sensitive_path"));
        }
        drop(c_path);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// list the contents of a file
    #[allow(non_snake_case)]
    pub fn cat(&self, path: &str) -> Result<String, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_cat(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("cat"));
        }
        drop(c_path);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// compute MD5, SHAx or CRC checksum of file
    #[allow(non_snake_case)]
    pub fn checksum(&self, csumtype: &str, path: &str) -> Result<String, Error> {
        let c_csumtype = ffi::CString::new(csumtype)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_checksum(self.g, (&c_csumtype).as_ptr(), (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("checksum"));
        }
        drop(c_csumtype);
        drop(c_path);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// compute MD5, SHAx or CRC checksum of the contents of a device
    #[allow(non_snake_case)]
    pub fn checksum_device(&self, csumtype: &str, device: &str) -> Result<String, Error> {
        let c_csumtype = ffi::CString::new(csumtype)?;
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_checksum_device(self.g, (&c_csumtype).as_ptr(), (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("checksum_device"));
        }
        drop(c_csumtype);
        drop(c_device);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// compute MD5, SHAx or CRC checksum of files in a directory
    #[allow(non_snake_case)]
    pub fn checksums_out(&self, csumtype: &str, directory: &str, sumsfile: &str) -> Result<(), Error> {
        let c_csumtype = ffi::CString::new(csumtype)?;
        let c_directory = ffi::CString::new(directory)?;
        let c_sumsfile = ffi::CString::new(sumsfile)?;
        
        let r = unsafe { guestfs_checksums_out(self.g, (&c_csumtype).as_ptr(), (&c_directory).as_ptr(), (&c_sumsfile).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("checksums_out"));
        }
        drop(c_csumtype);
        drop(c_directory);
        drop(c_sumsfile);
        Ok(())
    }

    /// change file mode
    #[allow(non_snake_case)]
    pub fn chmod(&self, mode: i32, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_chmod(self.g, mode, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("chmod"));
        }
        drop(c_path);
        Ok(())
    }

    /// change file owner and group
    #[allow(non_snake_case)]
    pub fn chown(&self, owner: i32, group: i32, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_chown(self.g, owner, group, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("chown"));
        }
        drop(c_path);
        Ok(())
    }

    /// remove a single per-backend settings string
    #[allow(non_snake_case)]
    pub fn clear_backend_setting(&self, name: &str) -> Result<i32, Error> {
        let c_name = ffi::CString::new(name)?;
        
        let r = unsafe { guestfs_clear_backend_setting(self.g, (&c_name).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("clear_backend_setting"));
        }
        drop(c_name);
        Ok(r)
    }

    /// open an encrypted LUKS block device with Clevis and Tang
    #[allow(non_snake_case)]
    pub fn clevis_luks_unlock(&self, device: &str, mapname: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_mapname = ffi::CString::new(mapname)?;
        
        let r = unsafe { guestfs_clevis_luks_unlock(self.g, (&c_device).as_ptr(), (&c_mapname).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("clevis_luks_unlock"));
        }
        drop(c_device);
        drop(c_mapname);
        Ok(())
    }

    /// run a command from the guest filesystem
    #[allow(non_snake_case)]
    pub fn command(&self, arguments: &[&str]) -> Result<String, Error> {
        let c_arguments_v = arg_string_list(arguments)?;
        let mut c_arguments = (&c_arguments_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_arguments.push(ptr::null());
        
        let r = unsafe { guestfs_command(self.g, (&c_arguments).as_ptr() as *const *const c_char) };
        if r.is_null() {
            return Err(self.get_error_from_handle("command"));
        }
        drop(c_arguments);
        drop(c_arguments_v);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// run a command, returning lines
    #[allow(non_snake_case)]
    pub fn command_lines(&self, arguments: &[&str]) -> Result<Vec<String>, Error> {
        let c_arguments_v = arg_string_list(arguments)?;
        let mut c_arguments = (&c_arguments_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_arguments.push(ptr::null());
        
        let r = unsafe { guestfs_command_lines(self.g, (&c_arguments).as_ptr() as *const *const c_char) };
        if r.is_null() {
            return Err(self.get_error_from_handle("command_lines"));
        }
        drop(c_arguments);
        drop(c_arguments_v);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// output compressed device
    #[allow(non_snake_case)]
    pub fn compress_device_out(&self, ctype: &str, device: &str, zdevice: &str, optargs: CompressDeviceOutOptArgs) -> Result<(), Error> {
        let c_ctype = ffi::CString::new(ctype)?;
        let c_device = ffi::CString::new(device)?;
        let c_zdevice = ffi::CString::new(zdevice)?;
        let optargs_cexpr = CExprCompressDeviceOutOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_compress_device_out_argv(self.g, (&c_ctype).as_ptr(), (&c_device).as_ptr(), (&c_zdevice).as_ptr(), &(RawCompressDeviceOutOptArgs::from(&optargs_cexpr)) as *const RawCompressDeviceOutOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("compress_device_out"));
        }
        drop(c_ctype);
        drop(c_device);
        drop(c_zdevice);
        drop(optargs_cexpr);
        Ok(())
    }

    /// output compressed file
    #[allow(non_snake_case)]
    pub fn compress_out(&self, ctype: &str, file: &str, zfile: &str, optargs: CompressOutOptArgs) -> Result<(), Error> {
        let c_ctype = ffi::CString::new(ctype)?;
        let c_file = ffi::CString::new(file)?;
        let c_zfile = ffi::CString::new(zfile)?;
        let optargs_cexpr = CExprCompressOutOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_compress_out_argv(self.g, (&c_ctype).as_ptr(), (&c_file).as_ptr(), (&c_zfile).as_ptr(), &(RawCompressOutOptArgs::from(&optargs_cexpr)) as *const RawCompressOutOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("compress_out"));
        }
        drop(c_ctype);
        drop(c_file);
        drop(c_zfile);
        drop(optargs_cexpr);
        Ok(())
    }

    /// add hypervisor parameters
    #[allow(non_snake_case)]
    pub fn config(&self, hvparam: &str, hvvalue: Option<&str>) -> Result<(), Error> {
        let c_hvparam = ffi::CString::new(hvparam)?;
        let c_hvvalue = hvvalue.map(|s| ffi::CString::new(s)).transpose()?;
        
        let r = unsafe { guestfs_config(self.g, (&c_hvparam).as_ptr(), match &c_hvvalue { Some(ref s) => s.as_ptr(), None => ptr::null() }
) };
        if r == -1 {
            return Err(self.get_error_from_handle("config"));
        }
        drop(c_hvparam);
        drop(c_hvvalue);
        Ok(())
    }

    /// copy the attributes of a path (file/directory) to another
    #[allow(non_snake_case)]
    pub fn copy_attributes(&self, src: &str, dest: &str, optargs: CopyAttributesOptArgs) -> Result<(), Error> {
        let c_src = ffi::CString::new(src)?;
        let c_dest = ffi::CString::new(dest)?;
        let optargs_cexpr = CExprCopyAttributesOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_copy_attributes_argv(self.g, (&c_src).as_ptr(), (&c_dest).as_ptr(), &(RawCopyAttributesOptArgs::from(&optargs_cexpr)) as *const RawCopyAttributesOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("copy_attributes"));
        }
        drop(c_src);
        drop(c_dest);
        drop(optargs_cexpr);
        Ok(())
    }

    /// copy from source device to destination device
    #[allow(non_snake_case)]
    pub fn copy_device_to_device(&self, src: &str, dest: &str, optargs: CopyDeviceToDeviceOptArgs) -> Result<(), Error> {
        let c_src = ffi::CString::new(src)?;
        let c_dest = ffi::CString::new(dest)?;
        let optargs_cexpr = CExprCopyDeviceToDeviceOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_copy_device_to_device_argv(self.g, (&c_src).as_ptr(), (&c_dest).as_ptr(), &(RawCopyDeviceToDeviceOptArgs::from(&optargs_cexpr)) as *const RawCopyDeviceToDeviceOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("copy_device_to_device"));
        }
        drop(c_src);
        drop(c_dest);
        drop(optargs_cexpr);
        Ok(())
    }

    /// copy from source device to destination file
    #[allow(non_snake_case)]
    pub fn copy_device_to_file(&self, src: &str, dest: &str, optargs: CopyDeviceToFileOptArgs) -> Result<(), Error> {
        let c_src = ffi::CString::new(src)?;
        let c_dest = ffi::CString::new(dest)?;
        let optargs_cexpr = CExprCopyDeviceToFileOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_copy_device_to_file_argv(self.g, (&c_src).as_ptr(), (&c_dest).as_ptr(), &(RawCopyDeviceToFileOptArgs::from(&optargs_cexpr)) as *const RawCopyDeviceToFileOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("copy_device_to_file"));
        }
        drop(c_src);
        drop(c_dest);
        drop(optargs_cexpr);
        Ok(())
    }

    /// copy from source file to destination device
    #[allow(non_snake_case)]
    pub fn copy_file_to_device(&self, src: &str, dest: &str, optargs: CopyFileToDeviceOptArgs) -> Result<(), Error> {
        let c_src = ffi::CString::new(src)?;
        let c_dest = ffi::CString::new(dest)?;
        let optargs_cexpr = CExprCopyFileToDeviceOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_copy_file_to_device_argv(self.g, (&c_src).as_ptr(), (&c_dest).as_ptr(), &(RawCopyFileToDeviceOptArgs::from(&optargs_cexpr)) as *const RawCopyFileToDeviceOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("copy_file_to_device"));
        }
        drop(c_src);
        drop(c_dest);
        drop(optargs_cexpr);
        Ok(())
    }

    /// copy from source file to destination file
    #[allow(non_snake_case)]
    pub fn copy_file_to_file(&self, src: &str, dest: &str, optargs: CopyFileToFileOptArgs) -> Result<(), Error> {
        let c_src = ffi::CString::new(src)?;
        let c_dest = ffi::CString::new(dest)?;
        let optargs_cexpr = CExprCopyFileToFileOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_copy_file_to_file_argv(self.g, (&c_src).as_ptr(), (&c_dest).as_ptr(), &(RawCopyFileToFileOptArgs::from(&optargs_cexpr)) as *const RawCopyFileToFileOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("copy_file_to_file"));
        }
        drop(c_src);
        drop(c_dest);
        drop(optargs_cexpr);
        Ok(())
    }

    /// copy local files or directories into an image
    #[allow(non_snake_case)]
    pub fn copy_in(&self, localpath: &str, remotedir: &str) -> Result<(), Error> {
        let c_localpath = ffi::CString::new(localpath)?;
        let c_remotedir = ffi::CString::new(remotedir)?;
        
        let r = unsafe { guestfs_copy_in(self.g, (&c_localpath).as_ptr(), (&c_remotedir).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("copy_in"));
        }
        drop(c_localpath);
        drop(c_remotedir);
        Ok(())
    }

    /// copy remote files or directories out of an image
    #[allow(non_snake_case)]
    pub fn copy_out(&self, remotepath: &str, localdir: &str) -> Result<(), Error> {
        let c_remotepath = ffi::CString::new(remotepath)?;
        let c_localdir = ffi::CString::new(localdir)?;
        
        let r = unsafe { guestfs_copy_out(self.g, (&c_remotepath).as_ptr(), (&c_localdir).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("copy_out"));
        }
        drop(c_remotepath);
        drop(c_localdir);
        Ok(())
    }

    /// copy size bytes from source to destination using dd
    #[allow(non_snake_case)]
    pub fn copy_size(&self, src: &str, dest: &str, size: i64) -> Result<(), Error> {
        let c_src = ffi::CString::new(src)?;
        let c_dest = ffi::CString::new(dest)?;
        
        let r = unsafe { guestfs_copy_size(self.g, (&c_src).as_ptr(), (&c_dest).as_ptr(), size) };
        if r == -1 {
            return Err(self.get_error_from_handle("copy_size"));
        }
        drop(c_src);
        drop(c_dest);
        Ok(())
    }

    /// copy a file
    #[allow(non_snake_case)]
    pub fn cp(&self, src: &str, dest: &str) -> Result<(), Error> {
        let c_src = ffi::CString::new(src)?;
        let c_dest = ffi::CString::new(dest)?;
        
        let r = unsafe { guestfs_cp(self.g, (&c_src).as_ptr(), (&c_dest).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("cp"));
        }
        drop(c_src);
        drop(c_dest);
        Ok(())
    }

    /// copy a file or directory recursively
    #[allow(non_snake_case)]
    pub fn cp_a(&self, src: &str, dest: &str) -> Result<(), Error> {
        let c_src = ffi::CString::new(src)?;
        let c_dest = ffi::CString::new(dest)?;
        
        let r = unsafe { guestfs_cp_a(self.g, (&c_src).as_ptr(), (&c_dest).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("cp_a"));
        }
        drop(c_src);
        drop(c_dest);
        Ok(())
    }

    /// copy a file or directory recursively
    #[allow(non_snake_case)]
    pub fn cp_r(&self, src: &str, dest: &str) -> Result<(), Error> {
        let c_src = ffi::CString::new(src)?;
        let c_dest = ffi::CString::new(dest)?;
        
        let r = unsafe { guestfs_cp_r(self.g, (&c_src).as_ptr(), (&c_dest).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("cp_r"));
        }
        drop(c_src);
        drop(c_dest);
        Ok(())
    }

    /// pack directory into cpio file
    #[allow(non_snake_case)]
    pub fn cpio_out(&self, directory: &str, cpiofile: &str, optargs: CpioOutOptArgs) -> Result<(), Error> {
        let c_directory = ffi::CString::new(directory)?;
        let c_cpiofile = ffi::CString::new(cpiofile)?;
        let optargs_cexpr = CExprCpioOutOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_cpio_out_argv(self.g, (&c_directory).as_ptr(), (&c_cpiofile).as_ptr(), &(RawCpioOutOptArgs::from(&optargs_cexpr)) as *const RawCpioOutOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("cpio_out"));
        }
        drop(c_directory);
        drop(c_cpiofile);
        drop(optargs_cexpr);
        Ok(())
    }

    /// close an encrypted device
    #[allow(non_snake_case)]
    pub fn cryptsetup_close(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_cryptsetup_close(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("cryptsetup_close"));
        }
        drop(c_device);
        Ok(())
    }

    /// open an encrypted block device
    #[allow(non_snake_case)]
    pub fn cryptsetup_open(&self, device: &str, key: &str, mapname: &str, optargs: CryptsetupOpenOptArgs) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_key = ffi::CString::new(key)?;
        let c_mapname = ffi::CString::new(mapname)?;
        let optargs_cexpr = CExprCryptsetupOpenOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_cryptsetup_open_argv(self.g, (&c_device).as_ptr(), (&c_key).as_ptr(), (&c_mapname).as_ptr(), &(RawCryptsetupOpenOptArgs::from(&optargs_cexpr)) as *const RawCryptsetupOpenOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("cryptsetup_open"));
        }
        drop(c_device);
        drop(c_key);
        drop(c_mapname);
        drop(optargs_cexpr);
        Ok(())
    }

    /// copy from source to destination using dd
    #[allow(non_snake_case)]
    pub fn dd(&self, src: &str, dest: &str) -> Result<(), Error> {
        let c_src = ffi::CString::new(src)?;
        let c_dest = ffi::CString::new(dest)?;
        
        let r = unsafe { guestfs_dd(self.g, (&c_src).as_ptr(), (&c_dest).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("dd"));
        }
        drop(c_src);
        drop(c_dest);
        Ok(())
    }

    /// debugging and internals
    #[allow(non_snake_case)]
    pub fn debug(&self, subcmd: &str, extraargs: &[&str]) -> Result<String, Error> {
        let c_subcmd = ffi::CString::new(subcmd)?;
        let c_extraargs_v = arg_string_list(extraargs)?;
        let mut c_extraargs = (&c_extraargs_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_extraargs.push(ptr::null());
        
        let r = unsafe { guestfs_debug(self.g, (&c_subcmd).as_ptr(), (&c_extraargs).as_ptr() as *const *const c_char) };
        if r.is_null() {
            return Err(self.get_error_from_handle("debug"));
        }
        drop(c_subcmd);
        drop(c_extraargs);
        drop(c_extraargs_v);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// debug the drives (internal use only)
    #[allow(non_snake_case)]
    pub fn debug_drives(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_debug_drives(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("debug_drives"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// upload a file to the appliance (internal use only)
    #[allow(non_snake_case)]
    pub fn debug_upload(&self, filename: &str, tmpname: &str, mode: i32) -> Result<(), Error> {
        let c_filename = ffi::CString::new(filename)?;
        let c_tmpname = ffi::CString::new(tmpname)?;
        
        let r = unsafe { guestfs_debug_upload(self.g, (&c_filename).as_ptr(), (&c_tmpname).as_ptr(), mode) };
        if r == -1 {
            return Err(self.get_error_from_handle("debug_upload"));
        }
        drop(c_filename);
        drop(c_tmpname);
        Ok(())
    }

    /// convert device to index
    #[allow(non_snake_case)]
    pub fn device_index(&self, device: &str) -> Result<i32, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_device_index(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("device_index"));
        }
        drop(c_device);
        Ok(r)
    }

    /// convert device index to name
    #[allow(non_snake_case)]
    pub fn device_name(&self, index: i32) -> Result<String, Error> {
        
        let r = unsafe { guestfs_device_name(self.g, index) };
        if r.is_null() {
            return Err(self.get_error_from_handle("device_name"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// report file system disk space usage
    #[allow(non_snake_case)]
    pub fn df(&self, ) -> Result<String, Error> {
        
        let r = unsafe { guestfs_df(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("df"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// report file system disk space usage (human readable)
    #[allow(non_snake_case)]
    pub fn df_h(&self, ) -> Result<String, Error> {
        
        let r = unsafe { guestfs_df_h(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("df_h"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// create a blank disk image
    #[allow(non_snake_case)]
    pub fn disk_create(&self, filename: &str, format: &str, size: i64, optargs: DiskCreateOptArgs) -> Result<(), Error> {
        let c_filename = ffi::CString::new(filename)?;
        let c_format = ffi::CString::new(format)?;
        let optargs_cexpr = CExprDiskCreateOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_disk_create_argv(self.g, (&c_filename).as_ptr(), (&c_format).as_ptr(), size, &(RawDiskCreateOptArgs::from(&optargs_cexpr)) as *const RawDiskCreateOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("disk_create"));
        }
        drop(c_filename);
        drop(c_format);
        drop(optargs_cexpr);
        Ok(())
    }

    /// detect the disk format of a disk image
    #[allow(non_snake_case)]
    pub fn disk_format(&self, filename: &str) -> Result<String, Error> {
        let c_filename = ffi::CString::new(filename)?;
        
        let r = unsafe { guestfs_disk_format(self.g, (&c_filename).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("disk_format"));
        }
        drop(c_filename);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// return whether disk has a backing file
    #[allow(non_snake_case)]
    pub fn disk_has_backing_file(&self, filename: &str) -> Result<bool, Error> {
        let c_filename = ffi::CString::new(filename)?;
        
        let r = unsafe { guestfs_disk_has_backing_file(self.g, (&c_filename).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("disk_has_backing_file"));
        }
        drop(c_filename);
        Ok(r != 0)
    }

    /// return virtual size of a disk
    #[allow(non_snake_case)]
    pub fn disk_virtual_size(&self, filename: &str) -> Result<i64, Error> {
        let c_filename = ffi::CString::new(filename)?;
        
        let r = unsafe { guestfs_disk_virtual_size(self.g, (&c_filename).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("disk_virtual_size"));
        }
        drop(c_filename);
        Ok(r)
    }

    /// return kernel messages
    #[allow(non_snake_case)]
    pub fn dmesg(&self, ) -> Result<String, Error> {
        
        let r = unsafe { guestfs_dmesg(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("dmesg"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// download a file to the local machine
    #[allow(non_snake_case)]
    pub fn download(&self, remotefilename: &str, filename: &str) -> Result<(), Error> {
        let c_remotefilename = ffi::CString::new(remotefilename)?;
        let c_filename = ffi::CString::new(filename)?;
        
        let r = unsafe { guestfs_download(self.g, (&c_remotefilename).as_ptr(), (&c_filename).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("download"));
        }
        drop(c_remotefilename);
        drop(c_filename);
        Ok(())
    }

    /// download the given data units from the disk
    #[allow(non_snake_case)]
    pub fn download_blocks(&self, device: &str, start: i64, stop: i64, filename: &str, optargs: DownloadBlocksOptArgs) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_filename = ffi::CString::new(filename)?;
        let optargs_cexpr = CExprDownloadBlocksOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_download_blocks_argv(self.g, (&c_device).as_ptr(), start, stop, (&c_filename).as_ptr(), &(RawDownloadBlocksOptArgs::from(&optargs_cexpr)) as *const RawDownloadBlocksOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("download_blocks"));
        }
        drop(c_device);
        drop(c_filename);
        drop(optargs_cexpr);
        Ok(())
    }

    /// download a file to the local machine given its inode
    #[allow(non_snake_case)]
    pub fn download_inode(&self, device: &str, inode: i64, filename: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_filename = ffi::CString::new(filename)?;
        
        let r = unsafe { guestfs_download_inode(self.g, (&c_device).as_ptr(), inode, (&c_filename).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("download_inode"));
        }
        drop(c_device);
        drop(c_filename);
        Ok(())
    }

    /// download a file to the local machine with offset and size
    #[allow(non_snake_case)]
    pub fn download_offset(&self, remotefilename: &str, filename: &str, offset: i64, size: i64) -> Result<(), Error> {
        let c_remotefilename = ffi::CString::new(remotefilename)?;
        let c_filename = ffi::CString::new(filename)?;
        
        let r = unsafe { guestfs_download_offset(self.g, (&c_remotefilename).as_ptr(), (&c_filename).as_ptr(), offset, size) };
        if r == -1 {
            return Err(self.get_error_from_handle("download_offset"));
        }
        drop(c_remotefilename);
        drop(c_filename);
        Ok(())
    }

    /// drop kernel page cache, dentries and inodes
    #[allow(non_snake_case)]
    pub fn drop_caches(&self, whattodrop: i32) -> Result<(), Error> {
        
        let r = unsafe { guestfs_drop_caches(self.g, whattodrop) };
        if r == -1 {
            return Err(self.get_error_from_handle("drop_caches"));
        }
        Ok(())
    }

    /// estimate file space usage
    #[allow(non_snake_case)]
    pub fn du(&self, path: &str) -> Result<i64, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_du(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("du"));
        }
        drop(c_path);
        Ok(r)
    }

    /// check an ext2/ext3 filesystem
    #[allow(non_snake_case)]
    pub fn e2fsck(&self, device: &str, optargs: E2fsckOptArgs) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let optargs_cexpr = CExprE2fsckOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_e2fsck_argv(self.g, (&c_device).as_ptr(), &(RawE2fsckOptArgs::from(&optargs_cexpr)) as *const RawE2fsckOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("e2fsck"));
        }
        drop(c_device);
        drop(optargs_cexpr);
        Ok(())
    }

    /// check an ext2/ext3 filesystem
    #[allow(non_snake_case)]
    pub fn e2fsck_f(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_e2fsck_f(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("e2fsck_f"));
        }
        drop(c_device);
        Ok(())
    }

    /// echo arguments back to the client
    #[allow(non_snake_case)]
    pub fn echo_daemon(&self, words: &[&str]) -> Result<String, Error> {
        let c_words_v = arg_string_list(words)?;
        let mut c_words = (&c_words_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_words.push(ptr::null());
        
        let r = unsafe { guestfs_echo_daemon(self.g, (&c_words).as_ptr() as *const *const c_char) };
        if r.is_null() {
            return Err(self.get_error_from_handle("echo_daemon"));
        }
        drop(c_words);
        drop(c_words_v);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// return lines matching a pattern
    #[allow(non_snake_case)]
    pub fn egrep(&self, regex: &str, path: &str) -> Result<Vec<String>, Error> {
        let c_regex = ffi::CString::new(regex)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_egrep(self.g, (&c_regex).as_ptr(), (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("egrep"));
        }
        drop(c_regex);
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// return lines matching a pattern
    #[allow(non_snake_case)]
    pub fn egrepi(&self, regex: &str, path: &str) -> Result<Vec<String>, Error> {
        let c_regex = ffi::CString::new(regex)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_egrepi(self.g, (&c_regex).as_ptr(), (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("egrepi"));
        }
        drop(c_regex);
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// test if two files have equal contents
    #[allow(non_snake_case)]
    pub fn equal(&self, file1: &str, file2: &str) -> Result<bool, Error> {
        let c_file1 = ffi::CString::new(file1)?;
        let c_file2 = ffi::CString::new(file2)?;
        
        let r = unsafe { guestfs_equal(self.g, (&c_file1).as_ptr(), (&c_file2).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("equal"));
        }
        drop(c_file1);
        drop(c_file2);
        Ok(r != 0)
    }

    /// test if file or directory exists
    #[allow(non_snake_case)]
    pub fn exists(&self, path: &str) -> Result<bool, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_exists(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("exists"));
        }
        drop(c_path);
        Ok(r != 0)
    }

    /// install the SYSLINUX bootloader on an ext2/3/4 or btrfs filesystem
    #[allow(non_snake_case)]
    pub fn extlinux(&self, directory: &str) -> Result<(), Error> {
        let c_directory = ffi::CString::new(directory)?;
        
        let r = unsafe { guestfs_extlinux(self.g, (&c_directory).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("extlinux"));
        }
        drop(c_directory);
        Ok(())
    }

    /// expand a f2fs filesystem
    #[allow(non_snake_case)]
    pub fn f2fs_expand(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_f2fs_expand(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("f2fs_expand"));
        }
        drop(c_device);
        Ok(())
    }

    /// preallocate a file in the guest filesystem
    #[allow(non_snake_case)]
    pub fn fallocate(&self, path: &str, len: i32) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_fallocate(self.g, (&c_path).as_ptr(), len) };
        if r == -1 {
            return Err(self.get_error_from_handle("fallocate"));
        }
        drop(c_path);
        Ok(())
    }

    /// preallocate a file in the guest filesystem
    #[allow(non_snake_case)]
    pub fn fallocate64(&self, path: &str, len: i64) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_fallocate64(self.g, (&c_path).as_ptr(), len) };
        if r == -1 {
            return Err(self.get_error_from_handle("fallocate64"));
        }
        drop(c_path);
        Ok(())
    }

    /// test availability of some parts of the API
    #[allow(non_snake_case)]
    pub fn feature_available(&self, groups: &[&str]) -> Result<bool, Error> {
        let c_groups_v = arg_string_list(groups)?;
        let mut c_groups = (&c_groups_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_groups.push(ptr::null());
        
        let r = unsafe { guestfs_feature_available(self.g, (&c_groups).as_ptr() as *const *const c_char) };
        if r == -1 {
            return Err(self.get_error_from_handle("feature_available"));
        }
        drop(c_groups);
        drop(c_groups_v);
        Ok(r != 0)
    }

    /// return lines matching a pattern
    #[allow(non_snake_case)]
    pub fn fgrep(&self, pattern: &str, path: &str) -> Result<Vec<String>, Error> {
        let c_pattern = ffi::CString::new(pattern)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_fgrep(self.g, (&c_pattern).as_ptr(), (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("fgrep"));
        }
        drop(c_pattern);
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// return lines matching a pattern
    #[allow(non_snake_case)]
    pub fn fgrepi(&self, pattern: &str, path: &str) -> Result<Vec<String>, Error> {
        let c_pattern = ffi::CString::new(pattern)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_fgrepi(self.g, (&c_pattern).as_ptr(), (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("fgrepi"));
        }
        drop(c_pattern);
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// determine file type
    #[allow(non_snake_case)]
    pub fn file(&self, path: &str) -> Result<String, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_file(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("file"));
        }
        drop(c_path);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// detect the architecture of a binary file
    #[allow(non_snake_case)]
    pub fn file_architecture(&self, filename: &str) -> Result<String, Error> {
        let c_filename = ffi::CString::new(filename)?;
        
        let r = unsafe { guestfs_file_architecture(self.g, (&c_filename).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("file_architecture"));
        }
        drop(c_filename);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// return the size of the file in bytes
    #[allow(non_snake_case)]
    pub fn filesize(&self, file: &str) -> Result<i64, Error> {
        let c_file = ffi::CString::new(file)?;
        
        let r = unsafe { guestfs_filesize(self.g, (&c_file).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("filesize"));
        }
        drop(c_file);
        Ok(r)
    }

    /// check if filesystem is available
    #[allow(non_snake_case)]
    pub fn filesystem_available(&self, filesystem: &str) -> Result<bool, Error> {
        let c_filesystem = ffi::CString::new(filesystem)?;
        
        let r = unsafe { guestfs_filesystem_available(self.g, (&c_filesystem).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("filesystem_available"));
        }
        drop(c_filesystem);
        Ok(r != 0)
    }

    /// walk through the filesystem content
    #[allow(non_snake_case)]
    pub fn filesystem_walk(&self, device: &str) -> Result<Vec<TSKDirent>, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_filesystem_walk(self.g, (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("filesystem_walk"));
        }
        drop(c_device);
        Ok({
            let l = struct_list::<RawTSKDirent, TSKDirent>(r);
            unsafe { guestfs_free_tsk_dirent_list(r) };
            l?
        })
    }

    /// fill a file with octets
    #[allow(non_snake_case)]
    pub fn fill(&self, c: i32, len: i32, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_fill(self.g, c, len, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("fill"));
        }
        drop(c_path);
        Ok(())
    }

    /// fill a directory with empty files
    #[allow(non_snake_case)]
    pub fn fill_dir(&self, dir: &str, nr: i32) -> Result<(), Error> {
        let c_dir = ffi::CString::new(dir)?;
        
        let r = unsafe { guestfs_fill_dir(self.g, (&c_dir).as_ptr(), nr) };
        if r == -1 {
            return Err(self.get_error_from_handle("fill_dir"));
        }
        drop(c_dir);
        Ok(())
    }

    /// fill a file with a repeating pattern of bytes
    #[allow(non_snake_case)]
    pub fn fill_pattern(&self, pattern: &str, len: i32, path: &str) -> Result<(), Error> {
        let c_pattern = ffi::CString::new(pattern)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_fill_pattern(self.g, (&c_pattern).as_ptr(), len, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("fill_pattern"));
        }
        drop(c_pattern);
        drop(c_path);
        Ok(())
    }

    /// find all files and directories
    #[allow(non_snake_case)]
    pub fn find(&self, directory: &str) -> Result<Vec<String>, Error> {
        let c_directory = ffi::CString::new(directory)?;
        
        let r = unsafe { guestfs_find(self.g, (&c_directory).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("find"));
        }
        drop(c_directory);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// find all files and directories, returning NUL-separated list
    #[allow(non_snake_case)]
    pub fn find0(&self, directory: &str, files: &str) -> Result<(), Error> {
        let c_directory = ffi::CString::new(directory)?;
        let c_files = ffi::CString::new(files)?;
        
        let r = unsafe { guestfs_find0(self.g, (&c_directory).as_ptr(), (&c_files).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("find0"));
        }
        drop(c_directory);
        drop(c_files);
        Ok(())
    }

    /// search the entries associated to the given inode
    #[allow(non_snake_case)]
    pub fn find_inode(&self, device: &str, inode: i64) -> Result<Vec<TSKDirent>, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_find_inode(self.g, (&c_device).as_ptr(), inode) };
        if r.is_null() {
            return Err(self.get_error_from_handle("find_inode"));
        }
        drop(c_device);
        Ok({
            let l = struct_list::<RawTSKDirent, TSKDirent>(r);
            unsafe { guestfs_free_tsk_dirent_list(r) };
            l?
        })
    }

    /// find a filesystem by label
    #[allow(non_snake_case)]
    pub fn findfs_label(&self, label: &str) -> Result<String, Error> {
        let c_label = ffi::CString::new(label)?;
        
        let r = unsafe { guestfs_findfs_label(self.g, (&c_label).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("findfs_label"));
        }
        drop(c_label);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// find a filesystem by UUID
    #[allow(non_snake_case)]
    pub fn findfs_uuid(&self, uuid: &str) -> Result<String, Error> {
        let c_uuid = ffi::CString::new(uuid)?;
        
        let r = unsafe { guestfs_findfs_uuid(self.g, (&c_uuid).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("findfs_uuid"));
        }
        drop(c_uuid);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// run the filesystem checker
    #[allow(non_snake_case)]
    pub fn fsck(&self, fstype: &str, device: &str) -> Result<i32, Error> {
        let c_fstype = ffi::CString::new(fstype)?;
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_fsck(self.g, (&c_fstype).as_ptr(), (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("fsck"));
        }
        drop(c_fstype);
        drop(c_device);
        Ok(r)
    }

    /// trim free space in a filesystem
    #[allow(non_snake_case)]
    pub fn fstrim(&self, mountpoint: &str, optargs: FstrimOptArgs) -> Result<(), Error> {
        let c_mountpoint = ffi::CString::new(mountpoint)?;
        let optargs_cexpr = CExprFstrimOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_fstrim_argv(self.g, (&c_mountpoint).as_ptr(), &(RawFstrimOptArgs::from(&optargs_cexpr)) as *const RawFstrimOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("fstrim"));
        }
        drop(c_mountpoint);
        drop(optargs_cexpr);
        Ok(())
    }

    /// get the additional kernel options
    #[allow(non_snake_case)]
    pub fn get_append(&self, ) -> Result<Option<&'static str>, Error> {
        
        let r = unsafe { guestfs_get_append(self.g) };
        Ok(if r.is_null() {
            None
        } else {
            Some(unsafe { ffi::CStr::from_ptr(r) }.to_str()?)
        })
    }

    /// get the backend
    #[allow(non_snake_case)]
    pub fn get_attach_method(&self, ) -> Result<String, Error> {
        
        let r = unsafe { guestfs_get_attach_method(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_attach_method"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get autosync mode
    #[allow(non_snake_case)]
    pub fn get_autosync(&self, ) -> Result<bool, Error> {
        
        let r = unsafe { guestfs_get_autosync(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("get_autosync"));
        }
        Ok(r != 0)
    }

    /// get the backend
    #[allow(non_snake_case)]
    pub fn get_backend(&self, ) -> Result<String, Error> {
        
        let r = unsafe { guestfs_get_backend(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_backend"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get a single per-backend settings string
    #[allow(non_snake_case)]
    pub fn get_backend_setting(&self, name: &str) -> Result<String, Error> {
        let c_name = ffi::CString::new(name)?;
        
        let r = unsafe { guestfs_get_backend_setting(self.g, (&c_name).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_backend_setting"));
        }
        drop(c_name);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get per-backend settings
    #[allow(non_snake_case)]
    pub fn get_backend_settings(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_get_backend_settings(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_backend_settings"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// get the appliance cache directory
    #[allow(non_snake_case)]
    pub fn get_cachedir(&self, ) -> Result<String, Error> {
        
        let r = unsafe { guestfs_get_cachedir(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_cachedir"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get direct appliance mode flag
    #[allow(non_snake_case)]
    pub fn get_direct(&self, ) -> Result<bool, Error> {
        
        let r = unsafe { guestfs_get_direct(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("get_direct"));
        }
        Ok(r != 0)
    }

    /// get ext2 file attributes of a file
    #[allow(non_snake_case)]
    pub fn get_e2attrs(&self, file: &str) -> Result<String, Error> {
        let c_file = ffi::CString::new(file)?;
        
        let r = unsafe { guestfs_get_e2attrs(self.g, (&c_file).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_e2attrs"));
        }
        drop(c_file);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get ext2 file generation of a file
    #[allow(non_snake_case)]
    pub fn get_e2generation(&self, file: &str) -> Result<i64, Error> {
        let c_file = ffi::CString::new(file)?;
        
        let r = unsafe { guestfs_get_e2generation(self.g, (&c_file).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("get_e2generation"));
        }
        drop(c_file);
        Ok(r)
    }

    /// get the ext2/3/4 filesystem label
    #[allow(non_snake_case)]
    pub fn get_e2label(&self, device: &str) -> Result<String, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_get_e2label(self.g, (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_e2label"));
        }
        drop(c_device);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get the ext2/3/4 filesystem UUID
    #[allow(non_snake_case)]
    pub fn get_e2uuid(&self, device: &str) -> Result<String, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_get_e2uuid(self.g, (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_e2uuid"));
        }
        drop(c_device);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get the hypervisor binary
    #[allow(non_snake_case)]
    pub fn get_hv(&self, ) -> Result<String, Error> {
        
        let r = unsafe { guestfs_get_hv(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_hv"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get the handle identifier
    #[allow(non_snake_case)]
    pub fn get_identifier(&self, ) -> Result<&'static str, Error> {
        
        let r = unsafe { guestfs_get_identifier(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_identifier"));
        }
        Ok(unsafe{ ffi::CStr::from_ptr(r) }.to_str()?)
    }

    /// challenge of i'th requested credential
    #[allow(non_snake_case)]
    pub fn get_libvirt_requested_credential_challenge(&self, index: i32) -> Result<String, Error> {
        
        let r = unsafe { guestfs_get_libvirt_requested_credential_challenge(self.g, index) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_libvirt_requested_credential_challenge"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// default result of i'th requested credential
    #[allow(non_snake_case)]
    pub fn get_libvirt_requested_credential_defresult(&self, index: i32) -> Result<String, Error> {
        
        let r = unsafe { guestfs_get_libvirt_requested_credential_defresult(self.g, index) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_libvirt_requested_credential_defresult"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// prompt of i'th requested credential
    #[allow(non_snake_case)]
    pub fn get_libvirt_requested_credential_prompt(&self, index: i32) -> Result<String, Error> {
        
        let r = unsafe { guestfs_get_libvirt_requested_credential_prompt(self.g, index) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_libvirt_requested_credential_prompt"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get list of credentials requested by libvirt
    #[allow(non_snake_case)]
    pub fn get_libvirt_requested_credentials(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_get_libvirt_requested_credentials(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_libvirt_requested_credentials"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// get memory allocated to the hypervisor
    #[allow(non_snake_case)]
    pub fn get_memsize(&self, ) -> Result<i32, Error> {
        
        let r = unsafe { guestfs_get_memsize(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("get_memsize"));
        }
        Ok(r)
    }

    /// get enable network flag
    #[allow(non_snake_case)]
    pub fn get_network(&self, ) -> Result<bool, Error> {
        
        let r = unsafe { guestfs_get_network(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("get_network"));
        }
        Ok(r != 0)
    }

    /// get the search path
    #[allow(non_snake_case)]
    pub fn get_path(&self, ) -> Result<&'static str, Error> {
        
        let r = unsafe { guestfs_get_path(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_path"));
        }
        Ok(unsafe{ ffi::CStr::from_ptr(r) }.to_str()?)
    }

    /// get process group flag
    #[allow(non_snake_case)]
    pub fn get_pgroup(&self, ) -> Result<bool, Error> {
        
        let r = unsafe { guestfs_get_pgroup(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("get_pgroup"));
        }
        Ok(r != 0)
    }

    /// get PID of hypervisor
    #[allow(non_snake_case)]
    pub fn get_pid(&self, ) -> Result<i32, Error> {
        
        let r = unsafe { guestfs_get_pid(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("get_pid"));
        }
        Ok(r)
    }

    /// get the program name
    #[allow(non_snake_case)]
    pub fn get_program(&self, ) -> Result<&'static str, Error> {
        
        let r = unsafe { guestfs_get_program(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_program"));
        }
        Ok(unsafe{ ffi::CStr::from_ptr(r) }.to_str()?)
    }

    /// get the hypervisor binary (usually qemu)
    #[allow(non_snake_case)]
    pub fn get_qemu(&self, ) -> Result<&'static str, Error> {
        
        let r = unsafe { guestfs_get_qemu(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_qemu"));
        }
        Ok(unsafe{ ffi::CStr::from_ptr(r) }.to_str()?)
    }

    /// get recovery process enabled flag
    #[allow(non_snake_case)]
    pub fn get_recovery_proc(&self, ) -> Result<bool, Error> {
        
        let r = unsafe { guestfs_get_recovery_proc(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("get_recovery_proc"));
        }
        Ok(r != 0)
    }

    /// get SELinux enabled flag
    #[allow(non_snake_case)]
    pub fn get_selinux(&self, ) -> Result<bool, Error> {
        
        let r = unsafe { guestfs_get_selinux(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("get_selinux"));
        }
        Ok(r != 0)
    }

    /// get number of virtual CPUs in appliance
    #[allow(non_snake_case)]
    pub fn get_smp(&self, ) -> Result<i32, Error> {
        
        let r = unsafe { guestfs_get_smp(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("get_smp"));
        }
        Ok(r)
    }

    /// get the temporary directory for sockets
    #[allow(non_snake_case)]
    pub fn get_sockdir(&self, ) -> Result<String, Error> {
        
        let r = unsafe { guestfs_get_sockdir(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_sockdir"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get the current state
    #[allow(non_snake_case)]
    pub fn get_state(&self, ) -> Result<i32, Error> {
        
        let r = unsafe { guestfs_get_state(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("get_state"));
        }
        Ok(r)
    }

    /// get the temporary directory
    #[allow(non_snake_case)]
    pub fn get_tmpdir(&self, ) -> Result<String, Error> {
        
        let r = unsafe { guestfs_get_tmpdir(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("get_tmpdir"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get command trace enabled flag
    #[allow(non_snake_case)]
    pub fn get_trace(&self, ) -> Result<bool, Error> {
        
        let r = unsafe { guestfs_get_trace(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("get_trace"));
        }
        Ok(r != 0)
    }

    /// get the current umask
    #[allow(non_snake_case)]
    pub fn get_umask(&self, ) -> Result<i32, Error> {
        
        let r = unsafe { guestfs_get_umask(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("get_umask"));
        }
        Ok(r)
    }

    /// get verbose mode
    #[allow(non_snake_case)]
    pub fn get_verbose(&self, ) -> Result<bool, Error> {
        
        let r = unsafe { guestfs_get_verbose(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("get_verbose"));
        }
        Ok(r != 0)
    }

    /// get SELinux security context
    #[allow(non_snake_case)]
    pub fn getcon(&self, ) -> Result<String, Error> {
        
        let r = unsafe { guestfs_getcon(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("getcon"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get a single extended attribute
    #[allow(non_snake_case)]
    pub fn getxattr(&self, path: &str, name: &str) -> Result<Vec<u8>, Error> {
        let c_path = ffi::CString::new(path)?;
        let c_name = ffi::CString::new(name)?;
        let mut size = 0usize;
        
        let r = unsafe { guestfs_getxattr(self.g, (&c_path).as_ptr(), (&c_name).as_ptr(), &mut size as *mut usize) };
        if r.is_null() {
            return Err(self.get_error_from_handle("getxattr"));
        }
        drop(c_path);
        drop(c_name);
        Ok({
            let s = unsafe { slice::from_raw_parts(r, size) }.to_vec();
            unsafe { free(r as *const c_void) } ;
            s
        })
    }

    /// list extended attributes of a file or directory
    #[allow(non_snake_case)]
    pub fn getxattrs(&self, path: &str) -> Result<Vec<XAttr>, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_getxattrs(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("getxattrs"));
        }
        drop(c_path);
        Ok({
            let l = struct_list::<RawXAttr, XAttr>(r);
            unsafe { guestfs_free_xattr_list(r) };
            l?
        })
    }

    /// expand a wildcard path
    #[allow(non_snake_case)]
    pub fn glob_expand(&self, pattern: &str, optargs: GlobExpandOptArgs) -> Result<Vec<String>, Error> {
        let c_pattern = ffi::CString::new(pattern)?;
        let optargs_cexpr = CExprGlobExpandOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_glob_expand_opts_argv(self.g, (&c_pattern).as_ptr(), &(RawGlobExpandOptArgs::from(&optargs_cexpr)) as *const RawGlobExpandOptArgs) };
        if r.is_null() {
            return Err(self.get_error_from_handle("glob_expand"));
        }
        drop(c_pattern);
        drop(optargs_cexpr);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// return lines matching a pattern
    #[allow(non_snake_case)]
    pub fn grep(&self, regex: &str, path: &str, optargs: GrepOptArgs) -> Result<Vec<String>, Error> {
        let c_regex = ffi::CString::new(regex)?;
        let c_path = ffi::CString::new(path)?;
        let optargs_cexpr = CExprGrepOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_grep_opts_argv(self.g, (&c_regex).as_ptr(), (&c_path).as_ptr(), &(RawGrepOptArgs::from(&optargs_cexpr)) as *const RawGrepOptArgs) };
        if r.is_null() {
            return Err(self.get_error_from_handle("grep"));
        }
        drop(c_regex);
        drop(c_path);
        drop(optargs_cexpr);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// return lines matching a pattern
    #[allow(non_snake_case)]
    pub fn grepi(&self, regex: &str, path: &str) -> Result<Vec<String>, Error> {
        let c_regex = ffi::CString::new(regex)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_grepi(self.g, (&c_regex).as_ptr(), (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("grepi"));
        }
        drop(c_regex);
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// install GRUB 1
    #[allow(non_snake_case)]
    pub fn grub_install(&self, root: &str, device: &str) -> Result<(), Error> {
        let c_root = ffi::CString::new(root)?;
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_grub_install(self.g, (&c_root).as_ptr(), (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("grub_install"));
        }
        drop(c_root);
        drop(c_device);
        Ok(())
    }

    /// return first 10 lines of a file
    #[allow(non_snake_case)]
    pub fn head(&self, path: &str) -> Result<Vec<String>, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_head(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("head"));
        }
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// return first N lines of a file
    #[allow(non_snake_case)]
    pub fn head_n(&self, nrlines: i32, path: &str) -> Result<Vec<String>, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_head_n(self.g, nrlines, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("head_n"));
        }
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// dump a file in hexadecimal
    #[allow(non_snake_case)]
    pub fn hexdump(&self, path: &str) -> Result<String, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_hexdump(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("hexdump"));
        }
        drop(c_path);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// close the current hivex handle
    #[allow(non_snake_case)]
    pub fn hivex_close(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_hivex_close(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("hivex_close"));
        }
        Ok(())
    }

    /// commit (write) changes back to the hive
    #[allow(non_snake_case)]
    pub fn hivex_commit(&self, filename: Option<&str>) -> Result<(), Error> {
        let c_filename = filename.map(|s| ffi::CString::new(s)).transpose()?;
        
        let r = unsafe { guestfs_hivex_commit(self.g, match &c_filename { Some(ref s) => s.as_ptr(), None => ptr::null() }
) };
        if r == -1 {
            return Err(self.get_error_from_handle("hivex_commit"));
        }
        drop(c_filename);
        Ok(())
    }

    /// add a child node
    #[allow(non_snake_case)]
    pub fn hivex_node_add_child(&self, parent: i64, name: &str) -> Result<i64, Error> {
        let c_name = ffi::CString::new(name)?;
        
        let r = unsafe { guestfs_hivex_node_add_child(self.g, parent, (&c_name).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("hivex_node_add_child"));
        }
        drop(c_name);
        Ok(r)
    }

    /// return list of nodes which are subkeys of node
    #[allow(non_snake_case)]
    pub fn hivex_node_children(&self, nodeh: i64) -> Result<Vec<HivexNode>, Error> {
        
        let r = unsafe { guestfs_hivex_node_children(self.g, nodeh) };
        if r.is_null() {
            return Err(self.get_error_from_handle("hivex_node_children"));
        }
        Ok({
            let l = struct_list::<RawHivexNode, HivexNode>(r);
            unsafe { guestfs_free_hivex_node_list(r) };
            l?
        })
    }

    /// delete a node (recursively)
    #[allow(non_snake_case)]
    pub fn hivex_node_delete_child(&self, nodeh: i64) -> Result<(), Error> {
        
        let r = unsafe { guestfs_hivex_node_delete_child(self.g, nodeh) };
        if r == -1 {
            return Err(self.get_error_from_handle("hivex_node_delete_child"));
        }
        Ok(())
    }

    /// return the named child of node
    #[allow(non_snake_case)]
    pub fn hivex_node_get_child(&self, nodeh: i64, name: &str) -> Result<i64, Error> {
        let c_name = ffi::CString::new(name)?;
        
        let r = unsafe { guestfs_hivex_node_get_child(self.g, nodeh, (&c_name).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("hivex_node_get_child"));
        }
        drop(c_name);
        Ok(r)
    }

    /// return the named value
    #[allow(non_snake_case)]
    pub fn hivex_node_get_value(&self, nodeh: i64, key: &str) -> Result<i64, Error> {
        let c_key = ffi::CString::new(key)?;
        
        let r = unsafe { guestfs_hivex_node_get_value(self.g, nodeh, (&c_key).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("hivex_node_get_value"));
        }
        drop(c_key);
        Ok(r)
    }

    /// return the name of the node
    #[allow(non_snake_case)]
    pub fn hivex_node_name(&self, nodeh: i64) -> Result<String, Error> {
        
        let r = unsafe { guestfs_hivex_node_name(self.g, nodeh) };
        if r.is_null() {
            return Err(self.get_error_from_handle("hivex_node_name"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// return the parent of node
    #[allow(non_snake_case)]
    pub fn hivex_node_parent(&self, nodeh: i64) -> Result<i64, Error> {
        
        let r = unsafe { guestfs_hivex_node_parent(self.g, nodeh) };
        if r == -1 {
            return Err(self.get_error_from_handle("hivex_node_parent"));
        }
        Ok(r)
    }

    /// set or replace a single value in a node
    #[allow(non_snake_case)]
    pub fn hivex_node_set_value(&self, nodeh: i64, key: &str, t: i64, val: &[u8]) -> Result<(), Error> {
        let c_key = ffi::CString::new(key)?;
        let c_val_len = val.len();
        let c_val = unsafe { ffi::CString::from_vec_unchecked(val.to_vec())};
        
        let r = unsafe { guestfs_hivex_node_set_value(self.g, nodeh, (&c_key).as_ptr(), t, (&c_val).as_ptr(), c_val_len) };
        if r == -1 {
            return Err(self.get_error_from_handle("hivex_node_set_value"));
        }
        drop(c_key);
        drop(c_val);
        Ok(())
    }

    /// return list of values attached to node
    #[allow(non_snake_case)]
    pub fn hivex_node_values(&self, nodeh: i64) -> Result<Vec<HivexValue>, Error> {
        
        let r = unsafe { guestfs_hivex_node_values(self.g, nodeh) };
        if r.is_null() {
            return Err(self.get_error_from_handle("hivex_node_values"));
        }
        Ok({
            let l = struct_list::<RawHivexValue, HivexValue>(r);
            unsafe { guestfs_free_hivex_value_list(r) };
            l?
        })
    }

    /// open a Windows Registry hive file
    #[allow(non_snake_case)]
    pub fn hivex_open(&self, filename: &str, optargs: HivexOpenOptArgs) -> Result<(), Error> {
        let c_filename = ffi::CString::new(filename)?;
        let optargs_cexpr = CExprHivexOpenOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_hivex_open_argv(self.g, (&c_filename).as_ptr(), &(RawHivexOpenOptArgs::from(&optargs_cexpr)) as *const RawHivexOpenOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("hivex_open"));
        }
        drop(c_filename);
        drop(optargs_cexpr);
        Ok(())
    }

    /// return the root node of the hive
    #[allow(non_snake_case)]
    pub fn hivex_root(&self, ) -> Result<i64, Error> {
        
        let r = unsafe { guestfs_hivex_root(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("hivex_root"));
        }
        Ok(r)
    }

    /// return the key field from the (key, datatype, data) tuple
    #[allow(non_snake_case)]
    pub fn hivex_value_key(&self, valueh: i64) -> Result<String, Error> {
        
        let r = unsafe { guestfs_hivex_value_key(self.g, valueh) };
        if r.is_null() {
            return Err(self.get_error_from_handle("hivex_value_key"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// return the data field as a UTF-8 string
    #[allow(non_snake_case)]
    pub fn hivex_value_string(&self, valueh: i64) -> Result<String, Error> {
        
        let r = unsafe { guestfs_hivex_value_string(self.g, valueh) };
        if r.is_null() {
            return Err(self.get_error_from_handle("hivex_value_string"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// return the data type from the (key, datatype, data) tuple
    #[allow(non_snake_case)]
    pub fn hivex_value_type(&self, valueh: i64) -> Result<i64, Error> {
        
        let r = unsafe { guestfs_hivex_value_type(self.g, valueh) };
        if r == -1 {
            return Err(self.get_error_from_handle("hivex_value_type"));
        }
        Ok(r)
    }

    /// return the data field as a UTF-8 string
    #[allow(non_snake_case)]
    pub fn hivex_value_utf8(&self, valueh: i64) -> Result<String, Error> {
        
        let r = unsafe { guestfs_hivex_value_utf8(self.g, valueh) };
        if r.is_null() {
            return Err(self.get_error_from_handle("hivex_value_utf8"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// return the data field from the (key, datatype, data) tuple
    #[allow(non_snake_case)]
    pub fn hivex_value_value(&self, valueh: i64) -> Result<Vec<u8>, Error> {
        let mut size = 0usize;
        
        let r = unsafe { guestfs_hivex_value_value(self.g, valueh, &mut size as *mut usize) };
        if r.is_null() {
            return Err(self.get_error_from_handle("hivex_value_value"));
        }
        Ok({
            let s = unsafe { slice::from_raw_parts(r, size) }.to_vec();
            unsafe { free(r as *const c_void) } ;
            s
        })
    }

    /// list the contents of a single file in an initrd
    #[allow(non_snake_case)]
    pub fn initrd_cat(&self, initrdpath: &str, filename: &str) -> Result<Vec<u8>, Error> {
        let c_initrdpath = ffi::CString::new(initrdpath)?;
        let c_filename = ffi::CString::new(filename)?;
        let mut size = 0usize;
        
        let r = unsafe { guestfs_initrd_cat(self.g, (&c_initrdpath).as_ptr(), (&c_filename).as_ptr(), &mut size as *mut usize) };
        if r.is_null() {
            return Err(self.get_error_from_handle("initrd_cat"));
        }
        drop(c_initrdpath);
        drop(c_filename);
        Ok({
            let s = unsafe { slice::from_raw_parts(r, size) }.to_vec();
            unsafe { free(r as *const c_void) } ;
            s
        })
    }

    /// list files in an initrd
    #[allow(non_snake_case)]
    pub fn initrd_list(&self, path: &str) -> Result<Vec<String>, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_initrd_list(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("initrd_list"));
        }
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// add an inotify watch
    #[allow(non_snake_case)]
    pub fn inotify_add_watch(&self, path: &str, mask: i32) -> Result<i64, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_inotify_add_watch(self.g, (&c_path).as_ptr(), mask) };
        if r == -1 {
            return Err(self.get_error_from_handle("inotify_add_watch"));
        }
        drop(c_path);
        Ok(r)
    }

    /// close the inotify handle
    #[allow(non_snake_case)]
    pub fn inotify_close(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_inotify_close(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("inotify_close"));
        }
        Ok(())
    }

    /// return list of watched files that had events
    #[allow(non_snake_case)]
    pub fn inotify_files(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_inotify_files(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inotify_files"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// create an inotify handle
    #[allow(non_snake_case)]
    pub fn inotify_init(&self, maxevents: i32) -> Result<(), Error> {
        
        let r = unsafe { guestfs_inotify_init(self.g, maxevents) };
        if r == -1 {
            return Err(self.get_error_from_handle("inotify_init"));
        }
        Ok(())
    }

    /// return list of inotify events
    #[allow(non_snake_case)]
    pub fn inotify_read(&self, ) -> Result<Vec<INotifyEvent>, Error> {
        
        let r = unsafe { guestfs_inotify_read(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inotify_read"));
        }
        Ok({
            let l = struct_list::<RawINotifyEvent, INotifyEvent>(r);
            unsafe { guestfs_free_inotify_event_list(r) };
            l?
        })
    }

    /// remove an inotify watch
    #[allow(non_snake_case)]
    pub fn inotify_rm_watch(&self, wd: i32) -> Result<(), Error> {
        
        let r = unsafe { guestfs_inotify_rm_watch(self.g, wd) };
        if r == -1 {
            return Err(self.get_error_from_handle("inotify_rm_watch"));
        }
        Ok(())
    }

    /// get architecture of inspected operating system
    #[allow(non_snake_case)]
    pub fn inspect_get_arch(&self, root: &str) -> Result<String, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_arch(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_arch"));
        }
        drop(c_root);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get the system build ID
    #[allow(non_snake_case)]
    pub fn inspect_get_build_id(&self, root: &str) -> Result<String, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_build_id(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_build_id"));
        }
        drop(c_root);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get distro of inspected operating system
    #[allow(non_snake_case)]
    pub fn inspect_get_distro(&self, root: &str) -> Result<String, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_distro(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_distro"));
        }
        drop(c_root);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get drive letter mappings
    #[allow(non_snake_case)]
    pub fn inspect_get_drive_mappings(&self, root: &str) -> Result<collections::HashMap<String, String>, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_drive_mappings(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_drive_mappings"));
        }
        drop(c_root);
        Ok({
            let h = hashmap(r);
            free_string_list(r);
            h?
        })
    }

    /// get filesystems associated with inspected operating system
    #[allow(non_snake_case)]
    pub fn inspect_get_filesystems(&self, root: &str) -> Result<Vec<String>, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_filesystems(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_filesystems"));
        }
        drop(c_root);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// get format of inspected operating system
    #[allow(non_snake_case)]
    pub fn inspect_get_format(&self, root: &str) -> Result<String, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_format(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_format"));
        }
        drop(c_root);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get hostname of the operating system
    #[allow(non_snake_case)]
    pub fn inspect_get_hostname(&self, root: &str) -> Result<String, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_hostname(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_hostname"));
        }
        drop(c_root);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get the icon corresponding to this operating system
    #[allow(non_snake_case)]
    pub fn inspect_get_icon(&self, root: &str, optargs: InspectGetIconOptArgs) -> Result<Vec<u8>, Error> {
        let c_root = ffi::CString::new(root)?;
        let mut size = 0usize;
        let optargs_cexpr = CExprInspectGetIconOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_inspect_get_icon_argv(self.g, (&c_root).as_ptr(), &mut size as *mut usize, &(RawInspectGetIconOptArgs::from(&optargs_cexpr)) as *const RawInspectGetIconOptArgs) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_icon"));
        }
        drop(c_root);
        drop(optargs_cexpr);
        Ok({
            let s = unsafe { slice::from_raw_parts(r, size) }.to_vec();
            unsafe { free(r as *const c_void) } ;
            s
        })
    }

    /// get major version of inspected operating system
    #[allow(non_snake_case)]
    pub fn inspect_get_major_version(&self, root: &str) -> Result<i32, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_major_version(self.g, (&c_root).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("inspect_get_major_version"));
        }
        drop(c_root);
        Ok(r)
    }

    /// get minor version of inspected operating system
    #[allow(non_snake_case)]
    pub fn inspect_get_minor_version(&self, root: &str) -> Result<i32, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_minor_version(self.g, (&c_root).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("inspect_get_minor_version"));
        }
        drop(c_root);
        Ok(r)
    }

    /// get mountpoints of inspected operating system
    #[allow(non_snake_case)]
    pub fn inspect_get_mountpoints(&self, root: &str) -> Result<collections::HashMap<String, String>, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_mountpoints(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_mountpoints"));
        }
        drop(c_root);
        Ok({
            let h = hashmap(r);
            free_string_list(r);
            h?
        })
    }

    /// get a possible osinfo short ID corresponding to this operating system
    #[allow(non_snake_case)]
    pub fn inspect_get_osinfo(&self, root: &str) -> Result<String, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_osinfo(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_osinfo"));
        }
        drop(c_root);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get package format used by the operating system
    #[allow(non_snake_case)]
    pub fn inspect_get_package_format(&self, root: &str) -> Result<String, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_package_format(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_package_format"));
        }
        drop(c_root);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get package management tool used by the operating system
    #[allow(non_snake_case)]
    pub fn inspect_get_package_management(&self, root: &str) -> Result<String, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_package_management(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_package_management"));
        }
        drop(c_root);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get product name of inspected operating system
    #[allow(non_snake_case)]
    pub fn inspect_get_product_name(&self, root: &str) -> Result<String, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_product_name(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_product_name"));
        }
        drop(c_root);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get product variant of inspected operating system
    #[allow(non_snake_case)]
    pub fn inspect_get_product_variant(&self, root: &str) -> Result<String, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_product_variant(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_product_variant"));
        }
        drop(c_root);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// return list of operating systems found by last inspection
    #[allow(non_snake_case)]
    pub fn inspect_get_roots(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_inspect_get_roots(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_roots"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// get type of inspected operating system
    #[allow(non_snake_case)]
    pub fn inspect_get_type(&self, root: &str) -> Result<String, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_type(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_type"));
        }
        drop(c_root);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get Windows CurrentControlSet of inspected operating system
    #[allow(non_snake_case)]
    pub fn inspect_get_windows_current_control_set(&self, root: &str) -> Result<String, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_windows_current_control_set(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_windows_current_control_set"));
        }
        drop(c_root);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get the path of the Windows software hive
    #[allow(non_snake_case)]
    pub fn inspect_get_windows_software_hive(&self, root: &str) -> Result<String, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_windows_software_hive(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_windows_software_hive"));
        }
        drop(c_root);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get the path of the Windows system hive
    #[allow(non_snake_case)]
    pub fn inspect_get_windows_system_hive(&self, root: &str) -> Result<String, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_windows_system_hive(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_windows_system_hive"));
        }
        drop(c_root);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get Windows systemroot of inspected operating system
    #[allow(non_snake_case)]
    pub fn inspect_get_windows_systemroot(&self, root: &str) -> Result<String, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_get_windows_systemroot(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_get_windows_systemroot"));
        }
        drop(c_root);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get live flag for install disk
    #[allow(non_snake_case)]
    pub fn inspect_is_live(&self, root: &str) -> Result<bool, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_is_live(self.g, (&c_root).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("inspect_is_live"));
        }
        drop(c_root);
        Ok(r != 0)
    }

    /// get multipart flag for install disk
    #[allow(non_snake_case)]
    pub fn inspect_is_multipart(&self, root: &str) -> Result<bool, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_is_multipart(self.g, (&c_root).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("inspect_is_multipart"));
        }
        drop(c_root);
        Ok(r != 0)
    }

    /// get netinst (network installer) flag for install disk
    #[allow(non_snake_case)]
    pub fn inspect_is_netinst(&self, root: &str) -> Result<bool, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_is_netinst(self.g, (&c_root).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("inspect_is_netinst"));
        }
        drop(c_root);
        Ok(r != 0)
    }

    /// get list of applications installed in the operating system
    #[allow(non_snake_case)]
    pub fn inspect_list_applications(&self, root: &str) -> Result<Vec<Application>, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_list_applications(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_list_applications"));
        }
        drop(c_root);
        Ok({
            let l = struct_list::<RawApplication, Application>(r);
            unsafe { guestfs_free_application_list(r) };
            l?
        })
    }

    /// get list of applications installed in the operating system
    #[allow(non_snake_case)]
    pub fn inspect_list_applications2(&self, root: &str) -> Result<Vec<Application2>, Error> {
        let c_root = ffi::CString::new(root)?;
        
        let r = unsafe { guestfs_inspect_list_applications2(self.g, (&c_root).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_list_applications2"));
        }
        drop(c_root);
        Ok({
            let l = struct_list::<RawApplication2, Application2>(r);
            unsafe { guestfs_free_application2_list(r) };
            l?
        })
    }

    /// inspect disk and return list of operating systems found
    #[allow(non_snake_case)]
    pub fn inspect_os(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_inspect_os(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("inspect_os"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// cause the daemon to exit (internal use only)
    #[allow(non_snake_case)]
    pub fn internal_exit(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_internal_exit(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("internal_exit"));
        }
        Ok(())
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test(&self, str: &str, optstr: Option<&str>, strlist: &[&str], b: bool, integer: i32, integer64: i64, filein: &str, fileout: &str, bufferin: &[u8], optargs: InternalTestOptArgs) -> Result<(), Error> {
        let c_str = ffi::CString::new(str)?;
        let c_optstr = optstr.map(|s| ffi::CString::new(s)).transpose()?;
        let c_strlist_v = arg_string_list(strlist)?;
        let mut c_strlist = (&c_strlist_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_strlist.push(ptr::null());
        let b = if b { 1 } else { 0 };
        let c_filein = ffi::CString::new(filein)?;
        let c_fileout = ffi::CString::new(fileout)?;
        let c_bufferin_len = bufferin.len();
        let c_bufferin = unsafe { ffi::CString::from_vec_unchecked(bufferin.to_vec())};
        let optargs_cexpr = CExprInternalTestOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_internal_test_argv(self.g, (&c_str).as_ptr(), match &c_optstr { Some(ref s) => s.as_ptr(), None => ptr::null() }
, (&c_strlist).as_ptr() as *const *const c_char, b, integer, integer64, (&c_filein).as_ptr(), (&c_fileout).as_ptr(), (&c_bufferin).as_ptr(), c_bufferin_len, &(RawInternalTestOptArgs::from(&optargs_cexpr)) as *const RawInternalTestOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("internal_test"));
        }
        drop(c_str);
        drop(c_optstr);
        drop(c_strlist);
        drop(c_strlist_v);
        drop(c_filein);
        drop(c_fileout);
        drop(c_bufferin);
        drop(optargs_cexpr);
        Ok(())
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_63_optargs(&self, optargs: InternalTest63OptargsOptArgs) -> Result<(), Error> {
        let optargs_cexpr = CExprInternalTest63OptargsOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_internal_test_63_optargs_argv(self.g, &(RawInternalTest63OptargsOptArgs::from(&optargs_cexpr)) as *const RawInternalTest63OptargsOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("internal_test_63_optargs"));
        }
        drop(optargs_cexpr);
        Ok(())
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_close_output(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_internal_test_close_output(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("internal_test_close_output"));
        }
        Ok(())
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_only_optargs(&self, optargs: InternalTestOnlyOptargsOptArgs) -> Result<(), Error> {
        let optargs_cexpr = CExprInternalTestOnlyOptargsOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_internal_test_only_optargs_argv(self.g, &(RawInternalTestOnlyOptargsOptArgs::from(&optargs_cexpr)) as *const RawInternalTestOnlyOptargsOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("internal_test_only_optargs"));
        }
        drop(optargs_cexpr);
        Ok(())
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rbool(&self, val: &str) -> Result<bool, Error> {
        let c_val = ffi::CString::new(val)?;
        
        let r = unsafe { guestfs_internal_test_rbool(self.g, (&c_val).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("internal_test_rbool"));
        }
        drop(c_val);
        Ok(r != 0)
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rboolerr(&self, ) -> Result<bool, Error> {
        
        let r = unsafe { guestfs_internal_test_rboolerr(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("internal_test_rboolerr"));
        }
        Ok(r != 0)
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rbufferout(&self, val: &str) -> Result<Vec<u8>, Error> {
        let c_val = ffi::CString::new(val)?;
        let mut size = 0usize;
        
        let r = unsafe { guestfs_internal_test_rbufferout(self.g, (&c_val).as_ptr(), &mut size as *mut usize) };
        if r.is_null() {
            return Err(self.get_error_from_handle("internal_test_rbufferout"));
        }
        drop(c_val);
        Ok({
            let s = unsafe { slice::from_raw_parts(r, size) }.to_vec();
            unsafe { free(r as *const c_void) } ;
            s
        })
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rbufferouterr(&self, ) -> Result<Vec<u8>, Error> {
        let mut size = 0usize;
        
        let r = unsafe { guestfs_internal_test_rbufferouterr(self.g, &mut size as *mut usize) };
        if r.is_null() {
            return Err(self.get_error_from_handle("internal_test_rbufferouterr"));
        }
        Ok({
            let s = unsafe { slice::from_raw_parts(r, size) }.to_vec();
            unsafe { free(r as *const c_void) } ;
            s
        })
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rconstoptstring(&self, val: &str) -> Result<Option<&'static str>, Error> {
        let c_val = ffi::CString::new(val)?;
        
        let r = unsafe { guestfs_internal_test_rconstoptstring(self.g, (&c_val).as_ptr()) };
        drop(c_val);
        Ok(if r.is_null() {
            None
        } else {
            Some(unsafe { ffi::CStr::from_ptr(r) }.to_str()?)
        })
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rconstoptstringerr(&self, ) -> Result<Option<&'static str>, Error> {
        
        let r = unsafe { guestfs_internal_test_rconstoptstringerr(self.g) };
        Ok(if r.is_null() {
            None
        } else {
            Some(unsafe { ffi::CStr::from_ptr(r) }.to_str()?)
        })
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rconststring(&self, val: &str) -> Result<&'static str, Error> {
        let c_val = ffi::CString::new(val)?;
        
        let r = unsafe { guestfs_internal_test_rconststring(self.g, (&c_val).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("internal_test_rconststring"));
        }
        drop(c_val);
        Ok(unsafe{ ffi::CStr::from_ptr(r) }.to_str()?)
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rconststringerr(&self, ) -> Result<&'static str, Error> {
        
        let r = unsafe { guestfs_internal_test_rconststringerr(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("internal_test_rconststringerr"));
        }
        Ok(unsafe{ ffi::CStr::from_ptr(r) }.to_str()?)
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rhashtable(&self, val: &str) -> Result<collections::HashMap<String, String>, Error> {
        let c_val = ffi::CString::new(val)?;
        
        let r = unsafe { guestfs_internal_test_rhashtable(self.g, (&c_val).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("internal_test_rhashtable"));
        }
        drop(c_val);
        Ok({
            let h = hashmap(r);
            free_string_list(r);
            h?
        })
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rhashtableerr(&self, ) -> Result<collections::HashMap<String, String>, Error> {
        
        let r = unsafe { guestfs_internal_test_rhashtableerr(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("internal_test_rhashtableerr"));
        }
        Ok({
            let h = hashmap(r);
            free_string_list(r);
            h?
        })
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rint(&self, val: &str) -> Result<i32, Error> {
        let c_val = ffi::CString::new(val)?;
        
        let r = unsafe { guestfs_internal_test_rint(self.g, (&c_val).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("internal_test_rint"));
        }
        drop(c_val);
        Ok(r)
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rint64(&self, val: &str) -> Result<i64, Error> {
        let c_val = ffi::CString::new(val)?;
        
        let r = unsafe { guestfs_internal_test_rint64(self.g, (&c_val).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("internal_test_rint64"));
        }
        drop(c_val);
        Ok(r)
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rint64err(&self, ) -> Result<i64, Error> {
        
        let r = unsafe { guestfs_internal_test_rint64err(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("internal_test_rint64err"));
        }
        Ok(r)
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rinterr(&self, ) -> Result<i32, Error> {
        
        let r = unsafe { guestfs_internal_test_rinterr(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("internal_test_rinterr"));
        }
        Ok(r)
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rstring(&self, val: &str) -> Result<String, Error> {
        let c_val = ffi::CString::new(val)?;
        
        let r = unsafe { guestfs_internal_test_rstring(self.g, (&c_val).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("internal_test_rstring"));
        }
        drop(c_val);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rstringerr(&self, ) -> Result<String, Error> {
        
        let r = unsafe { guestfs_internal_test_rstringerr(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("internal_test_rstringerr"));
        }
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rstringlist(&self, val: &str) -> Result<Vec<String>, Error> {
        let c_val = ffi::CString::new(val)?;
        
        let r = unsafe { guestfs_internal_test_rstringlist(self.g, (&c_val).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("internal_test_rstringlist"));
        }
        drop(c_val);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rstringlisterr(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_internal_test_rstringlisterr(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("internal_test_rstringlisterr"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rstruct(&self, val: &str) -> Result<PV, Error> {
        let c_val = ffi::CString::new(val)?;
        
        let r = unsafe { guestfs_internal_test_rstruct(self.g, (&c_val).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("internal_test_rstruct"));
        }
        drop(c_val);
        Ok({
            let s = PV::try_from(r);
            unsafe { guestfs_free_lvm_pv(r) };
            s?
        })
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rstructerr(&self, ) -> Result<PV, Error> {
        
        let r = unsafe { guestfs_internal_test_rstructerr(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("internal_test_rstructerr"));
        }
        Ok({
            let s = PV::try_from(r);
            unsafe { guestfs_free_lvm_pv(r) };
            s?
        })
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rstructlist(&self, val: &str) -> Result<Vec<PV>, Error> {
        let c_val = ffi::CString::new(val)?;
        
        let r = unsafe { guestfs_internal_test_rstructlist(self.g, (&c_val).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("internal_test_rstructlist"));
        }
        drop(c_val);
        Ok({
            let l = struct_list::<RawPV, PV>(r);
            unsafe { guestfs_free_lvm_pv_list(r) };
            l?
        })
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_rstructlisterr(&self, ) -> Result<Vec<PV>, Error> {
        
        let r = unsafe { guestfs_internal_test_rstructlisterr(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("internal_test_rstructlisterr"));
        }
        Ok({
            let l = struct_list::<RawPV, PV>(r);
            unsafe { guestfs_free_lvm_pv_list(r) };
            l?
        })
    }

    /// internal test function - do not use
    #[allow(non_snake_case)]
    pub fn internal_test_set_output(&self, filename: &str) -> Result<(), Error> {
        let c_filename = ffi::CString::new(filename)?;
        
        let r = unsafe { guestfs_internal_test_set_output(self.g, (&c_filename).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("internal_test_set_output"));
        }
        drop(c_filename);
        Ok(())
    }

    /// test if block device
    #[allow(non_snake_case)]
    pub fn is_blockdev(&self, path: &str, optargs: IsBlockdevOptArgs) -> Result<bool, Error> {
        let c_path = ffi::CString::new(path)?;
        let optargs_cexpr = CExprIsBlockdevOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_is_blockdev_opts_argv(self.g, (&c_path).as_ptr(), &(RawIsBlockdevOptArgs::from(&optargs_cexpr)) as *const RawIsBlockdevOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("is_blockdev"));
        }
        drop(c_path);
        drop(optargs_cexpr);
        Ok(r != 0)
    }

    /// is busy processing a command
    #[allow(non_snake_case)]
    pub fn is_busy(&self, ) -> Result<bool, Error> {
        
        let r = unsafe { guestfs_is_busy(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("is_busy"));
        }
        Ok(r != 0)
    }

    /// test if character device
    #[allow(non_snake_case)]
    pub fn is_chardev(&self, path: &str, optargs: IsChardevOptArgs) -> Result<bool, Error> {
        let c_path = ffi::CString::new(path)?;
        let optargs_cexpr = CExprIsChardevOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_is_chardev_opts_argv(self.g, (&c_path).as_ptr(), &(RawIsChardevOptArgs::from(&optargs_cexpr)) as *const RawIsChardevOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("is_chardev"));
        }
        drop(c_path);
        drop(optargs_cexpr);
        Ok(r != 0)
    }

    /// is in configuration state
    #[allow(non_snake_case)]
    pub fn is_config(&self, ) -> Result<bool, Error> {
        
        let r = unsafe { guestfs_is_config(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("is_config"));
        }
        Ok(r != 0)
    }

    /// test if a directory
    #[allow(non_snake_case)]
    pub fn is_dir(&self, path: &str, optargs: IsDirOptArgs) -> Result<bool, Error> {
        let c_path = ffi::CString::new(path)?;
        let optargs_cexpr = CExprIsDirOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_is_dir_opts_argv(self.g, (&c_path).as_ptr(), &(RawIsDirOptArgs::from(&optargs_cexpr)) as *const RawIsDirOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("is_dir"));
        }
        drop(c_path);
        drop(optargs_cexpr);
        Ok(r != 0)
    }

    /// test if FIFO (named pipe)
    #[allow(non_snake_case)]
    pub fn is_fifo(&self, path: &str, optargs: IsFifoOptArgs) -> Result<bool, Error> {
        let c_path = ffi::CString::new(path)?;
        let optargs_cexpr = CExprIsFifoOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_is_fifo_opts_argv(self.g, (&c_path).as_ptr(), &(RawIsFifoOptArgs::from(&optargs_cexpr)) as *const RawIsFifoOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("is_fifo"));
        }
        drop(c_path);
        drop(optargs_cexpr);
        Ok(r != 0)
    }

    /// test if a regular file
    #[allow(non_snake_case)]
    pub fn is_file(&self, path: &str, optargs: IsFileOptArgs) -> Result<bool, Error> {
        let c_path = ffi::CString::new(path)?;
        let optargs_cexpr = CExprIsFileOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_is_file_opts_argv(self.g, (&c_path).as_ptr(), &(RawIsFileOptArgs::from(&optargs_cexpr)) as *const RawIsFileOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("is_file"));
        }
        drop(c_path);
        drop(optargs_cexpr);
        Ok(r != 0)
    }

    /// is launching subprocess
    #[allow(non_snake_case)]
    pub fn is_launching(&self, ) -> Result<bool, Error> {
        
        let r = unsafe { guestfs_is_launching(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("is_launching"));
        }
        Ok(r != 0)
    }

    /// test if mountable is a logical volume
    #[allow(non_snake_case)]
    pub fn is_lv(&self, mountable: &str) -> Result<bool, Error> {
        let c_mountable = ffi::CString::new(mountable)?;
        
        let r = unsafe { guestfs_is_lv(self.g, (&c_mountable).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("is_lv"));
        }
        drop(c_mountable);
        Ok(r != 0)
    }

    /// is ready to accept commands
    #[allow(non_snake_case)]
    pub fn is_ready(&self, ) -> Result<bool, Error> {
        
        let r = unsafe { guestfs_is_ready(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("is_ready"));
        }
        Ok(r != 0)
    }

    /// test if socket
    #[allow(non_snake_case)]
    pub fn is_socket(&self, path: &str, optargs: IsSocketOptArgs) -> Result<bool, Error> {
        let c_path = ffi::CString::new(path)?;
        let optargs_cexpr = CExprIsSocketOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_is_socket_opts_argv(self.g, (&c_path).as_ptr(), &(RawIsSocketOptArgs::from(&optargs_cexpr)) as *const RawIsSocketOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("is_socket"));
        }
        drop(c_path);
        drop(optargs_cexpr);
        Ok(r != 0)
    }

    /// test if symbolic link
    #[allow(non_snake_case)]
    pub fn is_symlink(&self, path: &str) -> Result<bool, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_is_symlink(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("is_symlink"));
        }
        drop(c_path);
        Ok(r != 0)
    }

    /// test if a device is a whole device
    #[allow(non_snake_case)]
    pub fn is_whole_device(&self, device: &str) -> Result<bool, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_is_whole_device(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("is_whole_device"));
        }
        drop(c_device);
        Ok(r != 0)
    }

    /// test if a file contains all zero bytes
    #[allow(non_snake_case)]
    pub fn is_zero(&self, path: &str) -> Result<bool, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_is_zero(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("is_zero"));
        }
        drop(c_path);
        Ok(r != 0)
    }

    /// test if a device contains all zero bytes
    #[allow(non_snake_case)]
    pub fn is_zero_device(&self, device: &str) -> Result<bool, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_is_zero_device(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("is_zero_device"));
        }
        drop(c_device);
        Ok(r != 0)
    }

    /// get ISO information from primary volume descriptor of ISO file
    #[allow(non_snake_case)]
    pub fn isoinfo(&self, isofile: &str) -> Result<ISOInfo, Error> {
        let c_isofile = ffi::CString::new(isofile)?;
        
        let r = unsafe { guestfs_isoinfo(self.g, (&c_isofile).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("isoinfo"));
        }
        drop(c_isofile);
        Ok({
            let s = ISOInfo::try_from(r);
            unsafe { guestfs_free_isoinfo(r) };
            s?
        })
    }

    /// get ISO information from primary volume descriptor of device
    #[allow(non_snake_case)]
    pub fn isoinfo_device(&self, device: &str) -> Result<ISOInfo, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_isoinfo_device(self.g, (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("isoinfo_device"));
        }
        drop(c_device);
        Ok({
            let s = ISOInfo::try_from(r);
            unsafe { guestfs_free_isoinfo(r) };
            s?
        })
    }

    /// close the systemd journal
    #[allow(non_snake_case)]
    pub fn journal_close(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_journal_close(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("journal_close"));
        }
        Ok(())
    }

    /// read the current journal entry
    #[allow(non_snake_case)]
    pub fn journal_get(&self, ) -> Result<Vec<XAttr>, Error> {
        
        let r = unsafe { guestfs_journal_get(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("journal_get"));
        }
        Ok({
            let l = struct_list::<RawXAttr, XAttr>(r);
            unsafe { guestfs_free_xattr_list(r) };
            l?
        })
    }

    /// get the data threshold for reading journal entries
    #[allow(non_snake_case)]
    pub fn journal_get_data_threshold(&self, ) -> Result<i64, Error> {
        
        let r = unsafe { guestfs_journal_get_data_threshold(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("journal_get_data_threshold"));
        }
        Ok(r)
    }

    /// get the timestamp of the current journal entry
    #[allow(non_snake_case)]
    pub fn journal_get_realtime_usec(&self, ) -> Result<i64, Error> {
        
        let r = unsafe { guestfs_journal_get_realtime_usec(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("journal_get_realtime_usec"));
        }
        Ok(r)
    }

    /// move to the next journal entry
    #[allow(non_snake_case)]
    pub fn journal_next(&self, ) -> Result<bool, Error> {
        
        let r = unsafe { guestfs_journal_next(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("journal_next"));
        }
        Ok(r != 0)
    }

    /// open the systemd journal
    #[allow(non_snake_case)]
    pub fn journal_open(&self, directory: &str) -> Result<(), Error> {
        let c_directory = ffi::CString::new(directory)?;
        
        let r = unsafe { guestfs_journal_open(self.g, (&c_directory).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("journal_open"));
        }
        drop(c_directory);
        Ok(())
    }

    /// set the data threshold for reading journal entries
    #[allow(non_snake_case)]
    pub fn journal_set_data_threshold(&self, threshold: i64) -> Result<(), Error> {
        
        let r = unsafe { guestfs_journal_set_data_threshold(self.g, threshold) };
        if r == -1 {
            return Err(self.get_error_from_handle("journal_set_data_threshold"));
        }
        Ok(())
    }

    /// skip forwards or backwards in the journal
    #[allow(non_snake_case)]
    pub fn journal_skip(&self, skip: i64) -> Result<i64, Error> {
        
        let r = unsafe { guestfs_journal_skip(self.g, skip) };
        if r == -1 {
            return Err(self.get_error_from_handle("journal_skip"));
        }
        Ok(r)
    }

    /// kill the hypervisor
    #[allow(non_snake_case)]
    pub fn kill_subprocess(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_kill_subprocess(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("kill_subprocess"));
        }
        Ok(())
    }

    /// launch the backend
    #[allow(non_snake_case)]
    pub fn launch(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_launch(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("launch"));
        }
        Ok(())
    }

    /// change file owner and group
    #[allow(non_snake_case)]
    pub fn lchown(&self, owner: i32, group: i32, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_lchown(self.g, owner, group, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("lchown"));
        }
        drop(c_path);
        Ok(())
    }

    /// scan and create Windows dynamic disk volumes
    #[allow(non_snake_case)]
    pub fn ldmtool_create_all(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_ldmtool_create_all(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("ldmtool_create_all"));
        }
        Ok(())
    }

    /// return the disks in a Windows dynamic disk group
    #[allow(non_snake_case)]
    pub fn ldmtool_diskgroup_disks(&self, diskgroup: &str) -> Result<Vec<String>, Error> {
        let c_diskgroup = ffi::CString::new(diskgroup)?;
        
        let r = unsafe { guestfs_ldmtool_diskgroup_disks(self.g, (&c_diskgroup).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("ldmtool_diskgroup_disks"));
        }
        drop(c_diskgroup);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// return the name of a Windows dynamic disk group
    #[allow(non_snake_case)]
    pub fn ldmtool_diskgroup_name(&self, diskgroup: &str) -> Result<String, Error> {
        let c_diskgroup = ffi::CString::new(diskgroup)?;
        
        let r = unsafe { guestfs_ldmtool_diskgroup_name(self.g, (&c_diskgroup).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("ldmtool_diskgroup_name"));
        }
        drop(c_diskgroup);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// return the volumes in a Windows dynamic disk group
    #[allow(non_snake_case)]
    pub fn ldmtool_diskgroup_volumes(&self, diskgroup: &str) -> Result<Vec<String>, Error> {
        let c_diskgroup = ffi::CString::new(diskgroup)?;
        
        let r = unsafe { guestfs_ldmtool_diskgroup_volumes(self.g, (&c_diskgroup).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("ldmtool_diskgroup_volumes"));
        }
        drop(c_diskgroup);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// remove all Windows dynamic disk volumes
    #[allow(non_snake_case)]
    pub fn ldmtool_remove_all(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_ldmtool_remove_all(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("ldmtool_remove_all"));
        }
        Ok(())
    }

    /// scan for Windows dynamic disks
    #[allow(non_snake_case)]
    pub fn ldmtool_scan(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_ldmtool_scan(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("ldmtool_scan"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// scan for Windows dynamic disks
    #[allow(non_snake_case)]
    pub fn ldmtool_scan_devices(&self, devices: &[&str]) -> Result<Vec<String>, Error> {
        let c_devices_v = arg_string_list(devices)?;
        let mut c_devices = (&c_devices_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_devices.push(ptr::null());
        
        let r = unsafe { guestfs_ldmtool_scan_devices(self.g, (&c_devices).as_ptr() as *const *const c_char) };
        if r.is_null() {
            return Err(self.get_error_from_handle("ldmtool_scan_devices"));
        }
        drop(c_devices);
        drop(c_devices_v);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// return the hint field of a Windows dynamic disk volume
    #[allow(non_snake_case)]
    pub fn ldmtool_volume_hint(&self, diskgroup: &str, volume: &str) -> Result<String, Error> {
        let c_diskgroup = ffi::CString::new(diskgroup)?;
        let c_volume = ffi::CString::new(volume)?;
        
        let r = unsafe { guestfs_ldmtool_volume_hint(self.g, (&c_diskgroup).as_ptr(), (&c_volume).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("ldmtool_volume_hint"));
        }
        drop(c_diskgroup);
        drop(c_volume);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// return the partitions in a Windows dynamic disk volume
    #[allow(non_snake_case)]
    pub fn ldmtool_volume_partitions(&self, diskgroup: &str, volume: &str) -> Result<Vec<String>, Error> {
        let c_diskgroup = ffi::CString::new(diskgroup)?;
        let c_volume = ffi::CString::new(volume)?;
        
        let r = unsafe { guestfs_ldmtool_volume_partitions(self.g, (&c_diskgroup).as_ptr(), (&c_volume).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("ldmtool_volume_partitions"));
        }
        drop(c_diskgroup);
        drop(c_volume);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// return the type of a Windows dynamic disk volume
    #[allow(non_snake_case)]
    pub fn ldmtool_volume_type(&self, diskgroup: &str, volume: &str) -> Result<String, Error> {
        let c_diskgroup = ffi::CString::new(diskgroup)?;
        let c_volume = ffi::CString::new(volume)?;
        
        let r = unsafe { guestfs_ldmtool_volume_type(self.g, (&c_diskgroup).as_ptr(), (&c_volume).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("ldmtool_volume_type"));
        }
        drop(c_diskgroup);
        drop(c_volume);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get a single extended attribute
    #[allow(non_snake_case)]
    pub fn lgetxattr(&self, path: &str, name: &str) -> Result<Vec<u8>, Error> {
        let c_path = ffi::CString::new(path)?;
        let c_name = ffi::CString::new(name)?;
        let mut size = 0usize;
        
        let r = unsafe { guestfs_lgetxattr(self.g, (&c_path).as_ptr(), (&c_name).as_ptr(), &mut size as *mut usize) };
        if r.is_null() {
            return Err(self.get_error_from_handle("lgetxattr"));
        }
        drop(c_path);
        drop(c_name);
        Ok({
            let s = unsafe { slice::from_raw_parts(r, size) }.to_vec();
            unsafe { free(r as *const c_void) } ;
            s
        })
    }

    /// list extended attributes of a file or directory
    #[allow(non_snake_case)]
    pub fn lgetxattrs(&self, path: &str) -> Result<Vec<XAttr>, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_lgetxattrs(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("lgetxattrs"));
        }
        drop(c_path);
        Ok({
            let l = struct_list::<RawXAttr, XAttr>(r);
            unsafe { guestfs_free_xattr_list(r) };
            l?
        })
    }

    /// list 9p filesystems
    #[allow(non_snake_case)]
    pub fn list_9p(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_list_9p(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("list_9p"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// list the block devices
    #[allow(non_snake_case)]
    pub fn list_devices(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_list_devices(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("list_devices"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// mapping of disk labels to devices
    #[allow(non_snake_case)]
    pub fn list_disk_labels(&self, ) -> Result<collections::HashMap<String, String>, Error> {
        
        let r = unsafe { guestfs_list_disk_labels(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("list_disk_labels"));
        }
        Ok({
            let h = hashmap(r);
            free_string_list(r);
            h?
        })
    }

    /// list device mapper devices
    #[allow(non_snake_case)]
    pub fn list_dm_devices(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_list_dm_devices(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("list_dm_devices"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// list filesystems
    #[allow(non_snake_case)]
    pub fn list_filesystems(&self, ) -> Result<collections::HashMap<String, String>, Error> {
        
        let r = unsafe { guestfs_list_filesystems(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("list_filesystems"));
        }
        Ok({
            let h = hashmap(r);
            free_string_list(r);
            h?
        })
    }

    /// list all Windows dynamic disk partitions
    #[allow(non_snake_case)]
    pub fn list_ldm_partitions(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_list_ldm_partitions(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("list_ldm_partitions"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// list all Windows dynamic disk volumes
    #[allow(non_snake_case)]
    pub fn list_ldm_volumes(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_list_ldm_volumes(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("list_ldm_volumes"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// list Linux md (RAID) devices
    #[allow(non_snake_case)]
    pub fn list_md_devices(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_list_md_devices(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("list_md_devices"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// list the partitions
    #[allow(non_snake_case)]
    pub fn list_partitions(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_list_partitions(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("list_partitions"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// list the files in a directory (long format)
    #[allow(non_snake_case)]
    pub fn ll(&self, directory: &str) -> Result<String, Error> {
        let c_directory = ffi::CString::new(directory)?;
        
        let r = unsafe { guestfs_ll(self.g, (&c_directory).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("ll"));
        }
        drop(c_directory);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// list the files in a directory (long format with SELinux contexts)
    #[allow(non_snake_case)]
    pub fn llz(&self, directory: &str) -> Result<String, Error> {
        let c_directory = ffi::CString::new(directory)?;
        
        let r = unsafe { guestfs_llz(self.g, (&c_directory).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("llz"));
        }
        drop(c_directory);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// create a hard link
    #[allow(non_snake_case)]
    pub fn ln(&self, target: &str, linkname: &str) -> Result<(), Error> {
        let c_target = ffi::CString::new(target)?;
        let c_linkname = ffi::CString::new(linkname)?;
        
        let r = unsafe { guestfs_ln(self.g, (&c_target).as_ptr(), (&c_linkname).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("ln"));
        }
        drop(c_target);
        drop(c_linkname);
        Ok(())
    }

    /// create a hard link
    #[allow(non_snake_case)]
    pub fn ln_f(&self, target: &str, linkname: &str) -> Result<(), Error> {
        let c_target = ffi::CString::new(target)?;
        let c_linkname = ffi::CString::new(linkname)?;
        
        let r = unsafe { guestfs_ln_f(self.g, (&c_target).as_ptr(), (&c_linkname).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("ln_f"));
        }
        drop(c_target);
        drop(c_linkname);
        Ok(())
    }

    /// create a symbolic link
    #[allow(non_snake_case)]
    pub fn ln_s(&self, target: &str, linkname: &str) -> Result<(), Error> {
        let c_target = ffi::CString::new(target)?;
        let c_linkname = ffi::CString::new(linkname)?;
        
        let r = unsafe { guestfs_ln_s(self.g, (&c_target).as_ptr(), (&c_linkname).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("ln_s"));
        }
        drop(c_target);
        drop(c_linkname);
        Ok(())
    }

    /// create a symbolic link
    #[allow(non_snake_case)]
    pub fn ln_sf(&self, target: &str, linkname: &str) -> Result<(), Error> {
        let c_target = ffi::CString::new(target)?;
        let c_linkname = ffi::CString::new(linkname)?;
        
        let r = unsafe { guestfs_ln_sf(self.g, (&c_target).as_ptr(), (&c_linkname).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("ln_sf"));
        }
        drop(c_target);
        drop(c_linkname);
        Ok(())
    }

    /// remove extended attribute of a file or directory
    #[allow(non_snake_case)]
    pub fn lremovexattr(&self, xattr: &str, path: &str) -> Result<(), Error> {
        let c_xattr = ffi::CString::new(xattr)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_lremovexattr(self.g, (&c_xattr).as_ptr(), (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("lremovexattr"));
        }
        drop(c_xattr);
        drop(c_path);
        Ok(())
    }

    /// list the files in a directory
    #[allow(non_snake_case)]
    pub fn ls(&self, directory: &str) -> Result<Vec<String>, Error> {
        let c_directory = ffi::CString::new(directory)?;
        
        let r = unsafe { guestfs_ls(self.g, (&c_directory).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("ls"));
        }
        drop(c_directory);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// get list of files in a directory
    #[allow(non_snake_case)]
    pub fn ls0(&self, dir: &str, filenames: &str) -> Result<(), Error> {
        let c_dir = ffi::CString::new(dir)?;
        let c_filenames = ffi::CString::new(filenames)?;
        
        let r = unsafe { guestfs_ls0(self.g, (&c_dir).as_ptr(), (&c_filenames).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("ls0"));
        }
        drop(c_dir);
        drop(c_filenames);
        Ok(())
    }

    /// set extended attribute of a file or directory
    #[allow(non_snake_case)]
    pub fn lsetxattr(&self, xattr: &str, val: &str, vallen: i32, path: &str) -> Result<(), Error> {
        let c_xattr = ffi::CString::new(xattr)?;
        let c_val = ffi::CString::new(val)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_lsetxattr(self.g, (&c_xattr).as_ptr(), (&c_val).as_ptr(), vallen, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("lsetxattr"));
        }
        drop(c_xattr);
        drop(c_val);
        drop(c_path);
        Ok(())
    }

    /// get file information for a symbolic link
    #[allow(non_snake_case)]
    pub fn lstat(&self, path: &str) -> Result<Stat, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_lstat(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("lstat"));
        }
        drop(c_path);
        Ok({
            let s = Stat::try_from(r);
            unsafe { guestfs_free_stat(r) };
            s?
        })
    }

    /// lstat on multiple files
    #[allow(non_snake_case)]
    pub fn lstatlist(&self, path: &str, names: &[&str]) -> Result<Vec<Stat>, Error> {
        let c_path = ffi::CString::new(path)?;
        let c_names_v = arg_string_list(names)?;
        let mut c_names = (&c_names_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_names.push(ptr::null());
        
        let r = unsafe { guestfs_lstatlist(self.g, (&c_path).as_ptr(), (&c_names).as_ptr() as *const *const c_char) };
        if r.is_null() {
            return Err(self.get_error_from_handle("lstatlist"));
        }
        drop(c_path);
        drop(c_names);
        drop(c_names_v);
        Ok({
            let l = struct_list::<RawStat, Stat>(r);
            unsafe { guestfs_free_stat_list(r) };
            l?
        })
    }

    /// get file information for a symbolic link
    #[allow(non_snake_case)]
    pub fn lstatns(&self, path: &str) -> Result<StatNS, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_lstatns(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("lstatns"));
        }
        drop(c_path);
        Ok({
            let s = StatNS::try_from(r);
            unsafe { guestfs_free_statns(r) };
            s?
        })
    }

    /// lstat on multiple files
    #[allow(non_snake_case)]
    pub fn lstatnslist(&self, path: &str, names: &[&str]) -> Result<Vec<StatNS>, Error> {
        let c_path = ffi::CString::new(path)?;
        let c_names_v = arg_string_list(names)?;
        let mut c_names = (&c_names_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_names.push(ptr::null());
        
        let r = unsafe { guestfs_lstatnslist(self.g, (&c_path).as_ptr(), (&c_names).as_ptr() as *const *const c_char) };
        if r.is_null() {
            return Err(self.get_error_from_handle("lstatnslist"));
        }
        drop(c_path);
        drop(c_names);
        drop(c_names_v);
        Ok({
            let l = struct_list::<RawStatNS, StatNS>(r);
            unsafe { guestfs_free_statns_list(r) };
            l?
        })
    }

    /// add a key on a LUKS encrypted device
    #[allow(non_snake_case)]
    pub fn luks_add_key(&self, device: &str, key: &str, newkey: &str, keyslot: i32) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_key = ffi::CString::new(key)?;
        let c_newkey = ffi::CString::new(newkey)?;
        
        let r = unsafe { guestfs_luks_add_key(self.g, (&c_device).as_ptr(), (&c_key).as_ptr(), (&c_newkey).as_ptr(), keyslot) };
        if r == -1 {
            return Err(self.get_error_from_handle("luks_add_key"));
        }
        drop(c_device);
        drop(c_key);
        drop(c_newkey);
        Ok(())
    }

    /// close a LUKS device
    #[allow(non_snake_case)]
    pub fn luks_close(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_luks_close(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("luks_close"));
        }
        drop(c_device);
        Ok(())
    }

    /// format a block device as a LUKS encrypted device
    #[allow(non_snake_case)]
    pub fn luks_format(&self, device: &str, key: &str, keyslot: i32) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_key = ffi::CString::new(key)?;
        
        let r = unsafe { guestfs_luks_format(self.g, (&c_device).as_ptr(), (&c_key).as_ptr(), keyslot) };
        if r == -1 {
            return Err(self.get_error_from_handle("luks_format"));
        }
        drop(c_device);
        drop(c_key);
        Ok(())
    }

    /// format a block device as a LUKS encrypted device
    #[allow(non_snake_case)]
    pub fn luks_format_cipher(&self, device: &str, key: &str, keyslot: i32, cipher: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_key = ffi::CString::new(key)?;
        let c_cipher = ffi::CString::new(cipher)?;
        
        let r = unsafe { guestfs_luks_format_cipher(self.g, (&c_device).as_ptr(), (&c_key).as_ptr(), keyslot, (&c_cipher).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("luks_format_cipher"));
        }
        drop(c_device);
        drop(c_key);
        drop(c_cipher);
        Ok(())
    }

    /// remove a key from a LUKS encrypted device
    #[allow(non_snake_case)]
    pub fn luks_kill_slot(&self, device: &str, key: &str, keyslot: i32) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_key = ffi::CString::new(key)?;
        
        let r = unsafe { guestfs_luks_kill_slot(self.g, (&c_device).as_ptr(), (&c_key).as_ptr(), keyslot) };
        if r == -1 {
            return Err(self.get_error_from_handle("luks_kill_slot"));
        }
        drop(c_device);
        drop(c_key);
        Ok(())
    }

    /// open a LUKS-encrypted block device
    #[allow(non_snake_case)]
    pub fn luks_open(&self, device: &str, key: &str, mapname: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_key = ffi::CString::new(key)?;
        let c_mapname = ffi::CString::new(mapname)?;
        
        let r = unsafe { guestfs_luks_open(self.g, (&c_device).as_ptr(), (&c_key).as_ptr(), (&c_mapname).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("luks_open"));
        }
        drop(c_device);
        drop(c_key);
        drop(c_mapname);
        Ok(())
    }

    /// open a LUKS-encrypted block device read-only
    #[allow(non_snake_case)]
    pub fn luks_open_ro(&self, device: &str, key: &str, mapname: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_key = ffi::CString::new(key)?;
        let c_mapname = ffi::CString::new(mapname)?;
        
        let r = unsafe { guestfs_luks_open_ro(self.g, (&c_device).as_ptr(), (&c_key).as_ptr(), (&c_mapname).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("luks_open_ro"));
        }
        drop(c_device);
        drop(c_key);
        drop(c_mapname);
        Ok(())
    }

    /// get the UUID of a LUKS device
    #[allow(non_snake_case)]
    pub fn luks_uuid(&self, device: &str) -> Result<String, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_luks_uuid(self.g, (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("luks_uuid"));
        }
        drop(c_device);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// create an LVM logical volume
    #[allow(non_snake_case)]
    pub fn lvcreate(&self, logvol: &str, volgroup: &str, mbytes: i32) -> Result<(), Error> {
        let c_logvol = ffi::CString::new(logvol)?;
        let c_volgroup = ffi::CString::new(volgroup)?;
        
        let r = unsafe { guestfs_lvcreate(self.g, (&c_logvol).as_ptr(), (&c_volgroup).as_ptr(), mbytes) };
        if r == -1 {
            return Err(self.get_error_from_handle("lvcreate"));
        }
        drop(c_logvol);
        drop(c_volgroup);
        Ok(())
    }

    /// create an LVM logical volume in % remaining free space
    #[allow(non_snake_case)]
    pub fn lvcreate_free(&self, logvol: &str, volgroup: &str, percent: i32) -> Result<(), Error> {
        let c_logvol = ffi::CString::new(logvol)?;
        let c_volgroup = ffi::CString::new(volgroup)?;
        
        let r = unsafe { guestfs_lvcreate_free(self.g, (&c_logvol).as_ptr(), (&c_volgroup).as_ptr(), percent) };
        if r == -1 {
            return Err(self.get_error_from_handle("lvcreate_free"));
        }
        drop(c_logvol);
        drop(c_volgroup);
        Ok(())
    }

    /// get canonical name of an LV
    #[allow(non_snake_case)]
    pub fn lvm_canonical_lv_name(&self, lvname: &str) -> Result<String, Error> {
        let c_lvname = ffi::CString::new(lvname)?;
        
        let r = unsafe { guestfs_lvm_canonical_lv_name(self.g, (&c_lvname).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("lvm_canonical_lv_name"));
        }
        drop(c_lvname);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// clear LVM device filter
    #[allow(non_snake_case)]
    pub fn lvm_clear_filter(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_lvm_clear_filter(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("lvm_clear_filter"));
        }
        Ok(())
    }

    /// remove all LVM LVs, VGs and PVs
    #[allow(non_snake_case)]
    pub fn lvm_remove_all(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_lvm_remove_all(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("lvm_remove_all"));
        }
        Ok(())
    }

    /// scan for LVM physical volumes, volume groups and logical volumes
    #[allow(non_snake_case)]
    pub fn lvm_scan(&self, activate: bool) -> Result<(), Error> {
        let activate = if activate { 1 } else { 0 };
        
        let r = unsafe { guestfs_lvm_scan(self.g, activate) };
        if r == -1 {
            return Err(self.get_error_from_handle("lvm_scan"));
        }
        Ok(())
    }

    /// set LVM device filter
    #[allow(non_snake_case)]
    pub fn lvm_set_filter(&self, devices: &[&str]) -> Result<(), Error> {
        let c_devices_v = arg_string_list(devices)?;
        let mut c_devices = (&c_devices_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_devices.push(ptr::null());
        
        let r = unsafe { guestfs_lvm_set_filter(self.g, (&c_devices).as_ptr() as *const *const c_char) };
        if r == -1 {
            return Err(self.get_error_from_handle("lvm_set_filter"));
        }
        drop(c_devices);
        drop(c_devices_v);
        Ok(())
    }

    /// remove an LVM logical volume
    #[allow(non_snake_case)]
    pub fn lvremove(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_lvremove(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("lvremove"));
        }
        drop(c_device);
        Ok(())
    }

    /// rename an LVM logical volume
    #[allow(non_snake_case)]
    pub fn lvrename(&self, logvol: &str, newlogvol: &str) -> Result<(), Error> {
        let c_logvol = ffi::CString::new(logvol)?;
        let c_newlogvol = ffi::CString::new(newlogvol)?;
        
        let r = unsafe { guestfs_lvrename(self.g, (&c_logvol).as_ptr(), (&c_newlogvol).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("lvrename"));
        }
        drop(c_logvol);
        drop(c_newlogvol);
        Ok(())
    }

    /// resize an LVM logical volume
    #[allow(non_snake_case)]
    pub fn lvresize(&self, device: &str, mbytes: i32) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_lvresize(self.g, (&c_device).as_ptr(), mbytes) };
        if r == -1 {
            return Err(self.get_error_from_handle("lvresize"));
        }
        drop(c_device);
        Ok(())
    }

    /// expand an LV to fill free space
    #[allow(non_snake_case)]
    pub fn lvresize_free(&self, lv: &str, percent: i32) -> Result<(), Error> {
        let c_lv = ffi::CString::new(lv)?;
        
        let r = unsafe { guestfs_lvresize_free(self.g, (&c_lv).as_ptr(), percent) };
        if r == -1 {
            return Err(self.get_error_from_handle("lvresize_free"));
        }
        drop(c_lv);
        Ok(())
    }

    /// list the LVM logical volumes (LVs)
    #[allow(non_snake_case)]
    pub fn lvs(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_lvs(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("lvs"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// list the LVM logical volumes (LVs)
    #[allow(non_snake_case)]
    pub fn lvs_full(&self, ) -> Result<Vec<LV>, Error> {
        
        let r = unsafe { guestfs_lvs_full(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("lvs_full"));
        }
        Ok({
            let l = struct_list::<RawLV, LV>(r);
            unsafe { guestfs_free_lvm_lv_list(r) };
            l?
        })
    }

    /// get the UUID of a logical volume
    #[allow(non_snake_case)]
    pub fn lvuuid(&self, device: &str) -> Result<String, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_lvuuid(self.g, (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("lvuuid"));
        }
        drop(c_device);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// lgetxattr on multiple files
    #[allow(non_snake_case)]
    pub fn lxattrlist(&self, path: &str, names: &[&str]) -> Result<Vec<XAttr>, Error> {
        let c_path = ffi::CString::new(path)?;
        let c_names_v = arg_string_list(names)?;
        let mut c_names = (&c_names_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_names.push(ptr::null());
        
        let r = unsafe { guestfs_lxattrlist(self.g, (&c_path).as_ptr(), (&c_names).as_ptr() as *const *const c_char) };
        if r.is_null() {
            return Err(self.get_error_from_handle("lxattrlist"));
        }
        drop(c_path);
        drop(c_names);
        drop(c_names_v);
        Ok({
            let l = struct_list::<RawXAttr, XAttr>(r);
            unsafe { guestfs_free_xattr_list(r) };
            l?
        })
    }

    /// maximum number of disks that may be added
    #[allow(non_snake_case)]
    pub fn max_disks(&self, ) -> Result<i32, Error> {
        
        let r = unsafe { guestfs_max_disks(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("max_disks"));
        }
        Ok(r)
    }

    /// create a Linux md (RAID) device
    #[allow(non_snake_case)]
    pub fn md_create(&self, name: &str, devices: &[&str], optargs: MdCreateOptArgs) -> Result<(), Error> {
        let c_name = ffi::CString::new(name)?;
        let c_devices_v = arg_string_list(devices)?;
        let mut c_devices = (&c_devices_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_devices.push(ptr::null());
        let optargs_cexpr = CExprMdCreateOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_md_create_argv(self.g, (&c_name).as_ptr(), (&c_devices).as_ptr() as *const *const c_char, &(RawMdCreateOptArgs::from(&optargs_cexpr)) as *const RawMdCreateOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("md_create"));
        }
        drop(c_name);
        drop(c_devices);
        drop(c_devices_v);
        drop(optargs_cexpr);
        Ok(())
    }

    /// obtain metadata for an MD device
    #[allow(non_snake_case)]
    pub fn md_detail(&self, md: &str) -> Result<collections::HashMap<String, String>, Error> {
        let c_md = ffi::CString::new(md)?;
        
        let r = unsafe { guestfs_md_detail(self.g, (&c_md).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("md_detail"));
        }
        drop(c_md);
        Ok({
            let h = hashmap(r);
            free_string_list(r);
            h?
        })
    }

    /// get underlying devices from an MD device
    #[allow(non_snake_case)]
    pub fn md_stat(&self, md: &str) -> Result<Vec<MDStat>, Error> {
        let c_md = ffi::CString::new(md)?;
        
        let r = unsafe { guestfs_md_stat(self.g, (&c_md).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("md_stat"));
        }
        drop(c_md);
        Ok({
            let l = struct_list::<RawMDStat, MDStat>(r);
            unsafe { guestfs_free_mdstat_list(r) };
            l?
        })
    }

    /// stop a Linux md (RAID) device
    #[allow(non_snake_case)]
    pub fn md_stop(&self, md: &str) -> Result<(), Error> {
        let c_md = ffi::CString::new(md)?;
        
        let r = unsafe { guestfs_md_stop(self.g, (&c_md).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("md_stop"));
        }
        drop(c_md);
        Ok(())
    }

    /// create a directory
    #[allow(non_snake_case)]
    pub fn mkdir(&self, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_mkdir(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mkdir"));
        }
        drop(c_path);
        Ok(())
    }

    /// create a directory with a particular mode
    #[allow(non_snake_case)]
    pub fn mkdir_mode(&self, path: &str, mode: i32) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_mkdir_mode(self.g, (&c_path).as_ptr(), mode) };
        if r == -1 {
            return Err(self.get_error_from_handle("mkdir_mode"));
        }
        drop(c_path);
        Ok(())
    }

    /// create a directory and parents
    #[allow(non_snake_case)]
    pub fn mkdir_p(&self, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_mkdir_p(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mkdir_p"));
        }
        drop(c_path);
        Ok(())
    }

    /// create a temporary directory
    #[allow(non_snake_case)]
    pub fn mkdtemp(&self, tmpl: &str) -> Result<String, Error> {
        let c_tmpl = ffi::CString::new(tmpl)?;
        
        let r = unsafe { guestfs_mkdtemp(self.g, (&c_tmpl).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("mkdtemp"));
        }
        drop(c_tmpl);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// create an ext2/ext3/ext4 filesystem on device
    #[allow(non_snake_case)]
    pub fn mke2fs(&self, device: &str, optargs: Mke2fsOptArgs) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let optargs_cexpr = CExprMke2fsOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_mke2fs_argv(self.g, (&c_device).as_ptr(), &(RawMke2fsOptArgs::from(&optargs_cexpr)) as *const RawMke2fsOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("mke2fs"));
        }
        drop(c_device);
        drop(optargs_cexpr);
        Ok(())
    }

    /// make ext2/3/4 filesystem with external journal
    #[allow(non_snake_case)]
    pub fn mke2fs_J(&self, fstype: &str, blocksize: i32, device: &str, journal: &str) -> Result<(), Error> {
        let c_fstype = ffi::CString::new(fstype)?;
        let c_device = ffi::CString::new(device)?;
        let c_journal = ffi::CString::new(journal)?;
        
        let r = unsafe { guestfs_mke2fs_J(self.g, (&c_fstype).as_ptr(), blocksize, (&c_device).as_ptr(), (&c_journal).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mke2fs_J"));
        }
        drop(c_fstype);
        drop(c_device);
        drop(c_journal);
        Ok(())
    }

    /// make ext2/3/4 filesystem with external journal
    #[allow(non_snake_case)]
    pub fn mke2fs_JL(&self, fstype: &str, blocksize: i32, device: &str, label: &str) -> Result<(), Error> {
        let c_fstype = ffi::CString::new(fstype)?;
        let c_device = ffi::CString::new(device)?;
        let c_label = ffi::CString::new(label)?;
        
        let r = unsafe { guestfs_mke2fs_JL(self.g, (&c_fstype).as_ptr(), blocksize, (&c_device).as_ptr(), (&c_label).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mke2fs_JL"));
        }
        drop(c_fstype);
        drop(c_device);
        drop(c_label);
        Ok(())
    }

    /// make ext2/3/4 filesystem with external journal
    #[allow(non_snake_case)]
    pub fn mke2fs_JU(&self, fstype: &str, blocksize: i32, device: &str, uuid: &str) -> Result<(), Error> {
        let c_fstype = ffi::CString::new(fstype)?;
        let c_device = ffi::CString::new(device)?;
        let c_uuid = ffi::CString::new(uuid)?;
        
        let r = unsafe { guestfs_mke2fs_JU(self.g, (&c_fstype).as_ptr(), blocksize, (&c_device).as_ptr(), (&c_uuid).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mke2fs_JU"));
        }
        drop(c_fstype);
        drop(c_device);
        drop(c_uuid);
        Ok(())
    }

    /// make ext2/3/4 external journal
    #[allow(non_snake_case)]
    pub fn mke2journal(&self, blocksize: i32, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_mke2journal(self.g, blocksize, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mke2journal"));
        }
        drop(c_device);
        Ok(())
    }

    /// make ext2/3/4 external journal with label
    #[allow(non_snake_case)]
    pub fn mke2journal_L(&self, blocksize: i32, label: &str, device: &str) -> Result<(), Error> {
        let c_label = ffi::CString::new(label)?;
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_mke2journal_L(self.g, blocksize, (&c_label).as_ptr(), (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mke2journal_L"));
        }
        drop(c_label);
        drop(c_device);
        Ok(())
    }

    /// make ext2/3/4 external journal with UUID
    #[allow(non_snake_case)]
    pub fn mke2journal_U(&self, blocksize: i32, uuid: &str, device: &str) -> Result<(), Error> {
        let c_uuid = ffi::CString::new(uuid)?;
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_mke2journal_U(self.g, blocksize, (&c_uuid).as_ptr(), (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mke2journal_U"));
        }
        drop(c_uuid);
        drop(c_device);
        Ok(())
    }

    /// make FIFO (named pipe)
    #[allow(non_snake_case)]
    pub fn mkfifo(&self, mode: i32, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_mkfifo(self.g, mode, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mkfifo"));
        }
        drop(c_path);
        Ok(())
    }

    /// make a filesystem
    #[allow(non_snake_case)]
    pub fn mkfs(&self, fstype: &str, device: &str, optargs: MkfsOptArgs) -> Result<(), Error> {
        let c_fstype = ffi::CString::new(fstype)?;
        let c_device = ffi::CString::new(device)?;
        let optargs_cexpr = CExprMkfsOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_mkfs_opts_argv(self.g, (&c_fstype).as_ptr(), (&c_device).as_ptr(), &(RawMkfsOptArgs::from(&optargs_cexpr)) as *const RawMkfsOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("mkfs"));
        }
        drop(c_fstype);
        drop(c_device);
        drop(optargs_cexpr);
        Ok(())
    }

    /// make a filesystem with block size
    #[allow(non_snake_case)]
    pub fn mkfs_b(&self, fstype: &str, blocksize: i32, device: &str) -> Result<(), Error> {
        let c_fstype = ffi::CString::new(fstype)?;
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_mkfs_b(self.g, (&c_fstype).as_ptr(), blocksize, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mkfs_b"));
        }
        drop(c_fstype);
        drop(c_device);
        Ok(())
    }

    /// create a btrfs filesystem
    #[allow(non_snake_case)]
    pub fn mkfs_btrfs(&self, devices: &[&str], optargs: MkfsBtrfsOptArgs) -> Result<(), Error> {
        let c_devices_v = arg_string_list(devices)?;
        let mut c_devices = (&c_devices_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_devices.push(ptr::null());
        let optargs_cexpr = CExprMkfsBtrfsOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_mkfs_btrfs_argv(self.g, (&c_devices).as_ptr() as *const *const c_char, &(RawMkfsBtrfsOptArgs::from(&optargs_cexpr)) as *const RawMkfsBtrfsOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("mkfs_btrfs"));
        }
        drop(c_devices);
        drop(c_devices_v);
        drop(optargs_cexpr);
        Ok(())
    }

    /// make lost+found directory on an ext2/3/4 filesystem
    #[allow(non_snake_case)]
    pub fn mklost_and_found(&self, mountpoint: &str) -> Result<(), Error> {
        let c_mountpoint = ffi::CString::new(mountpoint)?;
        
        let r = unsafe { guestfs_mklost_and_found(self.g, (&c_mountpoint).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mklost_and_found"));
        }
        drop(c_mountpoint);
        Ok(())
    }

    /// create a mountpoint
    #[allow(non_snake_case)]
    pub fn mkmountpoint(&self, exemptpath: &str) -> Result<(), Error> {
        let c_exemptpath = ffi::CString::new(exemptpath)?;
        
        let r = unsafe { guestfs_mkmountpoint(self.g, (&c_exemptpath).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mkmountpoint"));
        }
        drop(c_exemptpath);
        Ok(())
    }

    /// make block, character or FIFO devices
    #[allow(non_snake_case)]
    pub fn mknod(&self, mode: i32, devmajor: i32, devminor: i32, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_mknod(self.g, mode, devmajor, devminor, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mknod"));
        }
        drop(c_path);
        Ok(())
    }

    /// make block device node
    #[allow(non_snake_case)]
    pub fn mknod_b(&self, mode: i32, devmajor: i32, devminor: i32, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_mknod_b(self.g, mode, devmajor, devminor, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mknod_b"));
        }
        drop(c_path);
        Ok(())
    }

    /// make char device node
    #[allow(non_snake_case)]
    pub fn mknod_c(&self, mode: i32, devmajor: i32, devminor: i32, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_mknod_c(self.g, mode, devmajor, devminor, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mknod_c"));
        }
        drop(c_path);
        Ok(())
    }

    /// create a squashfs filesystem
    #[allow(non_snake_case)]
    pub fn mksquashfs(&self, path: &str, filename: &str, optargs: MksquashfsOptArgs) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        let c_filename = ffi::CString::new(filename)?;
        let optargs_cexpr = CExprMksquashfsOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_mksquashfs_argv(self.g, (&c_path).as_ptr(), (&c_filename).as_ptr(), &(RawMksquashfsOptArgs::from(&optargs_cexpr)) as *const RawMksquashfsOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("mksquashfs"));
        }
        drop(c_path);
        drop(c_filename);
        drop(optargs_cexpr);
        Ok(())
    }

    /// create a swap partition
    #[allow(non_snake_case)]
    pub fn mkswap(&self, device: &str, optargs: MkswapOptArgs) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let optargs_cexpr = CExprMkswapOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_mkswap_opts_argv(self.g, (&c_device).as_ptr(), &(RawMkswapOptArgs::from(&optargs_cexpr)) as *const RawMkswapOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("mkswap"));
        }
        drop(c_device);
        drop(optargs_cexpr);
        Ok(())
    }

    /// create a swap partition with a label
    #[allow(non_snake_case)]
    pub fn mkswap_L(&self, label: &str, device: &str) -> Result<(), Error> {
        let c_label = ffi::CString::new(label)?;
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_mkswap_L(self.g, (&c_label).as_ptr(), (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mkswap_L"));
        }
        drop(c_label);
        drop(c_device);
        Ok(())
    }

    /// create a swap partition with an explicit UUID
    #[allow(non_snake_case)]
    pub fn mkswap_U(&self, uuid: &str, device: &str) -> Result<(), Error> {
        let c_uuid = ffi::CString::new(uuid)?;
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_mkswap_U(self.g, (&c_uuid).as_ptr(), (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mkswap_U"));
        }
        drop(c_uuid);
        drop(c_device);
        Ok(())
    }

    /// create a swap file
    #[allow(non_snake_case)]
    pub fn mkswap_file(&self, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_mkswap_file(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mkswap_file"));
        }
        drop(c_path);
        Ok(())
    }

    /// create a temporary file
    #[allow(non_snake_case)]
    pub fn mktemp(&self, tmpl: &str, optargs: MktempOptArgs) -> Result<String, Error> {
        let c_tmpl = ffi::CString::new(tmpl)?;
        let optargs_cexpr = CExprMktempOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_mktemp_argv(self.g, (&c_tmpl).as_ptr(), &(RawMktempOptArgs::from(&optargs_cexpr)) as *const RawMktempOptArgs) };
        if r.is_null() {
            return Err(self.get_error_from_handle("mktemp"));
        }
        drop(c_tmpl);
        drop(optargs_cexpr);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// load a kernel module
    #[allow(non_snake_case)]
    pub fn modprobe(&self, modulename: &str) -> Result<(), Error> {
        let c_modulename = ffi::CString::new(modulename)?;
        
        let r = unsafe { guestfs_modprobe(self.g, (&c_modulename).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("modprobe"));
        }
        drop(c_modulename);
        Ok(())
    }

    /// mount a guest disk at a position in the filesystem
    #[allow(non_snake_case)]
    pub fn mount(&self, mountable: &str, mountpoint: &str) -> Result<(), Error> {
        let c_mountable = ffi::CString::new(mountable)?;
        let c_mountpoint = ffi::CString::new(mountpoint)?;
        
        let r = unsafe { guestfs_mount(self.g, (&c_mountable).as_ptr(), (&c_mountpoint).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mount"));
        }
        drop(c_mountable);
        drop(c_mountpoint);
        Ok(())
    }

    /// mount 9p filesystem
    #[allow(non_snake_case)]
    pub fn mount_9p(&self, mounttag: &str, mountpoint: &str, optargs: Mount9pOptArgs) -> Result<(), Error> {
        let c_mounttag = ffi::CString::new(mounttag)?;
        let c_mountpoint = ffi::CString::new(mountpoint)?;
        let optargs_cexpr = CExprMount9pOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_mount_9p_argv(self.g, (&c_mounttag).as_ptr(), (&c_mountpoint).as_ptr(), &(RawMount9pOptArgs::from(&optargs_cexpr)) as *const RawMount9pOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("mount_9p"));
        }
        drop(c_mounttag);
        drop(c_mountpoint);
        drop(optargs_cexpr);
        Ok(())
    }

    /// mount on the local filesystem
    #[allow(non_snake_case)]
    pub fn mount_local(&self, localmountpoint: &str, optargs: MountLocalOptArgs) -> Result<(), Error> {
        let c_localmountpoint = ffi::CString::new(localmountpoint)?;
        let optargs_cexpr = CExprMountLocalOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_mount_local_argv(self.g, (&c_localmountpoint).as_ptr(), &(RawMountLocalOptArgs::from(&optargs_cexpr)) as *const RawMountLocalOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("mount_local"));
        }
        drop(c_localmountpoint);
        drop(optargs_cexpr);
        Ok(())
    }

    /// run main loop of mount on the local filesystem
    #[allow(non_snake_case)]
    pub fn mount_local_run(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_mount_local_run(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("mount_local_run"));
        }
        Ok(())
    }

    /// mount a file using the loop device
    #[allow(non_snake_case)]
    pub fn mount_loop(&self, file: &str, mountpoint: &str) -> Result<(), Error> {
        let c_file = ffi::CString::new(file)?;
        let c_mountpoint = ffi::CString::new(mountpoint)?;
        
        let r = unsafe { guestfs_mount_loop(self.g, (&c_file).as_ptr(), (&c_mountpoint).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mount_loop"));
        }
        drop(c_file);
        drop(c_mountpoint);
        Ok(())
    }

    /// mount a guest disk with mount options
    #[allow(non_snake_case)]
    pub fn mount_options(&self, options: &str, mountable: &str, mountpoint: &str) -> Result<(), Error> {
        let c_options = ffi::CString::new(options)?;
        let c_mountable = ffi::CString::new(mountable)?;
        let c_mountpoint = ffi::CString::new(mountpoint)?;
        
        let r = unsafe { guestfs_mount_options(self.g, (&c_options).as_ptr(), (&c_mountable).as_ptr(), (&c_mountpoint).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mount_options"));
        }
        drop(c_options);
        drop(c_mountable);
        drop(c_mountpoint);
        Ok(())
    }

    /// mount a guest disk, read-only
    #[allow(non_snake_case)]
    pub fn mount_ro(&self, mountable: &str, mountpoint: &str) -> Result<(), Error> {
        let c_mountable = ffi::CString::new(mountable)?;
        let c_mountpoint = ffi::CString::new(mountpoint)?;
        
        let r = unsafe { guestfs_mount_ro(self.g, (&c_mountable).as_ptr(), (&c_mountpoint).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mount_ro"));
        }
        drop(c_mountable);
        drop(c_mountpoint);
        Ok(())
    }

    /// mount a guest disk with mount options and vfstype
    #[allow(non_snake_case)]
    pub fn mount_vfs(&self, options: &str, vfstype: &str, mountable: &str, mountpoint: &str) -> Result<(), Error> {
        let c_options = ffi::CString::new(options)?;
        let c_vfstype = ffi::CString::new(vfstype)?;
        let c_mountable = ffi::CString::new(mountable)?;
        let c_mountpoint = ffi::CString::new(mountpoint)?;
        
        let r = unsafe { guestfs_mount_vfs(self.g, (&c_options).as_ptr(), (&c_vfstype).as_ptr(), (&c_mountable).as_ptr(), (&c_mountpoint).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mount_vfs"));
        }
        drop(c_options);
        drop(c_vfstype);
        drop(c_mountable);
        drop(c_mountpoint);
        Ok(())
    }

    /// extract the device part of a mountable
    #[allow(non_snake_case)]
    pub fn mountable_device(&self, mountable: &str) -> Result<String, Error> {
        let c_mountable = ffi::CString::new(mountable)?;
        
        let r = unsafe { guestfs_mountable_device(self.g, (&c_mountable).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("mountable_device"));
        }
        drop(c_mountable);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// extract the subvolume part of a mountable
    #[allow(non_snake_case)]
    pub fn mountable_subvolume(&self, mountable: &str) -> Result<String, Error> {
        let c_mountable = ffi::CString::new(mountable)?;
        
        let r = unsafe { guestfs_mountable_subvolume(self.g, (&c_mountable).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("mountable_subvolume"));
        }
        drop(c_mountable);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// show mountpoints
    #[allow(non_snake_case)]
    pub fn mountpoints(&self, ) -> Result<collections::HashMap<String, String>, Error> {
        
        let r = unsafe { guestfs_mountpoints(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("mountpoints"));
        }
        Ok({
            let h = hashmap(r);
            free_string_list(r);
            h?
        })
    }

    /// show mounted filesystems
    #[allow(non_snake_case)]
    pub fn mounts(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_mounts(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("mounts"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// move a file
    #[allow(non_snake_case)]
    pub fn mv(&self, src: &str, dest: &str) -> Result<(), Error> {
        let c_src = ffi::CString::new(src)?;
        let c_dest = ffi::CString::new(dest)?;
        
        let r = unsafe { guestfs_mv(self.g, (&c_src).as_ptr(), (&c_dest).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("mv"));
        }
        drop(c_src);
        drop(c_dest);
        Ok(())
    }

    /// return number of whole block devices (disks) added
    #[allow(non_snake_case)]
    pub fn nr_devices(&self, ) -> Result<i32, Error> {
        
        let r = unsafe { guestfs_nr_devices(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("nr_devices"));
        }
        Ok(r)
    }

    /// probe NTFS volume
    #[allow(non_snake_case)]
    pub fn ntfs_3g_probe(&self, rw: bool, device: &str) -> Result<i32, Error> {
        let rw = if rw { 1 } else { 0 };
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_ntfs_3g_probe(self.g, rw, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("ntfs_3g_probe"));
        }
        drop(c_device);
        Ok(r)
    }

    /// download a file to the local machine given its inode
    #[allow(non_snake_case)]
    pub fn ntfscat_i(&self, device: &str, inode: i64, filename: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_filename = ffi::CString::new(filename)?;
        
        let r = unsafe { guestfs_ntfscat_i(self.g, (&c_device).as_ptr(), inode, (&c_filename).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("ntfscat_i"));
        }
        drop(c_device);
        drop(c_filename);
        Ok(())
    }

    /// restore NTFS from backup file
    #[allow(non_snake_case)]
    pub fn ntfsclone_in(&self, backupfile: &str, device: &str) -> Result<(), Error> {
        let c_backupfile = ffi::CString::new(backupfile)?;
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_ntfsclone_in(self.g, (&c_backupfile).as_ptr(), (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("ntfsclone_in"));
        }
        drop(c_backupfile);
        drop(c_device);
        Ok(())
    }

    /// save NTFS to backup file
    #[allow(non_snake_case)]
    pub fn ntfsclone_out(&self, device: &str, backupfile: &str, optargs: NtfscloneOutOptArgs) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_backupfile = ffi::CString::new(backupfile)?;
        let optargs_cexpr = CExprNtfscloneOutOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_ntfsclone_out_argv(self.g, (&c_device).as_ptr(), (&c_backupfile).as_ptr(), &(RawNtfscloneOutOptArgs::from(&optargs_cexpr)) as *const RawNtfscloneOutOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("ntfsclone_out"));
        }
        drop(c_device);
        drop(c_backupfile);
        drop(optargs_cexpr);
        Ok(())
    }

    /// fix common errors and force Windows to check NTFS
    #[allow(non_snake_case)]
    pub fn ntfsfix(&self, device: &str, optargs: NtfsfixOptArgs) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let optargs_cexpr = CExprNtfsfixOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_ntfsfix_argv(self.g, (&c_device).as_ptr(), &(RawNtfsfixOptArgs::from(&optargs_cexpr)) as *const RawNtfsfixOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("ntfsfix"));
        }
        drop(c_device);
        drop(optargs_cexpr);
        Ok(())
    }

    /// resize an NTFS filesystem
    #[allow(non_snake_case)]
    pub fn ntfsresize(&self, device: &str, optargs: NtfsresizeOptArgs) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let optargs_cexpr = CExprNtfsresizeOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_ntfsresize_opts_argv(self.g, (&c_device).as_ptr(), &(RawNtfsresizeOptArgs::from(&optargs_cexpr)) as *const RawNtfsresizeOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("ntfsresize"));
        }
        drop(c_device);
        drop(optargs_cexpr);
        Ok(())
    }

    /// resize an NTFS filesystem (with size)
    #[allow(non_snake_case)]
    pub fn ntfsresize_size(&self, device: &str, size: i64) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_ntfsresize_size(self.g, (&c_device).as_ptr(), size) };
        if r == -1 {
            return Err(self.get_error_from_handle("ntfsresize_size"));
        }
        drop(c_device);
        Ok(())
    }

    /// parse the environment and set handle flags accordingly
    #[allow(non_snake_case)]
    pub fn parse_environment(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_parse_environment(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("parse_environment"));
        }
        Ok(())
    }

    /// parse the environment and set handle flags accordingly
    #[allow(non_snake_case)]
    pub fn parse_environment_list(&self, environment: &[&str]) -> Result<(), Error> {
        let c_environment_v = arg_string_list(environment)?;
        let mut c_environment = (&c_environment_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_environment.push(ptr::null());
        
        let r = unsafe { guestfs_parse_environment_list(self.g, (&c_environment).as_ptr() as *const *const c_char) };
        if r == -1 {
            return Err(self.get_error_from_handle("parse_environment_list"));
        }
        drop(c_environment);
        drop(c_environment_v);
        Ok(())
    }

    /// add a partition to the device
    #[allow(non_snake_case)]
    pub fn part_add(&self, device: &str, prlogex: &str, startsect: i64, endsect: i64) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_prlogex = ffi::CString::new(prlogex)?;
        
        let r = unsafe { guestfs_part_add(self.g, (&c_device).as_ptr(), (&c_prlogex).as_ptr(), startsect, endsect) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_add"));
        }
        drop(c_device);
        drop(c_prlogex);
        Ok(())
    }

    /// delete a partition
    #[allow(non_snake_case)]
    pub fn part_del(&self, device: &str, partnum: i32) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_part_del(self.g, (&c_device).as_ptr(), partnum) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_del"));
        }
        drop(c_device);
        Ok(())
    }

    /// partition whole disk with a single primary partition
    #[allow(non_snake_case)]
    pub fn part_disk(&self, device: &str, parttype: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_parttype = ffi::CString::new(parttype)?;
        
        let r = unsafe { guestfs_part_disk(self.g, (&c_device).as_ptr(), (&c_parttype).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_disk"));
        }
        drop(c_device);
        drop(c_parttype);
        Ok(())
    }

    /// move backup GPT header to the end of the disk
    #[allow(non_snake_case)]
    pub fn part_expand_gpt(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_part_expand_gpt(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_expand_gpt"));
        }
        drop(c_device);
        Ok(())
    }

    /// return true if a partition is bootable
    #[allow(non_snake_case)]
    pub fn part_get_bootable(&self, device: &str, partnum: i32) -> Result<bool, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_part_get_bootable(self.g, (&c_device).as_ptr(), partnum) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_get_bootable"));
        }
        drop(c_device);
        Ok(r != 0)
    }

    /// get the GUID of a GPT-partitioned disk
    #[allow(non_snake_case)]
    pub fn part_get_disk_guid(&self, device: &str) -> Result<String, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_part_get_disk_guid(self.g, (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("part_get_disk_guid"));
        }
        drop(c_device);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get the attribute flags of a GPT partition
    #[allow(non_snake_case)]
    pub fn part_get_gpt_attributes(&self, device: &str, partnum: i32) -> Result<i64, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_part_get_gpt_attributes(self.g, (&c_device).as_ptr(), partnum) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_get_gpt_attributes"));
        }
        drop(c_device);
        Ok(r)
    }

    /// get the GUID of a GPT partition
    #[allow(non_snake_case)]
    pub fn part_get_gpt_guid(&self, device: &str, partnum: i32) -> Result<String, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_part_get_gpt_guid(self.g, (&c_device).as_ptr(), partnum) };
        if r.is_null() {
            return Err(self.get_error_from_handle("part_get_gpt_guid"));
        }
        drop(c_device);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get the type GUID of a GPT partition
    #[allow(non_snake_case)]
    pub fn part_get_gpt_type(&self, device: &str, partnum: i32) -> Result<String, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_part_get_gpt_type(self.g, (&c_device).as_ptr(), partnum) };
        if r.is_null() {
            return Err(self.get_error_from_handle("part_get_gpt_type"));
        }
        drop(c_device);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get the MBR type byte (ID byte) from a partition
    #[allow(non_snake_case)]
    pub fn part_get_mbr_id(&self, device: &str, partnum: i32) -> Result<i32, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_part_get_mbr_id(self.g, (&c_device).as_ptr(), partnum) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_get_mbr_id"));
        }
        drop(c_device);
        Ok(r)
    }

    /// get the MBR partition type
    #[allow(non_snake_case)]
    pub fn part_get_mbr_part_type(&self, device: &str, partnum: i32) -> Result<String, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_part_get_mbr_part_type(self.g, (&c_device).as_ptr(), partnum) };
        if r.is_null() {
            return Err(self.get_error_from_handle("part_get_mbr_part_type"));
        }
        drop(c_device);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get partition name
    #[allow(non_snake_case)]
    pub fn part_get_name(&self, device: &str, partnum: i32) -> Result<String, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_part_get_name(self.g, (&c_device).as_ptr(), partnum) };
        if r.is_null() {
            return Err(self.get_error_from_handle("part_get_name"));
        }
        drop(c_device);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get the partition table type
    #[allow(non_snake_case)]
    pub fn part_get_parttype(&self, device: &str) -> Result<String, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_part_get_parttype(self.g, (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("part_get_parttype"));
        }
        drop(c_device);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// create an empty partition table
    #[allow(non_snake_case)]
    pub fn part_init(&self, device: &str, parttype: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_parttype = ffi::CString::new(parttype)?;
        
        let r = unsafe { guestfs_part_init(self.g, (&c_device).as_ptr(), (&c_parttype).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_init"));
        }
        drop(c_device);
        drop(c_parttype);
        Ok(())
    }

    /// list partitions on a device
    #[allow(non_snake_case)]
    pub fn part_list(&self, device: &str) -> Result<Vec<Partition>, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_part_list(self.g, (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("part_list"));
        }
        drop(c_device);
        Ok({
            let l = struct_list::<RawPartition, Partition>(r);
            unsafe { guestfs_free_partition_list(r) };
            l?
        })
    }

    /// resize a partition
    #[allow(non_snake_case)]
    pub fn part_resize(&self, device: &str, partnum: i32, endsect: i64) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_part_resize(self.g, (&c_device).as_ptr(), partnum, endsect) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_resize"));
        }
        drop(c_device);
        Ok(())
    }

    /// make a partition bootable
    #[allow(non_snake_case)]
    pub fn part_set_bootable(&self, device: &str, partnum: i32, bootable: bool) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let bootable = if bootable { 1 } else { 0 };
        
        let r = unsafe { guestfs_part_set_bootable(self.g, (&c_device).as_ptr(), partnum, bootable) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_set_bootable"));
        }
        drop(c_device);
        Ok(())
    }

    /// set the GUID of a GPT-partitioned disk
    #[allow(non_snake_case)]
    pub fn part_set_disk_guid(&self, device: &str, guid: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_guid = ffi::CString::new(guid)?;
        
        let r = unsafe { guestfs_part_set_disk_guid(self.g, (&c_device).as_ptr(), (&c_guid).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_set_disk_guid"));
        }
        drop(c_device);
        drop(c_guid);
        Ok(())
    }

    /// set the GUID of a GPT-partitioned disk to random value
    #[allow(non_snake_case)]
    pub fn part_set_disk_guid_random(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_part_set_disk_guid_random(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_set_disk_guid_random"));
        }
        drop(c_device);
        Ok(())
    }

    /// set the attribute flags of a GPT partition
    #[allow(non_snake_case)]
    pub fn part_set_gpt_attributes(&self, device: &str, partnum: i32, attributes: i64) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_part_set_gpt_attributes(self.g, (&c_device).as_ptr(), partnum, attributes) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_set_gpt_attributes"));
        }
        drop(c_device);
        Ok(())
    }

    /// set the GUID of a GPT partition
    #[allow(non_snake_case)]
    pub fn part_set_gpt_guid(&self, device: &str, partnum: i32, guid: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_guid = ffi::CString::new(guid)?;
        
        let r = unsafe { guestfs_part_set_gpt_guid(self.g, (&c_device).as_ptr(), partnum, (&c_guid).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_set_gpt_guid"));
        }
        drop(c_device);
        drop(c_guid);
        Ok(())
    }

    /// set the type GUID of a GPT partition
    #[allow(non_snake_case)]
    pub fn part_set_gpt_type(&self, device: &str, partnum: i32, guid: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_guid = ffi::CString::new(guid)?;
        
        let r = unsafe { guestfs_part_set_gpt_type(self.g, (&c_device).as_ptr(), partnum, (&c_guid).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_set_gpt_type"));
        }
        drop(c_device);
        drop(c_guid);
        Ok(())
    }

    /// set the MBR type byte (ID byte) of a partition
    #[allow(non_snake_case)]
    pub fn part_set_mbr_id(&self, device: &str, partnum: i32, idbyte: i32) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_part_set_mbr_id(self.g, (&c_device).as_ptr(), partnum, idbyte) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_set_mbr_id"));
        }
        drop(c_device);
        Ok(())
    }

    /// set partition name
    #[allow(non_snake_case)]
    pub fn part_set_name(&self, device: &str, partnum: i32, name: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_name = ffi::CString::new(name)?;
        
        let r = unsafe { guestfs_part_set_name(self.g, (&c_device).as_ptr(), partnum, (&c_name).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_set_name"));
        }
        drop(c_device);
        drop(c_name);
        Ok(())
    }

    /// convert partition name to device name
    #[allow(non_snake_case)]
    pub fn part_to_dev(&self, partition: &str) -> Result<String, Error> {
        let c_partition = ffi::CString::new(partition)?;
        
        let r = unsafe { guestfs_part_to_dev(self.g, (&c_partition).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("part_to_dev"));
        }
        drop(c_partition);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// convert partition name to partition number
    #[allow(non_snake_case)]
    pub fn part_to_partnum(&self, partition: &str) -> Result<i32, Error> {
        let c_partition = ffi::CString::new(partition)?;
        
        let r = unsafe { guestfs_part_to_partnum(self.g, (&c_partition).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("part_to_partnum"));
        }
        drop(c_partition);
        Ok(r)
    }

    /// ping the guest daemon
    #[allow(non_snake_case)]
    pub fn ping_daemon(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_ping_daemon(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("ping_daemon"));
        }
        Ok(())
    }

    /// read part of a file
    #[allow(non_snake_case)]
    pub fn pread(&self, path: &str, count: i32, offset: i64) -> Result<Vec<u8>, Error> {
        let c_path = ffi::CString::new(path)?;
        let mut size = 0usize;
        
        let r = unsafe { guestfs_pread(self.g, (&c_path).as_ptr(), count, offset, &mut size as *mut usize) };
        if r.is_null() {
            return Err(self.get_error_from_handle("pread"));
        }
        drop(c_path);
        Ok({
            let s = unsafe { slice::from_raw_parts(r, size) }.to_vec();
            unsafe { free(r as *const c_void) } ;
            s
        })
    }

    /// read part of a device
    #[allow(non_snake_case)]
    pub fn pread_device(&self, device: &str, count: i32, offset: i64) -> Result<Vec<u8>, Error> {
        let c_device = ffi::CString::new(device)?;
        let mut size = 0usize;
        
        let r = unsafe { guestfs_pread_device(self.g, (&c_device).as_ptr(), count, offset, &mut size as *mut usize) };
        if r.is_null() {
            return Err(self.get_error_from_handle("pread_device"));
        }
        drop(c_device);
        Ok({
            let s = unsafe { slice::from_raw_parts(r, size) }.to_vec();
            unsafe { free(r as *const c_void) } ;
            s
        })
    }

    /// generate a new random UUID for a physical volume
    #[allow(non_snake_case)]
    pub fn pvchange_uuid(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_pvchange_uuid(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("pvchange_uuid"));
        }
        drop(c_device);
        Ok(())
    }

    /// generate new random UUIDs for all physical volumes
    #[allow(non_snake_case)]
    pub fn pvchange_uuid_all(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_pvchange_uuid_all(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("pvchange_uuid_all"));
        }
        Ok(())
    }

    /// create an LVM physical volume
    #[allow(non_snake_case)]
    pub fn pvcreate(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_pvcreate(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("pvcreate"));
        }
        drop(c_device);
        Ok(())
    }

    /// remove an LVM physical volume
    #[allow(non_snake_case)]
    pub fn pvremove(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_pvremove(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("pvremove"));
        }
        drop(c_device);
        Ok(())
    }

    /// resize an LVM physical volume
    #[allow(non_snake_case)]
    pub fn pvresize(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_pvresize(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("pvresize"));
        }
        drop(c_device);
        Ok(())
    }

    /// resize an LVM physical volume (with size)
    #[allow(non_snake_case)]
    pub fn pvresize_size(&self, device: &str, size: i64) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_pvresize_size(self.g, (&c_device).as_ptr(), size) };
        if r == -1 {
            return Err(self.get_error_from_handle("pvresize_size"));
        }
        drop(c_device);
        Ok(())
    }

    /// list the LVM physical volumes (PVs)
    #[allow(non_snake_case)]
    pub fn pvs(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_pvs(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("pvs"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// list the LVM physical volumes (PVs)
    #[allow(non_snake_case)]
    pub fn pvs_full(&self, ) -> Result<Vec<PV>, Error> {
        
        let r = unsafe { guestfs_pvs_full(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("pvs_full"));
        }
        Ok({
            let l = struct_list::<RawPV, PV>(r);
            unsafe { guestfs_free_lvm_pv_list(r) };
            l?
        })
    }

    /// get the UUID of a physical volume
    #[allow(non_snake_case)]
    pub fn pvuuid(&self, device: &str) -> Result<String, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_pvuuid(self.g, (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("pvuuid"));
        }
        drop(c_device);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// write to part of a file
    #[allow(non_snake_case)]
    pub fn pwrite(&self, path: &str, content: &[u8], offset: i64) -> Result<i32, Error> {
        let c_path = ffi::CString::new(path)?;
        let c_content_len = content.len();
        let c_content = unsafe { ffi::CString::from_vec_unchecked(content.to_vec())};
        
        let r = unsafe { guestfs_pwrite(self.g, (&c_path).as_ptr(), (&c_content).as_ptr(), c_content_len, offset) };
        if r == -1 {
            return Err(self.get_error_from_handle("pwrite"));
        }
        drop(c_path);
        drop(c_content);
        Ok(r)
    }

    /// write to part of a device
    #[allow(non_snake_case)]
    pub fn pwrite_device(&self, device: &str, content: &[u8], offset: i64) -> Result<i32, Error> {
        let c_device = ffi::CString::new(device)?;
        let c_content_len = content.len();
        let c_content = unsafe { ffi::CString::from_vec_unchecked(content.to_vec())};
        
        let r = unsafe { guestfs_pwrite_device(self.g, (&c_device).as_ptr(), (&c_content).as_ptr(), c_content_len, offset) };
        if r == -1 {
            return Err(self.get_error_from_handle("pwrite_device"));
        }
        drop(c_device);
        drop(c_content);
        Ok(r)
    }

    /// read a file
    #[allow(non_snake_case)]
    pub fn read_file(&self, path: &str) -> Result<Vec<u8>, Error> {
        let c_path = ffi::CString::new(path)?;
        let mut size = 0usize;
        
        let r = unsafe { guestfs_read_file(self.g, (&c_path).as_ptr(), &mut size as *mut usize) };
        if r.is_null() {
            return Err(self.get_error_from_handle("read_file"));
        }
        drop(c_path);
        Ok({
            let s = unsafe { slice::from_raw_parts(r, size) }.to_vec();
            unsafe { free(r as *const c_void) } ;
            s
        })
    }

    /// read file as lines
    #[allow(non_snake_case)]
    pub fn read_lines(&self, path: &str) -> Result<Vec<String>, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_read_lines(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("read_lines"));
        }
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// read directories entries
    #[allow(non_snake_case)]
    pub fn readdir(&self, dir: &str) -> Result<Vec<Dirent>, Error> {
        let c_dir = ffi::CString::new(dir)?;
        
        let r = unsafe { guestfs_readdir(self.g, (&c_dir).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("readdir"));
        }
        drop(c_dir);
        Ok({
            let l = struct_list::<RawDirent, Dirent>(r);
            unsafe { guestfs_free_dirent_list(r) };
            l?
        })
    }

    /// read the target of a symbolic link
    #[allow(non_snake_case)]
    pub fn readlink(&self, path: &str) -> Result<String, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_readlink(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("readlink"));
        }
        drop(c_path);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// readlink on multiple files
    #[allow(non_snake_case)]
    pub fn readlinklist(&self, path: &str, names: &[&str]) -> Result<Vec<String>, Error> {
        let c_path = ffi::CString::new(path)?;
        let c_names_v = arg_string_list(names)?;
        let mut c_names = (&c_names_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_names.push(ptr::null());
        
        let r = unsafe { guestfs_readlinklist(self.g, (&c_path).as_ptr(), (&c_names).as_ptr() as *const *const c_char) };
        if r.is_null() {
            return Err(self.get_error_from_handle("readlinklist"));
        }
        drop(c_path);
        drop(c_names);
        drop(c_names_v);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// canonicalized absolute pathname
    #[allow(non_snake_case)]
    pub fn realpath(&self, path: &str) -> Result<String, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_realpath(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("realpath"));
        }
        drop(c_path);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// remount a filesystem with different options
    #[allow(non_snake_case)]
    pub fn remount(&self, mountpoint: &str, optargs: RemountOptArgs) -> Result<(), Error> {
        let c_mountpoint = ffi::CString::new(mountpoint)?;
        let optargs_cexpr = CExprRemountOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_remount_argv(self.g, (&c_mountpoint).as_ptr(), &(RawRemountOptArgs::from(&optargs_cexpr)) as *const RawRemountOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("remount"));
        }
        drop(c_mountpoint);
        drop(optargs_cexpr);
        Ok(())
    }

    /// remove a disk image
    #[allow(non_snake_case)]
    pub fn remove_drive(&self, label: &str) -> Result<(), Error> {
        let c_label = ffi::CString::new(label)?;
        
        let r = unsafe { guestfs_remove_drive(self.g, (&c_label).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("remove_drive"));
        }
        drop(c_label);
        Ok(())
    }

    /// remove extended attribute of a file or directory
    #[allow(non_snake_case)]
    pub fn removexattr(&self, xattr: &str, path: &str) -> Result<(), Error> {
        let c_xattr = ffi::CString::new(xattr)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_removexattr(self.g, (&c_xattr).as_ptr(), (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("removexattr"));
        }
        drop(c_xattr);
        drop(c_path);
        Ok(())
    }

    /// rename a file on the same filesystem
    #[allow(non_snake_case)]
    pub fn rename(&self, oldpath: &str, newpath: &str) -> Result<(), Error> {
        let c_oldpath = ffi::CString::new(oldpath)?;
        let c_newpath = ffi::CString::new(newpath)?;
        
        let r = unsafe { guestfs_rename(self.g, (&c_oldpath).as_ptr(), (&c_newpath).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("rename"));
        }
        drop(c_oldpath);
        drop(c_newpath);
        Ok(())
    }

    /// resize an ext2, ext3 or ext4 filesystem
    #[allow(non_snake_case)]
    pub fn resize2fs(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_resize2fs(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("resize2fs"));
        }
        drop(c_device);
        Ok(())
    }

    /// resize an ext2, ext3 or ext4 filesystem to the minimum size
    #[allow(non_snake_case)]
    pub fn resize2fs_M(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_resize2fs_M(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("resize2fs_M"));
        }
        drop(c_device);
        Ok(())
    }

    /// resize an ext2, ext3 or ext4 filesystem (with size)
    #[allow(non_snake_case)]
    pub fn resize2fs_size(&self, device: &str, size: i64) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_resize2fs_size(self.g, (&c_device).as_ptr(), size) };
        if r == -1 {
            return Err(self.get_error_from_handle("resize2fs_size"));
        }
        drop(c_device);
        Ok(())
    }

    /// remove a file
    #[allow(non_snake_case)]
    pub fn rm(&self, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_rm(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("rm"));
        }
        drop(c_path);
        Ok(())
    }

    /// remove a file ignoring errors
    #[allow(non_snake_case)]
    pub fn rm_f(&self, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_rm_f(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("rm_f"));
        }
        drop(c_path);
        Ok(())
    }

    /// remove a file or directory recursively
    #[allow(non_snake_case)]
    pub fn rm_rf(&self, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_rm_rf(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("rm_rf"));
        }
        drop(c_path);
        Ok(())
    }

    /// remove a directory
    #[allow(non_snake_case)]
    pub fn rmdir(&self, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_rmdir(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("rmdir"));
        }
        drop(c_path);
        Ok(())
    }

    /// remove a mountpoint
    #[allow(non_snake_case)]
    pub fn rmmountpoint(&self, exemptpath: &str) -> Result<(), Error> {
        let c_exemptpath = ffi::CString::new(exemptpath)?;
        
        let r = unsafe { guestfs_rmmountpoint(self.g, (&c_exemptpath).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("rmmountpoint"));
        }
        drop(c_exemptpath);
        Ok(())
    }

    /// synchronize the contents of two directories
    #[allow(non_snake_case)]
    pub fn rsync(&self, src: &str, dest: &str, optargs: RsyncOptArgs) -> Result<(), Error> {
        let c_src = ffi::CString::new(src)?;
        let c_dest = ffi::CString::new(dest)?;
        let optargs_cexpr = CExprRsyncOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_rsync_argv(self.g, (&c_src).as_ptr(), (&c_dest).as_ptr(), &(RawRsyncOptArgs::from(&optargs_cexpr)) as *const RawRsyncOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("rsync"));
        }
        drop(c_src);
        drop(c_dest);
        drop(optargs_cexpr);
        Ok(())
    }

    /// synchronize host or remote filesystem with filesystem
    #[allow(non_snake_case)]
    pub fn rsync_in(&self, remote: &str, dest: &str, optargs: RsyncInOptArgs) -> Result<(), Error> {
        let c_remote = ffi::CString::new(remote)?;
        let c_dest = ffi::CString::new(dest)?;
        let optargs_cexpr = CExprRsyncInOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_rsync_in_argv(self.g, (&c_remote).as_ptr(), (&c_dest).as_ptr(), &(RawRsyncInOptArgs::from(&optargs_cexpr)) as *const RawRsyncInOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("rsync_in"));
        }
        drop(c_remote);
        drop(c_dest);
        drop(optargs_cexpr);
        Ok(())
    }

    /// synchronize filesystem with host or remote filesystem
    #[allow(non_snake_case)]
    pub fn rsync_out(&self, src: &str, remote: &str, optargs: RsyncOutOptArgs) -> Result<(), Error> {
        let c_src = ffi::CString::new(src)?;
        let c_remote = ffi::CString::new(remote)?;
        let optargs_cexpr = CExprRsyncOutOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_rsync_out_argv(self.g, (&c_src).as_ptr(), (&c_remote).as_ptr(), &(RawRsyncOutOptArgs::from(&optargs_cexpr)) as *const RawRsyncOutOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("rsync_out"));
        }
        drop(c_src);
        drop(c_remote);
        drop(optargs_cexpr);
        Ok(())
    }

    /// scrub (securely wipe) a device
    #[allow(non_snake_case)]
    pub fn scrub_device(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_scrub_device(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("scrub_device"));
        }
        drop(c_device);
        Ok(())
    }

    /// scrub (securely wipe) a file
    #[allow(non_snake_case)]
    pub fn scrub_file(&self, file: &str) -> Result<(), Error> {
        let c_file = ffi::CString::new(file)?;
        
        let r = unsafe { guestfs_scrub_file(self.g, (&c_file).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("scrub_file"));
        }
        drop(c_file);
        Ok(())
    }

    /// scrub (securely wipe) free space
    #[allow(non_snake_case)]
    pub fn scrub_freespace(&self, dir: &str) -> Result<(), Error> {
        let c_dir = ffi::CString::new(dir)?;
        
        let r = unsafe { guestfs_scrub_freespace(self.g, (&c_dir).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("scrub_freespace"));
        }
        drop(c_dir);
        Ok(())
    }

    /// relabel parts of the filesystem
    #[allow(non_snake_case)]
    pub fn selinux_relabel(&self, specfile: &str, path: &str, optargs: SelinuxRelabelOptArgs) -> Result<(), Error> {
        let c_specfile = ffi::CString::new(specfile)?;
        let c_path = ffi::CString::new(path)?;
        let optargs_cexpr = CExprSelinuxRelabelOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_selinux_relabel_argv(self.g, (&c_specfile).as_ptr(), (&c_path).as_ptr(), &(RawSelinuxRelabelOptArgs::from(&optargs_cexpr)) as *const RawSelinuxRelabelOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("selinux_relabel"));
        }
        drop(c_specfile);
        drop(c_path);
        drop(optargs_cexpr);
        Ok(())
    }

    /// add options to kernel command line
    #[allow(non_snake_case)]
    pub fn set_append(&self, append: Option<&str>) -> Result<(), Error> {
        let c_append = append.map(|s| ffi::CString::new(s)).transpose()?;
        
        let r = unsafe { guestfs_set_append(self.g, match &c_append { Some(ref s) => s.as_ptr(), None => ptr::null() }
) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_append"));
        }
        drop(c_append);
        Ok(())
    }

    /// set the backend
    #[allow(non_snake_case)]
    pub fn set_attach_method(&self, backend: &str) -> Result<(), Error> {
        let c_backend = ffi::CString::new(backend)?;
        
        let r = unsafe { guestfs_set_attach_method(self.g, (&c_backend).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_attach_method"));
        }
        drop(c_backend);
        Ok(())
    }

    /// set autosync mode
    #[allow(non_snake_case)]
    pub fn set_autosync(&self, autosync: bool) -> Result<(), Error> {
        let autosync = if autosync { 1 } else { 0 };
        
        let r = unsafe { guestfs_set_autosync(self.g, autosync) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_autosync"));
        }
        Ok(())
    }

    /// set the backend
    #[allow(non_snake_case)]
    pub fn set_backend(&self, backend: &str) -> Result<(), Error> {
        let c_backend = ffi::CString::new(backend)?;
        
        let r = unsafe { guestfs_set_backend(self.g, (&c_backend).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_backend"));
        }
        drop(c_backend);
        Ok(())
    }

    /// set a single per-backend settings string
    #[allow(non_snake_case)]
    pub fn set_backend_setting(&self, name: &str, val: &str) -> Result<(), Error> {
        let c_name = ffi::CString::new(name)?;
        let c_val = ffi::CString::new(val)?;
        
        let r = unsafe { guestfs_set_backend_setting(self.g, (&c_name).as_ptr(), (&c_val).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_backend_setting"));
        }
        drop(c_name);
        drop(c_val);
        Ok(())
    }

    /// replace per-backend settings strings
    #[allow(non_snake_case)]
    pub fn set_backend_settings(&self, settings: &[&str]) -> Result<(), Error> {
        let c_settings_v = arg_string_list(settings)?;
        let mut c_settings = (&c_settings_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_settings.push(ptr::null());
        
        let r = unsafe { guestfs_set_backend_settings(self.g, (&c_settings).as_ptr() as *const *const c_char) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_backend_settings"));
        }
        drop(c_settings);
        drop(c_settings_v);
        Ok(())
    }

    /// set the appliance cache directory
    #[allow(non_snake_case)]
    pub fn set_cachedir(&self, cachedir: Option<&str>) -> Result<(), Error> {
        let c_cachedir = cachedir.map(|s| ffi::CString::new(s)).transpose()?;
        
        let r = unsafe { guestfs_set_cachedir(self.g, match &c_cachedir { Some(ref s) => s.as_ptr(), None => ptr::null() }
) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_cachedir"));
        }
        drop(c_cachedir);
        Ok(())
    }

    /// enable or disable direct appliance mode
    #[allow(non_snake_case)]
    pub fn set_direct(&self, direct: bool) -> Result<(), Error> {
        let direct = if direct { 1 } else { 0 };
        
        let r = unsafe { guestfs_set_direct(self.g, direct) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_direct"));
        }
        Ok(())
    }

    /// set ext2 file attributes of a file
    #[allow(non_snake_case)]
    pub fn set_e2attrs(&self, file: &str, attrs: &str, optargs: SetE2attrsOptArgs) -> Result<(), Error> {
        let c_file = ffi::CString::new(file)?;
        let c_attrs = ffi::CString::new(attrs)?;
        let optargs_cexpr = CExprSetE2attrsOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_set_e2attrs_argv(self.g, (&c_file).as_ptr(), (&c_attrs).as_ptr(), &(RawSetE2attrsOptArgs::from(&optargs_cexpr)) as *const RawSetE2attrsOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_e2attrs"));
        }
        drop(c_file);
        drop(c_attrs);
        drop(optargs_cexpr);
        Ok(())
    }

    /// set ext2 file generation of a file
    #[allow(non_snake_case)]
    pub fn set_e2generation(&self, file: &str, generation: i64) -> Result<(), Error> {
        let c_file = ffi::CString::new(file)?;
        
        let r = unsafe { guestfs_set_e2generation(self.g, (&c_file).as_ptr(), generation) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_e2generation"));
        }
        drop(c_file);
        Ok(())
    }

    /// set the ext2/3/4 filesystem label
    #[allow(non_snake_case)]
    pub fn set_e2label(&self, device: &str, label: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_label = ffi::CString::new(label)?;
        
        let r = unsafe { guestfs_set_e2label(self.g, (&c_device).as_ptr(), (&c_label).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_e2label"));
        }
        drop(c_device);
        drop(c_label);
        Ok(())
    }

    /// set the ext2/3/4 filesystem UUID
    #[allow(non_snake_case)]
    pub fn set_e2uuid(&self, device: &str, uuid: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_uuid = ffi::CString::new(uuid)?;
        
        let r = unsafe { guestfs_set_e2uuid(self.g, (&c_device).as_ptr(), (&c_uuid).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_e2uuid"));
        }
        drop(c_device);
        drop(c_uuid);
        Ok(())
    }

    /// set the hypervisor binary
    #[allow(non_snake_case)]
    pub fn set_hv(&self, hv: &str) -> Result<(), Error> {
        let c_hv = ffi::CString::new(hv)?;
        
        let r = unsafe { guestfs_set_hv(self.g, (&c_hv).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_hv"));
        }
        drop(c_hv);
        Ok(())
    }

    /// set the handle identifier
    #[allow(non_snake_case)]
    pub fn set_identifier(&self, identifier: &str) -> Result<(), Error> {
        let c_identifier = ffi::CString::new(identifier)?;
        
        let r = unsafe { guestfs_set_identifier(self.g, (&c_identifier).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_identifier"));
        }
        drop(c_identifier);
        Ok(())
    }

    /// set filesystem label
    #[allow(non_snake_case)]
    pub fn set_label(&self, mountable: &str, label: &str) -> Result<(), Error> {
        let c_mountable = ffi::CString::new(mountable)?;
        let c_label = ffi::CString::new(label)?;
        
        let r = unsafe { guestfs_set_label(self.g, (&c_mountable).as_ptr(), (&c_label).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_label"));
        }
        drop(c_mountable);
        drop(c_label);
        Ok(())
    }

    /// pass requested credential back to libvirt
    #[allow(non_snake_case)]
    pub fn set_libvirt_requested_credential(&self, index: i32, cred: &[u8]) -> Result<(), Error> {
        let c_cred_len = cred.len();
        let c_cred = unsafe { ffi::CString::from_vec_unchecked(cred.to_vec())};
        
        let r = unsafe { guestfs_set_libvirt_requested_credential(self.g, index, (&c_cred).as_ptr(), c_cred_len) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_libvirt_requested_credential"));
        }
        drop(c_cred);
        Ok(())
    }

    /// set libvirt credentials supported by calling program
    #[allow(non_snake_case)]
    pub fn set_libvirt_supported_credentials(&self, creds: &[&str]) -> Result<(), Error> {
        let c_creds_v = arg_string_list(creds)?;
        let mut c_creds = (&c_creds_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_creds.push(ptr::null());
        
        let r = unsafe { guestfs_set_libvirt_supported_credentials(self.g, (&c_creds).as_ptr() as *const *const c_char) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_libvirt_supported_credentials"));
        }
        drop(c_creds);
        drop(c_creds_v);
        Ok(())
    }

    /// set memory allocated to the hypervisor
    #[allow(non_snake_case)]
    pub fn set_memsize(&self, memsize: i32) -> Result<(), Error> {
        
        let r = unsafe { guestfs_set_memsize(self.g, memsize) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_memsize"));
        }
        Ok(())
    }

    /// set enable network flag
    #[allow(non_snake_case)]
    pub fn set_network(&self, network: bool) -> Result<(), Error> {
        let network = if network { 1 } else { 0 };
        
        let r = unsafe { guestfs_set_network(self.g, network) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_network"));
        }
        Ok(())
    }

    /// set the search path
    #[allow(non_snake_case)]
    pub fn set_path(&self, searchpath: Option<&str>) -> Result<(), Error> {
        let c_searchpath = searchpath.map(|s| ffi::CString::new(s)).transpose()?;
        
        let r = unsafe { guestfs_set_path(self.g, match &c_searchpath { Some(ref s) => s.as_ptr(), None => ptr::null() }
) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_path"));
        }
        drop(c_searchpath);
        Ok(())
    }

    /// set process group flag
    #[allow(non_snake_case)]
    pub fn set_pgroup(&self, pgroup: bool) -> Result<(), Error> {
        let pgroup = if pgroup { 1 } else { 0 };
        
        let r = unsafe { guestfs_set_pgroup(self.g, pgroup) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_pgroup"));
        }
        Ok(())
    }

    /// set the program name
    #[allow(non_snake_case)]
    pub fn set_program(&self, program: &str) -> Result<(), Error> {
        let c_program = ffi::CString::new(program)?;
        
        let r = unsafe { guestfs_set_program(self.g, (&c_program).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_program"));
        }
        drop(c_program);
        Ok(())
    }

    /// set the hypervisor binary (usually qemu)
    #[allow(non_snake_case)]
    pub fn set_qemu(&self, hv: Option<&str>) -> Result<(), Error> {
        let c_hv = hv.map(|s| ffi::CString::new(s)).transpose()?;
        
        let r = unsafe { guestfs_set_qemu(self.g, match &c_hv { Some(ref s) => s.as_ptr(), None => ptr::null() }
) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_qemu"));
        }
        drop(c_hv);
        Ok(())
    }

    /// enable or disable the recovery process
    #[allow(non_snake_case)]
    pub fn set_recovery_proc(&self, recoveryproc: bool) -> Result<(), Error> {
        let recoveryproc = if recoveryproc { 1 } else { 0 };
        
        let r = unsafe { guestfs_set_recovery_proc(self.g, recoveryproc) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_recovery_proc"));
        }
        Ok(())
    }

    /// set SELinux enabled or disabled at appliance boot
    #[allow(non_snake_case)]
    pub fn set_selinux(&self, selinux: bool) -> Result<(), Error> {
        let selinux = if selinux { 1 } else { 0 };
        
        let r = unsafe { guestfs_set_selinux(self.g, selinux) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_selinux"));
        }
        Ok(())
    }

    /// set number of virtual CPUs in appliance
    #[allow(non_snake_case)]
    pub fn set_smp(&self, smp: i32) -> Result<(), Error> {
        
        let r = unsafe { guestfs_set_smp(self.g, smp) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_smp"));
        }
        Ok(())
    }

    /// set the temporary directory
    #[allow(non_snake_case)]
    pub fn set_tmpdir(&self, tmpdir: Option<&str>) -> Result<(), Error> {
        let c_tmpdir = tmpdir.map(|s| ffi::CString::new(s)).transpose()?;
        
        let r = unsafe { guestfs_set_tmpdir(self.g, match &c_tmpdir { Some(ref s) => s.as_ptr(), None => ptr::null() }
) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_tmpdir"));
        }
        drop(c_tmpdir);
        Ok(())
    }

    /// enable or disable command traces
    #[allow(non_snake_case)]
    pub fn set_trace(&self, trace: bool) -> Result<(), Error> {
        let trace = if trace { 1 } else { 0 };
        
        let r = unsafe { guestfs_set_trace(self.g, trace) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_trace"));
        }
        Ok(())
    }

    /// set the filesystem UUID
    #[allow(non_snake_case)]
    pub fn set_uuid(&self, device: &str, uuid: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_uuid = ffi::CString::new(uuid)?;
        
        let r = unsafe { guestfs_set_uuid(self.g, (&c_device).as_ptr(), (&c_uuid).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_uuid"));
        }
        drop(c_device);
        drop(c_uuid);
        Ok(())
    }

    /// set a random UUID for the filesystem
    #[allow(non_snake_case)]
    pub fn set_uuid_random(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_set_uuid_random(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_uuid_random"));
        }
        drop(c_device);
        Ok(())
    }

    /// set verbose mode
    #[allow(non_snake_case)]
    pub fn set_verbose(&self, verbose: bool) -> Result<(), Error> {
        let verbose = if verbose { 1 } else { 0 };
        
        let r = unsafe { guestfs_set_verbose(self.g, verbose) };
        if r == -1 {
            return Err(self.get_error_from_handle("set_verbose"));
        }
        Ok(())
    }

    /// set SELinux security context
    #[allow(non_snake_case)]
    pub fn setcon(&self, context: &str) -> Result<(), Error> {
        let c_context = ffi::CString::new(context)?;
        
        let r = unsafe { guestfs_setcon(self.g, (&c_context).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("setcon"));
        }
        drop(c_context);
        Ok(())
    }

    /// set extended attribute of a file or directory
    #[allow(non_snake_case)]
    pub fn setxattr(&self, xattr: &str, val: &str, vallen: i32, path: &str) -> Result<(), Error> {
        let c_xattr = ffi::CString::new(xattr)?;
        let c_val = ffi::CString::new(val)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_setxattr(self.g, (&c_xattr).as_ptr(), (&c_val).as_ptr(), vallen, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("setxattr"));
        }
        drop(c_xattr);
        drop(c_val);
        drop(c_path);
        Ok(())
    }

    /// create partitions on a block device
    #[allow(non_snake_case)]
    pub fn sfdisk(&self, device: &str, cyls: i32, heads: i32, sectors: i32, lines: &[&str]) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_lines_v = arg_string_list(lines)?;
        let mut c_lines = (&c_lines_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_lines.push(ptr::null());
        
        let r = unsafe { guestfs_sfdisk(self.g, (&c_device).as_ptr(), cyls, heads, sectors, (&c_lines).as_ptr() as *const *const c_char) };
        if r == -1 {
            return Err(self.get_error_from_handle("sfdisk"));
        }
        drop(c_device);
        drop(c_lines);
        drop(c_lines_v);
        Ok(())
    }

    /// create partitions on a block device
    #[allow(non_snake_case)]
    pub fn sfdiskM(&self, device: &str, lines: &[&str]) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_lines_v = arg_string_list(lines)?;
        let mut c_lines = (&c_lines_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_lines.push(ptr::null());
        
        let r = unsafe { guestfs_sfdiskM(self.g, (&c_device).as_ptr(), (&c_lines).as_ptr() as *const *const c_char) };
        if r == -1 {
            return Err(self.get_error_from_handle("sfdiskM"));
        }
        drop(c_device);
        drop(c_lines);
        drop(c_lines_v);
        Ok(())
    }

    /// modify a single partition on a block device
    #[allow(non_snake_case)]
    pub fn sfdisk_N(&self, device: &str, partnum: i32, cyls: i32, heads: i32, sectors: i32, line: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let c_line = ffi::CString::new(line)?;
        
        let r = unsafe { guestfs_sfdisk_N(self.g, (&c_device).as_ptr(), partnum, cyls, heads, sectors, (&c_line).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("sfdisk_N"));
        }
        drop(c_device);
        drop(c_line);
        Ok(())
    }

    /// display the disk geometry from the partition table
    #[allow(non_snake_case)]
    pub fn sfdisk_disk_geometry(&self, device: &str) -> Result<String, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_sfdisk_disk_geometry(self.g, (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("sfdisk_disk_geometry"));
        }
        drop(c_device);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// display the kernel geometry
    #[allow(non_snake_case)]
    pub fn sfdisk_kernel_geometry(&self, device: &str) -> Result<String, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_sfdisk_kernel_geometry(self.g, (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("sfdisk_kernel_geometry"));
        }
        drop(c_device);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// display the partition table
    #[allow(non_snake_case)]
    pub fn sfdisk_l(&self, device: &str) -> Result<String, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_sfdisk_l(self.g, (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("sfdisk_l"));
        }
        drop(c_device);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// run a command via the shell
    #[allow(non_snake_case)]
    pub fn sh(&self, command: &str) -> Result<String, Error> {
        let c_command = ffi::CString::new(command)?;
        
        let r = unsafe { guestfs_sh(self.g, (&c_command).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("sh"));
        }
        drop(c_command);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// run a command via the shell returning lines
    #[allow(non_snake_case)]
    pub fn sh_lines(&self, command: &str) -> Result<Vec<String>, Error> {
        let c_command = ffi::CString::new(command)?;
        
        let r = unsafe { guestfs_sh_lines(self.g, (&c_command).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("sh_lines"));
        }
        drop(c_command);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// shutdown the hypervisor
    #[allow(non_snake_case)]
    pub fn shutdown(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_shutdown(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("shutdown"));
        }
        Ok(())
    }

    /// sleep for some seconds
    #[allow(non_snake_case)]
    pub fn sleep(&self, secs: i32) -> Result<(), Error> {
        
        let r = unsafe { guestfs_sleep(self.g, secs) };
        if r == -1 {
            return Err(self.get_error_from_handle("sleep"));
        }
        Ok(())
    }

    /// get file information
    #[allow(non_snake_case)]
    pub fn stat(&self, path: &str) -> Result<Stat, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_stat(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("stat"));
        }
        drop(c_path);
        Ok({
            let s = Stat::try_from(r);
            unsafe { guestfs_free_stat(r) };
            s?
        })
    }

    /// get file information
    #[allow(non_snake_case)]
    pub fn statns(&self, path: &str) -> Result<StatNS, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_statns(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("statns"));
        }
        drop(c_path);
        Ok({
            let s = StatNS::try_from(r);
            unsafe { guestfs_free_statns(r) };
            s?
        })
    }

    /// get file system statistics
    #[allow(non_snake_case)]
    pub fn statvfs(&self, path: &str) -> Result<StatVFS, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_statvfs(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("statvfs"));
        }
        drop(c_path);
        Ok({
            let s = StatVFS::try_from(r);
            unsafe { guestfs_free_statvfs(r) };
            s?
        })
    }

    /// print the printable strings in a file
    #[allow(non_snake_case)]
    pub fn strings(&self, path: &str) -> Result<Vec<String>, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_strings(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("strings"));
        }
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// print the printable strings in a file
    #[allow(non_snake_case)]
    pub fn strings_e(&self, encoding: &str, path: &str) -> Result<Vec<String>, Error> {
        let c_encoding = ffi::CString::new(encoding)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_strings_e(self.g, (&c_encoding).as_ptr(), (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("strings_e"));
        }
        drop(c_encoding);
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// disable swap on device
    #[allow(non_snake_case)]
    pub fn swapoff_device(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_swapoff_device(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("swapoff_device"));
        }
        drop(c_device);
        Ok(())
    }

    /// disable swap on file
    #[allow(non_snake_case)]
    pub fn swapoff_file(&self, file: &str) -> Result<(), Error> {
        let c_file = ffi::CString::new(file)?;
        
        let r = unsafe { guestfs_swapoff_file(self.g, (&c_file).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("swapoff_file"));
        }
        drop(c_file);
        Ok(())
    }

    /// disable swap on labeled swap partition
    #[allow(non_snake_case)]
    pub fn swapoff_label(&self, label: &str) -> Result<(), Error> {
        let c_label = ffi::CString::new(label)?;
        
        let r = unsafe { guestfs_swapoff_label(self.g, (&c_label).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("swapoff_label"));
        }
        drop(c_label);
        Ok(())
    }

    /// disable swap on swap partition by UUID
    #[allow(non_snake_case)]
    pub fn swapoff_uuid(&self, uuid: &str) -> Result<(), Error> {
        let c_uuid = ffi::CString::new(uuid)?;
        
        let r = unsafe { guestfs_swapoff_uuid(self.g, (&c_uuid).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("swapoff_uuid"));
        }
        drop(c_uuid);
        Ok(())
    }

    /// enable swap on device
    #[allow(non_snake_case)]
    pub fn swapon_device(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_swapon_device(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("swapon_device"));
        }
        drop(c_device);
        Ok(())
    }

    /// enable swap on file
    #[allow(non_snake_case)]
    pub fn swapon_file(&self, file: &str) -> Result<(), Error> {
        let c_file = ffi::CString::new(file)?;
        
        let r = unsafe { guestfs_swapon_file(self.g, (&c_file).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("swapon_file"));
        }
        drop(c_file);
        Ok(())
    }

    /// enable swap on labeled swap partition
    #[allow(non_snake_case)]
    pub fn swapon_label(&self, label: &str) -> Result<(), Error> {
        let c_label = ffi::CString::new(label)?;
        
        let r = unsafe { guestfs_swapon_label(self.g, (&c_label).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("swapon_label"));
        }
        drop(c_label);
        Ok(())
    }

    /// enable swap on swap partition by UUID
    #[allow(non_snake_case)]
    pub fn swapon_uuid(&self, uuid: &str) -> Result<(), Error> {
        let c_uuid = ffi::CString::new(uuid)?;
        
        let r = unsafe { guestfs_swapon_uuid(self.g, (&c_uuid).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("swapon_uuid"));
        }
        drop(c_uuid);
        Ok(())
    }

    /// sync disks, writes are flushed through to the disk image
    #[allow(non_snake_case)]
    pub fn sync(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_sync(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("sync"));
        }
        Ok(())
    }

    /// install the SYSLINUX bootloader
    #[allow(non_snake_case)]
    pub fn syslinux(&self, device: &str, optargs: SyslinuxOptArgs) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let optargs_cexpr = CExprSyslinuxOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_syslinux_argv(self.g, (&c_device).as_ptr(), &(RawSyslinuxOptArgs::from(&optargs_cexpr)) as *const RawSyslinuxOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("syslinux"));
        }
        drop(c_device);
        drop(optargs_cexpr);
        Ok(())
    }

    /// return last 10 lines of a file
    #[allow(non_snake_case)]
    pub fn tail(&self, path: &str) -> Result<Vec<String>, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_tail(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("tail"));
        }
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// return last N lines of a file
    #[allow(non_snake_case)]
    pub fn tail_n(&self, nrlines: i32, path: &str) -> Result<Vec<String>, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_tail_n(self.g, nrlines, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("tail_n"));
        }
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// unpack tarfile to directory
    #[allow(non_snake_case)]
    pub fn tar_in(&self, tarfile: &str, directory: &str, optargs: TarInOptArgs) -> Result<(), Error> {
        let c_tarfile = ffi::CString::new(tarfile)?;
        let c_directory = ffi::CString::new(directory)?;
        let optargs_cexpr = CExprTarInOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_tar_in_opts_argv(self.g, (&c_tarfile).as_ptr(), (&c_directory).as_ptr(), &(RawTarInOptArgs::from(&optargs_cexpr)) as *const RawTarInOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("tar_in"));
        }
        drop(c_tarfile);
        drop(c_directory);
        drop(optargs_cexpr);
        Ok(())
    }

    /// pack directory into tarfile
    #[allow(non_snake_case)]
    pub fn tar_out(&self, directory: &str, tarfile: &str, optargs: TarOutOptArgs) -> Result<(), Error> {
        let c_directory = ffi::CString::new(directory)?;
        let c_tarfile = ffi::CString::new(tarfile)?;
        let optargs_cexpr = CExprTarOutOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_tar_out_opts_argv(self.g, (&c_directory).as_ptr(), (&c_tarfile).as_ptr(), &(RawTarOutOptArgs::from(&optargs_cexpr)) as *const RawTarOutOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("tar_out"));
        }
        drop(c_directory);
        drop(c_tarfile);
        drop(optargs_cexpr);
        Ok(())
    }

    /// unpack compressed tarball to directory
    #[allow(non_snake_case)]
    pub fn tgz_in(&self, tarball: &str, directory: &str) -> Result<(), Error> {
        let c_tarball = ffi::CString::new(tarball)?;
        let c_directory = ffi::CString::new(directory)?;
        
        let r = unsafe { guestfs_tgz_in(self.g, (&c_tarball).as_ptr(), (&c_directory).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("tgz_in"));
        }
        drop(c_tarball);
        drop(c_directory);
        Ok(())
    }

    /// pack directory into compressed tarball
    #[allow(non_snake_case)]
    pub fn tgz_out(&self, directory: &str, tarball: &str) -> Result<(), Error> {
        let c_directory = ffi::CString::new(directory)?;
        let c_tarball = ffi::CString::new(tarball)?;
        
        let r = unsafe { guestfs_tgz_out(self.g, (&c_directory).as_ptr(), (&c_tarball).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("tgz_out"));
        }
        drop(c_directory);
        drop(c_tarball);
        Ok(())
    }

    /// update file timestamps or create a new file
    #[allow(non_snake_case)]
    pub fn touch(&self, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_touch(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("touch"));
        }
        drop(c_path);
        Ok(())
    }

    /// truncate a file to zero size
    #[allow(non_snake_case)]
    pub fn truncate(&self, path: &str) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_truncate(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("truncate"));
        }
        drop(c_path);
        Ok(())
    }

    /// truncate a file to a particular size
    #[allow(non_snake_case)]
    pub fn truncate_size(&self, path: &str, size: i64) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_truncate_size(self.g, (&c_path).as_ptr(), size) };
        if r == -1 {
            return Err(self.get_error_from_handle("truncate_size"));
        }
        drop(c_path);
        Ok(())
    }

    /// adjust ext2/ext3/ext4 filesystem parameters
    #[allow(non_snake_case)]
    pub fn tune2fs(&self, device: &str, optargs: Tune2fsOptArgs) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let optargs_cexpr = CExprTune2fsOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_tune2fs_argv(self.g, (&c_device).as_ptr(), &(RawTune2fsOptArgs::from(&optargs_cexpr)) as *const RawTune2fsOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("tune2fs"));
        }
        drop(c_device);
        drop(optargs_cexpr);
        Ok(())
    }

    /// get ext2/ext3/ext4 superblock details
    #[allow(non_snake_case)]
    pub fn tune2fs_l(&self, device: &str) -> Result<collections::HashMap<String, String>, Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_tune2fs_l(self.g, (&c_device).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("tune2fs_l"));
        }
        drop(c_device);
        Ok({
            let h = hashmap(r);
            free_string_list(r);
            h?
        })
    }

    /// unpack compressed tarball to directory
    #[allow(non_snake_case)]
    pub fn txz_in(&self, tarball: &str, directory: &str) -> Result<(), Error> {
        let c_tarball = ffi::CString::new(tarball)?;
        let c_directory = ffi::CString::new(directory)?;
        
        let r = unsafe { guestfs_txz_in(self.g, (&c_tarball).as_ptr(), (&c_directory).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("txz_in"));
        }
        drop(c_tarball);
        drop(c_directory);
        Ok(())
    }

    /// pack directory into compressed tarball
    #[allow(non_snake_case)]
    pub fn txz_out(&self, directory: &str, tarball: &str) -> Result<(), Error> {
        let c_directory = ffi::CString::new(directory)?;
        let c_tarball = ffi::CString::new(tarball)?;
        
        let r = unsafe { guestfs_txz_out(self.g, (&c_directory).as_ptr(), (&c_tarball).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("txz_out"));
        }
        drop(c_directory);
        drop(c_tarball);
        Ok(())
    }

    /// set file mode creation mask (umask)
    #[allow(non_snake_case)]
    pub fn umask(&self, mask: i32) -> Result<i32, Error> {
        
        let r = unsafe { guestfs_umask(self.g, mask) };
        if r == -1 {
            return Err(self.get_error_from_handle("umask"));
        }
        Ok(r)
    }

    /// unmount a filesystem
    #[allow(non_snake_case)]
    pub fn umount(&self, pathordevice: &str, optargs: UmountOptArgs) -> Result<(), Error> {
        let c_pathordevice = ffi::CString::new(pathordevice)?;
        let optargs_cexpr = CExprUmountOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_umount_opts_argv(self.g, (&c_pathordevice).as_ptr(), &(RawUmountOptArgs::from(&optargs_cexpr)) as *const RawUmountOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("umount"));
        }
        drop(c_pathordevice);
        drop(optargs_cexpr);
        Ok(())
    }

    /// unmount all filesystems
    #[allow(non_snake_case)]
    pub fn umount_all(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_umount_all(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("umount_all"));
        }
        Ok(())
    }

    /// unmount a locally mounted filesystem
    #[allow(non_snake_case)]
    pub fn umount_local(&self, optargs: UmountLocalOptArgs) -> Result<(), Error> {
        let optargs_cexpr = CExprUmountLocalOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_umount_local_argv(self.g, &(RawUmountLocalOptArgs::from(&optargs_cexpr)) as *const RawUmountLocalOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("umount_local"));
        }
        drop(optargs_cexpr);
        Ok(())
    }

    /// upload a file from the local machine
    #[allow(non_snake_case)]
    pub fn upload(&self, filename: &str, remotefilename: &str) -> Result<(), Error> {
        let c_filename = ffi::CString::new(filename)?;
        let c_remotefilename = ffi::CString::new(remotefilename)?;
        
        let r = unsafe { guestfs_upload(self.g, (&c_filename).as_ptr(), (&c_remotefilename).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("upload"));
        }
        drop(c_filename);
        drop(c_remotefilename);
        Ok(())
    }

    /// upload a file from the local machine with offset
    #[allow(non_snake_case)]
    pub fn upload_offset(&self, filename: &str, remotefilename: &str, offset: i64) -> Result<(), Error> {
        let c_filename = ffi::CString::new(filename)?;
        let c_remotefilename = ffi::CString::new(remotefilename)?;
        
        let r = unsafe { guestfs_upload_offset(self.g, (&c_filename).as_ptr(), (&c_remotefilename).as_ptr(), offset) };
        if r == -1 {
            return Err(self.get_error_from_handle("upload_offset"));
        }
        drop(c_filename);
        drop(c_remotefilename);
        Ok(())
    }

    /// cancel the current upload or download operation
    #[allow(non_snake_case)]
    pub fn user_cancel(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_user_cancel(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("user_cancel"));
        }
        Ok(())
    }

    /// set timestamp of a file with nanosecond precision
    #[allow(non_snake_case)]
    pub fn utimens(&self, path: &str, atsecs: i64, atnsecs: i64, mtsecs: i64, mtnsecs: i64) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_utimens(self.g, (&c_path).as_ptr(), atsecs, atnsecs, mtsecs, mtnsecs) };
        if r == -1 {
            return Err(self.get_error_from_handle("utimens"));
        }
        drop(c_path);
        Ok(())
    }

    /// appliance kernel version
    #[allow(non_snake_case)]
    pub fn utsname(&self, ) -> Result<UTSName, Error> {
        
        let r = unsafe { guestfs_utsname(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("utsname"));
        }
        Ok({
            let s = UTSName::try_from(r);
            unsafe { guestfs_free_utsname(r) };
            s?
        })
    }

    /// get the library version number
    #[allow(non_snake_case)]
    pub fn version(&self, ) -> Result<Version, Error> {
        
        let r = unsafe { guestfs_version(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("version"));
        }
        Ok({
            let s = Version::try_from(r);
            unsafe { guestfs_free_version(r) };
            s?
        })
    }

    /// get the filesystem label
    #[allow(non_snake_case)]
    pub fn vfs_label(&self, mountable: &str) -> Result<String, Error> {
        let c_mountable = ffi::CString::new(mountable)?;
        
        let r = unsafe { guestfs_vfs_label(self.g, (&c_mountable).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("vfs_label"));
        }
        drop(c_mountable);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get minimum filesystem size
    #[allow(non_snake_case)]
    pub fn vfs_minimum_size(&self, mountable: &str) -> Result<i64, Error> {
        let c_mountable = ffi::CString::new(mountable)?;
        
        let r = unsafe { guestfs_vfs_minimum_size(self.g, (&c_mountable).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("vfs_minimum_size"));
        }
        drop(c_mountable);
        Ok(r)
    }

    /// get the Linux VFS type corresponding to a mounted device
    #[allow(non_snake_case)]
    pub fn vfs_type(&self, mountable: &str) -> Result<String, Error> {
        let c_mountable = ffi::CString::new(mountable)?;
        
        let r = unsafe { guestfs_vfs_type(self.g, (&c_mountable).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("vfs_type"));
        }
        drop(c_mountable);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// get the filesystem UUID
    #[allow(non_snake_case)]
    pub fn vfs_uuid(&self, mountable: &str) -> Result<String, Error> {
        let c_mountable = ffi::CString::new(mountable)?;
        
        let r = unsafe { guestfs_vfs_uuid(self.g, (&c_mountable).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("vfs_uuid"));
        }
        drop(c_mountable);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// activate or deactivate some volume groups
    #[allow(non_snake_case)]
    pub fn vg_activate(&self, activate: bool, volgroups: &[&str]) -> Result<(), Error> {
        let activate = if activate { 1 } else { 0 };
        let c_volgroups_v = arg_string_list(volgroups)?;
        let mut c_volgroups = (&c_volgroups_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_volgroups.push(ptr::null());
        
        let r = unsafe { guestfs_vg_activate(self.g, activate, (&c_volgroups).as_ptr() as *const *const c_char) };
        if r == -1 {
            return Err(self.get_error_from_handle("vg_activate"));
        }
        drop(c_volgroups);
        drop(c_volgroups_v);
        Ok(())
    }

    /// activate or deactivate all volume groups
    #[allow(non_snake_case)]
    pub fn vg_activate_all(&self, activate: bool) -> Result<(), Error> {
        let activate = if activate { 1 } else { 0 };
        
        let r = unsafe { guestfs_vg_activate_all(self.g, activate) };
        if r == -1 {
            return Err(self.get_error_from_handle("vg_activate_all"));
        }
        Ok(())
    }

    /// generate a new random UUID for a volume group
    #[allow(non_snake_case)]
    pub fn vgchange_uuid(&self, vg: &str) -> Result<(), Error> {
        let c_vg = ffi::CString::new(vg)?;
        
        let r = unsafe { guestfs_vgchange_uuid(self.g, (&c_vg).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("vgchange_uuid"));
        }
        drop(c_vg);
        Ok(())
    }

    /// generate new random UUIDs for all volume groups
    #[allow(non_snake_case)]
    pub fn vgchange_uuid_all(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_vgchange_uuid_all(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("vgchange_uuid_all"));
        }
        Ok(())
    }

    /// create an LVM volume group
    #[allow(non_snake_case)]
    pub fn vgcreate(&self, volgroup: &str, physvols: &[&str]) -> Result<(), Error> {
        let c_volgroup = ffi::CString::new(volgroup)?;
        let c_physvols_v = arg_string_list(physvols)?;
        let mut c_physvols = (&c_physvols_v).into_iter().map(|v| v.as_ptr()).collect::<Vec<_>>();
        c_physvols.push(ptr::null());
        
        let r = unsafe { guestfs_vgcreate(self.g, (&c_volgroup).as_ptr(), (&c_physvols).as_ptr() as *const *const c_char) };
        if r == -1 {
            return Err(self.get_error_from_handle("vgcreate"));
        }
        drop(c_volgroup);
        drop(c_physvols);
        drop(c_physvols_v);
        Ok(())
    }

    /// get the LV UUIDs of all LVs in the volume group
    #[allow(non_snake_case)]
    pub fn vglvuuids(&self, vgname: &str) -> Result<Vec<String>, Error> {
        let c_vgname = ffi::CString::new(vgname)?;
        
        let r = unsafe { guestfs_vglvuuids(self.g, (&c_vgname).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("vglvuuids"));
        }
        drop(c_vgname);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// get volume group metadata
    #[allow(non_snake_case)]
    pub fn vgmeta(&self, vgname: &str) -> Result<Vec<u8>, Error> {
        let c_vgname = ffi::CString::new(vgname)?;
        let mut size = 0usize;
        
        let r = unsafe { guestfs_vgmeta(self.g, (&c_vgname).as_ptr(), &mut size as *mut usize) };
        if r.is_null() {
            return Err(self.get_error_from_handle("vgmeta"));
        }
        drop(c_vgname);
        Ok({
            let s = unsafe { slice::from_raw_parts(r, size) }.to_vec();
            unsafe { free(r as *const c_void) } ;
            s
        })
    }

    /// get the PV UUIDs containing the volume group
    #[allow(non_snake_case)]
    pub fn vgpvuuids(&self, vgname: &str) -> Result<Vec<String>, Error> {
        let c_vgname = ffi::CString::new(vgname)?;
        
        let r = unsafe { guestfs_vgpvuuids(self.g, (&c_vgname).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("vgpvuuids"));
        }
        drop(c_vgname);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// remove an LVM volume group
    #[allow(non_snake_case)]
    pub fn vgremove(&self, vgname: &str) -> Result<(), Error> {
        let c_vgname = ffi::CString::new(vgname)?;
        
        let r = unsafe { guestfs_vgremove(self.g, (&c_vgname).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("vgremove"));
        }
        drop(c_vgname);
        Ok(())
    }

    /// rename an LVM volume group
    #[allow(non_snake_case)]
    pub fn vgrename(&self, volgroup: &str, newvolgroup: &str) -> Result<(), Error> {
        let c_volgroup = ffi::CString::new(volgroup)?;
        let c_newvolgroup = ffi::CString::new(newvolgroup)?;
        
        let r = unsafe { guestfs_vgrename(self.g, (&c_volgroup).as_ptr(), (&c_newvolgroup).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("vgrename"));
        }
        drop(c_volgroup);
        drop(c_newvolgroup);
        Ok(())
    }

    /// list the LVM volume groups (VGs)
    #[allow(non_snake_case)]
    pub fn vgs(&self, ) -> Result<Vec<String>, Error> {
        
        let r = unsafe { guestfs_vgs(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("vgs"));
        }
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// list the LVM volume groups (VGs)
    #[allow(non_snake_case)]
    pub fn vgs_full(&self, ) -> Result<Vec<VG>, Error> {
        
        let r = unsafe { guestfs_vgs_full(self.g) };
        if r.is_null() {
            return Err(self.get_error_from_handle("vgs_full"));
        }
        Ok({
            let l = struct_list::<RawVG, VG>(r);
            unsafe { guestfs_free_lvm_vg_list(r) };
            l?
        })
    }

    /// rescan for LVM physical volumes, volume groups and logical volumes
    #[allow(non_snake_case)]
    pub fn vgscan(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_vgscan(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("vgscan"));
        }
        Ok(())
    }

    /// get the UUID of a volume group
    #[allow(non_snake_case)]
    pub fn vguuid(&self, vgname: &str) -> Result<String, Error> {
        let c_vgname = ffi::CString::new(vgname)?;
        
        let r = unsafe { guestfs_vguuid(self.g, (&c_vgname).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("vguuid"));
        }
        drop(c_vgname);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// wait until the hypervisor launches (no op)
    #[allow(non_snake_case)]
    pub fn wait_ready(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_wait_ready(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("wait_ready"));
        }
        Ok(())
    }

    /// count characters in a file
    #[allow(non_snake_case)]
    pub fn wc_c(&self, path: &str) -> Result<i32, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_wc_c(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("wc_c"));
        }
        drop(c_path);
        Ok(r)
    }

    /// count lines in a file
    #[allow(non_snake_case)]
    pub fn wc_l(&self, path: &str) -> Result<i32, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_wc_l(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("wc_l"));
        }
        drop(c_path);
        Ok(r)
    }

    /// count words in a file
    #[allow(non_snake_case)]
    pub fn wc_w(&self, path: &str) -> Result<i32, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_wc_w(self.g, (&c_path).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("wc_w"));
        }
        drop(c_path);
        Ok(r)
    }

    /// wipe a filesystem signature from a device
    #[allow(non_snake_case)]
    pub fn wipefs(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_wipefs(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("wipefs"));
        }
        drop(c_device);
        Ok(())
    }

    /// create a new file
    #[allow(non_snake_case)]
    pub fn write(&self, path: &str, content: &[u8]) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        let c_content_len = content.len();
        let c_content = unsafe { ffi::CString::from_vec_unchecked(content.to_vec())};
        
        let r = unsafe { guestfs_write(self.g, (&c_path).as_ptr(), (&c_content).as_ptr(), c_content_len) };
        if r == -1 {
            return Err(self.get_error_from_handle("write"));
        }
        drop(c_path);
        drop(c_content);
        Ok(())
    }

    /// append content to end of file
    #[allow(non_snake_case)]
    pub fn write_append(&self, path: &str, content: &[u8]) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        let c_content_len = content.len();
        let c_content = unsafe { ffi::CString::from_vec_unchecked(content.to_vec())};
        
        let r = unsafe { guestfs_write_append(self.g, (&c_path).as_ptr(), (&c_content).as_ptr(), c_content_len) };
        if r == -1 {
            return Err(self.get_error_from_handle("write_append"));
        }
        drop(c_path);
        drop(c_content);
        Ok(())
    }

    /// create a file
    #[allow(non_snake_case)]
    pub fn write_file(&self, path: &str, content: &str, size: i32) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        let c_content = ffi::CString::new(content)?;
        
        let r = unsafe { guestfs_write_file(self.g, (&c_path).as_ptr(), (&c_content).as_ptr(), size) };
        if r == -1 {
            return Err(self.get_error_from_handle("write_file"));
        }
        drop(c_path);
        drop(c_content);
        Ok(())
    }

    /// change parameters of an XFS filesystem
    #[allow(non_snake_case)]
    pub fn xfs_admin(&self, device: &str, optargs: XfsAdminOptArgs) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        let optargs_cexpr = CExprXfsAdminOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_xfs_admin_argv(self.g, (&c_device).as_ptr(), &(RawXfsAdminOptArgs::from(&optargs_cexpr)) as *const RawXfsAdminOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("xfs_admin"));
        }
        drop(c_device);
        drop(optargs_cexpr);
        Ok(())
    }

    /// expand an existing XFS filesystem
    #[allow(non_snake_case)]
    pub fn xfs_growfs(&self, path: &str, optargs: XfsGrowfsOptArgs) -> Result<(), Error> {
        let c_path = ffi::CString::new(path)?;
        let optargs_cexpr = CExprXfsGrowfsOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_xfs_growfs_argv(self.g, (&c_path).as_ptr(), &(RawXfsGrowfsOptArgs::from(&optargs_cexpr)) as *const RawXfsGrowfsOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("xfs_growfs"));
        }
        drop(c_path);
        drop(optargs_cexpr);
        Ok(())
    }

    /// get geometry of XFS filesystem
    #[allow(non_snake_case)]
    pub fn xfs_info(&self, pathordevice: &str) -> Result<XFSInfo, Error> {
        let c_pathordevice = ffi::CString::new(pathordevice)?;
        
        let r = unsafe { guestfs_xfs_info(self.g, (&c_pathordevice).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("xfs_info"));
        }
        drop(c_pathordevice);
        Ok({
            let s = XFSInfo::try_from(r);
            unsafe { guestfs_free_xfsinfo(r) };
            s?
        })
    }

    /// repair an XFS filesystem
    #[allow(non_snake_case)]
    pub fn xfs_repair(&self, device: &str, optargs: XfsRepairOptArgs) -> Result<i32, Error> {
        let c_device = ffi::CString::new(device)?;
        let optargs_cexpr = CExprXfsRepairOptArgs::try_from(optargs)?;
        
        let r = unsafe { guestfs_xfs_repair_argv(self.g, (&c_device).as_ptr(), &(RawXfsRepairOptArgs::from(&optargs_cexpr)) as *const RawXfsRepairOptArgs) };
        if r == -1 {
            return Err(self.get_error_from_handle("xfs_repair"));
        }
        drop(c_device);
        drop(optargs_cexpr);
        Ok(r)
    }

    /// destroy previously loaded yara rules
    #[allow(non_snake_case)]
    pub fn yara_destroy(&self, ) -> Result<(), Error> {
        
        let r = unsafe { guestfs_yara_destroy(self.g) };
        if r == -1 {
            return Err(self.get_error_from_handle("yara_destroy"));
        }
        Ok(())
    }

    /// load yara rules within libguestfs
    #[allow(non_snake_case)]
    pub fn yara_load(&self, filename: &str) -> Result<(), Error> {
        let c_filename = ffi::CString::new(filename)?;
        
        let r = unsafe { guestfs_yara_load(self.g, (&c_filename).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("yara_load"));
        }
        drop(c_filename);
        Ok(())
    }

    /// scan a file with the loaded yara rules
    #[allow(non_snake_case)]
    pub fn yara_scan(&self, path: &str) -> Result<Vec<YaraDetection>, Error> {
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_yara_scan(self.g, (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("yara_scan"));
        }
        drop(c_path);
        Ok({
            let l = struct_list::<RawYaraDetection, YaraDetection>(r);
            unsafe { guestfs_free_yara_detection_list(r) };
            l?
        })
    }

    /// return lines matching a pattern
    #[allow(non_snake_case)]
    pub fn zegrep(&self, regex: &str, path: &str) -> Result<Vec<String>, Error> {
        let c_regex = ffi::CString::new(regex)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_zegrep(self.g, (&c_regex).as_ptr(), (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("zegrep"));
        }
        drop(c_regex);
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// return lines matching a pattern
    #[allow(non_snake_case)]
    pub fn zegrepi(&self, regex: &str, path: &str) -> Result<Vec<String>, Error> {
        let c_regex = ffi::CString::new(regex)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_zegrepi(self.g, (&c_regex).as_ptr(), (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("zegrepi"));
        }
        drop(c_regex);
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// write zeroes to the device
    #[allow(non_snake_case)]
    pub fn zero(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_zero(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("zero"));
        }
        drop(c_device);
        Ok(())
    }

    /// write zeroes to an entire device
    #[allow(non_snake_case)]
    pub fn zero_device(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_zero_device(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("zero_device"));
        }
        drop(c_device);
        Ok(())
    }

    /// zero free space in a filesystem
    #[allow(non_snake_case)]
    pub fn zero_free_space(&self, directory: &str) -> Result<(), Error> {
        let c_directory = ffi::CString::new(directory)?;
        
        let r = unsafe { guestfs_zero_free_space(self.g, (&c_directory).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("zero_free_space"));
        }
        drop(c_directory);
        Ok(())
    }

    /// zero unused inodes and disk blocks on ext2/3 filesystem
    #[allow(non_snake_case)]
    pub fn zerofree(&self, device: &str) -> Result<(), Error> {
        let c_device = ffi::CString::new(device)?;
        
        let r = unsafe { guestfs_zerofree(self.g, (&c_device).as_ptr()) };
        if r == -1 {
            return Err(self.get_error_from_handle("zerofree"));
        }
        drop(c_device);
        Ok(())
    }

    /// return lines matching a pattern
    #[allow(non_snake_case)]
    pub fn zfgrep(&self, pattern: &str, path: &str) -> Result<Vec<String>, Error> {
        let c_pattern = ffi::CString::new(pattern)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_zfgrep(self.g, (&c_pattern).as_ptr(), (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("zfgrep"));
        }
        drop(c_pattern);
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// return lines matching a pattern
    #[allow(non_snake_case)]
    pub fn zfgrepi(&self, pattern: &str, path: &str) -> Result<Vec<String>, Error> {
        let c_pattern = ffi::CString::new(pattern)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_zfgrepi(self.g, (&c_pattern).as_ptr(), (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("zfgrepi"));
        }
        drop(c_pattern);
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// determine file type inside a compressed file
    #[allow(non_snake_case)]
    pub fn zfile(&self, meth: &str, path: &str) -> Result<String, Error> {
        let c_meth = ffi::CString::new(meth)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_zfile(self.g, (&c_meth).as_ptr(), (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("zfile"));
        }
        drop(c_meth);
        drop(c_path);
        Ok({
            let s = unsafe { char_ptr_to_string(r) };
            unsafe { free(r as *const c_void) };            s?
        })
    }

    /// return lines matching a pattern
    #[allow(non_snake_case)]
    pub fn zgrep(&self, regex: &str, path: &str) -> Result<Vec<String>, Error> {
        let c_regex = ffi::CString::new(regex)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_zgrep(self.g, (&c_regex).as_ptr(), (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("zgrep"));
        }
        drop(c_regex);
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

    /// return lines matching a pattern
    #[allow(non_snake_case)]
    pub fn zgrepi(&self, regex: &str, path: &str) -> Result<Vec<String>, Error> {
        let c_regex = ffi::CString::new(regex)?;
        let c_path = ffi::CString::new(path)?;
        
        let r = unsafe { guestfs_zgrepi(self.g, (&c_regex).as_ptr(), (&c_path).as_ptr()) };
        if r.is_null() {
            return Err(self.get_error_from_handle("zgrepi"));
        }
        drop(c_regex);
        drop(c_path);
        Ok({
            let s = string_list(r);
            free_string_list(r);
            s?
        })
    }

}
