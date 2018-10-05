#include <stdio.h>
#include <conio.h>
#include <iostream>

	using namespace std;
	
int main()
{
	//Deklarasi Variable
	int MasukJam,MasukMenit,MasukDetik ;
	int KeluarJam,KeluarMenit,KeluarDetik ;
	int SelisihJam,SelisihMenit,SelisihDetik ;
	
	//Input Data Jam Masuk
	cout<<"waktu masuk "<<endl ;
	cout<<"jam :" ; cin>>MasukJam ;
	cout<<"Menit :" ; cin>>MasukMenit ;
	cout<<"Detik :" ; cin>>MasukDetik ;
	
	//Input Data Jam Keluar
	cout<<"Waktu Keluar "<<endl ;
	cout<<"jam :" ; cin>>KeluarJam ;
	cout<<"Menit :" ; cin>>KeluarMenit ;
	cout<<"Detik :" ; cin>>KeluarDetik ;
	
	//Menghitung Selisih Jam
	if ((KeluarJam - MasukJam)<0) {
		SelisihJam = ( 24 + KeluarJam ) - MasukJam ;
	}
	else {
		SelisihJam = KeluarJam - MasukJam ;
	}
	
	//Menghitung Selisih Meni
	if ((KeluarMenit - MasukMenit)<0) {
		SelisihMenit = ( 60 + KeluarMenit ) - MasukMenit ;
	}
	else {
		SelisihMenit = KeluarMenit - MasukMenit ;
	}
	
	//Menghitung Selisih Detik
	if ((KeluarDetik - KeluarDetik)<0) {
		SelisihDetik = ( 60 + KeluarDetik ) - MasukDetik ;
	}
	else {
		SelisihDetik = KeluarDetik - MasukDetik ;
	}
	
	//Menampilkan Hasilnya
	cout<<"Selisih Waktu"<<endl;
	cout<<SelisihJam<<" Selisih Jam "<<SelisihMenit<<" Selisih Menit "<<SelisihDetik<<" Selisih Detik "<<endl;
	getch ();
	return 0;
}
