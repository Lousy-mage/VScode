#include <stdio.h>
#include <stdlib.h>

void first_and_last(int arr[],int len, int target, int *first, int *last) {
    *first = -1;
    *last = -1;
    
    for(int i =0; i < len; i++) {
        if(arr[i] == target) {
            if (*first == -1)   *first = i;
            else    *last = i;
        }
    }
}

int main() {
    int arr[] = {3,5,4,6,5,3,8,5};
    int len = sizeof(arr)/sizeof(arr[0]);

    int first, last;

    int key = 5;

    first_and_last(arr, len, key, &first, &last);

    printf("First: %d\tLast: %d\n",first,last);

    system("pause");
}