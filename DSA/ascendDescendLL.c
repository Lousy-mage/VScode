#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void printLine() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int width;

    // Get console information
    if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {
        width = csbi.srWindow.Right - csbi.srWindow.Left + 1; // Console window width

        // Print '-' characters to fill the width
        for (int i = 0; i < width; i++) {
            putchar('-');
        }
        putchar('\n'); // Move to the next line
    } else {
        printf("Error: Unable to get console size.\n");
    }
}

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
    node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
}



void sortAscend(){
    node *ptr = head;
    int flag=1;
    while(flag){
        flag = 0;
        ptr = head;
        while(ptr->link != NULL){
            if(ptr->data > ptr->link->data){ // ptr->link may become null;
                int temp = ptr->data;
                ptr->data = ptr->link->data;
                ptr->link->data = temp;
                flag++;
            }

            ptr = ptr->link;
        }
    }
   
}

void sortDescend(){
    node *ptr = head;
    int flag=1;
    while(flag){
        flag = 0;
        ptr = head;
        while(ptr->link != NULL){
            if(ptr->data < ptr->link->data){
                int temp = ptr->data;
                ptr->data = ptr->link->data;
                ptr->link->data = temp;
                flag++;
            }

            ptr = ptr->link;
        }
    }
}

int main(){ 
    int data;
    int op;
    do{
        system("cls");
        printf("Choose Operation:\n");
        printf("[1] insert in Front of the list\n");
        printf("[2] insert at End of the list\n");
        printf("[3] sort ascending\n");
        printf("[4] sort descending\n");
        printf("[5] display data\n");
        printf("[6] exit\n");
        printLine();
        printf("\n\n\n");


        scanf("%d",&op);
        system("cls");
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
            printf("Sorting in ascending order . . .\n");
            sortAscend();
            // printf("\nSorting. . . .\n");
            system("pause");
            break;
        
        case 4:
            
            printf("Sorting in descending order . . .\n");
            sortDescend();
            // printf("\nSorting. . . .\n");
            system("pause");
            break;

        case 5:
            printf("\nDisplaying...\n");
            dispData();
            system("pause");
            break;

        case 6:
            printf("Exiting . . .\n");
            exit(1);
        default:
            printf("choose a valid option!\n");
            break; 
        }
    }while(1);
}