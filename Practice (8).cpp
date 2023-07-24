#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
    char uk;
    int kode_susu,jb;
    float hrg,byr;
    cout<<"Produk Susu"<<endl;
    cout <<"1: Dancow     (B/S/K) (Rp.10.000,-/Rp.4.250,-/Rp.2.100,-)"<<endl;
    cout <<"2: Indomilk   (B/S/K) (Rp.8.500,-/Rp.4.000,-/Rp.2.025,-)"<<endl;
    cout <<"3: Sustacal   (B/S/K) (Rp.17.000,-/Rp.24.500,-/Rp.8.300,-)"<<endl;
    cout <<"Masukkan kode produk(1-3)   : ";cin>> kode_susu;
    cout <<"Masukan jumlah pembelian    : ";cin>> jb;
    cout <<"Masukan ukuran susu(B/S/K)  : ";cin>> uk;
    if(kode_susu==1 && uk=='B')
    {hrg=10000;
            cout<<"Susu Dancow"<<endl;
    }
    else if(kode_susu==1 && uk=='S')
    {hrg=4250;
            cout<<"Susu Dancow"<<endl;
    }
    else if(kode_susu==1 && uk=='K')
    {hrg=2100;
            cout<<"Susu Dancow"<<endl;
    }
    if(kode_susu==2 && uk=='B')
    {
     hrg=8500;
            cout<<"Susu Indomilk"<<endl;
    }
    else if(kode_susu==2 && uk=='S')
    {
    hrg=4000;
            cout<<"Susu Indomilk"<<endl;
    }
    else if(kode_susu==2 && uk=='K')
    {
    hrg=2025;
            cout<<"Susu Indomilk"<<endl;
    }
    if(kode_susu==3 && uk=='B')
    {
    hrg=17000;
            cout<<"Susu Sustacal"<<endl;
    }
    else if(kode_susu==3 && uk=='S')
    {
    hrg=24500;
            cout<<"Susu Sustacal"<<endl;
    }
    else if(kode_susu==3 && uk=='K')
    {
    hrg=22000;
            cout<<"Susu Sustacal"<<endl;
    }
    cout<<"Harga Susu   Rp. "<<hrg<<endl;
    byr=hrg*jb;
    cout<<"Jumlah pembelian Rp. "<<byr;
    getch();
}