#include "stdio.h"
int main(){
    int num, rev=0;
    printf("enter a number :  ");
    scanf("%d",&num);
    int temp=num;
    while(num){//when num becomes 0 it exits while automatically
        rev=rev*10+(num%10);
        num/=10;
    }
    /*Palindrome check*/
    if(temp==rev)
        printf("%d is a palindrome\n",temp);
    else
        printf("%d is not a palindrome\n",temp);
    return 0;
}