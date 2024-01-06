//---------------------------------------------------------------------------

#ifndef Client_gameH
#define Client_gameH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include "Dice.h"
#include "Pion.h"
#include "Pion_Verde.h"
#include "Pion_Albastru.h"
#include "Pion_Roz.h"
#include "Pion_Rosu.h"
//---------------------------------------------------------------------------

class Tgame_client : public TForm
{
__published:	// IDE-managed Components
	TImage *tabla;
	TLabel *Player1;
	TLabel *Player2;
	TLabel *Player3;
	TLabel *Player4;
	TImage *GPawn1;
	TImage *GPawn2;
	TImage *GPawn3;
	TImage *GPawn4;
	TImage *RPawn1;
	TImage *RPawn2;
	TImage *RPawn3;
	TImage *RPawn4;
	TImage *BPawn1;
	TImage *BPawn2;
	TImage *BPawn3;
	TImage *BPawn4;
	TImage *PPawn1;
	TImage *PPawn2;
	TImage *PPawn3;
	TImage *PPawn4;
	TImage *Dice;
	TButton *exit_client_game;
	TEdit *dice_show;
	TImage *Arrow1;
	TImage *Arrow2;
	TImage *Arrow3;
	TImage *Arrow4;
	TEdit *show_id;
	TMemo *Memo1;
	void __fastcall exit_client_gameClick(TObject *Sender);
	void __fastcall GPawn1Click(TObject *Sender);
	void __fastcall DiceClick(TObject *Sender);
	void __fastcall GPawn2Click(TObject *Sender);
	void __fastcall GPawn3Click(TObject *Sender);
	void __fastcall GPawn4Click(TObject *Sender);
	void __fastcall RPawn1Click(TObject *Sender);
	void __fastcall RPawn2Click(TObject *Sender);
	void __fastcall RPawn3Click(TObject *Sender);
	void __fastcall RPawn4Click(TObject *Sender);
	void __fastcall BPawn1Click(TObject *Sender);
	void __fastcall BPawn2Click(TObject *Sender);
	void __fastcall BPawn3Click(TObject *Sender);
	void __fastcall BPawn4Click(TObject *Sender);
	void __fastcall PPawn1Click(TObject *Sender);
	void __fastcall PPawn2Click(TObject *Sender);
	void __fastcall PPawn3Click(TObject *Sender);
	void __fastcall PPawn4Click(TObject *Sender);
private:
		// User declarations
public:		// User declarations
	__fastcall Tgame_client(TComponent* Owner);
	class Dice die;
	Pion *p[16];
	int Next();
	void win_check1();
	void win_check2();
	void win_check3();
	void win_check4();
	int id=1;

};
//---------------------------------------------------------------------------
extern PACKAGE Tgame_client *game_client;
//---------------------------------------------------------------------------
#endif
