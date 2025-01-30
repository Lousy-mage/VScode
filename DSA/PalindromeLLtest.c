#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct Node { 
    char data;
    struct Node* link; 
} node;

node *head; 


node* memalloc(char d){ 
    node *n=(node*)malloc(sizeof(node)); 
    if(n==NULL){ 
        printf("Memory allocation failed!\n"); 
        exit(1); 
    } 
    n->data=d; 
    n->link=NULL; 
    return n; 
}

void insertFront(char d){ 
    node *n=memalloc(d); 
    if(head==NULL){
        head=n;
        return;
    }
    n->link=head;  
    head=n;  
}

char deleteEnd(){
    if(head == NULL){
        printf("No nodes are present!\n");
        return -1;
    }

    node* temp = head;
    node* prev = NULL;

    while(temp->link != NULL){
        prev = temp;
        temp = temp->link;
    }
    char data = temp->data;
    free(temp);
    prev->link = NULL;

    return data;
}

int count = 0;

bool palindrome() {
    node* temp = head;
    while(temp != NULL) {
        count++;
        temp = temp->link;
    }
    temp = head;

    for (int i =0 ; i < count/2 ; i++) {
        if(temp->data != deleteEnd()){
            return false;
        }
    }
    return true;
}

int main(){
    insertFront('m');
    insertFront('a');
    insertFront('l');
    insertFront('a');
    insertFront('y');
    insertFront('a');
    insertFront('l');
    insertFront('a');
    insertFront('m');

    if(palindrome()){
        printf("palindrome\n");
    }
    else printf("Not palindrome\n");
    system("pause");
    return 0;
}