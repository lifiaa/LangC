#include <stdio.h>

int main(){
    int transaksi, total, pilihan;

    do{
        total = 0;
        printf("\n\n============ ACTIVITY 1 EXECUTION STARTED ===========\n\n");
        printf("=== Pencatatan Transaksi ===\n\n");
        printf("Masukkan transaksi selanjutnya (gunakan 0 untuk menyelesaikan): \n");

        while(1){
            printf("Input transaksi: ");
            scanf("%d", &transaksi);

            if(transaksi == 0){
                break;
            }
            total += transaksi;
        }
        printf("\nTotal transaksi: %d\n", total);
        
        printf("Apakah Anda ingin melanjutkan transaksi? (1=Ya /0=Tidak): ");
        scanf("%d", &pilihan);

    }while(pilihan == 1);

    printf("=== Pencatatan transaksi selesai ===");

    printf("\n\n============ ACTIVITY 1 EXECUTION END ===========\n\n");

    return 0;
    }