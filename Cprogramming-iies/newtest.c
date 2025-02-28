#include <stdio.h>
#include <stdlib.h>
#include "arithmetic.c"

int main() {
    int n1 = 5;
    int n2 = 3;

    printf("%d\n",sum(n1,n2));
    printf("%d\n",difference(n1,n2));
    
    system("pause");
}