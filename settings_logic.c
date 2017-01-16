
#include "settings_logic.h"
#include "settings_logic_shapes.c"

void settings_logic(state_t* state, window_t *window){
	
		
	if(state->settings_select < 2 && state->k.dn){
		state->settings_select++;
		state->k.dn = 0;
	}
	if(state->settings_select > 0 && state->k.up){
		state->settings_select--;
		state->k.up = 0;
	}
	if(state->settings_select == 0 && state->k.lt && window->scaler > 1){
		
		if(window->scaler == 2) window->scaler = 1;
		else if (window->scaler == 4) window->scaler = 2;
		else if (window->scaler == 8) window->scaler = 4;
		else if (window->scaler == 16) window->scaler = 8;
		else window->scaler = 2;
		state->k.lt = 0;
		set_scaler(window);
		
	}
	if(state->settings_select == 0 && state->k.rt && window->scaler < 16){
		
		if(window->scaler == 1) window->scaler = 2;
		else if (window->scaler == 2) window->scaler = 4;
		else if (window->scaler == 4) window->scaler = 8;
		else if (window->scaler == 8) window->scaler = 16;
		else window->scaler = 2;
		state->k.rt = 0;
		set_scaler(window);
		
	}
	if(state->settings_select == 1 && state->k.lt && state->settings_volume > 0){
		state->settings_volume--;
		state->k.lt = 0;
	}
	if(state->settings_select == 1 && state->k.rt && state->settings_volume < 10){
		state->settings_volume++;
		state->k.rt = 0;
	}
	if(state->settings_select == 2 && state->k.ent){
		state->menu = 1;
		state->settings = 0;
		state->k.ent = 0;
	}
	
	
	switch (state->settings_select){
		case 0:
			if(state->frame < 4)
				settings_select_v0_0(window);
			else if(state->frame < 8)
				settings_select_v0_1(window);
			else
				settings_select_v0_2(window);
			break;
		case 1:
			if(state->frame < 4)
				settings_select_v1_0(window);
			else if(state->frame < 8)
				settings_select_v1_1(window);
			else
				settings_select_v1_2(window);
			break;
		case 2:
			if(state->frame < 4)
				settings_select_v2_0(window);
			else if(state->frame < 8)
				settings_select_v2_1(window);
			else
				settings_select_v2_2(window);
			break;
		default:
			state->settings_select = 0;
			break;
	}
	
	// ALWAYS DRAWS
	if(state->frame < 4){
		settings_camera0(window);
		
		settings_volume0_0(window);
		
		settings_home0_0(window);
		settings_home0_1(window);
		
		settings_1x_disabled0_0(window);
		settings_1x_disabled0_1(window);
		
		settings_2x_disabled0_0(window);
		settings_2x_disabled0_1(window);
		
		settings_4x_disabled0_0(window);
		settings_4x_disabled0_1(window);
		settings_4x_disabled0_2(window);
		
		settings_8x_disabled0_0(window);
		settings_8x_disabled0_1(window);
		settings_8x_disabled0_2(window);
		settings_8x_disabled0_3(window);
		
		settings_16x_disabled0_0(window);
		settings_16x_disabled0_1(window);
		settings_16x_disabled0_2(window);
		settings_16x_disabled0_3(window);
		
		settings_audempty0(window);
		
	} else if (state->frame < 8){
		settings_camera1(window);
		
		settings_volume1_0(window);
		
		settings_home1_0(window);
		settings_home1_1(window);
		
		settings_1x_disabled1_0(window);
		settings_1x_disabled1_1(window);
		
		settings_2x_disabled1_0(window);
		settings_2x_disabled1_1(window);
		
		settings_4x_disabled1_0(window);
		settings_4x_disabled1_1(window);
		settings_4x_disabled1_2(window);
		
		settings_8x_disabled1_0(window);
		settings_8x_disabled1_1(window);
		settings_8x_disabled1_2(window);
		settings_8x_disabled1_3(window);
		
		settings_16x_disabled1_0(window);
		settings_16x_disabled1_1(window);
		settings_16x_disabled1_2(window);
		settings_16x_disabled1_3(window);
		
		settings_audempty1(window);
	} else {
		settings_camera2(window);
		
		settings_volume2_0(window);
		
		settings_home2_0(window);
		settings_home2_1(window);
		
		settings_1x_disabled2_0(window);
		settings_1x_disabled2_1(window);
		
		settings_2x_disabled2_0(window);
		settings_2x_disabled2_1(window);
		
		settings_4x_disabled2_0(window);
		settings_4x_disabled2_1(window);
		settings_4x_disabled2_2(window);
		
		settings_8x_disabled2_0(window);
		settings_8x_disabled2_1(window);
		settings_8x_disabled2_2(window);
		settings_8x_disabled2_3(window);
		
		settings_16x_disabled2_0(window);
		settings_16x_disabled2_1(window);
		settings_16x_disabled2_2(window);
		settings_16x_disabled2_3(window);
		
		settings_audempty2(window);
	}
	
	// SCALER CONDITIONAL DRAWS
	switch (window->scaler){
		case 1:
			if(state->frame < 4){
				settings_1x_enabled0_0(window);
				settings_1x_enabled0_1(window);
			} else if (state->frame < 8){
				settings_1x_enabled1_0(window);
				settings_1x_enabled1_1(window);
			} else {
				settings_1x_enabled2_0(window);
				settings_1x_enabled2_1(window);
			}
			break;
		case 2:
			if(state->frame < 4){
				settings_2x_enabled0_0(window);
				settings_2x_enabled0_1(window);
			} else if (state->frame < 8){
				settings_2x_enabled1_0(window);
				settings_2x_enabled1_1(window);
			} else {
				settings_2x_enabled2_0(window);
				settings_2x_enabled2_1(window);
			}
			break;
		case 4:
			if(state->frame < 4){
				settings_4x_enabled0_0(window);
				settings_4x_enabled0_1(window);
				settings_4x_enabled0_2(window);
			} else if (state->frame < 8){
				settings_4x_enabled1_0(window);
				settings_4x_enabled1_1(window);
				settings_4x_enabled1_2(window);
			} else {
				settings_4x_enabled2_0(window);
				settings_4x_enabled2_1(window);
				settings_4x_enabled2_2(window);
			}
			break;
		case 8:
			if(state->frame < 4){
				settings_8x_enabled0_0(window);
				settings_8x_enabled0_1(window);
				settings_8x_enabled0_2(window);
				settings_8x_enabled0_3(window);
			} else if (state->frame < 8){
				settings_8x_enabled1_0(window);
				settings_8x_enabled1_1(window);
				settings_8x_enabled1_2(window);
				settings_8x_enabled1_3(window);
			} else {
				settings_8x_enabled2_0(window);
				settings_8x_enabled2_1(window);
				settings_8x_enabled2_2(window);
				settings_8x_enabled2_3(window);
			}
			break;
		case 16:
			if(state->frame < 4){
				settings_16x_enabled0_0(window);
				settings_16x_enabled0_1(window);
				settings_16x_enabled0_2(window);
				settings_16x_enabled0_3(window);
			} else if (state->frame < 8){
				settings_16x_enabled1_0(window);
				settings_16x_enabled1_1(window);
				settings_16x_enabled1_2(window);
				settings_16x_enabled1_3(window);
			} else {
				settings_16x_enabled2_0(window);
				settings_16x_enabled2_1(window);
				settings_16x_enabled2_2(window);
				settings_16x_enabled2_3(window);
			}
			break;
		default:
			break;
	}
	
	// VOL CONDITIONAL DRAWS
	switch (state->settings_volume){
		case 0: //MUTE
			if(state->frame < 4){
				settings_volume0_4(window);
				settings_volume0_5(window);
			} else if (state->frame < 8){
				settings_volume1_4(window);
				settings_volume1_5(window);
			} else {
				settings_volume2_4(window);
				settings_volume2_5(window);
			}
			break;
		case 1: //LOW
			if(state->frame < 4){
				settings_volume0_1(window);
				settings_audsel0_0(window);
			} else if (state->frame < 8){
				settings_volume1_1(window);
				settings_audsel0_1(window);
			} else {
				settings_volume2_1(window);
				settings_audsel0_2(window);
			}
			break;
		case 2:
			if(state->frame < 4){
				settings_volume0_1(window);
				settings_audsel1_0(window);
			} else if (state->frame < 8){
				settings_volume1_1(window);
				settings_audsel1_1(window);
			} else {
				settings_volume2_1(window);
				settings_audsel1_2(window);
			}
			break;
		case 3:
			if(state->frame < 4){
				settings_volume0_1(window);
				settings_audsel2_0(window);
			} else if (state->frame < 8){
				settings_volume1_1(window);
				settings_audsel2_1(window);
			} else {
				settings_volume2_1(window);
				settings_audsel2_2(window);
			}
			break;
		case 4:
			if(state->frame < 4){
				settings_volume0_1(window);
				settings_volume0_2(window);
				settings_audsel3_0(window);
			} else if (state->frame < 8){
				settings_volume1_1(window);
				settings_volume1_2(window);
				settings_audsel3_1(window);
			} else {
				settings_volume2_1(window);
				settings_volume2_2(window);
				settings_audsel3_2(window);
			}
			break;
		case 5:
			if(state->frame < 4){
				settings_volume0_1(window);
				settings_volume0_2(window);
				settings_audsel4_0(window);
			} else if (state->frame < 8){
				settings_volume1_1(window);
				settings_volume1_2(window);
				settings_audsel4_1(window);
			} else {
				settings_volume2_1(window);
				settings_volume2_2(window);
				settings_audsel4_2(window);
			}
			break;
		case 6:
			if(state->frame < 4){
				settings_volume0_1(window);
				settings_volume0_2(window);
				settings_audsel5_0(window);
			} else if (state->frame < 8){
				settings_volume1_1(window);
				settings_volume1_2(window);
				settings_audsel5_1(window);
			} else {
				settings_volume2_1(window);
				settings_volume2_2(window);
				settings_audsel5_2(window);
			}
			break;
		case 7:
			if(state->frame < 4){
				settings_volume0_1(window);
				settings_volume0_2(window);
				settings_audsel6_0(window);
			} else if (state->frame < 8){
				settings_volume1_1(window);
				settings_volume1_2(window);
				settings_audsel6_1(window);
			} else {
				settings_volume2_1(window);
				settings_volume2_2(window);
				settings_audsel6_2(window);
			}
			break;
		case 8:
			if(state->frame < 4){
				settings_volume0_1(window);
				settings_volume0_2(window);
				settings_volume0_3(window);
				settings_audsel7_0(window);
			} else if (state->frame < 8){
				settings_volume1_1(window);
				settings_volume1_2(window);
				settings_volume1_3(window);
				settings_audsel7_1(window);
			} else {
				settings_volume2_1(window);
				settings_volume2_2(window);
				settings_volume2_3(window);
				settings_audsel7_2(window);
			}
			break;
		case 9:
			if(state->frame < 4){
				settings_volume0_1(window);
				settings_volume0_2(window);
				settings_volume0_3(window);
				settings_audsel8_0(window);
			} else if (state->frame < 8){
				settings_volume1_1(window);
				settings_volume1_2(window);
				settings_volume1_3(window);
				settings_audsel8_1(window);
			} else {
				settings_volume2_1(window);
				settings_volume2_2(window);
				settings_volume2_3(window);
				settings_audsel8_2(window);
			}
			break;
		case 10:
			if(state->frame < 4){
				settings_volume0_1(window);
				settings_volume0_2(window);
				settings_volume0_3(window);
				settings_audsel9_0(window);
			} else if (state->frame < 8){
				settings_volume1_1(window);
				settings_volume1_2(window);
				settings_volume1_3(window);
				settings_audsel9_1(window);
			} else {
				settings_volume2_1(window);
				settings_volume2_2(window);
				settings_volume2_3(window);
				settings_audsel9_2(window);
			}
			break;
		default:
			state->settings_volume = 7;
			break;
	}
	
}
