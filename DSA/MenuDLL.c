#include <stdio.h>
#include <stdlib.h>

typedef struct DLL{
    int data;
    struct DLL *next;
    struct DLL *prev;
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

void dllReverse(){
    if(head == NULL){
        printf("No nodes present!\n");
        return;
    }

    node *ptr = head;
    node *temp = NULL;
    while(ptr != NULL){
        temp = ptr->next;
        ptr->next = ptr->prev;
        ptr->prev = temp;

        ptr = ptr->prev;
    }
    ptr = head;
    head = tail;
    tail = ptr;
}

int main(){
    int data;
    int operation;
    do{
        system("cls");
        printf("Choose Operation:\n");
        printf("[1] insert in Front of the list\n");
        printf("[2] insert at End of the list\n");
        printf("[3] reverse the linked list\n");
        printf("[4] display Linked List\n");
        printf("[0] exit\n");

        scanf("%d",&operation);
        switch (operation)
        {
        case 1:
            
            printf("Enter integer value:\n");
            scanf("%d",&data);
            insertFront(data);
            break;
        
        case 2:
            printf("Enter integer value:\n");
            scanf("%d",&data);
            insertEnd(data);
            break;
        
        case 3:
            
            dllReverse();
            system("pause");
            break;

        case 4:
            printf("\nDisplaying...\n");
            display();
            system("pause");
            break;

        case 0:
            printf("Exiting . . .\n");
            exit(1);

        default:
            printf("Enter a valid operation!\n");
            return 0; 
        }

    }while(1);

    return 0;
}