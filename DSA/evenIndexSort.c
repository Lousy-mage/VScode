#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void getEven(int arr[], int n, int evenArr[], int *evenCount) {
    *evenCount = 0;
    for (int i = 0; i < n; i += 2) {
        evenArr[*evenCount] = arr[i];
        (*evenCount)++;
    }
}

void replaceInOriginal(int arr[], int n, int evenArr[]) {
    int j = 0;
    for(int i = 0; i < n; i+=2){
        if(i%2 == 0){
            arr[i] = evenArr[j];
            j++;
        }
    }
}

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main() {
    int n;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("\nOriginal ");
    printArray(arr, n);
    
    int evenSize = (n + 1) / 2;
    int evenArr[evenSize];
    int evenCount;
    
    getEven(arr, n, evenArr, &evenCount);
    
    sortArray(evenArr, evenCount);
    replaceInOriginal(arr, n, evenArr);

    printf("After sorting even indices ");
    printArray(arr, n);
    
    system("pause");
}