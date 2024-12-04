#include <stdio.h>

int main(){
    float tinggiAir;

    printf("Program penentu tinggi air\n");
    printf("Masukkan tinggi air: ");
    scanf("%.2f", &tinggiAir);
    if(tinggiAir <= 500.0){
        printf("STATUS AMAN");
    } else if(tinggiAir >= 500.1 && tinggiAir <= 600.0){
        printf("STATUS WASPADA");
    } else if(tinggiAir >= 600.1 && tinggiAir <= 650.0){
        printf("STATUS SIAGA 2");
    } else if(tinggiAir >= 650.1){
        printf("STATUS SIAGA 1");
    }
}