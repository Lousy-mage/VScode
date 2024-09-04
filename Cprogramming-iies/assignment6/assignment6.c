#include "stdio.h"
int main(){
    int a=5,b=7;
    printf("a = %d\nb= %d\n",a,b);
    a=a^b; // 00000101 ^ 00000111 = 00000010
    b=a^b; // 00000010 ^ 00000111 = 00000101
    a=a^b; // 00000010 ^ 00000101 = 00000111
    printf("a = %d\nb= %d\n",a,b);
}