/* ASE - Allegro Sprite Editor
 * Copyright (C) 2001-2009  David Capello
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
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef RASTER_BRUSH_H_INCLUDED
#define RASTER_BRUSH_H_INCLUDED

class Image;

enum {
  BRUSH_CIRCLE,
  BRUSH_SQUARE,
  BRUSH_LINE,
};

struct BrushScanline
{
  int state, x1, x2;
};

struct Brush
{
  int type;			/* type of brush */
  int size;			/* size (diameter) */
  int angle;			/* angle in degrees 0-360 */
  Image* image;			/* image of the brush */
  BrushScanline* scanline;
};

Brush* brush_new();
Brush* brush_new_copy(const Brush* brush);
void brush_free(Brush* brush);

void brush_set_type(Brush* brush, int type);
void brush_set_size(Brush* brush, int size);
void brush_set_angle(Brush* brush, int angle);

#endif

