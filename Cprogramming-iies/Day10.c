#include "stdio.h"
int main(){
    // int a;
    // char c;
    // top:
    // printf("Enter the A value\n");
    // scanf("%d",&a);
    // printf("Your value is %d",a);
    // err:
    // printf("\nContinue? [y/n] : ");
    // scanf(" %c",&c);
    // if(c=='y'||c=='Y'){
    //     goto top;
    // }
    // else if(c=='n'||c=='N'){
    //     goto end;
    // }
    // else{
    //     printf("error!\n");
    //     goto err;
    // }
    // end:
    // printf("bye\n");
    // int a=1;
    // check:
    // if(a<=10){
    //     printf("%d\n",a);
    //     a++;
    //     goto check;
    // }
    // else{
    //     return 0;
    // }
    // int a=10;
    // for(int i = 0; i <=10; i++){
    //     if(i==5)
    //         continue;
    //     printf("%d  ",i);
    // }
    // int a;
    // printf("oru number adiyeda : ");
    // scanf("%d",&a);
    // if(a%2==0){
    //     goto even;
    // }
    // else{
    //     goto odd;
    // }
    // even:
    // printf("even\n");
    // return 0;
    // odd:
    // printf("odd\n");
    // return 0;

    /******   Bit masking  *****/
    //check bits
    int a,n;
    printf("a: ");
    scanf("%d",&a);
    printf("n to check: ");
    scanf("%d",&n);
    printf("%d th bit is %d\n",n,((a&(1<<n))&&1));
}