#include "stdio.h"
int main(){
    int a,b,c,n;
    printf("enter value of n : ");
    scanf("%d",&n);
    a=0,b=1;
    c=0;
    while(n){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
        n--;
    }
}