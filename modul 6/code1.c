#include <stdio.h>

int faktorial(int n);
int fibonacci(int n);


int main(){
    int num, i;

    // faktorial
    printf("Masukkan angka untuk menghitung faktorial: ");
    scanf("%d", &num);
    printf("Faktorial dari %d adalah: %d\n", num, faktorial(num));

    // fibonacci
    printf("Masukkan angka untuk menghasilkan deret fibonacci: ");
    scanf("%d", &num);
    printf("Deret fibonacci hingga suku ke-10 adalah: %d ", num);

    for(i = 0; i < num; i++){
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;    
}

int faktorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * faktorial(n-1);
    }
}

int fibonacci(int n){
    if(n <= 1){
        return n;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}