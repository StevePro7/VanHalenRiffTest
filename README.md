# VanHalenRiffTest

Original WAV file
<br />
cd wav
<br />
RunningWithTheDevil.wav
<br />
<br />
<b>pcmenc</b>
<br />
pcmenc -rto 1 -dt1 12 -dt2 12 -dt3 423 RunningWithTheDevil.wav
<br />
mv RunningWithTheDevil.wav.pcmenc Riff_1978.wav.pcmenc
<br />
<br />
Riff_1978.wav.pcmenc
<br />
66,515 bytes
<br />
<br />
Therefore, chunk out into 5x files and put into banks:
<br />
bank3	Riff_1978_01.wav.pcmenc	16,384 bytes
<br />
bank4	Riff_1978_02.wav.pcmenc	16,384 bytes
<br />
bank5	Riff_1978_03.wav.pcmenc	16,384 bytes
<br />
bank6	Riff_1978_04.wav.pcmenc	16,384 bytes
<br />
bank7	Riff_1978_05.wav.pcmenc	   979 bytes
<br />
<br />
Play sample from ROM bank3 to bank7