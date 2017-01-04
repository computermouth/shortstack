
#ifndef _SHAPES_H_
#define _SHAPES_H_

#include <SDL2/SDL.h>
#include "structs.h"
#include "draw.h"

#define NP_VS(vertnum) ushort verts = vertnum;\
 static short curr_x[vertnum] = { 0 };\
 static short curr_y[vertnum] = { 0 };
#define NP_VX(vertnum) static short orig_x[vertnum]
#define NP_VY(vertnum) static short orig_y[vertnum]
#define NP_AX(xcoords...) = {xcoords};
#define NP_AY(ycoords...) = {ycoords};
#define NP_CO(vals...) static ushort orig_color[4] = {vals};
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
			ushort i;                                                   \
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

NP_SH(
	active_bg,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4), 
	NP_AX(0, 800, 800, 0), 
	NP_AY(0, 0, 500, 500), 
	NP_CO(3, 30, 33, 255)
);

NP_SH(
	test_square,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4), 
	NP_AX(150, 200, 200, 150), 
	NP_AY(150, 150, 200, 200), 
	NP_CO(255, 125, 0, 255)
);

//~ void test_square (swindow *g_swindow){
	//~ 
	//~ ushort verts = 4;
	//~ 
	//~ static short orig_x[4] = { 50, 100, 100, 50 };
	//~ static short orig_y[4] = { 50, 50, 100, 100 };
	//~ static ushort orig_color[4]  = { 0, 255, 125, 255};
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
		//~ ushort i;
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





// CRUNCHBALL


NP_SH(
	crunchball0_C0_0,
	NP_VS(16),
	NP_VX(16),
	NP_VY(16),
	NP_AX(89, 75, 73, 80, 132, 142, 131, 120, 99, 91, 93, 99, 119, 131, 140, 131),
	NP_AY(172, 151, 94, 70, 70, 94, 111, 94, 92, 112, 133, 150, 149, 131, 153, 174),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball0_R0_0,
	NP_VS(11),
	NP_VX(11),
	NP_VY(11),
	NP_AX(149, 139, 143, 140, 201, 209, 193, 210, 189, 169, 166),
	NP_AY(173, 155, 77, 71, 73, 95, 133, 171, 173, 134, 174),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball0_R0_1,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(164, 158, 193, 182),
	NP_AY(114, 91, 91, 113),
	NP_CO(3, 30, 33, 255)
);

NP_SH(
	crunchball0_U0_0,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(222, 202, 205, 225, 226, 245, 245, 264, 266, 250),
	NP_AY(173, 150, 70, 71, 152, 152, 71, 73, 154, 172),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball0_N0_0,
	NP_VS(12),
	NP_VX(12),
	NP_VY(12),
	NP_AX(270, 263, 266, 283, 304, 305, 323, 328, 320, 307, 285, 287),
	NP_AY(171, 154, 71, 72, 112, 69, 72, 154, 172, 171, 128, 173),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball0_C1_0,
	NP_VS(16),
	NP_VX(16),
	NP_VY(16),
	NP_AX(340, 329, 324, 331, 383, 390, 379, 370, 351, 344, 344, 350, 369, 380, 390, 381),
	NP_AY(171, 155, 83, 69, 73, 97, 112, 93, 93, 111, 134, 150, 149, 129, 155, 172),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball0_H0_0,
	NP_VS(15),
	NP_VX(15),
	NP_VY(15),
	NP_AX(399, 390, 395, 415, 415, 433, 435, 454, 455, 460, 450, 433, 434, 418, 416),
	NP_AY(171, 154, 72, 71, 112, 110, 70, 70, 153, 155, 173, 173, 132, 133, 173),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball0_B0_0,
	NP_VS(9),
	NP_VX(9),
	NP_VY(9),
	NP_AX(470, 461, 464, 459, 523, 530, 521, 531, 513),
	NP_AY(172, 153, 74, 70, 70, 94, 113, 134, 173),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball0_B0_1,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(485, 479, 513, 502),
	NP_AY(152, 130, 133, 151),
	NP_CO(3, 30, 33, 255)
);

NP_SH(
	crunchball0_B0_2,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(488, 480, 508, 503),
	NP_AY(112, 91, 91, 111),
	NP_CO(3, 30, 33, 255)
);

