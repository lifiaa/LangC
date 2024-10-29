#include <stdio.h>
#include <string.h>

int main(){
    char siswa[5][10] = {"Alice", "Bob", "Charlie", "David", "Eva"};
    int nilai[5] = {85, 90, 78, 92, 88};

    printf("\n=== CODELAB 1 EXCUTION STARTED ===\n\n");

    printf("Masukkan nilai siswa sebelum diubah: \n");
    for(int i = 0; i < 5; i++){
        printf("%s: %d\n", siswa[i], nilai[i]);
    }

    for(int i = 0; i < 5; i++){
        if(strcmp(siswa[i], "David") == 0){
            nilai[i] = 95;
            break;
        }

    }
    printf("\nDaftar siswa dan nilai siswa setelah diubah: \n");
    for(int i = 0; i < 5; i++){
        printf("%s: %d\n", siswa[i], nilai[i]);
    }

    printf("\n=== CODE EXCUTION SUCCESS ===\n");
    return 0;
}