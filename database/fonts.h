/*
 * fonts.h --
 *
 * Vectored font definitions for the database module.
 * This file defines variables and procedures that are visible to clients
 * outside the database module.
 *
 * Copyright (C) 2008 OpenCircuitDesign, Inc.
 *
 * rcsid "$$"
 */

#ifndef FONTS_H
#define	FONTS_H

#include "tiles/tile.h"

/* ---------------------------- Fonts --------------------------------- */

typedef struct fontchar *FontCharPtr;
typedef struct fontchar
{
    short        fc_numpoints;
    Point       *fc_points;
    FontCharPtr  fc_next;
} FontChar;
 
typedef struct
{
    char     *mf_name;
    Rect      mf_extents;	/* Character extents (max bbox) */
    FontChar *mf_vectors[96];	/* ASCII characters 32 through 126 */
    Point     mf_offset[96];	/* Vector offset to next character */
    Rect      mf_bbox[96];	/* Character bounding boxes */
} MagicFont;

extern MagicFont **DBFontList;	/* List of loaded font vectors	*/
extern int DBNumFonts;		/* Number of loaded fonts	*/

#endif /* FONTS_H */
