#include <stdio.h>
#include <conio.h>
#include <iostream>

	using namespace std;
	
int main()
{
	int nilai;
	cout<<"masukkan nilai : ", cin>>nilai;
	cout<<endl;
	if (nilai>50)
	{
		cout<<"selamat, amda lulus . . .";
	}	else
	{
		cout<<"maaf, anda gagal . . .";
	}
}
