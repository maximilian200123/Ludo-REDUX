//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Start_settings.h"
#include "Ludo_client.h"
#include "Change_name.h"
#include "Client_game.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tclient_app *client_app;
//---------------------------------------------------------------------------
__fastcall Tclient_app::Tclient_app(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tclient_app::quit_btnClick(TObject *Sender)
{
        exit(0);
}
//---------------------------------------------------------------------------
void __fastcall Tclient_app::chn_btnClick(TObject *Sender)
{
		//client_app->Hide();
		ch_name->Show();
}
//---------------------------------------------------------------------------
void __fastcall Tclient_app::join_btnClick(TObject *Sender)
{
		client_app->Hide();
		game_client->Show();
}
//---------------------------------------------------------------------------

