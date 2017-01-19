
#include <SDL2/SDL_mixer.h>

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
	god.audio = init_audio(&god);
		
	load_config(&god);
	
	if( god.scalar.fs )
		SDL_SetWindowFullscreen( god.sdl.window, 
			SDL_WINDOW_FULLSCREEN_DESKTOP );
	
	set_scale(&god);
	
	Mix_Volume(-1, (int)(128 * ((float)god.state.settings_volume / 10)) );
	
	return god;
}

audio_t init_audio(god_t* god){
	
	audio_t audio;
	
	audio.sound_ball_death		= NULL;
	audio.sound_menu_change		= NULL;
	audio.sound_menu_select		= NULL;
	audio.sound_paddle_hit		= NULL;
	audio.sound_portal			= NULL;
	audio.sound_top_hit			= NULL;
	audio.sound_wall_hit		= NULL;
	
	audio.sound_ball_death	= Mix_LoadWAV("audio/ball_death.wav");
	audio.sound_menu_change	= Mix_LoadWAV("audio/menu_change.wav");
	audio.sound_menu_select	= Mix_LoadWAV("audio/menu_select.wav");
	audio.sound_paddle_hit	= Mix_LoadWAV("audio/paddle_hit.wav");
	audio.sound_portal		= Mix_LoadWAV("audio/portal.wav");
	audio.sound_top_hit		= Mix_LoadWAV("audio/top_hit.wav");
	audio.sound_wall_hit		= Mix_LoadWAV("audio/wall_hit.wav");
	
	if( 	audio.sound_ball_death	== NULL ||
			audio.sound_menu_change	== NULL ||
			audio.sound_menu_select	== NULL ||
			audio.sound_paddle_hit	== NULL ||
			audio.sound_portal		== NULL ||
			audio.sound_top_hit		== NULL ||
			audio.sound_wall_hit	== NULL ){
		god->scalar.quit = 1;
		printf("Failed to load audio files, quitting...\n");
	}
	
	return audio;
}

void destroy_god(god_t* god){
	
	Mix_FreeChunk( god->audio.sound_ball_death );
	Mix_FreeChunk( god->audio.sound_menu_change );
	Mix_FreeChunk( god->audio.sound_menu_select );
	Mix_FreeChunk( god->audio.sound_paddle_hit );
	Mix_FreeChunk( god->audio.sound_portal );
	Mix_FreeChunk( god->audio.sound_top_hit );
	Mix_FreeChunk( god->audio.sound_wall_hit );
	
}
