#include <stdio.h>

void tulisMundur(int n, char kata[n]);

int main(){
    tulisMundur(12, "Hello World!");
    return 0;
}

void tulisMundur(int n, char kata[n]){
    for(int i = n; i > 0; i--){
        printf("%s\n", kata);
    }
}