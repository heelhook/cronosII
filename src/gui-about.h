/*  Cronos II  gui-about.h
 *  Copyright (C) 2000-2001 Pablo Fern�ndez Navarro
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
#ifndef ABOUT_H
#define ABOUT_H

#ifdef __cplusplus
extern "C" {
#endif

#if HAVE_CONFIG_H
#  include <config.h>
#else
#  include <cronosII.h>
#endif
  
void gui_about_new (void);

#ifdef __cplusplus
}
#endif

#endif
