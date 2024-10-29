#include <stdio.h>

int main(){
    float i, harga, hargaDiskon, total;

    for(i = 0; i < 3; i++){
        printf("Masukkan harga barang: Rp.");
        scanf("%f", &harga);
        total += harga;
    }
    if(total > 100000){
        hargaDiskon = total * 0.90;
        printf("Total harga yang harus anda bayarkan setelah diskon adalah: Rp.%.2f", hargaDiskon);
    }else{
        printf("Total harga yang harus anda bayar adalah: Rp.%.2f", total);
    }
    return 0;
}