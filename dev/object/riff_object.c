#include "riff_object.h"
#include "..\banks\bank4.h"
#include "..\banks\bank5.h"
#include "..\banks\bank6.h"
#include "..\banks\bank7.h"

const unsigned char *riff_data[] =
{
	Riff_test_01_wav_pcmenc,
	Riff_test_02_wav_pcmenc,
	Riff_test_03_wav_pcmenc,
	Riff_test_04_wav_pcmenc,
};

const unsigned char riff_bank[] =
{
	Riff_test_01_wav_pcmenc_bank,
	Riff_test_02_wav_pcmenc_bank,
	Riff_test_03_wav_pcmenc_bank,
	Riff_test_04_wav_pcmenc_bank,
};
