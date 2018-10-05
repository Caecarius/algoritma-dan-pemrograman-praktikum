#include <stdio.h>
#include <conio.h>
#include <iostream>

	using namespace std;
	
int main()
{
	//Deklarasi variable
	int yard, kaki, inchi, meter;
	cout<<"masukkan satuan meter : "; cin>>meter;
	
	//Menghitung Konversi
	yard = meter / 0.9144 ;
	kaki = meter / 0.3048 ;
	inchi = meter / 0.0254 ;
	cout<<endl ;
	
	
	//Menampilkan Hasilnya
	cout<<yard<<" Yard " <<kaki<<" kaki " <<inchi<<" inchi ";
	return 0;

}
