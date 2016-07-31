
#include <stdio.h>
#include "gfx_assets.h"

int main(){
	
	init_gfx_assets();
	
	printf("%d\n", keys.anims[1].frames[1].shapes[1].points );
	
	return 0;
}
