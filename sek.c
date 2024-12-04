#include <stdio.h>

int main(){
    int koordinat, i, x = 0, y = 0;
    
    printf("Masukkan jumlah titik koordinat: ");
    scanf("%d", &koordinat);

    printf("Titik koordinat yang dihasilkan:\n");

    for(i = 1; i <= koordinat; i++){
        x += 1;
        y += i * 2;
        printf("Titik ke-%d: (%d, %d)\n", i, x, y);
    }
    return 0;
}