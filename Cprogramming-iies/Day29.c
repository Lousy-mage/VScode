#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <errno.h>
#include <stdarg.h>

// void func(){
//     printf("modayano?\n");
//     exit(1);
//     printf("hello\n");
// }
// int main(){
//     printf("entha vro\n");
//     func();
//     return 0;
// }

// int main(){
//     system("color 2A");
//     srand((unsigned int)time(NULL));
//     for(int i=0; i<5; i++)
//         printf("%u\n",rand()%11);
// }

// int main(){
//     for(int i=0; i<5; i++)
//         printf("%d\t",pow(2,i));
//     printf("\n");
//     printf("%.2lf\n",sqrt(9889));
//     printf("%.2lf\n",ceil(sqrt(9889))); // increase vale and round off
//     printf("%.2lf\n",floor(sqrt(9889))); // decrease the value and round off
//     char ch='B';
//     if (isalnum(ch))
//     {
//         printf("%c is alnum\n",ch);
//     }
//     else{
//         printf("%c is not alnum\n",ch);
//     }
    
//     char cha='3';
//     if (isalpha(cha))
//     {
//         printf("%c is alpha\n",cha);
//     }
//     else{
//         printf("%c is not alpha\n",cha);
//     }
    
//     char n='2';
//     if (isdigit(n))
//     {
//         printf("%c is num\n",n);
//     }
//     else{
//         printf("%c is not num\n",n);
//     }
// }

// int main() {
//     printf("\033[31mThis text will be red.\033[0m\n");
//     return 0;
// }

// int main(){
//     FILE *ptr;
//     ptr=fopen("entho.txt","r");
//     printf("error no: %d",errno);
//     perror("\nError");
//     for(int i=0;i<43;i++){
//         printf("%d \t : %s\n",i,strerror(i));
//     }
// }

int sum(int num_args,...){
    int total=0;
    va_list args;
    va_start(args,num_args);
    for(int i=0;i<num_args;i++){
        total+=va_arg(args,int);
    }
    va_end(args);
    return total;
}
int main(){
    int result=sum(4,10,20,30,40);
    printf("Sum: %d\n",result);
    return 0;
}