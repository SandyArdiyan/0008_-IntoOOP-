#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
public: // akses modifier
    string nama;
    int umur;
    string jurusan;

    void output() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "Jurusan: " << jurusan << endl;
    }
};

class Matakuliah {
private:
    string kodeMK;
    string namaMK;
    int sks;
public:
    void input() {
        cout << "Kode MK: ";
        cin >> kodeMK;
        cin.ignore(); // Mengabaikan karakter newline setelah input kodeMK
        cout << "Nama MK: ";
        getline(cin, namaMK); // Menggunakan getline untuk input string dengan spasi
        cout << "SKS: ";
        cin >> sks;
    }

    void output() {
        cout << "Kode MK: " << kodeMK << endl;
        cout << "Nama MK: " << namaMK << endl;
        cout << "SKS: " << sks << endl;
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
