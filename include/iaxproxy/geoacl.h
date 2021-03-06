/*
 * Asterisk -- An open source telephony toolkit.
 *
 * Copyright (C) 1999 - 2006, Digium, Inc.
 *
 * Mark Spencer <markster@digium.com>
 *
 * See http://www.iaxproxy.org for more information about
 * the Asterisk project. Please do not directly contact
 * any of the maintainers of this project for assistance;
 * the project provides a web site, mailing lists and IRC
 * channels for your use.
 *
 * This program is free software, distributed under the terms of
 * the GNU General Public License Version 2. See the LICENSE file
 * at the top of the source tree.
 */

/*! \file
 * \brief Access Control of various sorts
 */

#ifndef _ASTERISK_GEOACL_H
#define _ASTERISK_GEOACL_H


#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

#include "iaxproxy/network.h"
#include "iaxproxy/io.h"

#define AST_SENSE_DENY                  0
#define AST_SENSE_ALLOW                 1

/* Host based access control */

/*! \brief internal representation of acl entries
 * In principle user applications would have no need for this,
 * but there is sometimes a need to extract individual items,
 * e.g. to print them, and rather than defining iterators to
 * navigate the list, and an externally visible 'struct ast_ha_entry',
 * at least in the short term it is more convenient to make the whole
 * thing public and let users play with them.
 */

int geo_acl_check(struct sockaddr_in *sin, char *allowed_countries, char *peername);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif /* _ASTERISK_GEOACL_H */

