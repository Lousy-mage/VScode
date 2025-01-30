#include <stdio.h>
#include <stdlib.h>

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
    inorder(ptr->rchild);

}

void preorder(node* ptr) {
    if(ptr == NULL) return;

    printf("%d\t", ptr->data);
    preorder(ptr->lchild);
    preorder(ptr->rchild);
}

void postorder(node* ptr) {
    if(ptr == NULL) return;

    postorder(ptr->lchild);
    postorder(ptr->rchild);
    printf("%d\t", ptr->data);
}


node* find_min(node* ptr){
    while (ptr && ptr->lchild != NULL) {
        ptr = ptr->lchild;
    }
    return ptr;
}

node* deleteNode(node* currentNode, int key){

    if(currentNode == NULL){
        printf("Tree is EMpty!\n");
        return currentNode;
    }

    if(key < currentNode->data)
        currentNode->lchild = deleteNode (currentNode->lchild, key);
    else if (key > currentNode->data)
        currentNode->rchild = deleteNode (currentNode->rchild, key);
    else{
        if(currentNode->lchild == NULL && currentNode->rchild == NULL){
            free(currentNode);
            return NULL;
        }
        else if(currentNode->lchild == NULL){
            node* temp = currentNode->rchild;
            free(currentNode);
            return temp;
        }
        else if(currentNode->rchild == NULL){
            node* temp = currentNode->lchild;
            free(currentNode);
            return temp;
        }
        else{
            node* temp = find_min(currentNode->rchild);
            currentNode->data = temp->data;
            currentNode->rchild = deleteNode(currentNode->rchild, temp->data);
        }

    }
    return currentNode;

}

int main(){

    insert(5);
    insert(3);
    insert(1);
    insert(15);
    insert(23);
    insert(18);
    insert(25);
    insert(20);

    printf("inorder: ");
    inorder(root);
    printf("\n");


    deleteNode(root,23);

    printf("After delete, inorder: ");
    inorder(root);
    printf("\n");


    system("pause");
    return 0;
}