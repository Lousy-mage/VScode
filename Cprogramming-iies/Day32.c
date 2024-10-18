// #include <stdio.h>

// int main(){
//     int i=11;
//     for(i--;i--;i--){
//         printf("%d ",i);
//     }
//     printf("\n");
// }

// #include <stdio.h>
// int fun(int n){
//     static int i=1;
//     if(n>=5){
//         return n;
//     }
//     n=n+i;
//     i++;
//     return fun(n);
// }
// int main(){
//     printf("%d",fun(1));
// }


// #include <stdio.h>

// int main(){
//     char a[]="EnthaVro";
//     printf("%s\n",&a[5]);
//     printf("%s\n",&5[a]);
//     printf("%s\n",a+5);
// }


/*#### Find the Difference ####*/
// #include <stdio.h>

// int main(){
//     int *ptr[30];
//     int (*ptr)[30];
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     if(printf("hello")){}
//     while (printf("Hello")!=5){}
//     switch(printf("bye")){}
// }

// #include <stdio.h>
// int main()
// {
//     int i=40;
//     int j=i>>5<<3>>2<<1;
//     printf("%d",j);
// }


/*######print all ASCII characters and its values######*/
// #include <stdio.h>

// int main(){
//     for(int i=-128;i<128;i++){
//         for(int j=7;j>=0;j--){
//             if(i&(1<<j)){
//                 printf("1 ");
                
//             }
//             else{
//                 printf("0 ");
//             }
//         }
//         printf(" => %d => %c\n",i,i);
//     }
// }

/* fixing rang for random values */

// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     for(int i=0;i<=10;i++){
//         printf("%d\n",rand()%(10+1-1)+1);
//     }
// }


// #include <stdio.h>
// int main(){
//     int a=1;
//     printf("%d %d %d %d %d %d %d %d\n",a++,a++,a++,a++,a++,a++,a++,a++);
//     a=1;
//     printf("%d %d %d %d %d %d %d %d\n",++a,++a,a++,a++,a++,++a,a++,a++);
// }

// #include <stdio.h>
// int main(){
//     int a=1,2,3;//error
//     printf("%d ",a);
// }

// #include <stdio.h>
// int main(){
//     int a=(1,2,3);
//     printf("%d ",a);
// }

// #include <stdio.h>
// int main(){
//     int a;
//     a=1,2,3;
//     printf("%d ",a);
// }

// #include <stdio.h>
// int main(){
//     int a;
//     a=(1,2,3);
//     printf("%d ",a);
// }

// #include <stdio.h>

// int main(){
//     int a=1;
//     for(int i=0;i<10;i++){
//         printf("%4d",i);
//     }
// }

/*#### Occurance of binary sequence ####*/
// #include <stdio.h>
// int main(){
//     int dec, count=0,bin=9;
//     printf("enter dec");
//     scanf("%d",&dec);
//     while(dec>0){
//         if((dec&15)==bin)
//             count++;
//         dec>>=1;
//     }
//     printf("Number of occurance of 1001 : %d\n",count);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     float a=3.14;
//     fmod()
// }

// #include <stdio.h>
// int main(){
//     int a=2;
//     printf("%d ",(++a)*(++a)*(++a)); // the last ++a affects the value of one previous a (only 1) sometimes adds last value to the result.
// }

