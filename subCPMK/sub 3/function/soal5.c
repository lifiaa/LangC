#include <stdio.h>

int isEven(int n);

int main(){
    int n;
    printf("Masukkan angka: ");
    scanf("%d", &n);
    isEven(n);
    return 0;
}

int isEven(int n){
    if(n % 2 == 0){
        printf("true");
        return 1;
    } else{
        printf("false");
        return 0;
    }
}