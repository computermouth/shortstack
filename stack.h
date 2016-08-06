
#ifndef _STACK_H_
#define _STACK_H_

#include "structs.h"

struct Stack{
	int maxsize;
	int real;
	frame *stk;
	int top;
};
typedef struct Stack stack;

stack init_stack();
stack push_stack(stack, frame);
stack pop_stack(stack);
void del_stack(stack);

#endif
