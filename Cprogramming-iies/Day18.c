#include "stdio.h"
#include "ncurses.h"
#include "termio.h"
/*Direct tailed*/
// void fun(int a){
//     printf("Bruh!\n");
//     if(a>0)
//         fun(a-1);
// }
// int main(){
//     fun(5);
//     return 0;
// }
/*Direct non-tailed*/
// void fun0(int a){
//     printf("%d\n",a);
//     if(a>0)
//         fun0(a-1);
//     printf("%d\n",a);
// }
// int main(){
//     fun0(5);
//     return 0;
// }

/*Indirect Tailed*/
// void fun0(int);
// void fun1(int);
// int main(){
//     fun0(5);
//     return 0;
// }
// void fun0(int a){
//     printf("%d\n",a);
//     if(a>0)
//         fun1(a-1);
//     printf("%d\n",a);
// }
// void fun1(int a){
//     printf("%d\n",a);
//     if(a>0)
//         fun0(a-1);
//     printf("%d\n",a);
// }
/* Indirect Nontailed */


/*tricky ones*/
// int fun(int n){
//     static int i=1;
//     if(n>=5)
//         return n;
    
//     n=n+i;
//     i++;
//     return fun(n);
// }
// int main(){
//     printf("%d\n",fun(1));
//     return 0;
// }

/* tricky 2*/

// int main(){
//     if(printf("hii")){}
// while (printf("Hello")!=5){}
// switch(printf("Bye")){}
// }

/* tricky 3*/

int main(){
    char c;
    printf("enter a character: ");
    c= getch();
    printf("\n%c\n",c);
    printf("enter a character: ");
    c= getche();
    printf("\n%c\n",c);
    printf("enter a character: ");
    c= getchar();
    printf("\n%c\n",c);
}