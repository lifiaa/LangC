#include <iostream>
#include <string>

using namespace std;

int main() {
    // Deklarasi variabel untuk menyimpan data
    string nama, alamat, jurusan;
    int umur;

    // Meminta input dari pengguna
    cout << "Masukkan Nama: ";
    getline(cin, nama); // Menggunakan getline untuk nama lengkap
    cout << "Masukkan Umur: ";
    cin >> umur;
    cin.ignore(); // Membersihkan newline dari buffer
    cout << "Masukkan Alamat: ";
    getline(cin, alamat);
    cout << "Masukkan Jurusan: ";
    getline(cin, jurusan);

    // Menampilkan data biodata
    cout << "\n=== Biodata ===" << endl;
    cout << "Nama    : " << nama << endl;
    cout << "Umur    : " << umur << " tahun" << endl;
    cout << "Alamat  : " << alamat << endl;
    cout << "Jurusan : " << jurusan << endl;

    return 0;
}