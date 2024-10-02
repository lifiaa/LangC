#include <stdint.h>
#include <stdio.h>
#include <string.h>
// fiaa
int main()
{
    char nama[50];
    int umur;
    float gajiPokok;

    printf("Masukkkan nama: ");
    fgets(nama, sizeof(nama), stdin); // falcon & devc bisa pakai gets aja
    nama[strcspn(nama, "\n")] = 0;  // Menghilangkan newline dari fgets, biar g buffer overflow

    printf("Masukkkan umur: ");
    scanf("%d", &umur);
    printf("Masukkkan gaji pokok: ");
    scanf("%f", &gajiPokok);

    float tunjangan = gajiPokok * 0.1;
    float totalGaji = gajiPokok + tunjangan;
    printf("Nama: %s\n", nama);
    printf("Umur: %d\n", umur);
    printf("Gaji Pokok: %.2f\n", gajiPokok);
    printf("Tunjangan: %.2f\n", tunjangan);
    printf("Total Gaji: %.2f\n", totalGaji);

    return 0;
}