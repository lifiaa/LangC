#include <stdio.h>
#include <string.h>
#include <stdint.h>

int main(){

    int makananPertama, makananKedua, makananKetiga;
    int totalKalori;

    printf("\n\n============ CODELAB 1 EXECUTION STARTED ===========\n\n");

    printf("Program ini akan menghitung total kalori harian yang anda konsumsi.\n\n");

    printf("Kalori makanan pertama: ");
    scanf("%d", &makananPertama);
    printf("Kalori makanan kedua: ");
    scanf("%d", &makananKedua);
    printf("Kalori makanan ketiga: ");
    scanf("%d", &makananKetiga);

    totalKalori = makananPertama + makananKedua + makananKetiga;

    printf("\n\nTotal kalori anda: %d\n\n", totalKalori);

    if (totalKalori < 2000) {
    printf(">> Anda kekurangan kalori. <<");
    } else if (totalKalori >= 2000 && totalKalori < 2500) {
    printf(">> Kebutuhan kalori sudah terpenuhi. <<");
    } else {  // otomatis mencakup kasus >= 2500
    printf(">> Anda kelebihan kalori. <<");
    }

    
    printf("\n\n============ CODE EXECUTION ENDED ===========\n\n");

    return 0;
}