//---------------------------------------------------------------------------

#ifndef Ludo_clientH
#define Ludo_clientH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class Tclient_app : public TForm
{
__published:	// IDE-managed Components
	TBitBtn *join_btn;
	TBitBtn *chn_btn;
	TBitBtn *quit_btn;
	TLabel *username;
	void __fastcall quit_btnClick(TObject *Sender);
	void __fastcall chn_btnClick(TObject *Sender);
	void __fastcall join_btnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tclient_app(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tclient_app *client_app;
//---------------------------------------------------------------------------
#endif
