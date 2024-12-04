#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
    double x, start, end, step;

    printf("Masukkan nilai awal (dalam radian): ");
    scanf("%lf", &start);
    printf("Masukkan nilai akhir (dalam radian): ");
    scanf("%lf", &end);
    printf("Masukkan langkah iterasi (contoh: 0.1): ");
    scanf("%lf", &step);

    printf("\nTitik koordinat kurva sinus:\n");
    printf("=================================\n");
    printf("   x\t\t   sin(x)\n");
    printf("=================================\n");

    x = start;
    while (x <= end) {
        printf("%6.2f\t\t%6.2f\n", x, sin(x));
        x += step; 
    }

    return 0;
}
