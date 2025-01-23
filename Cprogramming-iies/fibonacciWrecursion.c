#include <stdio.h>
#include <stdlib.h>

int fibo(int num){
    if(num == 0){
        return num;
    }
    else if(num == 1){
        return num;
    }
    else return (fibo(num-1) + fibo(num-2));
}

int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    for(int i=0; i<num; i++){
        printf("%d ",fibo(i));

    }
    
    system("pause");
    return 0;
}