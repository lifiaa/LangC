#include <stdio.h>
#include <stdint.h>

int carimax (int a, int b);

void main(){
    int x = 3, y = 8;
    printf("nilai terbesar %d", carimax (x,y));
}

int carimax(int a, int b){
    if (a>b)
        return a;
    else
        return b;
}