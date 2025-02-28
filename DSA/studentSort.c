#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define NAME 50
#define STUDENTS 100

struct Student {
    char name[NAME];
    int rollNo;
    float marks;
};


void swapStudents(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSortByMarks(struct Student arr[], int n) {
    int i, j, minIndex;
    
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j].marks < arr[minIndex].marks) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swapStudents(&arr[i], &arr[minIndex]);
        }
    }
}


void printStudents(struct Student arr[], int n) {

    printf("\n----------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s \nRoll.no: %d \nMarks: %.2f\n", 
               arr[i].name, 
               arr[i].rollNo, 
               arr[i].marks);
        printf("----------------------------------------\n");
    }
}

int main() {
    struct Student students[STUDENTS];
    int n;
    
    printf("Enter the number of students (max %d): ", STUDENTS);
    scanf("%d", &n);
    
    getchar();
    
    printf("\nEnter student details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        
        printf("Name: ");
        fgets(students[i].name, NAME, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;
        
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        
        getchar();
    }
    
    printf("\nOriginal:");
    printStudents(students, n);
    
    selectionSortByMarks(students, n);
    

    printf("\n\nSorted by Marks (Ascending):");
    printStudents(students, n);
    
    system("pause");
}