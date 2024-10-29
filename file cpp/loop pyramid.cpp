#include <iostream>
using namespace std;

//tidak boleh ada dua(2) int main() dalam 1 file c++
int main() {
    int tinggiNormal;
    int tinggiTerbalik;

    cout << "Masukkan tinggi piramida normal: "; //input user
    cin >> tinggiNormal; // masukkan nilai variable

    cout << "Piramida Normal:" << endl;
    for (int i = 1; i <= tinggiNormal; ++i) { //loop perbaris
        // Mencetak spasi
        for (int j = 1; j <= tinggiNormal - i; ++j) {
            cout << " ";
        }

        // Mencetak bintang dari 1 sampai i
        for (int k = 1; k <= (2 * i - 1); ++k) {
            cout << "*";
        }

        // Pindah ke baris berikutnya
        cout << endl;
    }

    cout << "Masukkan tinggi piramida terbalik: "; //input user
    cin >> tinggiTerbalik; //masukkan nilai variable

    // Loop untuk setiap baris
    cout << "Piramida Terbalik:" << endl;
    for (int i = tinggiTerbalik; i > 0; --i) { //loop perbaris
        // Loop untuk mencetak spasi
        for (int j = 0; j < (tinggiTerbalik - i); ++j) {
            cout << " ";
        }
        // Loop untuk mencetak bintang dari i sampai 1
        for (int k = 0; k < (2 * i - 1); ++k) {
            cout << "*";
        }
        // Pindah ke baris berikutnya
        cout << endl;
    }

    return 0;
}
