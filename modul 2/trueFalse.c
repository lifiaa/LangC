#include <stdio.h>
#include <stdbool.h>
#include <string.h> 

int main(){
    // boolean values
    bool flagTrue = true; //perbaiki boolean menjadi bool :)
    bool flagFalse = false;

    printf("\n\n============ CODELAB 2 EXECUTION STARTED ===========\n\n");

    printf("Boolean values demonstration: \n");
    printf("flagTrue: %d\n", flagTrue);
    printf("flagFalse: %d\n", flagFalse);

    // String operations
    char greeting[] = "Hello, World!";
    char copyGreeting[20];
    strcat(copyGreeting, greeting); //gunakan strcat (concat) dan bukan stringcopy :)

    printf("\nString operations demonstration: \n");
    printf("Original greeting: %s\n", greeting); // not string1 but greeting
    printf("Copied greeting: %s\n", copyGreeting);

    // *Pointer demonstrations
    //menyimpan alamat memori dari variabel lain dengan tipe data yang sama
    int number = 100;
    int *pointer = &number; // pointer menyimpan alamat memori dari var number

    printf("\nPointer demonstration: \n");
    printf("value of number: %d\n", number);
    printf("address of number: %p\n", &number);
    printf("value of pointer: %p\n", pointer);
    // printf("value pointed by pointer: %p\n", ); // salah 
    printf("value pointed by pointer: %d\n", *pointer); //%d krn ingin mengakses nilai dari variabel number (int) melalui pointer

    printf("\n\n============ CODE EXECUTION SUCCESSFULL ===========\n\n");

    return 0;
}