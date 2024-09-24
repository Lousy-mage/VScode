#include <stdio.h>

// int fun() {
//     int a = 10;
//     extern int c;
//     static int b = 20;
//     printf("%d %d %d\n",a++,b++,c++);
//     return 0;  
// }

// int main() {
//     fun();
//     fun();
//     fun();
//     return 0;
// }
// int c=100;



// int main(){
//     int a=100;
//     if(1){
//         a=20;
//         printf("%d ",a);
//         if(1){
//             int a=15;
//             printf("%d ",a);
//         }
//         printf("%d ",a);
//     }
//     printf("%d\n",a);
// }


int a=10;
void fun();
int main(){
    fun();
    if(1){
        a=30;
        fun();
        if(1){
            int a=40;
            fun();
        }
        fun();
    }
    fun();
}
void fun(){
    printf("%d ",a);
}