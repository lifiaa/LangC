#include <stdio.h>
#include <stdbool.h>

int main(){
    bool isTrue = true;

    printf("Program untuk menyalakan dan mematikan lampu\n");
    printf("Masukkan angka 1/0: ");
    scanf("%d", &isTrue);

    if(isTrue == 1){
        printf("Lampu menyala");
    }else{
        printf("Lampu mati");
    }
    return 0;
}