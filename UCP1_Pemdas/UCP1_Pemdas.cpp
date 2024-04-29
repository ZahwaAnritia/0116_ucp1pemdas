#include <iostream>
using namespace std;

int main()
{

	float nMat, nBing, rerata;
	string status;
	string nama;

	cout << "Masukkan nama :";
	cin >> nama;
	cout << "Masukkan nilai matematika : ";
	cin >> nMat;
	cout << "Masukkan nilai Bahasa Inggris : ";
	cin >> nBing;

	rerata = (nBing + nMat) / 2;

	if (rerata >= 70) {
		status = "Diterima";
	}
	else if (nMat>= 80) {
		status = "Diterima";
	}
	else
	{
		status = "Ditolak";
	}
	cout << "Nama pendaftar" << nama << endl;
	cout << "Statusnya adalah" << status << endl;

	char pilihan;
	do {

		cout << "Apakah anda ingin mengulangi lagi? (y/n) ";
		cin >> pilihan;

	} while (pilihan == 'y' || pilihan == 'Y');

	return 0;

	


}


// contoh deklarasi variable yaitu: int, float, char

//contoh conditional steatment yaitu menentukan suatu kondisi dengan  if else

// contoh implementasi dari struct yaitu 
// 
//contoh implementasi dari prosedur atau fungsi yaitu untuk menyelesaikan masalah yang berisi langkah-langkah

//implementasi dari looping yaitu 