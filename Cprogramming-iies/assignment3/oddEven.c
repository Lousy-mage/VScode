#include <stdio.h>

int main(){
    // odd or even
    int a,r;
    printf("enter a number : ");
    scanf("%d",&a);
    r=a%2;
    if (r==0)
        printf("even number\n");
    else
        printf("odd number\n");
    return 0;
}