#include <stdio.h>

void tulisJam(int j, int m, int d);

int main(){
    int j,m,d;
    tulisJam(j,m,d);
    return 0;
}

void tulisJam(int j, int m, int d){
    printf("Jam saat ini adalah %d:%d:%d");
}