#include <stdio.h>

struct Test1{
    char a;
    int b;
    char c;
    double d;
}__attribute((packed))__;

struct Test2{
    char a;
    int b;
    char c;
    double d;
};


int main(){
    struct Test1 t1;
    struct Test2 t2;

    int s1=sizeof(t1);
    int s2=sizeof(t2);

    printf("struct1: %d\n struct2: %d \n",s1,s2);
    return 0;
}