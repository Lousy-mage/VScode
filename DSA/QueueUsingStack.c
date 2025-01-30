#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    int data;
    struct Stack* next;
} st1, st2;

st1* top1 = NULL;
st2* top2 = NULL;

st1* memalloc1(int Data) {
    st1* newNode = (st1*)malloc(sizeof(st1)); 
    if (newNode == NULL) { 
        printf("Memory Allocation Failed!\n"); 
        exit(1); 
    } 
    newNode->data = Data;
    newNode->next = NULL;
    return newNode;
}

st2* memalloc2(int Data) {
    st2* newNode = (st2*)malloc(sizeof(st2)); 
    if (newNode == NULL) { 
        printf("Memory Allocation Failed!\n"); 
        exit(1); 
    } 
    newNode->data = Data;
    newNode->next = NULL;
    return newNode;
}

void push(int d, int st) {
    if (st == 1) {
        st1 *newNode = memalloc1(d);
        newNode->next = top1;  
        top1 = newNode;
    } else {
        st2 *newNode = memalloc2(d);
        newNode->next = top2;  
        top2 = newNode;
    }
}

int pop(int st) {
    if (st == 1) {
        if (top1 == NULL) {
            printf("Stack Underflow! (Stack 1)\n");
            return -1;
        }
        st1* temp = top1;
        int data = temp->data;
        top1 = top1->next;
        free(temp);
        return data;
    } else {
        if (top2 == NULL) {
            printf("Stack Underflow! (Stack 2)\n");
            return -1;
        }
        st2* temp = top2;
        int data = temp->data;
        top2 = top2->next;
        free(temp);
        return data;
    }
}

void enQueue(int data) {
    push(data, 1);
}

int deQueue() {

    if (top2 != NULL) {
        return pop(2);
    }
    
    if (top1 == NULL) {
        printf("Queue Empty!\n");
        return -1;
    }
    
    while (top1 != NULL) {
        push(pop(1), 2);
    }
    
    return pop(2);
}

int main() {
    enQueue(10);
    // enQueue(20);
    printf("deQueued: %d\n", deQueue());
    // enQueue(39);
    printf("deQueued: %d\n", deQueue());
    // printf("deQueued: %d\n", deQueue());
    // enQueue(25);
    // enQueue(35);
    // enQueue(45);
    system("pause");
    return 0;
}