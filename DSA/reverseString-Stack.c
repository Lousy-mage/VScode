#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 50

char Stack[size];
int top = -1;

void push(char data){
    
    if(top == size-1){
        printf("stack  is full!\n");
        return;
    }

    ++top;
    Stack[top] = data;

}

char pop(){
    if(top == -1){
        return -1;
    }

    int temp = Stack[top];
    --top;
    return temp;
}

void getString(char* string){
    
    printf("Enter a string: ");
    fgets(string, size, stdin);
    

    int len = strlen(string);
    if(len > 0 && string[len-1] == '\n'){
        string[len-1] = '\0';
    }
}

void reverseString(char* string){
    int length = strlen(string);
    

    for(int i = 0; i < length; i++){
        push(string[i]);
    }
    

    for(int i = 0; i < length; i++){
        string[i] = pop();
    }
}

int main(){
    char string[size];
    getString(string);
    
    printf("Original string: %s\n", string);
    reverseString(string);
    printf("Reversed string: %s\n", string);
    
    system("pause");
    return 0;
}