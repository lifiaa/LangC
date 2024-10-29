#include <stdio.h>
#include <string.h>

int main(){
    char input1[4];
    char input2[4];

    printf("Masukkan 3 karakter pertama: ");
    scanf("%3s", input1);

    printf("Masukkan 3 karakter kedua: ");
    scanf("%3s", input2);

    if(strcmp(input1, input2) == 0){
        printf("Karakter dikenali.\n");
    }else{
        printf("Karakter tidak dikenali.\n");
    }
    return 0;
}