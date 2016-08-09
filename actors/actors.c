
#include "actors.h"
#include "keys/keys.h"

void init_actors(){

	init_keys();
	
}

void cache_actors(float r, int p_x, int p_y){
	
	cache_keys(r, p_x, p_y);
	
}

void del_actors(){
	
	del_keys();

}
