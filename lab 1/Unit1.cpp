//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
String intreb[101];
String raspuns[11];
int nota=0, i=1,k=1,n=0,times=15;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)

{  
  BorderStyle = bsDialog;

  Timer1->Enabled = true;


  raspuns[1]="3";
  intreb[1]="Care este capitala Australiei?";
  intreb[2]="Sydney";
  intreb[3]="Adelaide";
  intreb[4]="Canberra";
  intreb[5]="Melbourne";

  raspuns[2]="1";
  intreb[6]="Ce film  cistiga Oscar-ul in 2014 nominalizatia 'cel mai bun film'?";
  intreb[7]="Birdman";
  intreb[8]="Boyhood";
  intreb[9]="The Imitation Game";
  intreb[10]="The Grand Budapest Hotel";

  raspuns[3]="4";
  intreb[11]="Care este cel mai lung riu din lume?";
  intreb[12]="Amazon";
  intreb[13]="Mississippi";
  intreb[14]="Obi";
  intreb[15]="Nilul";

  raspuns[4]="2";
  intreb[16]="Care este cea mai mica pasare din lume?";
  intreb[17]="Vrabia";
  intreb[18]="Colibri";
  intreb[19]="Papagalul";
  intreb[20]="Rindunica";

  raspuns[5]="3";
  intreb[21]="Ce abreviatura are mercurul in tablita periodicitatii?";
  intreb[22]="Mn";
  intreb[23]="N";
  intreb[24]="Hg";
  intreb[25]="Xe";

  raspuns[6]="4";
  intreb[26]="Unde se afla Catalonia?";
  intreb[27]="Portugalia";
  intreb[28]="Cipru";
  intreb[29]="Grecia";
  intreb[30]="Spania";

  raspuns[7]="1";
  intreb[31]="Cine a luat Balonul de Aur in 2015?";
  intreb[32]="Lionel Messi";
  intreb[33]="CRISTIANO RONALDO";
  intreb[34]="NEYMAR";
  intreb[35]="Franck Rib�ry";

  raspuns[8]="4";
  intreb[36]="Primul om in spatiu?";
  intreb[37]="Laika";
  intreb[38]="Claudie Haignere";
  intreb[39]="Neil Armstrong";
  intreb[40]="Iuri Gagarin";

  raspuns[9]="3";
  intreb[41]="Cum i se mai supune orasului Chicago?";
  intreb[42]="Orasul Ingerilor";
  intreb[43]="Marele Mar";
  intreb[44]="Orasul Viturilor";
  intreb[45]="Vacuta Purpurie";

  raspuns[10]="2";
  intreb[46]="Cine moare in sezonul 5 in serialul Game of Thrones?";
  intreb[47]="Joffrey Baratheon";
  intreb[48]="Jon Snow";
  intreb[49]="Eddard 'Ned' Stark";
  intreb[50]="Robb Stark";
}
//---------------------------------------------------------------------------





