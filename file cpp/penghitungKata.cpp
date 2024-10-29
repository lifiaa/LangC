#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    const char *judul = "PENGHITUNG KALIMAT\n";
    cout << judul << endl;
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    stringstream stream(kalimat);
    string kata;
    int jumlahKata = 0;
    
    while (stream >> kata) {
        jumlahKata++;
    }

    cout << "Jumlah Kata: " << jumlahKata << endl;

    return 0;

// input tunggal & contoh penggunaan cin
    cout << "INPUT TUNGGAL UMUR\n";
    int umur;
    cout << "Masukkan umur anda: "; // cout sama seperti echo php
    cin >> umur; //cin menerima/memasukkan input nilai ke dalam variable umur
    cout << "Umur anda adalah " << umur << endl;

    return 0; // return 0; menunjukkan apakah program berjalan dgn sukses atau tidak
}

/*
Penjelasan:
Mengimpor Library:

#include <iostream> untuk input/output standar.
#include <string> untuk bekerja dengan objek string.
#include <sstream> untuk menggunakan string stream yang membantu dalam memproses kalimat menjadi kata-kata terpisah.
Meminta Input dari Pengguna:

std::getline(std::cin, kalimat); digunakan untuk membaca seluruh kalimat yang dimasukkan oleh pengguna.
std::cin menerima input dari pengguna melalui konsol
Menghitung Jumlah Kata:

std::istringstream stream(kalimat); membuat string stream dari kalimat.
while (stream >> kata) membaca kata demi kata dari stream.
Setiap kali sebuah kata dibaca, jumlahKata ditambah 1.
Menampilkan Jumlah Kata:

std::cout << "Jumlah kata: " << jumlahKata << std::endl; menampilkan hasil penghitungan kata.
Program ini memecah kalimat menjadi kata-kata dengan memanfaatkan aliran string (std::istringstream) yang secara otomatis memisahkan kata-kata berdasarkan spasi. Ini membuatnya mudah dan efisien untuk menghitung jumlah kata dalam sebuah kalimat.
*/