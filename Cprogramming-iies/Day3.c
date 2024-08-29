/*
take user input : 

eg.: 6
output:
1  7   12  16  19 21   open challenge
2  8   13  17  20
3  9   14  18
4  10  15
5  11 
6
*/

#include <stdio.h>

int main(){
//     int dec = 789;
//     int oct = 0564;
//     int hex = 0x74A;
//     printf("%d\n%d\n%d\n\n", //here octal and hex are converted to decimal; works other way too
//             dec,oct,hex);
// // dec oct and hex(small)
//     printf("%d\n%o\n%x\n\n",
//             dec,oct,hex);
// // dec oct HEX
//     printf("%d\n%o\n%X\n\n",
//             dec,oct,hex);
    printf("%c,%c,%c\n",'\x41','\101',65); // ASCII can written as hex, oct, or dec
    const int a =10;
    printf("%d\n",a+10);
//  printf("hello
//             all");   ERROR
    printf("hello\
 all");
    return 0;
}