#include "stdio.h"
int main(){

    int a[]={10,20,30,40,50,60};
    int n=sizeof(a)/4-1,t,i=0;

    while(i<=n){
        t=a[i];
        a[i]=a[n];
        a[n]=t;
        i++;
        n--;
    }
    n=sizeof(a)/4-1;
    for(int i=0;i<=n;++i){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}