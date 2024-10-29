#include <stdio.h>

int main() {
    float jari_jari, luas, keliling;
    float pi = 3.14159;  

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jari_jari); // meminta input jari-jari dari pengguna

    luas = pi * jari_jari * jari_jari; //rumus 
   
    keliling = 2 * pi * jari_jari;

    // menampilkan hasil luas dan keliling
    printf("\nLuas lingkaran: %.2f\n", luas);
    printf("Keliling lingkaran: %.2f\n", keliling);

return 0;
}