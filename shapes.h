
#ifndef _SHAPES_H_
#define _SHAPES_H_

#include <SDL2/SDL.h>
#include "structs.h"
#include "draw.h"
#include "macros.h"

NP_SH(
	active_bg,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4), 
	NP_AX(0, 800, 800, 0), 
	NP_AY(0, 0, 500, 500), 
	NP_CO(3, 30, 33, 255)
);

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

// MENU SELECT

NP_SH(
	select_settings0,
	NP_VS(9),
	NP_VX(9),
	NP_VY(9),
	NP_AX(35, 63, 41, 41, 240, 239, 246, 246, 33),
	NP_AY(314, 320, 321, 394, 394, 329, 334, 400, 400),
	NP_CO(77, 145, 128, 255)
);

NP_SH(
	select_play0,
	NP_VS(9),
	NP_VX(9),
	NP_VY(9),
	NP_AX(295, 328, 302, 302, 500, 500, 506, 506, 295),
	NP_AY(314, 320, 321, 394, 393, 333, 335, 399, 400),
	NP_CO(77, 145, 128, 255)
);

NP_SH(
	select_stop0,
	NP_VS(9),
	NP_VX(9),
	NP_VY(9),
	NP_AX(553, 588, 560, 561, 759, 759, 765, 765, 554),
	NP_AY(314, 320, 321, 394, 394, 337, 337, 401, 400),
	NP_CO(77, 145, 128, 255)
);

NP_SH(
	select_settings1,
	NP_VS(9),
	NP_VX(9),
	NP_VY(9),
	NP_AX(35, 57, 41, 41, 240, 240, 246, 247, 33),
	NP_AY(315, 319, 320, 395, 393, 342, 344, 401, 400),
	NP_CO(77, 145, 128, 255)
);

NP_SH(
	select_play1,
	NP_VS(9),
	NP_VX(9),
	NP_VY(9),
	NP_AX(295, 318, 303, 302, 499, 500, 506, 507, 295),
	NP_AY(313, 319, 320, 394, 393, 343, 346, 400, 400),
	NP_CO(77, 145, 128, 255)
);

NP_SH(
	select_stop1,
	NP_VS(9),
	NP_VX(9),
	NP_VY(9),
	NP_AX(553, 577, 560, 561, 758, 758, 764, 765, 553),
	NP_AY(313, 320, 320, 395, 394, 344, 346, 400, 399),
	NP_CO(77, 145, 128, 255)
);

NP_SH(
	select_settings2,
	NP_VS(9),
	NP_VX(9),
	NP_VY(9),
	NP_AX(35, 58, 41, 41, 239, 240, 246, 246, 33),
	NP_AY(314, 319, 320, 395, 393, 342, 345, 400, 400),
	NP_CO(77, 145, 128, 255)
);

NP_SH(
	select_play2,
	NP_VS(9),
	NP_VX(9),
	NP_VY(9),
	NP_AX(294, 317, 300, 300, 499, 500, 506, 506, 295),
	NP_AY(314, 320, 320, 394, 393, 348, 350, 400, 401),
	NP_CO(77, 145, 128, 255)
);

NP_SH(
	select_stop2,
	NP_VS(9),
	NP_VX(9),
	NP_VY(9),
	NP_AX(554, 555, 576, 562, 561, 760, 759, 766, 765),
	NP_AY(400, 315, 320, 320, 394, 394, 345, 348, 400),
	NP_CO(77, 145, 128, 255)
);

// GAME_BALL

NP_SH_PC(
	ball0,
	NP_VS(13),
	NP_VX(13),
	NP_VY(13),
	NP_AX(15, 7, 0, 1, 5, 11, 24, 30, 36, 39, 35, 27, 20),
	NP_AY(39, 35, 19, 13, 6, 1, 0, 2, 8, 24, 33, 38, 40),
	NP_CO(0, 0, 0, 255)
);

NP_SH_PC(
	ball1,
	NP_VS(13),
	NP_VX(13),
	NP_VY(13),
	NP_AX(8, 14, 30, 37, 39, 39, 32, 11, 4, 1, 0, 1, 4),
	NP_AY(3, 0, 3, 9, 16, 26, 35, 38, 32, 26, 19, 13, 6),
	NP_CO(0, 0, 0, 255)
);

NP_SH_PC(
	ball2,
	NP_VS(12),
	NP_VX(12),
	NP_VY(12),
	NP_AX(6, 1, 0, 5, 12, 20, 27, 34, 40, 38, 25, 16),
	NP_AY(34, 28, 21, 5, 1, 0, 1, 5, 19, 27, 39, 39),
	NP_CO(0, 0, 0, 255)
);

