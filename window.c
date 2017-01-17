
#include "window.h"
#include "config.h"

window_t init_window(){
	
	window_t window = {
	
		.d_w			= 800,
		.d_h			= 500,
		.n_w			= window.d_w,
		.n_h			= window.d_h,
		.cached_w		= window.d_w,
		.cached_h		= window.d_h,
		.r				= 1.0,
		.scaler			= 1,
		.p_x			= 0,
		.p_y			= 0,
		.focus			= 1,
		.fs				= 0,
		.min			= 0,
		.quit 			= 0
	
	};
	
	load_config(&window);
	
	return window;
}

int init_sdl(god_t *god){
	
	if(SDL_Init(SDL_INIT_VIDEO) >= 0){
		god->sdl.window = SDL_CreateWindow("shortstack",
			SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
			god->window.n_w, god->window.n_h, 
			SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
		
		if(god->sdl.window != 0){
			
			god->sdl.renderer = SDL_CreateRenderer
				(god->sdl.window,
				-1, 
				SDL_RENDERER_ACCELERATED | 
				SDL_RENDERER_PRESENTVSYNC);
		SDL_ShowCursor(SDL_DISABLE);
		}else{
			return 1;
		}
	}else{
		return 1;
	}
	
	return 0;
}

void set_scaler(god_t *god){
	
	god->window.n_w = god->window.cached_w / god->window.scaler;
	god->window.n_h = god->window.cached_h / god->window.scaler;
	
	if(((float)god->window.n_w / (float)god->window.d_w) >= 
		((float)god->window.n_h / (float)god->window.d_h)){
		//larger width ratio
		god->window.r = ((float)god->window.n_h / 
			(float)god->window.d_h);
		god->window.p_x = ((god->window.n_w - 
			(god->window.d_w * god->window.r))) / 2;
		god->window.p_y	= 0;
	}else{
		//larger height ratio
		god->window.r = ((float)god->window.n_w / 
			(float)god->window.d_w);
		god->window.p_x	= 0;
		god->window.p_y	= ((god->window.n_h - 
			(god->window.d_h * god->window.r))) / 2;
	}
	
	SDL_RenderSetScale(god->sdl.renderer, god->window.scaler, god->window.scaler);

}

int window_event(god_t *god){
	int rc = 0;
	
	const Uint8* currentKeyStates = SDL_GetKeyboardState( NULL );
	if( god->sdl.e.type == SDL_WINDOWEVENT )
	{
		switch( god->sdl.e.window.event )
		{
			case SDL_WINDOWEVENT_SIZE_CHANGED:
				god->window.cached_w = god->sdl.e.window.data1;
				god->window.cached_h = god->sdl.e.window.data2;
				god->window.n_w = god->window.cached_w / god->window.scaler;
				god->window.n_h = god->window.cached_h / god->window.scaler;
				
				if(((float)god->window.n_w / (float)god->window.d_w) >= 
					((float)god->window.n_h / (float)god->window.d_h)){
					//larger width ratio
					god->window.r = ((float)god->window.n_h / 
						(float)god->window.d_h);
					god->window.p_x = ((god->window.n_w - 
						(god->window.d_w * god->window.r))) / 2;
					god->window.p_y	= 0;
				}else{
					//larger height ratio
					god->window.r = ((float)god->window.n_w / 
						(float)god->window.d_w);
					god->window.p_x	= 0;
					god->window.p_y	= ((god->window.n_h - 
						(god->window.d_h * god->window.r))) / 2;
				}
				
				SDL_RenderSetScale(god->sdl.renderer, god->window.scaler, god->window.scaler);
				break;
				
			case SDL_WINDOWEVENT_FOCUS_GAINED:
				god->window.focus = 1;
				break;

			case SDL_WINDOWEVENT_FOCUS_LOST:
				god->window.focus = 0;
				break;

			case SDL_WINDOWEVENT_MINIMIZED:
				god->window.min = 1;
				break;

			case SDL_WINDOWEVENT_MAXIMIZED:
				god->window.min = 0;
				break;
			
			case SDL_WINDOWEVENT_RESTORED:
				god->window.min = 0;
				break;
		}
	}
	if(god->sdl.e.type == SDL_KEYDOWN ){
		if( ((currentKeyStates[SDL_SCANCODE_RETURN]) && 
		((currentKeyStates[SDL_SCANCODE_RALT]) || 
		(currentKeyStates[SDL_SCANCODE_LALT]))) ){
			if( god->window.fs ){
				SDL_SetWindowFullscreen( god->sdl.window, SDL_FALSE );
				god->window.fs = 0;
			}else{
				SDL_SetWindowFullscreen( god->sdl.window, 
					SDL_WINDOW_FULLSCREEN_DESKTOP );
				god->window.fs = 1;
			}
			
			rc = 1;
		}
	}
	
	return rc;
}

void key_event(SDL_Event *e, state_t *state){
	
	if( e->type == SDL_KEYDOWN ){
		switch(e->key.keysym.sym){
			case SDLK_ESCAPE:
				state->k.esc = 1;
				break;
			case SDLK_RETURN:
				state->k.ent = 1;
				break;
			case SDLK_UP:
				state->k.up = 1;
				break;
			case SDLK_DOWN:
				state->k.dn = 1;
				break;
			case SDLK_LEFT:
				state->k.lt = 1;
				break;
			case SDLK_RIGHT:
				state->k.rt = 1;
				break;
			case SDLK_w:
				state->k.w = 1;
				break;
			case SDLK_a:
				state->k.a = 1;
				break;
			case SDLK_s:
				state->k.s = 1;
				break;
			case SDLK_d:
				state->k.d = 1;
				break;
		}
	} else if ( e->type == SDL_KEYUP) {
		switch(e->key.keysym.sym){
			case SDLK_ESCAPE:
				state->k.esc = 0;
				break;
			case SDLK_RETURN:
				state->k.ent = 0;
				break;
			case SDLK_UP:
				state->k.up = 0;
				break;
			case SDLK_DOWN:
				state->k.dn = 0;
				break;
			case SDLK_LEFT:
				state->k.lt = 0;
				break;
			case SDLK_RIGHT:
				state->k.rt = 0;
				break;
			case SDLK_w:
				state->k.w = 0;
				break;
			case SDLK_a:
				state->k.a = 0;
				break;
			case SDLK_s:
				state->k.s = 0;
				break;
			case SDLK_d:
				state->k.d = 0;
				break;
		}
	}
}

void parse_event(god_t* god){
	
	while( SDL_PollEvent( &(god->sdl.e) )){
		switch(god->sdl.e.type){
			case SDL_QUIT:
				god->window.quit++;
				break;
			default:
				if ( ! window_event(god))
					key_event( &(god->sdl.e), &god->state);
				break;
		}
	}
}
