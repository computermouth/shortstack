#include "keys.h"
#include "../../structs.h"

void init_keys(){
	
	init_idle();
	init_pressed();
	
	keys.anims[0] = idle;
	keys.anims[1] = pressed;
	keys.real = 2;
		
}

void cache_keys(float r, int p_x, int p_y){
	cache_idle(r, p_x, p_y);
	cache_pressed(r, p_x, p_y);
}

void del_keys(){
	del_idle();
	del_pressed();
}
