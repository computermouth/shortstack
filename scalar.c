
#include "scalar.h"
#include "config.h"

scalar_t init_scalar(god_t* god){
	
	scalar_t scalar = {
	
		.d_w			= 800,
		.d_h			= 500,
		.n_w			= scalar.d_w,
		.n_h			= scalar.d_h,
		.cached_w		= scalar.d_w,
		.cached_h		= scalar.d_h,
		.r				= 1.0,
		.scale			= 1,
		.p_x			= 0,
		.p_y			= 0,
		.focus			= 1,
		.fs				= 0,
		.min			= 0,
		.quit 			= 0
	
	};
	
	return scalar;
}

int init_sdl(god_t *god){
	
	if(SDL_Init(SDL_INIT_VIDEO) >= 0){
		god->sdl.window = SDL_CreateWindow("shortstack",
			SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
			god->scalar.n_w, god->scalar.n_h, 
			SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
		
		if(god->sdl.window != 0){
			
			god->sdl.renderer = SDL_CreateRenderer
				(god->sdl.window,
				-1, 
				SDL_RENDERER_ACCELERATED | 
				SDL_RENDERER_PRESENTVSYNC);
			
			SDL_ShowCursor(SDL_DISABLE);
			
			if (Mix_OpenAudio( 44100, MIX_DEFAULT_FORMAT, 2, 2048 ) < 0)
				return 1;
			
		}else{
			return 1;
		}
	}else{
		return 1;
	}
		
	return 0;
}

void set_scale(god_t *god){
	
	god->scalar.n_w = god->scalar.cached_w / god->scalar.scale;
	god->scalar.n_h = god->scalar.cached_h / god->scalar.scale;
	
	if(((float)god->scalar.n_w / (float)god->scalar.d_w) >= 
		((float)god->scalar.n_h / (float)god->scalar.d_h)){
		//larger width ratio
		god->scalar.r = ((float)god->scalar.n_h / 
			(float)god->scalar.d_h);
		god->scalar.p_x = ((god->scalar.n_w - 
			(god->scalar.d_w * god->scalar.r))) / 2;
		god->scalar.p_y	= 0;
	}else{
		//larger height ratio
		god->scalar.r = ((float)god->scalar.n_w / 
			(float)god->scalar.d_w);
		god->scalar.p_x	= 0;
		god->scalar.p_y	= ((god->scalar.n_h - 
			(god->scalar.d_h * god->scalar.r))) / 2;
	}
	
	save_config(god);
	
	SDL_RenderSetScale(god->sdl.renderer, god->scalar.scale, god->scalar.scale);

}

int window_event(god_t *god){
	int rc = 0;
	
	const Uint8* currentKeyStates = SDL_GetKeyboardState( NULL );
	if( god->sdl.e.type == SDL_WINDOWEVENT )
	{
		switch( god->sdl.e.window.event )
		{
			case SDL_WINDOWEVENT_SIZE_CHANGED:
				god->scalar.cached_w = god->sdl.e.window.data1;
				god->scalar.cached_h = god->sdl.e.window.data2;
				god->scalar.n_w = god->scalar.cached_w / god->scalar.scale;
				god->scalar.n_h = god->scalar.cached_h / god->scalar.scale;
				
				if(((float)god->scalar.n_w / (float)god->scalar.d_w) >= 
					((float)god->scalar.n_h / (float)god->scalar.d_h)){
					//larger width ratio
					god->scalar.r = ((float)god->scalar.n_h / 
						(float)god->scalar.d_h);
					god->scalar.p_x = ((god->scalar.n_w - 
						(god->scalar.d_w * god->scalar.r))) / 2;
					god->scalar.p_y	= 0;
				}else{
					//larger height ratio
					god->scalar.r = ((float)god->scalar.n_w / 
						(float)god->scalar.d_w);
					god->scalar.p_x	= 0;
					god->scalar.p_y	= ((god->scalar.n_h - 
						(god->scalar.d_h * god->scalar.r))) / 2;
				}
				
				SDL_RenderSetScale(god->sdl.renderer, god->scalar.scale, god->scalar.scale);
				break;
				
			case SDL_WINDOWEVENT_FOCUS_GAINED:
				god->scalar.focus = 1;
				break;

			case SDL_WINDOWEVENT_FOCUS_LOST:
				god->scalar.focus = 0;
				break;

			case SDL_WINDOWEVENT_MINIMIZED:
				god->scalar.min = 1;
				break;

			case SDL_WINDOWEVENT_MAXIMIZED:
				god->scalar.min = 0;
				break;
			
			case SDL_WINDOWEVENT_RESTORED:
				god->scalar.min = 0;
				break;
		}
	}
	if(god->sdl.e.type == SDL_KEYDOWN ){
		if( ((currentKeyStates[SDL_SCANCODE_RETURN]) && 
		((currentKeyStates[SDL_SCANCODE_RALT]) || 
		(currentKeyStates[SDL_SCANCODE_LALT]))) ){
			if( god->scalar.fs ){
				SDL_SetWindowFullscreen( god->sdl.window, SDL_FALSE );
				god->scalar.fs = 0;
			}else{
				SDL_SetWindowFullscreen( god->sdl.window, 
					SDL_WINDOW_FULLSCREEN_DESKTOP );
				god->scalar.fs = 1;
			}
			
			save_config(god);
			
			rc = 1;
		}
	}
	
	return rc;
}

void key_event(god_t *god){
	
	if( god->sdl.e.type == SDL_KEYDOWN ){
		switch(god->sdl.e.key.keysym.sym){
			case SDLK_ESCAPE:
				god->keystate.esc = 1;
				break;
			case SDLK_RETURN:
				god->keystate.ent = 1;
				break;
			case SDLK_UP:
				god->keystate.up = 1;
				break;
			case SDLK_DOWN:
				god->keystate.dn = 1;
				break;
			case SDLK_LEFT:
				god->keystate.lt = 1;
				break;
			case SDLK_RIGHT:
				god->keystate.rt = 1;
				break;
			case SDLK_w:
				god->keystate.w = 1;
				break;
			case SDLK_a:
				god->keystate.a = 1;
				break;
			case SDLK_s:
				god->keystate.s = 1;
				break;
			case SDLK_d:
				god->keystate.d = 1;
				break;
		}
	} else if ( god->sdl.e.type == SDL_KEYUP) {
		switch(god->sdl.e.key.keysym.sym){
			case SDLK_ESCAPE:
				god->keystate.esc = 0;
				break;
			case SDLK_RETURN:
				god->keystate.ent = 0;
				break;
			case SDLK_UP:
				god->keystate.up = 0;
				break;
			case SDLK_DOWN:
				god->keystate.dn = 0;
				break;
			case SDLK_LEFT:
				god->keystate.lt = 0;
				break;
			case SDLK_RIGHT:
				god->keystate.rt = 0;
				break;
			case SDLK_w:
				god->keystate.w = 0;
				break;
			case SDLK_a:
				god->keystate.a = 0;
				break;
			case SDLK_s:
				god->keystate.s = 0;
				break;
			case SDLK_d:
				god->keystate.d = 0;
				break;
		}
	}
}

void parse_event(god_t* god){
	
	while( SDL_PollEvent( &(god->sdl.e) )){
		switch(god->sdl.e.type){
			case SDL_QUIT:
				god->scalar.quit = 1;
				break;
			default:
				if ( ! window_event(god))
					key_event(god);
				break;
		}
	}
}