// GAME_PADDLE

NP_SH_PC(
	paddle0,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(0, 0, 0, 81, 169, 202, 200, 200, 124, 57),
	NP_AY(475, 453, 435, 434, 435, 435, 455, 475, 472, 474),
	NP_CO(255, 253, 206, 255)
);

NP_SH_PC(
	paddle1,
	NP_VS(12),
	NP_VX(12),
	NP_VY(12),
	NP_AX(0, 1, 0, 66, 153, 200, 200, 200, 159, 64, 8, 0),
	NP_AY(474, 460, 434, 435, 435, 435, 462, 475, 477, 475, 474, 475),
	NP_CO(255, 253, 206, 255)
);

NP_SH_PC(
	paddle2,
	NP_VS(12),
	NP_VX(12),
	NP_VY(12),
	NP_AX(0, 0, 44, 96, 161, 200, 198, 200, 130, 65, 0, 0),
	NP_AY(439, 435, 435, 436, 434, 435, 455, 475, 475, 474, 474, 454),
	NP_CO(255, 253, 206, 255)
);


// TOP WALL

NP_SH(
	top_wall0,
	NP_VS(19),
	NP_VX(19),
	NP_VY(19),
	NP_AX(0, 0, 800, 800, 770, 716, 690, 620, 577, 539, 450, 400, 351, 257, 223, 181, 110, 78, 30),
	NP_AY(19, 0, 0, 19, 19, 11, 19, 20, 12, 20, 19, 11, 19, 19, 11, 19, 19, 11, 20),
	NP_CO(221, 239, 215, 255)
);

NP_SH(
	top_wall1,
	NP_VS(19),
	NP_VX(19),
	NP_VY(19),
	NP_AX(0, 0, 800, 800, 768, 712, 689, 615, 555, 540, 448, 405, 351, 257, 215, 181, 109, 70, 30),
	NP_AY(19, 0, 0, 21, 19, 9, 19, 19, 10, 19, 19, 6, 19, 19, 7, 18, 19, 7, 18),
	NP_CO(221, 239, 215, 255)
);

NP_SH(
	top_wall2,
	NP_VS(19),
	NP_VX(19),
	NP_VY(19),
	NP_AX(0, 0, 29, 71, 109, 180, 216, 259, 352, 392, 450, 542, 579, 617, 691, 735, 768, 800, 800),
	NP_AY(0, 20, 19, 10, 20, 19, 8, 19, 19, 10, 19, 19, 7, 18, 19, 7, 20, 20, 0),
	NP_CO(221, 239, 215, 255)
);


// TOP WALL PADS

NP_SH(
	pad0_0,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(30, 30, 109, 109),
	NP_AY(19, 0, 0, 19),
	NP_CO(221, 218, 184, 255)
);

NP_SH(
	pad0_1,
	NP_VS(5),
	NP_VX(5),
	NP_VY(5),
	NP_AX(30, 30, 108, 109, 28),
	NP_AY(18, 0, 0, 19, 18),
	NP_CO(221, 218, 184, 255)
);

NP_SH(
	pad0_2,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(30, 31, 108, 108),
	NP_AY(19, 0, 0, 19),
	NP_CO(221, 218, 184, 255)
);

NP_SH(
	pad1_0,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(180, 181, 258, 259),
	NP_AY(19, 0, 0, 19),
	NP_CO(221, 218, 184, 255)
);

NP_SH(
	pad1_1,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(181, 179, 259, 259),
	NP_AY(19, 0, 0, 19),
	NP_CO(221, 218, 184, 255)
);

NP_SH(
	pad1_2,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(181, 181, 259, 260),
	NP_AY(19, 0, 0, 19),
	NP_CO(221, 218, 184, 255)
);

NP_SH(
	pad2_0,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(540, 540, 619, 619),
	NP_AY(19, 0, 0, 19),
	NP_CO(221, 218, 184, 255)
);

NP_SH(
	pad2_1,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(542, 540, 619, 619),
	NP_AY(19, 0, 0, 19),
	NP_CO(221, 218, 184, 255)
);

NP_SH(
	pad2_2,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(619, 540, 541, 619),
	NP_AY(19, 19, 0, 0),
	NP_CO(221, 218, 184, 255)
);

