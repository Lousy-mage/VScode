#include<stdio.h>
#include<stdlib.h>

void fun1(int);
void fun2(int);

int main(){
    fun1(0);
    system("pause");
}

void fun1(int i){
    if(!(i>10)){
    printf("%d ",i);
    fun2(i);
    }
}

void fun2(int i){
    fun1(++i);
}