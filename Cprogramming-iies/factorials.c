#include <stdio.h>

int factorial(int n){
    if(n>1)
        return n*factorial(n-1);
    else
        return 1;
}
int main(){
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("factorial : %d\n",fact);
    return 0;
}