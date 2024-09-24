#include <stdio.h>
int main(){
    int a=10;
    char b='B';
    void *ptr;
    ptr=&a;
    printf("%d\n",*(int *)ptr);
    ptr=&b;
    printf("%c\n",*(char *)ptr);
    return 0;
}