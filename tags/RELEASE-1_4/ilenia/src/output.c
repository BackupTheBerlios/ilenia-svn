/***************************************************************************
 *            output.c
 *
 *  Fri Jul 16 18:45:34 2004
 *  Copyright  2004 - 2005  Coviello Giuseppe
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

#include <stdio.h>
#include <string.h>
#include "manipola.h"
#include "db.h"
#include "../config.h"
#include "deplist.h"

void
print_db (struct db *p)
{
  char s[MASSIMO];
  //       33                                20                   20
  printf ("Package                           Version              Repository\n");
  while (p != NULL)
    {
      strcpy (s, mid(p->nome, 0, 33));
      strcat (s, spazi (33 - strlen (mid(p->nome, 0, 33))));
      strcat (s, " ");
      strcat (s, spazi (20 - strlen (mid(p->versione, 0, 20))));
      strcat (s, mid(p->versione, 0, 20));
      strcat (s, " ");
      strcat (s, mid(p->collezione, 0, 20));
      printf ("%s\n", s);
      p = p->prossimo;
    }
  printf ("\n");
}

void
aiuto ()
{
  printf ("usage: ilenia [options] [collections] [packages]\n");
  printf ("options:\n");
  printf ("\t-u, --update           update ports\n");
  printf ("\t-l, --list             list all ports, or only from specified repos\n");
  printf ("\t-s, --search           search for ports\n");
  printf ("\t-d, --diff             list version differences\n");
  printf
    ("\t-p, --updated          list ports with version newer than the installed ones\n");
  printf ("\t-D                     shows dependencies of any package\n");
  printf
    ("\t-U                     update package(s) and relatives dependencied\n");
  printf ("\t-T                     shows dependents of any package\n");
  printf
    ("\t-R                     remove package(s) checking if is needed by other packages\n");
  printf ("\t-v, --version          print version and exit\n");
  printf ("\t-h, --help             print help and exit\n");
  printf ("\t--no-favorite-repo     ignore the user's favorite repos\n");
  printf ("\t--no-favorite-version  ignore the user's favorite versions\n");
  printf
    ("\t--no-deps              do not check dependencies, install or remove only\n");
  printf
    ("\t--all                  shows or remove all dependents packages (sometime requires some minutes)\n");
  printf ("\t--cache                rebuild the cache\n");
  printf ("\t--repository-list    list repository that ilenia are using\n");
}

void
versione ()
{
  printf ("ilenia version %s\n", VERSION);
}
