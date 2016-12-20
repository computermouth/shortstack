
#ifndef _GFX_STRUCTS_
#define _GFX_STRUCTS_

struct Line{
	int xa;
	int xb;
	int y;
};
typedef struct Line liner;

struct Shape{
	liner *lines;
	short line_cnt;
	float old_ratio;
	short *x;
	short *y;
	unsigned short *color;
};
typedef struct Shape shape;

#endif
