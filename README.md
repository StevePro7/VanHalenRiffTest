# VanHalenRiffTest

Original WAV file
cd wav
RunningWithTheDevil.wav

pcmenc
pcmenc -rto 1 -dt1 12 -dt2 12 -dt3 423 RunningWithTheDevil.wav

mv RunningWithTheDevil.wav.pcmenc Riff_1978.wav.pcmenc


Riff_1978.wav.pcmenc
66,515 bytes

Therefore, chunk out into 5x files and put into banks
bank3	Riff_1978_01.wav.pcmenc	16,384 bytes
bank4	Riff_1978_02.wav.pcmenc	16,384 bytes
bank5	Riff_1978_03.wav.pcmenc	16,384 bytes
bank6	Riff_1978_04.wav.pcmenc	16,384 bytes
bank7	Riff_1978_05.wav.pcmenc	   979 bytes

Play sample from ROM bank3 to bank7