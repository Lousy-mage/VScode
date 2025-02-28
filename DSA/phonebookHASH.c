#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 15

typedef struct Hash {
    char name[50];
    char phone[15];
    struct Hash* link;
} hash;

hash* table[TABLE_SIZE] = {NULL};


int hash_function(char* name) {
    int index = 0;
    for (int i = 0; name[i]; i++) {
        index += name[i];
    }
    return index % TABLE_SIZE;
}


hash* memalloc(char* name, char* phone) {
    hash* newNode = (hash*)malloc(sizeof(hash));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    strcpy(newNode->name, name);
    strcpy(newNode->phone, phone);
    newNode->link = NULL;
    return newNode;
}


void insertFront(int index, char* name, char* phone) {
    hash* newNode = memalloc(name, phone);
    if (table[index] == NULL) {
        table[index] = newNode;
        return;
    }
    newNode->link = table[index];
    table[index] = newNode;
}


char* search(char* name, int size) {
    int index = hash_function(name);
    hash* current = table[index];
    while (current != NULL) {
        if (strcmp(current->name, name) == 0) {
            return current->phone;
        }
        current = current->link;
    }
    return NULL;
}


void display_tables(int size) {
    for (int i = 0; i < size; i++) {
        printf("Index %d: ", i);
        hash* current = table[i];
        while (current != NULL) {
            printf("(%s , %s) -> ", current->name, current->phone);
            current = current->link;
        }
        printf("NULL\n");
    }
}


void free_memory() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        hash* current = table[i];
        while (current != NULL) {
            hash* temp = current;
            current = current->link;
            free(temp);
        }
        table[i] = NULL;
    }
}


void menu() {
    int option;
    char name[50], phone[15];

    do {
        printf("\n[1] Add Contact\n[2] Display Contacts\n[3] Search Contact\n[4] Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);
        getchar();

        switch(option) {
            case 1: {
                printf("Name: ");
                fgets(name, 50, stdin);
                name[strcspn(name, "\n")] = 0;
                printf("Phone: ");
                fgets(phone, 15, stdin);
                phone[strcspn(phone, "\n")] = 0;
                
                int index = hash_function(name);
                insertFront(index, name, phone);
                break;
            }

            case 2:
                display_tables(TABLE_SIZE);
                break;

            case 3: {
                printf("Enter name to search: ");
                fgets(name, 50, stdin);
                name[strcspn(name, "\n")] = 0;
                
                char* result = search(name, TABLE_SIZE);
                if (result) {
                    printf("Phone: %s\n", result);
                } else {
                    printf("Contact not found\n");
                }
                break;
            }

            case 4:
                free_memory();
                exit(0);

            default:
                printf("Invalid option\n");
                break;
        }
    } while(1);
}

int main() {
    menu();
    return 0;
}
