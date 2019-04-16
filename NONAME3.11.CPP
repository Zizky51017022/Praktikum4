#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

int nilai1;
float nilai2;
char nama[20];
double gaji;

void main ()
{
	cout<<"Masukkan Nilai Bulat  : "; cin >> nilai1;
   cout<<"Tampilan Nilai Yang Anda Masukkan "<<endl;
   cout<<"Menggunakan setw (8)  : " <<setw(8) <<nilai1<<endl;
   cout<<"Menggunakan setw (-8): " <<setw(-8) <<nilai1<<endl;
   cout<<"Menggunakan setw (8)  dan setfill (' * ') : ";
   cout<<setfill (' * ') <<setw(8) <<nilai1<<endl;
   cout<<setfill ('  ');
   getch();

   clrscr();
   cout<<"Masukkan Nilai Pecahan  : ";
   cin >> nilai2;
   cout<<"Tampilan Nilai Yang Anda Masukkan "<<endl;
   cout<<"Menggunakan setiosflags (ios ::fixed): "
   <<setiosflags (ios ::fixed) <<nilai2<<endl;
   cout<<"Menggunakan setiosflags (ios :: scientific): "
   <<setiosflags (ios ::scientific) <<nilai2<<endl;
	cout<<resetiosflags(ios ::scientific);
   cout<<"Menggunakan setprecision(4) : ";
   cout<<setprecision(4)<<nilai2<<endl;
   getch();

   clrscr;
   cout<<"Masukkan Nama Anda : ";
   cin>>nama;
   cout<<"Masukkan Uang Saku Anda Perbulan : ";
   cin>>gaji;
   cout<<"Tampilkan Data Yang Anda Masukkan "<<endl;
   cout<<"Menggunakan setiosflags (ios :: left) dan setiosflags (ios :: right) : " ;
   cout<<endl;
   getch();

   clrscr;
   cout<<setiosflags (ios :: left)<<setw(25) <<"N A M A";
   cout<<setiosflags (ios :: right)<<setw(10) <<"Uang Saku"<<endl;
   cout<<setiosflags (ios :: left)<<setw(25) <<"nama";
   cout<<setiosflags (ios :: right)<<setw(10) <<"gaji"<<endl;
   getch();
   }


