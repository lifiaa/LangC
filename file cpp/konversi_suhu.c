#include <stdio.h>

int main()
{
    printf("=============================\n");
    printf("program Bahasa C Konversi Suhu\n");
    printf("=============================\n");
    printf("Nama  : Alifia Nadia Ruksana\n");
    printf("NIM   : 202410370110334\n");
    printf("Prodi : Informatika\n");
    printf("=============================\n");

    float celc, fahr, kelv, ream;

    printf("Input derajat: ");
    scanf("%f", &celc);
    printf("\n");

    fahr = (9.0/5.0*celc)+ 32;
    kelv = celc + 273.15;
    ream = celc * (4.0/5.0);

    printf("%.2f derajat celcius = %.2f derajat Fahrenheit\n",celc,fahr);
    printf("%.2f derajat celcius = %.2f derajat Kelvin\n",celc,kelv);
    printf("%.2f derajat celcius = %.2f derajat Reamur\n",celc,ream);
}