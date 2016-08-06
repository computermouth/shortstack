#include "keys.h"
#include "../../structs.h"

void init_keys(){
	
	init_idle();
	init_pressed();
	
	keys.anims[0] = idle;
	keys.anims[1] = pressed;
	keys.real = 2;
		
}

void del_keys(){
	del_idle();
	del_pressed();
}
