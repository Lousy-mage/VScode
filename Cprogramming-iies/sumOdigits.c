#include "stdio.h"
int main(){
    int num,sum=0;
    printf("enter a number:  ");
    scanf("%d",&num);
    while(num){
        sum=sum+num%10;
        num/=10;
    }
    printf("%d\n",sum);
    return 0;
}