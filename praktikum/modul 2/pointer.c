#include <stdio.h>
#include <stdint.h>

int main(){
    int num = 10;
    int *ptr = &num; 

    // printf("\nptr demonstration: \n");
    printf("nilai dari num: %d\n", num);
    printf("alamat memori dari num: %p\n", &num);
    printf("alamat memori yang disimpan dalam ptr: %p\n", ptr);
    printf("nilai yang diakses melalui ptr: %d\n", *ptr); 

    *ptr = 20;
    printf("nilai baru dari num setelah diubah melalui ptr: %d\n", *ptr);
    return 0;
}