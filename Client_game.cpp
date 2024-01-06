//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Client_game.h"
#include "Ludo_client.h"
#include "Dice.h"
#include "Pion.h"
#include "Pion_Verde.h"
#include "Pion_Albastru.h"
#include "Pion_Roz.h"
#include "Pion_Rosu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tgame_client *game_client;
//---------------------------------------------------------------------------
__fastcall Tgame_client::Tgame_client(TComponent* Owner)
	: TForm(Owner)
{

	for(int i=0;i<4;i++){
	p[i]=new Pion_Verde;
 }
	p[0]->image=GPawn1;
	p[1]->image=GPawn2;
	p[2]->image=GPawn3;
	p[3]->image=GPawn4;

	for(int i=4;i<8;i++){
	p[i]=new Pion_Rosu;
 }
	p[4]->image=RPawn1;
	p[5]->image=RPawn2;
	p[6]->image=RPawn3;
	p[7]->image=RPawn4;

	for(int i=8;i<12;i++){
	p[i]=new Pion_Albastru;
 }

	p[8]->image=BPawn1;
	p[9]->image=BPawn2;
	p[10]->image=BPawn3;
	p[11]->image=BPawn4;

	for(int i=12;i<16;i++){
	p[i]=new Pion_Roz;
 }

	p[12]->image=PPawn1;
	p[13]->image=PPawn2;
	p[14]->image=PPawn3;
	p[15]->image=PPawn4;

	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
    game_client->Memo1->Hide();

}
//---------------------------------------------------------------------------


void __fastcall Tgame_client::exit_client_gameClick(TObject *Sender)
{
		exit(0);
}
//---------------------------------------------------------------------------

int Tgame_client:: Next(){

	if(id>=4){
	 id=1;
	 game_client->show_id->Text = id;
	 return id;

	}
	id++;
	//die.rolled=false;
	game_client->show_id->Text = id;
	return id;
}

//---------------------------------------------------------------------------

void Tgame_client::win_check1(){
	if(p[0]->win==true && p[1]->win==true && p[2]->win==true &&p [3]->win==true){
		game_client->Memo1->Show();
		game_client->Memo1->Text = "YOU WON";
		exit(0);
	}
}

void Tgame_client::win_check2(){
	if(p[4]->win==true && p[5]->win==true && p[6]->win==true &&p [7]->win==true){
		game_client->Memo1->Show();
		game_client->Memo1->Text = "YOU WON";
		exit(0);
	}
}

void Tgame_client::win_check3(){
	if(p[8]->win==true && p[9]->win==true && p[10]->win==true &&p [11]->win==true){
		game_client->Memo1->Show();
		game_client->Memo1->Text = "YOU WON";
		exit(0);
	}
}

void Tgame_client::win_check4(){
	if(p[12]->win==true && p[13]->win==true && p[14]->win==true &&p [15]->win==true){
		game_client->Memo1->Show();
		game_client->Memo1->Text = "YOU WON";
		exit(0);
	}
}

//---------------------------------------------------------------------------

void __fastcall Tgame_client::DiceClick(TObject *Sender)
{
	int	dice_roll = die.Roll();
	game_client->dice_show->Text = dice_roll;
}

void __fastcall Tgame_client::GPawn1Click(TObject *Sender)
{    game_client->show_id->Text = id;
	if(id!=1){
	 return;
	 }
	if(p[0]->pe_tabla==false){
		 p[0]->Iesire_din_casa(die);
		 Next();
		 game_client->Arrow1->Hide();
	game_client->Arrow2->Show();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
		 return;
		}
	else{
		p[0]->Mutare(die);
		Next();
		game_client->Arrow1->Hide();
	game_client->Arrow2->Show();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
	}


}

 //---------------------------------------------------------------------------

 void __fastcall Tgame_client::GPawn2Click(TObject *Sender)
{   if(id!=1){

		return;

}
	if(p[1]->pe_tabla==false){
		 p[1]->Iesire_din_casa(die);
		 Next();
		 game_client->Arrow1->Hide();
	game_client->Arrow2->Show();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
		 return;
}   else{
		p[1]->Mutare(die);
		Next();
	game_client->Arrow1->Hide();
	game_client->Arrow2->Show();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
	}
}
//---------------------------------------------------------------------------

void __fastcall Tgame_client::GPawn3Click(TObject *Sender)
{   if(id!=1){

	return;

}
	if(p[2]->pe_tabla==false){
		 p[2]->Iesire_din_casa(die);
		 Next();
		 game_client->Arrow1->Hide();
	game_client->Arrow2->Show();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
		 return;
}   else{
		p[2]->Mutare(die);
		Next();
	game_client->Arrow1->Hide();
	game_client->Arrow2->Show();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
	   }
}
//---------------------------------------------------------------------------

void __fastcall Tgame_client::GPawn4Click(TObject *Sender)
{   if(id!=1){

	return;
}
	if(p[3]->pe_tabla==false){
		 p[3]->Iesire_din_casa(die);
		 Next();
		 game_client->Arrow1->Hide();
	game_client->Arrow2->Show();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
		 return;
}
	else{
	p[3]->Mutare(die);
	Next();
	game_client->Arrow1->Hide();
	game_client->Arrow2->Show();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
	}
}
//---------------------------------------------------------------------------

