#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int i=0;
    float nilai, total, rata=0;
    
    cout<<"Mencari Nilai Total dan Rata-rata"<<endl;
    cout<<"Masukan nol untuk keluar..."<<endl;
    while (!(nilai==0)){
        i++;
        cout<<"Nilai ke-"<<i<<" = ";cin>>nilai;
        total+=nilai;
    }
    cout<<"Jumlah total nilai = "<<total<<endl;
    cout<<"Rata-rata = "<<(total/(i-1));
}