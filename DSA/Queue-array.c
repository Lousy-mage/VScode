#include <stdio.h>
#include <stdlib.h>

#define size 5

int Queue[size];
int rear = -1;
int front = 0;

void enqueue(int data){
    if(rear == size-1){
        printf("the queue is full!\n");
        return;
    }
    
    ++rear;
    Queue[rear] = data;
}

int dequeue(){
    if(rear < front){
        return -1;
    }

    int temp = Queue[front];
    ++front;
    return temp;

}

void display(){
    if(rear < front){
        printf("\nThe queue is empty\n");
        return;
    }

    int i;
    for(i = front; i <= rear; ++i){
        printf("%d\t",Queue[i]);
    }
    printf("\n\n");
}

int main(){
    dequeue();

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    // enqueue(1);
    printf("Before DQ:\n");
    display();

    
    if(q == -1){
        printf("The queue is empty\n");
    }
    else{
        printf("%d dequeued from front\n",q);
    }
    
    printf("After DQ:\n");
    display();
    system("pause");
    return 0;
}