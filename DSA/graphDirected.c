#include <stdio.h>
#include <stdlib.h>

const int v = 4;

void initArray(int arr[v][v]) {
    int i, j;

    for (i = 0; i < v; i++) {
        for ( j =0; j<v; j++) {
            arr[i][j] = 0;
        }
    }
}

void addEdges(int arr[v][v], int i, int j) {
    arr[i][j] = 1;
}

void displayGraph(int arr[v][v]) {
    int i, j;
    printf("Adjacency Matrix:\n");

    for(i = 0; i < v; i++) {
        for(j = 0; j < v; j++) {
            printf("%2d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

int main(){
    int adjacencyMatrix[v][v];
    initArray(adjacencyMatrix);

    addEdges(adjacencyMatrix,0,1);
    addEdges(adjacencyMatrix,0,2);
    addEdges(adjacencyMatrix,0,3);
    addEdges(adjacencyMatrix,1,2);
    addEdges(adjacencyMatrix,2,3);

    displayGraph(adjacencyMatrix);

    system ("pause");
}