#include <stdio.h>

int main(){
    int a,i,u,e,o;
    char huruf;

    printf("Masukkan huruf vokal: ");
    scanf("%c", huruf);

    if(huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o'){
        printf("Ini adalah huruf vokal");
    }else{
        printf("Bukan huruf vokal");
    }
    return 0;
}