void __fastcall TForm1::Button2Click(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{


if (((Edit1->Text).Length() == 0) || ((Edit2->Text).Length() == 0) )
        {
        MessageDlg("Introduceti Numele si prenumele Dumneavoastra!",mtInformation,TMsgDlgButtons() << mbOK,0);
                if((Edit1->Text).Length() == 0 ) Edit1->SetFocus(); // cursorul in cimpul nume
                        else Edit2->SetFocus(); //cursorul in cimpul prenume
        } else

                {
                 Label5->Visible=true;
                 Label4->Visible=true;
                 Edit1->Visible=false;
                 Edit2->Visible=false;
                 Image2->Visible=true;
                 Button1->Visible=false;
                 Button2->Visible=false;
                 Label13->Visible=true;
                 Label14->Visible=true;
                 Label12->Visible=true;


                 Label5->Visible = true;

                 Timer2->Enabled = true;
                Label13->Caption = Edit1->Text;
                Label7->Visible = true;
                 Label14->Caption = Edit2->Text;
                 Label8->Visible = true;
                 Label6->Visible = true;
                 Panel1->Visible = true;
                   while(i<100){
                 Label9->Caption = intreb[i]; i++;
                 RadioButton1->Caption = intreb[i];i++;
                 RadioButton2->Caption = intreb[i];i++;
                 RadioButton3->Caption = intreb[i];i++;
                 RadioButton4->Caption = intreb[i];i++;
                 break;
                   }



                 n++;
                 }

}
//---------------------------------------------------------------------------







void __fastcall TForm1::Button3Click(TObject *Sender)
{
     times=15;
 if (n==10){
       while (k<=10){
if (RadioButton1->Checked == true && raspuns[k] == "1") nota++;


if (RadioButton2->Checked == true && raspuns[k] == "2") nota++;


if (RadioButton3->Checked == true && raspuns[k] == "3") nota++;


if (RadioButton4->Checked == true && raspuns[k] == "4") nota++;


                                         k++; break;  } //while 1


                  Panel1->Visible = false;
                  Edit1->Visible = false;
                  Edit2->Visible = false;

                  Label1 ->Visible = false;
                  Label2 ->Visible = false;
                  Button1->Visible = false; 





            }// end if 1
        else{

      while (k<=10){
if (RadioButton1->Checked == true && raspuns[k] == "1") nota++;


if (RadioButton2->Checked == true && raspuns[k] == "2") nota++;


if (RadioButton3->Checked == true && raspuns[k] == "3") nota++;


if (RadioButton4->Checked == true && raspuns[k] == "4") nota++;


                                         k++; break;  } //while 1
                   while(i<100){
                 Label9->Caption = intreb[i]; i++;

                 RadioButton1->Checked = false;
                 RadioButton2->Checked = false;
                 RadioButton3->Checked = false;
                 RadioButton4->Checked = false;

                 RadioButton1->Caption = intreb[i];i++;
                 RadioButton2->Caption = intreb[i];i++;
                 RadioButton3->Caption = intreb[i];i++;
                 RadioButton4->Caption = intreb[i];i++;
                 break;
                 } n++; //while 2
        }     // else

}// function end
//---------------------------------------------------------------------------


void __fastcall TForm1::Timer1Timer(TObject *Sender)
{

Label4->Caption =Time().FormatString("hh:mm:ss");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
if (times == 0){



 if (n==10){
       while (k<=10){
if (RadioButton1->Checked == true && raspuns[k] == "1") nota++;


if (RadioButton2->Checked == true && raspuns[k] == "2") nota++;


if (RadioButton3->Checked == true && raspuns[k] == "3") nota++;


if (RadioButton4->Checked == true && raspuns[k] == "4") nota++;


                                         k++; break;  } //while 1


                  Panel1->Visible = false;
                  Edit1->Visible = false;
                  Edit2->Visible = false;

                  Image3->Visible=true;
                  Label10->Visible=true;
                  Label11->Visible=true;
                 Label11->Caption = nota;
                   Label12->Visible=false;
                   Label13->Visible=false;
                   Label14->Visible=false;

                  Label1 ->Visible = false;
                  Label2 ->Visible = false;

                  Button1->Visible = false;
                  Button4->Visible = true;




            }// end if 1
        else{

      while (k<=10){
if (RadioButton1->Checked == true && raspuns[k] == "1") nota++;


if (RadioButton2->Checked == true && raspuns[k] == "2") nota++;


if (RadioButton3->Checked == true && raspuns[k] == "3") nota++;


if (RadioButton4->Checked == true && raspuns[k] == "4") nota++;


                                         k++; break;  } //while 1
                   while(i<100){
                 Label9->Caption = intreb[i]; i++;

                 RadioButton1->Checked = false;
                 RadioButton2->Checked = false;
                 RadioButton3->Checked = false;
                 RadioButton4->Checked = false;

                 RadioButton1->Caption = intreb[i];i++;
                 RadioButton2->Caption = intreb[i];i++;
                 RadioButton3->Caption = intreb[i];i++;
                 RadioButton4->Caption = intreb[i];i++;
                 break;
                 } n++; //while 2
        }      // else




 times=15;
}else{
times--;
}

Label5->Caption = times;
}
//---------------------------------------------------------------------------






void __fastcall TForm1::Button4Click(TObject *Sender)
{     Image4->Visible=true;
PaintBox1->Canvas->MoveTo(0,205);
PaintBox1->Canvas->LineTo(0,100);
PaintBox1->Canvas->LineTo(40,50);
PaintBox1->Canvas->LineTo(40,205);
PaintBox1->Canvas->LineTo(40,60);
PaintBox1->Canvas->LineTo(80,60);
PaintBox1->Canvas->LineTo(80,205);
PaintBox1->Canvas->LineTo(80,80);
PaintBox1->Canvas->LineTo(120,160);
PaintBox1->Canvas->LineTo(120,205);
PaintBox1->Canvas->LineTo(120,140);
PaintBox1->Canvas->LineTo(160,140);
PaintBox1->Canvas->LineTo(160,205);
PaintBox1->Canvas->LineTo(160,0);
PaintBox1->Canvas->LineTo(200,0);
PaintBox1->Canvas->LineTo(200,105);


}
//---------------------------------------------------------------------------


