/***************************************************************************
 *            pkgutils.h
 *
 *  Wed Sep  1 19:06:24 2004
 *  Copyright  2004 - 2006  Coviello Giuseppe
 *  immigrant@email.it
 ****************************************************************************/

/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef _PKGUTILS_H
#define _PKGUTILS_H

#define NODEPS -1
int update_pkg(int options, char *name);
int update_system(int options);
int remove_pkg(char *name, int checkdeps, int all);

#endif				/* _PKGUTILS_H */
