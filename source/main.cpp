#include <string>

#include <3ds.h>
#include <sf2d.h>
#include <sfil.h>
#include <cstdlib>
#include <cstring>
#include <cstdio>

#include "button_png.h"
#include "pressedButton_png.h"
#include "topscr_png.h"
#include "click_wav.h"

using namespace std;

int main() {
    sf2d_init();
    sf2d_texture* pressedButton   = sfil_load_PNG_buffer(pressedButton_png, SF2D_PLACE_RAM);
    sf2d_texture* unpressedButton = sfil_load_PNG_buffer(button_png,        SF2D_PLACE_RAM);
	sf2d_texture* topScreen       = sfil_load_PNG_buffer(topscr_png,        SF2D_PLACE_RAM);

	int posx = (320 / 2);
	int posy = (240 / 2);
    
    int score = 0;
    bool pressed = false;
    
    
    
    
    constexpr int channel = 1;
    
    u32 sampleRate;
    u32 dataSize;
    u16 channels;
    u16 bitsPerSample;
    
    // Initialize ndsp
    ndspInit();
    
    ndspSetOutputMode(NDSP_OUTPUT_STEREO);
    ndspSetOutputCount(1); // Num of buffers
    
    // Reading wav file
    FILE* fp = fopen("./click.wav.o", "rb");
    
    if(!fp)
    {
        printf("Could not open the example.wav file.\n");
        return 1;
    }
    
    char signature[4];
    
    fread(signature, 1, 4, fp);
    
    if( signature[0] != 'R' &&
       signature[1] != 'I' &&
       signature[2] != 'F' &&
       signature[3] != 'F')
    {
        printf("Wrong file format.\n");
        fclose(fp);
        return 1;
    }
    
    fseek(fp, 40, SEEK_SET);
    fread(&dataSize, 4, 1, fp);
    fseek(fp, 22, SEEK_SET);
    fread(&channels, 2, 1, fp);
    fseek(fp, 24, SEEK_SET);
    fread(&sampleRate, 4, 1, fp);
    fseek(fp, 34, SEEK_SET);
    fread(&bitsPerSample, 2, 1, fp);
    
    if(dataSize == 0 || (channels != 1 && channels != 2) ||
       (bitsPerSample != 8 && bitsPerSample != 16))
    {
        printf("Corrupted wav file.\n");
        fclose(fp);
        return 1;
    }
    
    // Allocating and reading samples
    u8* data = static_cast<u8*>(linearAlloc(dataSize));
    
    if(!data)
    {
        fclose(fp);
        return 1;
    }
    
    fseek(fp, 44, SEEK_SET);
    fread(data, 1, dataSize, fp);
    fclose(fp);
    
    // Find the right format
    u16 ndspFormat;
    
    if(bitsPerSample == 8)
    {
        ndspFormat = (channels == 1) ?
        NDSP_FORMAT_MONO_PCM8 :
        NDSP_FORMAT_STEREO_PCM8;
    }
    else
    {
        ndspFormat = (channels == 1) ?
        NDSP_FORMAT_MONO_PCM16 :
        NDSP_FORMAT_STEREO_PCM16;
    }
    
    ndspChnReset(channel);
    ndspChnSetInterp(channel, NDSP_INTERP_NONE);
    ndspChnSetRate(channel, float(sampleRate));
    ndspChnSetFormat(channel, ndspFormat);
    
    // Create and play a wav buffer
    ndspWaveBuf waveBuf;
    std::memset(&waveBuf, 0, sizeof(ndspWaveBuf));
    
    //waveBuf.data_vaddr = reinterpret_cast<u32>(data);
    waveBuf.nsamples = dataSize / (bitsPerSample >> 3);
    waveBuf.looping = true; // Loop enabled
    waveBuf.status = NDSP_WBUF_FREE;
    
    DSP_FlushDataCache(data, dataSize);
    
    
    
    
    

	// Main loop
	while (aptMainLoop()) {
        hidScanInput();
        u32 kDown = hidKeysDown();
        u32 kHeld = hidKeysHeld();
        u32 kUp = hidKeysUp();

		if (kDown & KEY_TOUCH) {
			pressed=true;
            score=score+1;
            ndspChnWaveBufAdd(channel, &waveBuf);
		}
        if (kHeld & KEY_TOUCH){
            pressed=true;
        }
        if (kUp & KEY_TOUCH){
            pressed=false;
            ndspChnWaveBufClear(channel);
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

    sf2d_free_texture(topScreen);
    sf2d_free_texture(unpressedButton);
    sf2d_free_texture(pressedButton);
	sf2d_fini();
    ndspChnWaveBufClear(channel);
    
    linearFree(data);
    
    ndspExit();

	return 0;
}
