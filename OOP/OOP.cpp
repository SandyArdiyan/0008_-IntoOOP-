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


class Matakuliuah{
private:
	string kodemk;
	string namamk;
	int sks;
public :