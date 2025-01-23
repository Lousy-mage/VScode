#include <stdio.h>
#include <stdlib.h>

typedef struct Node { 
    int data;
    struct Node* next; 
} node;

node* front = NULL; 
node* rear = NULL;

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

void enQueue(int d){
    node* n=memalloc(d);
    if(rear==NULL){
        front = n;
        rear = n;
        return;
    }
    
    rear->next = n;
    rear = n;
}

int deQueue(){
    if(front==NULL){
        return -1;
    }

    int data;
    node* temp = front;
    data = temp->data;
    front = front->next;
    free(temp);
    return data;
}

void dispData(){
    if(front==NULL){
        printf("THE LIST IS EMPTY\n\n");
        return;
    }
    printf("Displaying . . . .\n");
    node *temp;
    temp=front;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("\n\n");
}



int main(){
    enQueue(10);
    enQueue(15);
    enQueue(20);
    enQueue(25);
    dispData();

    int result;
    for(int i = 0; i < 4; i++){
        result = deQueue();

        if(result == -1){
            printf("\nQueue is empty!\n\n");
        }
        else{
            printf("\n%d dequeued from Queue\n\n",result);
        }
    }
    dispData();
    system("pause");
    return 0;
}