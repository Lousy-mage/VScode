/*
* * * * * *
* * * * * *
* * * * * * 
* * * * * *
* * * * * *

* * * * * *
 * * * * * *
* * * * * * 
 * * * * * *
* * * * * *

*
* *
* * *
* * * *
* * * * *

* * * * *
* * * *
* * * 
* *
*

         *
       * *
     * * * 
   * * * *
 * * * * *
 


*/

#include "stdio.h"
// int main(){
//     for(int i=0;i<5;i++){
//             if(i%2==0)
//                 printf(" ");
//         for(int j=0;j<5;j++){

//             printf("* ");
//         }
//         printf("\n");
//     }
// }
// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=i;j<4;j++){
//             printf("  ");
//         }
//         for(int k=0;k<=i;k++){

//             printf("* ");
//         }
//         for(int q=1;q<=i;q++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
        printf("  ");
        }
        for(int j=i;j<5;j++){
        printf("* ");
        }
        printf("\n");
    }
}