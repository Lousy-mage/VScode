#include <stdio.h>
#include <stdlib.h>

typedef struct CLL{
    int data;
    struct CLL* next;
    struct CLL* prev;
}node;

node* head = NULL;
node* tail = NULL;

node* memalloc(int Data){
    node* newNode = (node*) malloc(sizeof(node));
    if (newNode == NULL){
        printf("Memory allocation failed!\nNode not created!\n");
        exit(1);
    }

    newNode->data = Data;
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;
}

/*
    insertion
    ---------------------------------------------------------------------------------------------------------
*/

void insertFront(int Data){
    node* newNode = memalloc(Data);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
        return;
    }

    newNode->next = head;
    newNode->prev = tail->next;
    tail->next = newNode;
    head = newNode;

}

void insertEnd(int Data){
    node* newNode = memalloc(Data);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
        return;
    }

    newNode->prev = tail;
    newNode->next = head;
    tail->next = newNode;
    head->prev = newNode;
    tail = newNode;

}

/*
    Deletion
    ---------------------------------------------------------------------------------------------------------
*/

void deleteFront(){
    if(head == NULL){
        printf("Linked List is empty!\n");
        return;
    }

    if(head->next == head){
        free(head);
        head = NULL;
        tail = NULL;
        return;
    }

    node* temp = head->next;
    temp->prev = tail;
    tail->next = temp;
    free(head);
    head = temp;
}


void deleteEnd(){
    if(head == NULL){
        printf("Linked List is empty!\n");
        return;
    }

    if(head->next == head){
        free(head);
        head = NULL;
        tail = NULL;
        return;
    }

    node* temp = tail->prev;
    temp->next = head;
    head->prev = temp;
    free(tail);
    tail = temp;
}


/*
    Display
    ---------------------------------------------------------------------------------------------------------
*/

void dispData(){

    if(head == NULL){
        printf("Linked List empty!\n");
        return;
    }

    node* temp = head;

    printf("List data: ");
    do{
        printf("%d ",temp->data);
        temp = temp->next;
    }while(temp != head);
    printf("\n");
}


int main(){
    printf("Before entering data\n");
    dispData();
    insertFront(100);
    insertFront(200);
    printf("\n\ninserting at front. . . \n");
    dispData();

    insertEnd(90);
    insertEnd(80);
    printf("\n\ninserting at end....\n");
    dispData();

    deleteFront();
    printf("\n\nDeleting from front. . .\n");
    dispData();

    deleteEnd();
    printf("\n\nDeleting from end. . .\n");
    dispData();


    printf("\nsize of tail is %d\n",sizeof(tail));
    system("pause");
    return 0;
}