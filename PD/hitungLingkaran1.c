#include <stdio.h>
#include <stdbool.h>
#define PHI 3.14159

float luas, keliling, r;
float luasLingkaran(float radius);
float kelilingLingkaran(float radius);
void menu();
float ambilInputRadius();
bool validasiInput(float radius);

int main() {
    int pilihan;
    float radius, hasil;
    char ulang;
    bool isValid = false;

    do {
        menu();
        printf("Pilih opsi (ketik angka): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
        case 1:
            // hitung luas
            do {
                radius = ambilInputRadius();
                isValid = validasiInput(radius);
                if (!isValid) {
                    printf("Radius tidak boleh negatif atau nol. Silakan coba lagi.\n");
                }
            } while (!isValid);
            hasil = luasLingkaran(radius);
            printf("\n============================================================\n");
            printf("Luas lingkaran dengan radius %.2f adalah: %.2f\n", radius, hasil);
            printf("============================================================\n");
            break;

        case 2:
            // hitung keliling
            do {
                radius = ambilInputRadius();
                isValid = validasiInput(radius);
                if (!isValid) {
                    printf("Radius tidak boleh negatif atau nol. Silakan coba lagi.\n");
                }
            } while (!isValid);
            hasil = kelilingLingkaran(radius);
            printf("\n============================================================\n");
            printf("Keliling lingkaran dengan radius %.2f adalah: %.2f\n", radius, hasil);
            printf("============================================================\n");
            break;

        case 3:
            // hitung ulang (luas dan keliling)
            do {
                radius = ambilInputRadius();
                isValid = validasiInput(radius);
                if (!isValid) {
                    printf("Radius tidak boleh negatif atau nol. Silakan coba lagi.\n");
                }
            } while (!isValid);
            luas = luasLingkaran(radius);
            keliling = kelilingLingkaran(radius);
            printf("\n============================================================\n");
            printf("Luas: %.2f \nKeliling: %.2f\n", luas, keliling);
            printf("============================================================\n");
            break;

        case 4:
            // exit
            printf("\n-------------Terima kasih telah menggunakan program ini!-------------\n");
            return 0;

        default:
            printf("\nPilihan tidak valid. Silakan coba lagi.\n");
        }

        // Tanya apakah ingin menghitung ulang
        printf("\nApakah anda ingin menghitung ulang? (y/n): ");
        getchar();  // Bersihkan newline yang tersisa di buffer
        scanf("%c", &ulang);

    } while (ulang == 'y' || ulang == 'Y');

    printf("\n\n-------------Terima kasih telah menggunakan program ini. Sampai jumpa!-------------\n\n");
    return 0;
}

float luasLingkaran(float radius) {
    return PHI * radius * radius;
}

float kelilingLingkaran(float radius) {
    return 2 * PHI * radius;
}

float ambilInputRadius() {
    printf(">> Masukkan nilai radius: ");
    scanf("%f", &r);
    return r;
}

void menu() {
    printf("\n====== Program Penghitung Luas dan Keliling Lingkaran ======\n\n");
    printf("1. Hitung luas lingkaran\n");
    printf("2. Hitung keliling lingkaran\n");
    printf("3. Hitung ulang (luas dan keliling)\n");
    printf("4. Keluar\n\n");
    printf("============================================================\n\n");
}

bool validasiInput(float radius) {
    return (radius > 0);
}
