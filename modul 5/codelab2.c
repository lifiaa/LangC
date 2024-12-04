#include <stdio.h>

int main(){
    int toko[2][3] ={{5,8,6},{3,7,9}};
    int total[3];
    char produk[3][10] = {"A", "B", "C"};

    for(int i = 0; i < 3; i++){
        total[i] = toko[0][i] + toko[1][i];
        printf("Produk %s: %d\n", produk[i], total[i]);
    }

    return 0;
}