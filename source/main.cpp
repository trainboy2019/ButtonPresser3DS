#include <string>

#include <3ds.h>
#include <sf2d.h>
#include <sfil.h>
#include <stdlib.h>

#include "button1_png.h"
#include "pressedButton1_png.h"
#include "button2_png.h"
#include "pressedButton2_png.h"
#include "button3_png.h"
#include "pressedButton3_png.h"
#include "button4_png.h"
#include "pressedButton4_png.h"
#include "button5_png.h"
#include "pressedButton5_png.h"
#include "button6_png.h"
#include "pressedButton6_png.h"
#include "button7_png.h"
#include "pressedButton7_png.h"
#include "button8_png.h"
#include "pressedButton8_png.h"

#include "pokeball1_png.h"
#include "pressedPokeball1_png.h"
#include "pokeball2_png.h"
#include "pressedPokeball2_png.h"
#include "pokeball3_png.h"
#include "pressedPokeball3_png.h"
#include "pokeball4_png.h"
#include "pressedPokeball4_png.h"
#include "pokeball5_png.h"
#include "pressedPokeball5_png.h"
#include "pokeball6_png.h"
#include "pressedPokeball6_png.h"
#include "pokeball7_png.h"
#include "pressedPokeball7_png.h"
#include "pokeball8_png.h"
#include "pressedPokeball8_png.h"

#include "moon1_png.h"
#include "pressedMoon1_png.h"
#include "moon2_png.h"
#include "pressedMoon2_png.h"
#include "moon3_png.h"
#include "pressedMoon3_png.h"
#include "moon4_png.h"
#include "pressedMoon4_png.h"
#include "moon5_png.h"
#include "pressedMoon5_png.h"
#include "moon6_png.h"
#include "pressedMoon6_png.h"
#include "moon7_png.h"
#include "pressedMoon7_png.h"
#include "moon8_png.h"
#include "pressedMoon8_png.h"
#include "topscr_png.h"

using namespace std;

