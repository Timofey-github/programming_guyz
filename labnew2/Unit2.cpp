//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
Memo1->Lines->Add("Kolesnichenko");
Memo1->Lines->Add("Parmenov");
Memo1->Lines->Add("Masneva");
Memo1->Lines->Add("Popov");}
//---------------------------------------------------------------------------
