#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 50

typedef struct Node {
    int data;
    struct Node* next; 
} node;

node *top;

node* memalloc(int d){ 
    node *n=(node*)malloc(sizeof(node)); 
    if(n==NULL){ 
        printf("Memory allocation failed!\n"); 
        exit(1); 
    } 
    n->data=d; 
    n->next=NULL; 
    return n; 
}

void push(int d){ 
    node *n=memalloc(d); 
    if(top==NULL){
        top=n;
        return;
    }
    n->next=top;  
    top=n;
}


int pop(){
    if(top==NULL){
        // printf("No nodes are present!\n");
        return -1;
    }
    node* temp = top;
    int data = temp->data;
    top = top->next;
    free(temp);
    return data;
}

void getString(char* string){
    
    printf("Enter expression: ");
    fgets(string, size, stdin);
    

    int len = strlen(string);
    if(len > 0 && string[len-1] == '\n'){
        string[len-1] = '\0';
    }
}

int calculate(int op1, int op2, char op){
    switch (op)
    {
    case '+':
        return op1 + op2;
    case '-':
        return op1 - op2;
    case '*':
        return op1 * op2;
    case '/':
        return op1 / op2;
    case '%':
        return op1 % op2;
    default:
        printf("Error\n");
        exit(1);
    }
}
int main(){
    char string[size];
    getString(string);
    int result=0;
    int i = 0;
    while(string[i] != '\0'){
        if(string[i] >= 48 && string[i] <= 57){
            // int temp =(int)string[i] - 48;
            push((int)string[i] - 48);
        }
        if(string[i] == '+'|| string[i] == '-'|| string[i] == '/'|| string[i] == '*' || string[i] == '%'){
            int op2 = pop();
            int op1 = pop();
            result = calculate(op1,op2,string[i]);
            push(result);
        }
        i++;
    }

    printf("The result of expression %s is: %d\n\n",string, result);
    system("pause");
    return 0;
}