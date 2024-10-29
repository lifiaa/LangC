#include <stdio.h>
#include <stdint.h>

int main(){
    int y,m,d;

    printf("Masukkan tanggal: ");
    scanf("%d", &d);
    printf("Masukkan bulan: ");
    scanf("%d", &m);
    printf("Masukkan tahun: ");
    scanf("%d", &y);

    printf("Saat ini tanggal: %d-%d-%d", d,m,y);
    return 0;
}