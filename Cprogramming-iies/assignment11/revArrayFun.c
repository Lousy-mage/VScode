#include "stdio.h"
void rev(int a[], int len){
    int i=0,t,n=len-1;
    while(i<=n){
        t=a[i];
        a[i]=a[n];
        a[n]=t;
        i++;
        n--;
    }
    for(int i=0;i<len;++i){
        printf("%d ",a[i]);
    }
    printf("\n");

}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int len=sizeof(a)/sizeof(a[0]);
    rev(a,len);
}