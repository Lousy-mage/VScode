#include <stdio.h>
void check(int n){
    int rev=0,temp=n;
    while(n){
        int i=n%10;
        rev=rev+(i*i*i);
        n/=10;
    }
    if(temp==rev){
        printf("%d is armstrong\n",temp);
    }
    else printf("%d is not armstrong\n",temp);
}
int main(){
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    check(num);
    return 0;
}