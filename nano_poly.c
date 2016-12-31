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

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "nano_poly.h"
#include "window.h"
#include "structs.h"

int _gfxPrimitivesCompareInt(const void *a, const void *b)
{
	return (*(const int *) a) - (*(const int *) b);
}

int filledPolygonRGBA(swindow* g_swindow, liner **lines, 
	short *line_cnt, const Sint16 * vx, const Sint16 * vy, int n,
	Uint8 r, Uint8 g, Uint8 b, Uint8 a)
{
	
	int result;
	int i;
	int y, xa, xb;
	int miny, maxy;
	int x1, y1;
	int x2, y2;
	int ind1, ind2;
	int ints;
	int *gfxPrimitivesPolyInts = (int *) malloc(sizeof(int) * n);



	/*
	* sanity check 
	*/
	if (vx == NULL || vy == NULL || n < 3) {
		return (-1);
	}

	/*
	* Determine Y maxima 
	*/
	miny = vy[0];
	maxy = vy[0];
	for (i = 1; (i < n); i++) {
		if (vy[i] < miny) {
			miny = vy[i];
		} else if (vy[i] > maxy) {
			maxy = vy[i];
		}
	}

	/*
	* Draw, scanning y 
	*/
	result = 0;
	
	(*line_cnt) = 0;

	//wastefully get number of lines
	for (y = miny; (y <= maxy); y++) {
		ints = 0;
		for (i = 0; (i < n); i++) {
			if (!i) {
				ind1 = n - 1;
				ind2 = 0;
			} else {
				ind1 = i - 1;
				ind2 = i;
			}
			y1 = vy[ind1];
			y2 = vy[ind2];
			if (y1 < y2) {
			} else if (y1 > y2) {
				y2 = vy[ind1];
				y1 = vy[ind2];
			} else {
				continue;
			}
			if ( ((y >= y1) && (y < y2)) || 
				((y == maxy) && (y > y1) 
				&& (y <= y2)) ) {
				(*line_cnt)++;
			}
		}
	}
	
	
	(*line_cnt) /= 2;
	
	free(*lines);
	*lines = calloc((*line_cnt), sizeof(liner));
	
	if (g_swindow->lines_count != g_swindow->lines_max){
		g_swindow->lines_count++;
		(g_swindow->lines[g_swindow->lines_count]) = *lines;
	} else {
		g_swindow->lines_max+=128;
		printf("lines reached: %d", g_swindow->lines_max);
		liner **new_lines = (liner**) calloc(g_swindow->lines_max, sizeof(liner*));
		memcpy(new_lines, g_swindow->lines, (g_swindow->lines_max-128)*sizeof(liner*));
		destroy_polys(g_swindow);
		g_swindow->lines = new_lines;
	}
	
	(*line_cnt) = 0;
	
	for (y = miny; (y <= maxy); y++) {
		ints = 0;
		for (i = 0; (i < n); i++) {
			if (!i) {
				ind1 = n - 1;
				ind2 = 0;
			} else {
				ind1 = i - 1;
				ind2 = i;
			}
			y1 = vy[ind1];
			y2 = vy[ind2];
			if (y1 < y2) {
				x1 = vx[ind1];
				x2 = vx[ind2];
			} else if (y1 > y2) {
				y2 = vy[ind1];
				y1 = vy[ind2];
				x2 = vx[ind1];
				x1 = vx[ind2];
			} else {
				continue;
			}
			if ( ((y >= y1) && (y < y2)) || 
				((y == maxy) && (y > y1) 
				&& (y <= y2)) ) {
				gfxPrimitivesPolyInts[ints++] = 
					((65536 * (y - y1)) / (y2 - y1)) * 
					(x2 - x1) + (65536 * x1);
			}
		}
		
		qsort(gfxPrimitivesPolyInts, ints, 
			sizeof(int), _gfxPrimitivesCompareInt);

		/*
		* Set color 
		*/
		result = 0;
	    for (i = 0; (i < ints); i += 2) {
			xa = gfxPrimitivesPolyInts[i] + 1;
			xb = gfxPrimitivesPolyInts[i+1] - 1;
			
			(*lines)[(*line_cnt)].xa = (xa >> 16) + 
				((xa & 32768) >> 15);
			(*lines)[(*line_cnt)].xb = (xb >> 16) + 
				((xb & 32768) >> 15);
			(*lines)[(*line_cnt)].y = y;
			
			(*line_cnt)++;
		}
	}
	
	free(gfxPrimitivesPolyInts);
	return (result);
}
