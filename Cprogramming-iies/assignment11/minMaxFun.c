#include <stdio.h>

int minArr(int a[], int len);
int maxArr(int a[], int len);

int main() {
    int min, max;
    int a[] = {10, 2, 35, 7, 24, 56, 13, 3, 53};
    int len = sizeof(a) / sizeof(a[0]);

    min = minArr(a, len);
    max = maxArr(a, len);

    printf("The minimum value is %d\n", min);
    printf("The maximum value is %d\n", max);

    return 0;
}

int minArr(int a[], int len) {
    int min = a[0];
    for (int i = 0; i < len; i++) {
        if (min >= a[i]) {
            min = a[i];
        }
    }
    return min;
}

int maxArr(int a[], int len) {
    int max = a[0];
    for (int i = 0; i < len; i++) {
        if (max <= a[i]) {
            max = a[i];
        }
    }
    return max;
}