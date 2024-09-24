#include <stdio.h>
#include <unistd.h>
// long long int getBin(){
//     long long int bin=0;
//     printf("enter a binary number: ");
//     scanf("%lld",&bin);
//     return bin;
// }
// int occurence(long long int bin){
//     int count=0;
//     long long int temp=bin;
//     while (temp >= 1001) {
//         if (temp % 10000 == 1001) {
//             count++;
//         }
//         temp /= 10;
//     }
//     return count;
// }
// int main(){
//     long long int bin=getBin();
//     int occur=occurence(bin);
//     printf("no.of occurence of 1001 is %d\n",occur);
//     return 0;
// }

// int main(){
//     int n=1;
//     if(fork()){
//         printf("pid: %d  Hello\n",getpid());
//     }
//     else{
//         printf("pid: %d  World\n",getpid());
//     }
//     return 0;
// }

void func();
int main(){
    func(10,20);
}
void func(int a, int b){
    printf("%d\n",a+b);
}