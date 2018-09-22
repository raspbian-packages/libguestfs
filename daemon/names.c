/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM THE FOLLOWING FILES:
 *          generator/daemon.ml
 *          and from the code in the generator/ subdirectory.
 * ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
 *
 * Copyright (C) 2009-2018 Red Hat Inc.
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

#include "daemon.h"

/* This array is indexed by proc_nr.  See guestfs_protocol.x. */
const char *function_names[] = {
  [377] = "acl_delete_def_file",
  [375] = "acl_get_file",
  [376] = "acl_set_file",
  [239] = "aug_clear",
  [26] = "aug_close",
  [18] = "aug_defnode",
  [17] = "aug_defvar",
  [19] = "aug_get",
  [16] = "aug_init",
  [21] = "aug_insert",
  [412] = "aug_label",
  [27] = "aug_load",
  [28] = "aug_ls",
  [24] = "aug_match",
  [23] = "aug_mv",
  [22] = "aug_rm",
  [25] = "aug_save",
  [20] = "aug_set",
  [411] = "aug_setm",
  [469] = "aug_transform",
  [251] = "available_all_groups",
  [242] = "base64_in",
  [243] = "base64_out",
  [417] = "blkdiscard",
  [418] = "blkdiscardzeroes",
  [303] = "blkid",
  [64] = "blockdev_flushbufs",
  [60] = "blockdev_getbsz",
  [58] = "blockdev_getro",
  [63] = "blockdev_getsize64",
  [59] = "blockdev_getss",
  [62] = "blockdev_getsz",
  [65] = "blockdev_rereadpt",
  [61] = "blockdev_setbsz",
  [424] = "blockdev_setra",
  [56] = "blockdev_setro",
  [57] = "blockdev_setrw",
  [439] = "btrfs_balance_cancel",
  [438] = "btrfs_balance_pause",
  [440] = "btrfs_balance_resume",
  [448] = "btrfs_balance_status",
  [329] = "btrfs_device_add",
  [330] = "btrfs_device_delete",
  [328] = "btrfs_filesystem_balance",
  [443] = "btrfs_filesystem_defragment",
  [289] = "btrfs_filesystem_resize",
  [465] = "btrfs_filesystem_show",
  [327] = "btrfs_filesystem_sync",
  [332] = "btrfs_fsck",
  [453] = "btrfs_image",
  [433] = "btrfs_qgroup_assign",
  [430] = "btrfs_qgroup_create",
  [431] = "btrfs_qgroup_destroy",
  [429] = "btrfs_qgroup_limit",
  [434] = "btrfs_qgroup_remove",
  [432] = "btrfs_qgroup_show",
  [427] = "btrfs_quota_enable",
  [428] = "btrfs_quota_rescan",
  [455] = "btrfs_replace",
  [444] = "btrfs_rescue_chunk_recover",
  [445] = "btrfs_rescue_super_recover",
  [436] = "btrfs_scrub_cancel",
  [437] = "btrfs_scrub_resume",
  [435] = "btrfs_scrub_start",
  [449] = "btrfs_scrub_status",
  [331] = "btrfs_set_seeding",
  [324] = "btrfs_subvolume_create",
  [323] = "btrfs_subvolume_delete",
  [425] = "btrfs_subvolume_get_default",
  [325] = "btrfs_subvolume_list",
  [326] = "btrfs_subvolume_set_default",
  [426] = "btrfs_subvolume_show",
  [322] = "btrfs_subvolume_snapshot",
  [451] = "btrfstune_enable_extended_inode_refs",
  [452] = "btrfstune_enable_skinny_metadata_extent_refs",
  [450] = "btrfstune_seeding",
  [378] = "cap_get_file",
  [379] = "cap_set_file",
  [197] = "case_sensitive_path",
  [68] = "checksum",
  [237] = "checksum_device",
  [244] = "checksums_out",
  [34] = "chmod",
  [35] = "chown",
  [50] = "command",
  [51] = "command_lines",
  [292] = "compress_device_out",
  [291] = "compress_out",
  [415] = "copy_attributes",
  [294] = "copy_device_to_device",
  [295] = "copy_device_to_file",
  [296] = "copy_file_to_device",
  [297] = "copy_file_to_file",
  [227] = "copy_size",
  [87] = "cp",
  [88] = "cp_a",
  [401] = "cp_r",
  [419] = "cpio_out",
  [217] = "dd",
  [76] = "debug",
  [241] = "debug_upload",
  [335] = "device_index",
  [125] = "df",
  [126] = "df_h",
  [91] = "dmesg",
  [67] = "download",
  [468] = "download_blocks",
  [464] = "download_inode",
  [274] = "download_offset",
  [90] = "drop_caches",
  [127] = "du",
  [304] = "e2fsck",
  [108] = "e2fsck_f",
  [195] = "echo_daemon",
  [152] = "egrep",
  [155] = "egrepi",
  [93] = "equal",
  [36] = "exists",
  [400] = "extlinux",
  [169] = "fallocate",
  [252] = "fallocate64",
  [153] = "fgrep",
  [156] = "fgrepi",
  [49] = "file",
  [475] = "file_architecture",
  [218] = "filesize",
  [333] = "filesystem_available",
  [215] = "fill",
  [348] = "fill_dir",
  [245] = "fill_pattern",
  [196] = "find0",
  [266] = "findfs_label",
  [265] = "findfs_uuid",
  [84] = "fsck",
  [334] = "fstrim",
  [318] = "get_e2attrs",
  [320] = "get_e2generation",
  [81] = "get_e2label",
  [83] = "get_e2uuid",
  [240] = "get_umask",
  [186] = "getcon",
  [279] = "getxattr",
  [141] = "getxattrs",
  [113] = "glob_expand",
  [151] = "grep",
  [154] = "grepi",
  [86] = "grub_install",
  [121] = "head",
  [122] = "head_n",
  [96] = "hexdump",
  [351] = "hivex_close",
  [362] = "hivex_commit",
  [363] = "hivex_node_add_child",
  [354] = "hivex_node_children",
  [364] = "hivex_node_delete_child",
  [355] = "hivex_node_get_child",
  [358] = "hivex_node_get_value",
  [353] = "hivex_node_name",
  [356] = "hivex_node_parent",
  [365] = "hivex_node_set_value",
  [357] = "hivex_node_values",
  [350] = "hivex_open",
  [352] = "hivex_root",
  [359] = "hivex_value_key",
  [479] = "hivex_value_string",
  [360] = "hivex_value_type",
  [478] = "hivex_value_utf8",
  [361] = "hivex_value_value",
  [221] = "initrd_cat",
  [128] = "initrd_list",
  [180] = "inotify_add_watch",
  [184] = "inotify_close",
  [183] = "inotify_files",
  [179] = "inotify_init",
  [182] = "inotify_read",
  [181] = "inotify_rm_watch",
  [491] = "inspect_get_arch",
  [484] = "inspect_get_distro",
  [502] = "inspect_get_drive_mappings",
  [501] = "inspect_get_filesystems",
  [482] = "inspect_get_format",
  [492] = "inspect_get_hostname",
  [489] = "inspect_get_major_version",
  [490] = "inspect_get_minor_version",
  [500] = "inspect_get_mountpoints",
  [485] = "inspect_get_package_format",
  [486] = "inspect_get_package_management",
  [487] = "inspect_get_product_name",
  [488] = "inspect_get_product_variant",
  [481] = "inspect_get_roots",
  [483] = "inspect_get_type",
  [496] = "inspect_get_windows_current_control_set",
  [494] = "inspect_get_windows_software_hive",
  [495] = "inspect_get_windows_system_hive",
  [493] = "inspect_get_windows_systemroot",
  [497] = "inspect_is_live",
  [499] = "inspect_is_multipart",
  [498] = "inspect_is_netinst",
  [480] = "inspect_os",
  [282] = "internal_autosync",
  [414] = "internal_exit",
  [458] = "internal_feature_available",
  [466] = "internal_filesystem_walk",
  [470] = "internal_find_inode",
  [370] = "internal_hot_add_drive",
  [372] = "internal_hot_remove_drive",
  [371] = "internal_hot_remove_drive_precheck",
  [408] = "internal_journal_get",
  [423] = "internal_lstatnslist",
  [205] = "internal_lxattrlist",
  [396] = "internal_parse_mountable",
  [206] = "internal_readlinklist",
  [397] = "internal_rhbz914931",
  [413] = "internal_upload",
  [246] = "internal_write",
  [290] = "internal_write_append",
  [474] = "internal_yara_scan",
  [268] = "is_blockdev",
  [267] = "is_chardev",
  [38] = "is_dir",
  [269] = "is_fifo",
  [37] = "is_file",
  [264] = "is_lv",
  [271] = "is_socket",
  [270] = "is_symlink",
  [395] = "is_whole_device",
  [283] = "is_zero",
  [284] = "is_zero_device",
  [314] = "isoinfo",
  [313] = "isoinfo_device",
  [405] = "journal_close",
  [409] = "journal_get_data_threshold",
  [420] = "journal_get_realtime_usec",
  [406] = "journal_next",
  [404] = "journal_open",
  [410] = "journal_set_data_threshold",
  [407] = "journal_skip",
  [203] = "lchown",
  [382] = "ldmtool_create_all",
  [388] = "ldmtool_diskgroup_disks",
  [386] = "ldmtool_diskgroup_name",
  [387] = "ldmtool_diskgroup_volumes",
  [383] = "ldmtool_remove_all",
  [384] = "ldmtool_scan",
  [385] = "ldmtool_scan_devices",
  [390] = "ldmtool_volume_hint",
  [391] = "ldmtool_volume_partitions",
  [389] = "ldmtool_volume_type",
  [280] = "lgetxattr",
  [142] = "lgetxattrs",
  [285] = "list_9p",
  [7] = "list_devices",
  [369] = "list_disk_labels",
  [287] = "list_dm_devices",
  [476] = "list_filesystems",
  [381] = "list_ldm_partitions",
  [380] = "list_ldm_volumes",
  [300] = "list_md_devices",
  [8] = "list_partitions",
  [5] = "ll",
  [305] = "llz",
  [164] = "ln",
  [165] = "ln_f",
  [166] = "ln_s",
  [167] = "ln_sf",
  [146] = "lremovexattr",
  [347] = "ls0",
  [144] = "lsetxattr",
  [422] = "lstatns",
  [262] = "luks_add_key",
  [259] = "luks_close",
  [260] = "luks_format",
  [261] = "luks_format_cipher",
  [263] = "luks_kill_slot",
  [257] = "luks_open",
  [258] = "luks_open_ro",
  [41] = "lvcreate",
  [312] = "lvcreate_free",
  [277] = "lvm_canonical_lv_name",
  [256] = "lvm_clear_filter",
  [48] = "lvm_remove_all",
  [255] = "lvm_set_filter",
  [77] = "lvremove",
  [219] = "lvrename",
  [105] = "lvresize",
  [238] = "lvresize_free",
  [11] = "lvs",
  [14] = "lvs_full",
  [224] = "lvuuid",
  [299] = "md_create",
  [301] = "md_detail",
  [316] = "md_stat",
  [302] = "md_stop",
  [32] = "mkdir",
  [202] = "mkdir_mode",
  [33] = "mkdir_p",
  [117] = "mkdtemp",
  [368] = "mke2fs",
  [191] = "mke2fs_J",
  [192] = "mke2fs_JL",
  [193] = "mke2fs_JU",
  [188] = "mke2journal",
  [189] = "mke2journal_L",
  [190] = "mke2journal_U",
  [134] = "mkfifo",
  [278] = "mkfs",
  [187] = "mkfs_b",
  [317] = "mkfs_btrfs",
  [374] = "mklost_and_found",
  [148] = "mkmountpoint",
  [133] = "mknod",
  [135] = "mknod_b",
  [136] = "mknod_c",
  [471] = "mksquashfs",
  [130] = "mkswap",
  [131] = "mkswap_L",
  [132] = "mkswap_U",
  [178] = "mkswap_file",
  [373] = "mktemp",
  [194] = "modprobe",
  [1] = "mount",
  [286] = "mount_9p",
  [129] = "mount_loop",
  [74] = "mount_options",
  [73] = "mount_ro",
  [75] = "mount_vfs",
  [147] = "mountpoints",
  [46] = "mounts",
  [89] = "mv",
  [336] = "nr_devices",
  [110] = "ntfs_3g_probe",
  [463] = "ntfscat_i",
  [309] = "ntfsclone_in",
  [308] = "ntfsclone_out",
  [307] = "ntfsfix",
  [288] = "ntfsresize",
  [250] = "ntfsresize_size",
  [209] = "part_add",
  [233] = "part_del",
  [210] = "part_disk",
  [462] = "part_expand_gpt",
  [234] = "part_get_bootable",
  [460] = "part_get_disk_guid",
  [504] = "part_get_gpt_attributes",
  [447] = "part_get_gpt_guid",
  [393] = "part_get_gpt_type",
  [235] = "part_get_mbr_id",
  [454] = "part_get_mbr_part_type",
  [416] = "part_get_name",
  [214] = "part_get_parttype",
  [208] = "part_init",
  [213] = "part_list",
  [477] = "part_resize",
  [211] = "part_set_bootable",
  [459] = "part_set_disk_guid",
  [461] = "part_set_disk_guid_random",
  [503] = "part_set_gpt_attributes",
  [446] = "part_set_gpt_guid",
  [392] = "part_set_gpt_type",
  [236] = "part_set_mbr_id",
  [212] = "part_set_name",
  [272] = "part_to_dev",
  [293] = "part_to_partnum",
  [92] = "ping_daemon",
  [207] = "pread",
  [276] = "pread_device",
  [338] = "pvchange_uuid",
  [339] = "pvchange_uuid_all",
  [39] = "pvcreate",
  [79] = "pvremove",
  [98] = "pvresize",
  [249] = "pvresize_size",
  [9] = "pvs",
  [12] = "pvs_full",
  [222] = "pvuuid",
  [247] = "pwrite",
  [275] = "pwrite_device",
  [138] = "readdir",
  [168] = "readlink",
  [163] = "realpath",
  [402] = "remount",
  [145] = "removexattr",
  [394] = "rename",
  [106] = "resize2fs",
  [281] = "resize2fs_M",
  [248] = "resize2fs_size",
  [29] = "rm",
  [367] = "rm_f",
  [31] = "rm_rf",
  [30] = "rmdir",
  [149] = "rmmountpoint",
  [344] = "rsync",
  [345] = "rsync_in",
  [346] = "rsync_out",
  [114] = "scrub_device",
  [115] = "scrub_file",
  [116] = "scrub_freespace",
  [467] = "selinux_relabel",
  [319] = "set_e2attrs",
  [321] = "set_e2generation",
  [80] = "set_e2label",
  [82] = "set_e2uuid",
  [310] = "set_label",
  [403] = "set_uuid",
  [456] = "set_uuid_random",
  [185] = "setcon",
  [143] = "setxattr",
  [43] = "sfdisk",
  [139] = "sfdiskM",
  [99] = "sfdisk_N",
  [102] = "sfdisk_disk_geometry",
  [101] = "sfdisk_kernel_geometry",
  [100] = "sfdisk_l",
  [111] = "sh",
  [112] = "sh_lines",
  [109] = "sleep",
  [421] = "statns",
  [54] = "statvfs",
  [94] = "strings",
  [95] = "strings_e",
  [171] = "swapoff_device",
  [173] = "swapoff_file",
  [175] = "swapoff_label",
  [177] = "swapoff_uuid",
  [170] = "swapon_device",
  [172] = "swapon_file",
  [174] = "swapon_label",
  [176] = "swapon_uuid",
  [2] = "sync",
  [399] = "syslinux",
  [123] = "tail",
  [124] = "tail_n",
  [69] = "tar_in",
  [70] = "tar_out",
  [71] = "tgz_in",
  [72] = "tgz_out",
  [3] = "touch",
  [199] = "truncate",
  [200] = "truncate_size",
  [298] = "tune2fs",
  [55] = "tune2fs_l",
  [229] = "txz_in",
  [230] = "txz_out",
  [137] = "umask",
  [45] = "umount",
  [47] = "umount_all",
  [66] = "upload",
  [273] = "upload_offset",
  [201] = "utimens",
  [342] = "utsname",
  [253] = "vfs_label",
  [457] = "vfs_minimum_size",
  [198] = "vfs_type",
  [254] = "vfs_uuid",
  [104] = "vg_activate",
  [103] = "vg_activate_all",
  [340] = "vgchange_uuid",
  [341] = "vgchange_uuid_all",
  [40] = "vgcreate",
  [226] = "vglvuuids",
  [315] = "vgmeta",
  [225] = "vgpvuuids",
  [78] = "vgremove",
  [220] = "vgrename",
  [10] = "vgs",
  [13] = "vgs_full",
  [232] = "vgscan",
  [223] = "vguuid",
  [120] = "wc_c",
  [118] = "wc_l",
  [119] = "wc_w",
  [306] = "wipefs",
  [44] = "write_file",
  [349] = "xfs_admin",
  [343] = "xfs_growfs",
  [337] = "xfs_info",
  [366] = "xfs_repair",
  [473] = "yara_destroy",
  [472] = "yara_load",
  [158] = "zegrep",
  [161] = "zegrepi",
  [85] = "zero",
  [228] = "zero_device",
  [311] = "zero_free_space",
  [97] = "zerofree",
  [159] = "zfgrep",
  [162] = "zfgrepi",
  [140] = "zfile",
  [157] = "zgrep",
  [160] = "zgrepi",
};
