#include <iostream>
using namespace std;

class Segitiga {
private:
    int alas;
    int tinggi;

    float luas(int a, int t) {
        return 0.5 * a * t;
    }
    
    public:
    void inputData() {
        cout << "Masukkan alas: ";
        cin >> alas;
        cout << "Masukkan tinggi: ";
        cin >> tinggi;
    }

    void outputData() {
        cout << "Alas   : " << alas << endl;
        cout << "Tinggi : " << tinggi << endl;

        if (alas % 2 != 0) {
            cout << "Perhitungan dibatalkan karena alas adalah bilangan ganjil." << endl;
        } else {
            float hasilLuas = luas(alas, tinggi);
            cout << "Luas segitiga = " << hasilLuas << endl;
        }
    }

};
