//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Ludo_server.h"
#include "Start_settings.h"
#include "Change_name.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tserver_app *server_app;
//---------------------------------------------------------------------------
__fastcall Tserver_app::Tserver_app(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tserver_app::chn_btnClick(TObject *Sender)
{
	ch_name->Show();
}
//---------------------------------------------------------------------------
void __fastcall Tserver_app::quit_btnClick(TObject *Sender)
{
    exit(0);
}
//---------------------------------------------------------------------------
