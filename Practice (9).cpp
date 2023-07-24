#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

    int main(){
    float bil1,bil2;
    char Operator,ulang;

    perhitungan:
        cout <<"Masukkan Operator (+,-,/,*) : ";cin >> Operator;
        cout <<"Masukkan Bilangan ke-1\t: ";cin >> bil1;
        cout <<"Masukkan Bilangan ke-2\t: ";cin >> bil2;

        switch(Operator){
            case '+' :
                cout << bil1 << Operator << bil2 << "\t\t\t: " << bil1 + bil2 << endl;
                break;
            case '-' :
                cout << bil1 << Operator << bil2 << "\t\t\t: " << bil1 - bil2 << endl;
                break;
            case '/' :
                cout << bil1 << Operator << bil2 << "\t\t\t: " << bil1 / bil2 << endl;
                break;
            case '*' :
                cout << bil1 << Operator << bil2 << "\t\t\t: " << bil1 * bil2 << endl;
                break;
        }
        cout << "Apakah anda ingin mengulang (y/Y) ";cin >> ulang;

        if(ulang == 'y' or ulang == 'Y'){
            cout << " " << endl;
            goto perhitungan;
        }
        return 0;
}