
#ifndef _GOD_H_
#define _GOD_H_

#include "structs.h"

god_t init_god();
audio_t init_audio(god_t*);
void destroy_god(god_t*);

#endif
