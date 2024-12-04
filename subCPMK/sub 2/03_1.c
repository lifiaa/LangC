#include <stdio.h>

int main(){
    int a,b,c,d,e,f,g;
    
    a = 2+(3*5);
    b = 10 - 7 +(3%6);
    c = (3%7)/2-1;
    d = (6 * 3) / 6 % 7;
    int x = 2;
    e = 3 * x++ - 4 * 7 ;
    f = 6 << 2;
    g = 12 >> 3;

    printf("Hasil ekspresi a: %d\n", a);
    printf("Hasil ekspresi b: %d\n", b);
    printf("Hasil ekspresi c: %d\n", c);
    printf("Hasil ekspresi d: %d\n", d);
    printf("Hasil ekspresi e: %d\n", e);
    printf("Hasil ekspresi f: %d\n", f);
    printf("Hasil ekspresi g: %d\n", g);
}