NP_SH(
	crunchball0_A0_0,
	NP_VS(13),
	NP_VX(13),
	NP_VY(13),
	NP_AX(530, 517, 523, 540, 574, 590, 586, 590, 583, 564, 564, 547, 546),
	NP_AY(171, 151, 100, 71, 73, 112, 155, 154, 171, 171, 131, 133, 172),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball0_A0_1,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(540, 550, 565, 570),
	NP_AY(112, 91, 89, 109),
	NP_CO(3, 30, 33, 255)
);

NP_SH(
	crunchball0_L0_0,
	NP_VS(7),
	NP_VX(7),
	NP_VY(7),
	NP_AX(600, 591, 594, 617, 618, 660, 650),
	NP_AY(172, 154, 71, 72, 153, 151, 172),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball0_L0_1,
	NP_VS(7),
	NP_VX(7),
	NP_VY(7),
	NP_AX(671, 661, 663, 686, 686, 732, 720),
	NP_AY(171, 154, 71, 70, 153, 153, 172),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball1_C0_0,
	NP_VS(16),
	NP_VX(16),
	NP_VY(16),
	NP_AX(131, 81, 70, 77, 90, 133, 139, 128, 120, 102, 92, 92, 102, 121, 130, 140),
	NP_AY(70, 72, 91, 153, 174, 171, 151, 129, 151, 150, 133, 110, 93, 94, 113, 91),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball1_R0_0,
	NP_VS(11),
	NP_VX(11),
	NP_VY(11),
	NP_AX(201, 140, 146, 141, 149, 166, 165, 190, 201, 192, 211),
	NP_AY(70, 71, 155, 155, 173, 172, 132, 171, 172, 131, 93),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball1_R0_1,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(190, 160, 166, 182),
	NP_AY(92, 91, 112, 112),
	NP_CO(3, 30, 33, 255)
);

NP_SH(
	crunchball1_U0_0,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(264, 243, 244, 226, 226, 207, 207, 219, 253, 266),
	NP_AY(71, 71, 151, 150, 74, 72, 154, 172, 172, 151),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball1_N0_0,
	NP_VS(12),
	NP_VX(12),
	NP_VY(12),
	NP_AX(325, 305, 304, 280, 266, 262, 269, 285, 287, 310, 321, 329),
	NP_AY(71, 71, 116, 71, 72, 158, 173, 173, 122, 173, 172, 153),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball1_C1_0,
	NP_VS(16),
	NP_VX(16),
	NP_VY(16),
	NP_AX(383, 328, 321, 331, 339, 381, 390, 380, 371, 350, 343, 344, 350, 370, 380, 390),
	NP_AY(73, 72, 87, 154, 170, 171, 151, 131, 151, 150, 135, 110, 94, 94, 112, 92),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball1_H0_0,
	NP_VS(15),
	NP_VX(15),
	NP_VY(15),
	NP_AX(455, 435, 436, 416, 416, 395, 396, 389, 399, 415, 416, 435, 436, 452, 459),
	NP_AY(71, 71, 112, 112, 70, 70, 154, 156, 172, 171, 133, 133, 171, 171, 153),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball1_B0_0,
	NP_VS(9),
	NP_VX(9),
	NP_VY(9),
	NP_AX(520, 460, 465, 462, 469, 512, 531, 520, 532),
	NP_AY(71, 71, 154, 155, 172, 171, 133, 110, 90),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball1_B0_1,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(509, 481, 486, 502),
	NP_AY(90, 90, 111, 112),
	NP_CO(3, 30, 33, 255)
);

NP_SH(
	crunchball1_B0_2,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(509, 482, 486, 502),
	NP_AY(132, 130, 152, 148),
	NP_CO(3, 30, 33, 255)
);

NP_SH(
	crunchball1_A0_0,
	NP_VS(12),
	NP_VX(12),
	NP_VY(12),
	NP_AX(571, 539, 516, 522, 530, 546, 545, 564, 566, 581, 590, 587),
	NP_AY(71, 71, 121, 153, 172, 172, 133, 131, 172, 174, 153, 112),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball1_A0_1,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(543, 568, 562, 548),
	NP_AY(112, 112, 93, 93),
	NP_CO(3, 30, 33, 255)
);

