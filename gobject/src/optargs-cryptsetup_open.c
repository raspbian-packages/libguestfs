/* libguestfs generated file
 * WARNING: THIS FILE IS GENERATED FROM THE FOLLOWING FILES:
 *          generator/gobject.ml
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

#include "guestfs-gobject.h"

/**
 * SECTION:optargs-cryptsetup_open
 * @short_description: An object encapsulating optional arguments for guestfs_session_cryptsetup_open
 * @include: guestfs-gobject.h
 *
 An object encapsulating optional arguments for guestfs_session_cryptsetup_open
 */

#include <string.h>

struct _GuestfsCryptsetupOpenPrivate {
  GuestfsTristate readonly;
  gchar *crypttype;
};

G_DEFINE_TYPE_WITH_CODE (GuestfsCryptsetupOpen, guestfs_cryptsetup_open, G_TYPE_OBJECT,
                         G_ADD_PRIVATE (GuestfsCryptsetupOpen));

enum {
  PROP_GUESTFS_CRYPTSETUP_OPEN_PROP0,
  PROP_GUESTFS_CRYPTSETUP_OPEN_READONLY,
  PROP_GUESTFS_CRYPTSETUP_OPEN_CRYPTTYPE
};

static void
guestfs_cryptsetup_open_set_property(GObject *object, guint property_id, const GValue *value, GParamSpec *pspec)
{
  GuestfsCryptsetupOpen *self = GUESTFS_CRYPTSETUP_OPEN (object);
  GuestfsCryptsetupOpenPrivate *priv = self->priv;

  switch (property_id) {
    case PROP_GUESTFS_CRYPTSETUP_OPEN_READONLY:
      priv->readonly = g_value_get_enum (value);
      break;

    case PROP_GUESTFS_CRYPTSETUP_OPEN_CRYPTTYPE:
      g_free (priv->crypttype);
      priv->crypttype = g_value_dup_string (value);
      break;

    default:
      /* Invalid property */
      G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
  }
}

static void
guestfs_cryptsetup_open_get_property(GObject *object, guint property_id, GValue *value, GParamSpec *pspec)
{
  GuestfsCryptsetupOpen *self = GUESTFS_CRYPTSETUP_OPEN (object);
  GuestfsCryptsetupOpenPrivate *priv = self->priv;

  switch (property_id) {
    case PROP_GUESTFS_CRYPTSETUP_OPEN_READONLY:
      g_value_set_enum (value, priv->readonly);
      break;

    case PROP_GUESTFS_CRYPTSETUP_OPEN_CRYPTTYPE:
      g_value_set_string (value, priv->crypttype);
      break;

    default:
      /* Invalid property */
      G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
  }
}

static void
guestfs_cryptsetup_open_finalize (GObject *object)
{
  GuestfsCryptsetupOpen *self = GUESTFS_CRYPTSETUP_OPEN (object);
  GuestfsCryptsetupOpenPrivate *priv = self->priv;

  g_free (priv->crypttype);
  G_OBJECT_CLASS (guestfs_cryptsetup_open_parent_class)->finalize (object);
}

static void
guestfs_cryptsetup_open_class_init (GuestfsCryptsetupOpenClass *klass)
{
  GObjectClass *object_class = G_OBJECT_CLASS (klass);
  object_class->set_property = guestfs_cryptsetup_open_set_property;
  object_class->get_property = guestfs_cryptsetup_open_get_property;

  /**
   * GuestfsCryptsetupOpen:readonly:
   *
   * A boolean.
   */
  g_object_class_install_property (
    object_class,
    PROP_GUESTFS_CRYPTSETUP_OPEN_READONLY,
    g_param_spec_enum (
      "readonly",
      "readonly",
      "A boolean.",
      GUESTFS_TYPE_TRISTATE, GUESTFS_TRISTATE_NONE,
      G_PARAM_CONSTRUCT | G_PARAM_READWRITE | G_PARAM_STATIC_STRINGS
    )
  );

  /**
   * GuestfsCryptsetupOpen:crypttype:
   *
   * A string.
   */
  g_object_class_install_property (
    object_class,
    PROP_GUESTFS_CRYPTSETUP_OPEN_CRYPTTYPE,
    g_param_spec_string (
      "crypttype",
      "crypttype",
      "A string.",
      NULL,
      G_PARAM_CONSTRUCT | G_PARAM_READWRITE | G_PARAM_STATIC_STRINGS
    )
  );

  object_class->finalize = guestfs_cryptsetup_open_finalize;
}

static void
guestfs_cryptsetup_open_init (GuestfsCryptsetupOpen *o)
{
  o->priv = guestfs_cryptsetup_open_get_instance_private (o);
  /* XXX: Find out if gobject already zeroes private structs */
  memset (o->priv, 0, sizeof (GuestfsCryptsetupOpenPrivate));
}

/**
 * guestfs_cryptsetup_open_new:
 *
 * Create a new GuestfsCryptsetupOpen object
 *
 * Returns: (transfer full): a new GuestfsCryptsetupOpen object
 */
GuestfsCryptsetupOpen *
guestfs_cryptsetup_open_new (void)
{
  return GUESTFS_CRYPTSETUP_OPEN (g_object_new (GUESTFS_TYPE_CRYPTSETUP_OPEN, NULL));
}
