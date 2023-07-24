#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
using namespace std;

struct Hotel
{
  string kamar, kustomer, alamat, pekerjaan, tglcheckin, tglcheckout,
    keterangan;
  int harga;
  Hotel *next;			// Linked List
};
Hotel *head, *tail, *current, *after, *newNode;

bool
isEmpty ()
{
  return head == NULL;
}

void
create (string kamar, string kustomer, string alamat, string pekerjaan,
	string tglcheckin, string tglcheckout, int harga, string keterangan)
{
  newNode = new Hotel ();
  newNode->kamar = kamar;
  newNode->kustomer = kustomer;
  newNode->alamat = alamat;
  newNode->pekerjaan = pekerjaan;
  newNode->tglcheckin = tglcheckin;
  newNode->tglcheckout = tglcheckout;
  newNode->harga = harga;
  newNode->keterangan = keterangan;
  newNode->next = NULL;
  head = newNode;
  tail = newNode;
}

void
push (string kamar, string kustomer, string alamat, string pekerjaan,
      string tglcheckin, string tglcheckout, int harga, string keterangan)
{
  newNode = new Hotel ();
  newNode->kamar = kamar;
  newNode->kustomer = kustomer;
  newNode->alamat = alamat;
  newNode->pekerjaan = pekerjaan;
  newNode->tglcheckin = tglcheckin;
  newNode->tglcheckout = tglcheckout;
  newNode->harga = harga;
  newNode->keterangan = keterangan;
  current = head;
  newNode->next = head;
  head = newNode;
}

int
countHotel ()
{
  int count = 0;
  current = head;
  while (current != NULL)
    {
      count++;
      current = current->next;
    }
  return count;
}

void
displayHotel ()
{
  if (countHotel () < 1)
    {
      cout << endl << "Harap tambah " << 1 -
	countHotel () << " kamar lagi" << endl << endl;
    }
  else
    {
      current = head;
      cout << endl <<
	"|=====================================================================================================|"
	<< endl;
      cout <<
	"|NOMOR  NAMA KUSTOMER  ALAMAT      PERKERJAAN     CHECKIN       CHECKOUT      HARGA    KETERANGAN     |"
	<< endl;
      cout <<
	"|=====================================================================================================|"
	<< endl;

      int LengthData = sizeof (current);
      int max = 5;
      int Increment = 1;
      if (LengthData > max)
	{
	  max = LengthData;
	}
      while (Increment < max)
	{
	  if (current != NULL)
	    {
	      cout << "|" << setiosflags (ios::
					  left) << setw (7) << current->kamar;
	      cout << setiosflags (ios::
				   left) << setw (15) << current->kustomer;
	      cout << setiosflags (ios::left) << setw (13) << current->alamat;
	      cout << setiosflags (ios::
				   left) << setw (15) << current->pekerjaan;

	      cout << setiosflags (ios::
				   left) << setw (14) << current->tglcheckin;
	      cout << setiosflags (ios::
				   left) << setw (14) << current->tglcheckout;
	      cout << setiosflags (ios::left) << setw (9) << current->harga;
	      cout << setiosflags (ios::
				   left) << setw (14) << current->keterangan
		<< "|";
	      current = current->next;

	      cout << endl;
	    }
	  else
	    {
	      cout << "|" << setiosflags (ios::left) << setw (7) << "-";
	      cout << setiosflags (ios::left) << setw (15) << "-";
	      cout << setiosflags (ios::left) << setw (13) << "";
	      cout << setiosflags (ios::left) << setw (15) << "";

	      cout << setiosflags (ios::left) << setw (14) << "";
	      cout << setiosflags (ios::left) << setw (14) << "";
	      cout << setiosflags (ios::left) << setw (9) << "";

	      cout << setiosflags (ios::left) << setw (14) << "" << "|";
	      cout << endl;
	    }
	  Increment += 1;
	}

    }
  cout <<
    "|=====================================================================================================|"
    << endl;
  cout << "\r\n";

}

bool
pop ()
{
  current = head;
  head = head->next;
  delete current;
  if (current)
    {
      return true;
    }
  else
    {
      return false;
    }
}

void
hapusHotel ()
{
  if (!isEmpty ())
    {
      cout << "Apakah anda yakin akan menghapus ? ( Y / N ) : ";
      char c;
      cin >> c;
      if (c == 'Y' || c == 'y')
	{
	  if (pop ())
	    {
	      cout << endl << "Data berhasil dihapus" << endl << endl;
	    }
	  else
	    {
	      cout << endl << "Data gagal dihapus" << endl << endl;
	    }
	}
      else
	{
	  cout << endl << "Hapus dibatalkan" << endl << endl;
	}
    }
  else
    {
      cout << endl << "Tidak ada hotel yang dapat dihapus" << endl << endl;
    }

}

