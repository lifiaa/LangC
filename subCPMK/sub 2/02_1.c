#include <stdio.h>

int main(){
    int jumlah;
    char jawaban = 'B';
    double suhuAwal = 25.0;
    float radius = 0.0;
    double harga = 10000.00;
    int nilaiHexa = 0x1A;
    int nilaiOctal = 022;

    printf("Jumlah: %d\n", jumlah);
    printf("Jawaban: %c\n", jawaban);
    printf("Suhu Awal: %f\n", suhuAwal);
    printf("Radius: %f\n", radius);
    printf("Harga: %f\n", harga);
    printf("Nilai Hexa: 0x%x (decimal: %d)\n", nilaiHexa);
    printf("Nilai Octal: 0%o (decimal: %d)\n", nilaiOctal);

    return 0;
}