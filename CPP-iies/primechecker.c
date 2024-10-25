#include <stdio.h>
void check(int n){
    if (n<=1){
        printf("%d is not prime\n",n);
        return;
    }
    else if(n<=3){
        printf("%d is prime\n",n);
        return;
    }
    else if(n%2==0||n%3==0){
        printf("%d is not prime\n",n);
        return;
    }
    else{
        for(int i=5;i*i<=n;i+6){
            if(n%i==0||n%(i+2)==0){
                printf("%d is not prime\n",n);
                return;
            }
        }
        printf("%d is prime\n",n);
    }
}
int main(){
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    check(num);
    return 0;
}