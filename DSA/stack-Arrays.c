#include <stdio.h>
#include <stdlib.h>

#define size 5

int arr[size];
int top = -1;

void push(int data){
    
    if(top == size-1){
        printf("stack  is full!\n");
        return;
    }

    ++top;
    arr[top] = data;

}

int pop(){
    if(top == -1){
        return -1;
    }

    int temp = arr[top];
    --top;
    return temp;
}

void display(){
    if(top == -1){
        printf("Stack is empty\n");
        return;
    }

    int i;
    for(i = top; i >= 0; --i){
        printf("%d\t",arr[i]);
    }
    printf("\n\n");
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);

    display();

    int p = pop();

    if(p == -1){
        printf("Stack is empty. . .\n");
    }
    else{
        printf("%d popped from the stack. . .\n\n",p);
    }

    system("pause");
    return 0;
}