#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }

        int coefficient = 1;
        for (int j = 0; j <= i; j++) {
            printf("%4d", coefficient);
            coefficient = coefficient * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}