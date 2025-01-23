#include <stdio.h>
#include <stdlib.h>

typedef struct Node { 
    int data;
    struct Node* link; 
} node;

node *head; 


node* memalloc(int d){ 
    node *n=(node*)malloc(sizeof(node)); 
    if(n==NULL){ 
        printf("Memory allocation failed!\n"); 
        exit(1); 
    } 
    n->data=d; 
    n->link=NULL; 
    return n; 
}

void insertFront(int d){ 
    node *n=memalloc(d); 
    if(head==NULL){
        head=n;
        return;
    }
    n->link=head;  
    head=n;  
}

void insertEnd(int d){
    node* n=memalloc(d);
    if(head==NULL){
        head=n;
        return;
    }
    node* ptr=head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=n;
}

void dispData(){
    if(head==NULL){
        printf("THE LIST IS EMPTY\n");
        return;
    }
    printf("Displaying . . . .\n");
    node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
}

void deleteFront(){
    if(head==NULL){
        printf("No nodes are present!\n");
        return;
    }

    node* ptr = head;
    head = head->link;
    free(ptr);
    printf("Node deleted from front....\n");
}

void deleteEnd(){
    if(head == NULL){
        printf("No nodes are present!\n");
        return;
    }

    node* temp = head;
    node* prev = NULL;

    while(temp->link != NULL){
        prev = temp;
        temp = temp->link;
    }

    free(temp);
    prev->link = NULL;

    printf("Node from End freed...\n");
}

void search(int data){
    if(head==NULL){
        printf("The Linked List is empty!\n");
        return;
    }

    node* temp=head;
    while(temp != NULL){
        if(temp->data == data){
            printf("Data found at %p\n",temp->link);
            return;
        }
        temp=temp->link;
    }
    printf("Data is not present in the Linked List..\n");
    
}

int main(){ 
    int data;
    int op;
    do{
        system("cls");
        printf("Choose Operation:\n");
        printf("[1] insert in Front of the list\n");
        printf("[2] insert at End of the list\n");
        printf("[3] delete from Front of the list\n");
        printf("[4] delete from the End of the list\n");
        printf("[5] search data\n");
        printf("[6] display Linked List\n");
        printf("[7] exit\n");

        scanf("%d",&op);
        switch (op)
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
            printf("deleting from Front\n");
            deleteFront();
            break;

        case 4:
            printf("deleting from End...\n");
            deleteEnd();
            break;
        
        case 5:
            
            printf("Enter integer value:\n");
            scanf("%d",&data);
            search(data);
            system("pause");
            break;

        case 6:
            printf("\nDisplaying...\n");
            dispData();
            system("pause");
            break;

        default:
            // system("pause");
            return 0; 
        }
    }while(1);
}