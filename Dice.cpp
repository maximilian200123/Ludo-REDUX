//---------------------------------------------------------------------------
#include <stdlib.h>
#pragma hdrstop
#include "Dice.h"
//---------------------------------------------------------------------------
Dice::Dice(){

}

int Dice :: Roll(){
	randomize();
	/*if(rolled==true){
		return 0;
	} */
	int roll = 6;//1+random(6);
	dice_roll=roll;
	//rolled=true;
	return roll;
}
int Dice :: GetDiceRoll(){
	return dice_roll;
}

#pragma package(smart_init)
