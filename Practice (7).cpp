#include <iostream>
#include <conio.h>
using namespace std;

void clrscr()
{
    printf("\e[1;1H\e[2J");
}
int main(){
    int x,y, maks;
    char lagi;
    do{
        clrscr();
        cout<<"Masukan nilai-1 : "; cin>>x;
        cout<<"Masukan nilai-2 : "; cin>>y;
        maks=(x<y) ? x : y;
        cout<<"Nilai terkecil adalah : "<<maks;
        cout<<"\n\nUlang lagi[Y/T] ?"; cin>>lagi;
    }while ((lagi=='y')||(lagi=='Y'));
}