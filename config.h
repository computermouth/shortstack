
#ifndef _CONFIG_H_
#define _CONFIG_H_

#include "scalar.h"

void cp_str(char *, char *);
void cat_to_str(char *, char *);

void check_dirs();
void load_config(scalar_t*);
void save_config();

#endif
