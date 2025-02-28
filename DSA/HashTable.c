#include <stdio.h>
#include <stdlib.h>

#define size 15

typedef struct Hash {
    int key;
    int value;
    struct Hash* link;
} hash;

hash* table[size];

hash* memalloc(int key, int value) {
    hash* newNode = (hash*) malloc(sizeof(hash));
    if(newNode == NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }

    newNode->key = key;
    newNode->value = value;
    newNode->link = NULL;

    return newNode;
}

void initTable(){
    for (int i = 0; i < size; i++) {
        table[i] = NULL;
    }
}

void hash_function(hash* node){
    unsigned int index = (node->key * node->key) % size;
    printf("%u\n",index);

    if (table[index] != NULL) {
        table[index]->link = node;
    }
    else {
        table[index] = node;
    }
}

void insertPair(int key, int value){
    hash* newNode = memalloc(key, value);
    hash_function(newNode);
}

void printPair(int key) {
    unsigned int index = (key * key) % size;

    if(table[index] == NULL) {
        printf("key cannot be found!\n");
        system("pause");
        exit(1);
    }
    printf("(%d , %d)\n", table[index]->key, table[index]->value);
}

void display_tables(int s){
    for(int i =0; i < s; i++){
        printf("Index %d: ", i);
        hash* current = table[i];
        while (current != NULL){
            printf("(%d , %d) -> ", current->key, current->value);
            current = current->link;
        }
        printf("NULL\n");
    }
}

int main() {
    initTable();
    int s = 4;
    insertPair(2,45);
    insertPair(3,78);
    insertPair(6,70);
    insertPair(7,29);

    printPair(3);
    printPair(7);

    display_tables(s);
    system("pause");
}