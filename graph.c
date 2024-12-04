#include <stdio.h>
#include <math.h>
// grafik sin
int main(){
    double x, y;

    printf("Koordinat grafik y = 2sin(x): \n");
    for(x = -15.0; x <= 15.0; x += 0.5){
        y = 2 * sin(x);
        printf("x = %.2f, y = %.2f\n", x, y);
    }
    return 0;
}