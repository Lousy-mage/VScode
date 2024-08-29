#include <stdio.h>

int main(){
    // subtract without minus
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    a=(a)+(~b+1);
    printf("difference is : %d\n",a);
    return 0;
}