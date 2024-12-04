#include <stdio.h>

int main(){
    int status;

    printf("Input 1 untuk menyalakan lampu \nInput 0 untuk memastikan lampu\n\n");
    printf("Masukkan pilihan: ");
    scanf("%d", &status);

    if(status == 1){
        printf("lampu menyala");
    }else if(status == 0){
        printf("lampu mati");
    }else{
        printf("input tidak valid");
    }
}