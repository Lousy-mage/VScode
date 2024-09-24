#include <stdio.h>

int main() {
    long long int num, temp, count = 0;
    printf("Enter the decimal number: ");
    scanf("%lld", &num);
    temp = num;
    while (temp >= 1001) {
        if (temp % 10000 == 1001) {
            count++;
        }
        temp /= 10;
    }
    printf("The number of occurrences of '1001' in %lld is %d\n", num, count);
    return 0;
}