#include <stdio.h>
#include <stdlib.h>

int factorial(int num){
    if(num == 0 || num == 1){
        return 1;
    }
    else if(num < 0){
        printf("no factorial for -ve numbers\n");
        system("pause");
        exit(1);
    }
    else
        return num*factorial(num-1);
}

int main(){
    int num;
    printf("Enter a number to find factorial: ");
    scanf("%d",&num);

    printf("factorial of %d is %d\n",num, factorial(num));
    system("pause");
    return 0;
}