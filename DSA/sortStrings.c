#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 50

void insertionSortStrings(char arr[][MAX_LENGTH], int n) {
    int i, j;
    char key[MAX_LENGTH];
    
    for (i = 1; i < n; i++) {

        strcpy(key, arr[i]);
        j = i - 1;
        
        while (j >= 0 && strcmp(arr[j], key) > 0) {
            strcpy(arr[j + 1], arr[j]);
            j = j - 1;
        }
        strcpy(arr[j + 1], key);
    }
}

void printStrings(char arr[][MAX_LENGTH], int n) {
    printf("\nSorted strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    char strings[MAX_STRINGS][MAX_LENGTH];
    int n;
    

    printf("Enter the number of strings: ");
    scanf("%d", &n);
    
    while (getchar() != '\n');
    
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        printf("String %d: ", i + 1);
        fgets(strings[i], MAX_LENGTH, stdin);
        
        int len = strlen(strings[i]);
        if (strings[i][len-1] == '\n') {
            strings[i][len-1] = '\0';
        }
    }
    
    printf("\nOriginal strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }
    
    insertionSortStrings(strings, n);
    
    printStrings(strings, n);
    
    
    getchar();
}