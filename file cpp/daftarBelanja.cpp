#include <iostream> // input output standar
#include <string> // untuk objek string
#include <vector> // untuk std::vector, container dinamis penampung elemen dgn value tidak tetap (dapat berubah-ubah)
using namespace std;

/* void function = tidak bisa mengembalikan nilai (fungsi yg tidak mengambil parameter apapun)

std::vector<std::string> membuat sebuah vektor (array dinamis) yang menyimpan elemen-elemen dengan tipe data std::string

*/

void tampilkanDaftar(const vector<string> & daftar)
{
    cout << "Daftar belanja: " << endl;
    for (size_t i = 0; i < daftar.size(); ++i)
    {
        cout << i + 1 << ". " << daftar[i] << endl;
    }
}

int main()
{
    vector<string> daftarBelanja;
    int pilihan;

    // loop do-while
    do
    {
        cout << "1. Tambah item" << endl;
        cout << "2. Lihat daftar" << endl;
        cout << "3. Hapus item" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        if (pilihan == 1)
        {
            cout << "Masukkan nama item: ";
            string item;
            cin.ignore(); // membersihkan buffer input
            getline(cin, item);
            daftarBelanja.push_back(item);
        }
        else if (pilihan == 2)
        {
            tampilkanDaftar(daftarBelanja);
        }
        else if (pilihan == 3)
        {
            tampilkanDaftar(daftarBelanja);
            cout << "Masukkan nomor item yang akan di hapus: ";
            size_t nomor;
            cin >> nomor;
            if (nomor > 0 && nomor <= daftarBelanja.size())
            {
                daftarBelanja.erase(daftarBelanja.begin() + nomor - 1);
            }
            else
            {
                cout << "Nomor item tidak valid" << endl;
            }
        }
    } while (pilihan != 4);
    return 0;
}