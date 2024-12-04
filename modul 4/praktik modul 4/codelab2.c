#include <stdio.h>
#include <string.h>

int main() {
    char kata[100];
    int i, j;
    int isUnique;

    printf("\n=== Codelab 2 Execution Started ===\n\n");
    printf("Masukkan sebuah string: ");
    fgets(kata, sizeof(kata), stdin); //menghindari buffer & lebih aman

    printf("\nKarakter unik dalam string: ");
    
    for (i = 0; i < strlen(kata); i++) {
        isUnique = 1;  // Menandai karakter sbg unik
        
        // Loop kedua untuk memeriksa apakah karakter sudah muncul sebelumnya
        for (j = 0; j < i; j++) {
            if (kata[i] == kata[j]) {
                isUnique = 0;  
                break;  
            }
        }

        // Jika karakter unik, maka cetak karakter
        if (isUnique) {
            printf("%c", kata[i]);
        }
    }

    printf("\n\n=== Code Execution Successful ===\n");

    return 0;
}
