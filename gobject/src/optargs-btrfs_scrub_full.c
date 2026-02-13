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

#include <config.h>

#include "guestfs-gobject.h"

/**
 * SECTION:optargs-btrfs_scrub_full
 * @short_description: An object encapsulating optional arguments for guestfs_session_btrfs_scrub_full
 * @include: guestfs-gobject.h
 *
 An object encapsulating optional arguments for guestfs_session_btrfs_scrub_full
 */

#include <string.h>

struct _GuestfsBTRFSScrubFullPrivate {
  GuestfsTristate readonly;
};

G_DEFINE_TYPE_WITH_CODE (GuestfsBTRFSScrubFull, guestfs_btrfs_scrub_full, G_TYPE_OBJECT,
                         G_ADD_PRIVATE (GuestfsBTRFSScrubFull));

enum {
  PROP_GUESTFS_BTRFS_SCRUB_FULL_PROP0,
  PROP_GUESTFS_BTRFS_SCRUB_FULL_READONLY
};

static void
guestfs_btrfs_scrub_full_set_property(GObject *object, guint property_id, const GValue *value, GParamSpec *pspec)
{
  GuestfsBTRFSScrubFull *self = GUESTFS_BTRFS_SCRUB_FULL (object);
  GuestfsBTRFSScrubFullPrivate *priv = self->priv;

  switch (property_id) {
    case PROP_GUESTFS_BTRFS_SCRUB_FULL_READONLY:
      priv->readonly = g_value_get_enum (value);
      break;

    default:
      /* Invalid property */
      G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
  }
}

static void
guestfs_btrfs_scrub_full_get_property(GObject *object, guint property_id, GValue *value, GParamSpec *pspec)
{
  GuestfsBTRFSScrubFull *self = GUESTFS_BTRFS_SCRUB_FULL (object);
  GuestfsBTRFSScrubFullPrivate *priv = self->priv;

  switch (property_id) {
    case PROP_GUESTFS_BTRFS_SCRUB_FULL_READONLY:
      g_value_set_enum (value, priv->readonly);
      break;

    default:
      /* Invalid property */
      G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
  }
}

static void
guestfs_btrfs_scrub_full_finalize (GObject *object)
{
  G_OBJECT_CLASS (guestfs_btrfs_scrub_full_parent_class)->finalize (object);
}

static void
guestfs_btrfs_scrub_full_class_init (GuestfsBTRFSScrubFullClass *klass)
{
  GObjectClass *object_class = G_OBJECT_CLASS (klass);
  object_class->set_property = guestfs_btrfs_scrub_full_set_property;
  object_class->get_property = guestfs_btrfs_scrub_full_get_property;

  /**
   * GuestfsBTRFSScrubFull:readonly:
   *
   * A boolean.
   */
  g_object_class_install_property (
    object_class,
    PROP_GUESTFS_BTRFS_SCRUB_FULL_READONLY,
    g_param_spec_enum (
      "readonly",
      "readonly",
      "A boolean.",
      GUESTFS_TYPE_TRISTATE, GUESTFS_TRISTATE_NONE,
      G_PARAM_CONSTRUCT | G_PARAM_READWRITE | G_PARAM_STATIC_STRINGS
    )
  );

  object_class->finalize = guestfs_btrfs_scrub_full_finalize;
}

static void
guestfs_btrfs_scrub_full_init (GuestfsBTRFSScrubFull *o)
{
  o->priv = guestfs_btrfs_scrub_full_get_instance_private (o);
  /* XXX: Find out if gobject already zeroes private structs */
  memset (o->priv, 0, sizeof (GuestfsBTRFSScrubFullPrivate));
}

/**
 * guestfs_btrfs_scrub_full_new:
 *
 * Create a new GuestfsBTRFSScrubFull object
 *
 * Returns: (transfer full): a new GuestfsBTRFSScrubFull object
 */
GuestfsBTRFSScrubFull *
guestfs_btrfs_scrub_full_new (void)
{
  return GUESTFS_BTRFS_SCRUB_FULL (g_object_new (GUESTFS_TYPE_BTRFS_SCRUB_FULL, NULL));
}
