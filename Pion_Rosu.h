//---------------------------------------------------------------------------

#ifndef Pion_RosuH
#define Pion_RosuH
#include "Pion.h"
#include "Dice.h"
//---------------------------------------------------------------------------
class Pion_Rosu:public Pion{
public:
    int req_pos=6;
	int pos_startx[4], pos_starty[4];
	bool abia_iesit=false;
	int last_die_roll=0,casa_die_roll=0;
	int actual_posx=0;
	int actual_posy=0;
	void Mutare(Dice die);
	void Iesire_din_casa(Dice die);
};

#endif
