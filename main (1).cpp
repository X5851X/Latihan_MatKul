/*Penjumlahan 2 Buah Matriks 2x2*/
#include <iostream>
#include <conio.h> //untuk mengaktifkan perintah gotoxy(x,y) dan clrscr()
#define Nmaks 10
using namespace std;
typedef int matriks [Nmaks][Nmaks];
void clrscr(){
    printf("\e[1;1H\e[2J");
}
void gotoxy(int x,int y) {
    printf("%c[%d;%df", 0x1b, y, x);
}
int main() {
    int n, i, j;
    matriks A, B, C;
    cout<<"Program Penjumlahan Matriks A 2x2 dan B 2x2"<<endl;
    cout<<endl;
    n=2;
    cout<<"Masukkan Nilai-Nilai Matriks A"<<endl;
    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            cout<<"A["<<i<<","<<j<<"] = ";cin>>A[i][j];
        }
    }
    clrscr();
    cout<<"Masukkan Nilai-Nilai Matriks B"<<endl;
    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            cout<<"B["<<i<<","<<j<<"] = ";cin>>B[i][j];
        }
    }
    clrscr();
    //Proses Penjumlahan Matriks C = A+B
    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            C[i][j] = A[i][j] + B[i][j]; 
        }
    }
    clrscr();
    cout<<"Nilai-Nilai Matriks A, B, dan C"<<endl;
    //Proses Output Matriks A
    gotoxy(1,5);
    cout<<"A = ";
    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            gotoxy(2+4*j,2+2*i);
            cout<<A[i][j];
        }
    }
    cout<<endl;
    //Proses Output Matriks B
    gotoxy(1,10);
    cout<<"B = ";
    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            gotoxy(2+4*j,7+2*i);
            cout<<B[i][j];
        }
    cout<<endl;
    }
     //Proses Output Matriks C
    gotoxy(1,15);
    cout<<"C = ";
    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            gotoxy(2+4*j,12+2*i);
            cout<<A[i][j];
            cout<<endl;
        }
    cout<<endl;
    }
    gotoxy(12,15);
    cout<<" + ";
    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            gotoxy(13+4*j,12+2*i);
            cout<<B[i][j];
        }
    cout<<endl;
    }
    gotoxy(23,15);
    cout<<" = ";
    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            gotoxy(24+4*j,12+2*i);
            cout<<C[i][j];
        }
    cout<<endl;
    }
    getch();
}