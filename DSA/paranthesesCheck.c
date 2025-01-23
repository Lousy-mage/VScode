#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 100

typedef struct Stack{
    char data;
    struct Stack* next;
} stack;

stack* top = NULL;

stack* memalloc(char Data){
    stack* newNode=(stack*)malloc(sizeof(stack)); 
    if(newNode==NULL){ 
        printf("Memory Allocation Failed!\n"); 
        exit(1); 
    } 
    newNode->data=Data;
    newNode->next=NULL;
    return newNode;
}

void push(char d){ 
    stack *newNode=memalloc(d);
    if(top==NULL){
        top=newNode;
        return;
    }
    newNode->next=top;  
    top=newNode;
}


char pop(){
    if(top == NULL){
        // printf("Stack Underflow!\n");
        return -1;
    }
    stack* temp = top;
    char data = temp->data;
    top = top->next;
    free(temp);
    return data;
}


void getString(char* string){

    fgets(string, size, stdin);

    int len = strlen(string);
    if(len > 0 && string[len-1] == '\n'){
        string[len-1] = '\0';
    }

}

void checkBalancing(char* string){
    int i = 0;

    while(string[i] != '\0'){
        if(string[i] == '(' || string[i] == '[' || string[i] == '{'){
            push(string[i]);
        } 
        else if(string[i] == ')' || string[i] == ']' || string[i] == '}'){
            char bracket = pop(); 
            if ((string[i] == ')' && bracket != '(') || 
                (string[i] == ']' && bracket != '[') || 
                (string[i] == '}' && bracket != '{')) {
                printf("Unbalanced brackets!\n");
                return; 
            }
        }
        i++;
    }

    if (!(top == NULL)) {
        printf("Unbalanced brackets!\n"); 
    } else {
        printf("Brackets are balanced!\n");
    }
}


int main(){
    char string[size];
    printf("Enter an expression: \n");
    getString(string);
    
    checkBalancing(string);


    system("pause");
    return 0;
}