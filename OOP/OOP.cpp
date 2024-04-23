#include <iostream>
using namespace std;

class Mahasiswa {
public: // akses modifier
	string nama;
	int umur;
	string jurusan;

	void output() {
		cout << "Nama: " << nama << endl;
		cout << "umur: " << umur << endl;
		cout << "Jurusan: " << jurusan << endl;
	}

};


class Matakuliuah {
private;
	string kodemk;
	string namamk;
	int sks;
public:
	void input() {
		cout << "kode MK: ";
		cin >> kodeMK;
		cout << "NamaMK; ";
		cin >> namaMk;
		cout << "SKS: ";
		cin >> sks;
	}

	void output() {
		cout << "Kode MK: " << kodeMK << endl;
		cout << "Nama MK: " << namaMK << endl;
		cout << "SKS: << sks << endl;
	}
};

int main() {
	Mahasiswa mhs;
	Matakuliah mk;

	mhs.nama = "Budi";
	mhs.umur = 20;
	mhs.jurusan = "Teknik Informatika";
	mhs.output();

	mk.input();
	mk.output();

	return 0;
}