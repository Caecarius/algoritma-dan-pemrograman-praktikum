#include <stdio.h>
#include <conio.h>
#include <iostream>

	using namespace std;
	
int main()
{
	
	//Deklarasi Variable
	int TinggiBadan,Sisa,BeratBadanIdeal ;
	cout<<"Masukkan Tinggi Badan : "; cin>>TinggiBadan;
	
	//Menghitung Konversi
	Sisa = (TinggiBadan - 100)*0.1 ;
	BeratBadanIdeal = TinggiBadan - 100 - Sisa ;
	cout<<endl;
	
	//Menampilkan Hasil
	cout<<"Berat Badan Ideal:" <<BeratBadanIdeal<<endl ;
	getch () ;
	return 0 ;
}
