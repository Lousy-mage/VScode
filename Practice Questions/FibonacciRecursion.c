#include <stdio.h>
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}
int main(){
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
        printf("%d ",fibonacci(i));
    }
    printf("\n");
    return 0;
}