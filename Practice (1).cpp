#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int N1,N2,N3,N4, min, maks;
    
    cout<<"Masukan Bilangan bulat-N1 : ";cin>>N1;
    cout<<"Masukan Bilangan bulat-N2 : ";cin>>N2;
    cout<<"Masukan Bilangan bulat-N3 : ";cin>>N3;
    cout<<"Masukan Bilangan bulat-N4 : ";cin>>N4;
        min=(N1<N2&&N1<N3&&N1<N4) ? N1 : N2; N2 : N4;
        min=(N2<N1&&N2<N3&&N2<N4) ? N2 : N3; N3 : N1;
        min=(N3<N2&&N3<N1&&N3<N4) ? N3 : N4;
        min=(N4<N2&&N4<N1&&N4<N3) ? N4 : N1;
        maks=(N1>N2&&N1>N3&&N1>N4) ? N1 : N2;  
        maks=(N2>N1&&N2>N3&&N2>N4) ? N2 : N3; 
        maks=(N3>N2&&N3>N1&&N3>N4) ? N3 : N4;
        maks=(N4>N2&&N4>N1&&N4>N3) ? N4 : N1;
    cout<<"Bilangan terkecil adalah : "<<min<<endl;
    cout<<"Bilangan terbesar adalah : "<<maks<<endl;
}