#include<stdio.h>

int main(){
    int var;
    printf("Enter an integer: ");
    scanf("%d", &var);

    switch (var){
        case 1:
        printf("Case 1 is Matched.");
        break;

        case 2:
        printf("Case 2 is Matched.");
        break;

        case 3:
        printf("Case 3 is Matched.");
        break;

        case 4:
        printf("Case 4 is Matched.");
        break;

        default:
        printf("Default case is Matched.");
        break;
    }
    return 0;
}
