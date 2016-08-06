
#ifndef _GFX_STRUCTS_
#define _GFX_STRUCTS_

struct Line{
	short x1;
	short x2;
	short y;
};
typedef struct Line liner;

struct Shape{
	liner *lines;
	float lastr;
	short x[50];
	short y[50];
	short points;
	short color[4];
	short z;
};
typedef struct Shape shape;

struct Frame{
	shape shapes[100];
	short top;
	short z;
	short real;
	float r;
};
typedef struct Frame frame;

struct Anim{
	frame frames[50]; 
	short real;
};
typedef struct Anim anim;

struct Actor{
	anim anims[25];
	short real;
};
typedef struct Actor actor;

void init_shape(shape *rec, short *, short *, short , short *, short);

#endif
