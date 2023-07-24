#include <iostream>
#include <conio.h>

using namespace std;
void clrscr()
{
    printf("\x1b[2J");
}
int main(){
    int i=1;
    clrscr();
    while (i<=5)
    {
        cout<<"Putaran ke-"<<i<<endl;
        i++;
    }
}