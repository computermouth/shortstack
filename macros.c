
#include "macros.h"

void set_color(unsigned short* old_color, unsigned short color_code){

	unsigned short c0[4] = {0, 1, 15, 255};
	unsigned short c1[4] = {3, 30, 33, 255};
	unsigned short c2[4] = {8, 48, 18, 255};
	unsigned short c3[4] = {41, 63, 11, 255};
	unsigned short c4[4] = {81, 56, 20, 255};
	unsigned short c5[4] = {96, 48, 31, 255};
	unsigned short c6[4] = {106, 112, 43, 255};
	unsigned short c7[4] = {65, 130, 59, 255};
	unsigned short c8[4] = {77, 145, 128, 255};
	unsigned short c9[4] = {93, 122, 163, 2555};
	unsigned short c10[4] = {139, 112, 178, 255};
	unsigned short c11[4] = {193, 137, 179, 255};
	unsigned short c12[4] = {206, 164, 161, 255};
	unsigned short c13[4] = {221, 218, 184, 255};
	unsigned short c14[4] = {221, 239, 215, 255};
	unsigned short c15[4] = {242, 249, 246, 255};
	
	unsigned short oops[4] = {0, 255, 0, 255};

	switch (color_code){
		case 0:
			memcpy(old_color, &c0, 4*sizeof(unsigned short));
			break;
		case 1:
			memcpy(old_color, &c1, 4*sizeof(unsigned short));
			break;
		case 2:
			memcpy(old_color, &c2, 4*sizeof(unsigned short));
			break;
		case 3:
			memcpy(old_color, &c3, 4*sizeof(unsigned short));
			break;
		case 4:
			memcpy(old_color, &c4, 4*sizeof(unsigned short));
			break;
		case 5:
			memcpy(old_color, &c5, 4*sizeof(unsigned short));
			break;
		case 6:
			memcpy(old_color, &c6, 4*sizeof(unsigned short));
			break;
		case 7:
			memcpy(old_color, &c7, 4*sizeof(unsigned short));
			break;
		case 8:
			memcpy(old_color, &c8, 4*sizeof(unsigned short));
			break;
		case 9:
			memcpy(old_color, &c9, 4*sizeof(unsigned short));
			break;
		case 10:
			memcpy(old_color, &c10, 4*sizeof(unsigned short));
			break;
		case 11:
			memcpy(old_color, &c11, 4*sizeof(unsigned short));
			break;
		case 12:
			memcpy(old_color, &c12, 4*sizeof(unsigned short));
			break;
		case 13:
			memcpy(old_color, &c13, 4*sizeof(unsigned short));
			break;
		case 14:
			memcpy(old_color, &c14, 4*sizeof(unsigned short));
			break;
		case 15:
			memcpy(old_color, &c15, 4*sizeof(unsigned short));
			break;
		default:
			memcpy(old_color, &oops, 4*sizeof(unsigned short));
			break;
	}
}

