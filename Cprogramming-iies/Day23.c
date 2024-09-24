#include <stdio.h>
#include <string.h>
// void priArr(int *a, int n);
// void priArr(char *a);
// void swapIntCallByVal(int,int);
// void swapIntCallByRef(int*,int*);
int swapIntFunc(int,int);
int main(){
    // int a=10;
    // char b='B';
    // void *ptr;
    // ptr=&a;
    // printf("%d\n",*(int *)ptr);
    // ptr=&b;
    // printf("%c\n",*(char *)ptr);

    // int a[]= {10,20,30,40};
    // int lenA= sizeof(a)/sizeof(a[0]);
    // priArr(a,lenA);

    // char a[]="Brotha eww!";
    // priArr(a);

/* Call by Value */
    // int a=10;
    // int b=20;
    // printf("%d %d\n",a,b);
    // swapIntCallByVal(a,b);
    // printf("%d %d\n",a,b);

/* Call by Ref */
    // int a=10;
    // int b=20;
    // printf("%d %d\n",a,b);
    // swapIntCallByRef(&a,&b);
    // printf("%d %d\n",a,b);

/* Pointer to Function */
    // int a=10,b=20;
    // int (*ptr)(int,int)=swapIntFunc;
    // ptr(a,b);

/* Contant and Pointer operations*/
    int a =20;
    int *const ptr= &a;
    *ptr =30;
    printf("%d\n",*ptr);


    return 0;
}
// void priArr(int *a,int n){
//     for(int i=0;i<n;i++){
//         printf("%d\n",*(a+i));
//     }
// }

// void priArr(char *a){
//     printf("%s\n",a);
//     a[6]='-';
//     for(int i=0;i<strlen(a);i++){
//         printf("%c",*(a+i));
//     }
//     printf("\n");
// }

// void swapIntCallByVal(int a, int b){
//     int c =a;
//     a=b;
//     b=c;
//     printf("%d %d\n",a,b);
// }


// void swapIntCallByRef(int *a, int *b){
//     int c =*a;
//     *a=*b;
//     *b=c;
//     printf("%d %d\n",*a,*b);
// }

// int swapIntFunc(int a, int b){
//     int c=a;
//     a=b;
//     b=c;
//     printf("%d %d\n",a,b);
//     return 0;
// }