#include <stdio.h>

void pilihFilmdanTiket(int *film, int *tiket);

int main(){

    return 0;
}

void pilihFilmdanTiket(int *film, int *tiket){
    printf("=== SELAMAT DATANG DI BIOSKOP ===\n");
    printf("1. Film Pilihan:\n");
    printf("   1. Avengers\n");
    printf("   2. Spiderman\n");
    printf("   3. Batman\n");
    printf("   4. Superman\n");
    printf("   5. Ironman\n");
    printf("\nMasukkan pilihan film (1-5): ");
    scanf("%d", film);
}