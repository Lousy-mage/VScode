#include <stdio.h>

int main(){
    // add without plus
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    a=a-(-b);
    printf("sum is : %d\n",a);
    return 0;
}