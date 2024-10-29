#include <stdio.h>
#include <stdint.h>

int main()
{
    int a, b;
    printf("\nMasukkan angka pertama: ");
    scanf("%d", &a);
    printf("Masukkan angka kedua: ");
    scanf("%d", &b);

    int sum = a + b;
    printf("Penjumlahan: %d\n", sum);

    int difference = a - b;
    printf("Pengurangan: %d\n", difference);

    int times = a * b;
    printf("Perkalian: %d\n", times);

    if (b != 0) 
    {
        float division = a / b;
        printf("Pembagian: %2f\n\n", division);
    }
    else
    {
        printf("Tidak dapat melakukan pembagian dengan nol.\n\n");
    }
    return 0;
}