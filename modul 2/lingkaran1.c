#include <stdio.h>
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
    while(1){
        printf("Masukkan jari-jari lingkaran: ");
        if(scanf("%f", &r) >= 1 && r > 0){
        float hasilLuas = luasLingkaran(r);
        float hasilKeliling = kelilingLingkaran(r);

        // Menampilkan hasil
        printf("Luas lingkaran: %.2f\n", hasilLuas);
        printf("Keliling lingkaran: %.2f\n", hasilKeliling);
        break;
        } else {
            printf("Input tidak valid. Masukkan angka positif!\n\n");
        }
    }

    printf("\n============ CODE EXECUTION ENDED ===========\n\n");
    return 0;
}
