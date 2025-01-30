#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 50

typedef struct Customer {
    int id;
    char name[50];
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

void enqueue(Queue* q, char* name) {
    Customer* newCust = (Customer*) malloc(sizeof(Customer));
    static int nextId = 1;
    
    newCust->id = nextId++;
    strcpy(newCust->name, name);
    newCust->next = NULL;

    if (q->rear == NULL){
        q->front = q->rear = newCust;
        }
    else {
        q->rear->next = newCust;
        q->rear = newCust;
    }

    q->count++;
    printf("Added: %s (ID: %d)\n", name, newCust->id);
}

void dequeue(Queue* q) {
    if (q->front == NULL) {
        printf("Queue empty\n");
        return;
    }

    Customer* temp = q->front;
    printf("\nServing: %s (ID: %d)\n\n", temp->name, temp->id);

    q->front = q->front->next;
    if (q->front == NULL) 
        q->rear = NULL;

    free(temp);
    q->count--;
}

void showQueue(Queue* q) {
    printf("\n");
    if (q->front == NULL) {
        printf("\nNo customers waiting\n");
        return;
    }

    printf("Waiting Customers (%d):\n", q->count);
    for (Customer* curr = q->front; curr != NULL; curr = curr->next) 
        printf("ID: %d, Name: %s\n", curr->id, curr->name);

    system("pause");
}


int main() {
    int option;
    Queue customerQueue;
    initQueue(&customerQueue);
    char name[MAX_NAME];

    do{
        printf("Choose the options: \n");
        
        printf("[1] Add Customer\n");
        printf("[2] Remove Customer\n");
        printf("[3] View Customers\n");
        printf("[0] Exit\n");
        printf("########################################\n");

        scanf("%d",&option);

        switch (option){
            case 1:
                printf("Enter Customer name:");
                getchar();

                fgets(name, MAX_NAME, stdin);

                if(strlen(name)-1 == '\n'){
                    name[strlen(name)-1] = '\0';
                }
                enqueue(&customerQueue,name);
                break;
            case 2:
                dequeue(&customerQueue);
                break;
            case 3:
                showQueue(&customerQueue);
                break;
            case 0:
                printf("\n\nExiting...\n");
                exit(1);
            default:
                printf("Invalid option!\n");
        }
    }while(option);
    // enqueue(&customerQueue, "Aromal");
    // enqueue(&customerQueue, "Aswin");
    // enqueue(&customerQueue, "Musharaf");

    // showQueue(&customerQueue);

    // dequeue(&customerQueue);
    // showQueue(&customerQueue);

    // enqueue(&customerQueue, "Christy");
    // showQueue(&customerQueue);

    system("pause");
    return 0;
}