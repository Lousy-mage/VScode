// #include <stdio.h>
// struct dateOfBirth{
//     int day;
//     char month[4];
//     int year;
// };
// struct student{
//     char name[30];
//     int roll;
//     long int phone;
//     struct dateOfBirth doB;
// };
// int main(){
//     struct student stu1={"Sahadu",8,8973674321,{24,"Mar",2003}};
//     printf("%d-%s-%d\n",stu1.doB.day,stu1.doB.month,stu1.doB.year);
//     return 0;
// }

#include <stdio.h>
#pragma pack(1)
struct alloTest{
    char a;
    int b;
    char c;
    char d;
    int e;
    char f;
    // int g;
    char h;
};
// }__attribute((packed))__;
int main(){
    struct alloTest a;
    printf("%d\n",__LINE__);
}