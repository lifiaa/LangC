#include <stdio.h>

float luasLingkaran(float radius);


int main(){
    luasLingkaran(10);
    printf("Luas lingkaran adalah %.2f", luasLingkaran(10));
    return 0;
}

float luasLingkaran(float radius){
    float hitungLuas = 3.14 * radius * radius;
    return hitungLuas;
}