#include <iostream>
using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs1, mhs2;

	mhs1.nim = "20220140151";
	mhs1.nama = "Hilal";
	mhs1.alamat = "Jogja";
	mhs1.umur = 19;

	cout << "Masukkan NIM : ";
	cin >> mhs2.nim;
	cout << "Masukkan Nama : ";
	cin >> mhs2.nama;
	cout << "Masukkan Alamat : ";
	cin >> mhs2.alamat;
	cout << "Masukkan Umur : ";
	cin >> mhs2.umur;

	cout << "\nNIM : " << mhs1.nim;
	cout << "\nNama : " << mhs1.nama;
	cout << "\nAlamat : " << mhs1.alamat;
	cout << "\nUmur : " << mhs1.umur;

	cout << "\nNIM : " << mhs2.nim;
	cout << "\nNama : " << mhs2.nama;
	cout << "\nAlamat : " << mhs2.alamat;
	cout << "\nUmur : " << mhs2.umur;

	
}
 