#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

#include <conio.h>
using namespace std;

struct Disk{ //struktur disk
    string  nama;
    float size, speed;
};
Disk disk[4]; //array sturct disk 4 buah.
string ukuran(float size)
{
    float ukuran = size/1024;
    if(ukuran < 1)
    {
        int z = (int) size;
        return to_string(z)+"GB";

    }else{
        stringstream stream;
        stream << fixed << setprecision(0) << ukuran;
        string s = stream.str();
        return s+"TB";
    }
}
string trate(float speed)
{
    float trate = speed/1024;
    if(trate < 1)
    {
        int z = (int) speed;
        return to_string(z)+"MB/sec";
    }else{
        stringstream stream;
        stream << fixed << setprecision(0) << trate;
        string s = stream.str();
        return s+"GB/sec";
    }
}
int main()
{
    string teks;
    cout<<"Program Media Penyimpanan"<<endl<<endl;
    int max = 4;
     for(int i=0;i<max;i++)
    {
        cout<<"Masukkan nama : ";
        getline(cin,disk[i].nama);
        cout<<"Masukkan size (GB, 1TB = 1024GB): ";
        cin>>disk[i].size;
        cout<<"Masukkan speed (MB/s) : ";
        cin>>disk[i].speed;
        fflush(stdin);

    } 


    //tampilkan semua data
    cout<<"|==========================================|"<<endl;
    cout<<"|Penyimpanan     Ukuran     Kecepatan      |"<<endl;
    cout<<"|==========================================|"<<endl;
    for(int i=0;i<max;i++){
        cout<<"|"<<setiosflags(ios::left)<<setw(16)<<disk[i].nama;
        cout<<setiosflags(ios::left)<<setw(11)<<ukuran(disk[i].size)<<teks;
        cout<<setiosflags(ios::left)<<setw(15)<<trate(disk[i].speed)<<"|"<<endl;
            }
    cout<<"|==========================================|"<<endl;
    getch();

}