#include <stdio.h>
#include <string.h> 

void error(const char *message);
void start();
void stuDetails();
void stuMod();
void modName(int);
void modPhone(int);
void modDoB(int);
void modBlood(int);
struct dateObirth {
    int day;
    char month[4];
    int year;
};
struct student {
    char name[30];
    int roll;
    long int phone;
    struct dateObirth doB;
    char bloodGrp[3];
};
struct student students[] = {
    {"Abdullah", 1, 1000000000, {1, "Jan", 2001}, "O+"},
    {"Aisha", 2, 1000000001, {2, "Feb", 2002}, "A-"},
    {"Amina",3,100000002, {3, "Mar", 2001},"A+"}
};
int numStudents = sizeof(students) / sizeof(students[0]);

int main() {
    start();
    return 0;
}

void start() {
top:
    printf("What would you like to do?\n");
    printf("[1] View student details\n");
    printf("[2] Modify student details\n");
    printf("[3] Exit\n");

    char option;
    scanf(" %c", &option);

    if (option >= '1' && option <= '3') {
        switch (option) {
            case '1':
                stuDetails();
                break;
            case '2':
                stuMod();
                break;
            case '3':
                return;
        }
    } else {
        error("Invalid option, choose again!\n");
        goto top;
    }
}

void error(const char *message) {
    printf("%s", message);
}

void stuDetails() {
    int id;
    printf("Enter student ID: ");
    scanf("%d", &id);

    for (int i = 0; i < numStudents; i++) {
        if (id == students[i].roll) {
            printf("Name: %s\n", students[i].name);
            printf("Roll.no: %d\n", students[i].roll);
            printf("Phone.no: %ld\n", students[i].phone);
            printf("DoB: %d-%s-%d\n", students[i].doB.day, students[i].doB.month, students[i].doB.year);
            printf("Blood Group: %s\n", students[i].bloodGrp);
            start();
        }
    }
    error("Student not found.\n");
    start();
}

void stuMod() {
    printf("Enter student id\n");
    int id;
    scanf("%d",&id);

    printf("What would you like to modify?\n");
    printf("[1]name\n");
    printf("[2]phone\n");
    printf("[3]DoB\n");
    printf("[4]blood Group\n");
    int option;
    scanf("%d",&option);
    switch(option){
        case 1:
            modName(id);
            break;
        case 2:
            modPhone(id);
            break;
        case 3:
            modDoB(id);
            break;
        case 4:
            // modBlood(id);
            break;
    }
    start();
}
void modName(int id){
    int index;
    char newName[30];
    for(int i = 0; i < numStudents; i++){
        if (id == students[i].roll)
            index=i;
            break;
    }
    printf("Student name: %s\n",students[index].name);
    printf("enter new name: ");
    scanf("%s",&newName);
    strcpy(students[index].name,newName);
    printf("new name: %s\n",students[index].name);
}
void modPhone(int id){
    int index;
    long int newPhone;
    for(int i = 0; i < numStudents; i++){
        if (id == students[i].roll)
            index=i;
            break;
    }
    printf("Student phone: %ld\n",students[index].phone);
    printf("enter new phone no: ");
    scanf("%ld",&newPhone);
    students[index].phone=newPhone;
    printf("new name: %ld\n",students[index].phone);
}
void modDoB(int id){
    int index;
    for(int i = 0; i < numStudents; i++){
        if (id == students[i].roll)
            index=i;
            break;
    }
    printf("Student DoB: %d-%s-%d\n",students[index].doB.day, students[index].doB.month, students[index].doB.year);
    printf("enter new DoB: ");
    scanf("%d-%s-%d",&students[index].doB.day,&students[index].doB.month,&students[index].doB.year);
    printf("new DoB: %d-%s-%d\n",students[index].doB.day, students[index].doB.month, students[index].doB.year);
}
void modBlood(int id){
    int index;
    char newBlood[3];
    for(int i = 0; i < numStudents; i++){
        if (id == students[i].roll)
            index=i;
            break;
    }
    printf("Student Blood Group: %s\n",students[index].bloodGrp);
    printf("enter new Blood Group: ");
    scanf("%s",&newBlood);
    strcpy(students[index].bloodGrp,newBlood);
    printf("new name: %s\n",students[index].bloodGrp);
}