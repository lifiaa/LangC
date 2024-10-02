#include <stdio.h>
#include <stdint.h>
#define phi 3.14159

float r, luas, keliling;

float luasLingkaran(float radius) {
    return phi * radius * radius;
}

float kelilingLingkaran(float radius) {
    return 2 * phi * radius;
}

int main() {
    printf("\n\n============ CODE ACTICITY 1 EXECUTION STARTED ===========\n\n");

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &r);  // Menggunakan %f untuk membaca nilai float

    float hasilLuas = luasLingkaran(r);
    float hasilKeliling = kelilingLingkaran(r);

    // Menampilkan hasil
    printf("Luas lingkaran: %.2f\n", hasilLuas);
    printf("Keliling lingkaran: %.2f\n", hasilKeliling);

    printf("\n\n============ CODE EXECUTION ENDED ===========\n\n");


    return 0;
}
