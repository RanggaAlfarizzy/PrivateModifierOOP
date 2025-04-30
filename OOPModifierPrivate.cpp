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

}
