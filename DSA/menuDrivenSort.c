#include <stdio.h>
#include <stdlib.h>
#include "sorting.c"

int isInitialized = 0;

void initArray(int arr[], int len){
    printf("\nEnter %d elements:\n> ",len);
    for(int i = 0; i < len; i++) {
        scanf("%d",&arr[i]);
    }

    isInitialized = 1;
}

void printArray(int arr[], int len){
    if(!isInitialized){
        printf("Array not initialized!\n");
        return;
    }
    printf("\nArray elements:\n");
    for(int i = 0; i < len; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    system("pause");
}

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);
    int array[size];
    int option;
    int order;

    do{
        system("cls");
        printf("Choose an option: \n");
        printf("1. Initialize array\n");
        printf("2. Sort Array\n");
        printf("3. Print Array\n");
        printf("4. Exit\n");
        printf("-----------------------------------\n\n");
        printf("> ");
        
        scanf("%d",&option);

        switch(option){
            case 1:
                initArray(array, size);
                break;
            case 2:
                if(!isInitialized){
                printf("Array not initialized!\n");
                system("pause");
                break;
                }

                system("cls");
                printf("Choose an option: \n");
                printf("1. Bubble Sort\n");
                printf("2. Selection Sort\n");
                printf("3. Insertion sort\n");
                printf("-----------------------------------\n\n");
                printf("> ");

                scanf("%d",&option);
                printf("\nSort order:\n1. ascending\n2. descending\n> ");
                
                // getchar();
                scanf("%d",order);
                switch (option){
                case 1:
                    bubbleSort(array, size, order);
                    break;
                case 2:
                    selectionSort(array, size, order);
                    break;
                case 3:
                    insertionSort(array, size, order);
                    break;
                default:
                    break;
                }

                break;

            case 3:
                printArray(array, size);
                break;
            case 4:
                exit(1);
            default:
                printf("Invalid option! choose again\n");
        }


    }while(1);

    
    printf("\n");
    system("pause");
}