#include <stdio.h>

int main(){
    // swapping without 3rd variable
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    a=a+b;//5+10=15
    b=a-b;//15-10=5
    a=a-b;//15-5=10
    printf("swapped numbers are : %d  %d\n",a,b);
    
    return 0;
}