@echo off

cd object
sdcc -c -mz80 riff_object.c
cd ..

sdcc -c -mz80 fxsample.c
sdcc -c -mz80 main.c

sdcc -o output.ihx -mz80 --no-std-crt0 --data-loc 0xC000 ^
..\crt0\crt0_sms.rel main.rel ^
-Wl-b_BANK2=0x8000 ^
-Wl-b_BANK3=0x8000 ^
-Wl-b_BANK4=0x8000 ^
-Wl-b_BANK5=0x8000 ^
-Wl-b_BANK6=0x8000 ^
-Wl-b_BANK7=0x8000 ^
banks\bank2.rel ^
banks\bank3.rel ^
banks\bank4.rel ^
banks\bank5.rel ^
banks\bank6.rel ^
banks\bank7.rel ^
..\lib\SMSlib.lib ^
object\riff_object.rel ^
fxsample.rel

ihx2sms output.ihx output.sms

del *.asm > nul; del *.ihx > nul; del *.lk > nul
del *.lst > nul; del *.noi > nul; del *.rel > nul
del *.sym > nul
::del *.map > nul

C:\SEGA\Fusion\fusion.exe output.sms
::C:\SEGA\Meka\mekaw.exe output.sms
::java -jar C:\SEGA\Emulicious\emulicious.jar output.sms