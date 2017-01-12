
#include "settings_logic.h"
#include "settings_logic_shapes.c"

void settings_logic(state* g_state, swindow *g_swindow){
	
		
	if(g_state->settings_select < 2 && g_state->k.dn){
		g_state->settings_select++;
		g_state->k.dn = 0;
	}
	if(g_state->settings_select > 0 && g_state->k.up){
		g_state->settings_select--;
		g_state->k.up = 0;
	}
	if(g_state->settings_select == 0 && g_state->k.lt && g_swindow->scaler > 1){
		
		if(g_swindow->scaler == 2) g_swindow->scaler = 1;
		else if (g_swindow->scaler == 4) g_swindow->scaler = 2;
		else if (g_swindow->scaler == 8) g_swindow->scaler = 4;
		else if (g_swindow->scaler == 16) g_swindow->scaler = 8;
		else g_swindow->scaler = 2;
		g_state->k.lt = 0;
		set_scaler(&g_swindow->e, g_swindow);
		
	}
	if(g_state->settings_select == 0 && g_state->k.rt && g_swindow->scaler < 16){
		
		if(g_swindow->scaler == 1) g_swindow->scaler = 2;
		else if (g_swindow->scaler == 2) g_swindow->scaler = 4;
		else if (g_swindow->scaler == 4) g_swindow->scaler = 8;
		else if (g_swindow->scaler == 8) g_swindow->scaler = 16;
		else g_swindow->scaler = 2;
		g_state->k.rt = 0;
		set_scaler(&g_swindow->e, g_swindow);
		
	}
	if(g_state->settings_select == 1 && g_state->k.lt && g_state->settings_volume > 0){
		g_state->settings_volume--;
		g_state->k.lt = 0;
	}
	if(g_state->settings_select == 1 && g_state->k.rt && g_state->settings_volume < 10){
		g_state->settings_volume++;
		g_state->k.rt = 0;
	}
	if(g_state->settings_select == 2 && g_state->k.ent){
		g_state->menu = 1;
		g_state->settings = 0;
		g_state->k.ent = 0;
	}
	
	
	switch (g_state->settings_select){
		case 0:
			if(g_state->frame < 4)
				settings_select_v0_0(g_swindow);
			else if(g_state->frame < 8)
				settings_select_v0_1(g_swindow);
			else
				settings_select_v0_2(g_swindow);
			break;
		case 1:
			if(g_state->frame < 4)
				settings_select_v1_0(g_swindow);
			else if(g_state->frame < 8)
				settings_select_v1_1(g_swindow);
			else
				settings_select_v1_2(g_swindow);
			break;
		case 2:
			if(g_state->frame < 4)
				settings_select_v2_0(g_swindow);
			else if(g_state->frame < 8)
				settings_select_v2_1(g_swindow);
			else
				settings_select_v2_2(g_swindow);
			break;
		default:
			g_state->settings_select = 0;
			break;
	}
	
	// ALWAYS DRAWS
	if(g_state->frame < 4){
		settings_camera0(g_swindow);
		
		settings_volume0_0(g_swindow);
		
		settings_home0_0(g_swindow);
		settings_home0_1(g_swindow);
		
		settings_1x_disabled0_0(g_swindow);
		settings_1x_disabled0_1(g_swindow);
		
		settings_2x_disabled0_0(g_swindow);
		settings_2x_disabled0_1(g_swindow);
		
		settings_4x_disabled0_0(g_swindow);
		settings_4x_disabled0_1(g_swindow);
		settings_4x_disabled0_2(g_swindow);
		
		settings_8x_disabled0_0(g_swindow);
		settings_8x_disabled0_1(g_swindow);
		settings_8x_disabled0_2(g_swindow);
		settings_8x_disabled0_3(g_swindow);
		
		settings_16x_disabled0_0(g_swindow);
		settings_16x_disabled0_1(g_swindow);
		settings_16x_disabled0_2(g_swindow);
		settings_16x_disabled0_3(g_swindow);
		
		settings_audempty0(g_swindow);
		
	} else if (g_state->frame < 8){
		settings_camera1(g_swindow);
		
		settings_volume1_0(g_swindow);
		
		settings_home1_0(g_swindow);
		settings_home1_1(g_swindow);
		
		settings_1x_disabled1_0(g_swindow);
		settings_1x_disabled1_1(g_swindow);
		
		settings_2x_disabled1_0(g_swindow);
		settings_2x_disabled1_1(g_swindow);
		
		settings_4x_disabled1_0(g_swindow);
		settings_4x_disabled1_1(g_swindow);
		settings_4x_disabled1_2(g_swindow);
		
		settings_8x_disabled1_0(g_swindow);
		settings_8x_disabled1_1(g_swindow);
		settings_8x_disabled1_2(g_swindow);
		settings_8x_disabled1_3(g_swindow);
		
		settings_16x_disabled1_0(g_swindow);
		settings_16x_disabled1_1(g_swindow);
		settings_16x_disabled1_2(g_swindow);
		settings_16x_disabled1_3(g_swindow);
		
		settings_audempty1(g_swindow);
	} else {
		settings_camera2(g_swindow);
		
		settings_volume2_0(g_swindow);
		
		settings_home2_0(g_swindow);
		settings_home2_1(g_swindow);
		
		settings_1x_disabled2_0(g_swindow);
		settings_1x_disabled2_1(g_swindow);
		
		settings_2x_disabled2_0(g_swindow);
		settings_2x_disabled2_1(g_swindow);
		
		settings_4x_disabled2_0(g_swindow);
		settings_4x_disabled2_1(g_swindow);
		settings_4x_disabled2_2(g_swindow);
		
		settings_8x_disabled2_0(g_swindow);
		settings_8x_disabled2_1(g_swindow);
		settings_8x_disabled2_2(g_swindow);
		settings_8x_disabled2_3(g_swindow);
		
		settings_16x_disabled2_0(g_swindow);
		settings_16x_disabled2_1(g_swindow);
		settings_16x_disabled2_2(g_swindow);
		settings_16x_disabled2_3(g_swindow);
		
		settings_audempty2(g_swindow);
	}
	
	// SCALER CONDITIONAL DRAWS
	switch (g_swindow->scaler){
		case 1:
			if(g_state->frame < 4){
				settings_1x_enabled0_0(g_swindow);
				settings_1x_enabled0_1(g_swindow);
			} else if (g_state->frame < 8){
				settings_1x_enabled1_0(g_swindow);
				settings_1x_enabled1_1(g_swindow);
			} else {
				settings_1x_enabled2_0(g_swindow);
				settings_1x_enabled2_1(g_swindow);
			}
			break;
		case 2:
			if(g_state->frame < 4){
				settings_2x_enabled0_0(g_swindow);
				settings_2x_enabled0_1(g_swindow);
			} else if (g_state->frame < 8){
				settings_2x_enabled1_0(g_swindow);
				settings_2x_enabled1_1(g_swindow);
			} else {
				settings_2x_enabled2_0(g_swindow);
				settings_2x_enabled2_1(g_swindow);
			}
			break;
		case 4:
			if(g_state->frame < 4){
				settings_4x_enabled0_0(g_swindow);
				settings_4x_enabled0_1(g_swindow);
				settings_4x_enabled0_2(g_swindow);
			} else if (g_state->frame < 8){
				settings_4x_enabled1_0(g_swindow);
				settings_4x_enabled1_1(g_swindow);
				settings_4x_enabled1_2(g_swindow);
			} else {
				settings_4x_enabled2_0(g_swindow);
				settings_4x_enabled2_1(g_swindow);
				settings_4x_enabled2_2(g_swindow);
			}
			break;
		case 8:
			if(g_state->frame < 4){
				settings_8x_enabled0_0(g_swindow);
				settings_8x_enabled0_1(g_swindow);
				settings_8x_enabled0_2(g_swindow);
				settings_8x_enabled0_3(g_swindow);
			} else if (g_state->frame < 8){
				settings_8x_enabled1_0(g_swindow);
				settings_8x_enabled1_1(g_swindow);
				settings_8x_enabled1_2(g_swindow);
				settings_8x_enabled1_3(g_swindow);
			} else {
				settings_8x_enabled2_0(g_swindow);
				settings_8x_enabled2_1(g_swindow);
				settings_8x_enabled2_2(g_swindow);
				settings_8x_enabled2_3(g_swindow);
			}
			break;
		case 16:
			if(g_state->frame < 4){
				settings_16x_enabled0_0(g_swindow);
				settings_16x_enabled0_1(g_swindow);
				settings_16x_enabled0_2(g_swindow);
				settings_16x_enabled0_3(g_swindow);
			} else if (g_state->frame < 8){
				settings_16x_enabled1_0(g_swindow);
				settings_16x_enabled1_1(g_swindow);
				settings_16x_enabled1_2(g_swindow);
				settings_16x_enabled1_3(g_swindow);
			} else {
				settings_16x_enabled2_0(g_swindow);
				settings_16x_enabled2_1(g_swindow);
				settings_16x_enabled2_2(g_swindow);
				settings_16x_enabled2_3(g_swindow);
			}
			break;
		default:
			break;
	}
	
	// VOL CONDITIONAL DRAWS
	switch (g_state->settings_volume){
		case 0: //MUTE
			if(g_state->frame < 4){
				settings_volume0_4(g_swindow);
				settings_volume0_5(g_swindow);
			} else if (g_state->frame < 8){
				settings_volume1_4(g_swindow);
				settings_volume1_5(g_swindow);
			} else {
				settings_volume2_4(g_swindow);
				settings_volume2_5(g_swindow);
			}
			break;
		case 1: //LOW
			if(g_state->frame < 4){
				settings_volume0_1(g_swindow);
				settings_audsel0_0(g_swindow);
			} else if (g_state->frame < 8){
				settings_volume1_1(g_swindow);
				settings_audsel0_1(g_swindow);
			} else {
				settings_volume2_1(g_swindow);
				settings_audsel0_2(g_swindow);
			}
			break;
		case 2:
			if(g_state->frame < 4){
				settings_volume0_1(g_swindow);
				settings_audsel1_0(g_swindow);
			} else if (g_state->frame < 8){
				settings_volume1_1(g_swindow);
				settings_audsel1_1(g_swindow);
			} else {
				settings_volume2_1(g_swindow);
				settings_audsel1_2(g_swindow);
			}
			break;
		case 3:
			if(g_state->frame < 4){
				settings_volume0_1(g_swindow);
				settings_audsel2_0(g_swindow);
			} else if (g_state->frame < 8){
				settings_volume1_1(g_swindow);
				settings_audsel2_1(g_swindow);
			} else {
				settings_volume2_1(g_swindow);
				settings_audsel2_2(g_swindow);
			}
			break;
		case 4:
			if(g_state->frame < 4){
				settings_volume0_1(g_swindow);
				settings_volume0_2(g_swindow);
				settings_audsel3_0(g_swindow);
			} else if (g_state->frame < 8){
				settings_volume1_1(g_swindow);
				settings_volume1_2(g_swindow);
				settings_audsel3_1(g_swindow);
			} else {
				settings_volume2_1(g_swindow);
				settings_volume2_2(g_swindow);
				settings_audsel3_2(g_swindow);
			}
			break;
		case 5:
			if(g_state->frame < 4){
				settings_volume0_1(g_swindow);
				settings_volume0_2(g_swindow);
				settings_audsel4_0(g_swindow);
			} else if (g_state->frame < 8){
				settings_volume1_1(g_swindow);
				settings_volume1_2(g_swindow);
				settings_audsel4_1(g_swindow);
			} else {
				settings_volume2_1(g_swindow);
				settings_volume2_2(g_swindow);
				settings_audsel4_2(g_swindow);
			}
			break;
		case 6:
			if(g_state->frame < 4){
				settings_volume0_1(g_swindow);
				settings_volume0_2(g_swindow);
				settings_audsel5_0(g_swindow);
			} else if (g_state->frame < 8){
				settings_volume1_1(g_swindow);
				settings_volume1_2(g_swindow);
				settings_audsel5_1(g_swindow);
			} else {
				settings_volume2_1(g_swindow);
				settings_volume2_2(g_swindow);
				settings_audsel5_2(g_swindow);
			}
			break;
		case 7:
			if(g_state->frame < 4){
				settings_volume0_1(g_swindow);
				settings_volume0_2(g_swindow);
				settings_audsel6_0(g_swindow);
			} else if (g_state->frame < 8){
				settings_volume1_1(g_swindow);
				settings_volume1_2(g_swindow);
				settings_audsel6_1(g_swindow);
			} else {
				settings_volume2_1(g_swindow);
				settings_volume2_2(g_swindow);
				settings_audsel6_2(g_swindow);
			}
			break;
		case 8:
			if(g_state->frame < 4){
				settings_volume0_1(g_swindow);
				settings_volume0_2(g_swindow);
				settings_volume0_3(g_swindow);
				settings_audsel7_0(g_swindow);
			} else if (g_state->frame < 8){
				settings_volume1_1(g_swindow);
				settings_volume1_2(g_swindow);
				settings_volume1_3(g_swindow);
				settings_audsel7_1(g_swindow);
			} else {
				settings_volume2_1(g_swindow);
				settings_volume2_2(g_swindow);
				settings_volume2_3(g_swindow);
				settings_audsel7_2(g_swindow);
			}
			break;
		case 9:
			if(g_state->frame < 4){
				settings_volume0_1(g_swindow);
				settings_volume0_2(g_swindow);
				settings_volume0_3(g_swindow);
				settings_audsel8_0(g_swindow);
			} else if (g_state->frame < 8){
				settings_volume1_1(g_swindow);
				settings_volume1_2(g_swindow);
				settings_volume1_3(g_swindow);
				settings_audsel8_1(g_swindow);
			} else {
				settings_volume2_1(g_swindow);
				settings_volume2_2(g_swindow);
				settings_volume2_3(g_swindow);
				settings_audsel8_2(g_swindow);
			}
			break;
		case 10:
			if(g_state->frame < 4){
				settings_volume0_1(g_swindow);
				settings_volume0_2(g_swindow);
				settings_volume0_3(g_swindow);
				settings_audsel9_0(g_swindow);
			} else if (g_state->frame < 8){
				settings_volume1_1(g_swindow);
				settings_volume1_2(g_swindow);
				settings_volume1_3(g_swindow);
				settings_audsel9_1(g_swindow);
			} else {
				settings_volume2_1(g_swindow);
				settings_volume2_2(g_swindow);
				settings_volume2_3(g_swindow);
				settings_audsel9_2(g_swindow);
			}
			break;
		default:
			g_state->settings_volume = 7;
			break;
	}
	
}
