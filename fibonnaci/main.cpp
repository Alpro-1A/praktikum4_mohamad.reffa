#include<iostream>
using namespace std;

int main() {
    int n, fn_1 = 0, fn_2= 1, lanjut;

    cout << "masukkan nilai fn: ";
    cin >> n;

    cout << "Deret Fibonacci fn = " << n << " elemen: ";

    for (int i = 0; i < n; ++i) {
        if (i <= 1) {
            lanjut = i;
        } else {
            lanjut = fn_1 + fn_2;
            fn_1 = fn_2;
            fn_2 = lanjut;
        }
        cout << lanjut << " ";
    }

    return 0;
}
