//Program mencari nilai akhir 
#include <iostream>
#include <string.h>
using namespace std;

//array mahasiswa
struct student {
    string nama, nim, indeks;
    double tugas, kuis, uts, uas, hasil;
};
//fungsi menghitung total nilai akhir
    int nilaiakhir(int i, student siswa[]) { 
    return (siswa[i].tugas * 0.1) + (siswa[i].kuis * 0.2) + (siswa[i].uts * 0.3) + (siswa[i].uas * 0.4);
    }
int main(){
    int jumlah_siswa;
    student siswa[jumlah_siswa];
    int i;
    int hasil;
    cout << "--------------------------------------------------------------------" << endl;
    cout << "\t\t PROGRAM MENGHITUNG NILAI AKHIR \t\t" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << endl;

    //mengulang data siswa yang akan dihitung
    for(int i=0;i<hasil;i++) {
    // for (i = 1; i <= 1; i++) {
        cout << "=====================================" << endl;
        cout << "\tDATA SISWA KE\t " << i+1 << endl;
        cout << "=====================================" << endl;

        // cout << "Masukkan berapa jumlah siswa: " << endl;
        // cin >> jumlah_siswa;

        cout << "Masukkan NAMA siswa ke-" << i+1 << endl;
        cin >> siswa[i].nama;

        cout << "Masukkan NIM dari " << siswa[i].nama << ": ";
        cin >> siswa[i].nim;
        cout << endl;

        cout << "Masukkan NILAI TUGAS dari " << siswa[i].nama << ": ";
        cin >> siswa[i].tugas;
        cout << endl;

        cout << "Masukkan NILAI KUIS dari " << siswa[i].nama << ": ";
        cin >> siswa[i].kuis;
        cout << endl;

        cout << "Masukkan NILAI UTS dari " << siswa[i].nama << ": ";
        cin >> siswa[i].uts;
        cout << endl;

        cout << "Masukkan NILAI UAS dari " << siswa[i].nama << ": ";
        cin >> siswa[i].uas;
        cout << endl;

        cout << "-------------------------------------------------------------------------------" << endl;
        cout << "NAMA" << "\t" << "NIM" << "\t" << "TUGAS" << "\t" << "KUIS" << "\t" << "UTS" << "\t" << "UAS" << "\t" << "NILAI AKHIR" << "\t" << endl;
        cout << "-------------------------------------------------------------------------------" << endl;
        
        // nilaiakhir(hasil, i);
        siswa[i].hasil = nilaiakhir(i, siswa);
        // hasil = (siswa[i].tugas * 0.2) + (siswa[i].kuis * 0.1) + (siswa[i].uts * 0.3) + (siswa[i].uas * 0.4);

        cout << siswa[i].nama << "\t" << siswa[i].nim << "\t" << siswa[i].tugas << "\t" << siswa[i].kuis << "\t" << siswa[i].uts << "\t" << siswa[i].uas << "\t";
        printf("%.2f ", siswa[i].hasil);

        if(siswa[i].hasil >= 80){
            cout << " (A) " << endl;
        } else if(siswa[i].hasil >= 70){
            cout << " (B) " << endl;
        } else if(siswa[i].hasil >= 55){
            cout << " (C) " << endl;
        } else if(siswa[i].hasil >= 40){
            cout << " (D) " << endl;
        } else {
            cout << " (E) " << endl;
        }
        
        cout << endl;
        i = i + 1;
    } 
}