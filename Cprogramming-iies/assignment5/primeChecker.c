#include "stdio.h"

int main(){
    /*prime number*/
    int num,check;
    printf("Enter a number : ");
    scanf("%d",&num);
    if (num <= 1) {
        printf("not prime\n");
        return 0;
    }
    else if (num <= 3) {
        printf("prime\n");
        return 0;
    }
    else if (num % 2 == 0 || num % 3 == 0) {
        printf("not prime\n");
        return 0;
    }
    int i = 5;
    while (i * i <= num) {
        if (num % i == 0 || num % (i + 2) == 0) {
            printf("not prime\n");
            break;
        }
        i += 6;
    }
    printf("prime\n");
    return 0;
}