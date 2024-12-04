#include <stdio.h>

int main(){
    int toko[2][3] ={{5,8,6},{3,7,9}};
    int total[3];

    for(int i = 0; i < 3; i++){
        total[i] = toko[0][i] + toko[1][i];
    }
    
    printf("\n=== CODELAB 1 EXCUTION STARTED ===\n\n");
    printf("\n\nTotal penjualan untuk setiap produk: \n\n");
    printf("Produk A: %d\n", total[0]);
    printf("Produk B: %d\n", total[1]);
    printf("Produk C: %d\n", total[2]);
    printf("=== CODE EXCUTION SUCCESS ===\n\n");
    return 0;
}