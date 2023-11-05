#include <iostream>
using namespace std;

int main() {
    int batas;

    cout << "Masukkan batas: ";
    cin >> batas;

    int jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;

    cout << "Bilangan Ganjil: ";
    for (int i = 1; i <= batas; i += 2) {
        cout << i << " ";
        jumlahGanjil += i;
    }
    cout << "\nJumlah Bilangan Ganjil: " << jumlahGanjil << endl;

    cout << "\nBilangan Genap: ";
    for (int i = 2; i <= batas; i += 2) {
        cout << i << " ";
        jumlahGenap += i;
    }
    cout << "\nJumlah Bilangan Genap: " << jumlahGenap << endl;

    cout << "\nBilangan Prima: ";
    for (int i = 2; i <= batas; ++i) {
        int prima = 1; // variabel i itu prima
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                prima = 0; // Bukan bilangan prima
                break;
            }
        }
        if (prima) {
            cout << i << " ";
            jumlahPrima += i;
        }
    }
    cout << "\nJumlah Bilangan Prima: " << jumlahPrima << endl;

    return 0;
}
