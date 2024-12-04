#include <stdio.h>
#include <math.h>
#define phi 3.14159

int main(){
    double x, y_sin, y_cos, step = 0.1;
    int i;

    printf("Titik koordinat kurva sinus dan kosinus:\n");
    printf("=======================================\n");
    printf("  x\t   sin(x)\t  cos(x)\n");
    printf("=======================================\n");

    for(x = -2 * phi; x <= 2 * phi; x += step){
        y_sin = sin(x);
        y_cos = cos(x);
        printf("%6.2f\t%8.2f\t%8.2f\n", x, y_sin, y_cos);
    }
    
    printf("=======================================\n");
    return 0;
}