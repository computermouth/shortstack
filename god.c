
#include "scalar.h"
#include "state.h"
#include "structs.h"
#include "config.h"

#include "god.h"

god_t init_god(){
	
	god_t god;
	god.scalar = init_scalar(&god);
	god.state = init_state();
	god.keystate = init_keystate();
	god.scalar.quit = init_sdl(&god);
	
	load_config(&god);
	
	if( god.scalar.fs )
		SDL_SetWindowFullscreen( god.sdl.window, 
			SDL_WINDOW_FULLSCREEN_DESKTOP );
	
	set_scale(&god);
	
	return god;
	
}
