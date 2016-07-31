
#include <stdio.h>
#include "actors/actors.h"


int main(){
	
	init_actors();
	
	printf("%d\n", keys.anims[1].frames[1].shapes[1].points );
	
	return 0;
}
