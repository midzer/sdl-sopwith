//
// Copyright(C) 1984-2000 David L. Clark
// Copyright(C) 2001-2005 Simon Howard
//
// This program is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2 of the License, or (at your
// option) any later version. This program is distributed in the hope that
// it will be useful, but WITHOUT ANY WARRANTY; without even the implied
// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//
//
// Sprites
//

#ifndef __SWSYMBOL_H__
#define __SWSYMBOL_H__

typedef struct sopsym_s sopsym_t;

#include "sw.h"

struct sopsym_s {
	unsigned char *data;
	int w, h;
};

extern sopsym_t *symbol_bomb[8];                 // swbmbsym
extern sopsym_t *symbol_targets[4];              // swtrgsym
extern sopsym_t *symbol_target_hit;              // swhtrsym
extern sopsym_t *symbol_debris[8];               // swexpsym
extern sopsym_t *symbol_flock[2];                // swflksym
extern sopsym_t *symbol_bird[2];                 // swbrdsym
extern sopsym_t *symbol_ox[2];                   // swoxsym
extern sopsym_t *symbol_shotwin;                 // swshtsym
extern sopsym_t *symbol_birdsplat;               // swsplsym
extern sopsym_t *symbol_missile[16];             // swmscsym
extern sopsym_t *symbol_burst[2];                // swbstsym
extern sopsym_t *symbol_plane[2][16];            // swplnsym
extern sopsym_t *symbol_plane_hit[2];            // swhitsym
extern sopsym_t *symbol_plane_win[4];            // swwinsym
extern sopsym_t *symbol_medal[3];		  // swmedalsym
extern sopsym_t *symbol_ribbon[6];		  // swribbonsym

extern sopsym_t symbol_pixel;

extern void symbol_generate(void);

#endif

//
// 2003-02-14: Code was checked into version control; no further entries
// will be added to this log.
//
// sdh 14/2/2003: change license header to GPL
// sdh 27/06/2002: move plane symbol headers here
// sdh 27/06/2002: add sopsym_t, sopsym_t sprite frame replacements
// sdh 21/10/2001: moved plane sprite constants into here from sw.h
// sdh 21/10/2001: added cvs tags
// sdh 19/10/2001: added header
//