NP_SH(
	crunchball1_L0_0,
	NP_VS(8),
	NP_VX(8),
	NP_VY(8),
	NP_AX(614, 596, 595, 591, 601, 652, 660, 618),
	NP_AY(72, 72, 155, 155, 171, 172, 153, 151),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball1_L1_0,
	NP_VS(7),
	NP_VX(7),
	NP_VY(7),
	NP_AX(685, 664, 664, 671, 721, 732, 686),
	NP_AY(72, 72, 157, 173, 172, 150, 152),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball2_C0_0,
	NP_VS(16),
	NP_VX(16),
	NP_VY(16),
	NP_AX(89, 74, 72, 79, 131, 141, 130, 121, 100, 92, 92, 100, 121, 131, 141, 131),
	NP_AY(172, 152, 92, 73, 72, 95, 112, 92, 92, 112, 133, 150, 150, 131, 155, 172),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball2_R0_0,
	NP_VS(12),
	NP_VX(12),
	NP_VY(12),
	NP_AX(202, 139, 145, 142, 150, 165, 166, 173, 188, 208, 191, 209),
	NP_AY(71, 70, 75, 156, 172, 171, 134, 134, 172, 171, 131, 92),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball2_R0_1,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(189, 161, 167, 183),
	NP_AY(92, 91, 114, 110),
	NP_CO(3, 30, 33, 255)
);

NP_SH(
	crunchball2_U0_0,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(220, 206, 208, 225, 226, 245, 244, 263, 266, 251),
	NP_AY(171, 152, 72, 73, 151, 152, 72, 72, 153, 172),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball2_N0_0,
	NP_VS(12),
	NP_VX(12),
	NP_VY(12),
	NP_AX(325, 306, 305, 281, 266, 262, 271, 287, 286, 311, 323, 329),
	NP_AY(73, 72, 115, 71, 73, 160, 171, 170, 126, 173, 170, 154),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball2_C1_0,
	NP_VS(16),
	NP_VX(16),
	NP_VY(16),
	NP_AX(383, 329, 323, 328, 341, 382, 389, 380, 369, 350, 343, 343, 350, 371, 380, 391),
	NP_AY(71, 71, 88, 153, 173, 172, 152, 131, 152, 150, 134, 109, 91, 93, 112, 91),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball2_H0_0,
	NP_VS(15),
	NP_VX(15),
	NP_VY(15),
	NP_AX(414, 394, 396, 392, 400, 415, 416, 434, 434, 451, 459, 453, 435, 435, 418),
	NP_AY(72, 72, 154, 155, 171, 172, 131, 133, 172, 170, 153, 71, 71, 111, 111),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball2_B0_0,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(522, 459, 466, 465, 462, 471, 512, 531, 521, 530),
	NP_AY(71, 71, 76, 154, 155, 173, 171, 130, 112, 91),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball2_B0_1,
	NP_VS(5),
	NP_VX(5),
	NP_VY(5),
	NP_AX(484, 485, 480, 512, 500),
	NP_AY(111, 94, 92, 93, 113),
	NP_CO(3, 30, 33, 255)
);

NP_SH(
	crunchball2_B0_2,
	NP_VS(5),
	NP_VX(5),
	NP_VY(5),
	NP_AX(480, 486, 487, 503, 509),
	NP_AY(133, 137, 154, 151, 132),
	NP_CO(3, 30, 33, 255)
);

NP_SH(
	crunchball2_A0_0,
	NP_VS(16),
	NP_VX(16),
	NP_VY(16),
	NP_AX(585, 588, 574, 539, 523, 524, 520, 530, 545, 544, 565, 565, 581, 590, 584, 584),
	NP_AY(115, 110, 72, 71, 112, 155, 155, 170, 171, 132, 134, 173, 172, 151, 152, 115),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball2_A0_1,
	NP_VS(5),
	NP_VX(5),
	NP_VY(5),
	NP_AX(541, 551, 569, 560, 548),
	NP_AY(110, 111, 108, 90, 94),
	NP_CO(3, 30, 33, 255)
);

NP_SH(
	crunchball2_L0_0,
	NP_VS(8),
	NP_VX(8),
	NP_VY(8),
	NP_AX(614, 595, 595, 590, 600, 652, 661, 615),
	NP_AY(71, 71, 152, 155, 170, 171, 152, 152),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	crunchball2_L1_0,
	NP_VS(7),
	NP_VX(7),
	NP_VY(7),
	NP_AX(688, 685, 666, 663, 671, 722, 730),
	NP_AY(152, 72, 73, 157, 172, 171, 150),
	NP_CO(139, 112, 178, 255)
);

