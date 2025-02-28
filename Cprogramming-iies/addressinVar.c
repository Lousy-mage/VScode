#include <stdio.h>
#include <stdlib.h>

void fun(int *a){
    a += 1;
    *a =20;
}

int main() {
    int a[] = {10, 5, 3};
    fun(a);
    printf("%d\n", a[0]); 
    system("pause");
}