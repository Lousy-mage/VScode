#include "stdio.h"
void dec2bin(int dec){
    int i=1,bin=0;
    while(dec){
        bin=bin+(dec%2)*i;
        dec/=2;
        i*=10;
    }
    printf("%d\n",bin);
}
int main(){
    int dec;
    printf("enter a binary number  ");
    scanf("%d",&dec);
    dec2bin(dec);
    return 0;
}

// #include "stdio.h"
// #include "string.h"
// void revarr(char *a, int len){
//     char rev;
//     for (int i=0; i<len/2;i++){
//         rev=a[i];
//         a[i]=a[len-i-1];
//         a[len-i-1]=rev;
//     }
// }
// int main(){
//     char a[]="hello world";
//     int n=strlen(a);
//     revarr(a,n);
//     for(int i=0;i<n;i++){
//         printf("%c",a[i]);
//     }
//     printf("\n");
//     return 0;
// }