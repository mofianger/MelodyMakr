#include <reg51.h>
#include "tones.h"
#include "music.h"

sbit button = P3^0;
unsigned int cnt = 0;
extern unsigned int en;

void start_music();

void main(void){
	bit prevState = 1;
	EA = 1;
	EX0 = 1;
	IT0 = 1;
	while (1){
		start_music();
//		if (button == 0)
//			if (prevState == 1){
//				unsigned int size = sizeof(AnotherDayOfSun) / sizeof(AnotherDayOfSun[0]);
//				playList(AnotherDayOfSun, size);
//			}
//		prevState == button;
		;
	}
//	while(1){
//		unsigned int size = sizeof(theDisappearenceOfHatsuneMiku) / sizeof(theDisappearenceOfHatsuneMiku[0]);
//		playList(theDisappearenceOfHatsuneMiku, size);
//	}

//	while(1){
//		echo(440, 2000);
//	}
}

void start_music()
{
	while(en){
		unsigned int size = sizeof(AnotherDayOfSun) / sizeof(AnotherDayOfSun[0]);
		playList(AnotherDayOfSun, size);
	}
}

void int0(void) interrupt 0 using 0{
	cnt++;
	if (cnt & 0x01){
		en = 1;
		//start_music();
	}
	else{
		sound = 0;
		en = 0;
	}
}
