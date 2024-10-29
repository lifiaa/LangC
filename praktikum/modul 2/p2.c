#include <stdio.h>

int main(){
    int x = 5;

    x += 3;
    printf("Nilai x setelah penambahan: %d\n", x);

    x -= 2;
    printf("Nilai x setelah pengurangan: %d\n", x);

    x *= 4;
    printf("Nilai x setelah perkalian: %d\n", x);

    x /= 2;
    printf("Nilai x setelah pembagian: %d\n", x);

    x %= 3;
    printf("Nilai x setelah modulo: %d\n", x);

    return 0;
}