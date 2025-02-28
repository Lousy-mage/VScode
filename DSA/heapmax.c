#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp =*a;
    *a =*b;
    *b = temp;

}

void heapium(int arr[], int n, int i){
    int largest = i;
    int left = 2*i +1;
    int right = 2*i +2;
    if(left < n && arr[left] > arr[largest])    largest = left;
    if(right < n && arr[right] > arr[largest])  largest = right;
    if(largest != i) {
        swap(&arr[i], &arr[largest]);
        heapium(arr, n, largest);
    }
}

void max_heap(int arr[], int n){
    int start_index = (n/2) - 1;
    for(int i = start_index; i>=0; i--){
        heapium(arr, n, i);
    }
}

void display(int arr[], int n){
    printf("Array representation of mamx heap:\n");
    for(int i =0 ; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 12, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    max_heap(arr, n);
    display(arr, n);
    system("pause");
}