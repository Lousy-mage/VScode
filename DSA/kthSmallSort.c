#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int len) {
    int i, j, min;
    for(i = 0; i < len-1; i++) {
        min = i;
        for(j = i; j < len; j++) {
            if(arr[min] > arr[j]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void printArray(int arr[], int len) {
    int i;
    for(i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int findKthSmallest(int arr[], int len, int k) {

    int tempArr[len];
    int i;
    for(i = 0; i < len; i++) {
        tempArr[i] = arr[i];
    }
    
    sort(tempArr, len);

    return tempArr[k-1];
}

int main() {
    int len, k;
    
    printf("Enter the size of array: ");
    scanf("%d", &len);
    
    int arr[len];
    
    printf("Enter %d elements:\n", len);
    int i;
    for(i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter k (1 to %d): ", len);//getting k
    scanf("%d", &k);
    
    printf("\nOriginal array: ");
    printArray(arr, len);
    

    if(k >= 1 && k <= len) {
        int kthSmallest = findKthSmallest(arr, len, k);
        printf("The %dth smallest element is: %d\n", k, kthSmallest);
    } else {
        printf("Invalid value of k\n");
    }
    
    system("pause");
}