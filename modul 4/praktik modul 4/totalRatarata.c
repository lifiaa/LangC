#include <stdio.h>

int main(){
    int num;
    int totalInput = 0, total = 0;

    printf("\n=== CODELAB 1 EXCUTION STARTED ===\n\n");

    printf("Masukkan bilangan bulat (masukkan angka negatif untuk berhenti): ");
    scanf("%d", &num);

    while (num >= 0)
    {
        total += num; //tambah angka ke total (total = total + num)
        totalInput++; //tambah jml angka yg di input

        printf("Masukkan bilangan bulat (masukkan angka negatif untuk berhenti): ");
        scanf("%d", &num);
    }

    if(totalInput > 0){
        float avg = (float) total / totalInput;
        printf("\nTotal bilangan: %d\n", total);
        printf("\nRata-rata bilangan: %.2f\n", avg);
    }else{
        printf("\nTidak ada bilangan yang dimasukkan.\n");
    }

    printf("\n=== CODE EXCUTION SUCCESS ===\n");
    return 0;
}