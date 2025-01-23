#include <stdio.h>
#include <stdlib.h>

typedef struct CircularLL {
    int data;
    struct CircularLL* next;
} node;

node* head = NULL;

node* memAlloc(int Data){
    node* newNode =(node *) malloc(sizeof(node));

    if(newNode == NULL){
        printf("Memory allocation Failed!\nNode not created!\n");
        exit(1);
    }
    newNode->data = Data;
    newNode->next = NULL;

    return newNode;
}

/*     Insertions
-------------------------------------------------------------------------------------------------
*/

void insertFront(int Data){
    node* newNode = memAlloc(Data);
    if(head == NULL){
        head = newNode;
        newNode->next = head;
        return;
    }
    node *temp = head;
    while (temp->next != head){
        temp = temp->next;
    }

    newNode->next = head;
    head = newNode;
    temp->next = head;
    
}

void insertEnd(int Data){
    node* newNode = memAlloc(Data);

    if(head == NULL){
        head = newNode;
        newNode->next = head;
        return;
    }

    node* temp = head;

    while(temp->next != head){
        temp = temp->next; 
    }

    temp->next = newNode;
    newNode->next = head;
}

/*          Deletions
------------------------------------------------------------------------------------------------------
*/


void deleteFront(){

    if(head == NULL){
        printf("The list is empty!\n");
        return;
    }

    if(head->next == head){// ie., only one node present 
        free(head);
        head = NULL;
        return;
    }

    node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }

    temp->next = head->next;
    free(head);
    head = temp->next;

}

void deleteEnd(){

    if(head == NULL){
        printf("The list is empty!\n");
        return;
    }

    if(head->next == head){// ie., only one node present 
        free(head);
        head = NULL;
        return;
    }

    node* temp = head;
    node* prev = temp;

    while(temp->next != head){
        prev = temp;
        temp = temp->next;
    }

    free(temp);
    prev->next = head;

}

/*          Displaying
-------------------------------------------------------------------------------------------------------
*/

void dispData(){
    if(head==NULL){
        printf("Cannot Display! : THE LIST IS EMPTY\n");
        return;
    }
    
    node *temp = head;
    do{

        printf("%d\t", temp->data);
        temp = temp->next;

    }while(temp != head);

    printf("\n");
}

int main(){

    insertFront(100);
    insertFront(200);
    insertFront(300);
    insertFront(400);

    insertEnd(50);
    insertEnd(60);
    insertEnd(70);
    insertEnd(80);

    deleteFront();
    deleteFront();
    deleteEnd();
    deleteEnd();

    dispData();
    system("pause");
    return 0;

}