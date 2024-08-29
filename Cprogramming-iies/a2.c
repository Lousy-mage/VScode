#include <stdio.h>

int main(){
    // swapping with 3rd variable
    int a,b,c;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);

    c=a;
    a=b;
    b=c;

    printf("swapped numbers are : %d  %d\n",a,b);


    return 0;
}