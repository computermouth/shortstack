#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

stack init_stack(){
	stack i;
	
	i.maxsize = 32;
	i.real = -1;
	i.top = -1;
	i.stk = calloc(i.maxsize, sizeof(frame));
	
	return i;
}

stack push_stack(stack g_stack, frame g_frame){
		
	if(g_stack.top == g_stack.maxsize){
		g_stack.maxsize+=32;
		frame *new = calloc(g_stack.maxsize, sizeof(frame));
		memcpy(new, g_stack.stk, (g_stack.maxsize-32)*sizeof(frame));
		free(g_stack.stk);
		
		g_stack.stk = new;
	}
	
	g_stack.top++;
	g_stack.real++;
	g_stack.stk[g_stack.top] = g_frame;
	
	//wasteful sort
	frame key;
	int j;
	
	for ( j = 0 ; j <= g_stack.top ; j++ ){
		key = g_stack.stk[j];
		int i = j - 1;
		while ( i >= 0 && g_stack.stk[i].z > key.z ) {
			g_stack.stk[i + 1] = g_stack.stk[i];
			i = i - 1;
		}    
		g_stack.stk[i + 1] = key;
	}
	
	return g_stack;
}

void pop_stack(stack *g_stack){
	g_stack->top--;
	if(g_stack->top == 0)
		g_stack->real = 0;
	
	//~ return g_stack;
}

void del_stack(stack g_stack){

	free(g_stack.stk);
}
