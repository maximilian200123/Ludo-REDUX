//---------------------------------------------------------------------------

#ifndef Pion_RozH
#define Pion_RozH
#include "Pion.h"
#include "Dice.h"
//---------------------------------------------------------------------------
class Pion_Roz:public Pion{
public:
    int req_pos=6;
	bool abia_iesit = false;
	int last_die_roll=0,casa_die_roll=0;
	int actual_posx=0;
	int actual_posy=0;
	void Mutare(Dice die);
	void Iesire_din_casa(Dice die);
};

#endif
