/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM THE FOLLOWING FILES:
 *          generator/php.ml
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

/* NOTE: Be very careful with all macros in PHP header files.  The
 * morons who wrote them aren't good at making them safe for inclusion
 * in arbitrary places in C code, eg. not using 'do ... while(0)'
 * or parenthesizing any of the arguments.
 */

/* NOTE (2): Some parts of the API can't be used on 32 bit platforms.
 * Any 64 bit numbers will be truncated.  There's no easy way around
 * this in PHP.
 */

#include <config.h>

/* It is safe to call deprecated functions from this file. */
#define GUESTFS_NO_WARN_DEPRECATED
#undef GUESTFS_NO_DEPRECATED

#include <stdio.h>
#include <stdlib.h>

#include <php.h>
#include <php_guestfs_php.h>

#include "guestfs.h"
#include "guestfs-utils.h" /* Only for POINTER_NOT_IMPLEMENTED */

static int res_guestfs_h;

/* removed from PHP 8 */
#ifndef TSRMLS_CC
#define TSRMLS_DC
#define TSRMLS_CC
#endif

#if ZEND_MODULE_API_NO >= 20151012
# define GUESTFS_RETURN_STRING(x, duplicate) \
    do { if (duplicate) { RETURN_STRING(x); } else { RETVAL_STRING(x); efree ((char *)x); return; } } while (0)
# define guestfs_add_assoc_string(arg, key, str, dup) \
    add_assoc_string(arg, key, str)
# define guestfs_add_assoc_stringl(arg, key, str, len, dup) \
    add_assoc_stringl(arg, key, str, len)
# define guestfs_add_next_index_string(retval, val, x) \
    add_next_index_string (retval, val)
# define GUESTFS_ZEND_FETCH_RESOURCE(rsrc, rsrc_type, passed_id, resource_type_name, resource_type) \
    (rsrc) = (rsrc_type) zend_fetch_resource (Z_RES_P(passed_id), resource_type_name, resource_type)
typedef size_t guestfs_string_length;
#else
# define GUESTFS_RETURN_STRING(x, duplicate) \
    RETURN_STRING(x, duplicate)
# define guestfs_add_assoc_string(arg, key, str, dup) \
    add_assoc_string(arg, key, str, dup)
# define guestfs_add_assoc_stringl(arg, key, str, len, dup) \
    add_assoc_stringl(arg, key, str, len, dup)
# define guestfs_add_next_index_string(retval, val, x) \
    add_next_index_string (retval, val, x)
# define GUESTFS_ZEND_FETCH_RESOURCE(rsrc, rsrc_type, passed_id, resource_type_name, resource_type) \
  ZEND_FETCH_RESOURCE(rsrc, rsrc_type, &(passed_id), -1, resource_type_name, resource_type)
typedef int guestfs_string_length;
#endif

/* Declare argument info structures */
ZEND_BEGIN_ARG_INFO_EX(arginfo_create, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_last_error, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_acl_delete_def_file, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, dir)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_acl_get_file, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, acltype)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_acl_set_file, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, acltype)
  ZEND_ARG_INFO(0, acl)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_add_cdrom, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_add_domain, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, dom)
  ZEND_ARG_INFO(0, libvirturi)
  ZEND_ARG_INFO(0, readonly)
  ZEND_ARG_INFO(0, iface)
  ZEND_ARG_INFO(0, live)
  ZEND_ARG_INFO(0, allowuuid)
  ZEND_ARG_INFO(0, readonlydisk)
  ZEND_ARG_INFO(0, cachemode)
  ZEND_ARG_INFO(0, discard)
  ZEND_ARG_INFO(0, copyonread)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_add_drive, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
  ZEND_ARG_INFO(0, readonly)
  ZEND_ARG_INFO(0, format)
  ZEND_ARG_INFO(0, iface)
  ZEND_ARG_INFO(0, name)
  ZEND_ARG_INFO(0, label)
  ZEND_ARG_INFO(0, protocol)
  ZEND_ARG_INFO(0, server)
  ZEND_ARG_INFO(0, username)
  ZEND_ARG_INFO(0, secret)
  ZEND_ARG_INFO(0, cachemode)
  ZEND_ARG_INFO(0, discard)
  ZEND_ARG_INFO(0, copyonread)
  ZEND_ARG_INFO(0, blocksize)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_add_drive_ro, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_add_drive_ro_with_if, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
  ZEND_ARG_INFO(0, iface)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_add_drive_scratch, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, size)
  ZEND_ARG_INFO(0, name)
  ZEND_ARG_INFO(0, label)
  ZEND_ARG_INFO(0, blocksize)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_add_drive_with_if, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
  ZEND_ARG_INFO(0, iface)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_add_libvirt_dom, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, dom)
  ZEND_ARG_INFO(0, readonly)
  ZEND_ARG_INFO(0, iface)
  ZEND_ARG_INFO(0, live)
  ZEND_ARG_INFO(0, readonlydisk)
  ZEND_ARG_INFO(0, cachemode)
  ZEND_ARG_INFO(0, discard)
  ZEND_ARG_INFO(0, copyonread)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_aug_clear, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, augpath)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_aug_close, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_aug_defnode, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, name)
  ZEND_ARG_INFO(0, expr)
  ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_aug_defvar, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, name)
  ZEND_ARG_INFO(0, expr)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_aug_get, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, augpath)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_aug_init, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
  ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_aug_insert, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, augpath)
  ZEND_ARG_INFO(0, label)
  ZEND_ARG_INFO(0, before)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_aug_label, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, augpath)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_aug_load, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_aug_ls, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, augpath)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_aug_match, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, augpath)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_aug_mv, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, src)
  ZEND_ARG_INFO(0, dest)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_aug_rm, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, augpath)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_aug_save, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_aug_set, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, augpath)
  ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_aug_setm, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, base)
  ZEND_ARG_INFO(0, sub)
  ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_aug_transform, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, lens)
  ZEND_ARG_INFO(0, file)
  ZEND_ARG_INFO(0, remove)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_available, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, groups)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_available_all_groups, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_base64_in, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, base64file)
  ZEND_ARG_INFO(0, filename)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_base64_out, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
  ZEND_ARG_INFO(0, base64file)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_blkdiscard, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_blkdiscardzeroes, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_blkid, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_blockdev_flushbufs, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_blockdev_getbsz, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_blockdev_getro, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_blockdev_getsize64, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_blockdev_getss, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_blockdev_getsz, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_blockdev_rereadpt, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_blockdev_setbsz, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, blocksize)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_blockdev_setra, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, sectors)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_blockdev_setro, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_blockdev_setrw, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_balance_cancel, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_balance_pause, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_balance_resume, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_balance_status, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_device_add, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, devices)
  ZEND_ARG_INFO(0, fs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_device_delete, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, devices)
  ZEND_ARG_INFO(0, fs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_filesystem_balance, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, fs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_filesystem_defragment, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, flush)
  ZEND_ARG_INFO(0, compress)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_filesystem_resize, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mountpoint)
  ZEND_ARG_INFO(0, size)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_filesystem_show, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_filesystem_sync, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, fs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_fsck, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, superblock)
  ZEND_ARG_INFO(0, repair)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_image, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, source)
  ZEND_ARG_INFO(0, image)
  ZEND_ARG_INFO(0, compresslevel)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_qgroup_assign, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, src)
  ZEND_ARG_INFO(0, dst)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_qgroup_create, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, qgroupid)
  ZEND_ARG_INFO(0, subvolume)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_qgroup_destroy, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, qgroupid)
  ZEND_ARG_INFO(0, subvolume)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_qgroup_limit, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, subvolume)
  ZEND_ARG_INFO(0, size)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_qgroup_remove, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, src)
  ZEND_ARG_INFO(0, dst)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_qgroup_show, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_quota_enable, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, fs)
  ZEND_ARG_INFO(0, enable)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_quota_rescan, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, fs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_replace, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, srcdev)
  ZEND_ARG_INFO(0, targetdev)
  ZEND_ARG_INFO(0, mntpoint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_rescue_chunk_recover, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_rescue_super_recover, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_scrub_cancel, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_scrub_resume, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_scrub_start, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_scrub_status, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_set_seeding, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, seeding)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_subvolume_create, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, dest)
  ZEND_ARG_INFO(0, qgroupid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_subvolume_delete, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, subvolume)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_subvolume_get_default, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, fs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_subvolume_list, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, fs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_subvolume_set_default, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, id)
  ZEND_ARG_INFO(0, fs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_subvolume_show, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, subvolume)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfs_subvolume_snapshot, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, source)
  ZEND_ARG_INFO(0, dest)
  ZEND_ARG_INFO(0, ro)
  ZEND_ARG_INFO(0, qgroupid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfstune_enable_extended_inode_refs, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfstune_enable_skinny_metadata_extent_refs, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_btrfstune_seeding, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, seeding)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_c_pointer, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_canonical_device_name, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_cap_get_file, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_cap_set_file, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, cap)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_case_sensitive_path, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_cat, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_checksum, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, csumtype)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_checksum_device, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, csumtype)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_checksums_out, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, csumtype)
  ZEND_ARG_INFO(0, directory)
  ZEND_ARG_INFO(0, sumsfile)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chmod, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mode)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_chown, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, owner)
  ZEND_ARG_INFO(0, group)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_clear_backend_setting, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_clevis_luks_unlock, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, mapname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_command, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, arguments)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_command_lines, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, arguments)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_compress_device_out, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, ctype)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, zdevice)
  ZEND_ARG_INFO(0, level)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_compress_out, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, ctype)
  ZEND_ARG_INFO(0, file)
  ZEND_ARG_INFO(0, zfile)
  ZEND_ARG_INFO(0, level)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_config, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, hvparam)
  ZEND_ARG_INFO(0, hvvalue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_copy_attributes, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, src)
  ZEND_ARG_INFO(0, dest)
  ZEND_ARG_INFO(0, all)
  ZEND_ARG_INFO(0, mode)
  ZEND_ARG_INFO(0, xattributes)
  ZEND_ARG_INFO(0, ownership)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_copy_device_to_device, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, src)
  ZEND_ARG_INFO(0, dest)
  ZEND_ARG_INFO(0, srcoffset)
  ZEND_ARG_INFO(0, destoffset)
  ZEND_ARG_INFO(0, size)
  ZEND_ARG_INFO(0, sparse)
  ZEND_ARG_INFO(0, append)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_copy_device_to_file, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, src)
  ZEND_ARG_INFO(0, dest)
  ZEND_ARG_INFO(0, srcoffset)
  ZEND_ARG_INFO(0, destoffset)
  ZEND_ARG_INFO(0, size)
  ZEND_ARG_INFO(0, sparse)
  ZEND_ARG_INFO(0, append)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_copy_file_to_device, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, src)
  ZEND_ARG_INFO(0, dest)
  ZEND_ARG_INFO(0, srcoffset)
  ZEND_ARG_INFO(0, destoffset)
  ZEND_ARG_INFO(0, size)
  ZEND_ARG_INFO(0, sparse)
  ZEND_ARG_INFO(0, append)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_copy_file_to_file, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, src)
  ZEND_ARG_INFO(0, dest)
  ZEND_ARG_INFO(0, srcoffset)
  ZEND_ARG_INFO(0, destoffset)
  ZEND_ARG_INFO(0, size)
  ZEND_ARG_INFO(0, sparse)
  ZEND_ARG_INFO(0, append)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_copy_in, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, localpath)
  ZEND_ARG_INFO(0, remotedir)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_copy_out, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, remotepath)
  ZEND_ARG_INFO(0, localdir)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_copy_size, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, src)
  ZEND_ARG_INFO(0, dest)
  ZEND_ARG_INFO(0, size)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_cp, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, src)
  ZEND_ARG_INFO(0, dest)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_cp_a, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, src)
  ZEND_ARG_INFO(0, dest)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_cp_r, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, src)
  ZEND_ARG_INFO(0, dest)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_cpio_out, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, directory)
  ZEND_ARG_INFO(0, cpiofile)
  ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_cryptsetup_close, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_cryptsetup_open, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, key)
  ZEND_ARG_INFO(0, mapname)
  ZEND_ARG_INFO(0, readonly)
  ZEND_ARG_INFO(0, crypttype)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dd, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, src)
  ZEND_ARG_INFO(0, dest)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_debug, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, subcmd)
  ZEND_ARG_INFO(0, extraargs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_debug_drives, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_debug_upload, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
  ZEND_ARG_INFO(0, tmpname)
  ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_device_index, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_device_name, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, index)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_df, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_df_h, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_disk_create, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
  ZEND_ARG_INFO(0, format)
  ZEND_ARG_INFO(0, size)
  ZEND_ARG_INFO(0, backingfile)
  ZEND_ARG_INFO(0, backingformat)
  ZEND_ARG_INFO(0, preallocation)
  ZEND_ARG_INFO(0, compat)
  ZEND_ARG_INFO(0, clustersize)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_disk_format, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_disk_has_backing_file, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_disk_virtual_size, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_dmesg, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_download, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, remotefilename)
  ZEND_ARG_INFO(0, filename)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_download_blocks, 0, 0, 5)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, start)
  ZEND_ARG_INFO(0, stop)
  ZEND_ARG_INFO(0, filename)
  ZEND_ARG_INFO(0, unallocated)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_download_inode, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, inode)
  ZEND_ARG_INFO(0, filename)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_download_offset, 0, 0, 5)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, remotefilename)
  ZEND_ARG_INFO(0, filename)
  ZEND_ARG_INFO(0, offset)
  ZEND_ARG_INFO(0, size)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_drop_caches, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, whattodrop)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_du, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_e2fsck, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, correct)
  ZEND_ARG_INFO(0, forceall)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_e2fsck_f, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_echo_daemon, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, words)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_egrep, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, regex)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_egrepi, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, regex)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_equal, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, file1)
  ZEND_ARG_INFO(0, file2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_exists, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_extlinux, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, directory)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_f2fs_expand, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_fallocate, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, len)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_fallocate64, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, len)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feature_available, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, groups)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_fgrep, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, pattern)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_fgrepi, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, pattern)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_file, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_file_architecture, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_filesize, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, file)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_filesystem_available, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filesystem)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_filesystem_walk, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_fill, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, c)
  ZEND_ARG_INFO(0, len)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_fill_dir, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, dir)
  ZEND_ARG_INFO(0, nr)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_fill_pattern, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, pattern)
  ZEND_ARG_INFO(0, len)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_find, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, directory)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_find0, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, directory)
  ZEND_ARG_INFO(0, files)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_find_inode, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, inode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_findfs_label, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, label)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_findfs_uuid, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, uuid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_fsck, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, fstype)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_fstrim, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mountpoint)
  ZEND_ARG_INFO(0, offset)
  ZEND_ARG_INFO(0, length)
  ZEND_ARG_INFO(0, minimumfreeextent)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_append, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_attach_method, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_autosync, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_backend, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_backend_setting, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_backend_settings, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_cachedir, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_direct, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_e2attrs, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, file)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_e2generation, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, file)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_e2label, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_e2uuid, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_hv, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_identifier, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_libvirt_requested_credential_challenge, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, index)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_libvirt_requested_credential_defresult, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, index)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_libvirt_requested_credential_prompt, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, index)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_libvirt_requested_credentials, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_memsize, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_network, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_path, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_pgroup, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_pid, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_program, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_qemu, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_recovery_proc, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_selinux, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_smp, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_sockdir, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_state, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_tmpdir, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_trace, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_umask, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_get_verbose, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_getcon, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_getxattr, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_getxattrs, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_glob_expand, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, pattern)
  ZEND_ARG_INFO(0, directoryslash)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_grep, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, regex)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, extended)
  ZEND_ARG_INFO(0, fixed)
  ZEND_ARG_INFO(0, insensitive)
  ZEND_ARG_INFO(0, compressed)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_grepi, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, regex)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_grub_install, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_head, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_head_n, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, nrlines)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hexdump, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_close, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_commit, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_node_add_child, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, parent)
  ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_node_children, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, nodeh)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_node_delete_child, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, nodeh)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_node_get_child, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, nodeh)
  ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_node_get_value, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, nodeh)
  ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_node_name, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, nodeh)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_node_parent, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, nodeh)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_node_set_value, 0, 0, 5)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, nodeh)
  ZEND_ARG_INFO(0, key)
  ZEND_ARG_INFO(0, t)
  ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_node_values, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, nodeh)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_open, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
  ZEND_ARG_INFO(0, verbose)
  ZEND_ARG_INFO(0, debug)
  ZEND_ARG_INFO(0, write)
  ZEND_ARG_INFO(0, unsafe)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_root, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_value_key, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, valueh)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_value_string, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, valueh)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_value_type, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, valueh)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_value_utf8, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, valueh)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_hivex_value_value, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, valueh)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_initrd_cat, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, initrdpath)
  ZEND_ARG_INFO(0, filename)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_initrd_list, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inotify_add_watch, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, mask)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inotify_close, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inotify_files, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inotify_init, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, maxevents)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inotify_read, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inotify_rm_watch, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, wd)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_arch, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_build_id, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_distro, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_drive_mappings, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_filesystems, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_format, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_hostname, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_icon, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
  ZEND_ARG_INFO(0, favicon)
  ZEND_ARG_INFO(0, highquality)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_major_version, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_minor_version, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_mountpoints, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_osinfo, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_package_format, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_package_management, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_product_name, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_product_variant, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_roots, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_type, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_windows_current_control_set, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_windows_software_hive, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_windows_system_hive, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_get_windows_systemroot, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_is_live, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_is_multipart, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_is_netinst, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_list_applications, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_list_applications2, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, root)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_inspect_os, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_exit, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test, 0, 0, 10)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, str)
  ZEND_ARG_INFO(0, optstr)
  ZEND_ARG_INFO(0, strlist)
  ZEND_ARG_INFO(0, b)
  ZEND_ARG_INFO(0, integer)
  ZEND_ARG_INFO(0, integer64)
  ZEND_ARG_INFO(0, filein)
  ZEND_ARG_INFO(0, fileout)
  ZEND_ARG_INFO(0, bufferin)
  ZEND_ARG_INFO(0, obool)
  ZEND_ARG_INFO(0, oint)
  ZEND_ARG_INFO(0, oint64)
  ZEND_ARG_INFO(0, ostring)
  ZEND_ARG_INFO(0, ostringlist)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_63_optargs, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, opt1)
  ZEND_ARG_INFO(0, opt2)
  ZEND_ARG_INFO(0, opt3)
  ZEND_ARG_INFO(0, opt4)
  ZEND_ARG_INFO(0, opt5)
  ZEND_ARG_INFO(0, opt6)
  ZEND_ARG_INFO(0, opt7)
  ZEND_ARG_INFO(0, opt8)
  ZEND_ARG_INFO(0, opt9)
  ZEND_ARG_INFO(0, opt10)
  ZEND_ARG_INFO(0, opt11)
  ZEND_ARG_INFO(0, opt12)
  ZEND_ARG_INFO(0, opt13)
  ZEND_ARG_INFO(0, opt14)
  ZEND_ARG_INFO(0, opt15)
  ZEND_ARG_INFO(0, opt16)
  ZEND_ARG_INFO(0, opt17)
  ZEND_ARG_INFO(0, opt18)
  ZEND_ARG_INFO(0, opt19)
  ZEND_ARG_INFO(0, opt20)
  ZEND_ARG_INFO(0, opt21)
  ZEND_ARG_INFO(0, opt22)
  ZEND_ARG_INFO(0, opt23)
  ZEND_ARG_INFO(0, opt24)
  ZEND_ARG_INFO(0, opt25)
  ZEND_ARG_INFO(0, opt26)
  ZEND_ARG_INFO(0, opt27)
  ZEND_ARG_INFO(0, opt28)
  ZEND_ARG_INFO(0, opt29)
  ZEND_ARG_INFO(0, opt30)
  ZEND_ARG_INFO(0, opt31)
  ZEND_ARG_INFO(0, opt32)
  ZEND_ARG_INFO(0, opt33)
  ZEND_ARG_INFO(0, opt34)
  ZEND_ARG_INFO(0, opt35)
  ZEND_ARG_INFO(0, opt36)
  ZEND_ARG_INFO(0, opt37)
  ZEND_ARG_INFO(0, opt38)
  ZEND_ARG_INFO(0, opt39)
  ZEND_ARG_INFO(0, opt40)
  ZEND_ARG_INFO(0, opt41)
  ZEND_ARG_INFO(0, opt42)
  ZEND_ARG_INFO(0, opt43)
  ZEND_ARG_INFO(0, opt44)
  ZEND_ARG_INFO(0, opt45)
  ZEND_ARG_INFO(0, opt46)
  ZEND_ARG_INFO(0, opt47)
  ZEND_ARG_INFO(0, opt48)
  ZEND_ARG_INFO(0, opt49)
  ZEND_ARG_INFO(0, opt50)
  ZEND_ARG_INFO(0, opt51)
  ZEND_ARG_INFO(0, opt52)
  ZEND_ARG_INFO(0, opt53)
  ZEND_ARG_INFO(0, opt54)
  ZEND_ARG_INFO(0, opt55)
  ZEND_ARG_INFO(0, opt56)
  ZEND_ARG_INFO(0, opt57)
  ZEND_ARG_INFO(0, opt58)
  ZEND_ARG_INFO(0, opt59)
  ZEND_ARG_INFO(0, opt60)
  ZEND_ARG_INFO(0, opt61)
  ZEND_ARG_INFO(0, opt62)
  ZEND_ARG_INFO(0, opt63)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_close_output, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_only_optargs, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, test)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rbool, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rboolerr, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rbufferout, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rbufferouterr, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rconstoptstring, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rconstoptstringerr, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rconststring, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rconststringerr, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rhashtable, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rhashtableerr, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rint, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rint64, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rint64err, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rinterr, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rstring, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rstringerr, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rstringlist, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rstringlisterr, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rstruct, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rstructerr, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rstructlist, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_rstructlisterr, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_internal_test_set_output, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_is_blockdev, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, followsymlinks)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_is_busy, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_is_chardev, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, followsymlinks)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_is_config, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_is_dir, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, followsymlinks)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_is_fifo, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, followsymlinks)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_is_file, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, followsymlinks)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_is_launching, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_is_lv, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mountable)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_is_ready, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_is_socket, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, followsymlinks)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_is_symlink, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_is_whole_device, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_is_zero, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_is_zero_device, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_isoinfo, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, isofile)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_isoinfo_device, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_journal_close, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_journal_get, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_journal_get_data_threshold, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_journal_get_realtime_usec, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_journal_next, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_journal_open, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, directory)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_journal_set_data_threshold, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, threshold)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_journal_skip, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, skip)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_kill_subprocess, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_launch, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lchown, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, owner)
  ZEND_ARG_INFO(0, group)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ldmtool_create_all, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ldmtool_diskgroup_disks, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, diskgroup)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ldmtool_diskgroup_name, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, diskgroup)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ldmtool_diskgroup_volumes, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, diskgroup)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ldmtool_remove_all, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ldmtool_scan, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ldmtool_scan_devices, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, devices)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ldmtool_volume_hint, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, diskgroup)
  ZEND_ARG_INFO(0, volume)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ldmtool_volume_partitions, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, diskgroup)
  ZEND_ARG_INFO(0, volume)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ldmtool_volume_type, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, diskgroup)
  ZEND_ARG_INFO(0, volume)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lgetxattr, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lgetxattrs, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_list_9p, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_list_devices, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_list_disk_labels, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_list_dm_devices, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_list_filesystems, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_list_ldm_partitions, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_list_ldm_volumes, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_list_md_devices, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_list_partitions, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ll, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, directory)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_llz, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, directory)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ln, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, target)
  ZEND_ARG_INFO(0, linkname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ln_f, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, target)
  ZEND_ARG_INFO(0, linkname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ln_s, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, target)
  ZEND_ARG_INFO(0, linkname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ln_sf, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, target)
  ZEND_ARG_INFO(0, linkname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lremovexattr, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, xattr)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ls, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, directory)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ls0, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, dir)
  ZEND_ARG_INFO(0, filenames)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lsetxattr, 0, 0, 5)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, xattr)
  ZEND_ARG_INFO(0, val)
  ZEND_ARG_INFO(0, vallen)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lstat, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lstatlist, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, names)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lstatns, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lstatnslist, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, names)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_luks_add_key, 0, 0, 5)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, key)
  ZEND_ARG_INFO(0, newkey)
  ZEND_ARG_INFO(0, keyslot)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_luks_close, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_luks_format, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, key)
  ZEND_ARG_INFO(0, keyslot)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_luks_format_cipher, 0, 0, 5)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, key)
  ZEND_ARG_INFO(0, keyslot)
  ZEND_ARG_INFO(0, cipher)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_luks_kill_slot, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, key)
  ZEND_ARG_INFO(0, keyslot)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_luks_open, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, key)
  ZEND_ARG_INFO(0, mapname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_luks_open_ro, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, key)
  ZEND_ARG_INFO(0, mapname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_luks_uuid, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lvcreate, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, logvol)
  ZEND_ARG_INFO(0, volgroup)
  ZEND_ARG_INFO(0, mbytes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lvcreate_free, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, logvol)
  ZEND_ARG_INFO(0, volgroup)
  ZEND_ARG_INFO(0, percent)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lvm_canonical_lv_name, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, lvname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lvm_clear_filter, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lvm_remove_all, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lvm_scan, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, activate)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lvm_set_filter, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, devices)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lvremove, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lvrename, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, logvol)
  ZEND_ARG_INFO(0, newlogvol)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lvresize, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, mbytes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lvresize_free, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, lv)
  ZEND_ARG_INFO(0, percent)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lvs, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lvs_full, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lvuuid, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_lxattrlist, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, names)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_max_disks, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_md_create, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, name)
  ZEND_ARG_INFO(0, devices)
  ZEND_ARG_INFO(0, missingbitmap)
  ZEND_ARG_INFO(0, nrdevices)
  ZEND_ARG_INFO(0, spare)
  ZEND_ARG_INFO(0, chunk)
  ZEND_ARG_INFO(0, level)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_md_detail, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, md)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_md_stat, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, md)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_md_stop, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, md)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mkdir, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mkdir_mode, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mkdir_p, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mkdtemp, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, tmpl)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mke2fs, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, blockscount)
  ZEND_ARG_INFO(0, blocksize)
  ZEND_ARG_INFO(0, fragsize)
  ZEND_ARG_INFO(0, blockspergroup)
  ZEND_ARG_INFO(0, numberofgroups)
  ZEND_ARG_INFO(0, bytesperinode)
  ZEND_ARG_INFO(0, inodesize)
  ZEND_ARG_INFO(0, journalsize)
  ZEND_ARG_INFO(0, numberofinodes)
  ZEND_ARG_INFO(0, stridesize)
  ZEND_ARG_INFO(0, stripewidth)
  ZEND_ARG_INFO(0, maxonlineresize)
  ZEND_ARG_INFO(0, reservedblockspercentage)
  ZEND_ARG_INFO(0, mmpupdateinterval)
  ZEND_ARG_INFO(0, journaldevice)
  ZEND_ARG_INFO(0, label)
  ZEND_ARG_INFO(0, lastmounteddir)
  ZEND_ARG_INFO(0, creatoros)
  ZEND_ARG_INFO(0, fstype)
  ZEND_ARG_INFO(0, usagetype)
  ZEND_ARG_INFO(0, uuid)
  ZEND_ARG_INFO(0, forcecreate)
  ZEND_ARG_INFO(0, writesbandgrouponly)
  ZEND_ARG_INFO(0, lazyitableinit)
  ZEND_ARG_INFO(0, lazyjournalinit)
  ZEND_ARG_INFO(0, testfs)
  ZEND_ARG_INFO(0, discard)
  ZEND_ARG_INFO(0, quotatype)
  ZEND_ARG_INFO(0, extent)
  ZEND_ARG_INFO(0, filetype)
  ZEND_ARG_INFO(0, flexbg)
  ZEND_ARG_INFO(0, hasjournal)
  ZEND_ARG_INFO(0, journaldev)
  ZEND_ARG_INFO(0, largefile)
  ZEND_ARG_INFO(0, quota)
  ZEND_ARG_INFO(0, resizeinode)
  ZEND_ARG_INFO(0, sparsesuper)
  ZEND_ARG_INFO(0, uninitbg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mke2fs_J, 0, 0, 5)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, fstype)
  ZEND_ARG_INFO(0, blocksize)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, journal)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mke2fs_JL, 0, 0, 5)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, fstype)
  ZEND_ARG_INFO(0, blocksize)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, label)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mke2fs_JU, 0, 0, 5)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, fstype)
  ZEND_ARG_INFO(0, blocksize)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, uuid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mke2journal, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, blocksize)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mke2journal_L, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, blocksize)
  ZEND_ARG_INFO(0, label)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mke2journal_U, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, blocksize)
  ZEND_ARG_INFO(0, uuid)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mkfifo, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mode)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mkfs, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, fstype)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, blocksize)
  ZEND_ARG_INFO(0, features)
  ZEND_ARG_INFO(0, inode)
  ZEND_ARG_INFO(0, sectorsize)
  ZEND_ARG_INFO(0, label)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mkfs_b, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, fstype)
  ZEND_ARG_INFO(0, blocksize)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mkfs_btrfs, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, devices)
  ZEND_ARG_INFO(0, allocstart)
  ZEND_ARG_INFO(0, bytecount)
  ZEND_ARG_INFO(0, datatype)
  ZEND_ARG_INFO(0, leafsize)
  ZEND_ARG_INFO(0, label)
  ZEND_ARG_INFO(0, metadata)
  ZEND_ARG_INFO(0, nodesize)
  ZEND_ARG_INFO(0, sectorsize)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mklost_and_found, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mountpoint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mkmountpoint, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, exemptpath)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mknod, 0, 0, 5)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mode)
  ZEND_ARG_INFO(0, devmajor)
  ZEND_ARG_INFO(0, devminor)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mknod_b, 0, 0, 5)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mode)
  ZEND_ARG_INFO(0, devmajor)
  ZEND_ARG_INFO(0, devminor)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mknod_c, 0, 0, 5)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mode)
  ZEND_ARG_INFO(0, devmajor)
  ZEND_ARG_INFO(0, devminor)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mksquashfs, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, filename)
  ZEND_ARG_INFO(0, compress)
  ZEND_ARG_INFO(0, excludes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mkswap, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, label)
  ZEND_ARG_INFO(0, uuid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mkswap_L, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, label)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mkswap_U, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, uuid)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mkswap_file, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mktemp, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, tmpl)
  ZEND_ARG_INFO(0, suffix)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_modprobe, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, modulename)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mount, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mountable)
  ZEND_ARG_INFO(0, mountpoint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mount_9p, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mounttag)
  ZEND_ARG_INFO(0, mountpoint)
  ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mount_local, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, localmountpoint)
  ZEND_ARG_INFO(0, readonly)
  ZEND_ARG_INFO(0, options)
  ZEND_ARG_INFO(0, cachetimeout)
  ZEND_ARG_INFO(0, debugcalls)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mount_local_run, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mount_loop, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, file)
  ZEND_ARG_INFO(0, mountpoint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mount_options, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, options)
  ZEND_ARG_INFO(0, mountable)
  ZEND_ARG_INFO(0, mountpoint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mount_ro, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mountable)
  ZEND_ARG_INFO(0, mountpoint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mount_vfs, 0, 0, 5)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, options)
  ZEND_ARG_INFO(0, vfstype)
  ZEND_ARG_INFO(0, mountable)
  ZEND_ARG_INFO(0, mountpoint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mountable_device, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mountable)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mountable_subvolume, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mountable)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mountpoints, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mounts, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_mv, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, src)
  ZEND_ARG_INFO(0, dest)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_nr_devices, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ntfs_3g_probe, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, rw)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ntfscat_i, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, inode)
  ZEND_ARG_INFO(0, filename)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ntfsclone_in, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, backupfile)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ntfsclone_out, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, backupfile)
  ZEND_ARG_INFO(0, metadataonly)
  ZEND_ARG_INFO(0, rescue)
  ZEND_ARG_INFO(0, ignorefscheck)
  ZEND_ARG_INFO(0, preservetimestamps)
  ZEND_ARG_INFO(0, force)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ntfsfix, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, clearbadsectors)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ntfsresize, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, size)
  ZEND_ARG_INFO(0, force)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ntfsresize_size, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, size)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_parse_environment, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_parse_environment_list, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, environment)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_add, 0, 0, 5)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, prlogex)
  ZEND_ARG_INFO(0, startsect)
  ZEND_ARG_INFO(0, endsect)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_del, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, partnum)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_disk, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, parttype)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_expand_gpt, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_get_bootable, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, partnum)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_get_disk_guid, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_get_gpt_attributes, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, partnum)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_get_gpt_guid, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, partnum)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_get_gpt_type, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, partnum)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_get_mbr_id, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, partnum)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_get_mbr_part_type, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, partnum)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_get_name, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, partnum)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_get_parttype, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_init, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, parttype)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_list, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_resize, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, partnum)
  ZEND_ARG_INFO(0, endsect)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_set_bootable, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, partnum)
  ZEND_ARG_INFO(0, bootable)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_set_disk_guid, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, guid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_set_disk_guid_random, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_set_gpt_attributes, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, partnum)
  ZEND_ARG_INFO(0, attributes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_set_gpt_guid, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, partnum)
  ZEND_ARG_INFO(0, guid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_set_gpt_type, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, partnum)
  ZEND_ARG_INFO(0, guid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_set_mbr_id, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, partnum)
  ZEND_ARG_INFO(0, idbyte)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_set_name, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, partnum)
  ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_to_dev, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, partition)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_part_to_partnum, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, partition)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_ping_daemon, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pread, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, count)
  ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pread_device, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, count)
  ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pvchange_uuid, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pvchange_uuid_all, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pvcreate, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pvremove, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pvresize, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pvresize_size, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, size)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pvs, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pvs_full, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pvuuid, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pwrite, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, content)
  ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pwrite_device, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, content)
  ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_read_file, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_read_lines, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_readdir, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, dir)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_readlink, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_readlinklist, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, names)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_realpath, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_remount, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mountpoint)
  ZEND_ARG_INFO(0, rw)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_remove_drive, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, label)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_removexattr, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, xattr)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_rename, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, oldpath)
  ZEND_ARG_INFO(0, newpath)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_resize2fs, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_resize2fs_M, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_resize2fs_size, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, size)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_rm, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_rm_f, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_rm_rf, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_rmdir, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_rmmountpoint, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, exemptpath)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_rsync, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, src)
  ZEND_ARG_INFO(0, dest)
  ZEND_ARG_INFO(0, archive)
  ZEND_ARG_INFO(0, deletedest)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_rsync_in, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, remote)
  ZEND_ARG_INFO(0, dest)
  ZEND_ARG_INFO(0, archive)
  ZEND_ARG_INFO(0, deletedest)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_rsync_out, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, src)
  ZEND_ARG_INFO(0, remote)
  ZEND_ARG_INFO(0, archive)
  ZEND_ARG_INFO(0, deletedest)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_scrub_device, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_scrub_file, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, file)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_scrub_freespace, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, dir)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_selinux_relabel, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, specfile)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, force)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_append, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, append)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_attach_method, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, backend)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_autosync, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, autosync)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_backend, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, backend)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_backend_setting, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, name)
  ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_backend_settings, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, settings)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_cachedir, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, cachedir)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_direct, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, direct)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_e2attrs, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, file)
  ZEND_ARG_INFO(0, attrs)
  ZEND_ARG_INFO(0, clear)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_e2generation, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, file)
  ZEND_ARG_INFO(0, generation)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_e2label, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, label)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_e2uuid, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, uuid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_hv, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, hv)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_identifier, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, identifier)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_label, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mountable)
  ZEND_ARG_INFO(0, label)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_libvirt_requested_credential, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, index)
  ZEND_ARG_INFO(0, cred)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_libvirt_supported_credentials, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, creds)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_memsize, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, memsize)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_network, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, network)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_path, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, searchpath)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_pgroup, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, pgroup)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_program, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, program)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_qemu, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, hv)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_recovery_proc, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, recoveryproc)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_selinux, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, selinux)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_smp, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, smp)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_tmpdir, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, tmpdir)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_trace, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, trace)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_uuid, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, uuid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_uuid_random, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_set_verbose, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, verbose)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_setcon, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, context)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_setxattr, 0, 0, 5)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, xattr)
  ZEND_ARG_INFO(0, val)
  ZEND_ARG_INFO(0, vallen)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_sfdisk, 0, 0, 6)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, cyls)
  ZEND_ARG_INFO(0, heads)
  ZEND_ARG_INFO(0, sectors)
  ZEND_ARG_INFO(0, lines)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_sfdiskM, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, lines)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_sfdisk_N, 0, 0, 7)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, partnum)
  ZEND_ARG_INFO(0, cyls)
  ZEND_ARG_INFO(0, heads)
  ZEND_ARG_INFO(0, sectors)
  ZEND_ARG_INFO(0, line)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_sfdisk_disk_geometry, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_sfdisk_kernel_geometry, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_sfdisk_l, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_sh, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, command)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_sh_lines, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, command)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_shutdown, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_sleep, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, secs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_stat, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_statns, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_statvfs, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_strings, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_strings_e, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, encoding)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_swapoff_device, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_swapoff_file, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, file)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_swapoff_label, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, label)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_swapoff_uuid, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, uuid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_swapon_device, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_swapon_file, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, file)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_swapon_label, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, label)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_swapon_uuid, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, uuid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_sync, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_syslinux, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, directory)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_tail, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_tail_n, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, nrlines)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_tar_in, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, tarfile)
  ZEND_ARG_INFO(0, directory)
  ZEND_ARG_INFO(0, compress)
  ZEND_ARG_INFO(0, xattrs)
  ZEND_ARG_INFO(0, selinux)
  ZEND_ARG_INFO(0, acls)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_tar_out, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, directory)
  ZEND_ARG_INFO(0, tarfile)
  ZEND_ARG_INFO(0, compress)
  ZEND_ARG_INFO(0, numericowner)
  ZEND_ARG_INFO(0, excludes)
  ZEND_ARG_INFO(0, xattrs)
  ZEND_ARG_INFO(0, selinux)
  ZEND_ARG_INFO(0, acls)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_tgz_in, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, tarball)
  ZEND_ARG_INFO(0, directory)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_tgz_out, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, directory)
  ZEND_ARG_INFO(0, tarball)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_touch, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_truncate, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_truncate_size, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, size)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_tune2fs, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, force)
  ZEND_ARG_INFO(0, maxmountcount)
  ZEND_ARG_INFO(0, mountcount)
  ZEND_ARG_INFO(0, errorbehavior)
  ZEND_ARG_INFO(0, group)
  ZEND_ARG_INFO(0, intervalbetweenchecks)
  ZEND_ARG_INFO(0, reservedblockspercentage)
  ZEND_ARG_INFO(0, lastmounteddirectory)
  ZEND_ARG_INFO(0, reservedblockscount)
  ZEND_ARG_INFO(0, user)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_tune2fs_l, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_txz_in, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, tarball)
  ZEND_ARG_INFO(0, directory)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_txz_out, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, directory)
  ZEND_ARG_INFO(0, tarball)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_umask, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mask)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_umount, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, pathordevice)
  ZEND_ARG_INFO(0, force)
  ZEND_ARG_INFO(0, lazyunmount)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_umount_all, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_umount_local, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, retry)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_upload, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
  ZEND_ARG_INFO(0, remotefilename)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_upload_offset, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
  ZEND_ARG_INFO(0, remotefilename)
  ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_user_cancel, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_utimens, 0, 0, 6)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, atsecs)
  ZEND_ARG_INFO(0, atnsecs)
  ZEND_ARG_INFO(0, mtsecs)
  ZEND_ARG_INFO(0, mtnsecs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_utsname, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_version, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vfs_label, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mountable)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vfs_minimum_size, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mountable)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vfs_type, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mountable)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vfs_uuid, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, mountable)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vg_activate, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, activate)
  ZEND_ARG_INFO(0, volgroups)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vg_activate_all, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, activate)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vgchange_uuid, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, vg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vgchange_uuid_all, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vgcreate, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, volgroup)
  ZEND_ARG_INFO(0, physvols)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vglvuuids, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, vgname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vgmeta, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, vgname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vgpvuuids, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, vgname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vgremove, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, vgname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vgrename, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, volgroup)
  ZEND_ARG_INFO(0, newvolgroup)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vgs, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vgs_full, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vgscan, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_vguuid, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, vgname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_wait_ready, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_wc_c, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_wc_l, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_wc_w, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_wipefs, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_write, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, content)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_write_append, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, content)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_write_file, 0, 0, 4)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, content)
  ZEND_ARG_INFO(0, size)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_xfs_admin, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, extunwritten)
  ZEND_ARG_INFO(0, imgfile)
  ZEND_ARG_INFO(0, v2log)
  ZEND_ARG_INFO(0, projid32bit)
  ZEND_ARG_INFO(0, lazycounter)
  ZEND_ARG_INFO(0, label)
  ZEND_ARG_INFO(0, uuid)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_xfs_growfs, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
  ZEND_ARG_INFO(0, datasec)
  ZEND_ARG_INFO(0, logsec)
  ZEND_ARG_INFO(0, rtsec)
  ZEND_ARG_INFO(0, datasize)
  ZEND_ARG_INFO(0, logsize)
  ZEND_ARG_INFO(0, rtsize)
  ZEND_ARG_INFO(0, rtextsize)
  ZEND_ARG_INFO(0, maxpct)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_xfs_info, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, pathordevice)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_xfs_repair, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
  ZEND_ARG_INFO(0, forcelogzero)
  ZEND_ARG_INFO(0, nomodify)
  ZEND_ARG_INFO(0, noprefetch)
  ZEND_ARG_INFO(0, forcegeometry)
  ZEND_ARG_INFO(0, maxmem)
  ZEND_ARG_INFO(0, ihashsize)
  ZEND_ARG_INFO(0, bhashsize)
  ZEND_ARG_INFO(0, agstride)
  ZEND_ARG_INFO(0, logdev)
  ZEND_ARG_INFO(0, rtdev)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_yara_destroy, 0, 0, 1)
  ZEND_ARG_INFO(0, g)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_yara_load, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, filename)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_yara_scan, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zegrep, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, regex)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zegrepi, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, regex)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zero, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zero_device, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zero_free_space, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, directory)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zerofree, 0, 0, 2)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zfgrep, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, pattern)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zfgrepi, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, pattern)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zfile, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, meth)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zgrep, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, regex)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_zgrepi, 0, 0, 3)
  ZEND_ARG_INFO(0, g)
  ZEND_ARG_INFO(0, regex)
  ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()



/* Convert array to list of strings.
 * http://marc.info/?l=pecl-dev&m=112205192100631&w=2
 */
static char**
get_stringlist (zval *val)
{
  char **ret;
  HashTable *a;
  int n;
  HashPosition p;
#if ZEND_MODULE_API_NO >= 20151012
  zval *d;
#else
  zval **d;
#endif
  size_t c = 0;

  a = Z_ARRVAL_P (val);
  n = zend_hash_num_elements (a);
  ret = safe_emalloc (n + 1, sizeof (char *), 0);
  for (zend_hash_internal_pointer_reset_ex (a, &p);
#if ZEND_MODULE_API_NO >= 20151012
       d = zend_hash_get_current_data_ex (a, &p);
#else
       zend_hash_get_current_data_ex (a, (void **) &d, &p) == SUCCESS;
#endif
       zend_hash_move_forward_ex (a, &p)) {
#if ZEND_MODULE_API_NO >= 20151012
    zval t = *d;
#else
    zval t = **d;
#endif
    zval_copy_ctor (&t);
    convert_to_string (&t);
    ret[c] = estrndup (Z_STRVAL(t), Z_STRLEN (t));
    zval_dtor (&t);
    c++;
  }
  ret[c] = NULL;
  return ret;
}

static void
guestfs_efree_stringlist (char **p)
{
  size_t c = 0;

  for (c = 0; p[c] != NULL; ++c)
    efree (p[c]);
  efree (p);
}

#if ZEND_MODULE_API_NO >= 20151012
static void
guestfs_php_handle_dtor (zend_resource *rsrc)
#else
static void
guestfs_php_handle_dtor (zend_rsrc_list_entry *rsrc TSRMLS_DC)
#endif
{
  guestfs_h *g = (guestfs_h *) rsrc->ptr;
  if (g != NULL)
    guestfs_close (g);
}

PHP_MINIT_FUNCTION (guestfs_php)
{
  res_guestfs_h =
    zend_register_list_destructors_ex (guestfs_php_handle_dtor,
    NULL, PHP_GUESTFS_HANDLE_RES_NAME, module_number);
  return SUCCESS;
}

static zend_function_entry guestfs_php_functions[] = {
  PHP_FE (guestfs_create, arginfo_create)
  PHP_FE (guestfs_last_error, arginfo_last_error)
  PHP_FE (guestfs_acl_delete_def_file, arginfo_acl_delete_def_file)
  PHP_FE (guestfs_acl_get_file, arginfo_acl_get_file)
  PHP_FE (guestfs_acl_set_file, arginfo_acl_set_file)
  PHP_FE (guestfs_add_cdrom, arginfo_add_cdrom)
  PHP_FE (guestfs_add_domain, arginfo_add_domain)
  PHP_FE (guestfs_add_drive, arginfo_add_drive)
  PHP_FE (guestfs_add_drive_ro, arginfo_add_drive_ro)
  PHP_FE (guestfs_add_drive_ro_with_if, arginfo_add_drive_ro_with_if)
  PHP_FE (guestfs_add_drive_scratch, arginfo_add_drive_scratch)
  PHP_FE (guestfs_add_drive_with_if, arginfo_add_drive_with_if)
  PHP_FE (guestfs_add_libvirt_dom, arginfo_add_libvirt_dom)
  PHP_FE (guestfs_aug_clear, arginfo_aug_clear)
  PHP_FE (guestfs_aug_close, arginfo_aug_close)
  PHP_FE (guestfs_aug_defnode, arginfo_aug_defnode)
  PHP_FE (guestfs_aug_defvar, arginfo_aug_defvar)
  PHP_FE (guestfs_aug_get, arginfo_aug_get)
  PHP_FE (guestfs_aug_init, arginfo_aug_init)
  PHP_FE (guestfs_aug_insert, arginfo_aug_insert)
  PHP_FE (guestfs_aug_label, arginfo_aug_label)
  PHP_FE (guestfs_aug_load, arginfo_aug_load)
  PHP_FE (guestfs_aug_ls, arginfo_aug_ls)
  PHP_FE (guestfs_aug_match, arginfo_aug_match)
  PHP_FE (guestfs_aug_mv, arginfo_aug_mv)
  PHP_FE (guestfs_aug_rm, arginfo_aug_rm)
  PHP_FE (guestfs_aug_save, arginfo_aug_save)
  PHP_FE (guestfs_aug_set, arginfo_aug_set)
  PHP_FE (guestfs_aug_setm, arginfo_aug_setm)
  PHP_FE (guestfs_aug_transform, arginfo_aug_transform)
  PHP_FE (guestfs_available, arginfo_available)
  PHP_FE (guestfs_available_all_groups, arginfo_available_all_groups)
  PHP_FE (guestfs_base64_in, arginfo_base64_in)
  PHP_FE (guestfs_base64_out, arginfo_base64_out)
  PHP_FE (guestfs_blkdiscard, arginfo_blkdiscard)
  PHP_FE (guestfs_blkdiscardzeroes, arginfo_blkdiscardzeroes)
  PHP_FE (guestfs_blkid, arginfo_blkid)
  PHP_FE (guestfs_blockdev_flushbufs, arginfo_blockdev_flushbufs)
  PHP_FE (guestfs_blockdev_getbsz, arginfo_blockdev_getbsz)
  PHP_FE (guestfs_blockdev_getro, arginfo_blockdev_getro)
  PHP_FE (guestfs_blockdev_getsize64, arginfo_blockdev_getsize64)
  PHP_FE (guestfs_blockdev_getss, arginfo_blockdev_getss)
  PHP_FE (guestfs_blockdev_getsz, arginfo_blockdev_getsz)
  PHP_FE (guestfs_blockdev_rereadpt, arginfo_blockdev_rereadpt)
  PHP_FE (guestfs_blockdev_setbsz, arginfo_blockdev_setbsz)
  PHP_FE (guestfs_blockdev_setra, arginfo_blockdev_setra)
  PHP_FE (guestfs_blockdev_setro, arginfo_blockdev_setro)
  PHP_FE (guestfs_blockdev_setrw, arginfo_blockdev_setrw)
  PHP_FE (guestfs_btrfs_balance_cancel, arginfo_btrfs_balance_cancel)
  PHP_FE (guestfs_btrfs_balance_pause, arginfo_btrfs_balance_pause)
  PHP_FE (guestfs_btrfs_balance_resume, arginfo_btrfs_balance_resume)
  PHP_FE (guestfs_btrfs_balance_status, arginfo_btrfs_balance_status)
  PHP_FE (guestfs_btrfs_device_add, arginfo_btrfs_device_add)
  PHP_FE (guestfs_btrfs_device_delete, arginfo_btrfs_device_delete)
  PHP_FE (guestfs_btrfs_filesystem_balance, arginfo_btrfs_filesystem_balance)
  PHP_FE (guestfs_btrfs_filesystem_defragment, arginfo_btrfs_filesystem_defragment)
  PHP_FE (guestfs_btrfs_filesystem_resize, arginfo_btrfs_filesystem_resize)
  PHP_FE (guestfs_btrfs_filesystem_show, arginfo_btrfs_filesystem_show)
  PHP_FE (guestfs_btrfs_filesystem_sync, arginfo_btrfs_filesystem_sync)
  PHP_FE (guestfs_btrfs_fsck, arginfo_btrfs_fsck)
  PHP_FE (guestfs_btrfs_image, arginfo_btrfs_image)
  PHP_FE (guestfs_btrfs_qgroup_assign, arginfo_btrfs_qgroup_assign)
  PHP_FE (guestfs_btrfs_qgroup_create, arginfo_btrfs_qgroup_create)
  PHP_FE (guestfs_btrfs_qgroup_destroy, arginfo_btrfs_qgroup_destroy)
  PHP_FE (guestfs_btrfs_qgroup_limit, arginfo_btrfs_qgroup_limit)
  PHP_FE (guestfs_btrfs_qgroup_remove, arginfo_btrfs_qgroup_remove)
  PHP_FE (guestfs_btrfs_qgroup_show, arginfo_btrfs_qgroup_show)
  PHP_FE (guestfs_btrfs_quota_enable, arginfo_btrfs_quota_enable)
  PHP_FE (guestfs_btrfs_quota_rescan, arginfo_btrfs_quota_rescan)
  PHP_FE (guestfs_btrfs_replace, arginfo_btrfs_replace)
  PHP_FE (guestfs_btrfs_rescue_chunk_recover, arginfo_btrfs_rescue_chunk_recover)
  PHP_FE (guestfs_btrfs_rescue_super_recover, arginfo_btrfs_rescue_super_recover)
  PHP_FE (guestfs_btrfs_scrub_cancel, arginfo_btrfs_scrub_cancel)
  PHP_FE (guestfs_btrfs_scrub_resume, arginfo_btrfs_scrub_resume)
  PHP_FE (guestfs_btrfs_scrub_start, arginfo_btrfs_scrub_start)
  PHP_FE (guestfs_btrfs_scrub_status, arginfo_btrfs_scrub_status)
  PHP_FE (guestfs_btrfs_set_seeding, arginfo_btrfs_set_seeding)
  PHP_FE (guestfs_btrfs_subvolume_create, arginfo_btrfs_subvolume_create)
  PHP_FE (guestfs_btrfs_subvolume_delete, arginfo_btrfs_subvolume_delete)
  PHP_FE (guestfs_btrfs_subvolume_get_default, arginfo_btrfs_subvolume_get_default)
  PHP_FE (guestfs_btrfs_subvolume_list, arginfo_btrfs_subvolume_list)
  PHP_FE (guestfs_btrfs_subvolume_set_default, arginfo_btrfs_subvolume_set_default)
  PHP_FE (guestfs_btrfs_subvolume_show, arginfo_btrfs_subvolume_show)
  PHP_FE (guestfs_btrfs_subvolume_snapshot, arginfo_btrfs_subvolume_snapshot)
  PHP_FE (guestfs_btrfstune_enable_extended_inode_refs, arginfo_btrfstune_enable_extended_inode_refs)
  PHP_FE (guestfs_btrfstune_enable_skinny_metadata_extent_refs, arginfo_btrfstune_enable_skinny_metadata_extent_refs)
  PHP_FE (guestfs_btrfstune_seeding, arginfo_btrfstune_seeding)
  PHP_FE (guestfs_c_pointer, arginfo_c_pointer)
  PHP_FE (guestfs_canonical_device_name, arginfo_canonical_device_name)
  PHP_FE (guestfs_cap_get_file, arginfo_cap_get_file)
  PHP_FE (guestfs_cap_set_file, arginfo_cap_set_file)
  PHP_FE (guestfs_case_sensitive_path, arginfo_case_sensitive_path)
  PHP_FE (guestfs_cat, arginfo_cat)
  PHP_FE (guestfs_checksum, arginfo_checksum)
  PHP_FE (guestfs_checksum_device, arginfo_checksum_device)
  PHP_FE (guestfs_checksums_out, arginfo_checksums_out)
  PHP_FE (guestfs_chmod, arginfo_chmod)
  PHP_FE (guestfs_chown, arginfo_chown)
  PHP_FE (guestfs_clear_backend_setting, arginfo_clear_backend_setting)
  PHP_FE (guestfs_clevis_luks_unlock, arginfo_clevis_luks_unlock)
  PHP_FE (guestfs_command, arginfo_command)
  PHP_FE (guestfs_command_lines, arginfo_command_lines)
  PHP_FE (guestfs_compress_device_out, arginfo_compress_device_out)
  PHP_FE (guestfs_compress_out, arginfo_compress_out)
  PHP_FE (guestfs_config, arginfo_config)
  PHP_FE (guestfs_copy_attributes, arginfo_copy_attributes)
  PHP_FE (guestfs_copy_device_to_device, arginfo_copy_device_to_device)
  PHP_FE (guestfs_copy_device_to_file, arginfo_copy_device_to_file)
  PHP_FE (guestfs_copy_file_to_device, arginfo_copy_file_to_device)
  PHP_FE (guestfs_copy_file_to_file, arginfo_copy_file_to_file)
  PHP_FE (guestfs_copy_in, arginfo_copy_in)
  PHP_FE (guestfs_copy_out, arginfo_copy_out)
  PHP_FE (guestfs_copy_size, arginfo_copy_size)
  PHP_FE (guestfs_cp, arginfo_cp)
  PHP_FE (guestfs_cp_a, arginfo_cp_a)
  PHP_FE (guestfs_cp_r, arginfo_cp_r)
  PHP_FE (guestfs_cpio_out, arginfo_cpio_out)
  PHP_FE (guestfs_cryptsetup_close, arginfo_cryptsetup_close)
  PHP_FE (guestfs_cryptsetup_open, arginfo_cryptsetup_open)
  PHP_FE (guestfs_dd, arginfo_dd)
  PHP_FE (guestfs_debug, arginfo_debug)
  PHP_FE (guestfs_debug_drives, arginfo_debug_drives)
  PHP_FE (guestfs_debug_upload, arginfo_debug_upload)
  PHP_FE (guestfs_device_index, arginfo_device_index)
  PHP_FE (guestfs_device_name, arginfo_device_name)
  PHP_FE (guestfs_df, arginfo_df)
  PHP_FE (guestfs_df_h, arginfo_df_h)
  PHP_FE (guestfs_disk_create, arginfo_disk_create)
  PHP_FE (guestfs_disk_format, arginfo_disk_format)
  PHP_FE (guestfs_disk_has_backing_file, arginfo_disk_has_backing_file)
  PHP_FE (guestfs_disk_virtual_size, arginfo_disk_virtual_size)
  PHP_FE (guestfs_dmesg, arginfo_dmesg)
  PHP_FE (guestfs_download, arginfo_download)
  PHP_FE (guestfs_download_blocks, arginfo_download_blocks)
  PHP_FE (guestfs_download_inode, arginfo_download_inode)
  PHP_FE (guestfs_download_offset, arginfo_download_offset)
  PHP_FE (guestfs_drop_caches, arginfo_drop_caches)
  PHP_FE (guestfs_du, arginfo_du)
  PHP_FE (guestfs_e2fsck, arginfo_e2fsck)
  PHP_FE (guestfs_e2fsck_f, arginfo_e2fsck_f)
  PHP_FE (guestfs_echo_daemon, arginfo_echo_daemon)
  PHP_FE (guestfs_egrep, arginfo_egrep)
  PHP_FE (guestfs_egrepi, arginfo_egrepi)
  PHP_FE (guestfs_equal, arginfo_equal)
  PHP_FE (guestfs_exists, arginfo_exists)
  PHP_FE (guestfs_extlinux, arginfo_extlinux)
  PHP_FE (guestfs_f2fs_expand, arginfo_f2fs_expand)
  PHP_FE (guestfs_fallocate, arginfo_fallocate)
  PHP_FE (guestfs_fallocate64, arginfo_fallocate64)
  PHP_FE (guestfs_feature_available, arginfo_feature_available)
  PHP_FE (guestfs_fgrep, arginfo_fgrep)
  PHP_FE (guestfs_fgrepi, arginfo_fgrepi)
  PHP_FE (guestfs_file, arginfo_file)
  PHP_FE (guestfs_file_architecture, arginfo_file_architecture)
  PHP_FE (guestfs_filesize, arginfo_filesize)
  PHP_FE (guestfs_filesystem_available, arginfo_filesystem_available)
  PHP_FE (guestfs_filesystem_walk, arginfo_filesystem_walk)
  PHP_FE (guestfs_fill, arginfo_fill)
  PHP_FE (guestfs_fill_dir, arginfo_fill_dir)
  PHP_FE (guestfs_fill_pattern, arginfo_fill_pattern)
  PHP_FE (guestfs_find, arginfo_find)
  PHP_FE (guestfs_find0, arginfo_find0)
  PHP_FE (guestfs_find_inode, arginfo_find_inode)
  PHP_FE (guestfs_findfs_label, arginfo_findfs_label)
  PHP_FE (guestfs_findfs_uuid, arginfo_findfs_uuid)
  PHP_FE (guestfs_fsck, arginfo_fsck)
  PHP_FE (guestfs_fstrim, arginfo_fstrim)
  PHP_FE (guestfs_get_append, arginfo_get_append)
  PHP_FE (guestfs_get_attach_method, arginfo_get_attach_method)
  PHP_FE (guestfs_get_autosync, arginfo_get_autosync)
  PHP_FE (guestfs_get_backend, arginfo_get_backend)
  PHP_FE (guestfs_get_backend_setting, arginfo_get_backend_setting)
  PHP_FE (guestfs_get_backend_settings, arginfo_get_backend_settings)
  PHP_FE (guestfs_get_cachedir, arginfo_get_cachedir)
  PHP_FE (guestfs_get_direct, arginfo_get_direct)
  PHP_FE (guestfs_get_e2attrs, arginfo_get_e2attrs)
  PHP_FE (guestfs_get_e2generation, arginfo_get_e2generation)
  PHP_FE (guestfs_get_e2label, arginfo_get_e2label)
  PHP_FE (guestfs_get_e2uuid, arginfo_get_e2uuid)
  PHP_FE (guestfs_get_hv, arginfo_get_hv)
  PHP_FE (guestfs_get_identifier, arginfo_get_identifier)
  PHP_FE (guestfs_get_libvirt_requested_credential_challenge, arginfo_get_libvirt_requested_credential_challenge)
  PHP_FE (guestfs_get_libvirt_requested_credential_defresult, arginfo_get_libvirt_requested_credential_defresult)
  PHP_FE (guestfs_get_libvirt_requested_credential_prompt, arginfo_get_libvirt_requested_credential_prompt)
  PHP_FE (guestfs_get_libvirt_requested_credentials, arginfo_get_libvirt_requested_credentials)
  PHP_FE (guestfs_get_memsize, arginfo_get_memsize)
  PHP_FE (guestfs_get_network, arginfo_get_network)
  PHP_FE (guestfs_get_path, arginfo_get_path)
  PHP_FE (guestfs_get_pgroup, arginfo_get_pgroup)
  PHP_FE (guestfs_get_pid, arginfo_get_pid)
  PHP_FE (guestfs_get_program, arginfo_get_program)
  PHP_FE (guestfs_get_qemu, arginfo_get_qemu)
  PHP_FE (guestfs_get_recovery_proc, arginfo_get_recovery_proc)
  PHP_FE (guestfs_get_selinux, arginfo_get_selinux)
  PHP_FE (guestfs_get_smp, arginfo_get_smp)
  PHP_FE (guestfs_get_sockdir, arginfo_get_sockdir)
  PHP_FE (guestfs_get_state, arginfo_get_state)
  PHP_FE (guestfs_get_tmpdir, arginfo_get_tmpdir)
  PHP_FE (guestfs_get_trace, arginfo_get_trace)
  PHP_FE (guestfs_get_umask, arginfo_get_umask)
  PHP_FE (guestfs_get_verbose, arginfo_get_verbose)
  PHP_FE (guestfs_getcon, arginfo_getcon)
  PHP_FE (guestfs_getxattr, arginfo_getxattr)
  PHP_FE (guestfs_getxattrs, arginfo_getxattrs)
  PHP_FE (guestfs_glob_expand, arginfo_glob_expand)
  PHP_FE (guestfs_grep, arginfo_grep)
  PHP_FE (guestfs_grepi, arginfo_grepi)
  PHP_FE (guestfs_grub_install, arginfo_grub_install)
  PHP_FE (guestfs_head, arginfo_head)
  PHP_FE (guestfs_head_n, arginfo_head_n)
  PHP_FE (guestfs_hexdump, arginfo_hexdump)
  PHP_FE (guestfs_hivex_close, arginfo_hivex_close)
  PHP_FE (guestfs_hivex_commit, arginfo_hivex_commit)
  PHP_FE (guestfs_hivex_node_add_child, arginfo_hivex_node_add_child)
  PHP_FE (guestfs_hivex_node_children, arginfo_hivex_node_children)
  PHP_FE (guestfs_hivex_node_delete_child, arginfo_hivex_node_delete_child)
  PHP_FE (guestfs_hivex_node_get_child, arginfo_hivex_node_get_child)
  PHP_FE (guestfs_hivex_node_get_value, arginfo_hivex_node_get_value)
  PHP_FE (guestfs_hivex_node_name, arginfo_hivex_node_name)
  PHP_FE (guestfs_hivex_node_parent, arginfo_hivex_node_parent)
  PHP_FE (guestfs_hivex_node_set_value, arginfo_hivex_node_set_value)
  PHP_FE (guestfs_hivex_node_values, arginfo_hivex_node_values)
  PHP_FE (guestfs_hivex_open, arginfo_hivex_open)
  PHP_FE (guestfs_hivex_root, arginfo_hivex_root)
  PHP_FE (guestfs_hivex_value_key, arginfo_hivex_value_key)
  PHP_FE (guestfs_hivex_value_string, arginfo_hivex_value_string)
  PHP_FE (guestfs_hivex_value_type, arginfo_hivex_value_type)
  PHP_FE (guestfs_hivex_value_utf8, arginfo_hivex_value_utf8)
  PHP_FE (guestfs_hivex_value_value, arginfo_hivex_value_value)
  PHP_FE (guestfs_initrd_cat, arginfo_initrd_cat)
  PHP_FE (guestfs_initrd_list, arginfo_initrd_list)
  PHP_FE (guestfs_inotify_add_watch, arginfo_inotify_add_watch)
  PHP_FE (guestfs_inotify_close, arginfo_inotify_close)
  PHP_FE (guestfs_inotify_files, arginfo_inotify_files)
  PHP_FE (guestfs_inotify_init, arginfo_inotify_init)
  PHP_FE (guestfs_inotify_read, arginfo_inotify_read)
  PHP_FE (guestfs_inotify_rm_watch, arginfo_inotify_rm_watch)
  PHP_FE (guestfs_inspect_get_arch, arginfo_inspect_get_arch)
  PHP_FE (guestfs_inspect_get_build_id, arginfo_inspect_get_build_id)
  PHP_FE (guestfs_inspect_get_distro, arginfo_inspect_get_distro)
  PHP_FE (guestfs_inspect_get_drive_mappings, arginfo_inspect_get_drive_mappings)
  PHP_FE (guestfs_inspect_get_filesystems, arginfo_inspect_get_filesystems)
  PHP_FE (guestfs_inspect_get_format, arginfo_inspect_get_format)
  PHP_FE (guestfs_inspect_get_hostname, arginfo_inspect_get_hostname)
  PHP_FE (guestfs_inspect_get_icon, arginfo_inspect_get_icon)
  PHP_FE (guestfs_inspect_get_major_version, arginfo_inspect_get_major_version)
  PHP_FE (guestfs_inspect_get_minor_version, arginfo_inspect_get_minor_version)
  PHP_FE (guestfs_inspect_get_mountpoints, arginfo_inspect_get_mountpoints)
  PHP_FE (guestfs_inspect_get_osinfo, arginfo_inspect_get_osinfo)
  PHP_FE (guestfs_inspect_get_package_format, arginfo_inspect_get_package_format)
  PHP_FE (guestfs_inspect_get_package_management, arginfo_inspect_get_package_management)
  PHP_FE (guestfs_inspect_get_product_name, arginfo_inspect_get_product_name)
  PHP_FE (guestfs_inspect_get_product_variant, arginfo_inspect_get_product_variant)
  PHP_FE (guestfs_inspect_get_roots, arginfo_inspect_get_roots)
  PHP_FE (guestfs_inspect_get_type, arginfo_inspect_get_type)
  PHP_FE (guestfs_inspect_get_windows_current_control_set, arginfo_inspect_get_windows_current_control_set)
  PHP_FE (guestfs_inspect_get_windows_software_hive, arginfo_inspect_get_windows_software_hive)
  PHP_FE (guestfs_inspect_get_windows_system_hive, arginfo_inspect_get_windows_system_hive)
  PHP_FE (guestfs_inspect_get_windows_systemroot, arginfo_inspect_get_windows_systemroot)
  PHP_FE (guestfs_inspect_is_live, arginfo_inspect_is_live)
  PHP_FE (guestfs_inspect_is_multipart, arginfo_inspect_is_multipart)
  PHP_FE (guestfs_inspect_is_netinst, arginfo_inspect_is_netinst)
  PHP_FE (guestfs_inspect_list_applications, arginfo_inspect_list_applications)
  PHP_FE (guestfs_inspect_list_applications2, arginfo_inspect_list_applications2)
  PHP_FE (guestfs_inspect_os, arginfo_inspect_os)
  PHP_FE (guestfs_internal_exit, arginfo_internal_exit)
  PHP_FE (guestfs_internal_test, arginfo_internal_test)
  PHP_FE (guestfs_internal_test_63_optargs, arginfo_internal_test_63_optargs)
  PHP_FE (guestfs_internal_test_close_output, arginfo_internal_test_close_output)
  PHP_FE (guestfs_internal_test_only_optargs, arginfo_internal_test_only_optargs)
  PHP_FE (guestfs_internal_test_rbool, arginfo_internal_test_rbool)
  PHP_FE (guestfs_internal_test_rboolerr, arginfo_internal_test_rboolerr)
  PHP_FE (guestfs_internal_test_rbufferout, arginfo_internal_test_rbufferout)
  PHP_FE (guestfs_internal_test_rbufferouterr, arginfo_internal_test_rbufferouterr)
  PHP_FE (guestfs_internal_test_rconstoptstring, arginfo_internal_test_rconstoptstring)
  PHP_FE (guestfs_internal_test_rconstoptstringerr, arginfo_internal_test_rconstoptstringerr)
  PHP_FE (guestfs_internal_test_rconststring, arginfo_internal_test_rconststring)
  PHP_FE (guestfs_internal_test_rconststringerr, arginfo_internal_test_rconststringerr)
  PHP_FE (guestfs_internal_test_rhashtable, arginfo_internal_test_rhashtable)
  PHP_FE (guestfs_internal_test_rhashtableerr, arginfo_internal_test_rhashtableerr)
  PHP_FE (guestfs_internal_test_rint, arginfo_internal_test_rint)
  PHP_FE (guestfs_internal_test_rint64, arginfo_internal_test_rint64)
  PHP_FE (guestfs_internal_test_rint64err, arginfo_internal_test_rint64err)
  PHP_FE (guestfs_internal_test_rinterr, arginfo_internal_test_rinterr)
  PHP_FE (guestfs_internal_test_rstring, arginfo_internal_test_rstring)
  PHP_FE (guestfs_internal_test_rstringerr, arginfo_internal_test_rstringerr)
  PHP_FE (guestfs_internal_test_rstringlist, arginfo_internal_test_rstringlist)
  PHP_FE (guestfs_internal_test_rstringlisterr, arginfo_internal_test_rstringlisterr)
  PHP_FE (guestfs_internal_test_rstruct, arginfo_internal_test_rstruct)
  PHP_FE (guestfs_internal_test_rstructerr, arginfo_internal_test_rstructerr)
  PHP_FE (guestfs_internal_test_rstructlist, arginfo_internal_test_rstructlist)
  PHP_FE (guestfs_internal_test_rstructlisterr, arginfo_internal_test_rstructlisterr)
  PHP_FE (guestfs_internal_test_set_output, arginfo_internal_test_set_output)
  PHP_FE (guestfs_is_blockdev, arginfo_is_blockdev)
  PHP_FE (guestfs_is_busy, arginfo_is_busy)
  PHP_FE (guestfs_is_chardev, arginfo_is_chardev)
  PHP_FE (guestfs_is_config, arginfo_is_config)
  PHP_FE (guestfs_is_dir, arginfo_is_dir)
  PHP_FE (guestfs_is_fifo, arginfo_is_fifo)
  PHP_FE (guestfs_is_file, arginfo_is_file)
  PHP_FE (guestfs_is_launching, arginfo_is_launching)
  PHP_FE (guestfs_is_lv, arginfo_is_lv)
  PHP_FE (guestfs_is_ready, arginfo_is_ready)
  PHP_FE (guestfs_is_socket, arginfo_is_socket)
  PHP_FE (guestfs_is_symlink, arginfo_is_symlink)
  PHP_FE (guestfs_is_whole_device, arginfo_is_whole_device)
  PHP_FE (guestfs_is_zero, arginfo_is_zero)
  PHP_FE (guestfs_is_zero_device, arginfo_is_zero_device)
  PHP_FE (guestfs_isoinfo, arginfo_isoinfo)
  PHP_FE (guestfs_isoinfo_device, arginfo_isoinfo_device)
  PHP_FE (guestfs_journal_close, arginfo_journal_close)
  PHP_FE (guestfs_journal_get, arginfo_journal_get)
  PHP_FE (guestfs_journal_get_data_threshold, arginfo_journal_get_data_threshold)
  PHP_FE (guestfs_journal_get_realtime_usec, arginfo_journal_get_realtime_usec)
  PHP_FE (guestfs_journal_next, arginfo_journal_next)
  PHP_FE (guestfs_journal_open, arginfo_journal_open)
  PHP_FE (guestfs_journal_set_data_threshold, arginfo_journal_set_data_threshold)
  PHP_FE (guestfs_journal_skip, arginfo_journal_skip)
  PHP_FE (guestfs_kill_subprocess, arginfo_kill_subprocess)
  PHP_FE (guestfs_launch, arginfo_launch)
  PHP_FE (guestfs_lchown, arginfo_lchown)
  PHP_FE (guestfs_ldmtool_create_all, arginfo_ldmtool_create_all)
  PHP_FE (guestfs_ldmtool_diskgroup_disks, arginfo_ldmtool_diskgroup_disks)
  PHP_FE (guestfs_ldmtool_diskgroup_name, arginfo_ldmtool_diskgroup_name)
  PHP_FE (guestfs_ldmtool_diskgroup_volumes, arginfo_ldmtool_diskgroup_volumes)
  PHP_FE (guestfs_ldmtool_remove_all, arginfo_ldmtool_remove_all)
  PHP_FE (guestfs_ldmtool_scan, arginfo_ldmtool_scan)
  PHP_FE (guestfs_ldmtool_scan_devices, arginfo_ldmtool_scan_devices)
  PHP_FE (guestfs_ldmtool_volume_hint, arginfo_ldmtool_volume_hint)
  PHP_FE (guestfs_ldmtool_volume_partitions, arginfo_ldmtool_volume_partitions)
  PHP_FE (guestfs_ldmtool_volume_type, arginfo_ldmtool_volume_type)
  PHP_FE (guestfs_lgetxattr, arginfo_lgetxattr)
  PHP_FE (guestfs_lgetxattrs, arginfo_lgetxattrs)
  PHP_FE (guestfs_list_9p, arginfo_list_9p)
  PHP_FE (guestfs_list_devices, arginfo_list_devices)
  PHP_FE (guestfs_list_disk_labels, arginfo_list_disk_labels)
  PHP_FE (guestfs_list_dm_devices, arginfo_list_dm_devices)
  PHP_FE (guestfs_list_filesystems, arginfo_list_filesystems)
  PHP_FE (guestfs_list_ldm_partitions, arginfo_list_ldm_partitions)
  PHP_FE (guestfs_list_ldm_volumes, arginfo_list_ldm_volumes)
  PHP_FE (guestfs_list_md_devices, arginfo_list_md_devices)
  PHP_FE (guestfs_list_partitions, arginfo_list_partitions)
  PHP_FE (guestfs_ll, arginfo_ll)
  PHP_FE (guestfs_llz, arginfo_llz)
  PHP_FE (guestfs_ln, arginfo_ln)
  PHP_FE (guestfs_ln_f, arginfo_ln_f)
  PHP_FE (guestfs_ln_s, arginfo_ln_s)
  PHP_FE (guestfs_ln_sf, arginfo_ln_sf)
  PHP_FE (guestfs_lremovexattr, arginfo_lremovexattr)
  PHP_FE (guestfs_ls, arginfo_ls)
  PHP_FE (guestfs_ls0, arginfo_ls0)
  PHP_FE (guestfs_lsetxattr, arginfo_lsetxattr)
  PHP_FE (guestfs_lstat, arginfo_lstat)
  PHP_FE (guestfs_lstatlist, arginfo_lstatlist)
  PHP_FE (guestfs_lstatns, arginfo_lstatns)
  PHP_FE (guestfs_lstatnslist, arginfo_lstatnslist)
  PHP_FE (guestfs_luks_add_key, arginfo_luks_add_key)
  PHP_FE (guestfs_luks_close, arginfo_luks_close)
  PHP_FE (guestfs_luks_format, arginfo_luks_format)
  PHP_FE (guestfs_luks_format_cipher, arginfo_luks_format_cipher)
  PHP_FE (guestfs_luks_kill_slot, arginfo_luks_kill_slot)
  PHP_FE (guestfs_luks_open, arginfo_luks_open)
  PHP_FE (guestfs_luks_open_ro, arginfo_luks_open_ro)
  PHP_FE (guestfs_luks_uuid, arginfo_luks_uuid)
  PHP_FE (guestfs_lvcreate, arginfo_lvcreate)
  PHP_FE (guestfs_lvcreate_free, arginfo_lvcreate_free)
  PHP_FE (guestfs_lvm_canonical_lv_name, arginfo_lvm_canonical_lv_name)
  PHP_FE (guestfs_lvm_clear_filter, arginfo_lvm_clear_filter)
  PHP_FE (guestfs_lvm_remove_all, arginfo_lvm_remove_all)
  PHP_FE (guestfs_lvm_scan, arginfo_lvm_scan)
  PHP_FE (guestfs_lvm_set_filter, arginfo_lvm_set_filter)
  PHP_FE (guestfs_lvremove, arginfo_lvremove)
  PHP_FE (guestfs_lvrename, arginfo_lvrename)
  PHP_FE (guestfs_lvresize, arginfo_lvresize)
  PHP_FE (guestfs_lvresize_free, arginfo_lvresize_free)
  PHP_FE (guestfs_lvs, arginfo_lvs)
  PHP_FE (guestfs_lvs_full, arginfo_lvs_full)
  PHP_FE (guestfs_lvuuid, arginfo_lvuuid)
  PHP_FE (guestfs_lxattrlist, arginfo_lxattrlist)
  PHP_FE (guestfs_max_disks, arginfo_max_disks)
  PHP_FE (guestfs_md_create, arginfo_md_create)
  PHP_FE (guestfs_md_detail, arginfo_md_detail)
  PHP_FE (guestfs_md_stat, arginfo_md_stat)
  PHP_FE (guestfs_md_stop, arginfo_md_stop)
  PHP_FE (guestfs_mkdir, arginfo_mkdir)
  PHP_FE (guestfs_mkdir_mode, arginfo_mkdir_mode)
  PHP_FE (guestfs_mkdir_p, arginfo_mkdir_p)
  PHP_FE (guestfs_mkdtemp, arginfo_mkdtemp)
  PHP_FE (guestfs_mke2fs, arginfo_mke2fs)
  PHP_FE (guestfs_mke2fs_J, arginfo_mke2fs_J)
  PHP_FE (guestfs_mke2fs_JL, arginfo_mke2fs_JL)
  PHP_FE (guestfs_mke2fs_JU, arginfo_mke2fs_JU)
  PHP_FE (guestfs_mke2journal, arginfo_mke2journal)
  PHP_FE (guestfs_mke2journal_L, arginfo_mke2journal_L)
  PHP_FE (guestfs_mke2journal_U, arginfo_mke2journal_U)
  PHP_FE (guestfs_mkfifo, arginfo_mkfifo)
  PHP_FE (guestfs_mkfs, arginfo_mkfs)
  PHP_FE (guestfs_mkfs_b, arginfo_mkfs_b)
  PHP_FE (guestfs_mkfs_btrfs, arginfo_mkfs_btrfs)
  PHP_FE (guestfs_mklost_and_found, arginfo_mklost_and_found)
  PHP_FE (guestfs_mkmountpoint, arginfo_mkmountpoint)
  PHP_FE (guestfs_mknod, arginfo_mknod)
  PHP_FE (guestfs_mknod_b, arginfo_mknod_b)
  PHP_FE (guestfs_mknod_c, arginfo_mknod_c)
  PHP_FE (guestfs_mksquashfs, arginfo_mksquashfs)
  PHP_FE (guestfs_mkswap, arginfo_mkswap)
  PHP_FE (guestfs_mkswap_L, arginfo_mkswap_L)
  PHP_FE (guestfs_mkswap_U, arginfo_mkswap_U)
  PHP_FE (guestfs_mkswap_file, arginfo_mkswap_file)
  PHP_FE (guestfs_mktemp, arginfo_mktemp)
  PHP_FE (guestfs_modprobe, arginfo_modprobe)
  PHP_FE (guestfs_mount, arginfo_mount)
  PHP_FE (guestfs_mount_9p, arginfo_mount_9p)
  PHP_FE (guestfs_mount_local, arginfo_mount_local)
  PHP_FE (guestfs_mount_local_run, arginfo_mount_local_run)
  PHP_FE (guestfs_mount_loop, arginfo_mount_loop)
  PHP_FE (guestfs_mount_options, arginfo_mount_options)
  PHP_FE (guestfs_mount_ro, arginfo_mount_ro)
  PHP_FE (guestfs_mount_vfs, arginfo_mount_vfs)
  PHP_FE (guestfs_mountable_device, arginfo_mountable_device)
  PHP_FE (guestfs_mountable_subvolume, arginfo_mountable_subvolume)
  PHP_FE (guestfs_mountpoints, arginfo_mountpoints)
  PHP_FE (guestfs_mounts, arginfo_mounts)
  PHP_FE (guestfs_mv, arginfo_mv)
  PHP_FE (guestfs_nr_devices, arginfo_nr_devices)
  PHP_FE (guestfs_ntfs_3g_probe, arginfo_ntfs_3g_probe)
  PHP_FE (guestfs_ntfscat_i, arginfo_ntfscat_i)
  PHP_FE (guestfs_ntfsclone_in, arginfo_ntfsclone_in)
  PHP_FE (guestfs_ntfsclone_out, arginfo_ntfsclone_out)
  PHP_FE (guestfs_ntfsfix, arginfo_ntfsfix)
  PHP_FE (guestfs_ntfsresize, arginfo_ntfsresize)
  PHP_FE (guestfs_ntfsresize_size, arginfo_ntfsresize_size)
  PHP_FE (guestfs_parse_environment, arginfo_parse_environment)
  PHP_FE (guestfs_parse_environment_list, arginfo_parse_environment_list)
  PHP_FE (guestfs_part_add, arginfo_part_add)
  PHP_FE (guestfs_part_del, arginfo_part_del)
  PHP_FE (guestfs_part_disk, arginfo_part_disk)
  PHP_FE (guestfs_part_expand_gpt, arginfo_part_expand_gpt)
  PHP_FE (guestfs_part_get_bootable, arginfo_part_get_bootable)
  PHP_FE (guestfs_part_get_disk_guid, arginfo_part_get_disk_guid)
  PHP_FE (guestfs_part_get_gpt_attributes, arginfo_part_get_gpt_attributes)
  PHP_FE (guestfs_part_get_gpt_guid, arginfo_part_get_gpt_guid)
  PHP_FE (guestfs_part_get_gpt_type, arginfo_part_get_gpt_type)
  PHP_FE (guestfs_part_get_mbr_id, arginfo_part_get_mbr_id)
  PHP_FE (guestfs_part_get_mbr_part_type, arginfo_part_get_mbr_part_type)
  PHP_FE (guestfs_part_get_name, arginfo_part_get_name)
  PHP_FE (guestfs_part_get_parttype, arginfo_part_get_parttype)
  PHP_FE (guestfs_part_init, arginfo_part_init)
  PHP_FE (guestfs_part_list, arginfo_part_list)
  PHP_FE (guestfs_part_resize, arginfo_part_resize)
  PHP_FE (guestfs_part_set_bootable, arginfo_part_set_bootable)
  PHP_FE (guestfs_part_set_disk_guid, arginfo_part_set_disk_guid)
  PHP_FE (guestfs_part_set_disk_guid_random, arginfo_part_set_disk_guid_random)
  PHP_FE (guestfs_part_set_gpt_attributes, arginfo_part_set_gpt_attributes)
  PHP_FE (guestfs_part_set_gpt_guid, arginfo_part_set_gpt_guid)
  PHP_FE (guestfs_part_set_gpt_type, arginfo_part_set_gpt_type)
  PHP_FE (guestfs_part_set_mbr_id, arginfo_part_set_mbr_id)
  PHP_FE (guestfs_part_set_name, arginfo_part_set_name)
  PHP_FE (guestfs_part_to_dev, arginfo_part_to_dev)
  PHP_FE (guestfs_part_to_partnum, arginfo_part_to_partnum)
  PHP_FE (guestfs_ping_daemon, arginfo_ping_daemon)
  PHP_FE (guestfs_pread, arginfo_pread)
  PHP_FE (guestfs_pread_device, arginfo_pread_device)
  PHP_FE (guestfs_pvchange_uuid, arginfo_pvchange_uuid)
  PHP_FE (guestfs_pvchange_uuid_all, arginfo_pvchange_uuid_all)
  PHP_FE (guestfs_pvcreate, arginfo_pvcreate)
  PHP_FE (guestfs_pvremove, arginfo_pvremove)
  PHP_FE (guestfs_pvresize, arginfo_pvresize)
  PHP_FE (guestfs_pvresize_size, arginfo_pvresize_size)
  PHP_FE (guestfs_pvs, arginfo_pvs)
  PHP_FE (guestfs_pvs_full, arginfo_pvs_full)
  PHP_FE (guestfs_pvuuid, arginfo_pvuuid)
  PHP_FE (guestfs_pwrite, arginfo_pwrite)
  PHP_FE (guestfs_pwrite_device, arginfo_pwrite_device)
  PHP_FE (guestfs_read_file, arginfo_read_file)
  PHP_FE (guestfs_read_lines, arginfo_read_lines)
  PHP_FE (guestfs_readdir, arginfo_readdir)
  PHP_FE (guestfs_readlink, arginfo_readlink)
  PHP_FE (guestfs_readlinklist, arginfo_readlinklist)
  PHP_FE (guestfs_realpath, arginfo_realpath)
  PHP_FE (guestfs_remount, arginfo_remount)
  PHP_FE (guestfs_remove_drive, arginfo_remove_drive)
  PHP_FE (guestfs_removexattr, arginfo_removexattr)
  PHP_FE (guestfs_rename, arginfo_rename)
  PHP_FE (guestfs_resize2fs, arginfo_resize2fs)
  PHP_FE (guestfs_resize2fs_M, arginfo_resize2fs_M)
  PHP_FE (guestfs_resize2fs_size, arginfo_resize2fs_size)
  PHP_FE (guestfs_rm, arginfo_rm)
  PHP_FE (guestfs_rm_f, arginfo_rm_f)
  PHP_FE (guestfs_rm_rf, arginfo_rm_rf)
  PHP_FE (guestfs_rmdir, arginfo_rmdir)
  PHP_FE (guestfs_rmmountpoint, arginfo_rmmountpoint)
  PHP_FE (guestfs_rsync, arginfo_rsync)
  PHP_FE (guestfs_rsync_in, arginfo_rsync_in)
  PHP_FE (guestfs_rsync_out, arginfo_rsync_out)
  PHP_FE (guestfs_scrub_device, arginfo_scrub_device)
  PHP_FE (guestfs_scrub_file, arginfo_scrub_file)
  PHP_FE (guestfs_scrub_freespace, arginfo_scrub_freespace)
  PHP_FE (guestfs_selinux_relabel, arginfo_selinux_relabel)
  PHP_FE (guestfs_set_append, arginfo_set_append)
  PHP_FE (guestfs_set_attach_method, arginfo_set_attach_method)
  PHP_FE (guestfs_set_autosync, arginfo_set_autosync)
  PHP_FE (guestfs_set_backend, arginfo_set_backend)
  PHP_FE (guestfs_set_backend_setting, arginfo_set_backend_setting)
  PHP_FE (guestfs_set_backend_settings, arginfo_set_backend_settings)
  PHP_FE (guestfs_set_cachedir, arginfo_set_cachedir)
  PHP_FE (guestfs_set_direct, arginfo_set_direct)
  PHP_FE (guestfs_set_e2attrs, arginfo_set_e2attrs)
  PHP_FE (guestfs_set_e2generation, arginfo_set_e2generation)
  PHP_FE (guestfs_set_e2label, arginfo_set_e2label)
  PHP_FE (guestfs_set_e2uuid, arginfo_set_e2uuid)
  PHP_FE (guestfs_set_hv, arginfo_set_hv)
  PHP_FE (guestfs_set_identifier, arginfo_set_identifier)
  PHP_FE (guestfs_set_label, arginfo_set_label)
  PHP_FE (guestfs_set_libvirt_requested_credential, arginfo_set_libvirt_requested_credential)
  PHP_FE (guestfs_set_libvirt_supported_credentials, arginfo_set_libvirt_supported_credentials)
  PHP_FE (guestfs_set_memsize, arginfo_set_memsize)
  PHP_FE (guestfs_set_network, arginfo_set_network)
  PHP_FE (guestfs_set_path, arginfo_set_path)
  PHP_FE (guestfs_set_pgroup, arginfo_set_pgroup)
  PHP_FE (guestfs_set_program, arginfo_set_program)
  PHP_FE (guestfs_set_qemu, arginfo_set_qemu)
  PHP_FE (guestfs_set_recovery_proc, arginfo_set_recovery_proc)
  PHP_FE (guestfs_set_selinux, arginfo_set_selinux)
  PHP_FE (guestfs_set_smp, arginfo_set_smp)
  PHP_FE (guestfs_set_tmpdir, arginfo_set_tmpdir)
  PHP_FE (guestfs_set_trace, arginfo_set_trace)
  PHP_FE (guestfs_set_uuid, arginfo_set_uuid)
  PHP_FE (guestfs_set_uuid_random, arginfo_set_uuid_random)
  PHP_FE (guestfs_set_verbose, arginfo_set_verbose)
  PHP_FE (guestfs_setcon, arginfo_setcon)
  PHP_FE (guestfs_setxattr, arginfo_setxattr)
  PHP_FE (guestfs_sfdisk, arginfo_sfdisk)
  PHP_FE (guestfs_sfdiskM, arginfo_sfdiskM)
  PHP_FE (guestfs_sfdisk_N, arginfo_sfdisk_N)
  PHP_FE (guestfs_sfdisk_disk_geometry, arginfo_sfdisk_disk_geometry)
  PHP_FE (guestfs_sfdisk_kernel_geometry, arginfo_sfdisk_kernel_geometry)
  PHP_FE (guestfs_sfdisk_l, arginfo_sfdisk_l)
  PHP_FE (guestfs_sh, arginfo_sh)
  PHP_FE (guestfs_sh_lines, arginfo_sh_lines)
  PHP_FE (guestfs_shutdown, arginfo_shutdown)
  PHP_FE (guestfs_sleep, arginfo_sleep)
  PHP_FE (guestfs_stat, arginfo_stat)
  PHP_FE (guestfs_statns, arginfo_statns)
  PHP_FE (guestfs_statvfs, arginfo_statvfs)
  PHP_FE (guestfs_strings, arginfo_strings)
  PHP_FE (guestfs_strings_e, arginfo_strings_e)
  PHP_FE (guestfs_swapoff_device, arginfo_swapoff_device)
  PHP_FE (guestfs_swapoff_file, arginfo_swapoff_file)
  PHP_FE (guestfs_swapoff_label, arginfo_swapoff_label)
  PHP_FE (guestfs_swapoff_uuid, arginfo_swapoff_uuid)
  PHP_FE (guestfs_swapon_device, arginfo_swapon_device)
  PHP_FE (guestfs_swapon_file, arginfo_swapon_file)
  PHP_FE (guestfs_swapon_label, arginfo_swapon_label)
  PHP_FE (guestfs_swapon_uuid, arginfo_swapon_uuid)
  PHP_FE (guestfs_sync, arginfo_sync)
  PHP_FE (guestfs_syslinux, arginfo_syslinux)
  PHP_FE (guestfs_tail, arginfo_tail)
  PHP_FE (guestfs_tail_n, arginfo_tail_n)
  PHP_FE (guestfs_tar_in, arginfo_tar_in)
  PHP_FE (guestfs_tar_out, arginfo_tar_out)
  PHP_FE (guestfs_tgz_in, arginfo_tgz_in)
  PHP_FE (guestfs_tgz_out, arginfo_tgz_out)
  PHP_FE (guestfs_touch, arginfo_touch)
  PHP_FE (guestfs_truncate, arginfo_truncate)
  PHP_FE (guestfs_truncate_size, arginfo_truncate_size)
  PHP_FE (guestfs_tune2fs, arginfo_tune2fs)
  PHP_FE (guestfs_tune2fs_l, arginfo_tune2fs_l)
  PHP_FE (guestfs_txz_in, arginfo_txz_in)
  PHP_FE (guestfs_txz_out, arginfo_txz_out)
  PHP_FE (guestfs_umask, arginfo_umask)
  PHP_FE (guestfs_umount, arginfo_umount)
  PHP_FE (guestfs_umount_all, arginfo_umount_all)
  PHP_FE (guestfs_umount_local, arginfo_umount_local)
  PHP_FE (guestfs_upload, arginfo_upload)
  PHP_FE (guestfs_upload_offset, arginfo_upload_offset)
  PHP_FE (guestfs_user_cancel, arginfo_user_cancel)
  PHP_FE (guestfs_utimens, arginfo_utimens)
  PHP_FE (guestfs_utsname, arginfo_utsname)
  PHP_FE (guestfs_version, arginfo_version)
  PHP_FE (guestfs_vfs_label, arginfo_vfs_label)
  PHP_FE (guestfs_vfs_minimum_size, arginfo_vfs_minimum_size)
  PHP_FE (guestfs_vfs_type, arginfo_vfs_type)
  PHP_FE (guestfs_vfs_uuid, arginfo_vfs_uuid)
  PHP_FE (guestfs_vg_activate, arginfo_vg_activate)
  PHP_FE (guestfs_vg_activate_all, arginfo_vg_activate_all)
  PHP_FE (guestfs_vgchange_uuid, arginfo_vgchange_uuid)
  PHP_FE (guestfs_vgchange_uuid_all, arginfo_vgchange_uuid_all)
  PHP_FE (guestfs_vgcreate, arginfo_vgcreate)
  PHP_FE (guestfs_vglvuuids, arginfo_vglvuuids)
  PHP_FE (guestfs_vgmeta, arginfo_vgmeta)
  PHP_FE (guestfs_vgpvuuids, arginfo_vgpvuuids)
  PHP_FE (guestfs_vgremove, arginfo_vgremove)
  PHP_FE (guestfs_vgrename, arginfo_vgrename)
  PHP_FE (guestfs_vgs, arginfo_vgs)
  PHP_FE (guestfs_vgs_full, arginfo_vgs_full)
  PHP_FE (guestfs_vgscan, arginfo_vgscan)
  PHP_FE (guestfs_vguuid, arginfo_vguuid)
  PHP_FE (guestfs_wait_ready, arginfo_wait_ready)
  PHP_FE (guestfs_wc_c, arginfo_wc_c)
  PHP_FE (guestfs_wc_l, arginfo_wc_l)
  PHP_FE (guestfs_wc_w, arginfo_wc_w)
  PHP_FE (guestfs_wipefs, arginfo_wipefs)
  PHP_FE (guestfs_write, arginfo_write)
  PHP_FE (guestfs_write_append, arginfo_write_append)
  PHP_FE (guestfs_write_file, arginfo_write_file)
  PHP_FE (guestfs_xfs_admin, arginfo_xfs_admin)
  PHP_FE (guestfs_xfs_growfs, arginfo_xfs_growfs)
  PHP_FE (guestfs_xfs_info, arginfo_xfs_info)
  PHP_FE (guestfs_xfs_repair, arginfo_xfs_repair)
  PHP_FE (guestfs_yara_destroy, arginfo_yara_destroy)
  PHP_FE (guestfs_yara_load, arginfo_yara_load)
  PHP_FE (guestfs_yara_scan, arginfo_yara_scan)
  PHP_FE (guestfs_zegrep, arginfo_zegrep)
  PHP_FE (guestfs_zegrepi, arginfo_zegrepi)
  PHP_FE (guestfs_zero, arginfo_zero)
  PHP_FE (guestfs_zero_device, arginfo_zero_device)
  PHP_FE (guestfs_zero_free_space, arginfo_zero_free_space)
  PHP_FE (guestfs_zerofree, arginfo_zerofree)
  PHP_FE (guestfs_zfgrep, arginfo_zfgrep)
  PHP_FE (guestfs_zfgrepi, arginfo_zfgrepi)
  PHP_FE (guestfs_zfile, arginfo_zfile)
  PHP_FE (guestfs_zgrep, arginfo_zgrep)
  PHP_FE (guestfs_zgrepi, arginfo_zgrepi)
  { NULL, NULL, NULL }
};

zend_module_entry guestfs_php_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
  STANDARD_MODULE_HEADER,
#endif
  PHP_GUESTFS_PHP_EXTNAME,
  guestfs_php_functions,
  PHP_MINIT (guestfs_php),
  NULL,
  NULL,
  NULL,
  NULL,
#if ZEND_MODULE_API_NO >= 20010901
  PHP_GUESTFS_PHP_VERSION,
#endif
  STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_GUESTFS_PHP
ZEND_GET_MODULE (guestfs_php)
#endif

PHP_FUNCTION (guestfs_create)
{
  guestfs_h *g = guestfs_create ();
  if (g == NULL) {
    RETURN_FALSE;
  }

  guestfs_set_error_handler (g, NULL, NULL);

#if ZEND_MODULE_API_NO >= 20151012
  ZVAL_RES(return_value, zend_register_resource(g, res_guestfs_h));
#else
  ZEND_REGISTER_RESOURCE (return_value, g, res_guestfs_h);
#endif
}

PHP_FUNCTION (guestfs_last_error)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
                             &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  const char *err = guestfs_last_error (g);
  if (err) {
    GUESTFS_RETURN_STRING (err, 1);
  } else {
    RETURN_NULL ();
  }
}

PHP_FUNCTION (guestfs_acl_delete_def_file)
{
  zval *z_g;
  guestfs_h *g;
  char *dir;
  guestfs_string_length dir_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &dir, &dir_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (dir) != dir_size) {
    fprintf (stderr, "libguestfs: acl_delete_def_file: parameter 'dir' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_acl_delete_def_file (g, dir);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_acl_get_file)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  char *acltype;
  guestfs_string_length acltype_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &path, &path_size, &acltype, &acltype_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: acl_get_file: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (acltype) != acltype_size) {
    fprintf (stderr, "libguestfs: acl_get_file: parameter 'acltype' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_acl_get_file (g, path, acltype);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_acl_set_file)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  char *acltype;
  guestfs_string_length acltype_size;
  char *acl;
  guestfs_string_length acl_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsss",
        &z_g, &path, &path_size, &acltype, &acltype_size, &acl, &acl_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: acl_set_file: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (acltype) != acltype_size) {
    fprintf (stderr, "libguestfs: acl_set_file: parameter 'acltype' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (acl) != acl_size) {
    fprintf (stderr, "libguestfs: acl_set_file: parameter 'acl' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_acl_set_file (g, path, acltype, acl);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_add_cdrom)
{
  zval *z_g;
  guestfs_h *g;
  char *filename;
  guestfs_string_length filename_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &filename, &filename_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: add_cdrom: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_add_cdrom (g, filename);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_add_domain)
{
  zval *z_g;
  guestfs_h *g;
  char *dom;
  guestfs_string_length dom_size;
  struct guestfs_add_domain_argv optargs_s = { .bitmask = 0 };
  struct guestfs_add_domain_argv *optargs = &optargs_s;
  char *optargs_t_libvirturi = NULL;
  guestfs_string_length optargs_t_libvirturi_size = -1;
  zend_bool optargs_t_readonly = -1;
  char *optargs_t_iface = NULL;
  guestfs_string_length optargs_t_iface_size = -1;
  zend_bool optargs_t_live = -1;
  zend_bool optargs_t_allowuuid = -1;
  char *optargs_t_readonlydisk = NULL;
  guestfs_string_length optargs_t_readonlydisk_size = -1;
  char *optargs_t_cachemode = NULL;
  guestfs_string_length optargs_t_cachemode_size = -1;
  char *optargs_t_discard = NULL;
  guestfs_string_length optargs_t_discard_size = -1;
  zend_bool optargs_t_copyonread = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|sbsbbsssb",
        &z_g, &dom, &dom_size, &optargs_t_libvirturi, &optargs_t_libvirturi_size, &optargs_t_readonly, &optargs_t_iface, &optargs_t_iface_size, &optargs_t_live, &optargs_t_allowuuid, &optargs_t_readonlydisk, &optargs_t_readonlydisk_size, &optargs_t_cachemode, &optargs_t_cachemode_size, &optargs_t_discard, &optargs_t_discard_size, &optargs_t_copyonread) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (dom) != dom_size) {
    fprintf (stderr, "libguestfs: add_domain: parameter 'dom' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_libvirturi != NULL) {
    optargs_s.libvirturi = optargs_t_libvirturi;
    optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_LIBVIRTURI_BITMASK;
  }
  if (optargs_t_readonly != (zend_bool)-1) {
    optargs_s.readonly = optargs_t_readonly;
    optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_READONLY_BITMASK;
  }
  if (optargs_t_iface != NULL) {
    optargs_s.iface = optargs_t_iface;
    optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_IFACE_BITMASK;
  }
  if (optargs_t_live != (zend_bool)-1) {
    optargs_s.live = optargs_t_live;
    optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_LIVE_BITMASK;
  }
  if (optargs_t_allowuuid != (zend_bool)-1) {
    optargs_s.allowuuid = optargs_t_allowuuid;
    optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_ALLOWUUID_BITMASK;
  }
  if (optargs_t_readonlydisk != NULL) {
    optargs_s.readonlydisk = optargs_t_readonlydisk;
    optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_READONLYDISK_BITMASK;
  }
  if (optargs_t_cachemode != NULL) {
    optargs_s.cachemode = optargs_t_cachemode;
    optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_CACHEMODE_BITMASK;
  }
  if (optargs_t_discard != NULL) {
    optargs_s.discard = optargs_t_discard;
    optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_DISCARD_BITMASK;
  }
  if (optargs_t_copyonread != (zend_bool)-1) {
    optargs_s.copyonread = optargs_t_copyonread;
    optargs_s.bitmask |= GUESTFS_ADD_DOMAIN_COPYONREAD_BITMASK;
  }

  int r;
  r = guestfs_add_domain_argv (g, dom, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_add_drive)
{
  zval *z_g;
  guestfs_h *g;
  char *filename;
  guestfs_string_length filename_size;
  struct guestfs_add_drive_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_add_drive_opts_argv *optargs = &optargs_s;
  zend_bool optargs_t_readonly = -1;
  char *optargs_t_format = NULL;
  guestfs_string_length optargs_t_format_size = -1;
  char *optargs_t_iface = NULL;
  guestfs_string_length optargs_t_iface_size = -1;
  char *optargs_t_name = NULL;
  guestfs_string_length optargs_t_name_size = -1;
  char *optargs_t_label = NULL;
  guestfs_string_length optargs_t_label_size = -1;
  char *optargs_t_protocol = NULL;
  guestfs_string_length optargs_t_protocol_size = -1;
  zval *optargs_t_server = NULL;
  char *optargs_t_username = NULL;
  guestfs_string_length optargs_t_username_size = -1;
  char *optargs_t_secret = NULL;
  guestfs_string_length optargs_t_secret_size = -1;
  char *optargs_t_cachemode = NULL;
  guestfs_string_length optargs_t_cachemode_size = -1;
  char *optargs_t_discard = NULL;
  guestfs_string_length optargs_t_discard_size = -1;
  zend_bool optargs_t_copyonread = -1;
  long optargs_t_blocksize = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|bsssssa!ssssbl",
        &z_g, &filename, &filename_size, &optargs_t_readonly, &optargs_t_format, &optargs_t_format_size, &optargs_t_iface, &optargs_t_iface_size, &optargs_t_name, &optargs_t_name_size, &optargs_t_label, &optargs_t_label_size, &optargs_t_protocol, &optargs_t_protocol_size, &optargs_t_server, &optargs_t_username, &optargs_t_username_size, &optargs_t_secret, &optargs_t_secret_size, &optargs_t_cachemode, &optargs_t_cachemode_size, &optargs_t_discard, &optargs_t_discard_size, &optargs_t_copyonread, &optargs_t_blocksize) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: add_drive: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_readonly != (zend_bool)-1) {
    optargs_s.readonly = optargs_t_readonly;
    optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_READONLY_BITMASK;
  }
  if (optargs_t_format != NULL) {
    optargs_s.format = optargs_t_format;
    optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_FORMAT_BITMASK;
  }
  if (optargs_t_iface != NULL) {
    optargs_s.iface = optargs_t_iface;
    optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_IFACE_BITMASK;
  }
  if (optargs_t_name != NULL) {
    optargs_s.name = optargs_t_name;
    optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_NAME_BITMASK;
  }
  if (optargs_t_label != NULL) {
    optargs_s.label = optargs_t_label;
    optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_LABEL_BITMASK;
  }
  if (optargs_t_protocol != NULL) {
    optargs_s.protocol = optargs_t_protocol;
    optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_PROTOCOL_BITMASK;
  }
  /* We've seen PHP give us a *long* here when we asked for an array, so
   * positively check that it gave us an array, otherwise ignore it.
   */
  if (optargs_t_server != NULL && Z_TYPE_P (optargs_t_server) == IS_ARRAY) {
    optargs_s.server = get_stringlist (optargs_t_server);
    optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_SERVER_BITMASK;
  }
  if (optargs_t_username != NULL) {
    optargs_s.username = optargs_t_username;
    optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_USERNAME_BITMASK;
  }
  if (optargs_t_secret != NULL) {
    optargs_s.secret = optargs_t_secret;
    optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_SECRET_BITMASK;
  }
  if (optargs_t_cachemode != NULL) {
    optargs_s.cachemode = optargs_t_cachemode;
    optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_CACHEMODE_BITMASK;
  }
  if (optargs_t_discard != NULL) {
    optargs_s.discard = optargs_t_discard;
    optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_DISCARD_BITMASK;
  }
  if (optargs_t_copyonread != (zend_bool)-1) {
    optargs_s.copyonread = optargs_t_copyonread;
    optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_COPYONREAD_BITMASK;
  }
  if (optargs_t_blocksize != -1) {
    optargs_s.blocksize = optargs_t_blocksize;
    optargs_s.bitmask |= GUESTFS_ADD_DRIVE_OPTS_BLOCKSIZE_BITMASK;
  }

  int r;
  r = guestfs_add_drive_opts_argv (g, filename, optargs);

  if ((optargs_s.bitmask & GUESTFS_ADD_DRIVE_OPTS_SERVER_BITMASK) != 0)
    guestfs_efree_stringlist ((char **) optargs_s.server);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_add_drive_ro)
{
  zval *z_g;
  guestfs_h *g;
  char *filename;
  guestfs_string_length filename_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &filename, &filename_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: add_drive_ro: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_add_drive_ro (g, filename);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_add_drive_ro_with_if)
{
  zval *z_g;
  guestfs_h *g;
  char *filename;
  guestfs_string_length filename_size;
  char *iface;
  guestfs_string_length iface_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &filename, &filename_size, &iface, &iface_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: add_drive_ro_with_if: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (iface) != iface_size) {
    fprintf (stderr, "libguestfs: add_drive_ro_with_if: parameter 'iface' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_add_drive_ro_with_if (g, filename, iface);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_add_drive_scratch)
{
  zval *z_g;
  guestfs_h *g;
  long size;
  struct guestfs_add_drive_scratch_argv optargs_s = { .bitmask = 0 };
  struct guestfs_add_drive_scratch_argv *optargs = &optargs_s;
  char *optargs_t_name = NULL;
  guestfs_string_length optargs_t_name_size = -1;
  char *optargs_t_label = NULL;
  guestfs_string_length optargs_t_label_size = -1;
  long optargs_t_blocksize = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl|ssl",
        &z_g, &size, &optargs_t_name, &optargs_t_name_size, &optargs_t_label, &optargs_t_label_size, &optargs_t_blocksize) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (optargs_t_name != NULL) {
    optargs_s.name = optargs_t_name;
    optargs_s.bitmask |= GUESTFS_ADD_DRIVE_SCRATCH_NAME_BITMASK;
  }
  if (optargs_t_label != NULL) {
    optargs_s.label = optargs_t_label;
    optargs_s.bitmask |= GUESTFS_ADD_DRIVE_SCRATCH_LABEL_BITMASK;
  }
  if (optargs_t_blocksize != -1) {
    optargs_s.blocksize = optargs_t_blocksize;
    optargs_s.bitmask |= GUESTFS_ADD_DRIVE_SCRATCH_BLOCKSIZE_BITMASK;
  }

  int r;
  r = guestfs_add_drive_scratch_argv (g, size, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_add_drive_with_if)
{
  zval *z_g;
  guestfs_h *g;
  char *filename;
  guestfs_string_length filename_size;
  char *iface;
  guestfs_string_length iface_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &filename, &filename_size, &iface, &iface_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: add_drive_with_if: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (iface) != iface_size) {
    fprintf (stderr, "libguestfs: add_drive_with_if: parameter 'iface' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_add_drive_with_if (g, filename, iface);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_add_libvirt_dom)
{
  zval *z_g;
  guestfs_h *g;
  void * /* virDomainPtr */ dom;
  struct guestfs_add_libvirt_dom_argv optargs_s = { .bitmask = 0 };
  struct guestfs_add_libvirt_dom_argv *optargs = &optargs_s;
  zend_bool optargs_t_readonly = -1;
  char *optargs_t_iface = NULL;
  guestfs_string_length optargs_t_iface_size = -1;
  zend_bool optargs_t_live = -1;
  char *optargs_t_readonlydisk = NULL;
  guestfs_string_length optargs_t_readonlydisk_size = -1;
  char *optargs_t_cachemode = NULL;
  guestfs_string_length optargs_t_cachemode_size = -1;
  char *optargs_t_discard = NULL;
  guestfs_string_length optargs_t_discard_size = -1;
  zend_bool optargs_t_copyonread = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r|bsbsssb",
        &z_g, &optargs_t_readonly, &optargs_t_iface, &optargs_t_iface_size, &optargs_t_live, &optargs_t_readonlydisk, &optargs_t_readonlydisk_size, &optargs_t_cachemode, &optargs_t_cachemode_size, &optargs_t_discard, &optargs_t_discard_size, &optargs_t_copyonread) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  dom = POINTER_NOT_IMPLEMENTED ("virDomainPtr");
  if (optargs_t_readonly != (zend_bool)-1) {
    optargs_s.readonly = optargs_t_readonly;
    optargs_s.bitmask |= GUESTFS_ADD_LIBVIRT_DOM_READONLY_BITMASK;
  }
  if (optargs_t_iface != NULL) {
    optargs_s.iface = optargs_t_iface;
    optargs_s.bitmask |= GUESTFS_ADD_LIBVIRT_DOM_IFACE_BITMASK;
  }
  if (optargs_t_live != (zend_bool)-1) {
    optargs_s.live = optargs_t_live;
    optargs_s.bitmask |= GUESTFS_ADD_LIBVIRT_DOM_LIVE_BITMASK;
  }
  if (optargs_t_readonlydisk != NULL) {
    optargs_s.readonlydisk = optargs_t_readonlydisk;
    optargs_s.bitmask |= GUESTFS_ADD_LIBVIRT_DOM_READONLYDISK_BITMASK;
  }
  if (optargs_t_cachemode != NULL) {
    optargs_s.cachemode = optargs_t_cachemode;
    optargs_s.bitmask |= GUESTFS_ADD_LIBVIRT_DOM_CACHEMODE_BITMASK;
  }
  if (optargs_t_discard != NULL) {
    optargs_s.discard = optargs_t_discard;
    optargs_s.bitmask |= GUESTFS_ADD_LIBVIRT_DOM_DISCARD_BITMASK;
  }
  if (optargs_t_copyonread != (zend_bool)-1) {
    optargs_s.copyonread = optargs_t_copyonread;
    optargs_s.bitmask |= GUESTFS_ADD_LIBVIRT_DOM_COPYONREAD_BITMASK;
  }

  int r;
  r = guestfs_add_libvirt_dom_argv (g, dom, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_aug_clear)
{
  zval *z_g;
  guestfs_h *g;
  char *augpath;
  guestfs_string_length augpath_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &augpath, &augpath_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (augpath) != augpath_size) {
    fprintf (stderr, "libguestfs: aug_clear: parameter 'augpath' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_aug_clear (g, augpath);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_aug_close)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_aug_close (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_aug_defnode)
{
  zval *z_g;
  guestfs_h *g;
  char *name;
  guestfs_string_length name_size;
  char *expr;
  guestfs_string_length expr_size;
  char *val;
  guestfs_string_length val_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsss",
        &z_g, &name, &name_size, &expr, &expr_size, &val, &val_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (name) != name_size) {
    fprintf (stderr, "libguestfs: aug_defnode: parameter 'name' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (expr) != expr_size) {
    fprintf (stderr, "libguestfs: aug_defnode: parameter 'expr' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (val) != val_size) {
    fprintf (stderr, "libguestfs: aug_defnode: parameter 'val' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_int_bool *r;
  r = guestfs_aug_defnode (g, name, expr, val);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  add_assoc_long (return_value, "i", r->i);
  add_assoc_long (return_value, "b", r->b);
  guestfs_free_int_bool (r);
}

PHP_FUNCTION (guestfs_aug_defvar)
{
  zval *z_g;
  guestfs_h *g;
  char *name;
  guestfs_string_length name_size;
  char *expr = NULL;
  guestfs_string_length expr_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss!",
        &z_g, &name, &name_size, &expr, &expr_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (name) != name_size) {
    fprintf (stderr, "libguestfs: aug_defvar: parameter 'name' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (expr != NULL && strlen (expr) != expr_size) {
    fprintf (stderr, "libguestfs: aug_defvar: parameter 'expr' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_aug_defvar (g, name, expr);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_aug_get)
{
  zval *z_g;
  guestfs_h *g;
  char *augpath;
  guestfs_string_length augpath_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &augpath, &augpath_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (augpath) != augpath_size) {
    fprintf (stderr, "libguestfs: aug_get: parameter 'augpath' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_aug_get (g, augpath);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_aug_init)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;
  long flags;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &root, &root_size, &flags) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: aug_init: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_aug_init (g, root, flags);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_aug_insert)
{
  zval *z_g;
  guestfs_h *g;
  char *augpath;
  guestfs_string_length augpath_size;
  char *label;
  guestfs_string_length label_size;
  zend_bool before;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssb",
        &z_g, &augpath, &augpath_size, &label, &label_size, &before) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (augpath) != augpath_size) {
    fprintf (stderr, "libguestfs: aug_insert: parameter 'augpath' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (label) != label_size) {
    fprintf (stderr, "libguestfs: aug_insert: parameter 'label' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_aug_insert (g, augpath, label, before);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_aug_label)
{
  zval *z_g;
  guestfs_h *g;
  char *augpath;
  guestfs_string_length augpath_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &augpath, &augpath_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (augpath) != augpath_size) {
    fprintf (stderr, "libguestfs: aug_label: parameter 'augpath' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_aug_label (g, augpath);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_aug_load)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_aug_load (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_aug_ls)
{
  zval *z_g;
  guestfs_h *g;
  char *augpath;
  guestfs_string_length augpath_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &augpath, &augpath_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (augpath) != augpath_size) {
    fprintf (stderr, "libguestfs: aug_ls: parameter 'augpath' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_aug_ls (g, augpath);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_aug_match)
{
  zval *z_g;
  guestfs_h *g;
  char *augpath;
  guestfs_string_length augpath_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &augpath, &augpath_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (augpath) != augpath_size) {
    fprintf (stderr, "libguestfs: aug_match: parameter 'augpath' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_aug_match (g, augpath);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_aug_mv)
{
  zval *z_g;
  guestfs_h *g;
  char *src;
  guestfs_string_length src_size;
  char *dest;
  guestfs_string_length dest_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &src, &src_size, &dest, &dest_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (src) != src_size) {
    fprintf (stderr, "libguestfs: aug_mv: parameter 'src' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (dest) != dest_size) {
    fprintf (stderr, "libguestfs: aug_mv: parameter 'dest' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_aug_mv (g, src, dest);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_aug_rm)
{
  zval *z_g;
  guestfs_h *g;
  char *augpath;
  guestfs_string_length augpath_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &augpath, &augpath_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (augpath) != augpath_size) {
    fprintf (stderr, "libguestfs: aug_rm: parameter 'augpath' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_aug_rm (g, augpath);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_aug_save)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_aug_save (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_aug_set)
{
  zval *z_g;
  guestfs_h *g;
  char *augpath;
  guestfs_string_length augpath_size;
  char *val;
  guestfs_string_length val_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &augpath, &augpath_size, &val, &val_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (augpath) != augpath_size) {
    fprintf (stderr, "libguestfs: aug_set: parameter 'augpath' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (val) != val_size) {
    fprintf (stderr, "libguestfs: aug_set: parameter 'val' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_aug_set (g, augpath, val);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_aug_setm)
{
  zval *z_g;
  guestfs_h *g;
  char *base;
  guestfs_string_length base_size;
  char *sub = NULL;
  guestfs_string_length sub_size;
  char *val;
  guestfs_string_length val_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss!s",
        &z_g, &base, &base_size, &sub, &sub_size, &val, &val_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (base) != base_size) {
    fprintf (stderr, "libguestfs: aug_setm: parameter 'base' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (sub != NULL && strlen (sub) != sub_size) {
    fprintf (stderr, "libguestfs: aug_setm: parameter 'sub' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (val) != val_size) {
    fprintf (stderr, "libguestfs: aug_setm: parameter 'val' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_aug_setm (g, base, sub, val);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_aug_transform)
{
  zval *z_g;
  guestfs_h *g;
  char *lens;
  guestfs_string_length lens_size;
  char *file;
  guestfs_string_length file_size;
  struct guestfs_aug_transform_argv optargs_s = { .bitmask = 0 };
  struct guestfs_aug_transform_argv *optargs = &optargs_s;
  zend_bool optargs_t_remove = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|b",
        &z_g, &lens, &lens_size, &file, &file_size, &optargs_t_remove) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (lens) != lens_size) {
    fprintf (stderr, "libguestfs: aug_transform: parameter 'lens' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (file) != file_size) {
    fprintf (stderr, "libguestfs: aug_transform: parameter 'file' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_remove != (zend_bool)-1) {
    optargs_s.remove = optargs_t_remove;
    optargs_s.bitmask |= GUESTFS_AUG_TRANSFORM_REMOVE_BITMASK;
  }

  int r;
  r = guestfs_aug_transform_argv (g, lens, file, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_available)
{
  zval *z_g;
  guestfs_h *g;
  zval *z_groups;
  char **groups;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "ra",
        &z_g, &z_groups) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  groups = get_stringlist (z_groups);

  int r;
  r = guestfs_available (g, groups);

  guestfs_efree_stringlist (groups);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_available_all_groups)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_available_all_groups (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_base64_in)
{
  zval *z_g;
  guestfs_h *g;
  char *base64file;
  guestfs_string_length base64file_size;
  char *filename;
  guestfs_string_length filename_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &base64file, &base64file_size, &filename, &filename_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (base64file) != base64file_size) {
    fprintf (stderr, "libguestfs: base64_in: parameter 'base64file' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: base64_in: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_base64_in (g, base64file, filename);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_base64_out)
{
  zval *z_g;
  guestfs_h *g;
  char *filename;
  guestfs_string_length filename_size;
  char *base64file;
  guestfs_string_length base64file_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &filename, &filename_size, &base64file, &base64file_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: base64_out: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (base64file) != base64file_size) {
    fprintf (stderr, "libguestfs: base64_out: parameter 'base64file' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_base64_out (g, filename, base64file);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_blkdiscard)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: blkdiscard: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_blkdiscard (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_blkdiscardzeroes)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: blkdiscardzeroes: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_blkdiscardzeroes (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_blkid)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: blkid: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_blkid (g, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; c += 2) {
    guestfs_add_assoc_string (return_value, r[c], r[c+1], 1);
    free (r[c]);
    free (r[c+1]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_blockdev_flushbufs)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: blockdev_flushbufs: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_blockdev_flushbufs (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_blockdev_getbsz)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: blockdev_getbsz: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_blockdev_getbsz (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_blockdev_getro)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: blockdev_getro: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_blockdev_getro (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_blockdev_getsize64)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: blockdev_getsize64: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_blockdev_getsize64 (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_blockdev_getss)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: blockdev_getss: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_blockdev_getss (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_blockdev_getsz)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: blockdev_getsz: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_blockdev_getsz (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_blockdev_rereadpt)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: blockdev_rereadpt: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_blockdev_rereadpt (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_blockdev_setbsz)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long blocksize;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &device, &device_size, &blocksize) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: blockdev_setbsz: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_blockdev_setbsz (g, device, blocksize);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_blockdev_setra)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long sectors;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &device, &device_size, &sectors) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: blockdev_setra: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_blockdev_setra (g, device, sectors);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_blockdev_setro)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: blockdev_setro: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_blockdev_setro (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_blockdev_setrw)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: blockdev_setrw: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_blockdev_setrw (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_balance_cancel)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: btrfs_balance_cancel: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_balance_cancel (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_balance_pause)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: btrfs_balance_pause: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_balance_pause (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_balance_resume)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: btrfs_balance_resume: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_balance_resume (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_balance_status)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: btrfs_balance_status: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_btrfsbalance *r;
  r = guestfs_btrfs_balance_status (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  guestfs_add_assoc_string (return_value, "btrfsbalance_status", r->btrfsbalance_status, 1);
  add_assoc_long (return_value, "btrfsbalance_total", r->btrfsbalance_total);
  add_assoc_long (return_value, "btrfsbalance_balanced", r->btrfsbalance_balanced);
  add_assoc_long (return_value, "btrfsbalance_considered", r->btrfsbalance_considered);
  add_assoc_long (return_value, "btrfsbalance_left", r->btrfsbalance_left);
  guestfs_free_btrfsbalance (r);
}

PHP_FUNCTION (guestfs_btrfs_device_add)
{
  zval *z_g;
  guestfs_h *g;
  zval *z_devices;
  char **devices;
  char *fs;
  guestfs_string_length fs_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "ras",
        &z_g, &z_devices, &fs, &fs_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  devices = get_stringlist (z_devices);

  if (strlen (fs) != fs_size) {
    fprintf (stderr, "libguestfs: btrfs_device_add: parameter 'fs' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_device_add (g, devices, fs);

  guestfs_efree_stringlist (devices);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_device_delete)
{
  zval *z_g;
  guestfs_h *g;
  zval *z_devices;
  char **devices;
  char *fs;
  guestfs_string_length fs_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "ras",
        &z_g, &z_devices, &fs, &fs_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  devices = get_stringlist (z_devices);

  if (strlen (fs) != fs_size) {
    fprintf (stderr, "libguestfs: btrfs_device_delete: parameter 'fs' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_device_delete (g, devices, fs);

  guestfs_efree_stringlist (devices);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_filesystem_balance)
{
  zval *z_g;
  guestfs_h *g;
  char *fs;
  guestfs_string_length fs_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &fs, &fs_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (fs) != fs_size) {
    fprintf (stderr, "libguestfs: btrfs_filesystem_balance: parameter 'fs' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_filesystem_balance (g, fs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_filesystem_defragment)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  struct guestfs_btrfs_filesystem_defragment_argv optargs_s = { .bitmask = 0 };
  struct guestfs_btrfs_filesystem_defragment_argv *optargs = &optargs_s;
  zend_bool optargs_t_flush = -1;
  char *optargs_t_compress = NULL;
  guestfs_string_length optargs_t_compress_size = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|bs",
        &z_g, &path, &path_size, &optargs_t_flush, &optargs_t_compress, &optargs_t_compress_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: btrfs_filesystem_defragment: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_flush != (zend_bool)-1) {
    optargs_s.flush = optargs_t_flush;
    optargs_s.bitmask |= GUESTFS_BTRFS_FILESYSTEM_DEFRAGMENT_FLUSH_BITMASK;
  }
  if (optargs_t_compress != NULL) {
    optargs_s.compress = optargs_t_compress;
    optargs_s.bitmask |= GUESTFS_BTRFS_FILESYSTEM_DEFRAGMENT_COMPRESS_BITMASK;
  }

  int r;
  r = guestfs_btrfs_filesystem_defragment_argv (g, path, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_filesystem_resize)
{
  zval *z_g;
  guestfs_h *g;
  char *mountpoint;
  guestfs_string_length mountpoint_size;
  struct guestfs_btrfs_filesystem_resize_argv optargs_s = { .bitmask = 0 };
  struct guestfs_btrfs_filesystem_resize_argv *optargs = &optargs_s;
  long optargs_t_size = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|l",
        &z_g, &mountpoint, &mountpoint_size, &optargs_t_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (mountpoint) != mountpoint_size) {
    fprintf (stderr, "libguestfs: btrfs_filesystem_resize: parameter 'mountpoint' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_size != -1) {
    optargs_s.size = optargs_t_size;
    optargs_s.bitmask |= GUESTFS_BTRFS_FILESYSTEM_RESIZE_SIZE_BITMASK;
  }

  int r;
  r = guestfs_btrfs_filesystem_resize_argv (g, mountpoint, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_filesystem_show)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: btrfs_filesystem_show: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_btrfs_filesystem_show (g, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_btrfs_filesystem_sync)
{
  zval *z_g;
  guestfs_h *g;
  char *fs;
  guestfs_string_length fs_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &fs, &fs_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (fs) != fs_size) {
    fprintf (stderr, "libguestfs: btrfs_filesystem_sync: parameter 'fs' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_filesystem_sync (g, fs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_fsck)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  struct guestfs_btrfs_fsck_argv optargs_s = { .bitmask = 0 };
  struct guestfs_btrfs_fsck_argv *optargs = &optargs_s;
  long optargs_t_superblock = -1;
  zend_bool optargs_t_repair = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|lb",
        &z_g, &device, &device_size, &optargs_t_superblock, &optargs_t_repair) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: btrfs_fsck: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_superblock != -1) {
    optargs_s.superblock = optargs_t_superblock;
    optargs_s.bitmask |= GUESTFS_BTRFS_FSCK_SUPERBLOCK_BITMASK;
  }
  if (optargs_t_repair != (zend_bool)-1) {
    optargs_s.repair = optargs_t_repair;
    optargs_s.bitmask |= GUESTFS_BTRFS_FSCK_REPAIR_BITMASK;
  }

  int r;
  r = guestfs_btrfs_fsck_argv (g, device, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_image)
{
  zval *z_g;
  guestfs_h *g;
  zval *z_source;
  char **source;
  char *image;
  guestfs_string_length image_size;
  struct guestfs_btrfs_image_argv optargs_s = { .bitmask = 0 };
  struct guestfs_btrfs_image_argv *optargs = &optargs_s;
  long optargs_t_compresslevel = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "ras|l",
        &z_g, &z_source, &image, &image_size, &optargs_t_compresslevel) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  source = get_stringlist (z_source);

  if (strlen (image) != image_size) {
    fprintf (stderr, "libguestfs: btrfs_image: parameter 'image' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_compresslevel != -1) {
    optargs_s.compresslevel = optargs_t_compresslevel;
    optargs_s.bitmask |= GUESTFS_BTRFS_IMAGE_COMPRESSLEVEL_BITMASK;
  }

  int r;
  r = guestfs_btrfs_image_argv (g, source, image, optargs);

  guestfs_efree_stringlist (source);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_qgroup_assign)
{
  zval *z_g;
  guestfs_h *g;
  char *src;
  guestfs_string_length src_size;
  char *dst;
  guestfs_string_length dst_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsss",
        &z_g, &src, &src_size, &dst, &dst_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (src) != src_size) {
    fprintf (stderr, "libguestfs: btrfs_qgroup_assign: parameter 'src' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (dst) != dst_size) {
    fprintf (stderr, "libguestfs: btrfs_qgroup_assign: parameter 'dst' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: btrfs_qgroup_assign: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_qgroup_assign (g, src, dst, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_qgroup_create)
{
  zval *z_g;
  guestfs_h *g;
  char *qgroupid;
  guestfs_string_length qgroupid_size;
  char *subvolume;
  guestfs_string_length subvolume_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &qgroupid, &qgroupid_size, &subvolume, &subvolume_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (qgroupid) != qgroupid_size) {
    fprintf (stderr, "libguestfs: btrfs_qgroup_create: parameter 'qgroupid' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (subvolume) != subvolume_size) {
    fprintf (stderr, "libguestfs: btrfs_qgroup_create: parameter 'subvolume' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_qgroup_create (g, qgroupid, subvolume);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_qgroup_destroy)
{
  zval *z_g;
  guestfs_h *g;
  char *qgroupid;
  guestfs_string_length qgroupid_size;
  char *subvolume;
  guestfs_string_length subvolume_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &qgroupid, &qgroupid_size, &subvolume, &subvolume_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (qgroupid) != qgroupid_size) {
    fprintf (stderr, "libguestfs: btrfs_qgroup_destroy: parameter 'qgroupid' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (subvolume) != subvolume_size) {
    fprintf (stderr, "libguestfs: btrfs_qgroup_destroy: parameter 'subvolume' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_qgroup_destroy (g, qgroupid, subvolume);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_qgroup_limit)
{
  zval *z_g;
  guestfs_h *g;
  char *subvolume;
  guestfs_string_length subvolume_size;
  long size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &subvolume, &subvolume_size, &size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (subvolume) != subvolume_size) {
    fprintf (stderr, "libguestfs: btrfs_qgroup_limit: parameter 'subvolume' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_qgroup_limit (g, subvolume, size);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_qgroup_remove)
{
  zval *z_g;
  guestfs_h *g;
  char *src;
  guestfs_string_length src_size;
  char *dst;
  guestfs_string_length dst_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsss",
        &z_g, &src, &src_size, &dst, &dst_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (src) != src_size) {
    fprintf (stderr, "libguestfs: btrfs_qgroup_remove: parameter 'src' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (dst) != dst_size) {
    fprintf (stderr, "libguestfs: btrfs_qgroup_remove: parameter 'dst' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: btrfs_qgroup_remove: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_qgroup_remove (g, src, dst, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_qgroup_show)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: btrfs_qgroup_show: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_btrfsqgroup_list *r;
  r = guestfs_btrfs_qgroup_show (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    guestfs_add_assoc_string (z_elem, "btrfsqgroup_id", r->val[c].btrfsqgroup_id, 1);
    add_assoc_long (z_elem, "btrfsqgroup_rfer", r->val[c].btrfsqgroup_rfer);
    add_assoc_long (z_elem, "btrfsqgroup_excl", r->val[c].btrfsqgroup_excl);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_btrfsqgroup_list (r);
}

PHP_FUNCTION (guestfs_btrfs_quota_enable)
{
  zval *z_g;
  guestfs_h *g;
  char *fs;
  guestfs_string_length fs_size;
  zend_bool enable;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsb",
        &z_g, &fs, &fs_size, &enable) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (fs) != fs_size) {
    fprintf (stderr, "libguestfs: btrfs_quota_enable: parameter 'fs' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_quota_enable (g, fs, enable);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_quota_rescan)
{
  zval *z_g;
  guestfs_h *g;
  char *fs;
  guestfs_string_length fs_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &fs, &fs_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (fs) != fs_size) {
    fprintf (stderr, "libguestfs: btrfs_quota_rescan: parameter 'fs' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_quota_rescan (g, fs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_replace)
{
  zval *z_g;
  guestfs_h *g;
  char *srcdev;
  guestfs_string_length srcdev_size;
  char *targetdev;
  guestfs_string_length targetdev_size;
  char *mntpoint;
  guestfs_string_length mntpoint_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsss",
        &z_g, &srcdev, &srcdev_size, &targetdev, &targetdev_size, &mntpoint, &mntpoint_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (srcdev) != srcdev_size) {
    fprintf (stderr, "libguestfs: btrfs_replace: parameter 'srcdev' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (targetdev) != targetdev_size) {
    fprintf (stderr, "libguestfs: btrfs_replace: parameter 'targetdev' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (mntpoint) != mntpoint_size) {
    fprintf (stderr, "libguestfs: btrfs_replace: parameter 'mntpoint' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_replace (g, srcdev, targetdev, mntpoint);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_rescue_chunk_recover)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: btrfs_rescue_chunk_recover: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_rescue_chunk_recover (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_rescue_super_recover)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: btrfs_rescue_super_recover: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_rescue_super_recover (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_scrub_cancel)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: btrfs_scrub_cancel: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_scrub_cancel (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_scrub_resume)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: btrfs_scrub_resume: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_scrub_resume (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_scrub_start)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: btrfs_scrub_start: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_scrub_start (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_scrub_status)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: btrfs_scrub_status: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_btrfsscrub *r;
  r = guestfs_btrfs_scrub_status (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  add_assoc_long (return_value, "btrfsscrub_data_extents_scrubbed", r->btrfsscrub_data_extents_scrubbed);
  add_assoc_long (return_value, "btrfsscrub_tree_extents_scrubbed", r->btrfsscrub_tree_extents_scrubbed);
  add_assoc_long (return_value, "btrfsscrub_data_bytes_scrubbed", r->btrfsscrub_data_bytes_scrubbed);
  add_assoc_long (return_value, "btrfsscrub_tree_bytes_scrubbed", r->btrfsscrub_tree_bytes_scrubbed);
  add_assoc_long (return_value, "btrfsscrub_read_errors", r->btrfsscrub_read_errors);
  add_assoc_long (return_value, "btrfsscrub_csum_errors", r->btrfsscrub_csum_errors);
  add_assoc_long (return_value, "btrfsscrub_verify_errors", r->btrfsscrub_verify_errors);
  add_assoc_long (return_value, "btrfsscrub_no_csum", r->btrfsscrub_no_csum);
  add_assoc_long (return_value, "btrfsscrub_csum_discards", r->btrfsscrub_csum_discards);
  add_assoc_long (return_value, "btrfsscrub_super_errors", r->btrfsscrub_super_errors);
  add_assoc_long (return_value, "btrfsscrub_malloc_errors", r->btrfsscrub_malloc_errors);
  add_assoc_long (return_value, "btrfsscrub_uncorrectable_errors", r->btrfsscrub_uncorrectable_errors);
  add_assoc_long (return_value, "btrfsscrub_unverified_errors", r->btrfsscrub_unverified_errors);
  add_assoc_long (return_value, "btrfsscrub_corrected_errors", r->btrfsscrub_corrected_errors);
  add_assoc_long (return_value, "btrfsscrub_last_physical", r->btrfsscrub_last_physical);
  guestfs_free_btrfsscrub (r);
}

PHP_FUNCTION (guestfs_btrfs_set_seeding)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  zend_bool seeding;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsb",
        &z_g, &device, &device_size, &seeding) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: btrfs_set_seeding: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_set_seeding (g, device, seeding);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_subvolume_create)
{
  zval *z_g;
  guestfs_h *g;
  char *dest;
  guestfs_string_length dest_size;
  struct guestfs_btrfs_subvolume_create_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_btrfs_subvolume_create_opts_argv *optargs = &optargs_s;
  char *optargs_t_qgroupid = NULL;
  guestfs_string_length optargs_t_qgroupid_size = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|s",
        &z_g, &dest, &dest_size, &optargs_t_qgroupid, &optargs_t_qgroupid_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (dest) != dest_size) {
    fprintf (stderr, "libguestfs: btrfs_subvolume_create: parameter 'dest' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_qgroupid != NULL) {
    optargs_s.qgroupid = optargs_t_qgroupid;
    optargs_s.bitmask |= GUESTFS_BTRFS_SUBVOLUME_CREATE_OPTS_QGROUPID_BITMASK;
  }

  int r;
  r = guestfs_btrfs_subvolume_create_opts_argv (g, dest, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_subvolume_delete)
{
  zval *z_g;
  guestfs_h *g;
  char *subvolume;
  guestfs_string_length subvolume_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &subvolume, &subvolume_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (subvolume) != subvolume_size) {
    fprintf (stderr, "libguestfs: btrfs_subvolume_delete: parameter 'subvolume' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_subvolume_delete (g, subvolume);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_subvolume_get_default)
{
  zval *z_g;
  guestfs_h *g;
  char *fs;
  guestfs_string_length fs_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &fs, &fs_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (fs) != fs_size) {
    fprintf (stderr, "libguestfs: btrfs_subvolume_get_default: parameter 'fs' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_btrfs_subvolume_get_default (g, fs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_btrfs_subvolume_list)
{
  zval *z_g;
  guestfs_h *g;
  char *fs;
  guestfs_string_length fs_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &fs, &fs_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (fs) != fs_size) {
    fprintf (stderr, "libguestfs: btrfs_subvolume_list: parameter 'fs' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_btrfssubvolume_list *r;
  r = guestfs_btrfs_subvolume_list (g, fs);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    add_assoc_long (z_elem, "btrfssubvolume_id", r->val[c].btrfssubvolume_id);
    add_assoc_long (z_elem, "btrfssubvolume_top_level_id", r->val[c].btrfssubvolume_top_level_id);
    guestfs_add_assoc_string (z_elem, "btrfssubvolume_path", r->val[c].btrfssubvolume_path, 1);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_btrfssubvolume_list (r);
}

PHP_FUNCTION (guestfs_btrfs_subvolume_set_default)
{
  zval *z_g;
  guestfs_h *g;
  long id;
  char *fs;
  guestfs_string_length fs_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rls",
        &z_g, &id, &fs, &fs_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (fs) != fs_size) {
    fprintf (stderr, "libguestfs: btrfs_subvolume_set_default: parameter 'fs' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfs_subvolume_set_default (g, id, fs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfs_subvolume_show)
{
  zval *z_g;
  guestfs_h *g;
  char *subvolume;
  guestfs_string_length subvolume_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &subvolume, &subvolume_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (subvolume) != subvolume_size) {
    fprintf (stderr, "libguestfs: btrfs_subvolume_show: parameter 'subvolume' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_btrfs_subvolume_show (g, subvolume);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; c += 2) {
    guestfs_add_assoc_string (return_value, r[c], r[c+1], 1);
    free (r[c]);
    free (r[c+1]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_btrfs_subvolume_snapshot)
{
  zval *z_g;
  guestfs_h *g;
  char *source;
  guestfs_string_length source_size;
  char *dest;
  guestfs_string_length dest_size;
  struct guestfs_btrfs_subvolume_snapshot_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_btrfs_subvolume_snapshot_opts_argv *optargs = &optargs_s;
  zend_bool optargs_t_ro = -1;
  char *optargs_t_qgroupid = NULL;
  guestfs_string_length optargs_t_qgroupid_size = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|bs",
        &z_g, &source, &source_size, &dest, &dest_size, &optargs_t_ro, &optargs_t_qgroupid, &optargs_t_qgroupid_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (source) != source_size) {
    fprintf (stderr, "libguestfs: btrfs_subvolume_snapshot: parameter 'source' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (dest) != dest_size) {
    fprintf (stderr, "libguestfs: btrfs_subvolume_snapshot: parameter 'dest' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_ro != (zend_bool)-1) {
    optargs_s.ro = optargs_t_ro;
    optargs_s.bitmask |= GUESTFS_BTRFS_SUBVOLUME_SNAPSHOT_OPTS_RO_BITMASK;
  }
  if (optargs_t_qgroupid != NULL) {
    optargs_s.qgroupid = optargs_t_qgroupid;
    optargs_s.bitmask |= GUESTFS_BTRFS_SUBVOLUME_SNAPSHOT_OPTS_QGROUPID_BITMASK;
  }

  int r;
  r = guestfs_btrfs_subvolume_snapshot_opts_argv (g, source, dest, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfstune_enable_extended_inode_refs)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: btrfstune_enable_extended_inode_refs: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfstune_enable_extended_inode_refs (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfstune_enable_skinny_metadata_extent_refs)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: btrfstune_enable_skinny_metadata_extent_refs: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfstune_enable_skinny_metadata_extent_refs (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_btrfstune_seeding)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  zend_bool seeding;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsb",
        &z_g, &device, &device_size, &seeding) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: btrfstune_seeding: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_btrfstune_seeding (g, device, seeding);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_c_pointer)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_c_pointer (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_canonical_device_name)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: canonical_device_name: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_canonical_device_name (g, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_cap_get_file)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: cap_get_file: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_cap_get_file (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_cap_set_file)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  char *cap;
  guestfs_string_length cap_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &path, &path_size, &cap, &cap_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: cap_set_file: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (cap) != cap_size) {
    fprintf (stderr, "libguestfs: cap_set_file: parameter 'cap' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_cap_set_file (g, path, cap);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_case_sensitive_path)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: case_sensitive_path: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_case_sensitive_path (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_cat)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: cat: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_cat (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_checksum)
{
  zval *z_g;
  guestfs_h *g;
  char *csumtype;
  guestfs_string_length csumtype_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &csumtype, &csumtype_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (csumtype) != csumtype_size) {
    fprintf (stderr, "libguestfs: checksum: parameter 'csumtype' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: checksum: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_checksum (g, csumtype, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_checksum_device)
{
  zval *z_g;
  guestfs_h *g;
  char *csumtype;
  guestfs_string_length csumtype_size;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &csumtype, &csumtype_size, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (csumtype) != csumtype_size) {
    fprintf (stderr, "libguestfs: checksum_device: parameter 'csumtype' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: checksum_device: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_checksum_device (g, csumtype, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_checksums_out)
{
  zval *z_g;
  guestfs_h *g;
  char *csumtype;
  guestfs_string_length csumtype_size;
  char *directory;
  guestfs_string_length directory_size;
  char *sumsfile;
  guestfs_string_length sumsfile_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsss",
        &z_g, &csumtype, &csumtype_size, &directory, &directory_size, &sumsfile, &sumsfile_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (csumtype) != csumtype_size) {
    fprintf (stderr, "libguestfs: checksums_out: parameter 'csumtype' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (directory) != directory_size) {
    fprintf (stderr, "libguestfs: checksums_out: parameter 'directory' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (sumsfile) != sumsfile_size) {
    fprintf (stderr, "libguestfs: checksums_out: parameter 'sumsfile' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_checksums_out (g, csumtype, directory, sumsfile);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_chmod)
{
  zval *z_g;
  guestfs_h *g;
  long mode;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rls",
        &z_g, &mode, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: chmod: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_chmod (g, mode, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_chown)
{
  zval *z_g;
  guestfs_h *g;
  long owner;
  long group;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rlls",
        &z_g, &owner, &group, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: chown: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_chown (g, owner, group, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_clear_backend_setting)
{
  zval *z_g;
  guestfs_h *g;
  char *name;
  guestfs_string_length name_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &name, &name_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (name) != name_size) {
    fprintf (stderr, "libguestfs: clear_backend_setting: parameter 'name' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_clear_backend_setting (g, name);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_clevis_luks_unlock)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  char *mapname;
  guestfs_string_length mapname_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &device, &device_size, &mapname, &mapname_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: clevis_luks_unlock: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (mapname) != mapname_size) {
    fprintf (stderr, "libguestfs: clevis_luks_unlock: parameter 'mapname' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_clevis_luks_unlock (g, device, mapname);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_command)
{
  zval *z_g;
  guestfs_h *g;
  zval *z_arguments;
  char **arguments;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "ra",
        &z_g, &z_arguments) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  arguments = get_stringlist (z_arguments);

  char *r;
  r = guestfs_command (g, arguments);

  guestfs_efree_stringlist (arguments);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_command_lines)
{
  zval *z_g;
  guestfs_h *g;
  zval *z_arguments;
  char **arguments;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "ra",
        &z_g, &z_arguments) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  arguments = get_stringlist (z_arguments);

  char **r;
  r = guestfs_command_lines (g, arguments);

  guestfs_efree_stringlist (arguments);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_compress_device_out)
{
  zval *z_g;
  guestfs_h *g;
  char *ctype;
  guestfs_string_length ctype_size;
  char *device;
  guestfs_string_length device_size;
  char *zdevice;
  guestfs_string_length zdevice_size;
  struct guestfs_compress_device_out_argv optargs_s = { .bitmask = 0 };
  struct guestfs_compress_device_out_argv *optargs = &optargs_s;
  long optargs_t_level = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsss|l",
        &z_g, &ctype, &ctype_size, &device, &device_size, &zdevice, &zdevice_size, &optargs_t_level) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (ctype) != ctype_size) {
    fprintf (stderr, "libguestfs: compress_device_out: parameter 'ctype' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: compress_device_out: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (zdevice) != zdevice_size) {
    fprintf (stderr, "libguestfs: compress_device_out: parameter 'zdevice' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_level != -1) {
    optargs_s.level = optargs_t_level;
    optargs_s.bitmask |= GUESTFS_COMPRESS_DEVICE_OUT_LEVEL_BITMASK;
  }

  int r;
  r = guestfs_compress_device_out_argv (g, ctype, device, zdevice, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_compress_out)
{
  zval *z_g;
  guestfs_h *g;
  char *ctype;
  guestfs_string_length ctype_size;
  char *file;
  guestfs_string_length file_size;
  char *zfile;
  guestfs_string_length zfile_size;
  struct guestfs_compress_out_argv optargs_s = { .bitmask = 0 };
  struct guestfs_compress_out_argv *optargs = &optargs_s;
  long optargs_t_level = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsss|l",
        &z_g, &ctype, &ctype_size, &file, &file_size, &zfile, &zfile_size, &optargs_t_level) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (ctype) != ctype_size) {
    fprintf (stderr, "libguestfs: compress_out: parameter 'ctype' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (file) != file_size) {
    fprintf (stderr, "libguestfs: compress_out: parameter 'file' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (zfile) != zfile_size) {
    fprintf (stderr, "libguestfs: compress_out: parameter 'zfile' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_level != -1) {
    optargs_s.level = optargs_t_level;
    optargs_s.bitmask |= GUESTFS_COMPRESS_OUT_LEVEL_BITMASK;
  }

  int r;
  r = guestfs_compress_out_argv (g, ctype, file, zfile, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_config)
{
  zval *z_g;
  guestfs_h *g;
  char *hvparam;
  guestfs_string_length hvparam_size;
  char *hvvalue = NULL;
  guestfs_string_length hvvalue_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss!",
        &z_g, &hvparam, &hvparam_size, &hvvalue, &hvvalue_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (hvparam) != hvparam_size) {
    fprintf (stderr, "libguestfs: config: parameter 'hvparam' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (hvvalue != NULL && strlen (hvvalue) != hvvalue_size) {
    fprintf (stderr, "libguestfs: config: parameter 'hvvalue' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_config (g, hvparam, hvvalue);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_copy_attributes)
{
  zval *z_g;
  guestfs_h *g;
  char *src;
  guestfs_string_length src_size;
  char *dest;
  guestfs_string_length dest_size;
  struct guestfs_copy_attributes_argv optargs_s = { .bitmask = 0 };
  struct guestfs_copy_attributes_argv *optargs = &optargs_s;
  zend_bool optargs_t_all = -1;
  zend_bool optargs_t_mode = -1;
  zend_bool optargs_t_xattributes = -1;
  zend_bool optargs_t_ownership = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|bbbb",
        &z_g, &src, &src_size, &dest, &dest_size, &optargs_t_all, &optargs_t_mode, &optargs_t_xattributes, &optargs_t_ownership) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (src) != src_size) {
    fprintf (stderr, "libguestfs: copy_attributes: parameter 'src' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (dest) != dest_size) {
    fprintf (stderr, "libguestfs: copy_attributes: parameter 'dest' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_all != (zend_bool)-1) {
    optargs_s.all = optargs_t_all;
    optargs_s.bitmask |= GUESTFS_COPY_ATTRIBUTES_ALL_BITMASK;
  }
  if (optargs_t_mode != (zend_bool)-1) {
    optargs_s.mode = optargs_t_mode;
    optargs_s.bitmask |= GUESTFS_COPY_ATTRIBUTES_MODE_BITMASK;
  }
  if (optargs_t_xattributes != (zend_bool)-1) {
    optargs_s.xattributes = optargs_t_xattributes;
    optargs_s.bitmask |= GUESTFS_COPY_ATTRIBUTES_XATTRIBUTES_BITMASK;
  }
  if (optargs_t_ownership != (zend_bool)-1) {
    optargs_s.ownership = optargs_t_ownership;
    optargs_s.bitmask |= GUESTFS_COPY_ATTRIBUTES_OWNERSHIP_BITMASK;
  }

  int r;
  r = guestfs_copy_attributes_argv (g, src, dest, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_copy_device_to_device)
{
  zval *z_g;
  guestfs_h *g;
  char *src;
  guestfs_string_length src_size;
  char *dest;
  guestfs_string_length dest_size;
  struct guestfs_copy_device_to_device_argv optargs_s = { .bitmask = 0 };
  struct guestfs_copy_device_to_device_argv *optargs = &optargs_s;
  long optargs_t_srcoffset = -1;
  long optargs_t_destoffset = -1;
  long optargs_t_size = -1;
  zend_bool optargs_t_sparse = -1;
  zend_bool optargs_t_append = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|lllbb",
        &z_g, &src, &src_size, &dest, &dest_size, &optargs_t_srcoffset, &optargs_t_destoffset, &optargs_t_size, &optargs_t_sparse, &optargs_t_append) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (src) != src_size) {
    fprintf (stderr, "libguestfs: copy_device_to_device: parameter 'src' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (dest) != dest_size) {
    fprintf (stderr, "libguestfs: copy_device_to_device: parameter 'dest' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_srcoffset != -1) {
    optargs_s.srcoffset = optargs_t_srcoffset;
    optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_DEVICE_SRCOFFSET_BITMASK;
  }
  if (optargs_t_destoffset != -1) {
    optargs_s.destoffset = optargs_t_destoffset;
    optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_DEVICE_DESTOFFSET_BITMASK;
  }
  if (optargs_t_size != -1) {
    optargs_s.size = optargs_t_size;
    optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_DEVICE_SIZE_BITMASK;
  }
  if (optargs_t_sparse != (zend_bool)-1) {
    optargs_s.sparse = optargs_t_sparse;
    optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_DEVICE_SPARSE_BITMASK;
  }
  if (optargs_t_append != (zend_bool)-1) {
    optargs_s.append = optargs_t_append;
    optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_DEVICE_APPEND_BITMASK;
  }

  int r;
  r = guestfs_copy_device_to_device_argv (g, src, dest, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_copy_device_to_file)
{
  zval *z_g;
  guestfs_h *g;
  char *src;
  guestfs_string_length src_size;
  char *dest;
  guestfs_string_length dest_size;
  struct guestfs_copy_device_to_file_argv optargs_s = { .bitmask = 0 };
  struct guestfs_copy_device_to_file_argv *optargs = &optargs_s;
  long optargs_t_srcoffset = -1;
  long optargs_t_destoffset = -1;
  long optargs_t_size = -1;
  zend_bool optargs_t_sparse = -1;
  zend_bool optargs_t_append = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|lllbb",
        &z_g, &src, &src_size, &dest, &dest_size, &optargs_t_srcoffset, &optargs_t_destoffset, &optargs_t_size, &optargs_t_sparse, &optargs_t_append) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (src) != src_size) {
    fprintf (stderr, "libguestfs: copy_device_to_file: parameter 'src' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (dest) != dest_size) {
    fprintf (stderr, "libguestfs: copy_device_to_file: parameter 'dest' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_srcoffset != -1) {
    optargs_s.srcoffset = optargs_t_srcoffset;
    optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_FILE_SRCOFFSET_BITMASK;
  }
  if (optargs_t_destoffset != -1) {
    optargs_s.destoffset = optargs_t_destoffset;
    optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_FILE_DESTOFFSET_BITMASK;
  }
  if (optargs_t_size != -1) {
    optargs_s.size = optargs_t_size;
    optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_FILE_SIZE_BITMASK;
  }
  if (optargs_t_sparse != (zend_bool)-1) {
    optargs_s.sparse = optargs_t_sparse;
    optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_FILE_SPARSE_BITMASK;
  }
  if (optargs_t_append != (zend_bool)-1) {
    optargs_s.append = optargs_t_append;
    optargs_s.bitmask |= GUESTFS_COPY_DEVICE_TO_FILE_APPEND_BITMASK;
  }

  int r;
  r = guestfs_copy_device_to_file_argv (g, src, dest, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_copy_file_to_device)
{
  zval *z_g;
  guestfs_h *g;
  char *src;
  guestfs_string_length src_size;
  char *dest;
  guestfs_string_length dest_size;
  struct guestfs_copy_file_to_device_argv optargs_s = { .bitmask = 0 };
  struct guestfs_copy_file_to_device_argv *optargs = &optargs_s;
  long optargs_t_srcoffset = -1;
  long optargs_t_destoffset = -1;
  long optargs_t_size = -1;
  zend_bool optargs_t_sparse = -1;
  zend_bool optargs_t_append = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|lllbb",
        &z_g, &src, &src_size, &dest, &dest_size, &optargs_t_srcoffset, &optargs_t_destoffset, &optargs_t_size, &optargs_t_sparse, &optargs_t_append) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (src) != src_size) {
    fprintf (stderr, "libguestfs: copy_file_to_device: parameter 'src' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (dest) != dest_size) {
    fprintf (stderr, "libguestfs: copy_file_to_device: parameter 'dest' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_srcoffset != -1) {
    optargs_s.srcoffset = optargs_t_srcoffset;
    optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_DEVICE_SRCOFFSET_BITMASK;
  }
  if (optargs_t_destoffset != -1) {
    optargs_s.destoffset = optargs_t_destoffset;
    optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_DEVICE_DESTOFFSET_BITMASK;
  }
  if (optargs_t_size != -1) {
    optargs_s.size = optargs_t_size;
    optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_DEVICE_SIZE_BITMASK;
  }
  if (optargs_t_sparse != (zend_bool)-1) {
    optargs_s.sparse = optargs_t_sparse;
    optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_DEVICE_SPARSE_BITMASK;
  }
  if (optargs_t_append != (zend_bool)-1) {
    optargs_s.append = optargs_t_append;
    optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_DEVICE_APPEND_BITMASK;
  }

  int r;
  r = guestfs_copy_file_to_device_argv (g, src, dest, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_copy_file_to_file)
{
  zval *z_g;
  guestfs_h *g;
  char *src;
  guestfs_string_length src_size;
  char *dest;
  guestfs_string_length dest_size;
  struct guestfs_copy_file_to_file_argv optargs_s = { .bitmask = 0 };
  struct guestfs_copy_file_to_file_argv *optargs = &optargs_s;
  long optargs_t_srcoffset = -1;
  long optargs_t_destoffset = -1;
  long optargs_t_size = -1;
  zend_bool optargs_t_sparse = -1;
  zend_bool optargs_t_append = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|lllbb",
        &z_g, &src, &src_size, &dest, &dest_size, &optargs_t_srcoffset, &optargs_t_destoffset, &optargs_t_size, &optargs_t_sparse, &optargs_t_append) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (src) != src_size) {
    fprintf (stderr, "libguestfs: copy_file_to_file: parameter 'src' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (dest) != dest_size) {
    fprintf (stderr, "libguestfs: copy_file_to_file: parameter 'dest' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_srcoffset != -1) {
    optargs_s.srcoffset = optargs_t_srcoffset;
    optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_FILE_SRCOFFSET_BITMASK;
  }
  if (optargs_t_destoffset != -1) {
    optargs_s.destoffset = optargs_t_destoffset;
    optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_FILE_DESTOFFSET_BITMASK;
  }
  if (optargs_t_size != -1) {
    optargs_s.size = optargs_t_size;
    optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_FILE_SIZE_BITMASK;
  }
  if (optargs_t_sparse != (zend_bool)-1) {
    optargs_s.sparse = optargs_t_sparse;
    optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_FILE_SPARSE_BITMASK;
  }
  if (optargs_t_append != (zend_bool)-1) {
    optargs_s.append = optargs_t_append;
    optargs_s.bitmask |= GUESTFS_COPY_FILE_TO_FILE_APPEND_BITMASK;
  }

  int r;
  r = guestfs_copy_file_to_file_argv (g, src, dest, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_copy_in)
{
  zval *z_g;
  guestfs_h *g;
  char *localpath;
  guestfs_string_length localpath_size;
  char *remotedir;
  guestfs_string_length remotedir_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &localpath, &localpath_size, &remotedir, &remotedir_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (localpath) != localpath_size) {
    fprintf (stderr, "libguestfs: copy_in: parameter 'localpath' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (remotedir) != remotedir_size) {
    fprintf (stderr, "libguestfs: copy_in: parameter 'remotedir' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_copy_in (g, localpath, remotedir);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_copy_out)
{
  zval *z_g;
  guestfs_h *g;
  char *remotepath;
  guestfs_string_length remotepath_size;
  char *localdir;
  guestfs_string_length localdir_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &remotepath, &remotepath_size, &localdir, &localdir_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (remotepath) != remotepath_size) {
    fprintf (stderr, "libguestfs: copy_out: parameter 'remotepath' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (localdir) != localdir_size) {
    fprintf (stderr, "libguestfs: copy_out: parameter 'localdir' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_copy_out (g, remotepath, localdir);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_copy_size)
{
  zval *z_g;
  guestfs_h *g;
  char *src;
  guestfs_string_length src_size;
  char *dest;
  guestfs_string_length dest_size;
  long size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssl",
        &z_g, &src, &src_size, &dest, &dest_size, &size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (src) != src_size) {
    fprintf (stderr, "libguestfs: copy_size: parameter 'src' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (dest) != dest_size) {
    fprintf (stderr, "libguestfs: copy_size: parameter 'dest' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_copy_size (g, src, dest, size);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_cp)
{
  zval *z_g;
  guestfs_h *g;
  char *src;
  guestfs_string_length src_size;
  char *dest;
  guestfs_string_length dest_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &src, &src_size, &dest, &dest_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (src) != src_size) {
    fprintf (stderr, "libguestfs: cp: parameter 'src' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (dest) != dest_size) {
    fprintf (stderr, "libguestfs: cp: parameter 'dest' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_cp (g, src, dest);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_cp_a)
{
  zval *z_g;
  guestfs_h *g;
  char *src;
  guestfs_string_length src_size;
  char *dest;
  guestfs_string_length dest_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &src, &src_size, &dest, &dest_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (src) != src_size) {
    fprintf (stderr, "libguestfs: cp_a: parameter 'src' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (dest) != dest_size) {
    fprintf (stderr, "libguestfs: cp_a: parameter 'dest' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_cp_a (g, src, dest);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_cp_r)
{
  zval *z_g;
  guestfs_h *g;
  char *src;
  guestfs_string_length src_size;
  char *dest;
  guestfs_string_length dest_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &src, &src_size, &dest, &dest_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (src) != src_size) {
    fprintf (stderr, "libguestfs: cp_r: parameter 'src' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (dest) != dest_size) {
    fprintf (stderr, "libguestfs: cp_r: parameter 'dest' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_cp_r (g, src, dest);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_cpio_out)
{
  zval *z_g;
  guestfs_h *g;
  char *directory;
  guestfs_string_length directory_size;
  char *cpiofile;
  guestfs_string_length cpiofile_size;
  struct guestfs_cpio_out_argv optargs_s = { .bitmask = 0 };
  struct guestfs_cpio_out_argv *optargs = &optargs_s;
  char *optargs_t_format = NULL;
  guestfs_string_length optargs_t_format_size = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|s",
        &z_g, &directory, &directory_size, &cpiofile, &cpiofile_size, &optargs_t_format, &optargs_t_format_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (directory) != directory_size) {
    fprintf (stderr, "libguestfs: cpio_out: parameter 'directory' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (cpiofile) != cpiofile_size) {
    fprintf (stderr, "libguestfs: cpio_out: parameter 'cpiofile' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_format != NULL) {
    optargs_s.format = optargs_t_format;
    optargs_s.bitmask |= GUESTFS_CPIO_OUT_FORMAT_BITMASK;
  }

  int r;
  r = guestfs_cpio_out_argv (g, directory, cpiofile, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_cryptsetup_close)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: cryptsetup_close: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_cryptsetup_close (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_cryptsetup_open)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  char *key;
  guestfs_string_length key_size;
  char *mapname;
  guestfs_string_length mapname_size;
  struct guestfs_cryptsetup_open_argv optargs_s = { .bitmask = 0 };
  struct guestfs_cryptsetup_open_argv *optargs = &optargs_s;
  zend_bool optargs_t_readonly = -1;
  char *optargs_t_crypttype = NULL;
  guestfs_string_length optargs_t_crypttype_size = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsss|bs",
        &z_g, &device, &device_size, &key, &key_size, &mapname, &mapname_size, &optargs_t_readonly, &optargs_t_crypttype, &optargs_t_crypttype_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: cryptsetup_open: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (key) != key_size) {
    fprintf (stderr, "libguestfs: cryptsetup_open: parameter 'key' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (mapname) != mapname_size) {
    fprintf (stderr, "libguestfs: cryptsetup_open: parameter 'mapname' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_readonly != (zend_bool)-1) {
    optargs_s.readonly = optargs_t_readonly;
    optargs_s.bitmask |= GUESTFS_CRYPTSETUP_OPEN_READONLY_BITMASK;
  }
  if (optargs_t_crypttype != NULL) {
    optargs_s.crypttype = optargs_t_crypttype;
    optargs_s.bitmask |= GUESTFS_CRYPTSETUP_OPEN_CRYPTTYPE_BITMASK;
  }

  int r;
  r = guestfs_cryptsetup_open_argv (g, device, key, mapname, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_dd)
{
  zval *z_g;
  guestfs_h *g;
  char *src;
  guestfs_string_length src_size;
  char *dest;
  guestfs_string_length dest_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &src, &src_size, &dest, &dest_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (src) != src_size) {
    fprintf (stderr, "libguestfs: dd: parameter 'src' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (dest) != dest_size) {
    fprintf (stderr, "libguestfs: dd: parameter 'dest' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_dd (g, src, dest);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_debug)
{
  zval *z_g;
  guestfs_h *g;
  char *subcmd;
  guestfs_string_length subcmd_size;
  zval *z_extraargs;
  char **extraargs;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsa",
        &z_g, &subcmd, &subcmd_size, &z_extraargs) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (subcmd) != subcmd_size) {
    fprintf (stderr, "libguestfs: debug: parameter 'subcmd' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  extraargs = get_stringlist (z_extraargs);

  char *r;
  r = guestfs_debug (g, subcmd, extraargs);

  guestfs_efree_stringlist (extraargs);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_debug_drives)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_debug_drives (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_debug_upload)
{
  zval *z_g;
  guestfs_h *g;
  char *filename;
  guestfs_string_length filename_size;
  char *tmpname;
  guestfs_string_length tmpname_size;
  long mode;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssl",
        &z_g, &filename, &filename_size, &tmpname, &tmpname_size, &mode) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: debug_upload: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (tmpname) != tmpname_size) {
    fprintf (stderr, "libguestfs: debug_upload: parameter 'tmpname' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_debug_upload (g, filename, tmpname, mode);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_device_index)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: device_index: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_device_index (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_device_name)
{
  zval *z_g;
  guestfs_h *g;
  long index;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &index) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_device_name (g, index);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_df)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_df (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_df_h)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_df_h (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_disk_create)
{
  zval *z_g;
  guestfs_h *g;
  char *filename;
  guestfs_string_length filename_size;
  char *format;
  guestfs_string_length format_size;
  long size;
  struct guestfs_disk_create_argv optargs_s = { .bitmask = 0 };
  struct guestfs_disk_create_argv *optargs = &optargs_s;
  char *optargs_t_backingfile = NULL;
  guestfs_string_length optargs_t_backingfile_size = -1;
  char *optargs_t_backingformat = NULL;
  guestfs_string_length optargs_t_backingformat_size = -1;
  char *optargs_t_preallocation = NULL;
  guestfs_string_length optargs_t_preallocation_size = -1;
  char *optargs_t_compat = NULL;
  guestfs_string_length optargs_t_compat_size = -1;
  long optargs_t_clustersize = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssl|ssssl",
        &z_g, &filename, &filename_size, &format, &format_size, &size, &optargs_t_backingfile, &optargs_t_backingfile_size, &optargs_t_backingformat, &optargs_t_backingformat_size, &optargs_t_preallocation, &optargs_t_preallocation_size, &optargs_t_compat, &optargs_t_compat_size, &optargs_t_clustersize) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: disk_create: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (format) != format_size) {
    fprintf (stderr, "libguestfs: disk_create: parameter 'format' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_backingfile != NULL) {
    optargs_s.backingfile = optargs_t_backingfile;
    optargs_s.bitmask |= GUESTFS_DISK_CREATE_BACKINGFILE_BITMASK;
  }
  if (optargs_t_backingformat != NULL) {
    optargs_s.backingformat = optargs_t_backingformat;
    optargs_s.bitmask |= GUESTFS_DISK_CREATE_BACKINGFORMAT_BITMASK;
  }
  if (optargs_t_preallocation != NULL) {
    optargs_s.preallocation = optargs_t_preallocation;
    optargs_s.bitmask |= GUESTFS_DISK_CREATE_PREALLOCATION_BITMASK;
  }
  if (optargs_t_compat != NULL) {
    optargs_s.compat = optargs_t_compat;
    optargs_s.bitmask |= GUESTFS_DISK_CREATE_COMPAT_BITMASK;
  }
  if (optargs_t_clustersize != -1) {
    optargs_s.clustersize = optargs_t_clustersize;
    optargs_s.bitmask |= GUESTFS_DISK_CREATE_CLUSTERSIZE_BITMASK;
  }

  int r;
  r = guestfs_disk_create_argv (g, filename, format, size, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_disk_format)
{
  zval *z_g;
  guestfs_h *g;
  char *filename;
  guestfs_string_length filename_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &filename, &filename_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: disk_format: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_disk_format (g, filename);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_disk_has_backing_file)
{
  zval *z_g;
  guestfs_h *g;
  char *filename;
  guestfs_string_length filename_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &filename, &filename_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: disk_has_backing_file: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_disk_has_backing_file (g, filename);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_disk_virtual_size)
{
  zval *z_g;
  guestfs_h *g;
  char *filename;
  guestfs_string_length filename_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &filename, &filename_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: disk_virtual_size: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_disk_virtual_size (g, filename);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_dmesg)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_dmesg (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_download)
{
  zval *z_g;
  guestfs_h *g;
  char *remotefilename;
  guestfs_string_length remotefilename_size;
  char *filename;
  guestfs_string_length filename_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &remotefilename, &remotefilename_size, &filename, &filename_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (remotefilename) != remotefilename_size) {
    fprintf (stderr, "libguestfs: download: parameter 'remotefilename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: download: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_download (g, remotefilename, filename);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_download_blocks)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long start;
  long stop;
  char *filename;
  guestfs_string_length filename_size;
  struct guestfs_download_blocks_argv optargs_s = { .bitmask = 0 };
  struct guestfs_download_blocks_argv *optargs = &optargs_s;
  zend_bool optargs_t_unallocated = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rslls|b",
        &z_g, &device, &device_size, &start, &stop, &filename, &filename_size, &optargs_t_unallocated) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: download_blocks: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: download_blocks: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_unallocated != (zend_bool)-1) {
    optargs_s.unallocated = optargs_t_unallocated;
    optargs_s.bitmask |= GUESTFS_DOWNLOAD_BLOCKS_UNALLOCATED_BITMASK;
  }

  int r;
  r = guestfs_download_blocks_argv (g, device, start, stop, filename, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_download_inode)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long inode;
  char *filename;
  guestfs_string_length filename_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsls",
        &z_g, &device, &device_size, &inode, &filename, &filename_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: download_inode: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: download_inode: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_download_inode (g, device, inode, filename);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_download_offset)
{
  zval *z_g;
  guestfs_h *g;
  char *remotefilename;
  guestfs_string_length remotefilename_size;
  char *filename;
  guestfs_string_length filename_size;
  long offset;
  long size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssll",
        &z_g, &remotefilename, &remotefilename_size, &filename, &filename_size, &offset, &size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (remotefilename) != remotefilename_size) {
    fprintf (stderr, "libguestfs: download_offset: parameter 'remotefilename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: download_offset: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_download_offset (g, remotefilename, filename, offset, size);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_drop_caches)
{
  zval *z_g;
  guestfs_h *g;
  long whattodrop;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &whattodrop) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_drop_caches (g, whattodrop);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_du)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: du: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_du (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_e2fsck)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  struct guestfs_e2fsck_argv optargs_s = { .bitmask = 0 };
  struct guestfs_e2fsck_argv *optargs = &optargs_s;
  zend_bool optargs_t_correct = -1;
  zend_bool optargs_t_forceall = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|bb",
        &z_g, &device, &device_size, &optargs_t_correct, &optargs_t_forceall) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: e2fsck: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_correct != (zend_bool)-1) {
    optargs_s.correct = optargs_t_correct;
    optargs_s.bitmask |= GUESTFS_E2FSCK_CORRECT_BITMASK;
  }
  if (optargs_t_forceall != (zend_bool)-1) {
    optargs_s.forceall = optargs_t_forceall;
    optargs_s.bitmask |= GUESTFS_E2FSCK_FORCEALL_BITMASK;
  }

  int r;
  r = guestfs_e2fsck_argv (g, device, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_e2fsck_f)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: e2fsck_f: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_e2fsck_f (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_echo_daemon)
{
  zval *z_g;
  guestfs_h *g;
  zval *z_words;
  char **words;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "ra",
        &z_g, &z_words) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  words = get_stringlist (z_words);

  char *r;
  r = guestfs_echo_daemon (g, words);

  guestfs_efree_stringlist (words);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_egrep)
{
  zval *z_g;
  guestfs_h *g;
  char *regex;
  guestfs_string_length regex_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &regex, &regex_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (regex) != regex_size) {
    fprintf (stderr, "libguestfs: egrep: parameter 'regex' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: egrep: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_egrep (g, regex, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_egrepi)
{
  zval *z_g;
  guestfs_h *g;
  char *regex;
  guestfs_string_length regex_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &regex, &regex_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (regex) != regex_size) {
    fprintf (stderr, "libguestfs: egrepi: parameter 'regex' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: egrepi: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_egrepi (g, regex, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_equal)
{
  zval *z_g;
  guestfs_h *g;
  char *file1;
  guestfs_string_length file1_size;
  char *file2;
  guestfs_string_length file2_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &file1, &file1_size, &file2, &file2_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (file1) != file1_size) {
    fprintf (stderr, "libguestfs: equal: parameter 'file1' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (file2) != file2_size) {
    fprintf (stderr, "libguestfs: equal: parameter 'file2' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_equal (g, file1, file2);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_exists)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: exists: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_exists (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_extlinux)
{
  zval *z_g;
  guestfs_h *g;
  char *directory;
  guestfs_string_length directory_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &directory, &directory_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (directory) != directory_size) {
    fprintf (stderr, "libguestfs: extlinux: parameter 'directory' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_extlinux (g, directory);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_f2fs_expand)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: f2fs_expand: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_f2fs_expand (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_fallocate)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  long len;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &path, &path_size, &len) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: fallocate: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_fallocate (g, path, len);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_fallocate64)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  long len;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &path, &path_size, &len) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: fallocate64: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_fallocate64 (g, path, len);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_feature_available)
{
  zval *z_g;
  guestfs_h *g;
  zval *z_groups;
  char **groups;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "ra",
        &z_g, &z_groups) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  groups = get_stringlist (z_groups);

  int r;
  r = guestfs_feature_available (g, groups);

  guestfs_efree_stringlist (groups);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_fgrep)
{
  zval *z_g;
  guestfs_h *g;
  char *pattern;
  guestfs_string_length pattern_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &pattern, &pattern_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (pattern) != pattern_size) {
    fprintf (stderr, "libguestfs: fgrep: parameter 'pattern' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: fgrep: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_fgrep (g, pattern, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_fgrepi)
{
  zval *z_g;
  guestfs_h *g;
  char *pattern;
  guestfs_string_length pattern_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &pattern, &pattern_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (pattern) != pattern_size) {
    fprintf (stderr, "libguestfs: fgrepi: parameter 'pattern' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: fgrepi: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_fgrepi (g, pattern, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_file)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: file: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_file (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_file_architecture)
{
  zval *z_g;
  guestfs_h *g;
  char *filename;
  guestfs_string_length filename_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &filename, &filename_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: file_architecture: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_file_architecture (g, filename);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_filesize)
{
  zval *z_g;
  guestfs_h *g;
  char *file;
  guestfs_string_length file_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &file, &file_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (file) != file_size) {
    fprintf (stderr, "libguestfs: filesize: parameter 'file' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_filesize (g, file);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_filesystem_available)
{
  zval *z_g;
  guestfs_h *g;
  char *filesystem;
  guestfs_string_length filesystem_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &filesystem, &filesystem_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filesystem) != filesystem_size) {
    fprintf (stderr, "libguestfs: filesystem_available: parameter 'filesystem' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_filesystem_available (g, filesystem);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_filesystem_walk)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: filesystem_walk: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_tsk_dirent_list *r;
  r = guestfs_filesystem_walk (g, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    add_assoc_long (z_elem, "tsk_inode", r->val[c].tsk_inode);
    guestfs_add_assoc_stringl (z_elem, "tsk_type", &r->val[c].tsk_type, 1, 1);
    add_assoc_long (z_elem, "tsk_size", r->val[c].tsk_size);
    guestfs_add_assoc_string (z_elem, "tsk_name", r->val[c].tsk_name, 1);
    add_assoc_long (z_elem, "tsk_flags", r->val[c].tsk_flags);
    add_assoc_long (z_elem, "tsk_atime_sec", r->val[c].tsk_atime_sec);
    add_assoc_long (z_elem, "tsk_atime_nsec", r->val[c].tsk_atime_nsec);
    add_assoc_long (z_elem, "tsk_mtime_sec", r->val[c].tsk_mtime_sec);
    add_assoc_long (z_elem, "tsk_mtime_nsec", r->val[c].tsk_mtime_nsec);
    add_assoc_long (z_elem, "tsk_ctime_sec", r->val[c].tsk_ctime_sec);
    add_assoc_long (z_elem, "tsk_ctime_nsec", r->val[c].tsk_ctime_nsec);
    add_assoc_long (z_elem, "tsk_crtime_sec", r->val[c].tsk_crtime_sec);
    add_assoc_long (z_elem, "tsk_crtime_nsec", r->val[c].tsk_crtime_nsec);
    add_assoc_long (z_elem, "tsk_nlink", r->val[c].tsk_nlink);
    guestfs_add_assoc_string (z_elem, "tsk_link", r->val[c].tsk_link, 1);
    add_assoc_long (z_elem, "tsk_spare1", r->val[c].tsk_spare1);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_tsk_dirent_list (r);
}

PHP_FUNCTION (guestfs_fill)
{
  zval *z_g;
  guestfs_h *g;
  long c;
  long len;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rlls",
        &z_g, &c, &len, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: fill: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_fill (g, c, len, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_fill_dir)
{
  zval *z_g;
  guestfs_h *g;
  char *dir;
  guestfs_string_length dir_size;
  long nr;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &dir, &dir_size, &nr) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (dir) != dir_size) {
    fprintf (stderr, "libguestfs: fill_dir: parameter 'dir' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_fill_dir (g, dir, nr);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_fill_pattern)
{
  zval *z_g;
  guestfs_h *g;
  char *pattern;
  guestfs_string_length pattern_size;
  long len;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsls",
        &z_g, &pattern, &pattern_size, &len, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (pattern) != pattern_size) {
    fprintf (stderr, "libguestfs: fill_pattern: parameter 'pattern' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: fill_pattern: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_fill_pattern (g, pattern, len, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_find)
{
  zval *z_g;
  guestfs_h *g;
  char *directory;
  guestfs_string_length directory_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &directory, &directory_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (directory) != directory_size) {
    fprintf (stderr, "libguestfs: find: parameter 'directory' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_find (g, directory);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_find0)
{
  zval *z_g;
  guestfs_h *g;
  char *directory;
  guestfs_string_length directory_size;
  char *files;
  guestfs_string_length files_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &directory, &directory_size, &files, &files_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (directory) != directory_size) {
    fprintf (stderr, "libguestfs: find0: parameter 'directory' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (files) != files_size) {
    fprintf (stderr, "libguestfs: find0: parameter 'files' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_find0 (g, directory, files);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_find_inode)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long inode;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &device, &device_size, &inode) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: find_inode: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_tsk_dirent_list *r;
  r = guestfs_find_inode (g, device, inode);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    add_assoc_long (z_elem, "tsk_inode", r->val[c].tsk_inode);
    guestfs_add_assoc_stringl (z_elem, "tsk_type", &r->val[c].tsk_type, 1, 1);
    add_assoc_long (z_elem, "tsk_size", r->val[c].tsk_size);
    guestfs_add_assoc_string (z_elem, "tsk_name", r->val[c].tsk_name, 1);
    add_assoc_long (z_elem, "tsk_flags", r->val[c].tsk_flags);
    add_assoc_long (z_elem, "tsk_atime_sec", r->val[c].tsk_atime_sec);
    add_assoc_long (z_elem, "tsk_atime_nsec", r->val[c].tsk_atime_nsec);
    add_assoc_long (z_elem, "tsk_mtime_sec", r->val[c].tsk_mtime_sec);
    add_assoc_long (z_elem, "tsk_mtime_nsec", r->val[c].tsk_mtime_nsec);
    add_assoc_long (z_elem, "tsk_ctime_sec", r->val[c].tsk_ctime_sec);
    add_assoc_long (z_elem, "tsk_ctime_nsec", r->val[c].tsk_ctime_nsec);
    add_assoc_long (z_elem, "tsk_crtime_sec", r->val[c].tsk_crtime_sec);
    add_assoc_long (z_elem, "tsk_crtime_nsec", r->val[c].tsk_crtime_nsec);
    add_assoc_long (z_elem, "tsk_nlink", r->val[c].tsk_nlink);
    guestfs_add_assoc_string (z_elem, "tsk_link", r->val[c].tsk_link, 1);
    add_assoc_long (z_elem, "tsk_spare1", r->val[c].tsk_spare1);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_tsk_dirent_list (r);
}

PHP_FUNCTION (guestfs_findfs_label)
{
  zval *z_g;
  guestfs_h *g;
  char *label;
  guestfs_string_length label_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &label, &label_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (label) != label_size) {
    fprintf (stderr, "libguestfs: findfs_label: parameter 'label' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_findfs_label (g, label);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_findfs_uuid)
{
  zval *z_g;
  guestfs_h *g;
  char *uuid;
  guestfs_string_length uuid_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &uuid, &uuid_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (uuid) != uuid_size) {
    fprintf (stderr, "libguestfs: findfs_uuid: parameter 'uuid' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_findfs_uuid (g, uuid);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_fsck)
{
  zval *z_g;
  guestfs_h *g;
  char *fstype;
  guestfs_string_length fstype_size;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &fstype, &fstype_size, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (fstype) != fstype_size) {
    fprintf (stderr, "libguestfs: fsck: parameter 'fstype' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: fsck: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_fsck (g, fstype, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_fstrim)
{
  zval *z_g;
  guestfs_h *g;
  char *mountpoint;
  guestfs_string_length mountpoint_size;
  struct guestfs_fstrim_argv optargs_s = { .bitmask = 0 };
  struct guestfs_fstrim_argv *optargs = &optargs_s;
  long optargs_t_offset = -1;
  long optargs_t_length = -1;
  long optargs_t_minimumfreeextent = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|lll",
        &z_g, &mountpoint, &mountpoint_size, &optargs_t_offset, &optargs_t_length, &optargs_t_minimumfreeextent) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (mountpoint) != mountpoint_size) {
    fprintf (stderr, "libguestfs: fstrim: parameter 'mountpoint' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_offset != -1) {
    optargs_s.offset = optargs_t_offset;
    optargs_s.bitmask |= GUESTFS_FSTRIM_OFFSET_BITMASK;
  }
  if (optargs_t_length != -1) {
    optargs_s.length = optargs_t_length;
    optargs_s.bitmask |= GUESTFS_FSTRIM_LENGTH_BITMASK;
  }
  if (optargs_t_minimumfreeextent != -1) {
    optargs_s.minimumfreeextent = optargs_t_minimumfreeextent;
    optargs_s.bitmask |= GUESTFS_FSTRIM_MINIMUMFREEEXTENT_BITMASK;
  }

  int r;
  r = guestfs_fstrim_argv (g, mountpoint, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_get_append)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  const char *r;
  r = guestfs_get_append (g);


  if (r) { GUESTFS_RETURN_STRING (r, 1); }
  else { RETURN_NULL (); }
}

PHP_FUNCTION (guestfs_get_attach_method)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_get_attach_method (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_get_autosync)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_get_autosync (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_get_backend)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_get_backend (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_get_backend_setting)
{
  zval *z_g;
  guestfs_h *g;
  char *name;
  guestfs_string_length name_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &name, &name_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (name) != name_size) {
    fprintf (stderr, "libguestfs: get_backend_setting: parameter 'name' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_get_backend_setting (g, name);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_get_backend_settings)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_get_backend_settings (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_get_cachedir)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_get_cachedir (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_get_direct)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_get_direct (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_get_e2attrs)
{
  zval *z_g;
  guestfs_h *g;
  char *file;
  guestfs_string_length file_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &file, &file_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (file) != file_size) {
    fprintf (stderr, "libguestfs: get_e2attrs: parameter 'file' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_get_e2attrs (g, file);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_get_e2generation)
{
  zval *z_g;
  guestfs_h *g;
  char *file;
  guestfs_string_length file_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &file, &file_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (file) != file_size) {
    fprintf (stderr, "libguestfs: get_e2generation: parameter 'file' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_get_e2generation (g, file);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_get_e2label)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: get_e2label: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_get_e2label (g, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_get_e2uuid)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: get_e2uuid: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_get_e2uuid (g, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_get_hv)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_get_hv (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_get_identifier)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  const char *r;
  r = guestfs_get_identifier (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  GUESTFS_RETURN_STRING (r, 1);
}

PHP_FUNCTION (guestfs_get_libvirt_requested_credential_challenge)
{
  zval *z_g;
  guestfs_h *g;
  long index;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &index) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_get_libvirt_requested_credential_challenge (g, index);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_get_libvirt_requested_credential_defresult)
{
  zval *z_g;
  guestfs_h *g;
  long index;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &index) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_get_libvirt_requested_credential_defresult (g, index);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_get_libvirt_requested_credential_prompt)
{
  zval *z_g;
  guestfs_h *g;
  long index;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &index) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_get_libvirt_requested_credential_prompt (g, index);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_get_libvirt_requested_credentials)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_get_libvirt_requested_credentials (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_get_memsize)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_get_memsize (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_get_network)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_get_network (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_get_path)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  const char *r;
  r = guestfs_get_path (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  GUESTFS_RETURN_STRING (r, 1);
}

PHP_FUNCTION (guestfs_get_pgroup)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_get_pgroup (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_get_pid)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_get_pid (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_get_program)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  const char *r;
  r = guestfs_get_program (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  GUESTFS_RETURN_STRING (r, 1);
}

PHP_FUNCTION (guestfs_get_qemu)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  const char *r;
  r = guestfs_get_qemu (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  GUESTFS_RETURN_STRING (r, 1);
}

PHP_FUNCTION (guestfs_get_recovery_proc)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_get_recovery_proc (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_get_selinux)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_get_selinux (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_get_smp)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_get_smp (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_get_sockdir)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_get_sockdir (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_get_state)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_get_state (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_get_tmpdir)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_get_tmpdir (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_get_trace)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_get_trace (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_get_umask)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_get_umask (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_get_verbose)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_get_verbose (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_getcon)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_getcon (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_getxattr)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  char *name;
  guestfs_string_length name_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &path, &path_size, &name, &name_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: getxattr: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (name) != name_size) {
    fprintf (stderr, "libguestfs: getxattr: parameter 'name' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  size_t size;
  r = guestfs_getxattr (g, path, name, &size);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrndup (r, size);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_getxattrs)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: getxattrs: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_xattr_list *r;
  r = guestfs_getxattrs (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    guestfs_add_assoc_string (z_elem, "attrname", r->val[c].attrname, 1);
    guestfs_add_assoc_stringl (z_elem, "attrval", r->val[c].attrval, r->val[c].attrval_len, 1);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_xattr_list (r);
}

PHP_FUNCTION (guestfs_glob_expand)
{
  zval *z_g;
  guestfs_h *g;
  char *pattern;
  guestfs_string_length pattern_size;
  struct guestfs_glob_expand_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_glob_expand_opts_argv *optargs = &optargs_s;
  zend_bool optargs_t_directoryslash = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|b",
        &z_g, &pattern, &pattern_size, &optargs_t_directoryslash) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (pattern) != pattern_size) {
    fprintf (stderr, "libguestfs: glob_expand: parameter 'pattern' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_directoryslash != (zend_bool)-1) {
    optargs_s.directoryslash = optargs_t_directoryslash;
    optargs_s.bitmask |= GUESTFS_GLOB_EXPAND_OPTS_DIRECTORYSLASH_BITMASK;
  }

  char **r;
  r = guestfs_glob_expand_opts_argv (g, pattern, optargs);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_grep)
{
  zval *z_g;
  guestfs_h *g;
  char *regex;
  guestfs_string_length regex_size;
  char *path;
  guestfs_string_length path_size;
  struct guestfs_grep_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_grep_opts_argv *optargs = &optargs_s;
  zend_bool optargs_t_extended = -1;
  zend_bool optargs_t_fixed = -1;
  zend_bool optargs_t_insensitive = -1;
  zend_bool optargs_t_compressed = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|bbbb",
        &z_g, &regex, &regex_size, &path, &path_size, &optargs_t_extended, &optargs_t_fixed, &optargs_t_insensitive, &optargs_t_compressed) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (regex) != regex_size) {
    fprintf (stderr, "libguestfs: grep: parameter 'regex' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: grep: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_extended != (zend_bool)-1) {
    optargs_s.extended = optargs_t_extended;
    optargs_s.bitmask |= GUESTFS_GREP_OPTS_EXTENDED_BITMASK;
  }
  if (optargs_t_fixed != (zend_bool)-1) {
    optargs_s.fixed = optargs_t_fixed;
    optargs_s.bitmask |= GUESTFS_GREP_OPTS_FIXED_BITMASK;
  }
  if (optargs_t_insensitive != (zend_bool)-1) {
    optargs_s.insensitive = optargs_t_insensitive;
    optargs_s.bitmask |= GUESTFS_GREP_OPTS_INSENSITIVE_BITMASK;
  }
  if (optargs_t_compressed != (zend_bool)-1) {
    optargs_s.compressed = optargs_t_compressed;
    optargs_s.bitmask |= GUESTFS_GREP_OPTS_COMPRESSED_BITMASK;
  }

  char **r;
  r = guestfs_grep_opts_argv (g, regex, path, optargs);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_grepi)
{
  zval *z_g;
  guestfs_h *g;
  char *regex;
  guestfs_string_length regex_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &regex, &regex_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (regex) != regex_size) {
    fprintf (stderr, "libguestfs: grepi: parameter 'regex' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: grepi: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_grepi (g, regex, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_grub_install)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &root, &root_size, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: grub_install: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: grub_install: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_grub_install (g, root, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_head)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: head: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_head (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_head_n)
{
  zval *z_g;
  guestfs_h *g;
  long nrlines;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rls",
        &z_g, &nrlines, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: head_n: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_head_n (g, nrlines, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_hexdump)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: hexdump: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_hexdump (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_hivex_close)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_hivex_close (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_hivex_commit)
{
  zval *z_g;
  guestfs_h *g;
  char *filename = NULL;
  guestfs_string_length filename_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs!",
        &z_g, &filename, &filename_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (filename != NULL && strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: hivex_commit: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_hivex_commit (g, filename);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_hivex_node_add_child)
{
  zval *z_g;
  guestfs_h *g;
  long parent;
  char *name;
  guestfs_string_length name_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rls",
        &z_g, &parent, &name, &name_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (name) != name_size) {
    fprintf (stderr, "libguestfs: hivex_node_add_child: parameter 'name' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_hivex_node_add_child (g, parent, name);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_hivex_node_children)
{
  zval *z_g;
  guestfs_h *g;
  long nodeh;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &nodeh) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  struct guestfs_hivex_node_list *r;
  r = guestfs_hivex_node_children (g, nodeh);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    add_assoc_long (z_elem, "hivex_node_h", r->val[c].hivex_node_h);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_hivex_node_list (r);
}

PHP_FUNCTION (guestfs_hivex_node_delete_child)
{
  zval *z_g;
  guestfs_h *g;
  long nodeh;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &nodeh) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_hivex_node_delete_child (g, nodeh);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_hivex_node_get_child)
{
  zval *z_g;
  guestfs_h *g;
  long nodeh;
  char *name;
  guestfs_string_length name_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rls",
        &z_g, &nodeh, &name, &name_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (name) != name_size) {
    fprintf (stderr, "libguestfs: hivex_node_get_child: parameter 'name' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_hivex_node_get_child (g, nodeh, name);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_hivex_node_get_value)
{
  zval *z_g;
  guestfs_h *g;
  long nodeh;
  char *key;
  guestfs_string_length key_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rls",
        &z_g, &nodeh, &key, &key_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (key) != key_size) {
    fprintf (stderr, "libguestfs: hivex_node_get_value: parameter 'key' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_hivex_node_get_value (g, nodeh, key);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_hivex_node_name)
{
  zval *z_g;
  guestfs_h *g;
  long nodeh;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &nodeh) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_hivex_node_name (g, nodeh);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_hivex_node_parent)
{
  zval *z_g;
  guestfs_h *g;
  long nodeh;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &nodeh) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_hivex_node_parent (g, nodeh);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_hivex_node_set_value)
{
  zval *z_g;
  guestfs_h *g;
  long nodeh;
  char *key;
  guestfs_string_length key_size;
  long t;
  char *val;
  guestfs_string_length val_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rlsls",
        &z_g, &nodeh, &key, &key_size, &t, &val, &val_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (key) != key_size) {
    fprintf (stderr, "libguestfs: hivex_node_set_value: parameter 'key' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_hivex_node_set_value (g, nodeh, key, t, val, val_size);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_hivex_node_values)
{
  zval *z_g;
  guestfs_h *g;
  long nodeh;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &nodeh) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  struct guestfs_hivex_value_list *r;
  r = guestfs_hivex_node_values (g, nodeh);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    add_assoc_long (z_elem, "hivex_value_h", r->val[c].hivex_value_h);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_hivex_value_list (r);
}

PHP_FUNCTION (guestfs_hivex_open)
{
  zval *z_g;
  guestfs_h *g;
  char *filename;
  guestfs_string_length filename_size;
  struct guestfs_hivex_open_argv optargs_s = { .bitmask = 0 };
  struct guestfs_hivex_open_argv *optargs = &optargs_s;
  zend_bool optargs_t_verbose = -1;
  zend_bool optargs_t_debug = -1;
  zend_bool optargs_t_write = -1;
  zend_bool optargs_t_unsafe = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|bbbb",
        &z_g, &filename, &filename_size, &optargs_t_verbose, &optargs_t_debug, &optargs_t_write, &optargs_t_unsafe) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: hivex_open: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_verbose != (zend_bool)-1) {
    optargs_s.verbose = optargs_t_verbose;
    optargs_s.bitmask |= GUESTFS_HIVEX_OPEN_VERBOSE_BITMASK;
  }
  if (optargs_t_debug != (zend_bool)-1) {
    optargs_s.debug = optargs_t_debug;
    optargs_s.bitmask |= GUESTFS_HIVEX_OPEN_DEBUG_BITMASK;
  }
  if (optargs_t_write != (zend_bool)-1) {
    optargs_s.write = optargs_t_write;
    optargs_s.bitmask |= GUESTFS_HIVEX_OPEN_WRITE_BITMASK;
  }
  if (optargs_t_unsafe != (zend_bool)-1) {
    optargs_s.unsafe = optargs_t_unsafe;
    optargs_s.bitmask |= GUESTFS_HIVEX_OPEN_UNSAFE_BITMASK;
  }

  int r;
  r = guestfs_hivex_open_argv (g, filename, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_hivex_root)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_hivex_root (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_hivex_value_key)
{
  zval *z_g;
  guestfs_h *g;
  long valueh;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &valueh) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_hivex_value_key (g, valueh);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_hivex_value_string)
{
  zval *z_g;
  guestfs_h *g;
  long valueh;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &valueh) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_hivex_value_string (g, valueh);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_hivex_value_type)
{
  zval *z_g;
  guestfs_h *g;
  long valueh;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &valueh) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_hivex_value_type (g, valueh);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_hivex_value_utf8)
{
  zval *z_g;
  guestfs_h *g;
  long valueh;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &valueh) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_hivex_value_utf8 (g, valueh);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_hivex_value_value)
{
  zval *z_g;
  guestfs_h *g;
  long valueh;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &valueh) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  size_t size;
  r = guestfs_hivex_value_value (g, valueh, &size);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrndup (r, size);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_initrd_cat)
{
  zval *z_g;
  guestfs_h *g;
  char *initrdpath;
  guestfs_string_length initrdpath_size;
  char *filename;
  guestfs_string_length filename_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &initrdpath, &initrdpath_size, &filename, &filename_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (initrdpath) != initrdpath_size) {
    fprintf (stderr, "libguestfs: initrd_cat: parameter 'initrdpath' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: initrd_cat: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  size_t size;
  r = guestfs_initrd_cat (g, initrdpath, filename, &size);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrndup (r, size);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_initrd_list)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: initrd_list: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_initrd_list (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_inotify_add_watch)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  long mask;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &path, &path_size, &mask) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: inotify_add_watch: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_inotify_add_watch (g, path, mask);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_inotify_close)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_inotify_close (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_inotify_files)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_inotify_files (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_inotify_init)
{
  zval *z_g;
  guestfs_h *g;
  long maxevents;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &maxevents) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_inotify_init (g, maxevents);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_inotify_read)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  struct guestfs_inotify_event_list *r;
  r = guestfs_inotify_read (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    add_assoc_long (z_elem, "in_wd", r->val[c].in_wd);
    add_assoc_long (z_elem, "in_mask", r->val[c].in_mask);
    add_assoc_long (z_elem, "in_cookie", r->val[c].in_cookie);
    guestfs_add_assoc_string (z_elem, "in_name", r->val[c].in_name, 1);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_inotify_event_list (r);
}

PHP_FUNCTION (guestfs_inotify_rm_watch)
{
  zval *z_g;
  guestfs_h *g;
  long wd;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &wd) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_inotify_rm_watch (g, wd);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_inspect_get_arch)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_arch: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_inspect_get_arch (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_inspect_get_build_id)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_build_id: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_inspect_get_build_id (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_inspect_get_distro)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_distro: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_inspect_get_distro (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_inspect_get_drive_mappings)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_drive_mappings: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_inspect_get_drive_mappings (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; c += 2) {
    guestfs_add_assoc_string (return_value, r[c], r[c+1], 1);
    free (r[c]);
    free (r[c+1]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_inspect_get_filesystems)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_filesystems: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_inspect_get_filesystems (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_inspect_get_format)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_format: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_inspect_get_format (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_inspect_get_hostname)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_hostname: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_inspect_get_hostname (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_inspect_get_icon)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;
  struct guestfs_inspect_get_icon_argv optargs_s = { .bitmask = 0 };
  struct guestfs_inspect_get_icon_argv *optargs = &optargs_s;
  zend_bool optargs_t_favicon = -1;
  zend_bool optargs_t_highquality = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|bb",
        &z_g, &root, &root_size, &optargs_t_favicon, &optargs_t_highquality) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_icon: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_favicon != (zend_bool)-1) {
    optargs_s.favicon = optargs_t_favicon;
    optargs_s.bitmask |= GUESTFS_INSPECT_GET_ICON_FAVICON_BITMASK;
  }
  if (optargs_t_highquality != (zend_bool)-1) {
    optargs_s.highquality = optargs_t_highquality;
    optargs_s.bitmask |= GUESTFS_INSPECT_GET_ICON_HIGHQUALITY_BITMASK;
  }

  char *r;
  size_t size;
  r = guestfs_inspect_get_icon_argv (g, root, &size, optargs);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrndup (r, size);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_inspect_get_major_version)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_major_version: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_inspect_get_major_version (g, root);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_inspect_get_minor_version)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_minor_version: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_inspect_get_minor_version (g, root);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_inspect_get_mountpoints)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_mountpoints: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_inspect_get_mountpoints (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; c += 2) {
    guestfs_add_assoc_string (return_value, r[c], r[c+1], 1);
    free (r[c]);
    free (r[c+1]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_inspect_get_osinfo)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_osinfo: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_inspect_get_osinfo (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_inspect_get_package_format)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_package_format: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_inspect_get_package_format (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_inspect_get_package_management)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_package_management: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_inspect_get_package_management (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_inspect_get_product_name)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_product_name: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_inspect_get_product_name (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_inspect_get_product_variant)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_product_variant: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_inspect_get_product_variant (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_inspect_get_roots)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_inspect_get_roots (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_inspect_get_type)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_type: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_inspect_get_type (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_inspect_get_windows_current_control_set)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_windows_current_control_set: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_inspect_get_windows_current_control_set (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_inspect_get_windows_software_hive)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_windows_software_hive: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_inspect_get_windows_software_hive (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_inspect_get_windows_system_hive)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_windows_system_hive: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_inspect_get_windows_system_hive (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_inspect_get_windows_systemroot)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_get_windows_systemroot: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_inspect_get_windows_systemroot (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_inspect_is_live)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_is_live: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_inspect_is_live (g, root);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_inspect_is_multipart)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_is_multipart: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_inspect_is_multipart (g, root);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_inspect_is_netinst)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_is_netinst: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_inspect_is_netinst (g, root);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_inspect_list_applications)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_list_applications: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_application_list *r;
  r = guestfs_inspect_list_applications (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    guestfs_add_assoc_string (z_elem, "app_name", r->val[c].app_name, 1);
    guestfs_add_assoc_string (z_elem, "app_display_name", r->val[c].app_display_name, 1);
    add_assoc_long (z_elem, "app_epoch", r->val[c].app_epoch);
    guestfs_add_assoc_string (z_elem, "app_version", r->val[c].app_version, 1);
    guestfs_add_assoc_string (z_elem, "app_release", r->val[c].app_release, 1);
    guestfs_add_assoc_string (z_elem, "app_install_path", r->val[c].app_install_path, 1);
    guestfs_add_assoc_string (z_elem, "app_trans_path", r->val[c].app_trans_path, 1);
    guestfs_add_assoc_string (z_elem, "app_publisher", r->val[c].app_publisher, 1);
    guestfs_add_assoc_string (z_elem, "app_url", r->val[c].app_url, 1);
    guestfs_add_assoc_string (z_elem, "app_source_package", r->val[c].app_source_package, 1);
    guestfs_add_assoc_string (z_elem, "app_summary", r->val[c].app_summary, 1);
    guestfs_add_assoc_string (z_elem, "app_description", r->val[c].app_description, 1);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_application_list (r);
}

PHP_FUNCTION (guestfs_inspect_list_applications2)
{
  zval *z_g;
  guestfs_h *g;
  char *root;
  guestfs_string_length root_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &root, &root_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (root) != root_size) {
    fprintf (stderr, "libguestfs: inspect_list_applications2: parameter 'root' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_application2_list *r;
  r = guestfs_inspect_list_applications2 (g, root);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    guestfs_add_assoc_string (z_elem, "app2_name", r->val[c].app2_name, 1);
    guestfs_add_assoc_string (z_elem, "app2_display_name", r->val[c].app2_display_name, 1);
    add_assoc_long (z_elem, "app2_epoch", r->val[c].app2_epoch);
    guestfs_add_assoc_string (z_elem, "app2_version", r->val[c].app2_version, 1);
    guestfs_add_assoc_string (z_elem, "app2_release", r->val[c].app2_release, 1);
    guestfs_add_assoc_string (z_elem, "app2_arch", r->val[c].app2_arch, 1);
    guestfs_add_assoc_string (z_elem, "app2_install_path", r->val[c].app2_install_path, 1);
    guestfs_add_assoc_string (z_elem, "app2_trans_path", r->val[c].app2_trans_path, 1);
    guestfs_add_assoc_string (z_elem, "app2_publisher", r->val[c].app2_publisher, 1);
    guestfs_add_assoc_string (z_elem, "app2_url", r->val[c].app2_url, 1);
    guestfs_add_assoc_string (z_elem, "app2_source_package", r->val[c].app2_source_package, 1);
    guestfs_add_assoc_string (z_elem, "app2_summary", r->val[c].app2_summary, 1);
    guestfs_add_assoc_string (z_elem, "app2_description", r->val[c].app2_description, 1);
    guestfs_add_assoc_string (z_elem, "app2_spare1", r->val[c].app2_spare1, 1);
    guestfs_add_assoc_string (z_elem, "app2_spare2", r->val[c].app2_spare2, 1);
    guestfs_add_assoc_string (z_elem, "app2_spare3", r->val[c].app2_spare3, 1);
    guestfs_add_assoc_string (z_elem, "app2_spare4", r->val[c].app2_spare4, 1);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_application2_list (r);
}

PHP_FUNCTION (guestfs_inspect_os)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_inspect_os (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_internal_exit)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_internal_exit (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_internal_test)
{
  zval *z_g;
  guestfs_h *g;
  char *str;
  guestfs_string_length str_size;
  char *optstr = NULL;
  guestfs_string_length optstr_size;
  zval *z_strlist;
  char **strlist;
  zend_bool b;
  long integer;
  long integer64;
  char *filein;
  guestfs_string_length filein_size;
  char *fileout;
  guestfs_string_length fileout_size;
  char *bufferin;
  guestfs_string_length bufferin_size;
  struct guestfs_internal_test_argv optargs_s = { .bitmask = 0 };
  struct guestfs_internal_test_argv *optargs = &optargs_s;
  zend_bool optargs_t_obool = -1;
  long optargs_t_oint = -1;
  long optargs_t_oint64 = -1;
  char *optargs_t_ostring = NULL;
  guestfs_string_length optargs_t_ostring_size = -1;
  zval *optargs_t_ostringlist = NULL;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss!abllsss|bllsa!",
        &z_g, &str, &str_size, &optstr, &optstr_size, &z_strlist, &b, &integer, &integer64, &filein, &filein_size, &fileout, &fileout_size, &bufferin, &bufferin_size, &optargs_t_obool, &optargs_t_oint, &optargs_t_oint64, &optargs_t_ostring, &optargs_t_ostring_size, &optargs_t_ostringlist) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (str) != str_size) {
    fprintf (stderr, "libguestfs: internal_test: parameter 'str' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optstr != NULL && strlen (optstr) != optstr_size) {
    fprintf (stderr, "libguestfs: internal_test: parameter 'optstr' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  strlist = get_stringlist (z_strlist);

  if (strlen (filein) != filein_size) {
    fprintf (stderr, "libguestfs: internal_test: parameter 'filein' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (fileout) != fileout_size) {
    fprintf (stderr, "libguestfs: internal_test: parameter 'fileout' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_obool != (zend_bool)-1) {
    optargs_s.obool = optargs_t_obool;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_OBOOL_BITMASK;
  }
  if (optargs_t_oint != -1) {
    optargs_s.oint = optargs_t_oint;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_OINT_BITMASK;
  }
  if (optargs_t_oint64 != -1) {
    optargs_s.oint64 = optargs_t_oint64;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_OINT64_BITMASK;
  }
  if (optargs_t_ostring != NULL) {
    optargs_s.ostring = optargs_t_ostring;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_OSTRING_BITMASK;
  }
  /* We've seen PHP give us a *long* here when we asked for an array, so
   * positively check that it gave us an array, otherwise ignore it.
   */
  if (optargs_t_ostringlist != NULL && Z_TYPE_P (optargs_t_ostringlist) == IS_ARRAY) {
    optargs_s.ostringlist = get_stringlist (optargs_t_ostringlist);
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_OSTRINGLIST_BITMASK;
  }

  int r;
  r = guestfs_internal_test_argv (g, str, optstr, strlist, b, integer, integer64, filein, fileout, bufferin, bufferin_size, optargs);

  guestfs_efree_stringlist (strlist);

  if ((optargs_s.bitmask & GUESTFS_INTERNAL_TEST_OSTRINGLIST_BITMASK) != 0)
    guestfs_efree_stringlist ((char **) optargs_s.ostringlist);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_internal_test_63_optargs)
{
  zval *z_g;
  guestfs_h *g;
  struct guestfs_internal_test_63_optargs_argv optargs_s = { .bitmask = 0 };
  struct guestfs_internal_test_63_optargs_argv *optargs = &optargs_s;
  long optargs_t_opt1 = -1;
  long optargs_t_opt2 = -1;
  long optargs_t_opt3 = -1;
  long optargs_t_opt4 = -1;
  long optargs_t_opt5 = -1;
  long optargs_t_opt6 = -1;
  long optargs_t_opt7 = -1;
  long optargs_t_opt8 = -1;
  long optargs_t_opt9 = -1;
  long optargs_t_opt10 = -1;
  long optargs_t_opt11 = -1;
  long optargs_t_opt12 = -1;
  long optargs_t_opt13 = -1;
  long optargs_t_opt14 = -1;
  long optargs_t_opt15 = -1;
  long optargs_t_opt16 = -1;
  long optargs_t_opt17 = -1;
  long optargs_t_opt18 = -1;
  long optargs_t_opt19 = -1;
  long optargs_t_opt20 = -1;
  long optargs_t_opt21 = -1;
  long optargs_t_opt22 = -1;
  long optargs_t_opt23 = -1;
  long optargs_t_opt24 = -1;
  long optargs_t_opt25 = -1;
  long optargs_t_opt26 = -1;
  long optargs_t_opt27 = -1;
  long optargs_t_opt28 = -1;
  long optargs_t_opt29 = -1;
  long optargs_t_opt30 = -1;
  long optargs_t_opt31 = -1;
  long optargs_t_opt32 = -1;
  long optargs_t_opt33 = -1;
  long optargs_t_opt34 = -1;
  long optargs_t_opt35 = -1;
  long optargs_t_opt36 = -1;
  long optargs_t_opt37 = -1;
  long optargs_t_opt38 = -1;
  long optargs_t_opt39 = -1;
  long optargs_t_opt40 = -1;
  long optargs_t_opt41 = -1;
  long optargs_t_opt42 = -1;
  long optargs_t_opt43 = -1;
  long optargs_t_opt44 = -1;
  long optargs_t_opt45 = -1;
  long optargs_t_opt46 = -1;
  long optargs_t_opt47 = -1;
  long optargs_t_opt48 = -1;
  long optargs_t_opt49 = -1;
  long optargs_t_opt50 = -1;
  long optargs_t_opt51 = -1;
  long optargs_t_opt52 = -1;
  long optargs_t_opt53 = -1;
  long optargs_t_opt54 = -1;
  long optargs_t_opt55 = -1;
  long optargs_t_opt56 = -1;
  long optargs_t_opt57 = -1;
  long optargs_t_opt58 = -1;
  long optargs_t_opt59 = -1;
  long optargs_t_opt60 = -1;
  long optargs_t_opt61 = -1;
  long optargs_t_opt62 = -1;
  long optargs_t_opt63 = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r|lllllllllllllllllllllllllllllllllllllllllllllllllllllllllllllll",
        &z_g, &optargs_t_opt1, &optargs_t_opt2, &optargs_t_opt3, &optargs_t_opt4, &optargs_t_opt5, &optargs_t_opt6, &optargs_t_opt7, &optargs_t_opt8, &optargs_t_opt9, &optargs_t_opt10, &optargs_t_opt11, &optargs_t_opt12, &optargs_t_opt13, &optargs_t_opt14, &optargs_t_opt15, &optargs_t_opt16, &optargs_t_opt17, &optargs_t_opt18, &optargs_t_opt19, &optargs_t_opt20, &optargs_t_opt21, &optargs_t_opt22, &optargs_t_opt23, &optargs_t_opt24, &optargs_t_opt25, &optargs_t_opt26, &optargs_t_opt27, &optargs_t_opt28, &optargs_t_opt29, &optargs_t_opt30, &optargs_t_opt31, &optargs_t_opt32, &optargs_t_opt33, &optargs_t_opt34, &optargs_t_opt35, &optargs_t_opt36, &optargs_t_opt37, &optargs_t_opt38, &optargs_t_opt39, &optargs_t_opt40, &optargs_t_opt41, &optargs_t_opt42, &optargs_t_opt43, &optargs_t_opt44, &optargs_t_opt45, &optargs_t_opt46, &optargs_t_opt47, &optargs_t_opt48, &optargs_t_opt49, &optargs_t_opt50, &optargs_t_opt51, &optargs_t_opt52, &optargs_t_opt53, &optargs_t_opt54, &optargs_t_opt55, &optargs_t_opt56, &optargs_t_opt57, &optargs_t_opt58, &optargs_t_opt59, &optargs_t_opt60, &optargs_t_opt61, &optargs_t_opt62, &optargs_t_opt63) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (optargs_t_opt1 != -1) {
    optargs_s.opt1 = optargs_t_opt1;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT1_BITMASK;
  }
  if (optargs_t_opt2 != -1) {
    optargs_s.opt2 = optargs_t_opt2;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT2_BITMASK;
  }
  if (optargs_t_opt3 != -1) {
    optargs_s.opt3 = optargs_t_opt3;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT3_BITMASK;
  }
  if (optargs_t_opt4 != -1) {
    optargs_s.opt4 = optargs_t_opt4;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT4_BITMASK;
  }
  if (optargs_t_opt5 != -1) {
    optargs_s.opt5 = optargs_t_opt5;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT5_BITMASK;
  }
  if (optargs_t_opt6 != -1) {
    optargs_s.opt6 = optargs_t_opt6;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT6_BITMASK;
  }
  if (optargs_t_opt7 != -1) {
    optargs_s.opt7 = optargs_t_opt7;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT7_BITMASK;
  }
  if (optargs_t_opt8 != -1) {
    optargs_s.opt8 = optargs_t_opt8;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT8_BITMASK;
  }
  if (optargs_t_opt9 != -1) {
    optargs_s.opt9 = optargs_t_opt9;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT9_BITMASK;
  }
  if (optargs_t_opt10 != -1) {
    optargs_s.opt10 = optargs_t_opt10;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT10_BITMASK;
  }
  if (optargs_t_opt11 != -1) {
    optargs_s.opt11 = optargs_t_opt11;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT11_BITMASK;
  }
  if (optargs_t_opt12 != -1) {
    optargs_s.opt12 = optargs_t_opt12;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT12_BITMASK;
  }
  if (optargs_t_opt13 != -1) {
    optargs_s.opt13 = optargs_t_opt13;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT13_BITMASK;
  }
  if (optargs_t_opt14 != -1) {
    optargs_s.opt14 = optargs_t_opt14;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT14_BITMASK;
  }
  if (optargs_t_opt15 != -1) {
    optargs_s.opt15 = optargs_t_opt15;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT15_BITMASK;
  }
  if (optargs_t_opt16 != -1) {
    optargs_s.opt16 = optargs_t_opt16;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT16_BITMASK;
  }
  if (optargs_t_opt17 != -1) {
    optargs_s.opt17 = optargs_t_opt17;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT17_BITMASK;
  }
  if (optargs_t_opt18 != -1) {
    optargs_s.opt18 = optargs_t_opt18;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT18_BITMASK;
  }
  if (optargs_t_opt19 != -1) {
    optargs_s.opt19 = optargs_t_opt19;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT19_BITMASK;
  }
  if (optargs_t_opt20 != -1) {
    optargs_s.opt20 = optargs_t_opt20;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT20_BITMASK;
  }
  if (optargs_t_opt21 != -1) {
    optargs_s.opt21 = optargs_t_opt21;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT21_BITMASK;
  }
  if (optargs_t_opt22 != -1) {
    optargs_s.opt22 = optargs_t_opt22;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT22_BITMASK;
  }
  if (optargs_t_opt23 != -1) {
    optargs_s.opt23 = optargs_t_opt23;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT23_BITMASK;
  }
  if (optargs_t_opt24 != -1) {
    optargs_s.opt24 = optargs_t_opt24;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT24_BITMASK;
  }
  if (optargs_t_opt25 != -1) {
    optargs_s.opt25 = optargs_t_opt25;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT25_BITMASK;
  }
  if (optargs_t_opt26 != -1) {
    optargs_s.opt26 = optargs_t_opt26;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT26_BITMASK;
  }
  if (optargs_t_opt27 != -1) {
    optargs_s.opt27 = optargs_t_opt27;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT27_BITMASK;
  }
  if (optargs_t_opt28 != -1) {
    optargs_s.opt28 = optargs_t_opt28;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT28_BITMASK;
  }
  if (optargs_t_opt29 != -1) {
    optargs_s.opt29 = optargs_t_opt29;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT29_BITMASK;
  }
  if (optargs_t_opt30 != -1) {
    optargs_s.opt30 = optargs_t_opt30;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT30_BITMASK;
  }
  if (optargs_t_opt31 != -1) {
    optargs_s.opt31 = optargs_t_opt31;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT31_BITMASK;
  }
  if (optargs_t_opt32 != -1) {
    optargs_s.opt32 = optargs_t_opt32;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT32_BITMASK;
  }
  if (optargs_t_opt33 != -1) {
    optargs_s.opt33 = optargs_t_opt33;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT33_BITMASK;
  }
  if (optargs_t_opt34 != -1) {
    optargs_s.opt34 = optargs_t_opt34;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT34_BITMASK;
  }
  if (optargs_t_opt35 != -1) {
    optargs_s.opt35 = optargs_t_opt35;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT35_BITMASK;
  }
  if (optargs_t_opt36 != -1) {
    optargs_s.opt36 = optargs_t_opt36;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT36_BITMASK;
  }
  if (optargs_t_opt37 != -1) {
    optargs_s.opt37 = optargs_t_opt37;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT37_BITMASK;
  }
  if (optargs_t_opt38 != -1) {
    optargs_s.opt38 = optargs_t_opt38;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT38_BITMASK;
  }
  if (optargs_t_opt39 != -1) {
    optargs_s.opt39 = optargs_t_opt39;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT39_BITMASK;
  }
  if (optargs_t_opt40 != -1) {
    optargs_s.opt40 = optargs_t_opt40;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT40_BITMASK;
  }
  if (optargs_t_opt41 != -1) {
    optargs_s.opt41 = optargs_t_opt41;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT41_BITMASK;
  }
  if (optargs_t_opt42 != -1) {
    optargs_s.opt42 = optargs_t_opt42;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT42_BITMASK;
  }
  if (optargs_t_opt43 != -1) {
    optargs_s.opt43 = optargs_t_opt43;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT43_BITMASK;
  }
  if (optargs_t_opt44 != -1) {
    optargs_s.opt44 = optargs_t_opt44;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT44_BITMASK;
  }
  if (optargs_t_opt45 != -1) {
    optargs_s.opt45 = optargs_t_opt45;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT45_BITMASK;
  }
  if (optargs_t_opt46 != -1) {
    optargs_s.opt46 = optargs_t_opt46;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT46_BITMASK;
  }
  if (optargs_t_opt47 != -1) {
    optargs_s.opt47 = optargs_t_opt47;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT47_BITMASK;
  }
  if (optargs_t_opt48 != -1) {
    optargs_s.opt48 = optargs_t_opt48;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT48_BITMASK;
  }
  if (optargs_t_opt49 != -1) {
    optargs_s.opt49 = optargs_t_opt49;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT49_BITMASK;
  }
  if (optargs_t_opt50 != -1) {
    optargs_s.opt50 = optargs_t_opt50;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT50_BITMASK;
  }
  if (optargs_t_opt51 != -1) {
    optargs_s.opt51 = optargs_t_opt51;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT51_BITMASK;
  }
  if (optargs_t_opt52 != -1) {
    optargs_s.opt52 = optargs_t_opt52;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT52_BITMASK;
  }
  if (optargs_t_opt53 != -1) {
    optargs_s.opt53 = optargs_t_opt53;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT53_BITMASK;
  }
  if (optargs_t_opt54 != -1) {
    optargs_s.opt54 = optargs_t_opt54;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT54_BITMASK;
  }
  if (optargs_t_opt55 != -1) {
    optargs_s.opt55 = optargs_t_opt55;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT55_BITMASK;
  }
  if (optargs_t_opt56 != -1) {
    optargs_s.opt56 = optargs_t_opt56;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT56_BITMASK;
  }
  if (optargs_t_opt57 != -1) {
    optargs_s.opt57 = optargs_t_opt57;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT57_BITMASK;
  }
  if (optargs_t_opt58 != -1) {
    optargs_s.opt58 = optargs_t_opt58;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT58_BITMASK;
  }
  if (optargs_t_opt59 != -1) {
    optargs_s.opt59 = optargs_t_opt59;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT59_BITMASK;
  }
  if (optargs_t_opt60 != -1) {
    optargs_s.opt60 = optargs_t_opt60;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT60_BITMASK;
  }
  if (optargs_t_opt61 != -1) {
    optargs_s.opt61 = optargs_t_opt61;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT61_BITMASK;
  }
  if (optargs_t_opt62 != -1) {
    optargs_s.opt62 = optargs_t_opt62;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT62_BITMASK;
  }
  if (optargs_t_opt63 != -1) {
    optargs_s.opt63 = optargs_t_opt63;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_63_OPTARGS_OPT63_BITMASK;
  }

  int r;
  r = guestfs_internal_test_63_optargs_argv (g, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_internal_test_close_output)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_internal_test_close_output (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_internal_test_only_optargs)
{
  zval *z_g;
  guestfs_h *g;
  struct guestfs_internal_test_only_optargs_argv optargs_s = { .bitmask = 0 };
  struct guestfs_internal_test_only_optargs_argv *optargs = &optargs_s;
  long optargs_t_test = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r|l",
        &z_g, &optargs_t_test) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (optargs_t_test != -1) {
    optargs_s.test = optargs_t_test;
    optargs_s.bitmask |= GUESTFS_INTERNAL_TEST_ONLY_OPTARGS_TEST_BITMASK;
  }

  int r;
  r = guestfs_internal_test_only_optargs_argv (g, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_internal_test_rbool)
{
  zval *z_g;
  guestfs_h *g;
  char *val;
  guestfs_string_length val_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &val, &val_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (val) != val_size) {
    fprintf (stderr, "libguestfs: internal_test_rbool: parameter 'val' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_internal_test_rbool (g, val);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_internal_test_rboolerr)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_internal_test_rboolerr (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_internal_test_rbufferout)
{
  zval *z_g;
  guestfs_h *g;
  char *val;
  guestfs_string_length val_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &val, &val_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (val) != val_size) {
    fprintf (stderr, "libguestfs: internal_test_rbufferout: parameter 'val' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  size_t size;
  r = guestfs_internal_test_rbufferout (g, val, &size);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrndup (r, size);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_internal_test_rbufferouterr)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  size_t size;
  r = guestfs_internal_test_rbufferouterr (g, &size);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrndup (r, size);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_internal_test_rconstoptstring)
{
  zval *z_g;
  guestfs_h *g;
  char *val;
  guestfs_string_length val_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &val, &val_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (val) != val_size) {
    fprintf (stderr, "libguestfs: internal_test_rconstoptstring: parameter 'val' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  const char *r;
  r = guestfs_internal_test_rconstoptstring (g, val);


  if (r) { GUESTFS_RETURN_STRING (r, 1); }
  else { RETURN_NULL (); }
}

PHP_FUNCTION (guestfs_internal_test_rconstoptstringerr)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  const char *r;
  r = guestfs_internal_test_rconstoptstringerr (g);


  if (r) { GUESTFS_RETURN_STRING (r, 1); }
  else { RETURN_NULL (); }
}

PHP_FUNCTION (guestfs_internal_test_rconststring)
{
  zval *z_g;
  guestfs_h *g;
  char *val;
  guestfs_string_length val_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &val, &val_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (val) != val_size) {
    fprintf (stderr, "libguestfs: internal_test_rconststring: parameter 'val' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  const char *r;
  r = guestfs_internal_test_rconststring (g, val);

  if (r == NULL) {
    RETURN_FALSE;
  }

  GUESTFS_RETURN_STRING (r, 1);
}

PHP_FUNCTION (guestfs_internal_test_rconststringerr)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  const char *r;
  r = guestfs_internal_test_rconststringerr (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  GUESTFS_RETURN_STRING (r, 1);
}

PHP_FUNCTION (guestfs_internal_test_rhashtable)
{
  zval *z_g;
  guestfs_h *g;
  char *val;
  guestfs_string_length val_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &val, &val_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (val) != val_size) {
    fprintf (stderr, "libguestfs: internal_test_rhashtable: parameter 'val' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_internal_test_rhashtable (g, val);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; c += 2) {
    guestfs_add_assoc_string (return_value, r[c], r[c+1], 1);
    free (r[c]);
    free (r[c+1]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_internal_test_rhashtableerr)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_internal_test_rhashtableerr (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; c += 2) {
    guestfs_add_assoc_string (return_value, r[c], r[c+1], 1);
    free (r[c]);
    free (r[c+1]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_internal_test_rint)
{
  zval *z_g;
  guestfs_h *g;
  char *val;
  guestfs_string_length val_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &val, &val_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (val) != val_size) {
    fprintf (stderr, "libguestfs: internal_test_rint: parameter 'val' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_internal_test_rint (g, val);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_internal_test_rint64)
{
  zval *z_g;
  guestfs_h *g;
  char *val;
  guestfs_string_length val_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &val, &val_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (val) != val_size) {
    fprintf (stderr, "libguestfs: internal_test_rint64: parameter 'val' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_internal_test_rint64 (g, val);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_internal_test_rint64err)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_internal_test_rint64err (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_internal_test_rinterr)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_internal_test_rinterr (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_internal_test_rstring)
{
  zval *z_g;
  guestfs_h *g;
  char *val;
  guestfs_string_length val_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &val, &val_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (val) != val_size) {
    fprintf (stderr, "libguestfs: internal_test_rstring: parameter 'val' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_internal_test_rstring (g, val);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_internal_test_rstringerr)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_internal_test_rstringerr (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_internal_test_rstringlist)
{
  zval *z_g;
  guestfs_h *g;
  char *val;
  guestfs_string_length val_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &val, &val_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (val) != val_size) {
    fprintf (stderr, "libguestfs: internal_test_rstringlist: parameter 'val' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_internal_test_rstringlist (g, val);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_internal_test_rstringlisterr)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_internal_test_rstringlisterr (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_internal_test_rstruct)
{
  zval *z_g;
  guestfs_h *g;
  char *val;
  guestfs_string_length val_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &val, &val_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (val) != val_size) {
    fprintf (stderr, "libguestfs: internal_test_rstruct: parameter 'val' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_lvm_pv *r;
  r = guestfs_internal_test_rstruct (g, val);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  guestfs_add_assoc_string (return_value, "pv_name", r->pv_name, 1);
  guestfs_add_assoc_stringl (return_value, "pv_uuid", r->pv_uuid, 32, 1);
  guestfs_add_assoc_string (return_value, "pv_fmt", r->pv_fmt, 1);
  add_assoc_long (return_value, "pv_size", r->pv_size);
  add_assoc_long (return_value, "dev_size", r->dev_size);
  add_assoc_long (return_value, "pv_free", r->pv_free);
  add_assoc_long (return_value, "pv_used", r->pv_used);
  guestfs_add_assoc_string (return_value, "pv_attr", r->pv_attr, 1);
  add_assoc_long (return_value, "pv_pe_count", r->pv_pe_count);
  add_assoc_long (return_value, "pv_pe_alloc_count", r->pv_pe_alloc_count);
  guestfs_add_assoc_string (return_value, "pv_tags", r->pv_tags, 1);
  add_assoc_long (return_value, "pe_start", r->pe_start);
  add_assoc_long (return_value, "pv_mda_count", r->pv_mda_count);
  add_assoc_long (return_value, "pv_mda_free", r->pv_mda_free);
  guestfs_free_lvm_pv (r);
}

PHP_FUNCTION (guestfs_internal_test_rstructerr)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  struct guestfs_lvm_pv *r;
  r = guestfs_internal_test_rstructerr (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  guestfs_add_assoc_string (return_value, "pv_name", r->pv_name, 1);
  guestfs_add_assoc_stringl (return_value, "pv_uuid", r->pv_uuid, 32, 1);
  guestfs_add_assoc_string (return_value, "pv_fmt", r->pv_fmt, 1);
  add_assoc_long (return_value, "pv_size", r->pv_size);
  add_assoc_long (return_value, "dev_size", r->dev_size);
  add_assoc_long (return_value, "pv_free", r->pv_free);
  add_assoc_long (return_value, "pv_used", r->pv_used);
  guestfs_add_assoc_string (return_value, "pv_attr", r->pv_attr, 1);
  add_assoc_long (return_value, "pv_pe_count", r->pv_pe_count);
  add_assoc_long (return_value, "pv_pe_alloc_count", r->pv_pe_alloc_count);
  guestfs_add_assoc_string (return_value, "pv_tags", r->pv_tags, 1);
  add_assoc_long (return_value, "pe_start", r->pe_start);
  add_assoc_long (return_value, "pv_mda_count", r->pv_mda_count);
  add_assoc_long (return_value, "pv_mda_free", r->pv_mda_free);
  guestfs_free_lvm_pv (r);
}

PHP_FUNCTION (guestfs_internal_test_rstructlist)
{
  zval *z_g;
  guestfs_h *g;
  char *val;
  guestfs_string_length val_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &val, &val_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (val) != val_size) {
    fprintf (stderr, "libguestfs: internal_test_rstructlist: parameter 'val' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_lvm_pv_list *r;
  r = guestfs_internal_test_rstructlist (g, val);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    guestfs_add_assoc_string (z_elem, "pv_name", r->val[c].pv_name, 1);
    guestfs_add_assoc_stringl (z_elem, "pv_uuid", r->val[c].pv_uuid, 32, 1);
    guestfs_add_assoc_string (z_elem, "pv_fmt", r->val[c].pv_fmt, 1);
    add_assoc_long (z_elem, "pv_size", r->val[c].pv_size);
    add_assoc_long (z_elem, "dev_size", r->val[c].dev_size);
    add_assoc_long (z_elem, "pv_free", r->val[c].pv_free);
    add_assoc_long (z_elem, "pv_used", r->val[c].pv_used);
    guestfs_add_assoc_string (z_elem, "pv_attr", r->val[c].pv_attr, 1);
    add_assoc_long (z_elem, "pv_pe_count", r->val[c].pv_pe_count);
    add_assoc_long (z_elem, "pv_pe_alloc_count", r->val[c].pv_pe_alloc_count);
    guestfs_add_assoc_string (z_elem, "pv_tags", r->val[c].pv_tags, 1);
    add_assoc_long (z_elem, "pe_start", r->val[c].pe_start);
    add_assoc_long (z_elem, "pv_mda_count", r->val[c].pv_mda_count);
    add_assoc_long (z_elem, "pv_mda_free", r->val[c].pv_mda_free);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_lvm_pv_list (r);
}

PHP_FUNCTION (guestfs_internal_test_rstructlisterr)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  struct guestfs_lvm_pv_list *r;
  r = guestfs_internal_test_rstructlisterr (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    guestfs_add_assoc_string (z_elem, "pv_name", r->val[c].pv_name, 1);
    guestfs_add_assoc_stringl (z_elem, "pv_uuid", r->val[c].pv_uuid, 32, 1);
    guestfs_add_assoc_string (z_elem, "pv_fmt", r->val[c].pv_fmt, 1);
    add_assoc_long (z_elem, "pv_size", r->val[c].pv_size);
    add_assoc_long (z_elem, "dev_size", r->val[c].dev_size);
    add_assoc_long (z_elem, "pv_free", r->val[c].pv_free);
    add_assoc_long (z_elem, "pv_used", r->val[c].pv_used);
    guestfs_add_assoc_string (z_elem, "pv_attr", r->val[c].pv_attr, 1);
    add_assoc_long (z_elem, "pv_pe_count", r->val[c].pv_pe_count);
    add_assoc_long (z_elem, "pv_pe_alloc_count", r->val[c].pv_pe_alloc_count);
    guestfs_add_assoc_string (z_elem, "pv_tags", r->val[c].pv_tags, 1);
    add_assoc_long (z_elem, "pe_start", r->val[c].pe_start);
    add_assoc_long (z_elem, "pv_mda_count", r->val[c].pv_mda_count);
    add_assoc_long (z_elem, "pv_mda_free", r->val[c].pv_mda_free);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_lvm_pv_list (r);
}

PHP_FUNCTION (guestfs_internal_test_set_output)
{
  zval *z_g;
  guestfs_h *g;
  char *filename;
  guestfs_string_length filename_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &filename, &filename_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: internal_test_set_output: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_internal_test_set_output (g, filename);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_is_blockdev)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  struct guestfs_is_blockdev_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_is_blockdev_opts_argv *optargs = &optargs_s;
  zend_bool optargs_t_followsymlinks = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|b",
        &z_g, &path, &path_size, &optargs_t_followsymlinks) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: is_blockdev: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_followsymlinks != (zend_bool)-1) {
    optargs_s.followsymlinks = optargs_t_followsymlinks;
    optargs_s.bitmask |= GUESTFS_IS_BLOCKDEV_OPTS_FOLLOWSYMLINKS_BITMASK;
  }

  int r;
  r = guestfs_is_blockdev_opts_argv (g, path, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_is_busy)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_is_busy (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_is_chardev)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  struct guestfs_is_chardev_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_is_chardev_opts_argv *optargs = &optargs_s;
  zend_bool optargs_t_followsymlinks = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|b",
        &z_g, &path, &path_size, &optargs_t_followsymlinks) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: is_chardev: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_followsymlinks != (zend_bool)-1) {
    optargs_s.followsymlinks = optargs_t_followsymlinks;
    optargs_s.bitmask |= GUESTFS_IS_CHARDEV_OPTS_FOLLOWSYMLINKS_BITMASK;
  }

  int r;
  r = guestfs_is_chardev_opts_argv (g, path, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_is_config)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_is_config (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_is_dir)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  struct guestfs_is_dir_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_is_dir_opts_argv *optargs = &optargs_s;
  zend_bool optargs_t_followsymlinks = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|b",
        &z_g, &path, &path_size, &optargs_t_followsymlinks) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: is_dir: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_followsymlinks != (zend_bool)-1) {
    optargs_s.followsymlinks = optargs_t_followsymlinks;
    optargs_s.bitmask |= GUESTFS_IS_DIR_OPTS_FOLLOWSYMLINKS_BITMASK;
  }

  int r;
  r = guestfs_is_dir_opts_argv (g, path, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_is_fifo)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  struct guestfs_is_fifo_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_is_fifo_opts_argv *optargs = &optargs_s;
  zend_bool optargs_t_followsymlinks = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|b",
        &z_g, &path, &path_size, &optargs_t_followsymlinks) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: is_fifo: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_followsymlinks != (zend_bool)-1) {
    optargs_s.followsymlinks = optargs_t_followsymlinks;
    optargs_s.bitmask |= GUESTFS_IS_FIFO_OPTS_FOLLOWSYMLINKS_BITMASK;
  }

  int r;
  r = guestfs_is_fifo_opts_argv (g, path, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_is_file)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  struct guestfs_is_file_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_is_file_opts_argv *optargs = &optargs_s;
  zend_bool optargs_t_followsymlinks = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|b",
        &z_g, &path, &path_size, &optargs_t_followsymlinks) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: is_file: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_followsymlinks != (zend_bool)-1) {
    optargs_s.followsymlinks = optargs_t_followsymlinks;
    optargs_s.bitmask |= GUESTFS_IS_FILE_OPTS_FOLLOWSYMLINKS_BITMASK;
  }

  int r;
  r = guestfs_is_file_opts_argv (g, path, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_is_launching)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_is_launching (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_is_lv)
{
  zval *z_g;
  guestfs_h *g;
  char *mountable;
  guestfs_string_length mountable_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &mountable, &mountable_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (mountable) != mountable_size) {
    fprintf (stderr, "libguestfs: is_lv: parameter 'mountable' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_is_lv (g, mountable);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_is_ready)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_is_ready (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_is_socket)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  struct guestfs_is_socket_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_is_socket_opts_argv *optargs = &optargs_s;
  zend_bool optargs_t_followsymlinks = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|b",
        &z_g, &path, &path_size, &optargs_t_followsymlinks) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: is_socket: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_followsymlinks != (zend_bool)-1) {
    optargs_s.followsymlinks = optargs_t_followsymlinks;
    optargs_s.bitmask |= GUESTFS_IS_SOCKET_OPTS_FOLLOWSYMLINKS_BITMASK;
  }

  int r;
  r = guestfs_is_socket_opts_argv (g, path, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_is_symlink)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: is_symlink: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_is_symlink (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_is_whole_device)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: is_whole_device: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_is_whole_device (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_is_zero)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: is_zero: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_is_zero (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_is_zero_device)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: is_zero_device: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_is_zero_device (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_isoinfo)
{
  zval *z_g;
  guestfs_h *g;
  char *isofile;
  guestfs_string_length isofile_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &isofile, &isofile_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (isofile) != isofile_size) {
    fprintf (stderr, "libguestfs: isoinfo: parameter 'isofile' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_isoinfo *r;
  r = guestfs_isoinfo (g, isofile);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  guestfs_add_assoc_string (return_value, "iso_system_id", r->iso_system_id, 1);
  guestfs_add_assoc_string (return_value, "iso_volume_id", r->iso_volume_id, 1);
  add_assoc_long (return_value, "iso_volume_space_size", r->iso_volume_space_size);
  add_assoc_long (return_value, "iso_volume_set_size", r->iso_volume_set_size);
  add_assoc_long (return_value, "iso_volume_sequence_number", r->iso_volume_sequence_number);
  add_assoc_long (return_value, "iso_logical_block_size", r->iso_logical_block_size);
  guestfs_add_assoc_string (return_value, "iso_volume_set_id", r->iso_volume_set_id, 1);
  guestfs_add_assoc_string (return_value, "iso_publisher_id", r->iso_publisher_id, 1);
  guestfs_add_assoc_string (return_value, "iso_data_preparer_id", r->iso_data_preparer_id, 1);
  guestfs_add_assoc_string (return_value, "iso_application_id", r->iso_application_id, 1);
  guestfs_add_assoc_string (return_value, "iso_copyright_file_id", r->iso_copyright_file_id, 1);
  guestfs_add_assoc_string (return_value, "iso_abstract_file_id", r->iso_abstract_file_id, 1);
  guestfs_add_assoc_string (return_value, "iso_bibliographic_file_id", r->iso_bibliographic_file_id, 1);
  add_assoc_long (return_value, "iso_volume_creation_t", r->iso_volume_creation_t);
  add_assoc_long (return_value, "iso_volume_modification_t", r->iso_volume_modification_t);
  add_assoc_long (return_value, "iso_volume_expiration_t", r->iso_volume_expiration_t);
  add_assoc_long (return_value, "iso_volume_effective_t", r->iso_volume_effective_t);
  guestfs_free_isoinfo (r);
}

PHP_FUNCTION (guestfs_isoinfo_device)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: isoinfo_device: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_isoinfo *r;
  r = guestfs_isoinfo_device (g, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  guestfs_add_assoc_string (return_value, "iso_system_id", r->iso_system_id, 1);
  guestfs_add_assoc_string (return_value, "iso_volume_id", r->iso_volume_id, 1);
  add_assoc_long (return_value, "iso_volume_space_size", r->iso_volume_space_size);
  add_assoc_long (return_value, "iso_volume_set_size", r->iso_volume_set_size);
  add_assoc_long (return_value, "iso_volume_sequence_number", r->iso_volume_sequence_number);
  add_assoc_long (return_value, "iso_logical_block_size", r->iso_logical_block_size);
  guestfs_add_assoc_string (return_value, "iso_volume_set_id", r->iso_volume_set_id, 1);
  guestfs_add_assoc_string (return_value, "iso_publisher_id", r->iso_publisher_id, 1);
  guestfs_add_assoc_string (return_value, "iso_data_preparer_id", r->iso_data_preparer_id, 1);
  guestfs_add_assoc_string (return_value, "iso_application_id", r->iso_application_id, 1);
  guestfs_add_assoc_string (return_value, "iso_copyright_file_id", r->iso_copyright_file_id, 1);
  guestfs_add_assoc_string (return_value, "iso_abstract_file_id", r->iso_abstract_file_id, 1);
  guestfs_add_assoc_string (return_value, "iso_bibliographic_file_id", r->iso_bibliographic_file_id, 1);
  add_assoc_long (return_value, "iso_volume_creation_t", r->iso_volume_creation_t);
  add_assoc_long (return_value, "iso_volume_modification_t", r->iso_volume_modification_t);
  add_assoc_long (return_value, "iso_volume_expiration_t", r->iso_volume_expiration_t);
  add_assoc_long (return_value, "iso_volume_effective_t", r->iso_volume_effective_t);
  guestfs_free_isoinfo (r);
}

PHP_FUNCTION (guestfs_journal_close)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_journal_close (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_journal_get)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  struct guestfs_xattr_list *r;
  r = guestfs_journal_get (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    guestfs_add_assoc_string (z_elem, "attrname", r->val[c].attrname, 1);
    guestfs_add_assoc_stringl (z_elem, "attrval", r->val[c].attrval, r->val[c].attrval_len, 1);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_xattr_list (r);
}

PHP_FUNCTION (guestfs_journal_get_data_threshold)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_journal_get_data_threshold (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_journal_get_realtime_usec)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_journal_get_realtime_usec (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_journal_next)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_journal_next (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_journal_open)
{
  zval *z_g;
  guestfs_h *g;
  char *directory;
  guestfs_string_length directory_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &directory, &directory_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (directory) != directory_size) {
    fprintf (stderr, "libguestfs: journal_open: parameter 'directory' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_journal_open (g, directory);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_journal_set_data_threshold)
{
  zval *z_g;
  guestfs_h *g;
  long threshold;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &threshold) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_journal_set_data_threshold (g, threshold);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_journal_skip)
{
  zval *z_g;
  guestfs_h *g;
  long skip;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &skip) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_journal_skip (g, skip);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_kill_subprocess)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_kill_subprocess (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_launch)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_launch (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_lchown)
{
  zval *z_g;
  guestfs_h *g;
  long owner;
  long group;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rlls",
        &z_g, &owner, &group, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: lchown: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_lchown (g, owner, group, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_ldmtool_create_all)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_ldmtool_create_all (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_ldmtool_diskgroup_disks)
{
  zval *z_g;
  guestfs_h *g;
  char *diskgroup;
  guestfs_string_length diskgroup_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &diskgroup, &diskgroup_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (diskgroup) != diskgroup_size) {
    fprintf (stderr, "libguestfs: ldmtool_diskgroup_disks: parameter 'diskgroup' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_ldmtool_diskgroup_disks (g, diskgroup);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_ldmtool_diskgroup_name)
{
  zval *z_g;
  guestfs_h *g;
  char *diskgroup;
  guestfs_string_length diskgroup_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &diskgroup, &diskgroup_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (diskgroup) != diskgroup_size) {
    fprintf (stderr, "libguestfs: ldmtool_diskgroup_name: parameter 'diskgroup' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_ldmtool_diskgroup_name (g, diskgroup);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_ldmtool_diskgroup_volumes)
{
  zval *z_g;
  guestfs_h *g;
  char *diskgroup;
  guestfs_string_length diskgroup_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &diskgroup, &diskgroup_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (diskgroup) != diskgroup_size) {
    fprintf (stderr, "libguestfs: ldmtool_diskgroup_volumes: parameter 'diskgroup' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_ldmtool_diskgroup_volumes (g, diskgroup);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_ldmtool_remove_all)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_ldmtool_remove_all (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_ldmtool_scan)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_ldmtool_scan (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_ldmtool_scan_devices)
{
  zval *z_g;
  guestfs_h *g;
  zval *z_devices;
  char **devices;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "ra",
        &z_g, &z_devices) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  devices = get_stringlist (z_devices);

  char **r;
  r = guestfs_ldmtool_scan_devices (g, devices);

  guestfs_efree_stringlist (devices);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_ldmtool_volume_hint)
{
  zval *z_g;
  guestfs_h *g;
  char *diskgroup;
  guestfs_string_length diskgroup_size;
  char *volume;
  guestfs_string_length volume_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &diskgroup, &diskgroup_size, &volume, &volume_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (diskgroup) != diskgroup_size) {
    fprintf (stderr, "libguestfs: ldmtool_volume_hint: parameter 'diskgroup' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (volume) != volume_size) {
    fprintf (stderr, "libguestfs: ldmtool_volume_hint: parameter 'volume' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_ldmtool_volume_hint (g, diskgroup, volume);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_ldmtool_volume_partitions)
{
  zval *z_g;
  guestfs_h *g;
  char *diskgroup;
  guestfs_string_length diskgroup_size;
  char *volume;
  guestfs_string_length volume_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &diskgroup, &diskgroup_size, &volume, &volume_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (diskgroup) != diskgroup_size) {
    fprintf (stderr, "libguestfs: ldmtool_volume_partitions: parameter 'diskgroup' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (volume) != volume_size) {
    fprintf (stderr, "libguestfs: ldmtool_volume_partitions: parameter 'volume' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_ldmtool_volume_partitions (g, diskgroup, volume);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_ldmtool_volume_type)
{
  zval *z_g;
  guestfs_h *g;
  char *diskgroup;
  guestfs_string_length diskgroup_size;
  char *volume;
  guestfs_string_length volume_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &diskgroup, &diskgroup_size, &volume, &volume_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (diskgroup) != diskgroup_size) {
    fprintf (stderr, "libguestfs: ldmtool_volume_type: parameter 'diskgroup' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (volume) != volume_size) {
    fprintf (stderr, "libguestfs: ldmtool_volume_type: parameter 'volume' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_ldmtool_volume_type (g, diskgroup, volume);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_lgetxattr)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  char *name;
  guestfs_string_length name_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &path, &path_size, &name, &name_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: lgetxattr: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (name) != name_size) {
    fprintf (stderr, "libguestfs: lgetxattr: parameter 'name' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  size_t size;
  r = guestfs_lgetxattr (g, path, name, &size);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrndup (r, size);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_lgetxattrs)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: lgetxattrs: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_xattr_list *r;
  r = guestfs_lgetxattrs (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    guestfs_add_assoc_string (z_elem, "attrname", r->val[c].attrname, 1);
    guestfs_add_assoc_stringl (z_elem, "attrval", r->val[c].attrval, r->val[c].attrval_len, 1);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_xattr_list (r);
}

PHP_FUNCTION (guestfs_list_9p)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_list_9p (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_list_devices)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_list_devices (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_list_disk_labels)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_list_disk_labels (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; c += 2) {
    guestfs_add_assoc_string (return_value, r[c], r[c+1], 1);
    free (r[c]);
    free (r[c+1]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_list_dm_devices)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_list_dm_devices (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_list_filesystems)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_list_filesystems (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; c += 2) {
    guestfs_add_assoc_string (return_value, r[c], r[c+1], 1);
    free (r[c]);
    free (r[c+1]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_list_ldm_partitions)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_list_ldm_partitions (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_list_ldm_volumes)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_list_ldm_volumes (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_list_md_devices)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_list_md_devices (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_list_partitions)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_list_partitions (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_ll)
{
  zval *z_g;
  guestfs_h *g;
  char *directory;
  guestfs_string_length directory_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &directory, &directory_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (directory) != directory_size) {
    fprintf (stderr, "libguestfs: ll: parameter 'directory' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_ll (g, directory);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_llz)
{
  zval *z_g;
  guestfs_h *g;
  char *directory;
  guestfs_string_length directory_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &directory, &directory_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (directory) != directory_size) {
    fprintf (stderr, "libguestfs: llz: parameter 'directory' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_llz (g, directory);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_ln)
{
  zval *z_g;
  guestfs_h *g;
  char *target;
  guestfs_string_length target_size;
  char *linkname;
  guestfs_string_length linkname_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &target, &target_size, &linkname, &linkname_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (target) != target_size) {
    fprintf (stderr, "libguestfs: ln: parameter 'target' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (linkname) != linkname_size) {
    fprintf (stderr, "libguestfs: ln: parameter 'linkname' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_ln (g, target, linkname);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_ln_f)
{
  zval *z_g;
  guestfs_h *g;
  char *target;
  guestfs_string_length target_size;
  char *linkname;
  guestfs_string_length linkname_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &target, &target_size, &linkname, &linkname_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (target) != target_size) {
    fprintf (stderr, "libguestfs: ln_f: parameter 'target' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (linkname) != linkname_size) {
    fprintf (stderr, "libguestfs: ln_f: parameter 'linkname' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_ln_f (g, target, linkname);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_ln_s)
{
  zval *z_g;
  guestfs_h *g;
  char *target;
  guestfs_string_length target_size;
  char *linkname;
  guestfs_string_length linkname_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &target, &target_size, &linkname, &linkname_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (target) != target_size) {
    fprintf (stderr, "libguestfs: ln_s: parameter 'target' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (linkname) != linkname_size) {
    fprintf (stderr, "libguestfs: ln_s: parameter 'linkname' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_ln_s (g, target, linkname);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_ln_sf)
{
  zval *z_g;
  guestfs_h *g;
  char *target;
  guestfs_string_length target_size;
  char *linkname;
  guestfs_string_length linkname_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &target, &target_size, &linkname, &linkname_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (target) != target_size) {
    fprintf (stderr, "libguestfs: ln_sf: parameter 'target' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (linkname) != linkname_size) {
    fprintf (stderr, "libguestfs: ln_sf: parameter 'linkname' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_ln_sf (g, target, linkname);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_lremovexattr)
{
  zval *z_g;
  guestfs_h *g;
  char *xattr;
  guestfs_string_length xattr_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &xattr, &xattr_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (xattr) != xattr_size) {
    fprintf (stderr, "libguestfs: lremovexattr: parameter 'xattr' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: lremovexattr: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_lremovexattr (g, xattr, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_ls)
{
  zval *z_g;
  guestfs_h *g;
  char *directory;
  guestfs_string_length directory_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &directory, &directory_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (directory) != directory_size) {
    fprintf (stderr, "libguestfs: ls: parameter 'directory' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_ls (g, directory);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_ls0)
{
  zval *z_g;
  guestfs_h *g;
  char *dir;
  guestfs_string_length dir_size;
  char *filenames;
  guestfs_string_length filenames_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &dir, &dir_size, &filenames, &filenames_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (dir) != dir_size) {
    fprintf (stderr, "libguestfs: ls0: parameter 'dir' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (filenames) != filenames_size) {
    fprintf (stderr, "libguestfs: ls0: parameter 'filenames' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_ls0 (g, dir, filenames);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_lsetxattr)
{
  zval *z_g;
  guestfs_h *g;
  char *xattr;
  guestfs_string_length xattr_size;
  char *val;
  guestfs_string_length val_size;
  long vallen;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssls",
        &z_g, &xattr, &xattr_size, &val, &val_size, &vallen, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (xattr) != xattr_size) {
    fprintf (stderr, "libguestfs: lsetxattr: parameter 'xattr' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (val) != val_size) {
    fprintf (stderr, "libguestfs: lsetxattr: parameter 'val' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: lsetxattr: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_lsetxattr (g, xattr, val, vallen, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_lstat)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: lstat: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_stat *r;
  r = guestfs_lstat (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  add_assoc_long (return_value, "dev", r->dev);
  add_assoc_long (return_value, "ino", r->ino);
  add_assoc_long (return_value, "mode", r->mode);
  add_assoc_long (return_value, "nlink", r->nlink);
  add_assoc_long (return_value, "uid", r->uid);
  add_assoc_long (return_value, "gid", r->gid);
  add_assoc_long (return_value, "rdev", r->rdev);
  add_assoc_long (return_value, "size", r->size);
  add_assoc_long (return_value, "blksize", r->blksize);
  add_assoc_long (return_value, "blocks", r->blocks);
  add_assoc_long (return_value, "atime", r->atime);
  add_assoc_long (return_value, "mtime", r->mtime);
  add_assoc_long (return_value, "ctime", r->ctime);
  guestfs_free_stat (r);
}

PHP_FUNCTION (guestfs_lstatlist)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  zval *z_names;
  char **names;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsa",
        &z_g, &path, &path_size, &z_names) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: lstatlist: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  names = get_stringlist (z_names);

  struct guestfs_stat_list *r;
  r = guestfs_lstatlist (g, path, names);

  guestfs_efree_stringlist (names);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    add_assoc_long (z_elem, "dev", r->val[c].dev);
    add_assoc_long (z_elem, "ino", r->val[c].ino);
    add_assoc_long (z_elem, "mode", r->val[c].mode);
    add_assoc_long (z_elem, "nlink", r->val[c].nlink);
    add_assoc_long (z_elem, "uid", r->val[c].uid);
    add_assoc_long (z_elem, "gid", r->val[c].gid);
    add_assoc_long (z_elem, "rdev", r->val[c].rdev);
    add_assoc_long (z_elem, "size", r->val[c].size);
    add_assoc_long (z_elem, "blksize", r->val[c].blksize);
    add_assoc_long (z_elem, "blocks", r->val[c].blocks);
    add_assoc_long (z_elem, "atime", r->val[c].atime);
    add_assoc_long (z_elem, "mtime", r->val[c].mtime);
    add_assoc_long (z_elem, "ctime", r->val[c].ctime);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_stat_list (r);
}

PHP_FUNCTION (guestfs_lstatns)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: lstatns: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_statns *r;
  r = guestfs_lstatns (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  add_assoc_long (return_value, "st_dev", r->st_dev);
  add_assoc_long (return_value, "st_ino", r->st_ino);
  add_assoc_long (return_value, "st_mode", r->st_mode);
  add_assoc_long (return_value, "st_nlink", r->st_nlink);
  add_assoc_long (return_value, "st_uid", r->st_uid);
  add_assoc_long (return_value, "st_gid", r->st_gid);
  add_assoc_long (return_value, "st_rdev", r->st_rdev);
  add_assoc_long (return_value, "st_size", r->st_size);
  add_assoc_long (return_value, "st_blksize", r->st_blksize);
  add_assoc_long (return_value, "st_blocks", r->st_blocks);
  add_assoc_long (return_value, "st_atime_sec", r->st_atime_sec);
  add_assoc_long (return_value, "st_atime_nsec", r->st_atime_nsec);
  add_assoc_long (return_value, "st_mtime_sec", r->st_mtime_sec);
  add_assoc_long (return_value, "st_mtime_nsec", r->st_mtime_nsec);
  add_assoc_long (return_value, "st_ctime_sec", r->st_ctime_sec);
  add_assoc_long (return_value, "st_ctime_nsec", r->st_ctime_nsec);
  add_assoc_long (return_value, "st_spare1", r->st_spare1);
  add_assoc_long (return_value, "st_spare2", r->st_spare2);
  add_assoc_long (return_value, "st_spare3", r->st_spare3);
  add_assoc_long (return_value, "st_spare4", r->st_spare4);
  add_assoc_long (return_value, "st_spare5", r->st_spare5);
  add_assoc_long (return_value, "st_spare6", r->st_spare6);
  guestfs_free_statns (r);
}

PHP_FUNCTION (guestfs_lstatnslist)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  zval *z_names;
  char **names;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsa",
        &z_g, &path, &path_size, &z_names) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: lstatnslist: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  names = get_stringlist (z_names);

  struct guestfs_statns_list *r;
  r = guestfs_lstatnslist (g, path, names);

  guestfs_efree_stringlist (names);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    add_assoc_long (z_elem, "st_dev", r->val[c].st_dev);
    add_assoc_long (z_elem, "st_ino", r->val[c].st_ino);
    add_assoc_long (z_elem, "st_mode", r->val[c].st_mode);
    add_assoc_long (z_elem, "st_nlink", r->val[c].st_nlink);
    add_assoc_long (z_elem, "st_uid", r->val[c].st_uid);
    add_assoc_long (z_elem, "st_gid", r->val[c].st_gid);
    add_assoc_long (z_elem, "st_rdev", r->val[c].st_rdev);
    add_assoc_long (z_elem, "st_size", r->val[c].st_size);
    add_assoc_long (z_elem, "st_blksize", r->val[c].st_blksize);
    add_assoc_long (z_elem, "st_blocks", r->val[c].st_blocks);
    add_assoc_long (z_elem, "st_atime_sec", r->val[c].st_atime_sec);
    add_assoc_long (z_elem, "st_atime_nsec", r->val[c].st_atime_nsec);
    add_assoc_long (z_elem, "st_mtime_sec", r->val[c].st_mtime_sec);
    add_assoc_long (z_elem, "st_mtime_nsec", r->val[c].st_mtime_nsec);
    add_assoc_long (z_elem, "st_ctime_sec", r->val[c].st_ctime_sec);
    add_assoc_long (z_elem, "st_ctime_nsec", r->val[c].st_ctime_nsec);
    add_assoc_long (z_elem, "st_spare1", r->val[c].st_spare1);
    add_assoc_long (z_elem, "st_spare2", r->val[c].st_spare2);
    add_assoc_long (z_elem, "st_spare3", r->val[c].st_spare3);
    add_assoc_long (z_elem, "st_spare4", r->val[c].st_spare4);
    add_assoc_long (z_elem, "st_spare5", r->val[c].st_spare5);
    add_assoc_long (z_elem, "st_spare6", r->val[c].st_spare6);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_statns_list (r);
}

PHP_FUNCTION (guestfs_luks_add_key)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  char *key;
  guestfs_string_length key_size;
  char *newkey;
  guestfs_string_length newkey_size;
  long keyslot;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsssl",
        &z_g, &device, &device_size, &key, &key_size, &newkey, &newkey_size, &keyslot) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: luks_add_key: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (key) != key_size) {
    fprintf (stderr, "libguestfs: luks_add_key: parameter 'key' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (newkey) != newkey_size) {
    fprintf (stderr, "libguestfs: luks_add_key: parameter 'newkey' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_luks_add_key (g, device, key, newkey, keyslot);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_luks_close)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: luks_close: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_luks_close (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_luks_format)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  char *key;
  guestfs_string_length key_size;
  long keyslot;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssl",
        &z_g, &device, &device_size, &key, &key_size, &keyslot) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: luks_format: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (key) != key_size) {
    fprintf (stderr, "libguestfs: luks_format: parameter 'key' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_luks_format (g, device, key, keyslot);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_luks_format_cipher)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  char *key;
  guestfs_string_length key_size;
  long keyslot;
  char *cipher;
  guestfs_string_length cipher_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssls",
        &z_g, &device, &device_size, &key, &key_size, &keyslot, &cipher, &cipher_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: luks_format_cipher: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (key) != key_size) {
    fprintf (stderr, "libguestfs: luks_format_cipher: parameter 'key' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (cipher) != cipher_size) {
    fprintf (stderr, "libguestfs: luks_format_cipher: parameter 'cipher' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_luks_format_cipher (g, device, key, keyslot, cipher);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_luks_kill_slot)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  char *key;
  guestfs_string_length key_size;
  long keyslot;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssl",
        &z_g, &device, &device_size, &key, &key_size, &keyslot) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: luks_kill_slot: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (key) != key_size) {
    fprintf (stderr, "libguestfs: luks_kill_slot: parameter 'key' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_luks_kill_slot (g, device, key, keyslot);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_luks_open)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  char *key;
  guestfs_string_length key_size;
  char *mapname;
  guestfs_string_length mapname_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsss",
        &z_g, &device, &device_size, &key, &key_size, &mapname, &mapname_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: luks_open: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (key) != key_size) {
    fprintf (stderr, "libguestfs: luks_open: parameter 'key' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (mapname) != mapname_size) {
    fprintf (stderr, "libguestfs: luks_open: parameter 'mapname' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_luks_open (g, device, key, mapname);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_luks_open_ro)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  char *key;
  guestfs_string_length key_size;
  char *mapname;
  guestfs_string_length mapname_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsss",
        &z_g, &device, &device_size, &key, &key_size, &mapname, &mapname_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: luks_open_ro: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (key) != key_size) {
    fprintf (stderr, "libguestfs: luks_open_ro: parameter 'key' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (mapname) != mapname_size) {
    fprintf (stderr, "libguestfs: luks_open_ro: parameter 'mapname' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_luks_open_ro (g, device, key, mapname);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_luks_uuid)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: luks_uuid: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_luks_uuid (g, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_lvcreate)
{
  zval *z_g;
  guestfs_h *g;
  char *logvol;
  guestfs_string_length logvol_size;
  char *volgroup;
  guestfs_string_length volgroup_size;
  long mbytes;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssl",
        &z_g, &logvol, &logvol_size, &volgroup, &volgroup_size, &mbytes) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (logvol) != logvol_size) {
    fprintf (stderr, "libguestfs: lvcreate: parameter 'logvol' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (volgroup) != volgroup_size) {
    fprintf (stderr, "libguestfs: lvcreate: parameter 'volgroup' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_lvcreate (g, logvol, volgroup, mbytes);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_lvcreate_free)
{
  zval *z_g;
  guestfs_h *g;
  char *logvol;
  guestfs_string_length logvol_size;
  char *volgroup;
  guestfs_string_length volgroup_size;
  long percent;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssl",
        &z_g, &logvol, &logvol_size, &volgroup, &volgroup_size, &percent) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (logvol) != logvol_size) {
    fprintf (stderr, "libguestfs: lvcreate_free: parameter 'logvol' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (volgroup) != volgroup_size) {
    fprintf (stderr, "libguestfs: lvcreate_free: parameter 'volgroup' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_lvcreate_free (g, logvol, volgroup, percent);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_lvm_canonical_lv_name)
{
  zval *z_g;
  guestfs_h *g;
  char *lvname;
  guestfs_string_length lvname_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &lvname, &lvname_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (lvname) != lvname_size) {
    fprintf (stderr, "libguestfs: lvm_canonical_lv_name: parameter 'lvname' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_lvm_canonical_lv_name (g, lvname);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_lvm_clear_filter)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_lvm_clear_filter (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_lvm_remove_all)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_lvm_remove_all (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_lvm_scan)
{
  zval *z_g;
  guestfs_h *g;
  zend_bool activate;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rb",
        &z_g, &activate) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_lvm_scan (g, activate);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_lvm_set_filter)
{
  zval *z_g;
  guestfs_h *g;
  zval *z_devices;
  char **devices;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "ra",
        &z_g, &z_devices) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  devices = get_stringlist (z_devices);

  int r;
  r = guestfs_lvm_set_filter (g, devices);

  guestfs_efree_stringlist (devices);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_lvremove)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: lvremove: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_lvremove (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_lvrename)
{
  zval *z_g;
  guestfs_h *g;
  char *logvol;
  guestfs_string_length logvol_size;
  char *newlogvol;
  guestfs_string_length newlogvol_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &logvol, &logvol_size, &newlogvol, &newlogvol_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (logvol) != logvol_size) {
    fprintf (stderr, "libguestfs: lvrename: parameter 'logvol' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (newlogvol) != newlogvol_size) {
    fprintf (stderr, "libguestfs: lvrename: parameter 'newlogvol' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_lvrename (g, logvol, newlogvol);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_lvresize)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long mbytes;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &device, &device_size, &mbytes) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: lvresize: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_lvresize (g, device, mbytes);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_lvresize_free)
{
  zval *z_g;
  guestfs_h *g;
  char *lv;
  guestfs_string_length lv_size;
  long percent;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &lv, &lv_size, &percent) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (lv) != lv_size) {
    fprintf (stderr, "libguestfs: lvresize_free: parameter 'lv' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_lvresize_free (g, lv, percent);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_lvs)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_lvs (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_lvs_full)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  struct guestfs_lvm_lv_list *r;
  r = guestfs_lvs_full (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    guestfs_add_assoc_string (z_elem, "lv_name", r->val[c].lv_name, 1);
    guestfs_add_assoc_stringl (z_elem, "lv_uuid", r->val[c].lv_uuid, 32, 1);
    guestfs_add_assoc_string (z_elem, "lv_attr", r->val[c].lv_attr, 1);
    add_assoc_long (z_elem, "lv_major", r->val[c].lv_major);
    add_assoc_long (z_elem, "lv_minor", r->val[c].lv_minor);
    add_assoc_long (z_elem, "lv_kernel_major", r->val[c].lv_kernel_major);
    add_assoc_long (z_elem, "lv_kernel_minor", r->val[c].lv_kernel_minor);
    add_assoc_long (z_elem, "lv_size", r->val[c].lv_size);
    add_assoc_long (z_elem, "seg_count", r->val[c].seg_count);
    guestfs_add_assoc_string (z_elem, "origin", r->val[c].origin, 1);
    add_assoc_double (z_elem, "snap_percent", r->val[c].snap_percent);
    add_assoc_double (z_elem, "copy_percent", r->val[c].copy_percent);
    guestfs_add_assoc_string (z_elem, "move_pv", r->val[c].move_pv, 1);
    guestfs_add_assoc_string (z_elem, "lv_tags", r->val[c].lv_tags, 1);
    guestfs_add_assoc_string (z_elem, "mirror_log", r->val[c].mirror_log, 1);
    guestfs_add_assoc_string (z_elem, "modules", r->val[c].modules, 1);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_lvm_lv_list (r);
}

PHP_FUNCTION (guestfs_lvuuid)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: lvuuid: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_lvuuid (g, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_lxattrlist)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  zval *z_names;
  char **names;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsa",
        &z_g, &path, &path_size, &z_names) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: lxattrlist: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  names = get_stringlist (z_names);

  struct guestfs_xattr_list *r;
  r = guestfs_lxattrlist (g, path, names);

  guestfs_efree_stringlist (names);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    guestfs_add_assoc_string (z_elem, "attrname", r->val[c].attrname, 1);
    guestfs_add_assoc_stringl (z_elem, "attrval", r->val[c].attrval, r->val[c].attrval_len, 1);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_xattr_list (r);
}

PHP_FUNCTION (guestfs_max_disks)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_max_disks (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_md_create)
{
  zval *z_g;
  guestfs_h *g;
  char *name;
  guestfs_string_length name_size;
  zval *z_devices;
  char **devices;
  struct guestfs_md_create_argv optargs_s = { .bitmask = 0 };
  struct guestfs_md_create_argv *optargs = &optargs_s;
  long optargs_t_missingbitmap = -1;
  long optargs_t_nrdevices = -1;
  long optargs_t_spare = -1;
  long optargs_t_chunk = -1;
  char *optargs_t_level = NULL;
  guestfs_string_length optargs_t_level_size = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsa|lllls",
        &z_g, &name, &name_size, &z_devices, &optargs_t_missingbitmap, &optargs_t_nrdevices, &optargs_t_spare, &optargs_t_chunk, &optargs_t_level, &optargs_t_level_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (name) != name_size) {
    fprintf (stderr, "libguestfs: md_create: parameter 'name' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  devices = get_stringlist (z_devices);

  if (optargs_t_missingbitmap != -1) {
    optargs_s.missingbitmap = optargs_t_missingbitmap;
    optargs_s.bitmask |= GUESTFS_MD_CREATE_MISSINGBITMAP_BITMASK;
  }
  if (optargs_t_nrdevices != -1) {
    optargs_s.nrdevices = optargs_t_nrdevices;
    optargs_s.bitmask |= GUESTFS_MD_CREATE_NRDEVICES_BITMASK;
  }
  if (optargs_t_spare != -1) {
    optargs_s.spare = optargs_t_spare;
    optargs_s.bitmask |= GUESTFS_MD_CREATE_SPARE_BITMASK;
  }
  if (optargs_t_chunk != -1) {
    optargs_s.chunk = optargs_t_chunk;
    optargs_s.bitmask |= GUESTFS_MD_CREATE_CHUNK_BITMASK;
  }
  if (optargs_t_level != NULL) {
    optargs_s.level = optargs_t_level;
    optargs_s.bitmask |= GUESTFS_MD_CREATE_LEVEL_BITMASK;
  }

  int r;
  r = guestfs_md_create_argv (g, name, devices, optargs);

  guestfs_efree_stringlist (devices);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_md_detail)
{
  zval *z_g;
  guestfs_h *g;
  char *md;
  guestfs_string_length md_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &md, &md_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (md) != md_size) {
    fprintf (stderr, "libguestfs: md_detail: parameter 'md' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_md_detail (g, md);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; c += 2) {
    guestfs_add_assoc_string (return_value, r[c], r[c+1], 1);
    free (r[c]);
    free (r[c+1]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_md_stat)
{
  zval *z_g;
  guestfs_h *g;
  char *md;
  guestfs_string_length md_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &md, &md_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (md) != md_size) {
    fprintf (stderr, "libguestfs: md_stat: parameter 'md' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_mdstat_list *r;
  r = guestfs_md_stat (g, md);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    guestfs_add_assoc_string (z_elem, "mdstat_device", r->val[c].mdstat_device, 1);
    add_assoc_long (z_elem, "mdstat_index", r->val[c].mdstat_index);
    guestfs_add_assoc_string (z_elem, "mdstat_flags", r->val[c].mdstat_flags, 1);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_mdstat_list (r);
}

PHP_FUNCTION (guestfs_md_stop)
{
  zval *z_g;
  guestfs_h *g;
  char *md;
  guestfs_string_length md_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &md, &md_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (md) != md_size) {
    fprintf (stderr, "libguestfs: md_stop: parameter 'md' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_md_stop (g, md);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mkdir)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: mkdir: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mkdir (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mkdir_mode)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  long mode;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &path, &path_size, &mode) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: mkdir_mode: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mkdir_mode (g, path, mode);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mkdir_p)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: mkdir_p: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mkdir_p (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mkdtemp)
{
  zval *z_g;
  guestfs_h *g;
  char *tmpl;
  guestfs_string_length tmpl_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &tmpl, &tmpl_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (tmpl) != tmpl_size) {
    fprintf (stderr, "libguestfs: mkdtemp: parameter 'tmpl' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_mkdtemp (g, tmpl);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_mke2fs)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  struct guestfs_mke2fs_argv optargs_s = { .bitmask = 0 };
  struct guestfs_mke2fs_argv *optargs = &optargs_s;
  long optargs_t_blockscount = -1;
  long optargs_t_blocksize = -1;
  long optargs_t_fragsize = -1;
  long optargs_t_blockspergroup = -1;
  long optargs_t_numberofgroups = -1;
  long optargs_t_bytesperinode = -1;
  long optargs_t_inodesize = -1;
  long optargs_t_journalsize = -1;
  long optargs_t_numberofinodes = -1;
  long optargs_t_stridesize = -1;
  long optargs_t_stripewidth = -1;
  long optargs_t_maxonlineresize = -1;
  long optargs_t_reservedblockspercentage = -1;
  long optargs_t_mmpupdateinterval = -1;
  char *optargs_t_journaldevice = NULL;
  guestfs_string_length optargs_t_journaldevice_size = -1;
  char *optargs_t_label = NULL;
  guestfs_string_length optargs_t_label_size = -1;
  char *optargs_t_lastmounteddir = NULL;
  guestfs_string_length optargs_t_lastmounteddir_size = -1;
  char *optargs_t_creatoros = NULL;
  guestfs_string_length optargs_t_creatoros_size = -1;
  char *optargs_t_fstype = NULL;
  guestfs_string_length optargs_t_fstype_size = -1;
  char *optargs_t_usagetype = NULL;
  guestfs_string_length optargs_t_usagetype_size = -1;
  char *optargs_t_uuid = NULL;
  guestfs_string_length optargs_t_uuid_size = -1;
  zend_bool optargs_t_forcecreate = -1;
  zend_bool optargs_t_writesbandgrouponly = -1;
  zend_bool optargs_t_lazyitableinit = -1;
  zend_bool optargs_t_lazyjournalinit = -1;
  zend_bool optargs_t_testfs = -1;
  zend_bool optargs_t_discard = -1;
  zend_bool optargs_t_quotatype = -1;
  zend_bool optargs_t_extent = -1;
  zend_bool optargs_t_filetype = -1;
  zend_bool optargs_t_flexbg = -1;
  zend_bool optargs_t_hasjournal = -1;
  zend_bool optargs_t_journaldev = -1;
  zend_bool optargs_t_largefile = -1;
  zend_bool optargs_t_quota = -1;
  zend_bool optargs_t_resizeinode = -1;
  zend_bool optargs_t_sparsesuper = -1;
  zend_bool optargs_t_uninitbg = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|llllllllllllllsssssssbbbbbbbbbbbbbbbbb",
        &z_g, &device, &device_size, &optargs_t_blockscount, &optargs_t_blocksize, &optargs_t_fragsize, &optargs_t_blockspergroup, &optargs_t_numberofgroups, &optargs_t_bytesperinode, &optargs_t_inodesize, &optargs_t_journalsize, &optargs_t_numberofinodes, &optargs_t_stridesize, &optargs_t_stripewidth, &optargs_t_maxonlineresize, &optargs_t_reservedblockspercentage, &optargs_t_mmpupdateinterval, &optargs_t_journaldevice, &optargs_t_journaldevice_size, &optargs_t_label, &optargs_t_label_size, &optargs_t_lastmounteddir, &optargs_t_lastmounteddir_size, &optargs_t_creatoros, &optargs_t_creatoros_size, &optargs_t_fstype, &optargs_t_fstype_size, &optargs_t_usagetype, &optargs_t_usagetype_size, &optargs_t_uuid, &optargs_t_uuid_size, &optargs_t_forcecreate, &optargs_t_writesbandgrouponly, &optargs_t_lazyitableinit, &optargs_t_lazyjournalinit, &optargs_t_testfs, &optargs_t_discard, &optargs_t_quotatype, &optargs_t_extent, &optargs_t_filetype, &optargs_t_flexbg, &optargs_t_hasjournal, &optargs_t_journaldev, &optargs_t_largefile, &optargs_t_quota, &optargs_t_resizeinode, &optargs_t_sparsesuper, &optargs_t_uninitbg) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: mke2fs: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_blockscount != -1) {
    optargs_s.blockscount = optargs_t_blockscount;
    optargs_s.bitmask |= GUESTFS_MKE2FS_BLOCKSCOUNT_BITMASK;
  }
  if (optargs_t_blocksize != -1) {
    optargs_s.blocksize = optargs_t_blocksize;
    optargs_s.bitmask |= GUESTFS_MKE2FS_BLOCKSIZE_BITMASK;
  }
  if (optargs_t_fragsize != -1) {
    optargs_s.fragsize = optargs_t_fragsize;
    optargs_s.bitmask |= GUESTFS_MKE2FS_FRAGSIZE_BITMASK;
  }
  if (optargs_t_blockspergroup != -1) {
    optargs_s.blockspergroup = optargs_t_blockspergroup;
    optargs_s.bitmask |= GUESTFS_MKE2FS_BLOCKSPERGROUP_BITMASK;
  }
  if (optargs_t_numberofgroups != -1) {
    optargs_s.numberofgroups = optargs_t_numberofgroups;
    optargs_s.bitmask |= GUESTFS_MKE2FS_NUMBEROFGROUPS_BITMASK;
  }
  if (optargs_t_bytesperinode != -1) {
    optargs_s.bytesperinode = optargs_t_bytesperinode;
    optargs_s.bitmask |= GUESTFS_MKE2FS_BYTESPERINODE_BITMASK;
  }
  if (optargs_t_inodesize != -1) {
    optargs_s.inodesize = optargs_t_inodesize;
    optargs_s.bitmask |= GUESTFS_MKE2FS_INODESIZE_BITMASK;
  }
  if (optargs_t_journalsize != -1) {
    optargs_s.journalsize = optargs_t_journalsize;
    optargs_s.bitmask |= GUESTFS_MKE2FS_JOURNALSIZE_BITMASK;
  }
  if (optargs_t_numberofinodes != -1) {
    optargs_s.numberofinodes = optargs_t_numberofinodes;
    optargs_s.bitmask |= GUESTFS_MKE2FS_NUMBEROFINODES_BITMASK;
  }
  if (optargs_t_stridesize != -1) {
    optargs_s.stridesize = optargs_t_stridesize;
    optargs_s.bitmask |= GUESTFS_MKE2FS_STRIDESIZE_BITMASK;
  }
  if (optargs_t_stripewidth != -1) {
    optargs_s.stripewidth = optargs_t_stripewidth;
    optargs_s.bitmask |= GUESTFS_MKE2FS_STRIPEWIDTH_BITMASK;
  }
  if (optargs_t_maxonlineresize != -1) {
    optargs_s.maxonlineresize = optargs_t_maxonlineresize;
    optargs_s.bitmask |= GUESTFS_MKE2FS_MAXONLINERESIZE_BITMASK;
  }
  if (optargs_t_reservedblockspercentage != -1) {
    optargs_s.reservedblockspercentage = optargs_t_reservedblockspercentage;
    optargs_s.bitmask |= GUESTFS_MKE2FS_RESERVEDBLOCKSPERCENTAGE_BITMASK;
  }
  if (optargs_t_mmpupdateinterval != -1) {
    optargs_s.mmpupdateinterval = optargs_t_mmpupdateinterval;
    optargs_s.bitmask |= GUESTFS_MKE2FS_MMPUPDATEINTERVAL_BITMASK;
  }
  if (optargs_t_journaldevice != NULL) {
    optargs_s.journaldevice = optargs_t_journaldevice;
    optargs_s.bitmask |= GUESTFS_MKE2FS_JOURNALDEVICE_BITMASK;
  }
  if (optargs_t_label != NULL) {
    optargs_s.label = optargs_t_label;
    optargs_s.bitmask |= GUESTFS_MKE2FS_LABEL_BITMASK;
  }
  if (optargs_t_lastmounteddir != NULL) {
    optargs_s.lastmounteddir = optargs_t_lastmounteddir;
    optargs_s.bitmask |= GUESTFS_MKE2FS_LASTMOUNTEDDIR_BITMASK;
  }
  if (optargs_t_creatoros != NULL) {
    optargs_s.creatoros = optargs_t_creatoros;
    optargs_s.bitmask |= GUESTFS_MKE2FS_CREATOROS_BITMASK;
  }
  if (optargs_t_fstype != NULL) {
    optargs_s.fstype = optargs_t_fstype;
    optargs_s.bitmask |= GUESTFS_MKE2FS_FSTYPE_BITMASK;
  }
  if (optargs_t_usagetype != NULL) {
    optargs_s.usagetype = optargs_t_usagetype;
    optargs_s.bitmask |= GUESTFS_MKE2FS_USAGETYPE_BITMASK;
  }
  if (optargs_t_uuid != NULL) {
    optargs_s.uuid = optargs_t_uuid;
    optargs_s.bitmask |= GUESTFS_MKE2FS_UUID_BITMASK;
  }
  if (optargs_t_forcecreate != (zend_bool)-1) {
    optargs_s.forcecreate = optargs_t_forcecreate;
    optargs_s.bitmask |= GUESTFS_MKE2FS_FORCECREATE_BITMASK;
  }
  if (optargs_t_writesbandgrouponly != (zend_bool)-1) {
    optargs_s.writesbandgrouponly = optargs_t_writesbandgrouponly;
    optargs_s.bitmask |= GUESTFS_MKE2FS_WRITESBANDGROUPONLY_BITMASK;
  }
  if (optargs_t_lazyitableinit != (zend_bool)-1) {
    optargs_s.lazyitableinit = optargs_t_lazyitableinit;
    optargs_s.bitmask |= GUESTFS_MKE2FS_LAZYITABLEINIT_BITMASK;
  }
  if (optargs_t_lazyjournalinit != (zend_bool)-1) {
    optargs_s.lazyjournalinit = optargs_t_lazyjournalinit;
    optargs_s.bitmask |= GUESTFS_MKE2FS_LAZYJOURNALINIT_BITMASK;
  }
  if (optargs_t_testfs != (zend_bool)-1) {
    optargs_s.testfs = optargs_t_testfs;
    optargs_s.bitmask |= GUESTFS_MKE2FS_TESTFS_BITMASK;
  }
  if (optargs_t_discard != (zend_bool)-1) {
    optargs_s.discard = optargs_t_discard;
    optargs_s.bitmask |= GUESTFS_MKE2FS_DISCARD_BITMASK;
  }
  if (optargs_t_quotatype != (zend_bool)-1) {
    optargs_s.quotatype = optargs_t_quotatype;
    optargs_s.bitmask |= GUESTFS_MKE2FS_QUOTATYPE_BITMASK;
  }
  if (optargs_t_extent != (zend_bool)-1) {
    optargs_s.extent = optargs_t_extent;
    optargs_s.bitmask |= GUESTFS_MKE2FS_EXTENT_BITMASK;
  }
  if (optargs_t_filetype != (zend_bool)-1) {
    optargs_s.filetype = optargs_t_filetype;
    optargs_s.bitmask |= GUESTFS_MKE2FS_FILETYPE_BITMASK;
  }
  if (optargs_t_flexbg != (zend_bool)-1) {
    optargs_s.flexbg = optargs_t_flexbg;
    optargs_s.bitmask |= GUESTFS_MKE2FS_FLEXBG_BITMASK;
  }
  if (optargs_t_hasjournal != (zend_bool)-1) {
    optargs_s.hasjournal = optargs_t_hasjournal;
    optargs_s.bitmask |= GUESTFS_MKE2FS_HASJOURNAL_BITMASK;
  }
  if (optargs_t_journaldev != (zend_bool)-1) {
    optargs_s.journaldev = optargs_t_journaldev;
    optargs_s.bitmask |= GUESTFS_MKE2FS_JOURNALDEV_BITMASK;
  }
  if (optargs_t_largefile != (zend_bool)-1) {
    optargs_s.largefile = optargs_t_largefile;
    optargs_s.bitmask |= GUESTFS_MKE2FS_LARGEFILE_BITMASK;
  }
  if (optargs_t_quota != (zend_bool)-1) {
    optargs_s.quota = optargs_t_quota;
    optargs_s.bitmask |= GUESTFS_MKE2FS_QUOTA_BITMASK;
  }
  if (optargs_t_resizeinode != (zend_bool)-1) {
    optargs_s.resizeinode = optargs_t_resizeinode;
    optargs_s.bitmask |= GUESTFS_MKE2FS_RESIZEINODE_BITMASK;
  }
  if (optargs_t_sparsesuper != (zend_bool)-1) {
    optargs_s.sparsesuper = optargs_t_sparsesuper;
    optargs_s.bitmask |= GUESTFS_MKE2FS_SPARSESUPER_BITMASK;
  }
  if (optargs_t_uninitbg != (zend_bool)-1) {
    optargs_s.uninitbg = optargs_t_uninitbg;
    optargs_s.bitmask |= GUESTFS_MKE2FS_UNINITBG_BITMASK;
  }

  int r;
  r = guestfs_mke2fs_argv (g, device, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mke2fs_J)
{
  zval *z_g;
  guestfs_h *g;
  char *fstype;
  guestfs_string_length fstype_size;
  long blocksize;
  char *device;
  guestfs_string_length device_size;
  char *journal;
  guestfs_string_length journal_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rslss",
        &z_g, &fstype, &fstype_size, &blocksize, &device, &device_size, &journal, &journal_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (fstype) != fstype_size) {
    fprintf (stderr, "libguestfs: mke2fs_J: parameter 'fstype' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: mke2fs_J: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (journal) != journal_size) {
    fprintf (stderr, "libguestfs: mke2fs_J: parameter 'journal' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mke2fs_J (g, fstype, blocksize, device, journal);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mke2fs_JL)
{
  zval *z_g;
  guestfs_h *g;
  char *fstype;
  guestfs_string_length fstype_size;
  long blocksize;
  char *device;
  guestfs_string_length device_size;
  char *label;
  guestfs_string_length label_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rslss",
        &z_g, &fstype, &fstype_size, &blocksize, &device, &device_size, &label, &label_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (fstype) != fstype_size) {
    fprintf (stderr, "libguestfs: mke2fs_JL: parameter 'fstype' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: mke2fs_JL: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (label) != label_size) {
    fprintf (stderr, "libguestfs: mke2fs_JL: parameter 'label' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mke2fs_JL (g, fstype, blocksize, device, label);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mke2fs_JU)
{
  zval *z_g;
  guestfs_h *g;
  char *fstype;
  guestfs_string_length fstype_size;
  long blocksize;
  char *device;
  guestfs_string_length device_size;
  char *uuid;
  guestfs_string_length uuid_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rslss",
        &z_g, &fstype, &fstype_size, &blocksize, &device, &device_size, &uuid, &uuid_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (fstype) != fstype_size) {
    fprintf (stderr, "libguestfs: mke2fs_JU: parameter 'fstype' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: mke2fs_JU: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (uuid) != uuid_size) {
    fprintf (stderr, "libguestfs: mke2fs_JU: parameter 'uuid' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mke2fs_JU (g, fstype, blocksize, device, uuid);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mke2journal)
{
  zval *z_g;
  guestfs_h *g;
  long blocksize;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rls",
        &z_g, &blocksize, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: mke2journal: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mke2journal (g, blocksize, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mke2journal_L)
{
  zval *z_g;
  guestfs_h *g;
  long blocksize;
  char *label;
  guestfs_string_length label_size;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rlss",
        &z_g, &blocksize, &label, &label_size, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (label) != label_size) {
    fprintf (stderr, "libguestfs: mke2journal_L: parameter 'label' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: mke2journal_L: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mke2journal_L (g, blocksize, label, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mke2journal_U)
{
  zval *z_g;
  guestfs_h *g;
  long blocksize;
  char *uuid;
  guestfs_string_length uuid_size;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rlss",
        &z_g, &blocksize, &uuid, &uuid_size, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (uuid) != uuid_size) {
    fprintf (stderr, "libguestfs: mke2journal_U: parameter 'uuid' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: mke2journal_U: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mke2journal_U (g, blocksize, uuid, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mkfifo)
{
  zval *z_g;
  guestfs_h *g;
  long mode;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rls",
        &z_g, &mode, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: mkfifo: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mkfifo (g, mode, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mkfs)
{
  zval *z_g;
  guestfs_h *g;
  char *fstype;
  guestfs_string_length fstype_size;
  char *device;
  guestfs_string_length device_size;
  struct guestfs_mkfs_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_mkfs_opts_argv *optargs = &optargs_s;
  long optargs_t_blocksize = -1;
  char *optargs_t_features = NULL;
  guestfs_string_length optargs_t_features_size = -1;
  long optargs_t_inode = -1;
  long optargs_t_sectorsize = -1;
  char *optargs_t_label = NULL;
  guestfs_string_length optargs_t_label_size = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|lslls",
        &z_g, &fstype, &fstype_size, &device, &device_size, &optargs_t_blocksize, &optargs_t_features, &optargs_t_features_size, &optargs_t_inode, &optargs_t_sectorsize, &optargs_t_label, &optargs_t_label_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (fstype) != fstype_size) {
    fprintf (stderr, "libguestfs: mkfs: parameter 'fstype' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: mkfs: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_blocksize != -1) {
    optargs_s.blocksize = optargs_t_blocksize;
    optargs_s.bitmask |= GUESTFS_MKFS_OPTS_BLOCKSIZE_BITMASK;
  }
  if (optargs_t_features != NULL) {
    optargs_s.features = optargs_t_features;
    optargs_s.bitmask |= GUESTFS_MKFS_OPTS_FEATURES_BITMASK;
  }
  if (optargs_t_inode != -1) {
    optargs_s.inode = optargs_t_inode;
    optargs_s.bitmask |= GUESTFS_MKFS_OPTS_INODE_BITMASK;
  }
  if (optargs_t_sectorsize != -1) {
    optargs_s.sectorsize = optargs_t_sectorsize;
    optargs_s.bitmask |= GUESTFS_MKFS_OPTS_SECTORSIZE_BITMASK;
  }
  if (optargs_t_label != NULL) {
    optargs_s.label = optargs_t_label;
    optargs_s.bitmask |= GUESTFS_MKFS_OPTS_LABEL_BITMASK;
  }

  int r;
  r = guestfs_mkfs_opts_argv (g, fstype, device, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mkfs_b)
{
  zval *z_g;
  guestfs_h *g;
  char *fstype;
  guestfs_string_length fstype_size;
  long blocksize;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsls",
        &z_g, &fstype, &fstype_size, &blocksize, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (fstype) != fstype_size) {
    fprintf (stderr, "libguestfs: mkfs_b: parameter 'fstype' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: mkfs_b: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mkfs_b (g, fstype, blocksize, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mkfs_btrfs)
{
  zval *z_g;
  guestfs_h *g;
  zval *z_devices;
  char **devices;
  struct guestfs_mkfs_btrfs_argv optargs_s = { .bitmask = 0 };
  struct guestfs_mkfs_btrfs_argv *optargs = &optargs_s;
  long optargs_t_allocstart = -1;
  long optargs_t_bytecount = -1;
  char *optargs_t_datatype = NULL;
  guestfs_string_length optargs_t_datatype_size = -1;
  long optargs_t_leafsize = -1;
  char *optargs_t_label = NULL;
  guestfs_string_length optargs_t_label_size = -1;
  char *optargs_t_metadata = NULL;
  guestfs_string_length optargs_t_metadata_size = -1;
  long optargs_t_nodesize = -1;
  long optargs_t_sectorsize = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "ra|llslssll",
        &z_g, &z_devices, &optargs_t_allocstart, &optargs_t_bytecount, &optargs_t_datatype, &optargs_t_datatype_size, &optargs_t_leafsize, &optargs_t_label, &optargs_t_label_size, &optargs_t_metadata, &optargs_t_metadata_size, &optargs_t_nodesize, &optargs_t_sectorsize) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  devices = get_stringlist (z_devices);

  if (optargs_t_allocstart != -1) {
    optargs_s.allocstart = optargs_t_allocstart;
    optargs_s.bitmask |= GUESTFS_MKFS_BTRFS_ALLOCSTART_BITMASK;
  }
  if (optargs_t_bytecount != -1) {
    optargs_s.bytecount = optargs_t_bytecount;
    optargs_s.bitmask |= GUESTFS_MKFS_BTRFS_BYTECOUNT_BITMASK;
  }
  if (optargs_t_datatype != NULL) {
    optargs_s.datatype = optargs_t_datatype;
    optargs_s.bitmask |= GUESTFS_MKFS_BTRFS_DATATYPE_BITMASK;
  }
  if (optargs_t_leafsize != -1) {
    optargs_s.leafsize = optargs_t_leafsize;
    optargs_s.bitmask |= GUESTFS_MKFS_BTRFS_LEAFSIZE_BITMASK;
  }
  if (optargs_t_label != NULL) {
    optargs_s.label = optargs_t_label;
    optargs_s.bitmask |= GUESTFS_MKFS_BTRFS_LABEL_BITMASK;
  }
  if (optargs_t_metadata != NULL) {
    optargs_s.metadata = optargs_t_metadata;
    optargs_s.bitmask |= GUESTFS_MKFS_BTRFS_METADATA_BITMASK;
  }
  if (optargs_t_nodesize != -1) {
    optargs_s.nodesize = optargs_t_nodesize;
    optargs_s.bitmask |= GUESTFS_MKFS_BTRFS_NODESIZE_BITMASK;
  }
  if (optargs_t_sectorsize != -1) {
    optargs_s.sectorsize = optargs_t_sectorsize;
    optargs_s.bitmask |= GUESTFS_MKFS_BTRFS_SECTORSIZE_BITMASK;
  }

  int r;
  r = guestfs_mkfs_btrfs_argv (g, devices, optargs);

  guestfs_efree_stringlist (devices);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mklost_and_found)
{
  zval *z_g;
  guestfs_h *g;
  char *mountpoint;
  guestfs_string_length mountpoint_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &mountpoint, &mountpoint_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (mountpoint) != mountpoint_size) {
    fprintf (stderr, "libguestfs: mklost_and_found: parameter 'mountpoint' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mklost_and_found (g, mountpoint);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mkmountpoint)
{
  zval *z_g;
  guestfs_h *g;
  char *exemptpath;
  guestfs_string_length exemptpath_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &exemptpath, &exemptpath_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (exemptpath) != exemptpath_size) {
    fprintf (stderr, "libguestfs: mkmountpoint: parameter 'exemptpath' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mkmountpoint (g, exemptpath);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mknod)
{
  zval *z_g;
  guestfs_h *g;
  long mode;
  long devmajor;
  long devminor;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rllls",
        &z_g, &mode, &devmajor, &devminor, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: mknod: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mknod (g, mode, devmajor, devminor, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mknod_b)
{
  zval *z_g;
  guestfs_h *g;
  long mode;
  long devmajor;
  long devminor;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rllls",
        &z_g, &mode, &devmajor, &devminor, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: mknod_b: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mknod_b (g, mode, devmajor, devminor, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mknod_c)
{
  zval *z_g;
  guestfs_h *g;
  long mode;
  long devmajor;
  long devminor;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rllls",
        &z_g, &mode, &devmajor, &devminor, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: mknod_c: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mknod_c (g, mode, devmajor, devminor, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mksquashfs)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  char *filename;
  guestfs_string_length filename_size;
  struct guestfs_mksquashfs_argv optargs_s = { .bitmask = 0 };
  struct guestfs_mksquashfs_argv *optargs = &optargs_s;
  char *optargs_t_compress = NULL;
  guestfs_string_length optargs_t_compress_size = -1;
  zval *optargs_t_excludes = NULL;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|sa!",
        &z_g, &path, &path_size, &filename, &filename_size, &optargs_t_compress, &optargs_t_compress_size, &optargs_t_excludes) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: mksquashfs: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: mksquashfs: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_compress != NULL) {
    optargs_s.compress = optargs_t_compress;
    optargs_s.bitmask |= GUESTFS_MKSQUASHFS_COMPRESS_BITMASK;
  }
  /* We've seen PHP give us a *long* here when we asked for an array, so
   * positively check that it gave us an array, otherwise ignore it.
   */
  if (optargs_t_excludes != NULL && Z_TYPE_P (optargs_t_excludes) == IS_ARRAY) {
    optargs_s.excludes = get_stringlist (optargs_t_excludes);
    optargs_s.bitmask |= GUESTFS_MKSQUASHFS_EXCLUDES_BITMASK;
  }

  int r;
  r = guestfs_mksquashfs_argv (g, path, filename, optargs);

  if ((optargs_s.bitmask & GUESTFS_MKSQUASHFS_EXCLUDES_BITMASK) != 0)
    guestfs_efree_stringlist ((char **) optargs_s.excludes);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mkswap)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  struct guestfs_mkswap_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_mkswap_opts_argv *optargs = &optargs_s;
  char *optargs_t_label = NULL;
  guestfs_string_length optargs_t_label_size = -1;
  char *optargs_t_uuid = NULL;
  guestfs_string_length optargs_t_uuid_size = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|ss",
        &z_g, &device, &device_size, &optargs_t_label, &optargs_t_label_size, &optargs_t_uuid, &optargs_t_uuid_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: mkswap: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_label != NULL) {
    optargs_s.label = optargs_t_label;
    optargs_s.bitmask |= GUESTFS_MKSWAP_OPTS_LABEL_BITMASK;
  }
  if (optargs_t_uuid != NULL) {
    optargs_s.uuid = optargs_t_uuid;
    optargs_s.bitmask |= GUESTFS_MKSWAP_OPTS_UUID_BITMASK;
  }

  int r;
  r = guestfs_mkswap_opts_argv (g, device, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mkswap_L)
{
  zval *z_g;
  guestfs_h *g;
  char *label;
  guestfs_string_length label_size;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &label, &label_size, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (label) != label_size) {
    fprintf (stderr, "libguestfs: mkswap_L: parameter 'label' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: mkswap_L: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mkswap_L (g, label, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mkswap_U)
{
  zval *z_g;
  guestfs_h *g;
  char *uuid;
  guestfs_string_length uuid_size;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &uuid, &uuid_size, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (uuid) != uuid_size) {
    fprintf (stderr, "libguestfs: mkswap_U: parameter 'uuid' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: mkswap_U: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mkswap_U (g, uuid, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mkswap_file)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: mkswap_file: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mkswap_file (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mktemp)
{
  zval *z_g;
  guestfs_h *g;
  char *tmpl;
  guestfs_string_length tmpl_size;
  struct guestfs_mktemp_argv optargs_s = { .bitmask = 0 };
  struct guestfs_mktemp_argv *optargs = &optargs_s;
  char *optargs_t_suffix = NULL;
  guestfs_string_length optargs_t_suffix_size = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|s",
        &z_g, &tmpl, &tmpl_size, &optargs_t_suffix, &optargs_t_suffix_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (tmpl) != tmpl_size) {
    fprintf (stderr, "libguestfs: mktemp: parameter 'tmpl' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_suffix != NULL) {
    optargs_s.suffix = optargs_t_suffix;
    optargs_s.bitmask |= GUESTFS_MKTEMP_SUFFIX_BITMASK;
  }

  char *r;
  r = guestfs_mktemp_argv (g, tmpl, optargs);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_modprobe)
{
  zval *z_g;
  guestfs_h *g;
  char *modulename;
  guestfs_string_length modulename_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &modulename, &modulename_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (modulename) != modulename_size) {
    fprintf (stderr, "libguestfs: modprobe: parameter 'modulename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_modprobe (g, modulename);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mount)
{
  zval *z_g;
  guestfs_h *g;
  char *mountable;
  guestfs_string_length mountable_size;
  char *mountpoint;
  guestfs_string_length mountpoint_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &mountable, &mountable_size, &mountpoint, &mountpoint_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (mountable) != mountable_size) {
    fprintf (stderr, "libguestfs: mount: parameter 'mountable' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (mountpoint) != mountpoint_size) {
    fprintf (stderr, "libguestfs: mount: parameter 'mountpoint' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mount (g, mountable, mountpoint);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mount_9p)
{
  zval *z_g;
  guestfs_h *g;
  char *mounttag;
  guestfs_string_length mounttag_size;
  char *mountpoint;
  guestfs_string_length mountpoint_size;
  struct guestfs_mount_9p_argv optargs_s = { .bitmask = 0 };
  struct guestfs_mount_9p_argv *optargs = &optargs_s;
  char *optargs_t_options = NULL;
  guestfs_string_length optargs_t_options_size = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|s",
        &z_g, &mounttag, &mounttag_size, &mountpoint, &mountpoint_size, &optargs_t_options, &optargs_t_options_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (mounttag) != mounttag_size) {
    fprintf (stderr, "libguestfs: mount_9p: parameter 'mounttag' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (mountpoint) != mountpoint_size) {
    fprintf (stderr, "libguestfs: mount_9p: parameter 'mountpoint' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_options != NULL) {
    optargs_s.options = optargs_t_options;
    optargs_s.bitmask |= GUESTFS_MOUNT_9P_OPTIONS_BITMASK;
  }

  int r;
  r = guestfs_mount_9p_argv (g, mounttag, mountpoint, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mount_local)
{
  zval *z_g;
  guestfs_h *g;
  char *localmountpoint;
  guestfs_string_length localmountpoint_size;
  struct guestfs_mount_local_argv optargs_s = { .bitmask = 0 };
  struct guestfs_mount_local_argv *optargs = &optargs_s;
  zend_bool optargs_t_readonly = -1;
  char *optargs_t_options = NULL;
  guestfs_string_length optargs_t_options_size = -1;
  long optargs_t_cachetimeout = -1;
  zend_bool optargs_t_debugcalls = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|bslb",
        &z_g, &localmountpoint, &localmountpoint_size, &optargs_t_readonly, &optargs_t_options, &optargs_t_options_size, &optargs_t_cachetimeout, &optargs_t_debugcalls) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (localmountpoint) != localmountpoint_size) {
    fprintf (stderr, "libguestfs: mount_local: parameter 'localmountpoint' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_readonly != (zend_bool)-1) {
    optargs_s.readonly = optargs_t_readonly;
    optargs_s.bitmask |= GUESTFS_MOUNT_LOCAL_READONLY_BITMASK;
  }
  if (optargs_t_options != NULL) {
    optargs_s.options = optargs_t_options;
    optargs_s.bitmask |= GUESTFS_MOUNT_LOCAL_OPTIONS_BITMASK;
  }
  if (optargs_t_cachetimeout != -1) {
    optargs_s.cachetimeout = optargs_t_cachetimeout;
    optargs_s.bitmask |= GUESTFS_MOUNT_LOCAL_CACHETIMEOUT_BITMASK;
  }
  if (optargs_t_debugcalls != (zend_bool)-1) {
    optargs_s.debugcalls = optargs_t_debugcalls;
    optargs_s.bitmask |= GUESTFS_MOUNT_LOCAL_DEBUGCALLS_BITMASK;
  }

  int r;
  r = guestfs_mount_local_argv (g, localmountpoint, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mount_local_run)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mount_local_run (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mount_loop)
{
  zval *z_g;
  guestfs_h *g;
  char *file;
  guestfs_string_length file_size;
  char *mountpoint;
  guestfs_string_length mountpoint_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &file, &file_size, &mountpoint, &mountpoint_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (file) != file_size) {
    fprintf (stderr, "libguestfs: mount_loop: parameter 'file' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (mountpoint) != mountpoint_size) {
    fprintf (stderr, "libguestfs: mount_loop: parameter 'mountpoint' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mount_loop (g, file, mountpoint);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mount_options)
{
  zval *z_g;
  guestfs_h *g;
  char *options;
  guestfs_string_length options_size;
  char *mountable;
  guestfs_string_length mountable_size;
  char *mountpoint;
  guestfs_string_length mountpoint_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsss",
        &z_g, &options, &options_size, &mountable, &mountable_size, &mountpoint, &mountpoint_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (options) != options_size) {
    fprintf (stderr, "libguestfs: mount_options: parameter 'options' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (mountable) != mountable_size) {
    fprintf (stderr, "libguestfs: mount_options: parameter 'mountable' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (mountpoint) != mountpoint_size) {
    fprintf (stderr, "libguestfs: mount_options: parameter 'mountpoint' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mount_options (g, options, mountable, mountpoint);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mount_ro)
{
  zval *z_g;
  guestfs_h *g;
  char *mountable;
  guestfs_string_length mountable_size;
  char *mountpoint;
  guestfs_string_length mountpoint_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &mountable, &mountable_size, &mountpoint, &mountpoint_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (mountable) != mountable_size) {
    fprintf (stderr, "libguestfs: mount_ro: parameter 'mountable' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (mountpoint) != mountpoint_size) {
    fprintf (stderr, "libguestfs: mount_ro: parameter 'mountpoint' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mount_ro (g, mountable, mountpoint);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mount_vfs)
{
  zval *z_g;
  guestfs_h *g;
  char *options;
  guestfs_string_length options_size;
  char *vfstype;
  guestfs_string_length vfstype_size;
  char *mountable;
  guestfs_string_length mountable_size;
  char *mountpoint;
  guestfs_string_length mountpoint_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssss",
        &z_g, &options, &options_size, &vfstype, &vfstype_size, &mountable, &mountable_size, &mountpoint, &mountpoint_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (options) != options_size) {
    fprintf (stderr, "libguestfs: mount_vfs: parameter 'options' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (vfstype) != vfstype_size) {
    fprintf (stderr, "libguestfs: mount_vfs: parameter 'vfstype' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (mountable) != mountable_size) {
    fprintf (stderr, "libguestfs: mount_vfs: parameter 'mountable' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (mountpoint) != mountpoint_size) {
    fprintf (stderr, "libguestfs: mount_vfs: parameter 'mountpoint' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mount_vfs (g, options, vfstype, mountable, mountpoint);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_mountable_device)
{
  zval *z_g;
  guestfs_h *g;
  char *mountable;
  guestfs_string_length mountable_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &mountable, &mountable_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (mountable) != mountable_size) {
    fprintf (stderr, "libguestfs: mountable_device: parameter 'mountable' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_mountable_device (g, mountable);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_mountable_subvolume)
{
  zval *z_g;
  guestfs_h *g;
  char *mountable;
  guestfs_string_length mountable_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &mountable, &mountable_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (mountable) != mountable_size) {
    fprintf (stderr, "libguestfs: mountable_subvolume: parameter 'mountable' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_mountable_subvolume (g, mountable);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_mountpoints)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_mountpoints (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; c += 2) {
    guestfs_add_assoc_string (return_value, r[c], r[c+1], 1);
    free (r[c]);
    free (r[c+1]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_mounts)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_mounts (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_mv)
{
  zval *z_g;
  guestfs_h *g;
  char *src;
  guestfs_string_length src_size;
  char *dest;
  guestfs_string_length dest_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &src, &src_size, &dest, &dest_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (src) != src_size) {
    fprintf (stderr, "libguestfs: mv: parameter 'src' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (dest) != dest_size) {
    fprintf (stderr, "libguestfs: mv: parameter 'dest' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_mv (g, src, dest);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_nr_devices)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_nr_devices (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_ntfs_3g_probe)
{
  zval *z_g;
  guestfs_h *g;
  zend_bool rw;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rbs",
        &z_g, &rw, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: ntfs_3g_probe: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_ntfs_3g_probe (g, rw, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_ntfscat_i)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long inode;
  char *filename;
  guestfs_string_length filename_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsls",
        &z_g, &device, &device_size, &inode, &filename, &filename_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: ntfscat_i: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: ntfscat_i: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_ntfscat_i (g, device, inode, filename);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_ntfsclone_in)
{
  zval *z_g;
  guestfs_h *g;
  char *backupfile;
  guestfs_string_length backupfile_size;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &backupfile, &backupfile_size, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (backupfile) != backupfile_size) {
    fprintf (stderr, "libguestfs: ntfsclone_in: parameter 'backupfile' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: ntfsclone_in: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_ntfsclone_in (g, backupfile, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_ntfsclone_out)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  char *backupfile;
  guestfs_string_length backupfile_size;
  struct guestfs_ntfsclone_out_argv optargs_s = { .bitmask = 0 };
  struct guestfs_ntfsclone_out_argv *optargs = &optargs_s;
  zend_bool optargs_t_metadataonly = -1;
  zend_bool optargs_t_rescue = -1;
  zend_bool optargs_t_ignorefscheck = -1;
  zend_bool optargs_t_preservetimestamps = -1;
  zend_bool optargs_t_force = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|bbbbb",
        &z_g, &device, &device_size, &backupfile, &backupfile_size, &optargs_t_metadataonly, &optargs_t_rescue, &optargs_t_ignorefscheck, &optargs_t_preservetimestamps, &optargs_t_force) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: ntfsclone_out: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (backupfile) != backupfile_size) {
    fprintf (stderr, "libguestfs: ntfsclone_out: parameter 'backupfile' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_metadataonly != (zend_bool)-1) {
    optargs_s.metadataonly = optargs_t_metadataonly;
    optargs_s.bitmask |= GUESTFS_NTFSCLONE_OUT_METADATAONLY_BITMASK;
  }
  if (optargs_t_rescue != (zend_bool)-1) {
    optargs_s.rescue = optargs_t_rescue;
    optargs_s.bitmask |= GUESTFS_NTFSCLONE_OUT_RESCUE_BITMASK;
  }
  if (optargs_t_ignorefscheck != (zend_bool)-1) {
    optargs_s.ignorefscheck = optargs_t_ignorefscheck;
    optargs_s.bitmask |= GUESTFS_NTFSCLONE_OUT_IGNOREFSCHECK_BITMASK;
  }
  if (optargs_t_preservetimestamps != (zend_bool)-1) {
    optargs_s.preservetimestamps = optargs_t_preservetimestamps;
    optargs_s.bitmask |= GUESTFS_NTFSCLONE_OUT_PRESERVETIMESTAMPS_BITMASK;
  }
  if (optargs_t_force != (zend_bool)-1) {
    optargs_s.force = optargs_t_force;
    optargs_s.bitmask |= GUESTFS_NTFSCLONE_OUT_FORCE_BITMASK;
  }

  int r;
  r = guestfs_ntfsclone_out_argv (g, device, backupfile, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_ntfsfix)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  struct guestfs_ntfsfix_argv optargs_s = { .bitmask = 0 };
  struct guestfs_ntfsfix_argv *optargs = &optargs_s;
  zend_bool optargs_t_clearbadsectors = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|b",
        &z_g, &device, &device_size, &optargs_t_clearbadsectors) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: ntfsfix: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_clearbadsectors != (zend_bool)-1) {
    optargs_s.clearbadsectors = optargs_t_clearbadsectors;
    optargs_s.bitmask |= GUESTFS_NTFSFIX_CLEARBADSECTORS_BITMASK;
  }

  int r;
  r = guestfs_ntfsfix_argv (g, device, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_ntfsresize)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  struct guestfs_ntfsresize_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_ntfsresize_opts_argv *optargs = &optargs_s;
  long optargs_t_size = -1;
  zend_bool optargs_t_force = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|lb",
        &z_g, &device, &device_size, &optargs_t_size, &optargs_t_force) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: ntfsresize: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_size != -1) {
    optargs_s.size = optargs_t_size;
    optargs_s.bitmask |= GUESTFS_NTFSRESIZE_OPTS_SIZE_BITMASK;
  }
  if (optargs_t_force != (zend_bool)-1) {
    optargs_s.force = optargs_t_force;
    optargs_s.bitmask |= GUESTFS_NTFSRESIZE_OPTS_FORCE_BITMASK;
  }

  int r;
  r = guestfs_ntfsresize_opts_argv (g, device, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_ntfsresize_size)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &device, &device_size, &size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: ntfsresize_size: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_ntfsresize_size (g, device, size);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_parse_environment)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_parse_environment (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_parse_environment_list)
{
  zval *z_g;
  guestfs_h *g;
  zval *z_environment;
  char **environment;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "ra",
        &z_g, &z_environment) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  environment = get_stringlist (z_environment);

  int r;
  r = guestfs_parse_environment_list (g, environment);

  guestfs_efree_stringlist (environment);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_part_add)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  char *prlogex;
  guestfs_string_length prlogex_size;
  long startsect;
  long endsect;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssll",
        &z_g, &device, &device_size, &prlogex, &prlogex_size, &startsect, &endsect) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_add: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (prlogex) != prlogex_size) {
    fprintf (stderr, "libguestfs: part_add: parameter 'prlogex' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_part_add (g, device, prlogex, startsect, endsect);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_part_del)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long partnum;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &device, &device_size, &partnum) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_del: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_part_del (g, device, partnum);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_part_disk)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  char *parttype;
  guestfs_string_length parttype_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &device, &device_size, &parttype, &parttype_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_disk: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (parttype) != parttype_size) {
    fprintf (stderr, "libguestfs: part_disk: parameter 'parttype' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_part_disk (g, device, parttype);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_part_expand_gpt)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_expand_gpt: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_part_expand_gpt (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_part_get_bootable)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long partnum;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &device, &device_size, &partnum) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_get_bootable: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_part_get_bootable (g, device, partnum);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_BOOL (r);
}

PHP_FUNCTION (guestfs_part_get_disk_guid)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_get_disk_guid: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_part_get_disk_guid (g, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_part_get_gpt_attributes)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long partnum;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &device, &device_size, &partnum) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_get_gpt_attributes: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_part_get_gpt_attributes (g, device, partnum);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_part_get_gpt_guid)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long partnum;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &device, &device_size, &partnum) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_get_gpt_guid: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_part_get_gpt_guid (g, device, partnum);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_part_get_gpt_type)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long partnum;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &device, &device_size, &partnum) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_get_gpt_type: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_part_get_gpt_type (g, device, partnum);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_part_get_mbr_id)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long partnum;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &device, &device_size, &partnum) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_get_mbr_id: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_part_get_mbr_id (g, device, partnum);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_part_get_mbr_part_type)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long partnum;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &device, &device_size, &partnum) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_get_mbr_part_type: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_part_get_mbr_part_type (g, device, partnum);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_part_get_name)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long partnum;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &device, &device_size, &partnum) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_get_name: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_part_get_name (g, device, partnum);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_part_get_parttype)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_get_parttype: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_part_get_parttype (g, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_part_init)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  char *parttype;
  guestfs_string_length parttype_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &device, &device_size, &parttype, &parttype_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_init: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (parttype) != parttype_size) {
    fprintf (stderr, "libguestfs: part_init: parameter 'parttype' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_part_init (g, device, parttype);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_part_list)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_list: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_partition_list *r;
  r = guestfs_part_list (g, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    add_assoc_long (z_elem, "part_num", r->val[c].part_num);
    add_assoc_long (z_elem, "part_start", r->val[c].part_start);
    add_assoc_long (z_elem, "part_end", r->val[c].part_end);
    add_assoc_long (z_elem, "part_size", r->val[c].part_size);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_partition_list (r);
}

PHP_FUNCTION (guestfs_part_resize)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long partnum;
  long endsect;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsll",
        &z_g, &device, &device_size, &partnum, &endsect) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_resize: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_part_resize (g, device, partnum, endsect);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_part_set_bootable)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long partnum;
  zend_bool bootable;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rslb",
        &z_g, &device, &device_size, &partnum, &bootable) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_set_bootable: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_part_set_bootable (g, device, partnum, bootable);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_part_set_disk_guid)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  char *guid;
  guestfs_string_length guid_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &device, &device_size, &guid, &guid_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_set_disk_guid: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (guid) != guid_size) {
    fprintf (stderr, "libguestfs: part_set_disk_guid: parameter 'guid' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_part_set_disk_guid (g, device, guid);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_part_set_disk_guid_random)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_set_disk_guid_random: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_part_set_disk_guid_random (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_part_set_gpt_attributes)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long partnum;
  long attributes;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsll",
        &z_g, &device, &device_size, &partnum, &attributes) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_set_gpt_attributes: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_part_set_gpt_attributes (g, device, partnum, attributes);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_part_set_gpt_guid)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long partnum;
  char *guid;
  guestfs_string_length guid_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsls",
        &z_g, &device, &device_size, &partnum, &guid, &guid_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_set_gpt_guid: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (guid) != guid_size) {
    fprintf (stderr, "libguestfs: part_set_gpt_guid: parameter 'guid' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_part_set_gpt_guid (g, device, partnum, guid);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_part_set_gpt_type)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long partnum;
  char *guid;
  guestfs_string_length guid_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsls",
        &z_g, &device, &device_size, &partnum, &guid, &guid_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_set_gpt_type: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (guid) != guid_size) {
    fprintf (stderr, "libguestfs: part_set_gpt_type: parameter 'guid' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_part_set_gpt_type (g, device, partnum, guid);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_part_set_mbr_id)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long partnum;
  long idbyte;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsll",
        &z_g, &device, &device_size, &partnum, &idbyte) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_set_mbr_id: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_part_set_mbr_id (g, device, partnum, idbyte);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_part_set_name)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long partnum;
  char *name;
  guestfs_string_length name_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsls",
        &z_g, &device, &device_size, &partnum, &name, &name_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: part_set_name: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (name) != name_size) {
    fprintf (stderr, "libguestfs: part_set_name: parameter 'name' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_part_set_name (g, device, partnum, name);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_part_to_dev)
{
  zval *z_g;
  guestfs_h *g;
  char *partition;
  guestfs_string_length partition_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &partition, &partition_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (partition) != partition_size) {
    fprintf (stderr, "libguestfs: part_to_dev: parameter 'partition' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_part_to_dev (g, partition);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_part_to_partnum)
{
  zval *z_g;
  guestfs_h *g;
  char *partition;
  guestfs_string_length partition_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &partition, &partition_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (partition) != partition_size) {
    fprintf (stderr, "libguestfs: part_to_partnum: parameter 'partition' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_part_to_partnum (g, partition);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_ping_daemon)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_ping_daemon (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_pread)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  long count;
  long offset;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsll",
        &z_g, &path, &path_size, &count, &offset) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: pread: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  size_t size;
  r = guestfs_pread (g, path, count, offset, &size);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrndup (r, size);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_pread_device)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long count;
  long offset;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsll",
        &z_g, &device, &device_size, &count, &offset) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: pread_device: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  size_t size;
  r = guestfs_pread_device (g, device, count, offset, &size);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrndup (r, size);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_pvchange_uuid)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: pvchange_uuid: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_pvchange_uuid (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_pvchange_uuid_all)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_pvchange_uuid_all (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_pvcreate)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: pvcreate: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_pvcreate (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_pvremove)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: pvremove: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_pvremove (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_pvresize)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: pvresize: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_pvresize (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_pvresize_size)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &device, &device_size, &size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: pvresize_size: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_pvresize_size (g, device, size);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_pvs)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_pvs (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_pvs_full)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  struct guestfs_lvm_pv_list *r;
  r = guestfs_pvs_full (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    guestfs_add_assoc_string (z_elem, "pv_name", r->val[c].pv_name, 1);
    guestfs_add_assoc_stringl (z_elem, "pv_uuid", r->val[c].pv_uuid, 32, 1);
    guestfs_add_assoc_string (z_elem, "pv_fmt", r->val[c].pv_fmt, 1);
    add_assoc_long (z_elem, "pv_size", r->val[c].pv_size);
    add_assoc_long (z_elem, "dev_size", r->val[c].dev_size);
    add_assoc_long (z_elem, "pv_free", r->val[c].pv_free);
    add_assoc_long (z_elem, "pv_used", r->val[c].pv_used);
    guestfs_add_assoc_string (z_elem, "pv_attr", r->val[c].pv_attr, 1);
    add_assoc_long (z_elem, "pv_pe_count", r->val[c].pv_pe_count);
    add_assoc_long (z_elem, "pv_pe_alloc_count", r->val[c].pv_pe_alloc_count);
    guestfs_add_assoc_string (z_elem, "pv_tags", r->val[c].pv_tags, 1);
    add_assoc_long (z_elem, "pe_start", r->val[c].pe_start);
    add_assoc_long (z_elem, "pv_mda_count", r->val[c].pv_mda_count);
    add_assoc_long (z_elem, "pv_mda_free", r->val[c].pv_mda_free);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_lvm_pv_list (r);
}

PHP_FUNCTION (guestfs_pvuuid)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: pvuuid: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_pvuuid (g, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_pwrite)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  char *content;
  guestfs_string_length content_size;
  long offset;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssl",
        &z_g, &path, &path_size, &content, &content_size, &offset) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: pwrite: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_pwrite (g, path, content, content_size, offset);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_pwrite_device)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  char *content;
  guestfs_string_length content_size;
  long offset;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssl",
        &z_g, &device, &device_size, &content, &content_size, &offset) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: pwrite_device: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_pwrite_device (g, device, content, content_size, offset);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_read_file)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: read_file: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  size_t size;
  r = guestfs_read_file (g, path, &size);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrndup (r, size);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_read_lines)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: read_lines: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_read_lines (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_readdir)
{
  zval *z_g;
  guestfs_h *g;
  char *dir;
  guestfs_string_length dir_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &dir, &dir_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (dir) != dir_size) {
    fprintf (stderr, "libguestfs: readdir: parameter 'dir' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_dirent_list *r;
  r = guestfs_readdir (g, dir);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    add_assoc_long (z_elem, "ino", r->val[c].ino);
    guestfs_add_assoc_stringl (z_elem, "ftyp", &r->val[c].ftyp, 1, 1);
    guestfs_add_assoc_string (z_elem, "name", r->val[c].name, 1);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_dirent_list (r);
}

PHP_FUNCTION (guestfs_readlink)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: readlink: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_readlink (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_readlinklist)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  zval *z_names;
  char **names;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsa",
        &z_g, &path, &path_size, &z_names) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: readlinklist: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  names = get_stringlist (z_names);

  char **r;
  r = guestfs_readlinklist (g, path, names);

  guestfs_efree_stringlist (names);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_realpath)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: realpath: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_realpath (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_remount)
{
  zval *z_g;
  guestfs_h *g;
  char *mountpoint;
  guestfs_string_length mountpoint_size;
  struct guestfs_remount_argv optargs_s = { .bitmask = 0 };
  struct guestfs_remount_argv *optargs = &optargs_s;
  zend_bool optargs_t_rw = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|b",
        &z_g, &mountpoint, &mountpoint_size, &optargs_t_rw) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (mountpoint) != mountpoint_size) {
    fprintf (stderr, "libguestfs: remount: parameter 'mountpoint' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_rw != (zend_bool)-1) {
    optargs_s.rw = optargs_t_rw;
    optargs_s.bitmask |= GUESTFS_REMOUNT_RW_BITMASK;
  }

  int r;
  r = guestfs_remount_argv (g, mountpoint, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_remove_drive)
{
  zval *z_g;
  guestfs_h *g;
  char *label;
  guestfs_string_length label_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &label, &label_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (label) != label_size) {
    fprintf (stderr, "libguestfs: remove_drive: parameter 'label' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_remove_drive (g, label);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_removexattr)
{
  zval *z_g;
  guestfs_h *g;
  char *xattr;
  guestfs_string_length xattr_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &xattr, &xattr_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (xattr) != xattr_size) {
    fprintf (stderr, "libguestfs: removexattr: parameter 'xattr' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: removexattr: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_removexattr (g, xattr, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_rename)
{
  zval *z_g;
  guestfs_h *g;
  char *oldpath;
  guestfs_string_length oldpath_size;
  char *newpath;
  guestfs_string_length newpath_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &oldpath, &oldpath_size, &newpath, &newpath_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (oldpath) != oldpath_size) {
    fprintf (stderr, "libguestfs: rename: parameter 'oldpath' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (newpath) != newpath_size) {
    fprintf (stderr, "libguestfs: rename: parameter 'newpath' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_rename (g, oldpath, newpath);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_resize2fs)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: resize2fs: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_resize2fs (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_resize2fs_M)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: resize2fs_M: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_resize2fs_M (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_resize2fs_size)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &device, &device_size, &size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: resize2fs_size: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_resize2fs_size (g, device, size);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_rm)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: rm: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_rm (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_rm_f)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: rm_f: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_rm_f (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_rm_rf)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: rm_rf: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_rm_rf (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_rmdir)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: rmdir: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_rmdir (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_rmmountpoint)
{
  zval *z_g;
  guestfs_h *g;
  char *exemptpath;
  guestfs_string_length exemptpath_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &exemptpath, &exemptpath_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (exemptpath) != exemptpath_size) {
    fprintf (stderr, "libguestfs: rmmountpoint: parameter 'exemptpath' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_rmmountpoint (g, exemptpath);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_rsync)
{
  zval *z_g;
  guestfs_h *g;
  char *src;
  guestfs_string_length src_size;
  char *dest;
  guestfs_string_length dest_size;
  struct guestfs_rsync_argv optargs_s = { .bitmask = 0 };
  struct guestfs_rsync_argv *optargs = &optargs_s;
  zend_bool optargs_t_archive = -1;
  zend_bool optargs_t_deletedest = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|bb",
        &z_g, &src, &src_size, &dest, &dest_size, &optargs_t_archive, &optargs_t_deletedest) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (src) != src_size) {
    fprintf (stderr, "libguestfs: rsync: parameter 'src' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (dest) != dest_size) {
    fprintf (stderr, "libguestfs: rsync: parameter 'dest' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_archive != (zend_bool)-1) {
    optargs_s.archive = optargs_t_archive;
    optargs_s.bitmask |= GUESTFS_RSYNC_ARCHIVE_BITMASK;
  }
  if (optargs_t_deletedest != (zend_bool)-1) {
    optargs_s.deletedest = optargs_t_deletedest;
    optargs_s.bitmask |= GUESTFS_RSYNC_DELETEDEST_BITMASK;
  }

  int r;
  r = guestfs_rsync_argv (g, src, dest, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_rsync_in)
{
  zval *z_g;
  guestfs_h *g;
  char *remote;
  guestfs_string_length remote_size;
  char *dest;
  guestfs_string_length dest_size;
  struct guestfs_rsync_in_argv optargs_s = { .bitmask = 0 };
  struct guestfs_rsync_in_argv *optargs = &optargs_s;
  zend_bool optargs_t_archive = -1;
  zend_bool optargs_t_deletedest = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|bb",
        &z_g, &remote, &remote_size, &dest, &dest_size, &optargs_t_archive, &optargs_t_deletedest) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (remote) != remote_size) {
    fprintf (stderr, "libguestfs: rsync_in: parameter 'remote' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (dest) != dest_size) {
    fprintf (stderr, "libguestfs: rsync_in: parameter 'dest' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_archive != (zend_bool)-1) {
    optargs_s.archive = optargs_t_archive;
    optargs_s.bitmask |= GUESTFS_RSYNC_IN_ARCHIVE_BITMASK;
  }
  if (optargs_t_deletedest != (zend_bool)-1) {
    optargs_s.deletedest = optargs_t_deletedest;
    optargs_s.bitmask |= GUESTFS_RSYNC_IN_DELETEDEST_BITMASK;
  }

  int r;
  r = guestfs_rsync_in_argv (g, remote, dest, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_rsync_out)
{
  zval *z_g;
  guestfs_h *g;
  char *src;
  guestfs_string_length src_size;
  char *remote;
  guestfs_string_length remote_size;
  struct guestfs_rsync_out_argv optargs_s = { .bitmask = 0 };
  struct guestfs_rsync_out_argv *optargs = &optargs_s;
  zend_bool optargs_t_archive = -1;
  zend_bool optargs_t_deletedest = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|bb",
        &z_g, &src, &src_size, &remote, &remote_size, &optargs_t_archive, &optargs_t_deletedest) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (src) != src_size) {
    fprintf (stderr, "libguestfs: rsync_out: parameter 'src' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (remote) != remote_size) {
    fprintf (stderr, "libguestfs: rsync_out: parameter 'remote' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_archive != (zend_bool)-1) {
    optargs_s.archive = optargs_t_archive;
    optargs_s.bitmask |= GUESTFS_RSYNC_OUT_ARCHIVE_BITMASK;
  }
  if (optargs_t_deletedest != (zend_bool)-1) {
    optargs_s.deletedest = optargs_t_deletedest;
    optargs_s.bitmask |= GUESTFS_RSYNC_OUT_DELETEDEST_BITMASK;
  }

  int r;
  r = guestfs_rsync_out_argv (g, src, remote, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_scrub_device)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: scrub_device: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_scrub_device (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_scrub_file)
{
  zval *z_g;
  guestfs_h *g;
  char *file;
  guestfs_string_length file_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &file, &file_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (file) != file_size) {
    fprintf (stderr, "libguestfs: scrub_file: parameter 'file' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_scrub_file (g, file);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_scrub_freespace)
{
  zval *z_g;
  guestfs_h *g;
  char *dir;
  guestfs_string_length dir_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &dir, &dir_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (dir) != dir_size) {
    fprintf (stderr, "libguestfs: scrub_freespace: parameter 'dir' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_scrub_freespace (g, dir);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_selinux_relabel)
{
  zval *z_g;
  guestfs_h *g;
  char *specfile;
  guestfs_string_length specfile_size;
  char *path;
  guestfs_string_length path_size;
  struct guestfs_selinux_relabel_argv optargs_s = { .bitmask = 0 };
  struct guestfs_selinux_relabel_argv *optargs = &optargs_s;
  zend_bool optargs_t_force = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|b",
        &z_g, &specfile, &specfile_size, &path, &path_size, &optargs_t_force) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (specfile) != specfile_size) {
    fprintf (stderr, "libguestfs: selinux_relabel: parameter 'specfile' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: selinux_relabel: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_force != (zend_bool)-1) {
    optargs_s.force = optargs_t_force;
    optargs_s.bitmask |= GUESTFS_SELINUX_RELABEL_FORCE_BITMASK;
  }

  int r;
  r = guestfs_selinux_relabel_argv (g, specfile, path, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_append)
{
  zval *z_g;
  guestfs_h *g;
  char *append = NULL;
  guestfs_string_length append_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs!",
        &z_g, &append, &append_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (append != NULL && strlen (append) != append_size) {
    fprintf (stderr, "libguestfs: set_append: parameter 'append' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_append (g, append);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_attach_method)
{
  zval *z_g;
  guestfs_h *g;
  char *backend;
  guestfs_string_length backend_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &backend, &backend_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (backend) != backend_size) {
    fprintf (stderr, "libguestfs: set_attach_method: parameter 'backend' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_attach_method (g, backend);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_autosync)
{
  zval *z_g;
  guestfs_h *g;
  zend_bool autosync;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rb",
        &z_g, &autosync) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_autosync (g, autosync);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_backend)
{
  zval *z_g;
  guestfs_h *g;
  char *backend;
  guestfs_string_length backend_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &backend, &backend_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (backend) != backend_size) {
    fprintf (stderr, "libguestfs: set_backend: parameter 'backend' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_backend (g, backend);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_backend_setting)
{
  zval *z_g;
  guestfs_h *g;
  char *name;
  guestfs_string_length name_size;
  char *val;
  guestfs_string_length val_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &name, &name_size, &val, &val_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (name) != name_size) {
    fprintf (stderr, "libguestfs: set_backend_setting: parameter 'name' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (val) != val_size) {
    fprintf (stderr, "libguestfs: set_backend_setting: parameter 'val' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_backend_setting (g, name, val);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_backend_settings)
{
  zval *z_g;
  guestfs_h *g;
  zval *z_settings;
  char **settings;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "ra",
        &z_g, &z_settings) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  settings = get_stringlist (z_settings);

  int r;
  r = guestfs_set_backend_settings (g, settings);

  guestfs_efree_stringlist (settings);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_cachedir)
{
  zval *z_g;
  guestfs_h *g;
  char *cachedir = NULL;
  guestfs_string_length cachedir_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs!",
        &z_g, &cachedir, &cachedir_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (cachedir != NULL && strlen (cachedir) != cachedir_size) {
    fprintf (stderr, "libguestfs: set_cachedir: parameter 'cachedir' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_cachedir (g, cachedir);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_direct)
{
  zval *z_g;
  guestfs_h *g;
  zend_bool direct;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rb",
        &z_g, &direct) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_direct (g, direct);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_e2attrs)
{
  zval *z_g;
  guestfs_h *g;
  char *file;
  guestfs_string_length file_size;
  char *attrs;
  guestfs_string_length attrs_size;
  struct guestfs_set_e2attrs_argv optargs_s = { .bitmask = 0 };
  struct guestfs_set_e2attrs_argv *optargs = &optargs_s;
  zend_bool optargs_t_clear = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|b",
        &z_g, &file, &file_size, &attrs, &attrs_size, &optargs_t_clear) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (file) != file_size) {
    fprintf (stderr, "libguestfs: set_e2attrs: parameter 'file' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (attrs) != attrs_size) {
    fprintf (stderr, "libguestfs: set_e2attrs: parameter 'attrs' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_clear != (zend_bool)-1) {
    optargs_s.clear = optargs_t_clear;
    optargs_s.bitmask |= GUESTFS_SET_E2ATTRS_CLEAR_BITMASK;
  }

  int r;
  r = guestfs_set_e2attrs_argv (g, file, attrs, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_e2generation)
{
  zval *z_g;
  guestfs_h *g;
  char *file;
  guestfs_string_length file_size;
  long generation;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &file, &file_size, &generation) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (file) != file_size) {
    fprintf (stderr, "libguestfs: set_e2generation: parameter 'file' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_e2generation (g, file, generation);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_e2label)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  char *label;
  guestfs_string_length label_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &device, &device_size, &label, &label_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: set_e2label: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (label) != label_size) {
    fprintf (stderr, "libguestfs: set_e2label: parameter 'label' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_e2label (g, device, label);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_e2uuid)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  char *uuid;
  guestfs_string_length uuid_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &device, &device_size, &uuid, &uuid_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: set_e2uuid: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (uuid) != uuid_size) {
    fprintf (stderr, "libguestfs: set_e2uuid: parameter 'uuid' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_e2uuid (g, device, uuid);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_hv)
{
  zval *z_g;
  guestfs_h *g;
  char *hv;
  guestfs_string_length hv_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &hv, &hv_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (hv) != hv_size) {
    fprintf (stderr, "libguestfs: set_hv: parameter 'hv' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_hv (g, hv);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_identifier)
{
  zval *z_g;
  guestfs_h *g;
  char *identifier;
  guestfs_string_length identifier_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &identifier, &identifier_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (identifier) != identifier_size) {
    fprintf (stderr, "libguestfs: set_identifier: parameter 'identifier' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_identifier (g, identifier);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_label)
{
  zval *z_g;
  guestfs_h *g;
  char *mountable;
  guestfs_string_length mountable_size;
  char *label;
  guestfs_string_length label_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &mountable, &mountable_size, &label, &label_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (mountable) != mountable_size) {
    fprintf (stderr, "libguestfs: set_label: parameter 'mountable' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (label) != label_size) {
    fprintf (stderr, "libguestfs: set_label: parameter 'label' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_label (g, mountable, label);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_libvirt_requested_credential)
{
  zval *z_g;
  guestfs_h *g;
  long index;
  char *cred;
  guestfs_string_length cred_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rls",
        &z_g, &index, &cred, &cred_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_libvirt_requested_credential (g, index, cred, cred_size);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_libvirt_supported_credentials)
{
  zval *z_g;
  guestfs_h *g;
  zval *z_creds;
  char **creds;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "ra",
        &z_g, &z_creds) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  creds = get_stringlist (z_creds);

  int r;
  r = guestfs_set_libvirt_supported_credentials (g, creds);

  guestfs_efree_stringlist (creds);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_memsize)
{
  zval *z_g;
  guestfs_h *g;
  long memsize;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &memsize) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_memsize (g, memsize);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_network)
{
  zval *z_g;
  guestfs_h *g;
  zend_bool network;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rb",
        &z_g, &network) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_network (g, network);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_path)
{
  zval *z_g;
  guestfs_h *g;
  char *searchpath = NULL;
  guestfs_string_length searchpath_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs!",
        &z_g, &searchpath, &searchpath_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (searchpath != NULL && strlen (searchpath) != searchpath_size) {
    fprintf (stderr, "libguestfs: set_path: parameter 'searchpath' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_path (g, searchpath);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_pgroup)
{
  zval *z_g;
  guestfs_h *g;
  zend_bool pgroup;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rb",
        &z_g, &pgroup) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_pgroup (g, pgroup);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_program)
{
  zval *z_g;
  guestfs_h *g;
  char *program;
  guestfs_string_length program_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &program, &program_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (program) != program_size) {
    fprintf (stderr, "libguestfs: set_program: parameter 'program' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_program (g, program);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_qemu)
{
  zval *z_g;
  guestfs_h *g;
  char *hv = NULL;
  guestfs_string_length hv_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs!",
        &z_g, &hv, &hv_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (hv != NULL && strlen (hv) != hv_size) {
    fprintf (stderr, "libguestfs: set_qemu: parameter 'hv' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_qemu (g, hv);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_recovery_proc)
{
  zval *z_g;
  guestfs_h *g;
  zend_bool recoveryproc;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rb",
        &z_g, &recoveryproc) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_recovery_proc (g, recoveryproc);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_selinux)
{
  zval *z_g;
  guestfs_h *g;
  zend_bool selinux;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rb",
        &z_g, &selinux) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_selinux (g, selinux);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_smp)
{
  zval *z_g;
  guestfs_h *g;
  long smp;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &smp) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_smp (g, smp);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_tmpdir)
{
  zval *z_g;
  guestfs_h *g;
  char *tmpdir = NULL;
  guestfs_string_length tmpdir_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs!",
        &z_g, &tmpdir, &tmpdir_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (tmpdir != NULL && strlen (tmpdir) != tmpdir_size) {
    fprintf (stderr, "libguestfs: set_tmpdir: parameter 'tmpdir' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_tmpdir (g, tmpdir);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_trace)
{
  zval *z_g;
  guestfs_h *g;
  zend_bool trace;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rb",
        &z_g, &trace) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_trace (g, trace);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_uuid)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  char *uuid;
  guestfs_string_length uuid_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &device, &device_size, &uuid, &uuid_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: set_uuid: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (uuid) != uuid_size) {
    fprintf (stderr, "libguestfs: set_uuid: parameter 'uuid' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_uuid (g, device, uuid);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_uuid_random)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: set_uuid_random: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_uuid_random (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_set_verbose)
{
  zval *z_g;
  guestfs_h *g;
  zend_bool verbose;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rb",
        &z_g, &verbose) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_set_verbose (g, verbose);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_setcon)
{
  zval *z_g;
  guestfs_h *g;
  char *context;
  guestfs_string_length context_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &context, &context_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (context) != context_size) {
    fprintf (stderr, "libguestfs: setcon: parameter 'context' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_setcon (g, context);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_setxattr)
{
  zval *z_g;
  guestfs_h *g;
  char *xattr;
  guestfs_string_length xattr_size;
  char *val;
  guestfs_string_length val_size;
  long vallen;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssls",
        &z_g, &xattr, &xattr_size, &val, &val_size, &vallen, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (xattr) != xattr_size) {
    fprintf (stderr, "libguestfs: setxattr: parameter 'xattr' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (val) != val_size) {
    fprintf (stderr, "libguestfs: setxattr: parameter 'val' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: setxattr: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_setxattr (g, xattr, val, vallen, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_sfdisk)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long cyls;
  long heads;
  long sectors;
  zval *z_lines;
  char **lines;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsllla",
        &z_g, &device, &device_size, &cyls, &heads, &sectors, &z_lines) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: sfdisk: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  lines = get_stringlist (z_lines);

  int r;
  r = guestfs_sfdisk (g, device, cyls, heads, sectors, lines);

  guestfs_efree_stringlist (lines);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_sfdiskM)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  zval *z_lines;
  char **lines;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsa",
        &z_g, &device, &device_size, &z_lines) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: sfdiskM: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  lines = get_stringlist (z_lines);

  int r;
  r = guestfs_sfdiskM (g, device, lines);

  guestfs_efree_stringlist (lines);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_sfdisk_N)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  long partnum;
  long cyls;
  long heads;
  long sectors;
  char *line;
  guestfs_string_length line_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rslllls",
        &z_g, &device, &device_size, &partnum, &cyls, &heads, &sectors, &line, &line_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: sfdisk_N: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (line) != line_size) {
    fprintf (stderr, "libguestfs: sfdisk_N: parameter 'line' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_sfdisk_N (g, device, partnum, cyls, heads, sectors, line);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_sfdisk_disk_geometry)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: sfdisk_disk_geometry: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_sfdisk_disk_geometry (g, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_sfdisk_kernel_geometry)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: sfdisk_kernel_geometry: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_sfdisk_kernel_geometry (g, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_sfdisk_l)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: sfdisk_l: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_sfdisk_l (g, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_sh)
{
  zval *z_g;
  guestfs_h *g;
  char *command;
  guestfs_string_length command_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &command, &command_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (command) != command_size) {
    fprintf (stderr, "libguestfs: sh: parameter 'command' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_sh (g, command);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_sh_lines)
{
  zval *z_g;
  guestfs_h *g;
  char *command;
  guestfs_string_length command_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &command, &command_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (command) != command_size) {
    fprintf (stderr, "libguestfs: sh_lines: parameter 'command' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_sh_lines (g, command);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_shutdown)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_shutdown (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_sleep)
{
  zval *z_g;
  guestfs_h *g;
  long secs;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &secs) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_sleep (g, secs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_stat)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: stat: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_stat *r;
  r = guestfs_stat (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  add_assoc_long (return_value, "dev", r->dev);
  add_assoc_long (return_value, "ino", r->ino);
  add_assoc_long (return_value, "mode", r->mode);
  add_assoc_long (return_value, "nlink", r->nlink);
  add_assoc_long (return_value, "uid", r->uid);
  add_assoc_long (return_value, "gid", r->gid);
  add_assoc_long (return_value, "rdev", r->rdev);
  add_assoc_long (return_value, "size", r->size);
  add_assoc_long (return_value, "blksize", r->blksize);
  add_assoc_long (return_value, "blocks", r->blocks);
  add_assoc_long (return_value, "atime", r->atime);
  add_assoc_long (return_value, "mtime", r->mtime);
  add_assoc_long (return_value, "ctime", r->ctime);
  guestfs_free_stat (r);
}

PHP_FUNCTION (guestfs_statns)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: statns: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_statns *r;
  r = guestfs_statns (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  add_assoc_long (return_value, "st_dev", r->st_dev);
  add_assoc_long (return_value, "st_ino", r->st_ino);
  add_assoc_long (return_value, "st_mode", r->st_mode);
  add_assoc_long (return_value, "st_nlink", r->st_nlink);
  add_assoc_long (return_value, "st_uid", r->st_uid);
  add_assoc_long (return_value, "st_gid", r->st_gid);
  add_assoc_long (return_value, "st_rdev", r->st_rdev);
  add_assoc_long (return_value, "st_size", r->st_size);
  add_assoc_long (return_value, "st_blksize", r->st_blksize);
  add_assoc_long (return_value, "st_blocks", r->st_blocks);
  add_assoc_long (return_value, "st_atime_sec", r->st_atime_sec);
  add_assoc_long (return_value, "st_atime_nsec", r->st_atime_nsec);
  add_assoc_long (return_value, "st_mtime_sec", r->st_mtime_sec);
  add_assoc_long (return_value, "st_mtime_nsec", r->st_mtime_nsec);
  add_assoc_long (return_value, "st_ctime_sec", r->st_ctime_sec);
  add_assoc_long (return_value, "st_ctime_nsec", r->st_ctime_nsec);
  add_assoc_long (return_value, "st_spare1", r->st_spare1);
  add_assoc_long (return_value, "st_spare2", r->st_spare2);
  add_assoc_long (return_value, "st_spare3", r->st_spare3);
  add_assoc_long (return_value, "st_spare4", r->st_spare4);
  add_assoc_long (return_value, "st_spare5", r->st_spare5);
  add_assoc_long (return_value, "st_spare6", r->st_spare6);
  guestfs_free_statns (r);
}

PHP_FUNCTION (guestfs_statvfs)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: statvfs: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_statvfs *r;
  r = guestfs_statvfs (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  add_assoc_long (return_value, "bsize", r->bsize);
  add_assoc_long (return_value, "frsize", r->frsize);
  add_assoc_long (return_value, "blocks", r->blocks);
  add_assoc_long (return_value, "bfree", r->bfree);
  add_assoc_long (return_value, "bavail", r->bavail);
  add_assoc_long (return_value, "files", r->files);
  add_assoc_long (return_value, "ffree", r->ffree);
  add_assoc_long (return_value, "favail", r->favail);
  add_assoc_long (return_value, "fsid", r->fsid);
  add_assoc_long (return_value, "flag", r->flag);
  add_assoc_long (return_value, "namemax", r->namemax);
  guestfs_free_statvfs (r);
}

PHP_FUNCTION (guestfs_strings)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: strings: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_strings (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_strings_e)
{
  zval *z_g;
  guestfs_h *g;
  char *encoding;
  guestfs_string_length encoding_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &encoding, &encoding_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (encoding) != encoding_size) {
    fprintf (stderr, "libguestfs: strings_e: parameter 'encoding' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: strings_e: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_strings_e (g, encoding, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_swapoff_device)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: swapoff_device: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_swapoff_device (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_swapoff_file)
{
  zval *z_g;
  guestfs_h *g;
  char *file;
  guestfs_string_length file_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &file, &file_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (file) != file_size) {
    fprintf (stderr, "libguestfs: swapoff_file: parameter 'file' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_swapoff_file (g, file);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_swapoff_label)
{
  zval *z_g;
  guestfs_h *g;
  char *label;
  guestfs_string_length label_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &label, &label_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (label) != label_size) {
    fprintf (stderr, "libguestfs: swapoff_label: parameter 'label' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_swapoff_label (g, label);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_swapoff_uuid)
{
  zval *z_g;
  guestfs_h *g;
  char *uuid;
  guestfs_string_length uuid_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &uuid, &uuid_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (uuid) != uuid_size) {
    fprintf (stderr, "libguestfs: swapoff_uuid: parameter 'uuid' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_swapoff_uuid (g, uuid);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_swapon_device)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: swapon_device: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_swapon_device (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_swapon_file)
{
  zval *z_g;
  guestfs_h *g;
  char *file;
  guestfs_string_length file_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &file, &file_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (file) != file_size) {
    fprintf (stderr, "libguestfs: swapon_file: parameter 'file' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_swapon_file (g, file);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_swapon_label)
{
  zval *z_g;
  guestfs_h *g;
  char *label;
  guestfs_string_length label_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &label, &label_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (label) != label_size) {
    fprintf (stderr, "libguestfs: swapon_label: parameter 'label' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_swapon_label (g, label);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_swapon_uuid)
{
  zval *z_g;
  guestfs_h *g;
  char *uuid;
  guestfs_string_length uuid_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &uuid, &uuid_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (uuid) != uuid_size) {
    fprintf (stderr, "libguestfs: swapon_uuid: parameter 'uuid' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_swapon_uuid (g, uuid);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_sync)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_sync (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_syslinux)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  struct guestfs_syslinux_argv optargs_s = { .bitmask = 0 };
  struct guestfs_syslinux_argv *optargs = &optargs_s;
  char *optargs_t_directory = NULL;
  guestfs_string_length optargs_t_directory_size = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|s",
        &z_g, &device, &device_size, &optargs_t_directory, &optargs_t_directory_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: syslinux: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_directory != NULL) {
    optargs_s.directory = optargs_t_directory;
    optargs_s.bitmask |= GUESTFS_SYSLINUX_DIRECTORY_BITMASK;
  }

  int r;
  r = guestfs_syslinux_argv (g, device, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_tail)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: tail: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_tail (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_tail_n)
{
  zval *z_g;
  guestfs_h *g;
  long nrlines;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rls",
        &z_g, &nrlines, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: tail_n: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_tail_n (g, nrlines, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_tar_in)
{
  zval *z_g;
  guestfs_h *g;
  char *tarfile;
  guestfs_string_length tarfile_size;
  char *directory;
  guestfs_string_length directory_size;
  struct guestfs_tar_in_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_tar_in_opts_argv *optargs = &optargs_s;
  char *optargs_t_compress = NULL;
  guestfs_string_length optargs_t_compress_size = -1;
  zend_bool optargs_t_xattrs = -1;
  zend_bool optargs_t_selinux = -1;
  zend_bool optargs_t_acls = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|sbbb",
        &z_g, &tarfile, &tarfile_size, &directory, &directory_size, &optargs_t_compress, &optargs_t_compress_size, &optargs_t_xattrs, &optargs_t_selinux, &optargs_t_acls) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (tarfile) != tarfile_size) {
    fprintf (stderr, "libguestfs: tar_in: parameter 'tarfile' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (directory) != directory_size) {
    fprintf (stderr, "libguestfs: tar_in: parameter 'directory' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_compress != NULL) {
    optargs_s.compress = optargs_t_compress;
    optargs_s.bitmask |= GUESTFS_TAR_IN_OPTS_COMPRESS_BITMASK;
  }
  if (optargs_t_xattrs != (zend_bool)-1) {
    optargs_s.xattrs = optargs_t_xattrs;
    optargs_s.bitmask |= GUESTFS_TAR_IN_OPTS_XATTRS_BITMASK;
  }
  if (optargs_t_selinux != (zend_bool)-1) {
    optargs_s.selinux = optargs_t_selinux;
    optargs_s.bitmask |= GUESTFS_TAR_IN_OPTS_SELINUX_BITMASK;
  }
  if (optargs_t_acls != (zend_bool)-1) {
    optargs_s.acls = optargs_t_acls;
    optargs_s.bitmask |= GUESTFS_TAR_IN_OPTS_ACLS_BITMASK;
  }

  int r;
  r = guestfs_tar_in_opts_argv (g, tarfile, directory, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_tar_out)
{
  zval *z_g;
  guestfs_h *g;
  char *directory;
  guestfs_string_length directory_size;
  char *tarfile;
  guestfs_string_length tarfile_size;
  struct guestfs_tar_out_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_tar_out_opts_argv *optargs = &optargs_s;
  char *optargs_t_compress = NULL;
  guestfs_string_length optargs_t_compress_size = -1;
  zend_bool optargs_t_numericowner = -1;
  zval *optargs_t_excludes = NULL;
  zend_bool optargs_t_xattrs = -1;
  zend_bool optargs_t_selinux = -1;
  zend_bool optargs_t_acls = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss|sba!bbb",
        &z_g, &directory, &directory_size, &tarfile, &tarfile_size, &optargs_t_compress, &optargs_t_compress_size, &optargs_t_numericowner, &optargs_t_excludes, &optargs_t_xattrs, &optargs_t_selinux, &optargs_t_acls) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (directory) != directory_size) {
    fprintf (stderr, "libguestfs: tar_out: parameter 'directory' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (tarfile) != tarfile_size) {
    fprintf (stderr, "libguestfs: tar_out: parameter 'tarfile' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_compress != NULL) {
    optargs_s.compress = optargs_t_compress;
    optargs_s.bitmask |= GUESTFS_TAR_OUT_OPTS_COMPRESS_BITMASK;
  }
  if (optargs_t_numericowner != (zend_bool)-1) {
    optargs_s.numericowner = optargs_t_numericowner;
    optargs_s.bitmask |= GUESTFS_TAR_OUT_OPTS_NUMERICOWNER_BITMASK;
  }
  /* We've seen PHP give us a *long* here when we asked for an array, so
   * positively check that it gave us an array, otherwise ignore it.
   */
  if (optargs_t_excludes != NULL && Z_TYPE_P (optargs_t_excludes) == IS_ARRAY) {
    optargs_s.excludes = get_stringlist (optargs_t_excludes);
    optargs_s.bitmask |= GUESTFS_TAR_OUT_OPTS_EXCLUDES_BITMASK;
  }
  if (optargs_t_xattrs != (zend_bool)-1) {
    optargs_s.xattrs = optargs_t_xattrs;
    optargs_s.bitmask |= GUESTFS_TAR_OUT_OPTS_XATTRS_BITMASK;
  }
  if (optargs_t_selinux != (zend_bool)-1) {
    optargs_s.selinux = optargs_t_selinux;
    optargs_s.bitmask |= GUESTFS_TAR_OUT_OPTS_SELINUX_BITMASK;
  }
  if (optargs_t_acls != (zend_bool)-1) {
    optargs_s.acls = optargs_t_acls;
    optargs_s.bitmask |= GUESTFS_TAR_OUT_OPTS_ACLS_BITMASK;
  }

  int r;
  r = guestfs_tar_out_opts_argv (g, directory, tarfile, optargs);

  if ((optargs_s.bitmask & GUESTFS_TAR_OUT_OPTS_EXCLUDES_BITMASK) != 0)
    guestfs_efree_stringlist ((char **) optargs_s.excludes);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_tgz_in)
{
  zval *z_g;
  guestfs_h *g;
  char *tarball;
  guestfs_string_length tarball_size;
  char *directory;
  guestfs_string_length directory_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &tarball, &tarball_size, &directory, &directory_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (tarball) != tarball_size) {
    fprintf (stderr, "libguestfs: tgz_in: parameter 'tarball' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (directory) != directory_size) {
    fprintf (stderr, "libguestfs: tgz_in: parameter 'directory' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_tgz_in (g, tarball, directory);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_tgz_out)
{
  zval *z_g;
  guestfs_h *g;
  char *directory;
  guestfs_string_length directory_size;
  char *tarball;
  guestfs_string_length tarball_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &directory, &directory_size, &tarball, &tarball_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (directory) != directory_size) {
    fprintf (stderr, "libguestfs: tgz_out: parameter 'directory' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (tarball) != tarball_size) {
    fprintf (stderr, "libguestfs: tgz_out: parameter 'tarball' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_tgz_out (g, directory, tarball);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_touch)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: touch: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_touch (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_truncate)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: truncate: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_truncate (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_truncate_size)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  long size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsl",
        &z_g, &path, &path_size, &size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: truncate_size: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_truncate_size (g, path, size);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_tune2fs)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  struct guestfs_tune2fs_argv optargs_s = { .bitmask = 0 };
  struct guestfs_tune2fs_argv *optargs = &optargs_s;
  zend_bool optargs_t_force = -1;
  long optargs_t_maxmountcount = -1;
  long optargs_t_mountcount = -1;
  char *optargs_t_errorbehavior = NULL;
  guestfs_string_length optargs_t_errorbehavior_size = -1;
  long optargs_t_group = -1;
  long optargs_t_intervalbetweenchecks = -1;
  long optargs_t_reservedblockspercentage = -1;
  char *optargs_t_lastmounteddirectory = NULL;
  guestfs_string_length optargs_t_lastmounteddirectory_size = -1;
  long optargs_t_reservedblockscount = -1;
  long optargs_t_user = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|bllslllsll",
        &z_g, &device, &device_size, &optargs_t_force, &optargs_t_maxmountcount, &optargs_t_mountcount, &optargs_t_errorbehavior, &optargs_t_errorbehavior_size, &optargs_t_group, &optargs_t_intervalbetweenchecks, &optargs_t_reservedblockspercentage, &optargs_t_lastmounteddirectory, &optargs_t_lastmounteddirectory_size, &optargs_t_reservedblockscount, &optargs_t_user) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: tune2fs: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_force != (zend_bool)-1) {
    optargs_s.force = optargs_t_force;
    optargs_s.bitmask |= GUESTFS_TUNE2FS_FORCE_BITMASK;
  }
  if (optargs_t_maxmountcount != -1) {
    optargs_s.maxmountcount = optargs_t_maxmountcount;
    optargs_s.bitmask |= GUESTFS_TUNE2FS_MAXMOUNTCOUNT_BITMASK;
  }
  if (optargs_t_mountcount != -1) {
    optargs_s.mountcount = optargs_t_mountcount;
    optargs_s.bitmask |= GUESTFS_TUNE2FS_MOUNTCOUNT_BITMASK;
  }
  if (optargs_t_errorbehavior != NULL) {
    optargs_s.errorbehavior = optargs_t_errorbehavior;
    optargs_s.bitmask |= GUESTFS_TUNE2FS_ERRORBEHAVIOR_BITMASK;
  }
  if (optargs_t_group != -1) {
    optargs_s.group = optargs_t_group;
    optargs_s.bitmask |= GUESTFS_TUNE2FS_GROUP_BITMASK;
  }
  if (optargs_t_intervalbetweenchecks != -1) {
    optargs_s.intervalbetweenchecks = optargs_t_intervalbetweenchecks;
    optargs_s.bitmask |= GUESTFS_TUNE2FS_INTERVALBETWEENCHECKS_BITMASK;
  }
  if (optargs_t_reservedblockspercentage != -1) {
    optargs_s.reservedblockspercentage = optargs_t_reservedblockspercentage;
    optargs_s.bitmask |= GUESTFS_TUNE2FS_RESERVEDBLOCKSPERCENTAGE_BITMASK;
  }
  if (optargs_t_lastmounteddirectory != NULL) {
    optargs_s.lastmounteddirectory = optargs_t_lastmounteddirectory;
    optargs_s.bitmask |= GUESTFS_TUNE2FS_LASTMOUNTEDDIRECTORY_BITMASK;
  }
  if (optargs_t_reservedblockscount != -1) {
    optargs_s.reservedblockscount = optargs_t_reservedblockscount;
    optargs_s.bitmask |= GUESTFS_TUNE2FS_RESERVEDBLOCKSCOUNT_BITMASK;
  }
  if (optargs_t_user != -1) {
    optargs_s.user = optargs_t_user;
    optargs_s.bitmask |= GUESTFS_TUNE2FS_USER_BITMASK;
  }

  int r;
  r = guestfs_tune2fs_argv (g, device, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_tune2fs_l)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: tune2fs_l: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_tune2fs_l (g, device);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; c += 2) {
    guestfs_add_assoc_string (return_value, r[c], r[c+1], 1);
    free (r[c]);
    free (r[c+1]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_txz_in)
{
  zval *z_g;
  guestfs_h *g;
  char *tarball;
  guestfs_string_length tarball_size;
  char *directory;
  guestfs_string_length directory_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &tarball, &tarball_size, &directory, &directory_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (tarball) != tarball_size) {
    fprintf (stderr, "libguestfs: txz_in: parameter 'tarball' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (directory) != directory_size) {
    fprintf (stderr, "libguestfs: txz_in: parameter 'directory' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_txz_in (g, tarball, directory);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_txz_out)
{
  zval *z_g;
  guestfs_h *g;
  char *directory;
  guestfs_string_length directory_size;
  char *tarball;
  guestfs_string_length tarball_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &directory, &directory_size, &tarball, &tarball_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (directory) != directory_size) {
    fprintf (stderr, "libguestfs: txz_out: parameter 'directory' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (tarball) != tarball_size) {
    fprintf (stderr, "libguestfs: txz_out: parameter 'tarball' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_txz_out (g, directory, tarball);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_umask)
{
  zval *z_g;
  guestfs_h *g;
  long mask;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rl",
        &z_g, &mask) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_umask (g, mask);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_umount)
{
  zval *z_g;
  guestfs_h *g;
  char *pathordevice;
  guestfs_string_length pathordevice_size;
  struct guestfs_umount_opts_argv optargs_s = { .bitmask = 0 };
  struct guestfs_umount_opts_argv *optargs = &optargs_s;
  zend_bool optargs_t_force = -1;
  zend_bool optargs_t_lazyunmount = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|bb",
        &z_g, &pathordevice, &pathordevice_size, &optargs_t_force, &optargs_t_lazyunmount) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (pathordevice) != pathordevice_size) {
    fprintf (stderr, "libguestfs: umount: parameter 'pathordevice' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_force != (zend_bool)-1) {
    optargs_s.force = optargs_t_force;
    optargs_s.bitmask |= GUESTFS_UMOUNT_OPTS_FORCE_BITMASK;
  }
  if (optargs_t_lazyunmount != (zend_bool)-1) {
    optargs_s.lazyunmount = optargs_t_lazyunmount;
    optargs_s.bitmask |= GUESTFS_UMOUNT_OPTS_LAZYUNMOUNT_BITMASK;
  }

  int r;
  r = guestfs_umount_opts_argv (g, pathordevice, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_umount_all)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_umount_all (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_umount_local)
{
  zval *z_g;
  guestfs_h *g;
  struct guestfs_umount_local_argv optargs_s = { .bitmask = 0 };
  struct guestfs_umount_local_argv *optargs = &optargs_s;
  zend_bool optargs_t_retry = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r|b",
        &z_g, &optargs_t_retry) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (optargs_t_retry != (zend_bool)-1) {
    optargs_s.retry = optargs_t_retry;
    optargs_s.bitmask |= GUESTFS_UMOUNT_LOCAL_RETRY_BITMASK;
  }

  int r;
  r = guestfs_umount_local_argv (g, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_upload)
{
  zval *z_g;
  guestfs_h *g;
  char *filename;
  guestfs_string_length filename_size;
  char *remotefilename;
  guestfs_string_length remotefilename_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &filename, &filename_size, &remotefilename, &remotefilename_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: upload: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (remotefilename) != remotefilename_size) {
    fprintf (stderr, "libguestfs: upload: parameter 'remotefilename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_upload (g, filename, remotefilename);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_upload_offset)
{
  zval *z_g;
  guestfs_h *g;
  char *filename;
  guestfs_string_length filename_size;
  char *remotefilename;
  guestfs_string_length remotefilename_size;
  long offset;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssl",
        &z_g, &filename, &filename_size, &remotefilename, &remotefilename_size, &offset) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: upload_offset: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (remotefilename) != remotefilename_size) {
    fprintf (stderr, "libguestfs: upload_offset: parameter 'remotefilename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_upload_offset (g, filename, remotefilename, offset);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_user_cancel)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_user_cancel (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_utimens)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  long atsecs;
  long atnsecs;
  long mtsecs;
  long mtnsecs;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsllll",
        &z_g, &path, &path_size, &atsecs, &atnsecs, &mtsecs, &mtnsecs) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: utimens: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_utimens (g, path, atsecs, atnsecs, mtsecs, mtnsecs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_utsname)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  struct guestfs_utsname *r;
  r = guestfs_utsname (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  guestfs_add_assoc_string (return_value, "uts_sysname", r->uts_sysname, 1);
  guestfs_add_assoc_string (return_value, "uts_release", r->uts_release, 1);
  guestfs_add_assoc_string (return_value, "uts_version", r->uts_version, 1);
  guestfs_add_assoc_string (return_value, "uts_machine", r->uts_machine, 1);
  guestfs_free_utsname (r);
}

PHP_FUNCTION (guestfs_version)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  struct guestfs_version *r;
  r = guestfs_version (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  add_assoc_long (return_value, "major", r->major);
  add_assoc_long (return_value, "minor", r->minor);
  add_assoc_long (return_value, "release", r->release);
  guestfs_add_assoc_string (return_value, "extra", r->extra, 1);
  guestfs_free_version (r);
}

PHP_FUNCTION (guestfs_vfs_label)
{
  zval *z_g;
  guestfs_h *g;
  char *mountable;
  guestfs_string_length mountable_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &mountable, &mountable_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (mountable) != mountable_size) {
    fprintf (stderr, "libguestfs: vfs_label: parameter 'mountable' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_vfs_label (g, mountable);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_vfs_minimum_size)
{
  zval *z_g;
  guestfs_h *g;
  char *mountable;
  guestfs_string_length mountable_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &mountable, &mountable_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (mountable) != mountable_size) {
    fprintf (stderr, "libguestfs: vfs_minimum_size: parameter 'mountable' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int64_t r;
  r = guestfs_vfs_minimum_size (g, mountable);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_vfs_type)
{
  zval *z_g;
  guestfs_h *g;
  char *mountable;
  guestfs_string_length mountable_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &mountable, &mountable_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (mountable) != mountable_size) {
    fprintf (stderr, "libguestfs: vfs_type: parameter 'mountable' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_vfs_type (g, mountable);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_vfs_uuid)
{
  zval *z_g;
  guestfs_h *g;
  char *mountable;
  guestfs_string_length mountable_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &mountable, &mountable_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (mountable) != mountable_size) {
    fprintf (stderr, "libguestfs: vfs_uuid: parameter 'mountable' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_vfs_uuid (g, mountable);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_vg_activate)
{
  zval *z_g;
  guestfs_h *g;
  zend_bool activate;
  zval *z_volgroups;
  char **volgroups;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rba",
        &z_g, &activate, &z_volgroups) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  volgroups = get_stringlist (z_volgroups);

  int r;
  r = guestfs_vg_activate (g, activate, volgroups);

  guestfs_efree_stringlist (volgroups);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_vg_activate_all)
{
  zval *z_g;
  guestfs_h *g;
  zend_bool activate;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rb",
        &z_g, &activate) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_vg_activate_all (g, activate);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_vgchange_uuid)
{
  zval *z_g;
  guestfs_h *g;
  char *vg;
  guestfs_string_length vg_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &vg, &vg_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (vg) != vg_size) {
    fprintf (stderr, "libguestfs: vgchange_uuid: parameter 'vg' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_vgchange_uuid (g, vg);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_vgchange_uuid_all)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_vgchange_uuid_all (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_vgcreate)
{
  zval *z_g;
  guestfs_h *g;
  char *volgroup;
  guestfs_string_length volgroup_size;
  zval *z_physvols;
  char **physvols;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rsa",
        &z_g, &volgroup, &volgroup_size, &z_physvols) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (volgroup) != volgroup_size) {
    fprintf (stderr, "libguestfs: vgcreate: parameter 'volgroup' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  physvols = get_stringlist (z_physvols);

  int r;
  r = guestfs_vgcreate (g, volgroup, physvols);

  guestfs_efree_stringlist (physvols);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_vglvuuids)
{
  zval *z_g;
  guestfs_h *g;
  char *vgname;
  guestfs_string_length vgname_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &vgname, &vgname_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (vgname) != vgname_size) {
    fprintf (stderr, "libguestfs: vglvuuids: parameter 'vgname' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_vglvuuids (g, vgname);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_vgmeta)
{
  zval *z_g;
  guestfs_h *g;
  char *vgname;
  guestfs_string_length vgname_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &vgname, &vgname_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (vgname) != vgname_size) {
    fprintf (stderr, "libguestfs: vgmeta: parameter 'vgname' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  size_t size;
  r = guestfs_vgmeta (g, vgname, &size);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrndup (r, size);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_vgpvuuids)
{
  zval *z_g;
  guestfs_h *g;
  char *vgname;
  guestfs_string_length vgname_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &vgname, &vgname_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (vgname) != vgname_size) {
    fprintf (stderr, "libguestfs: vgpvuuids: parameter 'vgname' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_vgpvuuids (g, vgname);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_vgremove)
{
  zval *z_g;
  guestfs_h *g;
  char *vgname;
  guestfs_string_length vgname_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &vgname, &vgname_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (vgname) != vgname_size) {
    fprintf (stderr, "libguestfs: vgremove: parameter 'vgname' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_vgremove (g, vgname);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_vgrename)
{
  zval *z_g;
  guestfs_h *g;
  char *volgroup;
  guestfs_string_length volgroup_size;
  char *newvolgroup;
  guestfs_string_length newvolgroup_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &volgroup, &volgroup_size, &newvolgroup, &newvolgroup_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (volgroup) != volgroup_size) {
    fprintf (stderr, "libguestfs: vgrename: parameter 'volgroup' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (newvolgroup) != newvolgroup_size) {
    fprintf (stderr, "libguestfs: vgrename: parameter 'newvolgroup' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_vgrename (g, volgroup, newvolgroup);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_vgs)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_vgs (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_vgs_full)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  struct guestfs_lvm_vg_list *r;
  r = guestfs_vgs_full (g);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    guestfs_add_assoc_string (z_elem, "vg_name", r->val[c].vg_name, 1);
    guestfs_add_assoc_stringl (z_elem, "vg_uuid", r->val[c].vg_uuid, 32, 1);
    guestfs_add_assoc_string (z_elem, "vg_fmt", r->val[c].vg_fmt, 1);
    guestfs_add_assoc_string (z_elem, "vg_attr", r->val[c].vg_attr, 1);
    add_assoc_long (z_elem, "vg_size", r->val[c].vg_size);
    add_assoc_long (z_elem, "vg_free", r->val[c].vg_free);
    guestfs_add_assoc_string (z_elem, "vg_sysid", r->val[c].vg_sysid, 1);
    add_assoc_long (z_elem, "vg_extent_size", r->val[c].vg_extent_size);
    add_assoc_long (z_elem, "vg_extent_count", r->val[c].vg_extent_count);
    add_assoc_long (z_elem, "vg_free_count", r->val[c].vg_free_count);
    add_assoc_long (z_elem, "max_lv", r->val[c].max_lv);
    add_assoc_long (z_elem, "max_pv", r->val[c].max_pv);
    add_assoc_long (z_elem, "pv_count", r->val[c].pv_count);
    add_assoc_long (z_elem, "lv_count", r->val[c].lv_count);
    add_assoc_long (z_elem, "snap_count", r->val[c].snap_count);
    add_assoc_long (z_elem, "vg_seqno", r->val[c].vg_seqno);
    guestfs_add_assoc_string (z_elem, "vg_tags", r->val[c].vg_tags, 1);
    add_assoc_long (z_elem, "vg_mda_count", r->val[c].vg_mda_count);
    add_assoc_long (z_elem, "vg_mda_free", r->val[c].vg_mda_free);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_lvm_vg_list (r);
}

PHP_FUNCTION (guestfs_vgscan)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_vgscan (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_vguuid)
{
  zval *z_g;
  guestfs_h *g;
  char *vgname;
  guestfs_string_length vgname_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &vgname, &vgname_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (vgname) != vgname_size) {
    fprintf (stderr, "libguestfs: vguuid: parameter 'vgname' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_vguuid (g, vgname);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_wait_ready)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_wait_ready (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_wc_c)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: wc_c: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_wc_c (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_wc_l)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: wc_l: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_wc_l (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_wc_w)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: wc_w: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_wc_w (g, path);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_wipefs)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: wipefs: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_wipefs (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_write)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  char *content;
  guestfs_string_length content_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &path, &path_size, &content, &content_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: write: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_write (g, path, content, content_size);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_write_append)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  char *content;
  guestfs_string_length content_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &path, &path_size, &content, &content_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: write_append: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_write_append (g, path, content, content_size);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_write_file)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  char *content;
  guestfs_string_length content_size;
  long size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rssl",
        &z_g, &path, &path_size, &content, &content_size, &size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: write_file: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (content) != content_size) {
    fprintf (stderr, "libguestfs: write_file: parameter 'content' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_write_file (g, path, content, size);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_xfs_admin)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  struct guestfs_xfs_admin_argv optargs_s = { .bitmask = 0 };
  struct guestfs_xfs_admin_argv *optargs = &optargs_s;
  zend_bool optargs_t_extunwritten = -1;
  zend_bool optargs_t_imgfile = -1;
  zend_bool optargs_t_v2log = -1;
  zend_bool optargs_t_projid32bit = -1;
  zend_bool optargs_t_lazycounter = -1;
  char *optargs_t_label = NULL;
  guestfs_string_length optargs_t_label_size = -1;
  char *optargs_t_uuid = NULL;
  guestfs_string_length optargs_t_uuid_size = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|bbbbbss",
        &z_g, &device, &device_size, &optargs_t_extunwritten, &optargs_t_imgfile, &optargs_t_v2log, &optargs_t_projid32bit, &optargs_t_lazycounter, &optargs_t_label, &optargs_t_label_size, &optargs_t_uuid, &optargs_t_uuid_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: xfs_admin: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_extunwritten != (zend_bool)-1) {
    optargs_s.extunwritten = optargs_t_extunwritten;
    optargs_s.bitmask |= GUESTFS_XFS_ADMIN_EXTUNWRITTEN_BITMASK;
  }
  if (optargs_t_imgfile != (zend_bool)-1) {
    optargs_s.imgfile = optargs_t_imgfile;
    optargs_s.bitmask |= GUESTFS_XFS_ADMIN_IMGFILE_BITMASK;
  }
  if (optargs_t_v2log != (zend_bool)-1) {
    optargs_s.v2log = optargs_t_v2log;
    optargs_s.bitmask |= GUESTFS_XFS_ADMIN_V2LOG_BITMASK;
  }
  if (optargs_t_projid32bit != (zend_bool)-1) {
    optargs_s.projid32bit = optargs_t_projid32bit;
    optargs_s.bitmask |= GUESTFS_XFS_ADMIN_PROJID32BIT_BITMASK;
  }
  if (optargs_t_lazycounter != (zend_bool)-1) {
    optargs_s.lazycounter = optargs_t_lazycounter;
    optargs_s.bitmask |= GUESTFS_XFS_ADMIN_LAZYCOUNTER_BITMASK;
  }
  if (optargs_t_label != NULL) {
    optargs_s.label = optargs_t_label;
    optargs_s.bitmask |= GUESTFS_XFS_ADMIN_LABEL_BITMASK;
  }
  if (optargs_t_uuid != NULL) {
    optargs_s.uuid = optargs_t_uuid;
    optargs_s.bitmask |= GUESTFS_XFS_ADMIN_UUID_BITMASK;
  }

  int r;
  r = guestfs_xfs_admin_argv (g, device, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_xfs_growfs)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;
  struct guestfs_xfs_growfs_argv optargs_s = { .bitmask = 0 };
  struct guestfs_xfs_growfs_argv *optargs = &optargs_s;
  zend_bool optargs_t_datasec = -1;
  zend_bool optargs_t_logsec = -1;
  zend_bool optargs_t_rtsec = -1;
  long optargs_t_datasize = -1;
  long optargs_t_logsize = -1;
  long optargs_t_rtsize = -1;
  long optargs_t_rtextsize = -1;
  long optargs_t_maxpct = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|bbblllll",
        &z_g, &path, &path_size, &optargs_t_datasec, &optargs_t_logsec, &optargs_t_rtsec, &optargs_t_datasize, &optargs_t_logsize, &optargs_t_rtsize, &optargs_t_rtextsize, &optargs_t_maxpct) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: xfs_growfs: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_datasec != (zend_bool)-1) {
    optargs_s.datasec = optargs_t_datasec;
    optargs_s.bitmask |= GUESTFS_XFS_GROWFS_DATASEC_BITMASK;
  }
  if (optargs_t_logsec != (zend_bool)-1) {
    optargs_s.logsec = optargs_t_logsec;
    optargs_s.bitmask |= GUESTFS_XFS_GROWFS_LOGSEC_BITMASK;
  }
  if (optargs_t_rtsec != (zend_bool)-1) {
    optargs_s.rtsec = optargs_t_rtsec;
    optargs_s.bitmask |= GUESTFS_XFS_GROWFS_RTSEC_BITMASK;
  }
  if (optargs_t_datasize != -1) {
    optargs_s.datasize = optargs_t_datasize;
    optargs_s.bitmask |= GUESTFS_XFS_GROWFS_DATASIZE_BITMASK;
  }
  if (optargs_t_logsize != -1) {
    optargs_s.logsize = optargs_t_logsize;
    optargs_s.bitmask |= GUESTFS_XFS_GROWFS_LOGSIZE_BITMASK;
  }
  if (optargs_t_rtsize != -1) {
    optargs_s.rtsize = optargs_t_rtsize;
    optargs_s.bitmask |= GUESTFS_XFS_GROWFS_RTSIZE_BITMASK;
  }
  if (optargs_t_rtextsize != -1) {
    optargs_s.rtextsize = optargs_t_rtextsize;
    optargs_s.bitmask |= GUESTFS_XFS_GROWFS_RTEXTSIZE_BITMASK;
  }
  if (optargs_t_maxpct != -1) {
    optargs_s.maxpct = optargs_t_maxpct;
    optargs_s.bitmask |= GUESTFS_XFS_GROWFS_MAXPCT_BITMASK;
  }

  int r;
  r = guestfs_xfs_growfs_argv (g, path, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_xfs_info)
{
  zval *z_g;
  guestfs_h *g;
  char *pathordevice;
  guestfs_string_length pathordevice_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &pathordevice, &pathordevice_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (pathordevice) != pathordevice_size) {
    fprintf (stderr, "libguestfs: xfs_info: parameter 'pathordevice' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_xfsinfo *r;
  r = guestfs_xfs_info (g, pathordevice);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  guestfs_add_assoc_string (return_value, "xfs_mntpoint", r->xfs_mntpoint, 1);
  add_assoc_long (return_value, "xfs_inodesize", r->xfs_inodesize);
  add_assoc_long (return_value, "xfs_agcount", r->xfs_agcount);
  add_assoc_long (return_value, "xfs_agsize", r->xfs_agsize);
  add_assoc_long (return_value, "xfs_sectsize", r->xfs_sectsize);
  add_assoc_long (return_value, "xfs_attr", r->xfs_attr);
  add_assoc_long (return_value, "xfs_blocksize", r->xfs_blocksize);
  add_assoc_long (return_value, "xfs_datablocks", r->xfs_datablocks);
  add_assoc_long (return_value, "xfs_imaxpct", r->xfs_imaxpct);
  add_assoc_long (return_value, "xfs_sunit", r->xfs_sunit);
  add_assoc_long (return_value, "xfs_swidth", r->xfs_swidth);
  add_assoc_long (return_value, "xfs_dirversion", r->xfs_dirversion);
  add_assoc_long (return_value, "xfs_dirblocksize", r->xfs_dirblocksize);
  add_assoc_long (return_value, "xfs_cimode", r->xfs_cimode);
  guestfs_add_assoc_string (return_value, "xfs_logname", r->xfs_logname, 1);
  add_assoc_long (return_value, "xfs_logblocksize", r->xfs_logblocksize);
  add_assoc_long (return_value, "xfs_logblocks", r->xfs_logblocks);
  add_assoc_long (return_value, "xfs_logversion", r->xfs_logversion);
  add_assoc_long (return_value, "xfs_logsectsize", r->xfs_logsectsize);
  add_assoc_long (return_value, "xfs_logsunit", r->xfs_logsunit);
  add_assoc_long (return_value, "xfs_lazycount", r->xfs_lazycount);
  guestfs_add_assoc_string (return_value, "xfs_rtname", r->xfs_rtname, 1);
  add_assoc_long (return_value, "xfs_rtextsize", r->xfs_rtextsize);
  add_assoc_long (return_value, "xfs_rtblocks", r->xfs_rtblocks);
  add_assoc_long (return_value, "xfs_rtextents", r->xfs_rtextents);
  guestfs_free_xfsinfo (r);
}

PHP_FUNCTION (guestfs_xfs_repair)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;
  struct guestfs_xfs_repair_argv optargs_s = { .bitmask = 0 };
  struct guestfs_xfs_repair_argv *optargs = &optargs_s;
  zend_bool optargs_t_forcelogzero = -1;
  zend_bool optargs_t_nomodify = -1;
  zend_bool optargs_t_noprefetch = -1;
  zend_bool optargs_t_forcegeometry = -1;
  long optargs_t_maxmem = -1;
  long optargs_t_ihashsize = -1;
  long optargs_t_bhashsize = -1;
  long optargs_t_agstride = -1;
  char *optargs_t_logdev = NULL;
  guestfs_string_length optargs_t_logdev_size = -1;
  char *optargs_t_rtdev = NULL;
  guestfs_string_length optargs_t_rtdev_size = -1;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs|bbbbllllss",
        &z_g, &device, &device_size, &optargs_t_forcelogzero, &optargs_t_nomodify, &optargs_t_noprefetch, &optargs_t_forcegeometry, &optargs_t_maxmem, &optargs_t_ihashsize, &optargs_t_bhashsize, &optargs_t_agstride, &optargs_t_logdev, &optargs_t_logdev_size, &optargs_t_rtdev, &optargs_t_rtdev_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: xfs_repair: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (optargs_t_forcelogzero != (zend_bool)-1) {
    optargs_s.forcelogzero = optargs_t_forcelogzero;
    optargs_s.bitmask |= GUESTFS_XFS_REPAIR_FORCELOGZERO_BITMASK;
  }
  if (optargs_t_nomodify != (zend_bool)-1) {
    optargs_s.nomodify = optargs_t_nomodify;
    optargs_s.bitmask |= GUESTFS_XFS_REPAIR_NOMODIFY_BITMASK;
  }
  if (optargs_t_noprefetch != (zend_bool)-1) {
    optargs_s.noprefetch = optargs_t_noprefetch;
    optargs_s.bitmask |= GUESTFS_XFS_REPAIR_NOPREFETCH_BITMASK;
  }
  if (optargs_t_forcegeometry != (zend_bool)-1) {
    optargs_s.forcegeometry = optargs_t_forcegeometry;
    optargs_s.bitmask |= GUESTFS_XFS_REPAIR_FORCEGEOMETRY_BITMASK;
  }
  if (optargs_t_maxmem != -1) {
    optargs_s.maxmem = optargs_t_maxmem;
    optargs_s.bitmask |= GUESTFS_XFS_REPAIR_MAXMEM_BITMASK;
  }
  if (optargs_t_ihashsize != -1) {
    optargs_s.ihashsize = optargs_t_ihashsize;
    optargs_s.bitmask |= GUESTFS_XFS_REPAIR_IHASHSIZE_BITMASK;
  }
  if (optargs_t_bhashsize != -1) {
    optargs_s.bhashsize = optargs_t_bhashsize;
    optargs_s.bitmask |= GUESTFS_XFS_REPAIR_BHASHSIZE_BITMASK;
  }
  if (optargs_t_agstride != -1) {
    optargs_s.agstride = optargs_t_agstride;
    optargs_s.bitmask |= GUESTFS_XFS_REPAIR_AGSTRIDE_BITMASK;
  }
  if (optargs_t_logdev != NULL) {
    optargs_s.logdev = optargs_t_logdev;
    optargs_s.bitmask |= GUESTFS_XFS_REPAIR_LOGDEV_BITMASK;
  }
  if (optargs_t_rtdev != NULL) {
    optargs_s.rtdev = optargs_t_rtdev;
    optargs_s.bitmask |= GUESTFS_XFS_REPAIR_RTDEV_BITMASK;
  }

  int r;
  r = guestfs_xfs_repair_argv (g, device, optargs);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_LONG (r);
}

PHP_FUNCTION (guestfs_yara_destroy)
{
  zval *z_g;
  guestfs_h *g;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "r",
        &z_g) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  int r;
  r = guestfs_yara_destroy (g);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_yara_load)
{
  zval *z_g;
  guestfs_h *g;
  char *filename;
  guestfs_string_length filename_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &filename, &filename_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (filename) != filename_size) {
    fprintf (stderr, "libguestfs: yara_load: parameter 'filename' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_yara_load (g, filename);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_yara_scan)
{
  zval *z_g;
  guestfs_h *g;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: yara_scan: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  struct guestfs_yara_detection_list *r;
  r = guestfs_yara_scan (g, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  array_init (return_value);
  size_t c = 0;
  for (c = 0; c < r->len; ++c) {
#if ZEND_MODULE_API_NO >= 20151012
    zval elem;
    zval *z_elem = &elem;
#else
    zval *z_elem;
    ALLOC_INIT_ZVAL (z_elem);
#endif
    array_init (z_elem);
    guestfs_add_assoc_string (z_elem, "yara_name", r->val[c].yara_name, 1);
    guestfs_add_assoc_string (z_elem, "yara_rule", r->val[c].yara_rule, 1);
    add_next_index_zval (return_value, z_elem);
  }
  guestfs_free_yara_detection_list (r);
}

PHP_FUNCTION (guestfs_zegrep)
{
  zval *z_g;
  guestfs_h *g;
  char *regex;
  guestfs_string_length regex_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &regex, &regex_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (regex) != regex_size) {
    fprintf (stderr, "libguestfs: zegrep: parameter 'regex' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: zegrep: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_zegrep (g, regex, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_zegrepi)
{
  zval *z_g;
  guestfs_h *g;
  char *regex;
  guestfs_string_length regex_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &regex, &regex_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (regex) != regex_size) {
    fprintf (stderr, "libguestfs: zegrepi: parameter 'regex' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: zegrepi: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_zegrepi (g, regex, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_zero)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: zero: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_zero (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_zero_device)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: zero_device: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_zero_device (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_zero_free_space)
{
  zval *z_g;
  guestfs_h *g;
  char *directory;
  guestfs_string_length directory_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &directory, &directory_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (directory) != directory_size) {
    fprintf (stderr, "libguestfs: zero_free_space: parameter 'directory' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_zero_free_space (g, directory);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_zerofree)
{
  zval *z_g;
  guestfs_h *g;
  char *device;
  guestfs_string_length device_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rs",
        &z_g, &device, &device_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (device) != device_size) {
    fprintf (stderr, "libguestfs: zerofree: parameter 'device' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  int r;
  r = guestfs_zerofree (g, device);

  if (r == -1) {
    RETURN_FALSE;
  }

  RETURN_TRUE;
}

PHP_FUNCTION (guestfs_zfgrep)
{
  zval *z_g;
  guestfs_h *g;
  char *pattern;
  guestfs_string_length pattern_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &pattern, &pattern_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (pattern) != pattern_size) {
    fprintf (stderr, "libguestfs: zfgrep: parameter 'pattern' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: zfgrep: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_zfgrep (g, pattern, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_zfgrepi)
{
  zval *z_g;
  guestfs_h *g;
  char *pattern;
  guestfs_string_length pattern_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &pattern, &pattern_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (pattern) != pattern_size) {
    fprintf (stderr, "libguestfs: zfgrepi: parameter 'pattern' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: zfgrepi: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_zfgrepi (g, pattern, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_zfile)
{
  zval *z_g;
  guestfs_h *g;
  char *meth;
  guestfs_string_length meth_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &meth, &meth_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (meth) != meth_size) {
    fprintf (stderr, "libguestfs: zfile: parameter 'meth' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: zfile: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char *r;
  r = guestfs_zfile (g, meth, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  char *r_copy = estrdup (r);
  free (r);
  GUESTFS_RETURN_STRING (r_copy, 0);
}

PHP_FUNCTION (guestfs_zgrep)
{
  zval *z_g;
  guestfs_h *g;
  char *regex;
  guestfs_string_length regex_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &regex, &regex_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (regex) != regex_size) {
    fprintf (stderr, "libguestfs: zgrep: parameter 'regex' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: zgrep: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_zgrep (g, regex, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

PHP_FUNCTION (guestfs_zgrepi)
{
  zval *z_g;
  guestfs_h *g;
  char *regex;
  guestfs_string_length regex_size;
  char *path;
  guestfs_string_length path_size;

  if (zend_parse_parameters (ZEND_NUM_ARGS() TSRMLS_CC, "rss",
        &z_g, &regex, &regex_size, &path, &path_size) == FAILURE) {
    RETURN_FALSE;
  }

  GUESTFS_ZEND_FETCH_RESOURCE (g, guestfs_h *, z_g,
                               PHP_GUESTFS_HANDLE_RES_NAME, res_guestfs_h);
  if (g == NULL) {
    RETURN_FALSE;
  }

  if (strlen (regex) != regex_size) {
    fprintf (stderr, "libguestfs: zgrepi: parameter 'regex' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  if (strlen (path) != path_size) {
    fprintf (stderr, "libguestfs: zgrepi: parameter 'path' contains embedded ASCII NUL.\n");
    RETURN_FALSE;
  }

  char **r;
  r = guestfs_zgrepi (g, regex, path);

  if (r == NULL) {
    RETURN_FALSE;
  }

  size_t c = 0;
  array_init (return_value);
  for (c = 0; r[c] != NULL; ++c) {
    guestfs_add_next_index_string (return_value, r[c], 1);
    free (r[c]);
  }
  free (r);
}

