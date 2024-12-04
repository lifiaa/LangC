#include <stdio.h>

int main(){
    int jumlah, koordinat, i, x = 0, y = 0;
    
    printf("Masukkan jumlah titik koordinat: ");
    scanf("%d", &jumlah);

    printf("Masukkan nilai koordinat: ");
    scanf("%d", &koordinat);

    printf("Titik koordinat yang dihasilkan:\n");

    for(i = 1; i <= jumlah; i++){
        x += koordinat;
        y += koordinat * 2;
        printf("Titik ke-%d: (%d, %d)\n", i, x, y);
    }
    return 0;
}