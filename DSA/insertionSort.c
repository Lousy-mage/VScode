#include <stdio.h>
#include <stdlib.h>

void sort (int arr[], int len){
    int i, j, key;
    for(j = 1; j < len; j++) {
        key = j;
        for(i = j-1; i >= 0; --i) {
            if(arr[key] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[key];
                arr[key] = temp;

                key = i;
            }
        }
    }
}

void insertionSort(int arr[], int len){
    int i, key, j;
    for(i = 1; i < len; i++) {
        key = arr[i];
        j = i-1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j -1;
        }
        arr[j +1] = key;
    }
}

int main() {
    int arr[] = {3, 18, 5, 4, 6, 7, 2, 23, 1};
    int len = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, len);

    for(int i = 0; i < len; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    system("pause");
}