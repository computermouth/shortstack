
#ifndef _MACROS_H_
#define _MACROS_H_

#include "nano_poly.h"
#include "draw.h"
#include "window.h"

#define NP_VS(vertnum) unsigned short verts = vertnum;					\
 static short curr_x[vertnum] = { 0 };									\
 static short curr_y[vertnum] = { 0 };
#define NP_VX(vertnum) static short orig_x[vertnum]
#define NP_VY(vertnum) static short orig_y[vertnum]
#define NP_AX(xcoords...) = {xcoords};
#define NP_AY(ycoords...) = {ycoords};
#define NP_CO(vals...) static unsigned short orig_color[4] = {vals};

#define NP_SH(np_name, np_vs, np_vx, np_vy, np_ax, np_ay, np_co)		\
	void np_name(window_t *window){										\
		np_vs															\
		np_vx 															\
		np_ax															\
		np_vy 															\
		np_ay															\
		np_co															\
																		\
		static shape_t shape = { 										\
			.lines		= NULL,											\
			.line_cnt	= 0,											\
			.old_ratio 	= 0,                                            \
			.x 			= orig_x,                                       \
			.y 			= orig_y,                                       \
			.color 		= orig_color                                    \
			};                                                          \
		                                                                \
		if (shape.old_ratio != window->r){								\
			unsigned short i;											\
			for(i = 0; i < verts; i++){                                 \
				curr_x[i] = (orig_x[i] * window->r) + window->p_x;		\
				curr_y[i] = (orig_y[i] * window->r) + window->p_y;		\
				if (curr_x[i] < 0) curr_x[i] = 0;						\
				if (curr_y[i] < 0) curr_y[i] = 0;						\
				if (curr_x[i] > window->n_w) curr_x[i] = window->n_w;	\
				if (curr_y[i] > window->n_h) curr_y[i] = window->n_h;	\
			}                                                           \
			shape.x = curr_x;											\
			shape.y = curr_y;											\
			shape.old_ratio = window->r;               	          		\
			                                                            \
			filledPolygonRGBA(                                          \
				&shape.lines,											\
				&shape.line_cnt,										\
				curr_x,                                                 \
				curr_y,                                                 \
				verts,                                                  \
				shape.color[0],											\
				shape.color[1],											\
				shape.color[2],											\
				shape.color[3] 											\
				);                                                      \
		}                                                               \
                                                                        \
		draw_shape(&shape, window->renderer);							\
	}

//~ FAKE_NP_SH(
	//~ test_square,
	//~ NP_VS(4),
	//~ NP_VX(4),
	//~ NP_VY(4), 
	//~ NP_AX(150, 200, 200, 150), 
	//~ NP_AY(150, 150, 200, 200), 
	//~ NP_CO(255, 125, 0, 255)
//~ );

//~ void test_square (swindow *window){
	//~ 
	//~ unsigned short verts = 4;
	//~ 
	//~ static short orig_x[4] = { 50, 100, 100, 50 };
	//~ static short orig_y[4] = { 50, 50, 100, 100 };
	//~ static unsigned short orig_color[4]  = { 0, 255, 125, 255};
	//~ 
	//~ static short curr_x[4] = { 0 };
	//~ static short curr_y[4] = { 0 };
	//~ 
	//~ static shape_t shape = { 
		//~ .lines		= NULL,
		//~ .line_cnt	= 0,
		//~ .old_ratio 	= 0,
		//~ .x 			= orig_x,
		//~ .y 			= orig_y,
		//~ .color 		= orig_color
		//~ };
	//~ 
	//~ if (shape.old_ratio != window->r){
		//~ unsigned short i;
		//~ for(i = 0; i < verts; i++){
			//~ curr_x[i] = (orig_x[i] * window->r) + window->p_x;
			//~ curr_y[i] = (orig_y[i] * window->r) + window->p_y;
			//~ if (curr_x[i] < 0) curr_x[i] = 0;
			//~ if (curr_y[i] < 0) curr_y[i] = 0;
			//~ if (curr_x[i] > window->n_w) curr_x[i] = window->n_w;
			//~ if (curr_y[i] > window->n_h) curr_y[i] = window->n_h;
		//~ }
		//~ shape.x = curr_x;
		//~ shape.y = curr_y;
		//~ shape.old_ratio = window->r;
		//~ 
		//~ filledPolygonRGBA(
			//~ &shape.lines,
			//~ &shape.line_cnt, 
			//~ curr_x,
			//~ curr_y,
			//~ verts,
			//~ shape.color[0],
			//~ shape.color[1],
			//~ shape.color[2],
			//~ shape.color[3]
			//~ );
	//~ }
//~ 
	//~ draw_shape(&shape, window->renderer);
//~ 
//~ }

void set_color(unsigned short *,unsigned short);

#define NP_SH_PC(np_name, np_vs, np_vx, np_vy, np_ax, np_ay, np_co)		\
	void np_name(window_t *window, unsigned short pad_x,				\
					unsigned short pad_y, unsigned short color_code){	\
		np_vs															\
		np_vx 															\
		np_ax															\
		np_vy 															\
		np_ay															\
		np_co															\
																		\
		static shape_t shape = {										\
			.lines		= NULL,											\
			.line_cnt	= 0,											\
			.old_ratio 	= 0,                                            \
			.x 			= orig_x,                                       \
			.y 			= orig_y,                                       \
			.color 		= orig_color                                    \
			};                                                          \
																		\
		unsigned short i;												\
		for(i = 0; i < verts; i++){                                 	\
			curr_x[i] = ((orig_x[i] + pad_x) 							\
				* window->r) + window->p_x;								\
			curr_y[i] = ((orig_y[i] + pad_y) 							\
				* window->r) + window->p_y;								\
			if (curr_x[i] < 0) curr_x[i] = window->p_x + pad_x;			\
			if (curr_y[i] < 0) curr_y[i] = window->p_y + pad_y;			\
			if (curr_x[i] > window->n_w) curr_x[i] = window->n_w;		\
			if (curr_y[i] > window->n_h) curr_y[i] = window->n_h;		\
		}                                                           	\
		shape.x = curr_x;              		                          	\
		shape.y = curr_y;              		                          	\
		shape.old_ratio = window->r;		                          	\
																		\
		set_color(shape.color, color_code);								\
																		\
		filledPolygonRGBA(                                          	\
			&shape.lines,      		                                  	\
			&shape.line_cnt,   		                                  	\
			curr_x,                                                 	\
			curr_y,                                                 	\
			verts,                                                  	\
			shape.color[0], 	                                    	\
			shape.color[1], 	                                    	\
			shape.color[2], 	                                    	\
			shape.color[3]  	                                    	\
			);                                                      	\
																		\
		draw_shape(&shape, window->renderer);							\
	}

#endif