void __fastcall Tgame_client::RPawn1Click(TObject *Sender)
{    if(id!=4){
	return;
	}
	 if(p[4]->pe_tabla==false){
		 p[4]->Iesire_din_casa(die);
		 Next();
	game_client->Arrow1->Show();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
		 return;
}    else{
	 p[4]->Mutare(die);
	 Next();
	game_client->Arrow1->Show();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
	 }

}
//---------------------------------------------------------------------------

void __fastcall Tgame_client::RPawn2Click(TObject *Sender)
{    if(id!=4){
		return;
		}
	if(p[5]->pe_tabla==false){
		 p[5]->Iesire_din_casa(die);
		 id++;
	game_client->Arrow1->Show();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
		 return;
}
	else{
	p[5]->Mutare(die);
	id++;
	game_client->Arrow1->Show();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
	}
}
//---------------------------------------------------------------------------

void __fastcall Tgame_client::RPawn3Click(TObject *Sender)
{   if(id!=4){
	return;
	}
	if(p[6]->pe_tabla==false){
		 p[6]->Iesire_din_casa(die);
		 Next();
	game_client->Arrow1->Show();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
		 return;
}
	else{
	p[6]->Mutare(die);
	Next();
	game_client->Arrow1->Show();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
	}
}
//---------------------------------------------------------------------------

void __fastcall Tgame_client::RPawn4Click(TObject *Sender)
{   if(id!=4){
game_client->Arrow1->Show();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
	return;
	}
	if(p[7]->pe_tabla==false){
		 p[7]->Iesire_din_casa(die);
		 Next();
	game_client->Arrow1->Show();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
		 return;
}   else{
	p[7]->Mutare(die);
	Next();
	game_client->Arrow1->Show();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Hide();
	}

}
//---------------------------------------------------------------------------

void __fastcall Tgame_client::BPawn1Click(TObject *Sender)
{   if(id!=3){

	return;
	}
	if(p[8]->pe_tabla==false){
		 p[8]->Iesire_din_casa(die);
		 Next();
	game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Show();
		 return;
	}
	else{
		p[8]->Mutare(die);
		Next();
	game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Show();
	}
}
//---------------------------------------------------------------------------

void __fastcall Tgame_client::BPawn2Click(TObject *Sender)
{   if(id!=3){
	game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Show();
	return;
	}
	if(p[9]->pe_tabla==false){
		 p[9]->Iesire_din_casa(die);
		 Next();
		game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Show();;
		 return;
}
	else{
	p[9]->Mutare(die);
	Next();
	game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Show();
	}
}
//---------------------------------------------------------------------------

void __fastcall Tgame_client::BPawn3Click(TObject *Sender)
{   if(id!=3){
	game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Show();
	return;
	}
	if(p[10]->pe_tabla==false){
		 p[10]->Iesire_din_casa(die);
		 Next();
		 game_client->Arrow3->Hide();
	game_client->Arrow4->Show();
		 return;
}
	else{
	p[10]->Mutare(die);
	Next();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Show();
	}
}
//---------------------------------------------------------------------------

void __fastcall Tgame_client::BPawn4Click(TObject *Sender)
{    if(id!=3){
	game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Show();
	return;
	}
	if(p[11]->pe_tabla==false){
		 p[11]->Iesire_din_casa(die);
		 Next();
		game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Show();
		 return;
}
	else{
	p[11]->Mutare(die);
	Next();
	game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Hide();
	game_client->Arrow4->Show();
	}
}
//---------------------------------------------------------------------------

void __fastcall Tgame_client::PPawn1Click(TObject *Sender)
{   if(id!=2){
	game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Show();
	game_client->Arrow4->Hide();
	return;}
	if(p[12]->pe_tabla==false){
		 p[12]->Iesire_din_casa(die);
		 Next();
	game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Show();
	game_client->Arrow4->Hide();
		 return;
}
	else{
	p[12]->Mutare(die);
	Next();
	game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Show();
	game_client->Arrow4->Hide();
	}
}
//---------------------------------------------------------------------------

void __fastcall Tgame_client::PPawn2Click(TObject *Sender)
{   if(id!=2){
	game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Show();
	game_client->Arrow4->Hide();
	return;
	}
	if(p[13]->pe_tabla==false){
		 p[13]->Iesire_din_casa(die);
		 Next();
	game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Show();
	game_client->Arrow4->Hide();
		 return;
}
	else{
	p[13]->Mutare(die);
	Next();
	game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Show();
	game_client->Arrow4->Hide();
	}
}
//---------------------------------------------------------------------------

void __fastcall Tgame_client::PPawn3Click(TObject *Sender)
{   if(id!=2){
	game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Show();
	game_client->Arrow4->Hide();
	return;
	}
	if(p[14]->pe_tabla==false){
		 p[14]->Iesire_din_casa(die);
		 Next();
	game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Show();
	game_client->Arrow4->Hide();
		 return;
}
	else{
	p[14]->Mutare(die);
	Next();
game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Show();
	game_client->Arrow4->Hide();
	}
}
//---------------------------------------------------------------------------

void __fastcall Tgame_client::PPawn4Click(TObject *Sender)
{   if(id!=2){
	game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Show();
	game_client->Arrow4->Hide();
	return;
	}
	if(p[15]->pe_tabla==false){
		 p[15]->Iesire_din_casa(die);
		 Next();
		 game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Show();
	game_client->Arrow4->Hide();
		 return;
}
	else{
	p[15]->Mutare(die);
	Next();
	game_client->Arrow1->Hide();
	game_client->Arrow2->Hide();
	game_client->Arrow3->Show();
	game_client->Arrow4->Hide();
	}
}
//---------------------------------------------------------------------------



