
#include "window.h"
#include "config.h"

window_t init_window(){
	
	window_t window = {
	
		.window			= 0,
		.renderer		= 0,
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

int init_sdl(window_t *window){
	
	if(SDL_Init(SDL_INIT_VIDEO) >= 0){
		window->window = SDL_CreateWindow("shortstack",
			SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
			window->n_w, window->n_h, 
			SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
		
		if(window->window != 0){
			
			window->renderer = SDL_CreateRenderer
				(window->window,
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

void set_scaler(window_t *window){
	
	window->n_w = window->cached_w / window->scaler;
	window->n_h = window->cached_h / window->scaler;
	
	if(((float)window->n_w / (float)window->d_w) >= 
		((float)window->n_h / (float)window->d_h)){
		//larger width ratio
		window->r = ((float)window->n_h / 
			(float)window->d_h);
		window->p_x = ((window->n_w - 
			(window->d_w * window->r))) / 2;
		window->p_y	= 0;
	}else{
		//larger height ratio
		window->r = ((float)window->n_w / 
			(float)window->d_w);
		window->p_x	= 0;
		window->p_y	= ((window->n_h - 
			(window->d_h * window->r))) / 2;
	}
	
	SDL_RenderSetScale(window->renderer, window->scaler, window->scaler);

}

int window_event(window_t *window){
	int rc = 0;
	
	const Uint8* currentKeyStates = SDL_GetKeyboardState( NULL );
	if( window->e.type == SDL_WINDOWEVENT )
	{
		switch( window->e.window.event )
		{
			case SDL_WINDOWEVENT_SIZE_CHANGED:
				window->cached_w = window->e.window.data1;
				window->cached_h = window->e.window.data2;
				window->n_w = window->cached_w / window->scaler;
				window->n_h = window->cached_h / window->scaler;
				
				if(((float)window->n_w / (float)window->d_w) >= 
					((float)window->n_h / (float)window->d_h)){
					//larger width ratio
					window->r = ((float)window->n_h / 
						(float)window->d_h);
					window->p_x = ((window->n_w - 
						(window->d_w * window->r))) / 2;
					window->p_y	= 0;
				}else{
					//larger height ratio
					window->r = ((float)window->n_w / 
						(float)window->d_w);
					window->p_x	= 0;
					window->p_y	= ((window->n_h - 
						(window->d_h * window->r))) / 2;
				}
				
				SDL_RenderSetScale(window->renderer, window->scaler, window->scaler);
				break;
				
			case SDL_WINDOWEVENT_FOCUS_GAINED:
				window->focus = 1;
				break;

			case SDL_WINDOWEVENT_FOCUS_LOST:
				window->focus = 0;
				break;

			case SDL_WINDOWEVENT_MINIMIZED:
				window->min = 1;
				break;

			case SDL_WINDOWEVENT_MAXIMIZED:
				window->min = 0;
				break;
			
			case SDL_WINDOWEVENT_RESTORED:
				window->min = 0;
				break;
		}
	}
	if( window->e.type == SDL_KEYDOWN ){
		if( ((currentKeyStates[SDL_SCANCODE_RETURN]) && 
		((currentKeyStates[SDL_SCANCODE_RALT]) || 
		(currentKeyStates[SDL_SCANCODE_LALT]))) ){
			if( window->fs ){
				SDL_SetWindowFullscreen( window->window, SDL_FALSE );
				window->fs = 0;
			}else{
				SDL_SetWindowFullscreen( window->window, 
					SDL_WINDOW_FULLSCREEN_DESKTOP );
				window->fs = 1;
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

void parse_event(window_t *window, state_t *state){
	
	while( SDL_PollEvent( &(window->e) )){
		switch(window->e.type){
			case SDL_QUIT:
				window->quit++;
				break;
			default:
				if ( ! window_event(window))
					key_event( &(window->e) , state);
				break;
		}
	}
}
