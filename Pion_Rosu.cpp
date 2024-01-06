//---------------------------------------------------------------------------

#pragma hdrstop

#include "Pion_Rosu.h"
#include "Dice.h"
//---------------------------------------------------------------------------
void Pion_Rosu::Mutare(Dice die){

	int die_roll=0;
	die_roll=die.GetDiceRoll();

	if(abia_iesit==true){
		last_die_roll=40;
		abia_iesit=false;
	}

	if(req_pos<6){
		if(die_roll>req_pos){
			return;
		}
		casa_die_roll=casa_die_roll+die_roll;
		actual_posx=pos_casa[18+(casa_die_roll-1)].x;
		actual_posy=pos_casa[18+(casa_die_roll-1)].y;
		image->Left=actual_posx;
		image->Top=actual_posy;
		req_pos= req_pos-die_roll;
		if(req_pos==0)	{win=true;}
		return;
	}

	if(last_die_roll+die_roll>38){
		casa_die_roll=(last_die_roll+die_roll)-38;
		actual_posx=pos_casa[18+(casa_die_roll-1)].x;
		actual_posy=pos_casa[18+(casa_die_roll-1)].y;
		image->Left=actual_posx;
		image->Top=actual_posy;
		req_pos= req_pos-casa_die_roll;
		if(req_pos==0)	{win=true;}
	}

	if(last_die_roll+die_roll>52){
		this->last_die_roll=(last_die_roll+die_roll)-52;
		actual_posx=patrat[last_die_roll].x;
	actual_posy=patrat[last_die_roll].y;
	image->Left=actual_posx;
	image->Top=actual_posy;
	return;
	}

	this->last_die_roll=die_roll+last_die_roll;
	actual_posx=patrat[last_die_roll].x;
	actual_posy=patrat[last_die_roll].y;
	image->Left=actual_posx;
	image->Top=actual_posy;

}

void Pion_Rosu::Iesire_din_casa(Dice die){
	 if(die.GetDiceRoll()==6){

		actual_posx=patrat[40].x;
		actual_posy=patrat[40].y;
		image->Left=actual_posx;
		image->Top=actual_posy;
		pe_tabla=true;
		abia_iesit=true;
	 }
	 return ;
}


#pragma package(smart_init)
