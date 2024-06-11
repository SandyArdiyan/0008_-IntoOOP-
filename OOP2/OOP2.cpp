#include <iostream>
using namespace std;

class BangunDatar {

private:
    float panjang, lebar;

public:
    float luas;

    void input() { // metode input persegi panjang
        cout << "Masukkan panjangnya = ";
        cin >> panjang;
        cout << "Masukkan lebarnya = ";
        cin >> lebar;
    }

    float hitungLuas() {
        return panjang * lebar;
    }

    void display() {
        cout << "Panjangnya = " << panjang << endl;
        cout << "Lebar = " << lebar << endl;
        cout << "Luasnya = " << hitungLuas() << endl;
    }
};

int main() {
    BangunDatar pp;
    pp.input();
    pp.display();

    return 0;
}
