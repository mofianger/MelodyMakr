#include<reg51.h>
#include"tones.h"


code Notes C_scale[] = {
	{C3, 1000}, {D3, 1000}, {E3, 1000}, {F3, 1000}, {G3, 1000}, {A3, 1000}, {B3, 1000},
	{C4, 1000}, {D4, 1000}, {E4, 1000}, {F4, 1000}, {G4, 1000}, {A4, 1000}, {B4, 1000},
	{C5, 1000}, {D5, 1000}, {E5, 1000}, {F5, 1000}, {G5, 1000}, {A5, 1000}, {B5, 1000},
};

code Notes Haruhikage[] = {
	{E4, 333}, {E4, 333}, {D4, 333}, {F4, 333}, {E4, 333}, {D4, 333}, {D4, 333}, {D4, 333}, {C4, 333}, {F4, 333}, {E4, 333}, {D4, 333}, {D4, 666}, {C4, 167}, {D4, 167}, {E4, 999}, {E4, 999},
	{E4, 333}, {G4, 333}, {C5, 333}, {B4, 666}, {C5, 333}, {B4, 666}, {C5, 333}, {B4, 167}, {A4, 167}, {G4, 666}, {G4, 333}, {C4, 333}, {F4, 333}, {F4, 666}, {E4 ,167}, {D4, 167}, {E4, 666}, {C4, 333}, {F4, 333}, {E4, 333}, {D4, 333}, {E4, 666}, {G4, 333}, {C4, 999}
};

code Notes theDisappearanceOfHatsuneMiku[] = {
	{C4, 360}, {G3, 360}, {C4, 120}, {D4, 120}, {E4, 240}, {D4, 240}, {C4, 240}, {E4, 120}, {F4, 120}, {G4, 240}, {G4, 120}, {G4, 360}, 
	{A4, 240}, {G4, 240}, {F4, 240}, {E4, 240}, {F4, 240}, {E4, 360}, {C4, 360}, {G3, 240}, {A3, 120}, {G3, 240}, {F3, 240}, {G3, 120}, 
	{A3, 240}, {G3, 480}, {E3, 480}, {F3, 120}, {E3, 240}, {D3, 240}, {E3, 120}, {F3, 240}
};
void main(void)
{
 	//sound = P3^6;	There is a problem.
	while(1)
	{
		//playList(C_scale, sizeof(C_scale) / sizeof(C_scale[0]));
		//playList(Haruhikage, sizeof(Haruhikage) / sizeof(Haruhikage[0]));
		playList(theDisappearanceOfHatsuneMiku, sizeof(theDisappearanceOfHatsuneMiku) / sizeof(theDisappearanceOfHatsuneMiku[0]));
	}
	
}
