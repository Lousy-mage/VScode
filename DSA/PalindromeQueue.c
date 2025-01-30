#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    char data[MAX];
    int front;
    int rear;
} Queue;

void initQueue(Queue* q) {
    q->front = q->rear = -1;
}

void enqueue(Queue* q, char c) {
    if (q->rear == MAX - 1) {
        return;
        }
    if (q->front == -1) {
        q->front = 0;
    }
    q->data[++(q->rear)] = c;
}

char dequeue(Queue* q) {
    if (q->front == -1 || q->front > q->rear) {
        return '\0';
    }
    return q->data[(q->front)++];
}

bool isPalindrome(char* str) {
    Queue q;
    initQueue(&q);
    int len = strlen(str);
    

    for (int i = 0; i < len; i++) 
        enqueue(&q, str[i]);


    for (int i = 0; i < len/2; i++) {
        if (dequeue(&q) != str[len - 1 - i]) 
            return false;
    }
    
    return true;
}

int main() {
    char str[MAX];
    printf("Enter a string: ");
    scanf("%s", str);
    
    if (isPalindrome(str))
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);
    
    system("pause");
    return 0;
}