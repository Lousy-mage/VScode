#include <stdio.h>

struct test1{
    int num1:3;
    char char1:2;
};
int main(){
    struct test1 t1;
    int size=sizeof(t1);

    printf("size: %d\n",size);
    return 0;
}