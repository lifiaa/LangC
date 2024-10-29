#include <stdio.h>

enum tiket {economy, business, firstclass};

int main(){
    enum tiket kelas;
    int pilihan;

    printf("\n\n============ CODELAB 2 EXECUTION STARTED ===========\n\n");

    printf("Pilih Kelas Tiket: \n");
    printf("1. Economy\n");
    printf("2. Business\n");
    printf("3. First Class");

    while(1){
        printf("\n\nMasukkan pilihan anda: ");
        scanf("%d", &pilihan);
// fiaa
        kelas = pilihan - 1;

        switch (kelas){
            case economy:
                printf("Harga tiket kelas Economy adalah $250");
                break;
            case business:
                printf("Harga tiket kelas Business adalah $500");
                break;
            case firstclass:
                printf("Harga tiket kelas First Class adalah $750");
                break;
            default:
                printf("Pilihan tidak valid. Silakan input ulang!");
                continue; //repeat 
        }
        break; //end loop after input true
        }        
    printf("\n\n============ CODELAB 2 EXECUTION END ===========\n\n");
    return 0;
}
