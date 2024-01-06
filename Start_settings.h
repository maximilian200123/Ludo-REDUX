//---------------------------------------------------------------------------

#ifndef Start_settingsH
#define Start_settingsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class Tstart_set : public TForm
{
__published:	// IDE-managed Components
	TButton *client_btn;
	TButton *server_btn;
	TButton *quit;
	TLabel *settings_label;
	void __fastcall quitClick(TObject *Sender);
	void __fastcall client_btnClick(TObject *Sender);
	void __fastcall server_btnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tstart_set(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tstart_set *start_set;
//---------------------------------------------------------------------------
#endif
