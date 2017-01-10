
#ifndef _MACROS_H_
#define _MACROS_H_

#include "nano_poly.h"
#include "draw.h"
#include "window.h"

#define NP_VS(vertnum) unsigned short verts = vertnum;\
 static short curr_x[vertnum] = { 0 };\
 static short curr_y[vertnum] = { 0 };
#define NP_VX(vertnum) static short orig_x[vertnum]
#define NP_VY(vertnum) static short orig_y[vertnum]
#define NP_AX(xcoords...) = {xcoords};
#define NP_AY(ycoords...) = {ycoords};
#define NP_CO(vals...) static unsigned short orig_color[4] = {vals};

#define NP_SH(np_name, np_vs, np_vx, np_vy, np_ax, np_ay, np_co)		\
	void np_name(swindow *g_swindow){									\
		np_vs															\
		np_vx 															\
		np_ax															\
		np_vy 															\
		np_ay															\
		np_co															\
																		\
		static shape shape_s = { 										\
			.lines		= NULL,											\
			.line_cnt	= 0,											\
			.old_ratio 	= 0,                                            \
			.x 			= orig_x,                                       \
			.y 			= orig_y,                                       \
			.color 		= orig_color                                    \
			};                                                          \
		                                                                \
		if (shape_s.old_ratio != g_swindow->r){                         \
			unsigned short i;                                                   \
			for(i = 0; i < verts; i++){                                 \
				curr_x[i] = (orig_x[i] * g_swindow->r) + g_swindow->p_x;\
				curr_y[i] = (orig_y[i] * g_swindow->r) + g_swindow->p_y;\
			}                                                           \
			shape_s.x = curr_x;                                         \
			shape_s.y = curr_y;                                         \
			shape_s.old_ratio = g_swindow->r;                           \
			                                                            \
			filledPolygonRGBA(                                          \
				&shape_s.lines,                                         \
				&shape_s.line_cnt,                                      \
				curr_x,                                                 \
				curr_y,                                                 \
				verts,                                                  \
				shape_s.color[0],                                       \
				shape_s.color[1],                                       \
				shape_s.color[2],                                       \
				shape_s.color[3]                                        \
				);                                                      \
		}                                                               \
                                                                        \
		draw_shape(&shape_s, g_swindow->renderer);						\
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

//~ void test_square (swindow *g_swindow){
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
	//~ static shape shape_s = { 
		//~ .lines		= NULL,
		//~ .line_cnt	= 0,
		//~ .old_ratio 	= 0,
		//~ .x 			= orig_x,
		//~ .y 			= orig_y,
		//~ .color 		= orig_color
		//~ };
	//~ 
	//~ if (shape_s.old_ratio != g_swindow->r){
		//~ unsigned short i;
		//~ for(i = 0; i < verts; i++){
			//~ curr_x[i] = (orig_x[i] * g_swindow->r) + g_swindow->p_x;
			//~ curr_y[i] = (orig_y[i] * g_swindow->r) + g_swindow->p_y;
		//~ }
		//~ shape_s.x = curr_x;
		//~ shape_s.y = curr_y;
		//~ shape_s.old_ratio = g_swindow->r;
		//~ 
		//~ filledPolygonRGBA(
			//~ &shape_s.lines,
			//~ &shape_s.line_cnt, 
			//~ curr_x,
			//~ curr_y,
			//~ verts,
			//~ shape_s.color[0],
			//~ shape_s.color[1],
			//~ shape_s.color[2],
			//~ shape_s.color[3]
			//~ );
	//~ }
//~ 
	//~ draw_shape(&shape_s, g_swindow->renderer);
//~ 
//~ }

//~ NP_SH(
	//~ crunchball0_C0_0,
	//~ NP_VS(4),
	//~ NP_VX(4),
	//~ NP_VY(4),
	//~ NP_AX(89, 75, 73, 80),
	//~ NP_AY(172, 151, 94, 70),
	//~ NP_CO(139, 112, 178, 255)
//~ );

void set_color(unsigned short *,unsigned short);

#define NP_SH_PC(np_name, np_vs, np_vx, np_vy, np_ax, np_ay, np_co)		\
	void np_name(swindow *g_swindow, unsigned short pad_x,				\
					unsigned short pad_y, unsigned short color_code){	\
		np_vs															\
		np_vx 															\
		np_ax															\
		np_vy 															\
		np_ay															\
		np_co															\
																		\
		static shape shape_s = { 										\
			.lines		= NULL,											\
			.line_cnt	= 0,											\
			.old_ratio 	= 0,                                            \
			.x 			= orig_x,                                       \
			.y 			= orig_y,                                       \
			.color 		= orig_color                                    \
			};                                                          \
																		\
		unsigned short i;                                                   	\
		for(i = 0; i < verts; i++){                                 	\
			curr_x[i] = ((orig_x[i] + pad_x) 							\
				* g_swindow->r) + g_swindow->p_x;						\
			curr_y[i] = ((orig_y[i] + pad_y) 							\
				* g_swindow->r) + g_swindow->p_y;						\
		}                                                           	\
		shape_s.x = curr_x;                                         	\
		shape_s.y = curr_y;                                         	\
		shape_s.old_ratio = g_swindow->r;                           	\
																		\
		set_color(shape_s.color, color_code);				\
																		\
		filledPolygonRGBA(                                          	\
			&shape_s.lines,                                         	\
			&shape_s.line_cnt,                                      	\
			curr_x,                                                 	\
			curr_y,                                                 	\
			verts,                                                  	\
			shape_s.color[0],                                       	\
			shape_s.color[1],                                       	\
			shape_s.color[2],                                       	\
			shape_s.color[3]                                        	\
			);                                                      	\
																		\
		draw_shape(&shape_s, g_swindow->renderer);						\
	}

#endif
