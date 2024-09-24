#include "stdio.h"
/*2024-09-17*/
int main(){

/* basic pointer usage*/


    // int a=10;
    // printf(" a  = %d\n",a);
    // int *p=&a;
    // printf("&a  = %d\n",&a);
    // printf(" p  = %d\n",p);
    // printf("&p  = %d\n",&p);
    // printf("*p  = %d\n",*p);
    // *p=20;
    // printf(" a  = %d\n",a);
    // printf("*p  = %d\n",*p);


/* similarity of pointer and array operations*/

    // int a[]={10,20,30,40,50};
    // int *p=a;
    // printf("a= %d\n",a);
    // printf("p= %d\n",p);
    // printf("a[0]= %d\n",a[0]); // []is used to deference arrays but not he only way
    // printf("*p= %d\n",*p);
    // printf("*a= %d\n",*a); // it can be done this way too.
    // printf("*p+1= %d\n",*p+1);
    // printf("*(p+1)= %d\n",*(p+1)); //jumps p + 1*4 bytes cause int.
    // printf("p[1]= %d\n",p[1]); // [] can be used with pointers too.

    /* traversal using pointers*/

    // int a[]={10,20,30,40,50};
    // int *p=a;
    // for (int i =0;i<5;i++){
    //     printf("%d\n",*(a+i));
    // }
    // for (int i =0;i<5;i++){
    //     printf("%d\n",p[i]);// does not affect original pointer value
    // }
    // for (int i =0;i<5;i++){
    //     printf("%d\n",*(p++));  // affects original pointer value, at the end address+i*4 will point outside the array
    // }
    // for (int i =0;i<5;i++){
    //     printf("%d\n",*(p--));  // prints first value as garbage since it starts from outside the array 
    // }
    //     for (int i =0;i<5;i++){
    //     printf("%d\n",*(p++));  // affects original pointer value
    // }
    //     for (int i =0;i<5;i++){
    //     printf("%d\n",*(--p));  // doesnt print garbage
    // }

/* some string things*/

    // char *str[]= {"Hello","World","ZaWarudo!"};
    // printf("%c\n",*(str++));
    // printf("%s\n",str);
    // printf("%s\n",str[2]);
    // char str[20][20]= {"Hello","World","ZaWarudo!"};
    // printf("%c\n",str[2][2]);

/* Some good, bad and in-between*/
    // int *ptr; //wild pointer
    // int *p=NULL; //Null pointer
    // printf("%d\n",ptr);
    // printf("%d\n",p);

/*pointer to pointer to pointer to pointer and such*/

    int a=10;
    int *pt=&a;
    int **pt1=&pt;
    int ***pt2=&pt1;
    printf("a = %d\n",a);
    printf("&a = %d\n",&a);
    printf("pt = %d\n",pt);
    printf("&pt = %d\n",&pt);
    printf("pt1 = %d\n",pt1);
    printf("&pt1 = %d\n",&pt1);
    printf("pt2 = %d\n",pt2);
    printf("&pt2 = %d\n",&pt2);


    return 0;
}