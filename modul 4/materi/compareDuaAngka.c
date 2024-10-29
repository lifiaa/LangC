#include <stdio.h>
#include <stdint.h>

int carimax (int a, int b);

void main(){
    int a = 3, b = 8;
    printf("nilai terbesar %d", carimax (a,b));
}

int carimax(int a, int b){
    if (a>b)
        return a;
    else
        return b;
}