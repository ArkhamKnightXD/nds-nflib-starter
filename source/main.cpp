#include <stdio.h>
#include <nf_lib.h>

int main(int argc, char **argv)
{
	consoleDemoInit();
	consoleClear();
	NF_Set2D(0, 0);
	NF_SetRootFolder("NITROFS");

	int keyDown; // for key input down
	int keyHeld; // for key input down

	while (true)
	{
		scanKeys();

		keyDown = keysDown();
		keyHeld = keysHeld();

		if (keyDown & KEY_START)
		{
			break;
		}

		if (keyHeld & KEY_UP)
		{
		}
		else if (keyHeld & KEY_DOWN)
		{
		}
		else if (keyHeld & KEY_LEFT)
		{
		}
		else if (keyHeld & KEY_RIGHT)
		{
		}

		NF_SpriteOamSet(0);
		swiWaitForVBlank();
		oamUpdate(&oamMain);
	}
}
