/* libguestfs
 * Copyright (C) 2010-2017 Red Hat Inc.
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

/**
 * Find the UEFI firmware needed to boot the appliance.
 *
 * See also F<common/utils/uefi.c> (autogenerated file) containing the
 * firmware file locations.
 */

#include <config.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "guestfs.h"
#include "guestfs-internal.h"

/**
 * Return the location of firmware needed to boot the appliance.  This
 * is aarch64 only currently, since that's the only architecture where
 * UEFI is mandatory (and that only for RHEL).
 *
 * C<*code> is initialized with the path to the read-only UEFI code
 * file.  C<*vars> is initialized with the path to a copy of the UEFI
 * vars file (which is cleaned up automatically on exit).
 *
 * If C<*code> == C<*vars> == C<NULL> then no UEFI firmware is
 * available.
 *
 * C<*code> and C<*vars> should be freed by the caller.
 *
 * If the function returns C<-1> then there was a real error which
 * should cause appliance building to fail (no UEFI firmware is not an
 * error).
 *
 * See also F<v2v/utils.ml>:find_uefi_firmware
 */
int
guestfs_int_get_uefi (guestfs_h *g, char **code, char **vars, int *flags)
{
#ifdef __aarch64__
  size_t i;

  for (i = 0; guestfs_int_uefi_aarch64_firmware[i].code != NULL; ++i) {
    const char *codefile = guestfs_int_uefi_aarch64_firmware[i].code;
    const char *code_debug_file =
      guestfs_int_uefi_aarch64_firmware[i].code_debug;
    const char *varsfile = guestfs_int_uefi_aarch64_firmware[i].vars;

    if (access (codefile, R_OK) == 0 && access (varsfile, R_OK) == 0) {
      CLEANUP_CMD_CLOSE struct command *copycmd = guestfs_int_new_command (g);
      char *varst;
      int r;

      /* Make a copy of NVRAM variables file.  You can't just map it
       * into the address space read-only as that triggers a different
       * path inside UEFI.
       */
      varst = guestfs_int_make_temp_path (g, "vars", "fd");
      if (!varst)
        return -1;
      guestfs_int_cmd_add_arg (copycmd, "cp");
      guestfs_int_cmd_add_arg (copycmd, varsfile);
      guestfs_int_cmd_add_arg (copycmd, varst);
      r = guestfs_int_cmd_run (copycmd);
      if (r == -1 || !WIFEXITED (r) || WEXITSTATUS (r) != 0) {
        free (varst);
        return -1;
      }

      /* If debugging is enabled and we can find the code file with
       * debugging enabled, use that instead.
       */
      if (g->verbose && code_debug_file && access (code_debug_file, R_OK) == 0)
	codefile = code_debug_file;

      /* Caller frees. */
      *code = safe_strdup (g, codefile);
      *vars = varst;
      *flags = guestfs_int_uefi_aarch64_firmware[i].flags;
      return 0;
    }
  }
#endif

  /* Not found. */
  *code = *vars = NULL;
  *flags = 0;
  return 0;
}
