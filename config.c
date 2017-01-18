
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <confuse.h>

#include "scalar.h"
#include "config.h"


void cp_str(char *target, char *source){
   while(*source)
   {
      *target = *source;
      source++;
      target++;
   }
   *target = '\0';
}

void cat_to_str(char *target, char *source){
   while(*target)
   {
      target++;
   }
   cp_str(target, source);
}

void check_dirs(){

	struct stat st = {0};
	
	char *home_dir = getenv("HOME");
	char *local_dir = "/.local";
	char *share_dir = "/share";
	char *crunchball_dir = "/crunchball";
	char *conf_file = "/crunchball.cfg";
	char tmp_path[500] = {0};
	
	cp_str(tmp_path, home_dir);	
	cat_to_str(tmp_path, local_dir);
	if (stat(tmp_path, &st) == -1) {
		mkdir(tmp_path, 0755);
	}
	
	cat_to_str(tmp_path, share_dir);
	if (stat(tmp_path, &st) == -1) {
		mkdir(tmp_path, 0755);
	}
	
	cat_to_str(tmp_path, crunchball_dir);
	if (stat(tmp_path, &st) == -1) {
		mkdir(tmp_path, 0755);
	}

	cat_to_str(tmp_path, conf_file);
	
	if (stat(tmp_path, &st) == -1) {
		
		long int video_mode = 2;
		long int audio_level = 7;
		long int fullscreen = 0;
		long int high_score = 0;

		cfg_opt_t opts[] = {
			CFG_SIMPLE_INT("video_mode", &video_mode),
			CFG_SIMPLE_INT("audio_level", &audio_level),
			CFG_SIMPLE_INT("fullscreen", &fullscreen),
			CFG_SIMPLE_INT("high_score", &high_score),
			CFG_END()
		};
		cfg_t *cfg;

		cfg = cfg_init(opts, 0);


		FILE *fp = fopen(tmp_path, "w");
		cfg_print(cfg, fp);

		fclose(fp);
		
		cfg_free(cfg);
	}
}

void load_config(god_t* god){
	check_dirs();

	char *home_dir = getenv("HOME");
	char *conf_file = "/.local/share/crunchball/crunchball.cfg";
	char tmp_path[500] = {0};
	
	cp_str(tmp_path, home_dir);	
	cat_to_str(tmp_path, conf_file);

	long int video_mode;
	long int audio_level;
	long int fullscreen;
	long int high_score;

	cfg_opt_t opts[] = {
		CFG_SIMPLE_INT("video_mode", &video_mode),
		CFG_SIMPLE_INT("audio_level", &audio_level),
		CFG_SIMPLE_INT("fullscreen", &fullscreen),
		CFG_SIMPLE_INT("high_score", &high_score),
		CFG_END()
	};
	cfg_t *cfg;

	cfg = cfg_init(opts, 0);
	int rc = cfg_parse(cfg, tmp_path);

	if ( rc != 0 ){
		video_mode = 2;
		audio_level = 7;
		fullscreen = 0;
		high_score = 0;
	}
	
	if (video_mode == 0)
		video_mode = 2;

	god->scalar.scale = video_mode;
	god->state.settings_volume = audio_level;
	god->state.high_score = high_score;
	god->scalar.fs = fullscreen;
	
	FILE *fp = fopen(tmp_path, "w");
	cfg_print(cfg, fp);

	fclose(fp);

	cfg_free(cfg);

}

void save_config(god_t* god){
	check_dirs();

	char *home_dir = getenv("HOME");
	char *conf_file = "/.local/share/crunchball/crunchball.cfg";
	char tmp_path[500] = {0};
	
	cp_str(tmp_path, home_dir);	
	cat_to_str(tmp_path, conf_file);

	long int video_mode;
	long int audio_level;
	long int fullscreen;
	long int high_score;

	cfg_opt_t opts[] = {
		CFG_SIMPLE_INT("video_mode", &video_mode),
		CFG_SIMPLE_INT("audio_level", &audio_level),
		CFG_SIMPLE_INT("fullscreen", &fullscreen),
		CFG_SIMPLE_INT("high_score", &high_score),
		CFG_END()
	};
	cfg_t *cfg;

	cfg = cfg_init(opts, 0);
	
	video_mode = god->scalar.scale;
	audio_level = god->state.settings_volume;
	fullscreen = god->scalar.fs;
	high_score = god->state.high_score;
	
	FILE *fp = fopen(tmp_path, "w");
	cfg_print(cfg, fp);

	fclose(fp);

	cfg_free(cfg);

}
