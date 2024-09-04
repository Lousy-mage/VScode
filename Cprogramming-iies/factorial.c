#include "stdio.h"
// void fact(int num){
//     int ++facto;
//     facto*=facto;
//     if()
// }
int main(){
    int num,fact=1;
    printf("enter a number: ");
    scanf("%d",&num);
    // fact(num);
    for(int i=1; i<=num; i++){
        fact*=i;
    }
    printf("%d\n",fact);
}