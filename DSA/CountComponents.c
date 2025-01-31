#include <stdio.h>
#include <stdlib.h>

const int size = 100;
const int v = 5;

int stack[size];
int top = -1;

void push(int vertex) {
    if (top >= size-1) {
        printf("Stack overflow\n");
        exit(1);
    }
    stack[++top] = vertex;
}

int pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack[top--];
}

typedef struct sll {
    int vertex;
    int visited;
    struct sll* next;
} node;

node* head = NULL;

node* memalloc(int vertex) {
    node* newNode = (node*)malloc(sizeof(node));

    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(2);
    }

    newNode->vertex = vertex;
    newNode->visited = 0;
    newNode->next = NULL;
    return newNode;
}

void insertFront(int vertex) {
    node* newNode = memalloc(vertex);
    if (head == NULL) {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

int is_visited(int vertex) {
    node* temp = head;
    while (temp != NULL) {
        if (temp->vertex == vertex) {
            return temp->visited;
        }
        temp = temp->next;
    }
    return 0;
}

void mark_visited(int vertex) {
    node* temp = head;
    while (temp != NULL) {
        if (temp->vertex == vertex) {
            temp->visited = 1;
            return;
        }
        temp = temp->next;
    }
}

void dfs(int adjacency_matrix[][v], int start_vertex) {
    push(start_vertex);
    insertFront(start_vertex);

    while (top != -1) {
        int current = pop();

        if (!is_visited(current)) {
            mark_visited(current);
        }

        for (int i = v - 1; i >= 0; i--) {
            if (adjacency_matrix[current][i] == 1 && !is_visited(i)) {
                insertFront(i);
                push(i);
            }
        }
    }
}

int count_components(int adjacency_matrix[][v]) {
    int component_count = 0;
    
    for (int i = 0; i < v; i++) {
        if (!is_visited(i)) {
            component_count++;
            dfs(adjacency_matrix, i);
        }
    }
    return component_count;
}

int main() {
    int adjacency_matrix[v][v] = {
        {0, 1, 0, 0, 0},
        {1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}
    };

    int components = count_components(adjacency_matrix);
    printf("Number of connected components: %d\n", components);

    system("pause");
    return 0;
}
