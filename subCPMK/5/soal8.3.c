#include <stdio.h>

int main(){
    int i, harga, hargaDiskon;
    float total;

    for(i = 0; i < 3; i++){
        printf("Masukkan harga barang: ");
        scanf("%d", &harga);
        total += harga;
    }
    if(total > 100000){
        hargaDiskon = total * 0.90;
        printf("Total harga yang harus anda bayarkan setelah diskon adalah: %d", hargaDiskon);
    }else{
        printf("Total harga yang harus anda bayar adalah: %d", total);
    }
    return 0;
}