#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

main () {
	int a,b,mod;
   float bagi;
   cout<<"Contoh Penggunaan / dan %\n\n";
   cout<<"Masukkan Angka Pertama (a) ="; cin>>a;
   cout<<"Masukkan Angka Kedua (b) ="; cin>>b;
   bagi=float(a)/b;
   mod=a%b;
   cout<<"\n Hasil Pembagian = "<<setiosflags(ios::fixed)
   										<<setprecision(3)
                                 <<bagi;
   cout<<"\n Sisa Hasil Bagi = "<<mod;
   getch();}
