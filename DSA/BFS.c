#include <stdio.h>
#include <stdlib.h>

#define V 5


typedef struct QueueNode {
    int data;
    struct QueueNode* next;
} QueueNode;

QueueNode* front = NULL;
QueueNode* rear = NULL;


QueueNode* allocateQueueNode(int data) {
    QueueNode* node = (QueueNode*)malloc(sizeof(QueueNode));
    if (node == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    node->data = data;
    node->next = NULL;
    return node;
}


void enqueue(int data) {
    QueueNode* newNode = allocateQueueNode(data);
    if (rear == NULL) {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}


int dequeue() {
    if (front == NULL) return -1;
    
    int data = front->data;
    QueueNode* temp = front;
    front = front->next;

    if (front == NULL) rear = NULL;

    free(temp);
    return data;
}


typedef struct ListNode {
    int vertex;
    int visited;
    struct ListNode* next;
} ListNode;

ListNode* head = NULL;


ListNode* allocateListNode(int vertex) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->vertex = vertex;
    newNode->visited = 0;
    newNode->next = NULL;
    return newNode;
}


void insertVertex(int vertex) {
    ListNode* newNode = allocateListNode(vertex);
    newNode->next = head;
    head = newNode;
}


int isVisited(int vertex) {
    ListNode* temp = head;
    while (temp != NULL) {
        if (temp->vertex == vertex) return temp->visited;
        temp = temp->next;
    }
    return 0;
}


void markVisited(int vertex) {
    ListNode* temp = head;
    while (temp != NULL) {
        if (temp->vertex == vertex) {
            temp->visited = 1;
            return;
        }
        temp = temp->next;
    }
}


void bfsTraversal(int adjacencyMatrix[][V], int startVertex) {
    enqueue(startVertex);
    insertVertex(startVertex);

    while (front != NULL) {
        int current = dequeue();
        
        if (!isVisited(current)) {
            printf("%d ", current);
            markVisited(current);
        }

        for (int i = 0; i < V; i++) {
            if (adjacencyMatrix[current][i] == 1 && !isVisited(i)) {
                insertVertex(i);
                enqueue(i);
            }
        }
    }
}


int main() {
    int adjacencyMatrix[V][V] = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 1},
        {1, 1, 0, 0, 1},
        {0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0}
    };

    printf("BFS Traversal starting from vertex 0:\n");
    bfsTraversal(adjacencyMatrix, 0);
    printf("\n");

    system("pause");
    return 0;
}
