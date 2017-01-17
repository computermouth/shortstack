
#include "settings_logic.h"
#include "settings_logic_shapes.c"

void settings_logic(god_t *god){
	
		
	if(god->state.settings_select < 2 && god->state.k.dn){
		god->state.settings_select++;
		god->state.k.dn = 0;
	}
	if(god->state.settings_select > 0 && god->state.k.up){
		god->state.settings_select--;
		god->state.k.up = 0;
	}
	if(god->state.settings_select == 0 && god->state.k.lt && god->window.scaler > 1){
		
		if(god->window.scaler == 2) god->window.scaler = 1;
		else if (god->window.scaler == 4) god->window.scaler = 2;
		else if (god->window.scaler == 8) god->window.scaler = 4;
		else if (god->window.scaler == 16) god->window.scaler = 8;
		else god->window.scaler = 2;
		god->state.k.lt = 0;
		set_scaler(god);
		
	}
	if(god->state.settings_select == 0 && god->state.k.rt && god->window.scaler < 16){
		
		if(god->window.scaler == 1) god->window.scaler = 2;
		else if (god->window.scaler == 2) god->window.scaler = 4;
		else if (god->window.scaler == 4) god->window.scaler = 8;
		else if (god->window.scaler == 8) god->window.scaler = 16;
		else god->window.scaler = 2;
		god->state.k.rt = 0;
		set_scaler(god);
		
	}
	if(god->state.settings_select == 1 && god->state.k.lt && god->state.settings_volume > 0){
		god->state.settings_volume--;
		god->state.k.lt = 0;
	}
	if(god->state.settings_select == 1 && god->state.k.rt && god->state.settings_volume < 10){
		god->state.settings_volume++;
		god->state.k.rt = 0;
	}
	if(god->state.settings_select == 2 && god->state.k.ent){
		god->state.menu = 1;
		god->state.settings = 0;
		god->state.k.ent = 0;
	}
	
	
	switch (god->state.settings_select){
		case 0:
			if(god->state.frame < 4)
				settings_select_v0_0(god);
			else if(god->state.frame < 8)
				settings_select_v0_1(god);
			else
				settings_select_v0_2(god);
			break;
		case 1:
			if(god->state.frame < 4)
				settings_select_v1_0(god);
			else if(god->state.frame < 8)
				settings_select_v1_1(god);
			else
				settings_select_v1_2(god);
			break;
		case 2:
			if(god->state.frame < 4)
				settings_select_v2_0(god);
			else if(god->state.frame < 8)
				settings_select_v2_1(god);
			else
				settings_select_v2_2(god);
			break;
		default:
			god->state.settings_select = 0;
			break;
	}
	
	// ALWAYS DRAWS
	if(god->state.frame < 4){
		settings_camera0(god);
		
		settings_volume0_0(god);
		
		settings_home0_0(god);
		settings_home0_1(god);
		
		settings_1x_disabled0_0(god);
		settings_1x_disabled0_1(god);
		
		settings_2x_disabled0_0(god);
		settings_2x_disabled0_1(god);
		
		settings_4x_disabled0_0(god);
		settings_4x_disabled0_1(god);
		settings_4x_disabled0_2(god);
		
		settings_8x_disabled0_0(god);
		settings_8x_disabled0_1(god);
		settings_8x_disabled0_2(god);
		settings_8x_disabled0_3(god);
		
		settings_16x_disabled0_0(god);
		settings_16x_disabled0_1(god);
		settings_16x_disabled0_2(god);
		settings_16x_disabled0_3(god);
		
		settings_audempty0(god);
		
	} else if (god->state.frame < 8){
		settings_camera1(god);
		
		settings_volume1_0(god);
		
		settings_home1_0(god);
		settings_home1_1(god);
		
		settings_1x_disabled1_0(god);
		settings_1x_disabled1_1(god);
		
		settings_2x_disabled1_0(god);
		settings_2x_disabled1_1(god);
		
		settings_4x_disabled1_0(god);
		settings_4x_disabled1_1(god);
		settings_4x_disabled1_2(god);
		
		settings_8x_disabled1_0(god);
		settings_8x_disabled1_1(god);
		settings_8x_disabled1_2(god);
		settings_8x_disabled1_3(god);
		
		settings_16x_disabled1_0(god);
		settings_16x_disabled1_1(god);
		settings_16x_disabled1_2(god);
		settings_16x_disabled1_3(god);
		
		settings_audempty1(god);
	} else {
		settings_camera2(god);
		
		settings_volume2_0(god);
		
		settings_home2_0(god);
		settings_home2_1(god);
		
		settings_1x_disabled2_0(god);
		settings_1x_disabled2_1(god);
		
		settings_2x_disabled2_0(god);
		settings_2x_disabled2_1(god);
		
		settings_4x_disabled2_0(god);
		settings_4x_disabled2_1(god);
		settings_4x_disabled2_2(god);
		
		settings_8x_disabled2_0(god);
		settings_8x_disabled2_1(god);
		settings_8x_disabled2_2(god);
		settings_8x_disabled2_3(god);
		
		settings_16x_disabled2_0(god);
		settings_16x_disabled2_1(god);
		settings_16x_disabled2_2(god);
		settings_16x_disabled2_3(god);
		
		settings_audempty2(god);
	}
	
	// SCALER CONDITIONAL DRAWS
	switch (god->window.scaler){
		case 1:
			if(god->state.frame < 4){
				settings_1x_enabled0_0(god);
				settings_1x_enabled0_1(god);
			} else if (god->state.frame < 8){
				settings_1x_enabled1_0(god);
				settings_1x_enabled1_1(god);
			} else {
				settings_1x_enabled2_0(god);
				settings_1x_enabled2_1(god);
			}
			break;
		case 2:
			if(god->state.frame < 4){
				settings_2x_enabled0_0(god);
				settings_2x_enabled0_1(god);
			} else if (god->state.frame < 8){
				settings_2x_enabled1_0(god);
				settings_2x_enabled1_1(god);
			} else {
				settings_2x_enabled2_0(god);
				settings_2x_enabled2_1(god);
			}
			break;
		case 4:
			if(god->state.frame < 4){
				settings_4x_enabled0_0(god);
				settings_4x_enabled0_1(god);
				settings_4x_enabled0_2(god);
			} else if (god->state.frame < 8){
				settings_4x_enabled1_0(god);
				settings_4x_enabled1_1(god);
				settings_4x_enabled1_2(god);
			} else {
				settings_4x_enabled2_0(god);
				settings_4x_enabled2_1(god);
				settings_4x_enabled2_2(god);
			}
			break;
		case 8:
			if(god->state.frame < 4){
				settings_8x_enabled0_0(god);
				settings_8x_enabled0_1(god);
				settings_8x_enabled0_2(god);
				settings_8x_enabled0_3(god);
			} else if (god->state.frame < 8){
				settings_8x_enabled1_0(god);
				settings_8x_enabled1_1(god);
				settings_8x_enabled1_2(god);
				settings_8x_enabled1_3(god);
			} else {
				settings_8x_enabled2_0(god);
				settings_8x_enabled2_1(god);
				settings_8x_enabled2_2(god);
				settings_8x_enabled2_3(god);
			}
			break;
		case 16:
			if(god->state.frame < 4){
				settings_16x_enabled0_0(god);
				settings_16x_enabled0_1(god);
				settings_16x_enabled0_2(god);
				settings_16x_enabled0_3(god);
			} else if (god->state.frame < 8){
				settings_16x_enabled1_0(god);
				settings_16x_enabled1_1(god);
				settings_16x_enabled1_2(god);
				settings_16x_enabled1_3(god);
			} else {
				settings_16x_enabled2_0(god);
				settings_16x_enabled2_1(god);
				settings_16x_enabled2_2(god);
				settings_16x_enabled2_3(god);
			}
			break;
		default:
			break;
	}
	
	// VOL CONDITIONAL DRAWS
	switch (god->state.settings_volume){
		case 0: //MUTE
			if(god->state.frame < 4){
				settings_volume0_4(god);
				settings_volume0_5(god);
			} else if (god->state.frame < 8){
				settings_volume1_4(god);
				settings_volume1_5(god);
			} else {
				settings_volume2_4(god);
				settings_volume2_5(god);
			}
			break;
		case 1: //LOW
			if(god->state.frame < 4){
				settings_volume0_1(god);
				settings_audsel0_0(god);
			} else if (god->state.frame < 8){
				settings_volume1_1(god);
				settings_audsel0_1(god);
			} else {
				settings_volume2_1(god);
				settings_audsel0_2(god);
			}
			break;
		case 2:
			if(god->state.frame < 4){
				settings_volume0_1(god);
				settings_audsel1_0(god);
			} else if (god->state.frame < 8){
				settings_volume1_1(god);
				settings_audsel1_1(god);
			} else {
				settings_volume2_1(god);
				settings_audsel1_2(god);
			}
			break;
		case 3:
			if(god->state.frame < 4){
				settings_volume0_1(god);
				settings_audsel2_0(god);
			} else if (god->state.frame < 8){
				settings_volume1_1(god);
				settings_audsel2_1(god);
			} else {
				settings_volume2_1(god);
				settings_audsel2_2(god);
			}
			break;
		case 4:
			if(god->state.frame < 4){
				settings_volume0_1(god);
				settings_volume0_2(god);
				settings_audsel3_0(god);
			} else if (god->state.frame < 8){
				settings_volume1_1(god);
				settings_volume1_2(god);
				settings_audsel3_1(god);
			} else {
				settings_volume2_1(god);
				settings_volume2_2(god);
				settings_audsel3_2(god);
			}
			break;
		case 5:
			if(god->state.frame < 4){
				settings_volume0_1(god);
				settings_volume0_2(god);
				settings_audsel4_0(god);
			} else if (god->state.frame < 8){
				settings_volume1_1(god);
				settings_volume1_2(god);
				settings_audsel4_1(god);
			} else {
				settings_volume2_1(god);
				settings_volume2_2(god);
				settings_audsel4_2(god);
			}
			break;
		case 6:
			if(god->state.frame < 4){
				settings_volume0_1(god);
				settings_volume0_2(god);
				settings_audsel5_0(god);
			} else if (god->state.frame < 8){
				settings_volume1_1(god);
				settings_volume1_2(god);
				settings_audsel5_1(god);
			} else {
				settings_volume2_1(god);
				settings_volume2_2(god);
				settings_audsel5_2(god);
			}
			break;
		case 7:
			if(god->state.frame < 4){
				settings_volume0_1(god);
				settings_volume0_2(god);
				settings_audsel6_0(god);
			} else if (god->state.frame < 8){
				settings_volume1_1(god);
				settings_volume1_2(god);
				settings_audsel6_1(god);
			} else {
				settings_volume2_1(god);
				settings_volume2_2(god);
				settings_audsel6_2(god);
			}
			break;
		case 8:
			if(god->state.frame < 4){
				settings_volume0_1(god);
				settings_volume0_2(god);
				settings_volume0_3(god);
				settings_audsel7_0(god);
			} else if (god->state.frame < 8){
				settings_volume1_1(god);
				settings_volume1_2(god);
				settings_volume1_3(god);
				settings_audsel7_1(god);
			} else {
				settings_volume2_1(god);
				settings_volume2_2(god);
				settings_volume2_3(god);
				settings_audsel7_2(god);
			}
			break;
		case 9:
			if(god->state.frame < 4){
				settings_volume0_1(god);
				settings_volume0_2(god);
				settings_volume0_3(god);
				settings_audsel8_0(god);
			} else if (god->state.frame < 8){
				settings_volume1_1(god);
				settings_volume1_2(god);
				settings_volume1_3(god);
				settings_audsel8_1(god);
			} else {
				settings_volume2_1(god);
				settings_volume2_2(god);
				settings_volume2_3(god);
				settings_audsel8_2(god);
			}
			break;
		case 10:
			if(god->state.frame < 4){
				settings_volume0_1(god);
				settings_volume0_2(god);
				settings_volume0_3(god);
				settings_audsel9_0(god);
			} else if (god->state.frame < 8){
				settings_volume1_1(god);
				settings_volume1_2(god);
				settings_volume1_3(god);
				settings_audsel9_1(god);
			} else {
				settings_volume2_1(god);
				settings_volume2_2(god);
				settings_volume2_3(god);
				settings_audsel9_2(god);
			}
			break;
		default:
			god->state.settings_volume = 7;
			break;
	}
	
}
