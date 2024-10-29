#include <iostream>

int main() {
    int tinggi;

    // Meminta input tinggi piramida
    std::cout << "Masukkan tinggi piramida: ";
    std::cin >> tinggi;

    // Looping untuk mencetak piramida normal
    std::cout << "Piramida Normal:" << std::endl;
    for (int i = 1; i <= tinggi; ++i) {
        // Print spasi
        for (int j = 1; j <= tinggi - i; ++j) {
            std::cout << " ";
        }
        // Print bintang
        for (int k = 1; k <= (2 * i - 1); ++k) {
            std::cout << "*";
        }
        // Pindah ke baris berikutnya
        std::cout << std::endl;
    }

   

    return 0;
}
