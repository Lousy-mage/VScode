#include "stdio.h"
int main(){
    int a[10]={10,20,30,40,50,60,70,80,90,100};
    int n=sizeof(a)/4;
    // printf("%d\n",n);

    for(int i=0;i<n;++i){
        printf("a[%d]  =  %d\n",i,a[n-1-i]);

    }
}

/* 
for(i=0;i<5;i++)
j=4-i
a[j]=a[4],a[3],a[2],a[1],a[0]
a[0],a[1],a[2],a[3],a[4]

*/