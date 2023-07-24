#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int C, R, F;
    
    cout<<"CELCIUS  FAHRENHEIT  REAMUR"<<endl;
    C = 100;
    do{
        F = 1.8 * C + 32;
        R = 0.8 * C;
        cout<<"Celcius: "<<C<<"  Fahrenheit: "<<F<<"  Reamur: "<<R<<endl;
        C--;
    } while (C >= 0);
}