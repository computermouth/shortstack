
#include "gfx_structs.h"

void init_shape(shape *rec, short x[50], short y[50], short points, short color[4], short z){
	
	int i;
	
	for(i = 0; i < 50; i++){
		rec->x[i] = x[i];
		rec->y[i] = y[i];
		
		if(i < 4)
			rec->color[i] = color[i];
	}
	
	rec->points = points;
	rec->z = z;
	
}
