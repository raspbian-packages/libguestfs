/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM THE FOLLOWING FILES:
 *          generator/gobject.ml
 *          and from the code in the generator/ subdirectory.
 * ANY CHANGES YOU MAKE TO THIS FILE WILL BE LOST.
 *
 * Copyright (C) 2009-2025 Red Hat Inc.
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

#ifndef GUESTFS_GOBJECT_OPTARGS_SETFILES_H__
#define GUESTFS_GOBJECT_OPTARGS_SETFILES_H__

#include <glib-object.h>
#include <gio/gio.h>

#include <guestfs-gobject.h>

G_BEGIN_DECLS

#define GUESTFS_TYPE_SETFILES (guestfs_setfiles_get_type ())
#define GUESTFS_SETFILES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GUESTFS_TYPE_SETFILES, GuestfsSetfiles))
#define GUESTFS_SETFILES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GUESTFS_TYPE_SETFILES, GuestfsSetfilesClass))
#define GUESTFS_IS_SETFILES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((klass), GUESTFS_TYPE_SETFILES))
#define GUESTFS_IS_SETFILES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GUESTFS_TYPE_SETFILES))
#define GUESTFS_SETFILES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GUESTFS_TYPE_SETFILES, GuestfsSetfilesClass))

typedef struct _GuestfsSetfilesPrivate GuestfsSetfilesPrivate;

/**
 * GuestfsSetfiles:
 *
 * An object encapsulating optional arguments for guestfs_session_setfiles.
 */
typedef struct _GuestfsSetfiles GuestfsSetfiles;
struct _GuestfsSetfiles {
  GObject parent;
  GuestfsSetfilesPrivate *priv;
};

/**
 * GuestfsSetfilesClass:
 * @parent_class: The superclass of GuestfsSetfilesClass
 *
 * A class metadata object for GuestfsSetfiles.
 */
typedef struct _GuestfsSetfilesClass GuestfsSetfilesClass;
struct _GuestfsSetfilesClass {
  GObjectClass parent_class;
};

GType guestfs_setfiles_get_type (void);
GuestfsSetfiles *guestfs_setfiles_new (void);

G_END_DECLS

#endif /* GUESTFS_GOBJECT_OPTARGS_SETFILES_H__ */
