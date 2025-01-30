/*
    check if a binary tree is a binary search tree
    no duplicates
    inorder traversal returns ascending data
*/

#include <stdio.h>
#include <stdlib.h>

int arr[100];
int n=0;
typedef struct Node{
    int data;
    struct Node* lchild;
    struct Node* rchild;
} node;

node* root = NULL;

node *memalloc(int d){
    node *newNode=(node*)malloc(sizeof(node)); 
    if(newNode==NULL){ 
        printf("Memory allocation failed!\n"); 
        exit(1); 
    } 
    newNode->data=d; 
    newNode->lchild=NULL;
    newNode->rchild=NULL; 
    return newNode;
}

void insert(int element){
    
    node* newNode = memalloc(element);
    if(root == NULL){
        root = newNode;
        return;
    }

    node* temp = root;
    node* parent = NULL;
    while(temp != NULL){
        parent=temp;
        if(element > temp->data)        temp = temp->rchild;
        else if(element < temp->data)   temp = temp->lchild;
        else{
            printf("duplicates not allowed\n");
            free(newNode);
            return;
        }
    }

    if(element > parent->data) 
        parent->rchild = newNode;
    else                        
        parent->lchild = newNode;
}

void inorder(node* ptr) {

    if(ptr == NULL) return;

    inorder(ptr->lchild);
    printf("%d\t", ptr->data);
    arr[n] = ptr->data;
    n++;
    inorder(ptr->rchild);

}

void checkBST(){
    // int len = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(i=0 ; i < n-1; i++){
        if(arr[i] >= arr[i+1]){
            printf("Not Binary search tree\n");
            return;
        }
    }
    printf("Given Tree is Binary Search Tree\n");
}

void kSmall(int d){
    // int len = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(i=0 ; i < n-1; i++){
        if(i==d-1){
            printf("%dth smallest element is %d\n",d,arr[i]);
            return;
        }
    }

}

int main(){

    insert(5);
    insert(3);
    insert(1);
    insert(15);

    printf("inorder: ");
    inorder(root);
    printf("\n");

    checkBST();

    kSmall(3);
    
    system("pause");
    return 0;
}