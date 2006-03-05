/***************************************************************************
 *            repolist.h
 *
 *  Sun Mar 20 12:00:25 2005
 *  Copyright  2005 - 2006  Coviello Giuseppe
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

struct repolist {
	char name[255];
	char path[255];
	struct repolist *next;
};

struct repolist *repolist_add(char *name, char *path, struct repolist *r);
struct repolist *repolist_find(char *param, struct repolist *r);
int repolist_exists(char *param, struct repolist *r);
