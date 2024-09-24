#include "stdio.h"
void arrCpy(int a[],int b[],int len){
    for(int i=0;i<len;i++){
        b[i]=a[i];
    }
}
void arrPrint(int b[],int len){
    for(int i=0;i<len;i++){
        printf("%d ",b[i]);
    }
    printf("\n");
}
int main(){
    int a[]={1,2,3,4,5,6};
    int len=sizeof(a)/sizeof(a[0]);
    int b[len];
    arrCpy(a,b,len);
    arrPrint(b,len);
}