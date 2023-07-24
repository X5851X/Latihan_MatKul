#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    cout<<"Deret Bilangan Genap"<<endl;
    for(int i=1;i<=50;i++){
    if (i%2==0)
    cout<<i<<" ";
    }
    cout<<"\nDeret Bilangan Ganjil"<<endl;
    for(int i=1;i<=50;i++){
    if (i%2!=0)
    cout<<i<<" ";
    }
}