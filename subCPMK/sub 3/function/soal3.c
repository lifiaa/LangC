#include <stdio.h>

int findMax(int arr[], int n);

int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr) / sizeof(arr[0]);

int main(){
    findMax(arr, n);
    printf("Nilai terbesar dalam array adalah %d", findMax(arr, n));
    return 0;
}

int findMax(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}