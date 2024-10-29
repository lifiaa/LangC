#include <stdio.h>

int main(){
    char namaDepan[30];

    printf("Ketikkan nama depan kamu: ");
    scanf("%s", &namaDepan);
    printf("Hai %s", namaDepan);
    return 0;
}