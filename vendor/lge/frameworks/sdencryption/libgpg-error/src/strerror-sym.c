/* strerror-sym.c - Describing an error code with its symbol name.
   Copyright (C) 2003, 2004 g10 Code GmbH

   This file is part of libgpg-error.

   libgpg-error is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public License
   as published by the Free Software Foundation; either version 2.1 of
   the License, or (at your option) any later version.
 
   libgpg-error is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
 
   You should have received a copy of the GNU Lesser General Public
   License along with libgpg-error; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
   02111-1307, USA.  */

#if HAVE_CONFIG_H
#include <config.h>
#endif

#include <stddef.h>

#include <gpg-error.h>

#include "err-codes-sym.h"
#include "errnos-sym.h"

/* Return a pointer to a string containing the name of the symbol of
   the error code in the error value ERR.  Returns NULL if the error
   code is not known.  */
const char *
gpg_strerror_sym (gpg_error_t err)
{
  gpg_err_code_t code = gpg_err_code (err);

  if (code & GPG_ERR_SYSTEM_ERROR)
    {
      int idx;

      code &= ~GPG_ERR_SYSTEM_ERROR;
      idx = errnos_msgidxof (code);
      if (idx >= 0)
    return errnos_msgstr + errnos_msgidx[idx];
      else
    return NULL;
    }

  if (msgidxof (code) == msgidxof (GPG_ERR_CODE_DIM))
    return NULL;

  return msgstr + msgidx[msgidxof (code)];
}
