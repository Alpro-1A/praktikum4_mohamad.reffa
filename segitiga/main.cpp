#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "masukkan nilai n: ";
    cin >> n;

    cout << "segitiga sama kaki\n";
    for (int i=1; i<=n; i++){
        for (int j=n; j>i; j--){
            cout << " ";
        }
        for (int k=1; k<= (2*i - 1); k++){
            cout << "*";
        }
            cout << endl;
    }

    return 0;
}

