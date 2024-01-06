//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Change_name.h"
#include "Ludo_client.h"
#include "Ludo_server.h"
#include "Client_game.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tch_name *ch_name;
//---------------------------------------------------------------------------
__fastcall Tch_name::Tch_name(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tch_name::ok_btnClick(TObject *Sender)
{
	server_app->username_server->Caption = ch_name->name_edit->Text;
	client_app->username->Caption = ch_name->name_edit->Text;
	game_client->Player1->Caption = ch_name->name_edit->Text;
	ch_name->Close();
}
//---------------------------------------------------------------------------
void __fastcall Tch_name::cancel_btnClick(TObject *Sender)
{
	ch_name->Close();
}
//---------------------------------------------------------------------------
