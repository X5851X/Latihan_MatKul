#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
using namespace std;

struct Buku{
    string judul,penulis,genre,penerbit,bahasa;
    int tahun;
    Buku *next; // Linked List
};
Buku *head, *tail,*current,*after,*newNode;

bool isEmpty()
{
    return head == NULL;
}

void create(string judul, string penulis, string genre, string penerbit, string bahasa, int tahun) //membuat linked list baru
{
    newNode = new Buku();
    newNode->judul = judul;
    newNode->penulis = penulis;
    newNode->genre = genre;
    newNode->penerbit = penerbit;
    newNode->bahasa = bahasa;
    newNode->tahun = tahun;
    newNode->next = NULL;
    head = newNode;
    tail = newNode;
}

void push(string judul, string penulis, string genre, string penerbit, string bahasa, int tahun) //Memasukkan data baru di awal linked list ( TOP / HEAD ) ( Karena menggunakan metode LIFO )
{
    newNode = new Buku();
    newNode->judul = judul;
    newNode->penulis = penulis;
    newNode->genre = genre;
    newNode->penerbit = penerbit;
    newNode->bahasa = bahasa;
    newNode->tahun = tahun;
    current = head;
    newNode->next = head;
    head = newNode;
}
int countBuku()
{
    int count = 0;
    current = head;
    while(current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}


void displayBuku()
{
    if(countBuku()<1)
    {
        cout<<endl<<"Harap tambah "<<1-countBuku()<<" buku lagi"<<endl<<endl;
    }else{
        current = head;
        cout<<endl<<"|===========================================================================================================|"<<endl;
              cout<<"|JUDUL                    PENULIS                  GENRE          TAHUN TERBIT     PENERBIT       BAHASA    |"<<endl;
              cout<<"|===========================================================================================================|"<<endl;

        while(current != NULL)
        {
            cout <<"|"<<setiosflags(ios::left)<<setw(25)<< current->judul;
            cout <<setiosflags(ios::left)<<setw(25)<< current->penulis;
            cout <<setiosflags(ios::left)<<setw(15)<< current->genre;
            cout <<setiosflags(ios::left)<<setw(17)<< current->tahun;

            cout <<setiosflags(ios::left)<<setw(15)<< current->penerbit;
            cout <<setiosflags(ios::left)<<setw(10)<< current->bahasa<<"|";
            current = current->next;
            cout<<endl;
        }
        
              cout<<"|===========================================================================================================|"<<endl;
        cout<<"\r\n";
        
    }
}
bool pop() //Menghapus data di awal linked list ( TOP / HEAD ) ( Karena menggunakan metode LIFO )
{
    current = head;
    head = head->next;
    delete current;
    if(current)
    {
        return true;
    }else{
        return false;
    }
}

void hapusBuku()
{
    if(!isEmpty()){
        cout<<"Apakah anda yakin akan menghapus ? ( Y / N ) : ";
        char c;
        cin>>c;
        if(c=='Y'||c=='y')
        {
            if(pop())
            {
                cout<<endl<<"Data berhasil dihapus"<<endl<<endl;
            }else{
                cout<<endl<<"Data gagal dihapus"<<endl<<endl;
            }
        }
        else
        {
            cout<<endl<<"Hapus dibatalkan"<<endl<<endl;
        }
    }else{
        cout<<endl<<"Tidak ada buku yang dapat dihapus"<<endl<<endl;
    }

}
void tambahBuku()
{
    
    cout<<"Jumlah buku yang ingin ditambah : ";
    int n;
    cin>>n;
        fflush(stdin);
     for(int i=0;i<n;i++)
    {
        cout<<"Masukkan Data Buku ke-"<<i+1<<endl;
        cout<<"Judul : ";
        string judul;
        getline(cin, judul);
        fflush(stdin);
        cout<<"Penulis : ";
        string penulis;
        getline(cin, penulis);
        fflush(stdin);
        cout<<"Genre : ";
        string genre;
        getline(cin, genre);
        fflush(stdin);
        cout<<"Penerbit : ";
        string penerbit;
        getline(cin, penerbit);
        fflush(stdin);
        cout<<"Bahasa : ";
        string bahasa;
        getline(cin, bahasa);
        cout<<"Tahun : ";
        int tahun;
        cin>>tahun;
        push(judul,penulis,genre,penerbit,bahasa,tahun);
        cout<<"TAMBAH SUKSES !!"<<endl;
        fflush(stdin);
    }

}

int main()
{
    string judul,penulis,genre,penerbit,bahasa;
    int tahun;
    cout<<"Program Penyimpanan Buku"<<endl<<endl;
    displayBuku:{
        if(!isEmpty())
        {
            displayBuku();
        }
        else
        {
            cout<<"Data Kosong, harap isi data ( min 5 data )"<<endl<<endl;
        }
    }
start:{
    cout<<"Pilihan opsi : "<<endl;
    cout<<"1. Tambah Buku"<<endl;
    cout<<"2. Hapus Buku Terbaru"<<endl;
    cout<<"3. Tampilkan Semua Buku"<<endl;
    cout<<"9. Exit"<<endl;
    cout<<"Pilihan : ";
    int i;
    cin>>i;
    switch(i)
    {
        case 1:
            tambahBuku();
            break;
        case 2:
            hapusBuku();

            break;
        case 3:
            displayBuku();
            //input 1 to continue, otherwise exit
            cout<<"Masukkan 1 Untuk lanjut : ";
            int j;
            cin>>j;
            if(j!=1)
            {
                return 0;
            }
            break;
        case 9:
            return 0;
            break;
        default:
            cout<<endl<<"Pilihan tidak ada"<<endl<<endl;
            break;
    }
}
getch();
goto start;
}

