#include <stdio.h>

// #include <string.h>

// union student{
//     int id;
//     char name[20];
//     long int phone;

// };
// int main(){
//     // union student stu1;
//     // stu1.id=100;
//     // strcpy(stu1.name,"nihal navas k m");
//     // stu1.phone=8129807106;
//     // printf("name: %s\n",stu1.name);
//     // printf("id: %d\n",stu1.id);
//     // printf("phone: %ld\n",stu1.phone);
//     // printf("%d\n",sizeof(stu1));
//     return 0;
// }


// struct DateOfBirth{
//     unsigned int day: 5;
//     unsigned int month: 4;
//     unsigned int year: 30;
// }d;
// int main(){
//     d.day=31;
//     d.month=12;
//     d.year=2100;
//     printf("%d-%d-%d\n",d.day,d.month,d.year);
//     printf("%d\n",sizeof(d));
// }


// enum opr{
//     add,
//     sub=25,
//     mul,
// }e;
// int main(){
//     int n=26;
//     switch (n)
//     {
//     case add:
//         printf("add \n");
//         break;
//     case sub:
//         printf("sub \n");
//     case mul:
//         printf("mul\n");
//         break;
//     }
// }

// int main(){
//     int n=0x12345678;;
//     // printf("%x\n",*(char *)(0x7fffffffd5cc));
//     // printf("%x\n",*(char *)(0x7fffffffd5cd));
//     // printf("%x\n",*(char *)(0x7fffffffd5ce));
//     // printf("%x\n",*(char *)(0x7fffffffd5cf));
//     int i=0;
//     while(i<4){
//         printf("%x",(n>>(i*8))&255);
//         i++;
//     }
// }


// #define A for(int i=0; i<10; i++)\
// 	printf("hello");
// int main(){
//     A
//     #undef A
//     A
// }


// #define A 201
// int main(){
//     #if A == 100
//     printf("10\n");
//     #elif A ==200
//     printf("%d\n",A);
//     #else
//     printf("%d\n",A);
//     #endif
// }


// #define A 201
// #undef A
// int main(){
//     #ifdef A
//     printf("10\n");
//     #else
//     #define A 20
//     printf("%d\n",A);
//     #endif
// }

int main(){
    #line 100
    printf("%d\n",__LINE__);
}