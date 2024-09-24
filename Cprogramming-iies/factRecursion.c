#include "stdio.h"
int factorial(int n){
    if(n>1)
        return n*factorial(n-1);
    else
        return 1;
}
int main(){
    int n;
    printf(" enter n\n");
    scanf("%d",&n);
    printf("factorial of %d is %d\n",n,factorial(n));
    return 0;
}