#include <string>

#include <3ds.h>
#include <sf2d.h>
#include <sfil.h>

#include "button_png.h"
#include "pressedButton_png.h"
#include "topscr_png.h"
#include "sound.h"

using namespace std;

int main() {
    sdmcInit();
    romfsInit();
    sf2d_init();
    sf2d_texture* pressedButton   = sfil_load_PNG_buffer(pressedButton_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedButton = sfil_load_PNG_buffer(button_png,        SF2D_PLACE_RAM);
	sf2d_texture* topScreen       = sfil_load_PNG_buffer(topscr_png,        SF2D_PLACE_RAM);

	int posx = (320 / 2);
	int posy = (240 / 2);
    
    int score = 0;
    bool pressed = false;
    bool dspfirmfound=false;
    sound *click = NULL;
    
    FILE *file = fopen("3ds/dspfirm.cdc","rb");
    if (file == NULL) goto exit;
    ndspInit();
    dspfirmfound = true;
    
    if (dspfirmfound) {
        ndspInit();
    }
    
    // Load the sound effects if DSP is available.
    if (dspfirmfound) {
        
        click = new sound("romfs:/click.wav", 2, false);
    }
    
    

	// Main loop
	while (aptMainLoop()) {
        hidScanInput();
        u32 kDown = hidKeysDown();
        u32 kHeld = hidKeysHeld();
        u32 kUp = hidKeysUp();

		if (kDown & KEY_TOUCH) {
			pressed=true;
            score=score+1;
            if (dspfirmfound) {
                click->play();
            }
		}
        if (kHeld & KEY_TOUCH){
            pressed=true;
        }
        if (kUp & KEY_TOUCH){
            pressed=false;
            if (dspfirmfound) {
                click->stop();
            }
        }

		if (kDown & KEY_START) {
			break;
		}

		// draw instructions
		sf2d_start_frame(GFX_TOP, GFX_LEFT);
		sf2d_draw_texture(topScreen, 0, 0);
		sf2d_end_frame();		

		// draw the spidget finner
        if (pressed){
            sf2d_start_frame(GFX_BOTTOM, GFX_LEFT);
            sf2d_draw_texture_rotate(pressedButton, posx, posy, 0.0f);
            sf2d_end_frame();
        }
        if (!pressed){
            sf2d_start_frame(GFX_BOTTOM, GFX_LEFT);
            sf2d_draw_texture_rotate(unpressedButton, posx, posy, 0.0f);
            sf2d_end_frame();
        }
		

		sf2d_swapbuffers();
	}

    delete click;
    fclose(file);
exit:
    sf2d_free_texture(topScreen);
    sf2d_free_texture(unpressedButton);
    sf2d_free_texture(pressedButton);
    sf2d_fini();
    
    romfsExit();
    sdmcExit();
    
    if (dspfirmfound) {
        ndspExit();
    }
    

	return 0;
}
