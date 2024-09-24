#include "stdio.h"
void sum(int a[], int);
int main(){
    int a[]={1,2,3,4,5},len; // 20/4=5
    len =sizeof(a)/sizeof(a[0]);
    sum(a,len);
    return 0;
}
void sum(int a[],int len){
    for(int i=1; i<len;i++){
        a[0]+=a[i];
    }
    printf("%d\n",a[0]);
}