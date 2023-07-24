#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    char kode;
    cout << "Pilih salah satu kode [a, b,c] ?";
    kode=getchar();
    while(!((kode=='a')||(kode=='b')||(kode=='c'))){
        kode=getchar();
        }
    cout<<"\nPilihan Anda : "<<kode;
}