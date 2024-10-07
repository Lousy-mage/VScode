#include <stdio.h>

int main() {
    int a, b, c, greatest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    greatest = a > b ? a : b;
    greatest = greatest > c ? greatest : c;

    printf("The greatest number is: %d\n", greatest);

    return 0;
}