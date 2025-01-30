#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 50

typedef struct Customer {
    int id;
    char name[MAX_NAME];
    float billAmount;
    struct Customer* next;
} Customer;

typedef struct {
    Customer* front;
    Customer* rear;
    int count;
} Queue;

void initQueue(Queue* q) {
    q->front = q->rear = NULL;
    q->count = 0;
}

void addCustomer(Queue* q, char* name, float amount) {
    static int nextId = 1;
    Customer* newCust = (Customer*) malloc(sizeof(Customer));
    
    newCust->id = nextId++;
    strcpy(newCust->name, name);
    newCust->billAmount = amount;
    newCust->next = NULL;

    if (q->rear == NULL) 
        q->front = q->rear = newCust;
    else {
        q->rear->next = newCust;
        q->rear = newCust;
    }

    q->count++;
    printf("Customer %s added (Bill: Rs %.2f)\n", name, amount);
}

void billCustomer(Queue* q) {
    if (q->front == NULL) {
        printf("No customers in queue\n");
        return;
    }

    Customer* temp = q->front;
    printf("Billing %s (ID: %d, Amount: Rs %.2f)\n", 
           temp->name, temp->id, temp->billAmount);

    q->front = q->front->next;
    if (q->front == NULL) 
        q->rear = NULL;

    free(temp);
    q->count--;
}

void displayQueue(Queue* q) {
    printf("\n");
    if (q->front == NULL) {
        printf("No customers waiting\n");
        return;
    }

    printf("Waiting Customers (%d):\n", q->count);
    for (Customer* curr = q->front; curr != NULL; curr = curr->next) 
        printf("ID: %d, Name: %s, Bill: Rs %.2f\n", 
               curr->id, curr->name, curr->billAmount);
}

int main() {
    Queue billingQueue;
    initQueue(&billingQueue);

    addCustomer(&billingQueue, "Aromal", 45.50);
    addCustomer(&billingQueue, "Aswin", 30.75);
    addCustomer(&billingQueue, "Manikandan", 55.20);

    displayQueue(&billingQueue);

    billCustomer(&billingQueue);
    displayQueue(&billingQueue);

    system("pause");

    return 0;
}