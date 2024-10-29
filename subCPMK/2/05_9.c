#include <stdio.h>
#include <string.h>

int main(){
    char input[5];

    printf("Masukkan 4 karakter: ");
    scanf("%4s", input);

    if(strcmp(input, "abcd") == 0){
        printf("Proses berhasil.\n");
    }else{
        printf("Input ulang.\n");
    }
    return 0;
}