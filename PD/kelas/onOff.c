#include <stdio.h>

int on();
int off();
int input;

int main(){
    printf("Masukkan input (0/1): ");
    scanf("%d", &input);
    if(input == 1){
        on();
    } else{
        off();
    }
}

int on(){
    printf("nyala");
}

int off(){
    printf("mati");
}