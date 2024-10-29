#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char buah[10][10];
    int input;

    printf("\n\n=== ACTIVITY 1 EXCUTION STARTED ===\n\n");

    printf("Masukkan input buah (maksimal 10): ");
    scanf("%d", &input);

    for(int i = 0; i < input; i++){
        printf("Masukkan nama buah ke-%d: ", i+1);
        scanf("%s", &buah[i]);
    }

    printf("\nNama buah dalam urutan yang diinputkan: \n");
    for(int i = 0; i < input; i++){
        printf("> %s\n", buah[i]);
    }

    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < input; j++){
            if(strcmp(buah[i], buah[j]) > 0){
                char temp[input];
                strcpy(temp, buah[i]);
                strcpy(buah[i], buah[j]);
                strcpy(buah[j], temp);
            }
        }
    }

    printf("\nNama buah dalam urutan abjad: \n");
    for(int i=0; i<input;i++){
        printf("> %s\n", buah[i]);
    }

    printf("\n=== CODE EXCUTION SUCCESS ===\n\n");
    return 0;
}