void
tambahHotel ()
{
  cout << "Jumlah hotel yang ingin ditambah : ";
  int n;
  cin >> n;
  fflush (stdin);
  for (int i = 0; i < n; i++)
    {
      cout << "Masukkan Data Hotel ke-" << i + 1 << endl;
      cout << "Nomor Kamar  : ";
      cin.ignore ();
      string kamar;
      getline (cin, kamar);
      fflush (stdin);
      cout << "Kustomer     : ";
      string kustomer;
      getline (cin, kustomer);
      fflush (stdin);
      cout << "Alamat       : ";
      string alamat;
      getline (cin, alamat);
      fflush (stdin);
      cout << "Perkerjaan   : ";
      string perkerjaan;
      getline (cin, perkerjaan);
      fflush (stdin);
      cout << "Checkin      : ";
      string checkin;
      getline (cin, checkin);
      fflush (stdin);
      cout << "Checkout     : ";
      string checkout;
      getline (cin, checkout);
      fflush (stdin);
      cout << "Harga        Rp. ";
      int harga;
      cin >> harga;
      cout << "Keterangan   : ";
      string keterangan;
      cin.ignore ();
      getline (cin, keterangan);
      fflush (stdin);
      push (kamar, kustomer, alamat, perkerjaan, checkin, checkout, harga,
	    keterangan);
      cout << "TAMBAH SUKSES !!" << endl;
      fflush (stdin);
    }

}

void
displayHotelBy()
{
    cout<<"Cari Kamar :";
    string dataKamar;
    cin.ignore();
    getline(cin,dataKamar);
    
  if (countHotel () < 1)
    {
      cout << endl <<"Kamar tidak ada "<<"Harap tambah " << 1 -
	countHotel () << " kamar lagi" << endl << endl;
    }
  else
    {
      current = head;
      cout << endl <<
	"|=====================================================================================================|"
	<< endl;
      cout <<
	"|NOMOR  NAMA KUSTOMER  ALAMAT      PERKERJAAN     CHECKIN       CHECKOUT      HARGA    KETERANGAN     |"
	<< endl;
      cout <<
	"|=====================================================================================================|"
	<< endl;

      int LengthData = sizeof (current);
      int max = 5;
      int Increment = 1;
      if (LengthData > max)
	{
	  max = LengthData;
	}
     while (Increment < max)
	{
	  if (current != NULL)
	    {
	    if(current->kamar==dataKamar)
	    {
	    
	      cout << "|" << setiosflags (ios::
					  left) << setw (7) << current->kamar;
	      cout << setiosflags (ios::
				   left) << setw (15) << current->kustomer;
	      cout << setiosflags (ios::left) << setw (13) << current->alamat;
	      cout << setiosflags (ios::
				   left) << setw (15) << current->pekerjaan;

	      cout << setiosflags (ios::
				   left) << setw (14) << current->tglcheckin;
	      cout << setiosflags (ios::
				   left) << setw (14) << current->tglcheckout;
	      cout << setiosflags (ios::left) << setw (9) << current->harga;
	      cout << setiosflags (ios::
				   left) << setw (14) << current->keterangan
		<< "|";
	      
            current= NULL;
	      cout << endl;
	    }else{
	    current = current->next;    
	    }
	    
	    }
	  Increment += 1;
	}
    }

  cout <<
    "|=====================================================================================================|"
    << endl;
  cout << "\r\n";

}

int
main ()
{
    Hotel emp_array[4];
  string judul, penulis, genre, penerbit, bahasa;
  int tahun;
  cout << "\t\tProgram Penyimpanan Hotel" << endl << endl;
displayHotel:{
    if (!isEmpty ())
      {
	displayHotel ();
      }
    else
      {
	cout << "\t\t\tKelompok 1\t\t\t" << endl << endl;
      }
  }
start:{
    cout <<"\t|==========================================|\t"<<endl;
    cout << "\t|Pilihan opsi :                            |\t" << endl;
    cout << "\t|1. Tambah Hotel                           |\t" << endl;
    cout << "\t|2. Hapus Hotel Terbaru                    |\t" << endl;
    cout << "\t|3. Tampilkan Semua Hotel                  |\t" << endl;
    cout << "\t|4. Cari Data Kamar                        |\t" << endl;
    cout << "\t|5. Exit                                   |\t" << endl;
    cout <<"\t|==========================================|\t"<<endl;
    cout << "\tPilihan : ";
    int i;
    cin >> i;
    switch (i)
      {
      case 1:
	tambahHotel ();
	break;
      case 2:
	hapusHotel ();
	break;
      case 3:
	displayHotel ();
	cout << "Masukkan 1 Untuk lanjut : ";
	int j;
	cin >> j;
	if (j != 1)
	  {
	    return 0;
	  }
	break;
      case 4:
	displayHotelBy ();
	cout << "Masukkan 1 Untuk lanjut : ";
	int ja;
	cin >> ja;
	if (ja != 1)
	  {
	    return 0;
	  }
	break;
      case 9:
	return 0;
	break;
      default:
	cout << endl << "Pilihan tidak ada" << endl << endl;
	break;
      }
  }
  getch ();
  goto start;
}