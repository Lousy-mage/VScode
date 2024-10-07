#include <stdio.h>
#include <string.h>
struct student{
    int id;
    char name[30];
    long int phone;
}stu;
void getStudent(){
    FILE *ptr;
    ptr=fopen("/home/mage/VScode/Cprogramming-iies/FilesInC/students.text","w");
    if(ptr != NULL ){
        printf("file opened\n");
        printf("Enter student details\n");
        printf("ID: ");
        fscanf(ptr,"%d",&stu.id);
        printf("Name: ");
        getchar();
        fgets(stu.name,30,stdin);
        printf("Phone: ");
        scanf("%ld",&stu.phone);
    }
    else{
        printf("file not opened\n");
        return;
    }
    fclose(ptr);
    printf("file closed\n");
}
// void printStudent(){
//     FILE *ptr;
//     ptr=fopen("/home/mage/VScode/Cprogramming-iies/FilesInC/students.text","r");
//     if(ptr != NULL ){
//         printf("file opened\n");
//         printf("\n**************\n");
//         printf("Student details\n");
//         fprintf(ptr,"ID: %d\n",stu.id);
//         // printf(ptr,"Name: %s",stu.name);
//         // printf(ptr,"Phone: %ld\n",stu.phone);
//     }
//     else{
//         printf("file not opened\n");
//         return;
//     }
//     fclose(ptr);
//     printf("file closed\n");

// }
int main(){
    getStudent();
    // printStudent();
    return 0;
}