int main() {
    sf2d_init();
    sf2d_texture* pressedButton1   = sfil_load_PNG_buffer(pressedButton1_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedButton1 = sfil_load_PNG_buffer(button1_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedButton2   = sfil_load_PNG_buffer(pressedButton2_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedButton2 = sfil_load_PNG_buffer(button2_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedButton3   = sfil_load_PNG_buffer(pressedButton3_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedButton3 = sfil_load_PNG_buffer(button3_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedButton4   = sfil_load_PNG_buffer(pressedButton4_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedButton4 = sfil_load_PNG_buffer(button4_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedButton5   = sfil_load_PNG_buffer(pressedButton5_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedButton5 = sfil_load_PNG_buffer(button5_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedButton6   = sfil_load_PNG_buffer(pressedButton6_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedButton6 = sfil_load_PNG_buffer(button6_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedButton7   = sfil_load_PNG_buffer(pressedButton7_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedButton7 = sfil_load_PNG_buffer(button7_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedButton8   = sfil_load_PNG_buffer(pressedButton8_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedButton8 = sfil_load_PNG_buffer(button8_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedPokeball1   = sfil_load_PNG_buffer(pressedPokeball1_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedPokeball1 = sfil_load_PNG_buffer(pokeball1_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedPokeball2   = sfil_load_PNG_buffer(pressedPokeball2_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedPokeball2 = sfil_load_PNG_buffer(pokeball2_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedPokeball3   = sfil_load_PNG_buffer(pressedPokeball3_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedPokeball3 = sfil_load_PNG_buffer(pokeball3_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedPokeball4   = sfil_load_PNG_buffer(pressedPokeball4_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedPokeball4 = sfil_load_PNG_buffer(pokeball4_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedPokeball5   = sfil_load_PNG_buffer(pressedPokeball5_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedPokeball5 = sfil_load_PNG_buffer(pokeball5_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedPokeball6   = sfil_load_PNG_buffer(pressedPokeball6_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedPokeball6 = sfil_load_PNG_buffer(pokeball6_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedPokeball7   = sfil_load_PNG_buffer(pressedPokeball7_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedPokeball7 = sfil_load_PNG_buffer(pokeball7_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedPokeball8   = sfil_load_PNG_buffer(pressedPokeball8_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedPokeball8 = sfil_load_PNG_buffer(pokeball8_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedMoon1   = sfil_load_PNG_buffer(pressedMoon1_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedMoon1 = sfil_load_PNG_buffer(moon1_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedMoon2   = sfil_load_PNG_buffer(pressedMoon2_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedMoon2 = sfil_load_PNG_buffer(moon2_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedMoon3   = sfil_load_PNG_buffer(pressedMoon3_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedMoon3 = sfil_load_PNG_buffer(moon3_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedMoon4   = sfil_load_PNG_buffer(pressedMoon4_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedMoon4 = sfil_load_PNG_buffer(moon4_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedMoon5   = sfil_load_PNG_buffer(pressedMoon5_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedMoon5 = sfil_load_PNG_buffer(moon5_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedMoon6   = sfil_load_PNG_buffer(pressedMoon6_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedMoon6 = sfil_load_PNG_buffer(moon6_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedMoon7   = sfil_load_PNG_buffer(pressedMoon7_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedMoon7 = sfil_load_PNG_buffer(moon7_png,        SF2D_PLACE_RAM);
    sf2d_texture* pressedMoon8   = sfil_load_PNG_buffer(pressedMoon8_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedMoon8 = sfil_load_PNG_buffer(moon8_png,        SF2D_PLACE_RAM);
	sf2d_texture* topScreen       = sfil_load_PNG_buffer(topscr_png,        SF2D_PLACE_RAM);

	int posx = (320 / 2);
	int posy = (240 / 2);
    
    int score = 0;
    int color = 1;
    int style = 1;
    bool pressed = false;

	// Main loop
	while (aptMainLoop()) {
        hidScanInput();
        u32 kDown = hidKeysDown();
        u32 kHeld = hidKeysHeld();
        u32 kUp = hidKeysUp();
        gfxInitDefault();
        consoleInit(GFX_BOTTOM, NULL);

		if (kDown & KEY_TOUCH) {
			pressed=true;
            score=score+1;
            printf("%f",score);
		}
        if (kHeld & KEY_TOUCH){
            pressed=true;
        }
        if (kUp & KEY_TOUCH){
            pressed=false;
            gfxFlushBuffers();
            gfxSwapBuffers();
        }
        
        if (kDown & KEY_DUP) {
            if (color==8) {
                color=1;
            }
            else{
                color++;
            }
        }
        if (kDown & KEY_DDOWN) {
            if (color==1) {
                color=8;
            }
            else{
                color--;
            }
        }
        
        if (kDown & KEY_DRIGHT) {
            if (style==3) {
                style=1;
            }
            else{
                style++;
            }
        }
        if (kDown & KEY_DLEFT) {
            if (style==1) {
                style=3;
            }
            else{
                style--;
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
            if (style==1){
                if (color==1) {
                    sf2d_draw_texture_rotate(pressedButton1, posx, posy, 0.0f);
                }
                else if (color==2) {
                    sf2d_draw_texture_rotate(pressedButton2, posx, posy, 0.0f);
                }
                else if (color==3) {
                    sf2d_draw_texture_rotate(pressedButton3, posx, posy, 0.0f);
                }
                else if (color==4) {
                    sf2d_draw_texture_rotate(pressedButton4, posx, posy, 0.0f);
                }
                else if (color==5) {
                    sf2d_draw_texture_rotate(pressedButton5, posx, posy, 0.0f);
                }
                else if (color==6) {
                    sf2d_draw_texture_rotate(pressedButton6, posx, posy, 0.0f);
                }
                else if (color==7) {
                    sf2d_draw_texture_rotate(pressedButton7, posx, posy, 0.0f);
                }
                else if (color==8) {
                    sf2d_draw_texture_rotate(pressedButton8, posx, posy, 0.0f);
                }
                else {
                    sf2d_draw_texture_rotate(pressedButton1, posx, posy, 0.0f);
                }
            }
            else if(style==2){
                if (color==1) {
                    sf2d_draw_texture_rotate(pressedPokeball1, posx, posy, 0.0f);
                }
                else if (color==2) {
                    sf2d_draw_texture_rotate(pressedPokeball2, posx, posy, 0.0f);
                }
                else if (color==3) {
                    sf2d_draw_texture_rotate(pressedPokeball3, posx, posy, 0.0f);
                }
                else if (color==4) {
                    sf2d_draw_texture_rotate(pressedPokeball4, posx, posy, 0.0f);
                }
                else if (color==5) {
                    sf2d_draw_texture_rotate(pressedPokeball5, posx, posy, 0.0f);
                }
                else if (color==6) {
                    sf2d_draw_texture_rotate(pressedPokeball6, posx, posy, 0.0f);
                }
                else if (color==7) {
                    sf2d_draw_texture_rotate(pressedPokeball7, posx, posy, 0.0f);
                }
                else if (color==8) {
                    sf2d_draw_texture_rotate(pressedPokeball8, posx, posy, 0.0f);
                }
                else {
                    sf2d_draw_texture_rotate(pressedPokeball1, posx, posy, 0.0f);
                }
            }
            else {
                if (color==1) {
                    sf2d_draw_texture_rotate(pressedMoon1, posx, posy, 0.0f);
                }
                else if (color==2) {
                    sf2d_draw_texture_rotate(pressedMoon2, posx, posy, 0.0f);
                }
                else if (color==3) {
                    sf2d_draw_texture_rotate(pressedMoon3, posx, posy, 0.0f);
                }
                else if (color==4) {
                    sf2d_draw_texture_rotate(pressedMoon4, posx, posy, 0.0f);
                }
                else if (color==5) {
                    sf2d_draw_texture_rotate(pressedMoon5, posx, posy, 0.0f);
                }
                else if (color==6) {
                    sf2d_draw_texture_rotate(pressedMoon6, posx, posy, 0.0f);
                }
                else if (color==7) {
                    sf2d_draw_texture_rotate(pressedMoon7, posx, posy, 0.0f);
                }
                else if (color==8) {
                    sf2d_draw_texture_rotate(pressedMoon8, posx, posy, 0.0f);
                }
                else {
                    sf2d_draw_texture_rotate(pressedMoon1, posx, posy, 0.0f);
                }
            }
            sf2d_end_frame();
        }
        if (!pressed){
            sf2d_start_frame(GFX_BOTTOM, GFX_LEFT);
            if (style==1) {
                if (color==1) {
                    sf2d_draw_texture_rotate(unpressedButton1, posx, posy, 0.0f);
                }
                else if (color==2) {
                    sf2d_draw_texture_rotate(unpressedButton2, posx, posy, 0.0f);
                }
                else if (color==3) {
                    sf2d_draw_texture_rotate(unpressedButton3, posx, posy, 0.0f);
                }
                else if (color==4) {
                    sf2d_draw_texture_rotate(unpressedButton4, posx, posy, 0.0f);
                }
                else if (color==5) {
                    sf2d_draw_texture_rotate(unpressedButton5, posx, posy, 0.0f);
                }
                else if (color==6) {
                    sf2d_draw_texture_rotate(unpressedButton6, posx, posy, 0.0f);
                }
                else if (color==7) {
                    sf2d_draw_texture_rotate(unpressedButton7, posx, posy, 0.0f);
                }
                else if (color==8) {
                    sf2d_draw_texture_rotate(unpressedButton8, posx, posy, 0.0f);
                }
                else {
                    sf2d_draw_texture_rotate(unpressedButton1, posx, posy, 0.0f);
                }
            }
            else if (style==2){
                if (color==1) {
                    sf2d_draw_texture_rotate(unpressedPokeball1, posx, posy, 0.0f);
                }
                else if (color==2) {
                    sf2d_draw_texture_rotate(unpressedPokeball2, posx, posy, 0.0f);
                }
                else if (color==3) {
                    sf2d_draw_texture_rotate(unpressedPokeball3, posx, posy, 0.0f);
                }
                else if (color==4) {
                    sf2d_draw_texture_rotate(unpressedPokeball4, posx, posy, 0.0f);
                }
                else if (color==5) {
                    sf2d_draw_texture_rotate(unpressedPokeball5, posx, posy, 0.0f);
                }
                else if (color==6) {
                    sf2d_draw_texture_rotate(unpressedPokeball6, posx, posy, 0.0f);
                }
                else if (color==7) {
                    sf2d_draw_texture_rotate(unpressedPokeball7, posx, posy, 0.0f);
                }
                else if (color==8) {
                    sf2d_draw_texture_rotate(unpressedPokeball8, posx, posy, 0.0f);
                }
                else {
                    sf2d_draw_texture_rotate(unpressedPokeball1, posx, posy, 0.0f);
                }
            }
            else {
                if (color==1) {
                    sf2d_draw_texture_rotate(unpressedMoon1, posx, posy, 0.0f);
                }
                else if (color==2) {
                    sf2d_draw_texture_rotate(unpressedMoon2, posx, posy, 0.0f);
                }
                else if (color==3) {
                    sf2d_draw_texture_rotate(unpressedMoon3, posx, posy, 0.0f);
                }
                else if (color==4) {
                    sf2d_draw_texture_rotate(unpressedMoon4, posx, posy, 0.0f);
                }
                else if (color==5) {
                    sf2d_draw_texture_rotate(unpressedMoon5, posx, posy, 0.0f);
                }
                else if (color==6) {
                    sf2d_draw_texture_rotate(unpressedMoon6, posx, posy, 0.0f);
                }
                else if (color==7) {
                    sf2d_draw_texture_rotate(unpressedMoon7, posx, posy, 0.0f);
                }
                else if (color==8) {
                    sf2d_draw_texture_rotate(unpressedMoon8, posx, posy, 0.0f);
                }
                else {
                    sf2d_draw_texture_rotate(unpressedMoon1, posx, posy, 0.0f);
                }
            }
            sf2d_end_frame();
        }
		


		sf2d_swapbuffers();
	}

    
    gfxExit();
    sf2d_free_texture(topScreen);
    sf2d_free_texture(unpressedButton1);
    sf2d_free_texture(pressedButton1);
    sf2d_free_texture(unpressedButton2);
    sf2d_free_texture(pressedButton2);
    sf2d_free_texture(unpressedButton3);
    sf2d_free_texture(pressedButton3);
    sf2d_free_texture(unpressedButton4);
    sf2d_free_texture(pressedButton4);
    sf2d_free_texture(unpressedButton5);
    sf2d_free_texture(pressedButton5);
    sf2d_free_texture(unpressedButton6);
    sf2d_free_texture(pressedButton6);
    sf2d_free_texture(unpressedButton7);
    sf2d_free_texture(pressedButton7);
    sf2d_free_texture(unpressedButton8);
    sf2d_free_texture(pressedButton8);
    
    sf2d_free_texture(unpressedPokeball1);
    sf2d_free_texture(pressedPokeball1);
    sf2d_free_texture(unpressedPokeball2);
    sf2d_free_texture(pressedPokeball2);
    sf2d_free_texture(unpressedPokeball3);
    sf2d_free_texture(pressedPokeball3);
    sf2d_free_texture(unpressedPokeball4);
    sf2d_free_texture(pressedPokeball4);
    sf2d_free_texture(unpressedPokeball5);
    sf2d_free_texture(pressedPokeball5);
    sf2d_free_texture(unpressedPokeball6);
    sf2d_free_texture(pressedPokeball6);
    sf2d_free_texture(unpressedPokeball7);
    sf2d_free_texture(pressedPokeball7);
    sf2d_free_texture(unpressedPokeball8);
    sf2d_free_texture(pressedPokeball8);
    
    sf2d_free_texture(unpressedMoon1);
    sf2d_free_texture(pressedMoon1);
    sf2d_free_texture(unpressedMoon2);
    sf2d_free_texture(pressedMoon2);
    sf2d_free_texture(unpressedMoon3);
    sf2d_free_texture(pressedMoon3);
    sf2d_free_texture(unpressedMoon4);
    sf2d_free_texture(pressedMoon4);
    sf2d_free_texture(unpressedMoon5);
    sf2d_free_texture(pressedMoon5);
    sf2d_free_texture(unpressedMoon6);
    sf2d_free_texture(pressedMoon6);
    sf2d_free_texture(unpressedMoon7);
    sf2d_free_texture(pressedMoon7);
    sf2d_free_texture(unpressedMoon8);
    sf2d_free_texture(pressedMoon8);
    
	sf2d_fini();

	return 0;
}
