#include <stdio.h>

int main(){
    char a,i,u,e,o, A,I,U,E,O,huruf;

    printf("Masukkan huruf: ");
    scanf("%c", &huruf);

    if(huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o' || huruf == 'A' || huruf == 'I' || huruf == 'U' || huruf == 'E' || huruf == 'O'){
        printf("Huruf '%c' adalah huruf vokal", huruf);
    }else{
        printf("Huruf '%c' bukan huruf vokal", huruf);
    }
    return 0;
}