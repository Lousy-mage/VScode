// // /*
// //     *
// //    ***
// //   *****
// //    ***
// //     *    



// // */

// #include <stdio.h>

// int main(){
//     int n =5;
//     for (int i=1; i<=2*n-1; i++){
//         int comp;
//         if(i<n){
//             comp = 2*(n-i)-1;
//         }
//         else{
//             comp=2*(i-n+1)+1;
//         }
//         for (int j=0; j<comp; j++){
//             printf("*");
//         }
//         for (int k=comp; k<2*n;k++){
//             printf(" ");
//         }
//         printf("\n");
//         // 
//     }
  
//     return 0;
// }

// // #include <stdio.h>
// // #include <math.h>

// // int main() {
// //     int n = 5;

// //     for (int i = 1; i <= 2 * n - 1; i++) {
// //         for (int j = 0; j < n - abs(n - i); j++) {
// //             printf(" ");
// //         }
// //         for (int k = 0; k < 2 * abs(n - i) + 1; k++) {
// //             printf("*");
// //         }
// //         printf("\n");
// //     }

// //     return 0;
// // }

// #include <stdio.h>
// #include <math.h>
// int main() {
//     int n = 5;

//     for (int i = 1; i <= 2 * n - 1; i++) {
//         int spaces = n - abs(n - i);
//         int stars = 2 * abs(n - i) + 1;

//         for (int j = 0; j < spaces; j++) {
//             printf(" ");
//         }
//         for (int k = 0; k < stars; k++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include<stdio.h>
int main(){
 int n;
 printf("enter n");
 scanf("%d",&n);
 for(int i=0;i<2*n-1;i++)
 {
     int comp;
     if(i<n)
     {
         comp = 2*(n-i)-1;

     }
     else
     {
         comp = 2*(i-n+1)+1;
     }
 for(int j=0;j<comp;j++)
 {
     printf(" ");
 }
 for(int k=comp;k<2*n;k++)
 {
     printf("%d ",k+1);
 }
    printf("\n");
 }
}