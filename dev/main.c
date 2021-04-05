#include "main.h"

const unsigned char psgInit[] =
{
	0x9F, 0xBF, 0xDF, 0xFF, 0x81, 0x00, 0xA1, 0x00, 0x00, 0xC1, 0x00
};

void main (void)
{
	const unsigned char r = 0;
	const unsigned char g = 3;
	const unsigned char b = 3;

	unsigned char test = 0;
	unsigned char index = 0;
	unsigned char count = 4;

	const unsigned char *data;
	unsigned char bank;

	SMS_init();
	SMS_setSpritePaletteColor(0, RGB(r, g, b));
	SMS_displayOn();

	initPSG( psgInit );
	for (;;)
	{
		if( !test )
		{
			test = 1;
			for( index = 0; index < count; index++ )
			{
				data = riff_data[ index ];
				bank = riff_bank[ index ];
				SMS_mapROMBank( bank );
				PlaySample( data );
			}
		}

		SMS_waitForVBlank();
	}
}

#ifdef _CONSOLE
#else
	SMS_EMBED_SEGA_ROM_HEADER(9999, 0);
	SMS_EMBED_SDSC_HEADER(1, 0, 2017, 9, 15, "StevePro Studios", "Astro Force", "Convert example as scalable SMS project");
#endif
