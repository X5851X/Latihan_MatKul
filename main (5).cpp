#include <iostream>
using namespace std;
struct nilai
{
    char nim [15];
    char nama [50];
    int ntugas, nkuis, nmid, nuas, nakhir;
    char grade;
};
int main()
{
    nilai mhs;
    cout<<"========================================"<<endl;
    cout<<"Program Menghitung Nilai Akhir Mahasiswa"<<endl;
    cout<<"========================================"<<endl;
    cout<<"NIM              : ";cin.getline(mhs.nim,15);
    cout<<"Nama             : ";cin.getline(mhs.nama,50);
    cout<<"Nilai Tugas      : ";cin>>mhs.ntugas;
    cout<<"Nilai Kuis       : ";cin>>mhs.nkuis;
    cout<<"Nilai Mid        : ";cin>>mhs.nmid;
    cout<<"Nilai UAS        : ";cin>>mhs.nuas;
   
    mhs.nakhir = (mhs.ntugas*10/100)+(mhs.nkuis*20/100)+(mhs.nmid*30/100)+(mhs.nuas*40/100);
 
    if(mhs.nakhir>=85){ 
    mhs.grade='A';
    }
    else if (mhs.nakhir>=85 && mhs.nakhir>70){
    mhs.grade='B';
    }
    else if (mhs.nakhir>=70 && mhs.nakhir>55){
    mhs.grade='C';
    }
    else if (mhs.nakhir>=55 && mhs.nakhir>40){
    mhs.grade='D';
    }
    else if (mhs.nakhir>=40){
    mhs.grade='E';
    }
 
    cout<<"==================================="<<endl;
    cout<<"\tNilai Akhir Mahasiswa"<<endl;;
    cout<<"==================================="<<endl;
    cout<<"NIM              : "<< mhs.nim<<endl;
    cout<<"Nama             : "<< mhs.nama<<endl;
    cout<<"Nilai Tugas      : "<< mhs.ntugas<<endl;
    cout<<"Nilai Kuis       : "<< mhs.nkuis<<endl;
    cout<<"Nilai Mid        : "<< mhs.nmid<<endl;
    cout<<"Nilai UAS        : "<< mhs.nuas<<endl;
    cout<<"Mendapatkan Nilai Akhir  : "<<mhs.nakhir<<endl;
    cout<<"Nilai Huruf (Grade)      : "<<mhs.grade<<endl;
    return 0;
}