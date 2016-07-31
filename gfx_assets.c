
#include "gfx_assets.h"

actor keys;
	anim idle;
		frame idle_0;
			shape a_idle_0;
			shape w_idle_0;
		frame idle_1;
			shape a_idle_1;
			shape w_idle_1;
		frame idle_2;
			shape a_idle_2;
			shape w_idle_2;
	anim pressed;
		frame pressed_0;
			shape a_pressed_0;
			shape w_pressed_0;
		frame pressed_1;
			shape a_pressed_1;
			shape w_pressed_1;
		frame pressed_2;
			shape a_pressed_2;
			shape w_pressed_2;



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


void init_gfx_assets(){

	{//actor
		{//anim
			{//frame
				{//shape
					short x[50]		= { 120, 122, 125, 188, 191, 193, 193, 193, 189, 182, 180, 175, 165, 146, 140, 134, 130, 122, 121, 120 };
					short y[50]		= { 419, 422, 423, 423, 421, 418, 395, 363, 355, 344, 341, 339, 339, 339, 338, 339, 344, 361, 394, 409 };
					short points	= 20;
					short color[4]	= {39, 39, 39, 255};
					short z			= 1;
					
					init_shape(&a_idle_0, x, y, points, color, z);
				}
			
				{//shape
					short x[] = { 195, 196, 197, 197, 199, 204, 208, 212, 215, 221, 243, 250, 255, 258, 269, 269, 268, 264, 201, 198 };
					short y[] = { 352, 342, 318, 299, 292, 281, 275, 273, 272, 273, 273, 272, 274, 278, 297, 350, 354, 357, 357, 355 };
					short points = 20;
					short color[] = {39, 39, 39, 255};
					short z = 1;
					
					init_shape(&w_idle_0, x, y, points, color, z);
				}
				
				idle_0.shapes[0] = a_idle_0;
				idle_0.shapes[0] = w_idle_0;
				idle_0.real = 2;
				
			}//frame
			
			{//frame
				{//shape
					short x[50]		= { 121, 125, 188, 191, 193, 193, 193, 192, 182, 180, 176, 168, 155, 145, 139, 134, 131, 122, 121, 120, 119 };
					short y[50]		= { 421, 423, 423, 421, 418, 392, 363, 360, 344, 341, 338, 339, 340, 339, 338, 339, 343, 362, 388, 406, 417 };
					short points	= 21;
					short color[4]	= {39, 39, 39, 255};
					short z			= 1;
					
					init_shape(&a_idle_1, x, y, points, color, z);
				}

				
				{//shape
					short x[] = { 195, 199, 203, 264, 268, 269, 269, 269, 266, 258, 256, 251, 243, 229, 220, 215, 210, 206, 198, 197, 196 };
					short y[] = { 352, 356, 357, 357, 354, 351, 337, 298, 292, 278, 274, 273, 273, 273, 273, 272, 273, 277, 295, 299, 330 };
					short points = 21;
					short color[] = {39, 39, 39, 255};
					short z = 1;
					
					init_shape(&w_idle_1, x, y, points, color, z);
				}
			
				idle_1.shapes[1] = a_idle_1;
				idle_1.shapes[1] = w_idle_1;
				idle_1.real = 2;
			}//frame
			
			{//frame
				{//shape
					short x[50]		= { 120, 122, 126, 188, 191, 193, 193, 193, 191, 188, 183, 180, 175, 167, 144, 138, 132, 130, 122, 121, 120 };
					short y[50]		= { 419, 422, 423, 423, 421, 418, 391, 364, 360, 354, 345, 341, 338, 339, 339, 339, 340, 345, 361, 371, 406 };
					short points	= 21;
					short color[4]	= {39, 39, 39, 255};
					short z			= 1;
					
					init_shape(&a_idle_2, x, y, points, color, z);
				}
				
				{//shape
					short x[] = { 195, 199, 205, 263, 267, 270, 269, 269, 267, 260, 258, 255, 250, 243, 232, 220, 213, 209, 206, 198, 197, 197, 195 };
					short y[] = { 352, 356, 357, 357, 355, 351, 340, 298, 292, 281, 277, 274, 272, 273, 273, 273, 272, 274, 279, 294, 297, 323, 345 };
					short points = 23;
					short color[] = {39, 39, 39, 255};
					short z = 1;
					
					init_shape(&w_idle_2, x, y, points, color, z);
				}
				
				idle_2.shapes[1] = a_idle_2;
				idle_2.shapes[1] = w_idle_2;
				idle_2.real = 2;
				
			}//frame

			idle.frames[0] = idle_0;
			idle.frames[1] = idle_1;
			idle.frames[2] = idle_2;
			idle.real = 3;
		}//anim
		
		{//anim
			{//frame
			/* gfx->key_a->pressed->frame_pressed.c */
				{//shape
					short x[50]		= { 120, 122, 125, 188, 191, 193, 193, 193, 189, 182, 180, 175, 165, 146, 140, 134, 130, 122, 121, 120 };
					short y[50]		= { 419, 422, 423, 423, 421, 418, 395, 363, 355, 344, 341, 339, 339, 339, 338, 339, 344, 361, 394, 409 };
					short points	= 20;
					short color[4]	= {160, 130, 172, 255};
					short z			= 1;
					
					init_shape(&a_pressed_0, x, y, points, color, z);
				}
				
				{//shape
					short x[] = { 195, 196, 197, 197, 199, 204, 208, 212, 215, 221, 243, 250, 255, 258, 269, 269, 268, 264, 201, 198 };
					short y[] = { 352, 342, 318, 299, 292, 281, 275, 273, 272, 273, 273, 272, 274, 278, 297, 350, 354, 357, 357, 355 };
					short points = 20;
					short color[] = {160, 130, 172, 255};
					short z = 1;
					
					init_shape(&w_pressed_0, x, y, points, color, z);
				}
				
				pressed_0.shapes[0] = a_pressed_0;
				pressed_0.shapes[0] = w_pressed_0;
				pressed_0.real = 2;
			}//frame
			
			{//frame

				{//shape
					short x[50]		= { 121, 125, 188, 191, 193, 193, 193, 192, 182, 180, 176, 168, 155, 145, 139, 134, 131, 122, 121, 120, 119 };
					short y[50]		= { 421, 423, 423, 421, 418, 392, 363, 360, 344, 341, 338, 339, 340, 339, 338, 339, 343, 362, 388, 406, 417 };
					short points	= 21;
					short color[4]	= {160, 130, 172, 255};
					short z			= 1;
					
					init_shape(&a_pressed_1, x, y, points, color, z);
				}
				
				{//shape
					short x[] = { 195, 199, 203, 264, 268, 269, 269, 269, 266, 258, 256, 251, 243, 229, 220, 215, 210, 206, 198, 197, 196 };
					short y[] = { 352, 356, 357, 357, 354, 351, 337, 298, 292, 278, 274, 273, 273, 273, 273, 272, 273, 277, 295, 299, 330 };
					short points = 21;
					short color[] = {160, 130, 172, 255};
					short z = 1;
					
					init_shape(&w_pressed_1, x, y, points, color, z);
				}
				
				pressed_1.shapes[1] = a_pressed_1;
				pressed_1.shapes[1] = w_pressed_1;
				pressed_1.real = 2;
			}//frame
			
			{//frame
		
				{//shape
					short x[50]		= { 120, 122, 126, 188, 191, 193, 193, 193, 191, 188, 183, 180, 175, 167, 144, 138, 132, 130, 122, 121, 120 };
					short y[50]		= { 419, 422, 423, 423, 421, 418, 391, 364, 360, 354, 345, 341, 338, 339, 339, 339, 340, 345, 361, 371, 406 };
					short points	= 21;
					short color[4]	= {160, 130, 172, 255};
					short z			= 1;
					
					init_shape(&a_pressed_2, x, y, points, color, z);
				}
				
				{//shape
					short x[] = { 195, 199, 205, 263, 267, 270, 269, 269, 267, 260, 258, 255, 250, 243, 232, 220, 213, 209, 206, 198, 197, 197, 195 };
					short y[] = { 352, 356, 357, 357, 355, 351, 340, 298, 292, 281, 277, 274, 272, 273, 273, 273, 272, 274, 279, 294, 297, 323, 345 };
					short points = 23;
					short color[] = {160, 130, 172, 255};
					short z = 1;
					
					init_shape(&w_pressed_2, x, y, points, color, z);
				}
				
				pressed_2.shapes[0] = a_pressed_2;
				pressed_2.shapes[0] = w_pressed_2;
				pressed_2.real = 2;
			}//frame
			
			pressed.frames[0] = pressed_0;
			pressed.frames[1] = pressed_1;
			pressed.frames[2] = pressed_2;
			pressed.real = 3;
		}//anim
		
		keys.anims[0] = idle;
		keys.anims[1] = pressed;
		keys.real = 2;
	}//actor
}
