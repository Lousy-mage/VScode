#include <stdio.h>
#include <math.h>

long int decimalToBinary(int decimal) {
    long int binary = 0, i = 0;
    while (decimal != 0) {
        binary = binary + (decimal % 2) * pow(10, i++);
        decimal /= 2;
    }
    return binary;
}

int binaryToDecimal(long int binary) {
    int decimal = 0, i = 0;
    while (binary != 0) {
        decimal = decimal + (binary % 10) * pow(2, i++);
        binary /= 10;
    }
    return decimal;
}

int main() {
    int choice;
    long int number;

    printf("Choose an option:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    scanf("%d", &choice);

    printf("Enter the number: ");
    scanf("%ld", &number);

    switch (choice) {
        case 1:
            printf("Binary equivalent: %ld\n", decimalToBinary(number));
            break;
        case 2:
            printf("Decimal equivalent: %ld\n", binaryToDecimal(number));
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}