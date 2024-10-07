/*Factorial using Recursion*/
// #include<stdio.h>
// int fact(int n){
//     if(n>1)
//         return n*fact(n-1);
//     else
//         return 1;
// }
// int main(){
//     int n;
//     printf("enter a number: ");
//     scanf("%d",&n);
//     printf("factorial of %d is %d \n",n,fact(n));
//     return 0;
// }

#include <stdio.h>
#include <math.h>
int bin2Dec(long int bin){
    int dec=0,i=0;
    while(bin!=0){
        dec=dec+(bin%10)*pow(2,i++);
        bin/=10;
    }
    return dec;
}

int main(){
    long int bin;
    printf("enter binary number: ");
    scanf("%ld",&bin);

    printf("decimal number is : %d\n",bin2Dec(bin));
    return 0;
}

