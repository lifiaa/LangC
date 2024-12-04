#include <stdio.h>

void hitungPersamaanGaris(float x1, float y1, float x2, float y2, float *m, float *c){
    *m = (y2 - y1) / (x2 - x1);
    *c = y1 - (*m * x1);
}

int main(){
    float x1, y1, x2, y2, m, c;

    printf("MAsukkan nilai x1 y1: ");
    scanf("%f %f", &x1, &y1);
    printf("MAsukkan nilai x2 y2: ");
    scanf("%f %f", &x2, &y2);

    hitungPersamaanGaris(x1, y1, x2, y2, &m, &c);

    printf("persamaan garis yang melalui titik (%.2f, %.2f) dan (%.2f, %.2f) adalah y = %.2fx + %.2f\n", x1, y1, x2, y2, m, c);

    return 0;
}