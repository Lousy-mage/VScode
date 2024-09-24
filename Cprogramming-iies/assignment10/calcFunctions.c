#include "stdio.h"
int getNum(){
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    return num;
}
int getOp(){
    int op;
    printf("which operation would you like to perform?\n");
    printf("[1] addition\n");
    printf("[2] subtraction\n");
    printf("[3] multiplication\n");
    printf("[4] division\n");
    printf("[5] floor division\n");
    scanf("%d",&op); 
    return op;
}
void findSum(int num1, int num2){
    printf("Sum = %d\n",num1+num2);
}
void findSub(int num1, int num2){
    printf("Difference = %d\n",num1-num2);
}
void findMul(int num1, int num2){
    printf("Product = %d\n",num1*num2);
}
void findDiv(int num1, int num2){
    if(num2==0){
        printf("cannot divide by 0\n");
        return;
    }
    else
        printf("Quotient = %.2f\n",(float)num1/(float)num2);
}
void findMod(int num1, int num2){
    if(num2==0){
        printf("cannot divide by 0\n");
        return;
    }
    else
        printf("Remainder = %d\n",num1%num2);
}
int main(){
    int num1=getNum();
    int num2=getNum();
    invOp:
    int operation=getOp();
    switch (operation)
    {
    case 1:
        findSum(num1,num2);
        break;
    case 2:
        findSub(num1,num2);
        break;
    case 3:
        findMul(num1,num2);
        break;
    case 4:
        findDiv(num1,num2);
        break;
    case 5:
        findMod(num1,num2);
        break;
    default:
        printf("Enter a valid operation\n");
        goto invOp;
    }
}