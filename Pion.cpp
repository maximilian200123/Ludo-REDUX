//---------------------------------------------------------------------------

#pragma hdrstop

#include "Pion.h"
#include "Position.h"
//---------------------------------------------------------------------------
void Pion::creare_patrat(){
	int corector=0;
	for(int i=0;i<6;i++){
		patrat[i].x=pozitie.pozx[8]+105;
		patrat[i].y=pozitie.pozy[i]+corector;
		corector=corector+8;
	}

	int contor1=0;
	int corector1=115;
	for(int i=6;i<12;i++){
		patrat[i].x=pozitie.pozx[9+contor1]+corector1;
		patrat[i].y=pozitie.pozy[6]+50;
		contor1++;
		corector1=corector1+10;
	}

	patrat[12].x=pozitie.pozx[14]+165;
	patrat[12].y=pozitie.pozy[7]+60;

	int contor2=0;
	int corector2=165;
	for(int i=13;i<19;i++){

		patrat[i].x=pozitie.pozx[14-contor2]+corector2;
		patrat[i].y=pozitie.pozy[8]+70;
		contor2++;
		corector2=corector2-10;
	}

	int contor3=0;
	int corector3=80;
	for(int i=19;i<25;i++){

		patrat[i].x=pozitie.pozx[8]+105;
		patrat[i].y=pozitie.pozy[9+contor3]+corector3;
		contor3++;
		corector3=corector3+8;
	}

	patrat[25].x=pozitie.pozx[7]+95;
	patrat[25].y=pozitie.pozy[14]+135;

	int contor4=0;
	int corector4=135;
	for(int i=26;i<32;i++){

		patrat[i].x=pozitie.pozx[6]+85;
		patrat[i].y=pozitie.pozy[14-contor4]+corector4;
		contor4++;
		corector4=corector4-13;
	}

	int contor5=0;
	int corector5=75;
	for(int i=32;i<38;i++){

		patrat[i].x=pozitie.pozx[5-contor5]+corector5;
		patrat[i].y=pozitie.pozy[8]+58;
		contor5++;
		corector5=corector5-9;
	}

	patrat[38].x=pozitie.pozx[0]+35;
	patrat[38].y=pozitie.pozy[7]+60;

	int contor6=0;
	int corector6=25;
	for(int i=39;i<45;i++){

		patrat[i].x=pozitie.pozx[0+contor6]+corector5;
		patrat[i].y=pozitie.pozy[6]+50;
		contor6++;
		corector5=corector5+10;
	}

	int contor7=0;
	int corector7=45;
	for(int i=45;i<51;i++){

		patrat[i].x=pozitie.pozx[6]+90;
		patrat[i].y=pozitie.pozy[5-contor7]+corector7;
		contor7++;
		corector7=corector7-9;
	}

	patrat[51].x=pozitie.pozx[7]+95;
	patrat[51].y=pozitie.pozy[0]-5;

}

void Pion::creare_casa(){
	int cor=8;
	for(int i=0;i<6;i++){
		pos_casa[i].x=pozitie.pozx[7]+95;
		pos_casa[i].y=pozitie.pozy[i]+cor;
		cor=cor+8;
	}

	int cont1=0;
	int cor2=165;
	for(int i=6;i<12;i++){

		pos_casa[i].x=pozitie.pozx[13-cont1]+cor2;
		pos_casa[i].y=pozitie.pozy[7]+70;
		cont1++;
		cor2=cor2-10;
	}

	int cont2=0;
	int cor3=135;
	for(int i=12;i<18;i++){

		pos_casa[i].x=pozitie.pozx[7]+95;
		pos_casa[i].y=pozitie.pozy[14-cont2]+cor3;
		cont2++;
		cor3=cor3-13;
	}

	int cont3=0;
	int cor4=35;
	for(int i=39;i<45;i++){

		patrat[i].x=pozitie.pozx[1+cont3]+cor4;
		patrat[i].y=pozitie.pozy[6]+50;
		cont3++;
		cor4=cor4+10;
	}
}

Pion::Pion(){
	creare_patrat();
	creare_casa();
}

#pragma package(smart_init)