NP_SH(
	pad3_0,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(691, 690, 769, 769),
	NP_AY(19, 1, 0, 19),
	NP_CO(221, 218, 184, 255)
);

NP_SH(
	pad3_1,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(690, 690, 770, 769),
	NP_AY(19, 0, 0, 19),
	NP_CO(221, 218, 184, 255)
);

NP_SH(
	pad3_2,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(691, 691, 770, 769),
	NP_AY(19, 0, 0, 19),
	NP_CO(221, 218, 184, 255)
);

// TOP WALL HOLE


NP_SH(
	hole_open0,
	NP_VS(19),
	NP_VX(19),
	NP_VY(19),
	NP_AX(351, 350, 451, 450, 460, 441, 438, 421, 420, 409, 399, 390, 384, 376, 363, 359, 353, 354, 344),
	NP_AY(19, 0, 0, 19, 39, 24, 41, 24, 36, 23, 45, 25, 36, 22, 49, 27, 39, 24, 36),
	NP_CO(65, 130, 59, 255)
);

NP_SH(
	hole_open1,
	NP_VS(19),
	NP_VX(19),
	NP_VY(19),
	NP_AX(350, 351, 450, 450, 458, 443, 436, 430, 422, 412, 411, 399, 391, 385, 375, 371, 357, 358, 340),
	NP_AY(19, 0, 0, 19, 34, 24, 42, 22, 44, 21, 36, 21, 39, 22, 44, 22, 36, 23, 42),
	NP_CO(65, 130, 59, 255)
);

NP_SH(
	hole_open2,
	NP_VS(19),
	NP_VX(19),
	NP_VY(19),
	NP_AX(350, 350, 450, 450, 459, 444, 446, 429, 426, 415, 411, 402, 396, 388, 376, 372, 357, 358, 339),
	NP_AY(19, 0, 0, 19, 40, 25, 45, 26, 37, 26, 56, 26, 41, 26, 43, 26, 44, 23, 35),
	NP_CO(65, 130, 59, 255)
);

NP_SH(
	hole_closed0,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(349, 351, 450, 451),
	NP_AY(18, 0, 0, 18),
	NP_CO(221, 239, 215, 255)
);

NP_SH(
	hole_closed1,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(350, 351, 450, 451),
	NP_AY(18, 0, 0, 18),
	NP_CO(221, 239, 215, 255)
);

NP_SH(
	hole_closed2,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(350, 350, 451, 450),
	NP_AY(19, 0, 0, 19),
	NP_CO(221, 239, 215, 255)
);

// TOP WALL PAD ARROW LEFT

