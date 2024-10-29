#include <iostream> // header file untuk input dan output

// ARITHMETIC OPERATORS

int main() { // int main() digunakan sebagai titik masuk program
    int a, b;
    printf("Enter the First number\n");
    scanf("%d", &a);
    printf("Enter the Second number\n");
    scanf("%d", &b);

    printf("a / b = %d\n", a/b);
    printf("a %% b=%d", a%b);
    return 0;
}