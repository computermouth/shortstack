
#ifndef _STACK_H_
#define _STACK_H_

#include "../gfx_structs.h"

struct Stack{
	int maxsize;
	int real;
	frame *stk;
	int top;
};
typedef struct Stack stack;

//~ shape init_shape(short *, short *, short, short *, short);
//~ void print_shape(shape);
//~ void del_shape(shape);

//~ frame push_frame(frame, shape);
//~ frame pop_frame(frame);
//~ void print_frame(frame);
//~ void del_frame(frame);

stack init_stack();
stack push_stack(stack, frame);
stack pop_stack(stack);
//~ void print_stack(stack);
void del_stack(stack);

#endif
