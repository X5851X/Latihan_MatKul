#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;

struct warnet{
    int njam, nmenit, ndetik, nbayar;
};

int main(){
    warnet wrt;
    cout<<"Program Menghitung Durasi Rental Warnet"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Masukkan jam     : ";cin>>wrt.njam;
    cout<<"Masukkan menit   : ";cin>>wrt.nmenit;
    cout<<"Masukkan detik   : ";cin>>wrt.ndetik;
    
    wrt.nbayar=(wrt.njam*120*130)+(wrt.nmenit*260)+(wrt.ndetik*130/30);
    
    cout<<"Total pembayaran : "<<wrt.nbayar<<endl;
}