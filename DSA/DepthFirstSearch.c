#include <stdio.h>
#include <stdlib.h>

const int vertices = 3;
const int size = 9;

void initAMatrix(int arr[vertices][vertices]){
    int i,j;
    // int vertices=3;
    for(i=0; i<vertices; i++){
        for(j=0; j<vertices; j++){
            arr[i][j] = 0;
        }
    }
}

void addEdges(int arr[vertices][vertices], int i, int j){
    arr[i][j] = 1;
    arr[j][i] = 1;
}

void displayGraph(int arr[vertices][vertices]){
    int i,j;
    // int vertices=3;
    for(i=0; i<vertices; i++){
        for(j=0; j<vertices; j++){
            printf("%2d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

int Visited[vertices];
int nonVisited[size];
int top = -1;

void push(int data){
    if(top == size-1){
        printf("Stack full");
        return;
    }

    nonVisited[++top] = data;
}

int pop() {
    if(top == -1){
        printf("stack underflow!\n");
        return -1;
    }

    int temp = arr[top];
    --top;
    return temp;
}

int isPresent(int vertex){
    for(int i=0; i<vertices; i++){
        if
    }
}

void DFS(int adjacency[vertices][vertices], int start_vertex){
    push(start_vertex);
    
    int i=j=k=0;

    while(i < vertices+1){
        
        Visited[j] = pop();
        for(k=0; k<vertices; k++){
            if(adjacency[j][k] == 1){
                push(k);
                int temp = pop();
                if(isPresent(temp)){
                    Visited[++j]
                }
            }
        }
        i++;
    }
}


int main(){
    int adjacency_matrix[vertices][vertices];
    initAMatrix(adjacency_matrix);

    displayGraph(adjacency_matrix);

    addEdges(adjacency_matrix,0,1);
    addEdges(adjacency_matrix,1,2);

    displayGraph(adjacency_matrix);
    
    system("pause");
}