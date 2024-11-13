#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int p = fork();
    if(p>0){
        sleep(5);
        printf("%d - Hello\n",getpid());
    }
    else{
        printf("%d - World\n",getpid());
        exit(1);
    }
}

/*
here, the else executes first, as the if part is in hold using sleep. then after the hold time,
the if part executes.
*/