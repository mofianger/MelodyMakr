#include "tones.h"
unsigned int en = 0;
const unsigned int frequency[] = {
	33, 37, 41, 44, 49, 55, 62,
	65, 73, 82, 87, 98, 110, 123,
	131, 147, 165, 175, 196, 220, 247, 
	262, 294, 330, 349, 392, 440, 494,
	523, 587, 659, 698, 784, 880, 988,
	1047, 1175, 1319, 1397, 1568, 1760, 1976 
}; 

void echo(unsigned int hz, unsigned int t)
{
	unsigned char HHH,LLL;
	unsigned int delay_times;
	unsigned long loop_times;

	TMOD = 0x01;
	if(hz){
		delay_times = 460829 / hz;
		loop_times = (long)t * hz / 500;
	}
	else{
		delay_times = 922;
		loop_times = (long)t;
	}

	HHH = (65536-delay_times) / 256;
	LLL = (65536-delay_times) % 256;

	TH0 = HHH;
	TL0 = LLL;
	TR0 = 1;
	sound = 0;


	while(loop_times--)
	{
		while(TF0==0);
		TF0 = 0;
		if(hz)	sound = ~sound;
		TH0 = HHH;
		TL0 = LLL;
	}
}

void echo_note(unsigned char note, unsigned int t)
{
	if(note == -1)
		echo(0, t);
	else echo(frequency[note], t);
}

void playList(Notes myNotes[], unsigned int size)
{
    unsigned int i;
    for(i=0;i<size;i++)
    {
		if(!en) break;
        echo_note(myNotes[i].tone, myNotes[i].duration);
    }
}