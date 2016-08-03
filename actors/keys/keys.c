#include <string.h>

#include "keys.h"
#include "idle/idle.h"
#include "pressed/pressed.h"

void init_keys(){
	
	init_idle();
	init_pressed();
	
	keys.anims[0] = idle;
	keys.anims[1] = pressed;
	keys.real = 2;
		
}
