/* 

nano_poly.h: A fork of Andres Schiffler's graphics primitives for SDL

	-- SDL2_gfxPrimitives.h: graphics primitives for SDL
	-- Copyright (C) 2012  Andreas Schiffler-- aschiffler@ferzkopp.net

Copyright (C) 2016 Ben Young

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must not
claim that you wrote the original software. If you use this software
in a product, an acknowledgment in the product documentation would be
appreciated but is not required.

2. Altered source versions must be plainly marked as such, and must not be
misrepresented as being the original software.

3. This notice may not be removed or altered from any source
distribution.

Ben Young -- computermouth@crunchbangplusplus.org

*/

#ifndef _NANO_POLY_H_
#define _NANO_POLY_H_

#include <math.h>
#include <SDL2/SDL.h>
#include "structs.h"

/* Set up for C function definitions, even when using C++ */
#ifdef __cplusplus
extern "C" {
#endif

	/* ----- Versioning */

#define _NANO_POLY_H_MAJOR	1
#define _NANO_POLY_H_MINOR	0
#define _NANO_POLY_H_MICRO	0


	/* ---- Function Prototypes */

#ifndef _NANO_POLY_H_SCOPE
#  define _NANO_POLY_H_SCOPE extern
#endif

	/* Note: all ___Color routines expect the color to be in format 0xRRGGBBAA */

	/* Filled Polygon */

	_NANO_POLY_H_SCOPE int filledPolygonRGBA(
		swindow* g_swindow,
		liner **lines, 
		short *diff, 
		const Sint16 * vx, 
		const Sint16 * vy, 
		int n, 
		Uint8 r, 
		Uint8 g, 
		Uint8 b, 
		Uint8 a);

	/* Ends C function definitions when using C++ */
#ifdef __cplusplus
}
#endif

#endif				/* _NANO_POLY_H_ */
