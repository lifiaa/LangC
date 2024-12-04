#include <stdio.h>

int isPositive(int n);

int main(){
    int n;
    printf("Masukkan angka: ");
    scanf("%d", &n);
    isPositive(n);
    return 0;
}

int isPositive(int n){
    if(n > 0){
        printf("true / 1");
        return 1;
    } else{
        printf("false / 0");
        return 0;
    }
}