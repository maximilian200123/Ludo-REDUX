//---------------------------------------------------------------------------

#ifndef Change_nameH
#define Change_nameH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class Tch_name : public TForm
{
__published:	// IDE-managed Components
	TEdit *name_edit;
	TBitBtn *ok_btn;
	TBitBtn *cancel_btn;
	void __fastcall ok_btnClick(TObject *Sender);
	void __fastcall cancel_btnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tch_name(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tch_name *ch_name;
//---------------------------------------------------------------------------
#endif
