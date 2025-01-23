#include <stdio.h>
#include <stdlib.h>

typedef struct DLLNode{
    int data;
    struct DLLNode *prev;
    struct DLLNode *next;
}node;

node* head = NULL;
node *tail = NULL;
node* memalloc(int d){
    node *newNode=(node*)malloc(sizeof(node)); 
    if(newNode==NULL){ 
        printf("Memory allocation failed!\n"); 
        exit(1); 
    } 
    newNode->data=d;
    newNode->prev=NULL;
    newNode->next=NULL;

    return newNode;
}

void insertFront(int d){
    node* newNode = memalloc(d);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    
}

void insertEnd(int d){
    node *newNode = memalloc(d);

    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    if(tail != NULL ){

        tail->next = newNode;
        newNode->prev = tail;
        // newNode->next = NULL;
        tail = newNode;
        return;

    }

    // node* ptr = head;
    // while( ptr->link != NULL ){
    //     ptr = ptr -> link;
    // }
    // ptr->link=n;
}

void deleteFront(){

    if(head == NULL ){

        printf("No data present!\n");
        return;

    }

    head = head->next;
    free(head->prev);

    printf("\nNode at front cleared . . . \n\n");

}

void deleteEnd(){

    if(head == NULL){

        printf("No data present!\n");
        return;

    }

    tail = tail->prev;
    free(tail->next);
    tail->next = NULL;

    printf("\nNode cleared at End . . . \n\n");

}

void display(){
    if(head == NULL){
        printf("No data present!\n");
        return;
    }

    printf("\nDisplaying . . .\n\n");

    node *ptr = head;

    while(ptr != NULL){

        printf("%d\t",ptr->data);
        ptr = ptr->next;

    }
    printf("\n");
}
int main(){
    insertEnd(200);
    insertFront(100);
    insertFront(90);
    insertEnd(500);

    display();

    deleteFront();
    deleteEnd();

    display();
    
    system("pause");
}