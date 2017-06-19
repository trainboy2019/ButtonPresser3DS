#include <string>

#include <3ds.h>
#include <sf2d.h>
#include <sfil.h>

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
	sf2d_texture* topScreen       = sfil_load_PNG_buffer(topscr_png,        SF2D_PLACE_RAM);

	int posx = (320 / 2);
	int posy = (240 / 2);
    
    int score = 0;
    int color = 0;
    bool pressed = false;

	// Main loop
	while (aptMainLoop()) {
        hidScanInput();
        u32 kDown = hidKeysDown();
        u32 kHeld = hidKeysHeld();
        u32 kUp = hidKeysUp();

		if (kDown & KEY_TOUCH) {
			pressed=true;
            score=score+1;
		}
        if (kHeld & KEY_TOUCH){
            pressed=true;
        }
        if (kUp & KEY_TOUCH){
            pressed=false;
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
            sf2d_end_frame();
        }
        if (!pressed){
            sf2d_start_frame(GFX_BOTTOM, GFX_LEFT);
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
            sf2d_end_frame();
        }
		


		sf2d_swapbuffers();
	}

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
	sf2d_fini();

	return 0;
}
