#include <stdio.h>

int main(){
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    while(num1!=num2){
        if(num1>num2)
            num1-=num2;
        else if(num2>num1){
            num2-=num1;
        }
    }
    printf("GCD is %d",num1);
    return 0;
}