NP_SH(
	pad0_arrow_left0_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(53, 41, 52, 57, 46, 58),
	NP_AY(19, 9, 0, 0, 9, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad0_arrow_left0_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(83, 73, 85, 93, 81, 91),
	NP_AY(19, 10, 0, 0, 9, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad0_arrow_left1_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(54, 40, 53, 60, 48, 61),
	NP_AY(21, 8, 0, 0, 9, 21),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad0_arrow_left1_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(83, 73, 83, 91, 79, 90),
	NP_AY(20, 10, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad0_arrow_left2_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(55, 42, 54, 61, 49, 61),
	NP_AY(21, 12, 0, 0, 11, 21),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad0_arrow_left2_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(83, 74, 82, 92, 80, 89),
	NP_AY(20, 11, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad1_arrow_left0_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(203, 193, 201, 210, 200, 209),
	NP_AY(19, 11, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad1_arrow_left0_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(235, 227, 234, 242, 231, 241),
	NP_AY(19, 9, 0, 0, 9, 19),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad1_arrow_left1_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(204, 193, 201, 206, 199, 209),
	NP_AY(20, 9, 0, 0, 9, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad1_arrow_left1_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(236, 227, 234, 239, 234, 241),
	NP_AY(19, 11, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad1_arrow_left2_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(204, 193, 204, 211, 198, 209),
	NP_AY(19, 10, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad1_arrow_left2_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(236, 226, 237, 242, 232, 243),
	NP_AY(19, 10, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad2_arrow_left0_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(563, 553, 562, 568, 559, 568),
	NP_AY(19, 10, 0, 0, 9, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad2_arrow_left0_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(591, 582, 592, 599, 588, 599),
	NP_AY(19, 10, 0, 0, 10, 19),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad2_arrow_left1_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(563, 552, 562, 567, 560, 570),
	NP_AY(20, 10, 0, 0, 9, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad2_arrow_left1_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(594, 583, 594, 599, 588, 599),
	NP_AY(19, 11, 0, 0, 10, 19),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad2_arrow_left2_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(562, 553, 562, 566, 558, 569),
	NP_AY(19, 10, 0, 0, 11, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad2_arrow_left2_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(593, 583, 592, 598, 590, 600),
	NP_AY(19, 9, 0, 0, 9, 19),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad3_arrow_left0_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(710, 702, 711, 715, 706, 715),
	NP_AY(19, 10, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad3_arrow_left0_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(742, 731, 743, 750, 738, 751),
	NP_AY(19, 11, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad3_arrow_left1_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(711, 701, 710, 717, 708, 717),
	NP_AY(19, 9, 0, 0, 9, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad3_arrow_left1_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(743, 734, 743, 747, 739, 748),
	NP_AY(19, 10, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad3_arrow_left2_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(712, 701, 710, 716, 709, 718),
	NP_AY(20, 11, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad3_arrow_left2_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(744, 734, 740, 747, 741, 751),
	NP_AY(19, 11, 0, 0, 11, 20),
	NP_CO(96, 48, 31, 255)
);

// TOP WALL PAD ARROW RIGHT

NP_SH(
	pad0_arrow_right0_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(46, 56, 45, 53, 61, 52),
	NP_AY(19, 10, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad0_arrow_right0_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(76, 84, 75, 85, 93, 85),
	NP_AY(19, 10, 0, 0, 11, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad0_arrow_right1_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(45, 54, 45, 56, 61, 53),
	NP_AY(19, 11, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad0_arrow_right1_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(77, 85, 76, 83, 89, 84),
	NP_AY(20, 10, 0, 0, 11, 21),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad0_arrow_right2_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(45, 52, 45, 54, 60, 53),
	NP_AY(18, 10, 0, 0, 11, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad0_arrow_right2_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(77, 85, 76, 84, 91, 85),
	NP_AY(19, 9, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad1_arrow_right0_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(195, 201, 192, 201, 209, 200),
	NP_AY(19, 9, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad1_arrow_right0_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(230, 237, 226, 235, 244, 237),
	NP_AY(19, 11, 0, 0, 11, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad1_arrow_right1_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(195, 201, 193, 202, 208, 203),
	NP_AY(19, 9, 0, 0, 9, 19),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad1_arrow_right1_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(231, 237, 231, 238, 242, 239),
	NP_AY(20, 10, 0, 0, 11, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad1_arrow_right2_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(195, 200, 194, 202, 207, 203),
	NP_AY(20, 11, 0, 0, 10, 21),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad1_arrow_right2_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(234, 237, 232, 239, 242, 239),
	NP_AY(18, 10, 0, 0, 12, 19),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad2_arrow_right0_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(556, 563, 555, 564, 569, 562),
	NP_AY(19, 10, 0, 0, 9, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad2_arrow_right0_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(588, 593, 588, 594, 599, 594),
	NP_AY(19, 10, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad2_arrow_right1_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(556, 561, 558, 564, 568, 563),
	NP_AY(19, 9, 0, 0, 11, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad2_arrow_right1_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(590, 597, 592, 597, 602, 596),
	NP_AY(20, 10, 0, 0, 12, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad2_arrow_right2_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(559, 563, 559, 564, 568, 566),
	NP_AY(19, 9, 0, 0, 10, 18),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad2_arrow_right2_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(590, 595, 590, 596, 599, 596),
	NP_AY(19, 11, 0, 0, 11, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad3_arrow_right0_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(704, 709, 704, 710, 714, 709),
	NP_AY(19, 10, 0, 0, 10, 19),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad3_arrow_right0_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(742, 746, 740, 749, 755, 750),
	NP_AY(19, 10, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad3_arrow_right1_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(704, 711, 706, 713, 716, 710),
	NP_AY(19, 9, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad3_arrow_right1_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(743, 747, 742, 749, 754, 748),
	NP_AY(19, 10, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad3_arrow_right2_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(707, 711, 705, 714, 717, 712),
	NP_AY(19, 8, 0, 0, 10, 20),
	NP_CO(96, 48, 31, 255)
);

NP_SH(
	pad3_arrow_right2_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(743, 747, 742, 748, 752, 748),
	NP_AY(19, 10, 0, 0, 12, 20),
	NP_CO(96, 48, 31, 255)
);

// HEARTS

NP_SH(
	heart0_enabled0,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(765, 752, 749, 754, 762, 765, 769, 776, 780, 778),
	NP_AY(69, 56, 46, 40, 40, 45, 40, 40, 47, 57),
	NP_CO(193, 137, 179, 255)
);

NP_SH(
	heart0_enabled1,
	NP_VS(9),
	NP_VX(9),
	NP_VY(9),
	NP_AX(754, 759, 765, 771, 780, 778, 765, 753, 749),
	NP_AY(42, 40, 45, 40, 46, 57, 69, 57, 48),
	NP_CO(193, 137, 179, 255)
);

NP_SH(
	heart0_enabled2,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(765, 771, 777, 781, 779, 765, 753, 750, 755, 762),
	NP_AY(45, 40, 43, 47, 57, 69, 57, 46, 42, 41),
	NP_CO(193, 137, 179, 255)
);

NP_SH(
	heart1_enabled0,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(766, 752, 749, 754, 762, 765, 769, 775, 780, 776),
	NP_AY(110, 98, 88, 81, 81, 86, 82, 82, 86, 99),
	NP_CO(193, 137, 179, 255)
);

NP_SH(
	heart1_enabled1,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(765, 752, 749, 755, 762, 764, 769, 776, 781, 778),
	NP_AY(110, 96, 89, 81, 82, 85, 81, 82, 88, 98),
	NP_CO(193, 137, 179, 255)
);

NP_SH(
	heart1_enabled2,
	NP_VS(8),
	NP_VX(8),
	NP_VY(8),
	NP_AX(765, 752, 749, 755, 765, 771, 781, 778),
	NP_AY(110, 98, 89, 81, 85, 81, 86, 97),
	NP_CO(193, 137, 179, 255)
);

NP_SH(
	heart2_enabled0,
	NP_VS(8),
	NP_VX(8),
	NP_VY(8),
	NP_AX(765, 752, 750, 755, 765, 775, 781, 778),
	NP_AY(150, 139, 129, 121, 125, 121, 128, 137),
	NP_CO(193, 137, 179, 255)
);

NP_SH(
	heart2_enabled1,
	NP_VS(9),
	NP_VX(9),
	NP_VY(9),
	NP_AX(766, 777, 780, 776, 769, 763, 760, 751, 750),
	NP_AY(150, 138, 127, 122, 121, 126, 121, 126, 134),
	NP_CO(193, 137, 179, 255)
);

NP_SH(
	heart2_enabled2,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(765, 769, 776, 781, 779, 765, 752, 750, 755, 761),
	NP_AY(126, 121, 122, 127, 138, 150, 139, 127, 122, 122),
	NP_CO(193, 137, 179, 255)
);

NP_SH(
	heart0_disabled0,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(765, 752, 750, 755, 762, 765, 769, 776, 780, 778),
	NP_AY(69, 57, 46, 40, 41, 45, 40, 41, 46, 57),
	NP_CO(52, 40, 74, 255)
);

NP_SH(
	heart0_disabled1,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(765, 777, 780, 776, 769, 765, 762, 754, 750, 752),
	NP_AY(69, 58, 51, 41, 41, 45, 41, 41, 50, 58),
	NP_CO(52, 40, 74, 255)
);

NP_SH(
	heart0_disabled2,
	NP_VS(11),
	NP_VX(11),
	NP_VY(11),
	NP_AX(754, 750, 753, 764, 778, 779, 780, 776, 768, 764, 762),
	NP_AY(41, 48, 56, 69, 57, 53, 45, 41, 40, 45, 40),
	NP_CO(52, 40, 74, 255)
);

NP_SH(
	heart1_disabled0,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(765, 777, 781, 775, 767, 764, 762, 754, 750, 752),
	NP_AY(110, 98, 92, 82, 82, 86, 81, 81, 90, 98),
	NP_CO(52, 40, 74, 255)
);

NP_SH(
	heart1_disabled1,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(765, 777, 781, 776, 768, 764, 762, 755, 749, 752),
	NP_AY(111, 97, 91, 82, 82, 86, 82, 82, 87, 99),
	NP_CO(52, 40, 74, 255)
);

NP_SH(
	heart1_disabled2,
	NP_VS(8),
	NP_VX(8),
	NP_VY(8),
	NP_AX(765, 752, 749, 756, 766, 768, 780, 777),
	NP_AY(110, 98, 86, 81, 86, 81, 86, 99),
	NP_CO(52, 40, 74, 255)
);

NP_SH(
	heart2_disabled0,
	NP_VS(9),
	NP_VX(9),
	NP_VY(9),
	NP_AX(765, 752, 750, 755, 765, 769, 776, 780, 779),
	NP_AY(150, 138, 131, 121, 126, 122, 123, 127, 137),
	NP_CO(52, 40, 74, 255)
);

NP_SH(
	heart2_disabled1,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(765, 777, 781, 776, 769, 765, 762, 754, 750, 753),
	NP_AY(150, 138, 131, 123, 122, 126, 122, 122, 131, 139),
	NP_CO(52, 40, 74, 255)
);

NP_SH(
	heart2_disabled2,
	NP_VS(9),
	NP_VX(9),
	NP_VY(9),
	NP_AX(764, 752, 750, 755, 763, 764, 771, 780, 780),
	NP_AY(150, 138, 129, 122, 122, 127, 122, 127, 134),
	NP_CO(52, 40, 74, 255)
);

// GAME OVER

NP_SH(
	gameover_shade,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(0, 800, 800, 0),
	NP_AY(0, 0, 500, 500),
	NP_CO(0, 1,15, 100)
);

NP_SH(
	gameover0_G0_0,
	NP_VS(15),
	NP_VX(15),
	NP_VY(15),
	NP_AX(114, 96, 97, 105, 159, 171, 159, 146, 123, 123, 145, 135, 160, 170, 160),
	NP_AY(174, 152, 71, 65, 66, 92, 112, 89, 90, 152, 151, 130, 130, 155, 174),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover0_A0_0,
	NP_VS(16),
	NP_VX(16),
	NP_VY(16),
	NP_AX(180, 171, 176, 176, 171, 192, 222, 247, 244, 241, 245, 237, 219, 218, 200, 199),
	NP_AY(174, 158, 156, 111, 109, 66, 65, 111, 112, 154, 159, 174, 174, 133, 134, 175),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover0_A0_1,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(191, 201, 216, 225),
	NP_AY(109, 88, 88, 113),
	NP_CO(2, 19, 26, 255)
);

NP_SH(
	gameover0_M0_0,
	NP_VS(18),
	NP_VX(18),
	NP_VY(18),
	NP_AX(256, 249, 251, 252, 247, 279, 291, 301, 335, 330, 331, 335, 325, 308, 307, 291, 276, 276),
	NP_AY(175, 155, 155, 72.2, 68, 67, 89, 68, 68, 72, 156, 157, 175, 174, 105, 132, 106, 175),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover0_E0_0,
	NP_VS(15),
	NP_VX(15),
	NP_VY(15),
	NP_AX(346, 336, 340, 339, 346, 407, 407, 365, 365, 397, 394, 364, 364, 403, 389),
	NP_AY(174, 155, 152, 69, 66, 70, 90, 90, 109, 112, 132, 133, 152, 152, 174),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover0_O0_0,
	NP_VS(9),
	NP_VX(9),
	NP_VY(9),
	NP_AX(444, 425, 429, 430, 435, 493, 494, 497, 479),
	NP_AY(174, 135, 132, 71, 69, 68, 136, 136, 175),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover0_O0_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(454, 448, 451, 473, 476, 468),
	NP_AY(152, 135, 91, 90, 136, 153),
	NP_CO(2, 19, 26, 255)
);

NP_SH(
	gameover0_V0_0,
	NP_VS(12),
	NP_VX(12),
	NP_VY(12),
	NP_AX(520, 502, 507, 529, 527, 534, 545, 552, 549, 571, 575, 556),
	NP_AY(172, 135, 68, 68, 135, 153, 153, 135, 68, 69, 134, 174),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover0_E1_0,
	NP_VS(13),
	NP_VX(13),
	NP_VY(13),
	NP_AX(575, 563, 571, 638, 636, 595, 595, 626, 626, 595, 595, 631, 622),
	NP_AY(174, 152, 66, 69, 89, 90, 111, 111, 132, 132, 153, 152, 172),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover0_R0_0,
	NP_VS(11),
	NP_VX(11),
	NP_VY(11),
	NP_AX(643, 635, 639, 698, 710, 689, 702, 704, 681, 662, 658),
	NP_AY(174, 156, 68, 68, 95, 134, 155, 176, 173, 131, 174),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover0_R0_1,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(661, 653, 687, 676),
	NP_AY(111, 89, 88, 112),
	NP_CO(2, 19, 26, 255)
);

NP_SH(
	gameover1_G0_0,
	NP_VS(14),
	NP_VX(14),
	NP_VY(14),
	NP_AX(160, 99, 99, 113, 161, 169, 159, 136, 147, 122, 124, 149, 158, 169),
	NP_AY(68, 69, 155, 173, 173, 151, 132, 131, 152, 152, 91, 91, 109, 89),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover1_A0_0,
	NP_VS(13),
	NP_VX(13),
	NP_VY(13),
	NP_AX(179, 171, 174, 171, 192, 225, 246, 243, 235, 220, 219, 197, 197),
	NP_AY(173, 157, 110, 109, 67, 67, 108, 156, 175, 172, 131, 132, 175),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover1_A0_1,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(193, 203, 216, 226),
	NP_AY(110, 89, 90, 111),
	NP_CO(2, 19, 26, 255)
);

NP_SH(
	gameover1_M0_0,
	NP_VS(14),
	NP_VX(14),
	NP_VY(14),
	NP_AX(257, 249, 248, 280, 291, 301, 334, 332, 325, 309, 306, 291, 274, 275),
	NP_AY(174, 154, 68, 68, 88, 67, 67, 157, 175, 175, 105, 131, 105, 174),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover1_E0_0,
	NP_VS(13),
	NP_VX(13),
	NP_VY(13),
	NP_AX(346, 338, 343, 406, 405, 364, 365, 397, 395, 364, 364, 402, 390),
	NP_AY(174, 154, 68, 67, 91, 90, 111, 111, 133, 133, 152, 152, 175),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover1_O0_0,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(443, 423, 430, 494, 498, 479),
	NP_AY(172, 135, 67, 68, 138, 174),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover1_O0_1,
	NP_VS(6),
	NP_VX(6),
	NP_VY(6),
	NP_AX(455, 447, 450, 473, 476, 469),
	NP_AY(153, 135, 88, 88, 138, 152),
	NP_CO(2, 19, 26, 255)
);

NP_SH(
	gameover1_V0_0,
	NP_VS(12),
	NP_VX(12),
	NP_VY(12),
	NP_AX(520, 501, 506, 527, 524, 532, 544, 552, 549, 570, 575, 556),
	NP_AY(173, 135, 67, 69, 135, 151, 151, 134, 69, 68, 138, 174),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover1_E1_0,
	NP_VS(13),
	NP_VX(13),
	NP_VY(13),
	NP_AX(576, 563, 571, 634, 636, 594, 596, 626, 628, 595, 594, 633, 622),
	NP_AY(174, 152, 68, 68, 91, 90, 111, 111, 132, 133, 152, 152, 174),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover1_R0_0,
	NP_VS(11),
	NP_VX(11),
	NP_VY(11),
	NP_AX(643, 633, 635, 699, 709, 688, 705, 704, 683, 664, 661),
	NP_AY(173, 156, 66, 66, 93, 135, 156, 175, 174, 133, 174),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover1_R0_1,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(659, 654, 688, 678),
	NP_AY(112, 89, 88, 110),
	NP_CO(2, 19, 26, 255)
);

NP_SH(
	gameover2_G0_0,
	NP_VS(16),
	NP_VX(16),
	NP_VY(16),
	NP_AX(114, 104, 98, 97, 104, 160, 171, 159, 148, 123, 123, 145, 137, 163, 171, 160),
	NP_AY(174, 155, 153, 71, 68, 66, 91, 113, 91, 90, 154, 152, 133, 132, 158, 175),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover2_A0_0,
	NP_VS(16),
	NP_VX(16),
	NP_VY(16),
	NP_AX(180, 171, 176, 177, 171, 192, 225, 247, 241, 242, 245, 237, 217, 219, 199, 199),
	NP_AY(175, 158, 155, 111, 108, 67, 67, 111, 115, 154, 156, 174, 174, 132, 132, 176),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover2_A0_1,
	NP_VS(4),
	NP_VX(4),
	NP_VY(4),
	NP_AX(192, 203, 216, 225),
	NP_AY(111, 87, 88, 111),
	NP_CO(2, 19, 26, 255)
);

NP_SH(
	gameover2_M0_0,
	NP_VS(18),
	NP_VX(18),
	NP_VY(18),
	NP_AX(257, 247, 253, 252, 246, 282, 291, 303, 335, 329, 329, 335, 324, 306, 306, 292, 273, 275),
	NP_AY(173, 156, 154, 72, 66, 66, 88, 65, 66, 71, 155, 159, 174, 174, 104, 133, 103, 175),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover2_E0_0,
	NP_VS(16),
	NP_VX(16),
	NP_VY(16),
	NP_AX(346, 335, 341, 341, 346, 402, 408, 407, 364, 365, 396, 395, 362, 365, 402, 391),
	NP_AY(174, 156, 152, 72, 66, 67, 73, 91, 91, 111, 111, 132, 133, 151, 152, 172),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover2_O0_0,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(444, 422, 428, 428, 434, 488, 496, 496, 500, 478),
	NP_AY(173, 135, 131, 69, 66, 67, 71, 133, 139, 174),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover2_O0_1,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(454, 445, 449, 450, 455, 467, 474, 474, 476, 468),
	NP_AY(151, 135, 131, 91, 86, 88, 94, 133, 137, 152),
	NP_CO(2, 19, 26, 255)
);

NP_SH(
	gameover2_V0_0,
	NP_VS(20),
	NP_VX(20),
	NP_VY(20),
	NP_AX(521, 501, 506, 506, 513, 523, 530, 529, 522, 532, 544, 553, 550, 550, 556, 567, 573, 572, 576, 555),
	NP_AY(172, 137, 132, 72, 66, 66, 73, 134, 136, 152, 152, 135, 131, 71, 67, 68, 74, 132, 138, 174),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover2_E1_0,
	NP_VS(13),
	NP_VX(13),
	NP_VY(13),
	NP_AX(575, 559, 576, 636, 638, 595, 597, 623, 627, 592, 595, 629, 621),
	NP_AY(174, 139, 68, 68, 90, 88, 111, 111, 133, 133, 153, 152, 174),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover2_R0_0,
	NP_VS(13),
	NP_VX(13),
	NP_VY(13),
	NP_AX(641, 633, 639, 634, 698, 708, 688, 698, 705, 705, 684, 662, 661),
	NP_AY(174, 156, 152, 67, 67, 91, 134, 154, 155, 175, 174, 131, 176),
	NP_CO(139, 112, 178, 255)
);

NP_SH(
	gameover2_R0_1,
	NP_VS(5),
	NP_VX(5),
	NP_VY(5),
	NP_AX(660, 659, 652, 687, 676),
	NP_AY(111, 93, 89, 88, 110),
	NP_CO(2, 19, 26, 255)
);

// HOUSE ITEM

NP_SH(
	house0_0,
	NP_VS(9),
	NP_VX(9),
	NP_VY(9),
	NP_AX(386, 386, 404, 422, 421, 408, 408, 401, 400),
	NP_AY(372, 355, 341, 357, 373, 373, 361, 361, 373),
	NP_CO(221, 239, 215, 255)
);

NP_SH(
	house0_1,
	NP_VS(10),
	NP_VX(10),
	NP_VY(10),
	NP_AX(382, 378, 403, 414, 413, 422, 422, 431, 426, 403),
	NP_AY(357, 352, 332, 339, 332, 333, 347, 354, 356, 338),
	NP_CO(221, 239, 215, 255)
);

NP_SH(
	house1_0,
	NP_VS(11),
	NP_VX(11),
	NP_VY(11),
	NP_AX(389, 386, 386, 403, 422, 422, 421, 407, 407, 399, 400),
	NP_AY(373, 372, 355, 341, 357, 371, 373, 372, 361, 361, 373),
	NP_CO(221, 239, 215, 255)
);

NP_SH(
	house1_1,
	NP_VS(11),
	NP_VX(11),
	NP_VY(11),
	NP_AX(382, 378, 401, 405, 414, 414, 421, 421, 428, 425, 403),
	NP_AY(356, 352, 334, 332, 341, 332, 334, 346, 353, 357, 338),
	NP_CO(221, 239, 215, 255)
);

NP_SH(
	house2_0,
	NP_VS(12),
	NP_VX(12),
	NP_VY(12),
	NP_AX(386, 386, 404, 421, 421, 421, 407, 408, 400, 400, 388, 386),
	NP_AY(362, 355, 341, 356, 369, 373, 373, 361, 361, 373, 373, 371),
	NP_CO(221, 239, 215, 255)
);

NP_SH(
	house2_1,
	NP_VS(11),
	NP_VX(11),
	NP_VY(11),
	NP_AX(382, 378, 400, 405, 414, 414, 422, 421, 429, 425, 403),
	NP_AY(357, 352, 335, 333, 341, 333, 333, 346, 353, 357, 337),
	NP_CO(221, 239, 215, 255)
);



#endif
