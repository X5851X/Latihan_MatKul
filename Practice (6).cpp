#include <iostream>
#include <conio.h>
using namespace std;
void clrscr()
{
    printf("\e[1;1H\e[2J");
}
int main(){
    char huruf;
    clrscr();
    for(huruf='A'; huruf<= 'Z'; huruf++){
        cout << huruf<<" ";
    }
}