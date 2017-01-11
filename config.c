
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <libconfig.h>

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

int init_config(){

	struct stat st = {0};
	
	char *home_dir = getenv("HOME");
	char *local_dir = "/.local";
	char *share_dir = "/share";
	char *crunchball_dir = "/crunchball";
	char *file = "/crunchball.cfg";
	char tmp[500] = {0};
	
	cp_str(tmp, home_dir);	
	cat_to_str(tmp, local_dir);
	if (stat(tmp, &st) == -1) {
		mkdir(tmp, 0755);
	}
	
	cat_to_str(tmp, share_dir);
	if (stat(tmp, &st) == -1) {
		mkdir(tmp, 0755);
	}
	
	cat_to_str(tmp, crunchball_dir);
	if (stat(tmp, &st) == -1) {
		mkdir(tmp, 0755);
	}

	cat_to_str(tmp, file);
	
	config_t cfg;
	config_setting_t *root, *setting;

	config_init(&cfg);
	
	if (stat(tmp, &st) == -1) {

		root = config_root_setting(&cfg);

		setting = config_setting_add(root, "video_mode", CONFIG_TYPE_INT);
		config_setting_set_int(setting, 2);
		setting = config_setting_add(root, "audio_level", CONFIG_TYPE_INT);
		config_setting_set_int(setting, 7);
		setting = config_setting_add(root, "fullscreen", CONFIG_TYPE_INT);
		config_setting_set_int(setting, 0);
		setting = config_setting_add(root, "high_score", CONFIG_TYPE_INT);
		config_setting_set_int(setting, 10);

		if(! config_write_file(&cfg, tmp))
		{
			fprintf(stderr, "Error while writing file.\n");
			config_destroy(&cfg);
			return(1);
		}
	}

	config_destroy(&cfg);
	return(0);
}


int check_config(){
	
	char *home_dir = getenv("HOME");
	char *local_dir = "/.local";
	char *share_dir = "/share";
	char *crunchball_dir = "/crunchball";
	char *file = "/crunchball.cfg";
	char tmp[500] = {0};
	
	cp_str(tmp, home_dir);	
	cat_to_str(tmp, local_dir);
	cat_to_str(tmp, share_dir);
	cat_to_str(tmp, crunchball_dir);
	cat_to_str(tmp, file);

	
	config_t cfg;
	config_setting_t *root, *setting;

	config_init(&cfg);
	
	root = config_root_setting(&cfg);
	
	int test_int;
	
	if( (! config_read_file(&cfg, tmp) ) ||
		(!(config_setting_lookup_int(root, "video_mode", &test_int)
		&& config_setting_lookup_int(root, "audio_level", &test_int)
		&& config_setting_lookup_int(root, "fullscreen", &test_int)
		&& config_setting_lookup_int(root, "high_score", &test_int)))){
	
		struct stat st = {0};
		
		if (stat(tmp, &st) == 0) {
			remove(tmp);
			config_destroy(&cfg);
			
			config_init(&cfg);
		}
		
		root = config_root_setting(&cfg);
		
		setting = config_setting_add(root, "video_mode", CONFIG_TYPE_INT);
		config_setting_set_int(setting, 2);
		setting = config_setting_add(root, "audio_level", CONFIG_TYPE_INT);
		config_setting_set_int(setting, 7);
		setting = config_setting_add(root, "fullscreen", CONFIG_TYPE_INT);
		config_setting_set_int(setting, 0);
		setting = config_setting_add(root, "high_score", CONFIG_TYPE_INT);
		config_setting_set_int(setting, 10);

		if(! config_write_file(&cfg, tmp))
		{
			fprintf(stderr, "Error while writing file.\n");
			config_destroy(&cfg);
			return(1);
		}
	}

	config_destroy(&cfg);
	return(0);
	
}

void save_config(){

}
