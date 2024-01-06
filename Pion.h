//---------------------------------------------------------------------------

#ifndef PionH
#define PionH
#include "Position.h"
#include <Vcl.ExtCtrls.hpp>
#include "Dice.h"
//---------------------------------------------------------------------------
class Pion{
public:
    bool win=false;
	bool pe_tabla=false;
	Position patrat[52],pozitie,pos_casa[24];
	TImage *image;
	virtual void Mutare(Dice die)=0;
	virtual void Iesire_din_casa(Dice die)=0;
	Pion();
	void creare_patrat();
	void creare_casa();
    ~Pion();

};

#endif
