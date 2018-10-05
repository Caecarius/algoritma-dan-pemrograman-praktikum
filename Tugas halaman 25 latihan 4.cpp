#include <stdio.h>
#include <conio.h>
#include <iostream>

	using namespace std;
	
int main()
{
	
	//deklarasi variabel
	char huruf;
	
	//input huruf
	cout<<"masukkan huruf kecil : ";
	cin>>huruf; cout<<endl ;
	//seleksi pembanding OR, salah satu kondisi berniai benar
	if ((huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o'))
		cout<<"anda memasukkan huruf vokal";
	else cout<<"yang anda masukkan adalah huruf konsonan";
	return 0 ;
}
