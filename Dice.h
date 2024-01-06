//---------------------------------------------------------------------------

#ifndef DiceH
#define DiceH
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Dice{
protected:
int dice_roll=0;

public:
	Dice();
	//bool rolled=false;
	int Roll();
	int GetDiceRoll();
};

#endif
