#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa {
	string Nim;
	string Nama;
	AlamatDetail Alamat;
	int Umur;
};

int main() {

	Mahasiswa mhs;

	cout << " Masukkan nim : ";
	cin >> mhs.Nim;
	cout << "Masukkan nama : ";
	cin >> mhs.Nama;
	cout << "Alamat : " << endl;
	cout << "\tNama desa : ";
	cin >> mhs.Alamat.desa;
	cout << "\tNama kota : ";
	cin >> mhs.Alamat.kota;
	cout << "Masukkan umur : ";
	cin >> mhs.Umur;

	cout << "\nNim : " << mhs.Nim;
	cout << "\nNama : " << mhs.Nama;
	cout << "\ndesa : " << mhs.Alamat.desa;
	cout << "\nkota : " << mhs.Alamat.kota;
}