// MENU ITEMS

NP_SH(
	settings0_0,
	NP_VS(32),
	NP_VX(32),
	NP_VY(32),
	NP_AX(131, 124, 129, 127, 122, 121, 127, 129, 125, 131, 137, 140, 141, 149, 150, 153, 159, 164, 161, 163, 168, 168, 163, 161, 164, 158, 153, 150, 149, 140, 140, 136),
	NP_AY(376, 369, 365, 361, 360, 352, 352, 348, 342, 336, 341, 339, 332, 332, 339, 341, 336, 343, 348, 352, 352, 361, 360, 365, 369, 375, 372, 372, 381, 380, 373, 371),
	NP_CO(221, 239, 215, 255)
);

NP_SH(
	settings0_1,
	NP_VS(8),
	NP_VX(8),
	NP_VY(8),
	NP_AX(145, 141, 137, 138, 144, 150, 154, 151),
	NP_AY(364, 362, 357, 352, 348, 350, 355, 362),
	NP_CO(3, 30, 33, 255)
);

NP_SH(
	play0_0,
	NP_VS(3),
	NP_VX(3),
	NP_VY(3),
	NP_AX(379, 378, 424),
	NP_AY(381, 331, 356),
	NP_CO(65, 130, 59, 255)
);

NP_SH(
	stop0_0,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(632, 632, 680, 680),
	NP_AY(380, 332, 332, 380),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	settings1_0,
	NP_VS(32),
	NP_VX(32),
	NP_VY(32),
	NP_AX(153, 150, 148, 140, 140, 137, 130, 125, 129, 128, 121, 121, 127, 129, 125, 132, 137, 140, 141, 150, 149, 154, 158, 165, 160, 162, 169, 169, 163, 160, 165, 159),
	NP_AY(341, 339, 332, 332, 338, 339, 336, 342, 346, 350, 352, 360, 362, 366, 371, 375, 371, 373, 380, 379, 374, 372, 376, 370, 366, 361, 361, 352, 352, 347, 342, 336),
	NP_CO(221, 239, 215, 255)
);

NP_SH(
	settings1_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(145, 139, 137, 141, 151, 154),
	NP_AY(363, 362, 355, 348, 350, 359),
	NP_CO(3, 30, 33, 255)
);

NP_SH(
	play1_0,
	NP_VS(3),
	NP_VX(3),
	NP_VY(3),
	NP_AX(379, 379, 425),
	NP_AY(381, 331, 357),
	NP_CO(65, 130, 59, 255)
);

NP_SH(
	stop1_0,
	NP_VS(5),
	NP_VX(5),
	NP_VY(5),
	NP_AX(632, 633, 679, 680, 631),
	NP_AY(379, 332, 332, 380, 380),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	settings2_0,
	NP_VS(32),
	NP_VX(32),
	NP_VY(32),
	NP_AX(130, 124, 129, 128, 122, 121, 127, 129, 125, 131, 136, 139, 141, 149, 150, 154, 158, 164, 161, 163, 169, 168, 163, 162, 165, 159, 153, 150, 149, 140, 140, 137),
	NP_AY(376, 370, 364, 361, 360, 351, 350, 348, 342, 336, 341, 338, 332, 331, 339, 341, 336, 341, 348, 351, 352, 361, 361, 364, 370, 375, 372, 372, 380, 379, 374, 372),
	NP_CO(221, 239, 215, 255)
);

NP_SH(
	settings2_1,
	NP_VS(7),
	NP_VX(7),
	NP_VY(7),
	NP_AX(149, 153, 149, 142, 137, 139, 145),
	NP_AY(362, 355, 349, 348, 354, 362, 364),
	NP_CO(3, 30, 33, 255)
);

NP_SH(
	play2_0,
	NP_VS(5),
	NP_VX(5),
	NP_VY(5),
	NP_AX(378, 379, 423, 381, 377),
	NP_AY(375, 332, 355, 380, 375),
	NP_CO(65, 130, 59, 255)
);

NP_SH(
	stop2_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(634, 631, 631, 678, 680, 679),
	NP_AY(380, 378, 332, 332, 336, 381),
	NP_CO(96, 48, 31, 255)
);



#endif
