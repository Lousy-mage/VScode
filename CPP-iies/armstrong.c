#include <stdio.h>
#include <math.h>
void check(int n){
    int rev=0,temp=n,dig=0;
    while(temp){
        temp/=10;
        dig++;
    }
    temp=n;
    while(n){
        int i=n%10;
        rev=rev+pow(i,dig);
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