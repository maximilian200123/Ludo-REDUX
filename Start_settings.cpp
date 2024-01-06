//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Start_settings.h"
#include "Ludo_client.h"
#include "Ludo_server.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tstart_set *start_set;
//---------------------------------------------------------------------------
__fastcall Tstart_set::Tstart_set(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tstart_set::quitClick(TObject *Sender)
{
	exit(0);
}
//---------------------------------------------------------------------------
void __fastcall Tstart_set::client_btnClick(TObject *Sender)
{
		start_set->Hide();
		client_app->Show();
}
//---------------------------------------------------------------------------
void __fastcall Tstart_set::server_btnClick(TObject *Sender)
{
		start_set->Hide();
		server_app->Show();
}
//---------------------------------------------------------------------------
