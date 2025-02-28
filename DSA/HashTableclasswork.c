#include <stdio.h>
#include <stdlib.h>

// #define size 15

typedef struct Hash {
    int key;
    int value;
    struct Hash* link;
} hash;

hash* table[100];

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

void insertFront (int index, int key, int value) {
    hash* newNode = memalloc(key, value);
    if (table[index] == NULL) {
        table[index] = newNode;
        return;
    }
    newNode->link = table[index];
    table[index] = newNode;
}

void linear_probe_insert(int indices[], int k[], int v[], int s) {
    for(int i=0; i< s; i++){
        int index = indices[i];
        while(table[index] != NULL){
            index = (index + 1) % s;
        }
        insertFront(index, k[i], v[i]);
    }
}

void display(int a[], int s) {

    for(int i =0; i < s; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

void create_keys(int k[], int s) {
    printf("Enter %d keys\n",s);
    int i=0;
    for(i=0; i< s; i++){
        scanf("%d",&k[i]);
    }
    display(k, s);
}

void create_values(int values[], int s){
    printf("Enter %d values\n",s);
    int i;
    for(i=0; i<s; i++){
        scanf("%d",&values[i]);
    }
    display(values,s);
}

void hash_function(int indices[], int k[], int s) {
    int i;
    for(i = 0 ; i<s; i++){
        indices[i]= k[i]%s;
    }
    display(indices,s);
}

void create_table(int indices[],int k[], int v[], int s){
    // linear_probe_insert(indices, k, v, s);
    int i;
    for(i =0; i< s; i++){
        int index = indices[i];
        insertFront(index, k[i], v[i]);
    }
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

int search(int key, int size) {
    int index = key % size;
    hash* current = table[index];
    
    while (current != NULL) {
        if (current->key == key) {
            return current->value;
        }
        current = current->link;
    }
    return -1;
}

void menu() {
    int option, col, s = 0;
    int *k = NULL, *values = NULL, *indices = NULL;
    int searchKey, result;
    
    do {
        printf("[1] make hash table\n[2] display hash table\n[3] search a key\n[4] exit\n");

        scanf("%d",&option);

        switch(option) {
            case 1:
                printf("Enter the count of key-value pairs: ");
                scanf("%d",&s);

                printf("Choose collision avoidance method:\n[1] chaining\n[2] linear probing\n");

                scanf("%d",&col);

                
                k = (int*)malloc(s * sizeof(int));
                values = (int*)malloc(s * sizeof(int));
                indices = (int*)malloc(s * sizeof(int));

                switch (col) {
                    case 1:
                        create_keys(k,s);
                        create_values(values, s);
                        hash_function(indices, k, s);
                        create_table(indices, k, values, s);

                        break;

                    case 2:

                        create_keys(k,s);
                        create_values(values, s);
                        hash_function(indices, k, s);
                        linear_probe_insert(indices, k, values, s);

                        break;
                }

                break;
            case 2:
                printf("Hash table:\n");
                display_tables(s);

                    break;

            case 3:

                printf("Enter key to search: ");
                scanf("%d", &searchKey);
                result = search(searchKey, s);
                if (result != -1) {
                    printf("Value: %d\n", result);
                } else {
                    printf("Key not found\n");
                }
                break;

            case 4:
                exit(1);

            default:
                    printf("invalid option\n");
                    break;

        }
    } while(1);
}

int main() {
    menu();
    system ("pause");
}