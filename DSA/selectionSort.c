#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int len) {
    int i;
    int j;
    int min;
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

int main() {
    int arr[] = {5, 1, 8, 2, 3};
    int len = sizeof(arr)/sizeof(arr[0]);

    sort(arr,len);

    for(int i = 0; i <len; i++)
        printf("%d ",arr[i]);
    printf("\n");
    system("pause");
}