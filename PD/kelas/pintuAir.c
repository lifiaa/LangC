#include <stdio.h>

float tinggiAir;

int main(){
    printf("Masukkan tinggi air: ");
    scanf("%f", &tinggiAir);
    if (tinggiAir <= 500.0){
        printf("AMAN");
    } else if(tinggiAir == 500.1 && tinggiAir <=600.0){
        printf("WASPADA");
    } else if(tinggiAir == 600.1 && tinggiAir <=650.0){
        printf("SIAGA 2");
    } else if(tinggiAir > 650.0){
        printf("SIAGA 1");
    }
}