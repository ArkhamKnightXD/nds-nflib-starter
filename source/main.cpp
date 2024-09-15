#include <stdio.h>
#include <nds.h>
#include <nf_lib.h>

int timer = 0;
char score[32];

void updateScore()
{
	sprintf(score, "SCORE: %d", 1);
	NF_ClearTextLayer(0, 0);
	NF_WriteText(0, 0, 2, 2, score);
	NF_UpdateTextLayers();
}

void reset()
{
	timer = 0;
	updateScore();
}

int main(int argc, char **argv)
{
	consoleDemoInit();
	consoleClear();
	NF_Set2D(0, 0);
	NF_SetRootFolder("NITROFS");

	NF_InitTiledBgBuffers();
	NF_InitTiledBgSys(0);

	NF_LoadTiledBg("backgrounds/bg", "bg", 256, 256);
	NF_CreateTiledBg(0, 3, "bg");

	NF_InitSpriteBuffers();
	NF_InitSpriteSys(0);

	NF_LoadSpriteGfx("sprites/tile", 0, 8, 8);
	NF_LoadSpritePal("palettes/segment", 0);
	NF_LoadSpritePal("palettes/apple", 1);
	NF_LoadSpritePal("palettes/segment_dropshadow", 2);
	NF_LoadSpritePal("palettes/apple_dropshadow", 3);

	NF_VramSpriteGfx(0, 0, 0, true);
	NF_VramSpritePal(0, 0, 0);
	NF_VramSpritePal(0, 1, 1);
	NF_VramSpritePal(0, 2, 2);
	NF_VramSpritePal(0, 3, 3);

	NF_InitTextSys(0);

	NF_LoadTextFont("fonts/font", "default", 256, 256, 0);
	NF_CreateTextLayer(0, 0, 0, "default");

	NF_WriteText(0, 0, 2, 2, "SCORE: 5");
	NF_UpdateTextLayers();

	while (1)
	{
		scanKeys();

		
		if (keysHeld() & KEY_START)
		{
			break;
		}

		if (keysHeld() & KEY_UP)
		{
			
		}
		else if (keysHeld() & KEY_DOWN)
		{
			
		}
		else if (keysHeld() & KEY_LEFT)
		{
			
		}
		else if (keysHeld() & KEY_RIGHT)
		{
			
		}

		NF_SpriteOamSet(0);
		swiWaitForVBlank();
		oamUpdate(&oamMain);
	}
}
