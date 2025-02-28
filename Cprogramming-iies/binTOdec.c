#include <stdio.h>
#include <stdlib.h>

void bin2dec(int decimal) {
    while(decimal != 0) {
        decimal = decimal>>1;
        printf("%d", ((decimal)&1));
    }
    printf("\n");
    
    
}

int main() {
    int decimal;
    printf("Enter a decimal value: ");
    scanf("%d",&decimal);

    bin2dec(decimal);
    system("pause");
}