//---------------------------------------------------------------------------

#ifndef Ludo_serverH
#define Ludo_serverH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class Tserver_app : public TForm
{
__published:	// IDE-managed Components
	TLabel *username_server;
	TBitBtn *host_btn;
	TBitBtn *chn_btn;
	TBitBtn *quit_btn;
	void __fastcall chn_btnClick(TObject *Sender);
	void __fastcall quit_btnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tserver_app(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tserver_app *server_app;
//---------------------------------------------------------------------------
#endif
