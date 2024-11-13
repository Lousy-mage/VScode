#include <stdio.h>
#include <unistd.h>

int main(){

    fork();
    printf("0 ");
    if(fork()){
        printf("1 ");
        printf("%d\n",getpid());
    }
    else{
        printf("2 ");
        printf("%d\n",getpid());
    }
    return 0;
    
}