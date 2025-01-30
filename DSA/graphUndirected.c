#include <stdio.h>
#include <stdlib.h>

const int v=3;

void initArray(int arr[v][v]){
    int i,j;
    // int v=3;
    for(i=0; i<v; i++){
        for(j=0; j<v; j++){
            arr[i][j] = 0;
        }
    }
}

void addEdges(int arr[v][v], int i, int j){
    arr[i-1][j-1] = 1;
    arr[j-1][i-1] = 1;
}

void displayGraph(int arr[v][v]){
    int i,j;
    // int v=3;
    for(i=0; i<v; i++){
        for(j=0; j<v; j++){
            printf("%2d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

int main(){
    int adjacency_matrix[v][v];
    initArray(adjacency_matrix);

    displayGraph(adjacency_matrix);

    addEdges(adjacency_matrix,1,2);
    addEdges(adjacency_matrix,2,3);
    addEdges(adjacency_matrix,3,1);

    displayGraph(adjacency_matrix);
    
    system("pause");
    return 0;
}