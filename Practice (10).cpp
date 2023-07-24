#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()  {
    int angka;
    Masukkan_Angka :
    cout<<"Masukkan angka N : ";cin>>angka;
    cout<<"Masukkan : \n"<<angka<<endl;
    cout<<"Keluaran : "<<endl;
    
    switch (angka){
		case 1:
			cout<<"Satu";
			break;
		case 2:
			cout<<"Dua";
			break;
		case 3:
			cout<<"Tiga";
			break;
		case 4:
			cout<<"Empat";
			break;
		case 5:
			cout<<"Lima";
			break;
		case 6:
			cout<<"Enam";
			break;
		case 7:
			cout<<"Tujuh";
			break;
		case 8:
			cout<<"Delapan";
			break;
		case 9:
			cout<<"Sembilan";
			break;
		case 10:
			cout<<"Sepuluh";
			break;
		default : 
			cout<<"Tidak dalam jangkaun";
			break;
	}
}