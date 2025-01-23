#include <stdio.h>
#include <stdlib.h>

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

void dispData(){
    if(top==NULL){
        printf("THE LIST IS EMPTY\n\n");
        return;
    }
    printf("Displaying . . . .\n");
    node *temp;
    temp=top;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n\n");
}


int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    dispData();

    printf("\n\nPopping. . . \n");
    int result;
    for(int i = 0; i < 5; ++i){
        result = pop();

        if(result == -1){
            printf("\nstack is empty\n\n");
        }
        else{
            printf("\n%d popped from stack\n\n",result);
        }

        dispData();
    }
    system("pause");
    return 0;
}