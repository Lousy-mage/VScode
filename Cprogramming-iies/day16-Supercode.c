/*
1. palindrome
2. factorial
3. Fibonacci
4. sum n
5. sum digits
6. leap year
*/
#include "stdio.h"
int getNum(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    return num;
}
int getYear(){
    int num;
    printf("Enter a year\n");
    scanf("%d",&num);
    return num;
}
int findPal(){
    int num=getNum();
    int copy,rev=0,temp;
    copy=num;
    while(num){
    rev=rev*10+num%10;
    num/=10;
    }
    if(rev==copy)
        return 1;
    return 0;
}
int findFact(){
    int num=getNum();
    int fact=1;
    // fact(num);
    for(int i=1; i<=num; i++){
        fact*=i;
    }
    return fact;
}
void findFib(){
    int a,b,c,n;
    n=getNum();
    a=0;
    b=1;
    c=0;
    while(n){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
        n--;
    }
    return;
}
int findSumN(){
    int num=getNum();
    int sum=0;
    for(int i=0; i<=num;i++){
        sum+=i;
    }
    return sum,num;
}
int findSumD(){
    int num=getNum();
    int sum=0;
    while(num){
    sum+=num%10;
    num/=10;
    }
    return sum;
}
void findLeap(){
    int year=getYear();
    if(year%4==0){
        if(year%100==0){
            if (year%400==0){
                printf("%d is a leap year\n",year);
            }
            else{
                printf("%d is not a leap year\n",year);
            }
        }
        else{
            printf("%d is a leap year\n",year);
        }
    }
    else
        printf("%d is not a leap year\n",year);
    return;
}

int main(){
    // printf("%d\n",printf("Hello"));
    again:
    printf("Welcome to super code, please select an option: \n");
    printf("[1] palindrome\n");
    printf("[2] factorial\n");
    printf("[3] fibonacci series\n");\
    printf("[4] sum of n numbers\n");
    printf("[5] sum of digits\n");
    printf("[6] leap year check\n");
    printf("your choice: \n");
    int choice;
    int result;
    scanf("%d",&choice);
    switch (choice){
        case 1:
            result=findPal();
            if(result==1)
                printf("number is a palindrome\n");
            else
                printf("number is not palindrome\n");
            break;
        case 2:
            result=findFact();
            printf("factorial is %d\n",result);
            break;
        case 3:
            findFib();
            break;
        case 4:
            result=findSumN();
            printf("sum is %d\n",result);
            break;
        case 5:
            result=findSumD();
            printf("sum is %d\n",result);
            break;
        case 6:
            findLeap();
            break;
        default:
            printf("enter a valid option! \n");
            goto again;
    }
}