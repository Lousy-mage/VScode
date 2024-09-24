#include "stdio.h"
#include "string.h"
int main(){
    char stdName[3][30];
    int stdClass[3],subjects[3][3];
    
    for(int i=0;i<3;i++){
        stdClass[i]=0;
        printf("enter class: ");
        scanf("%d",&stdClass[i]);
        printf("enter name of student : ");
        scanf("%s",&stdName[i]);
        for(int j=0;j<3;j++){
            subjects[i][j]=0;
            printf("enter marks of sub %d: ",j);
            scanf("%d",&subjects[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(int i=0;i<3;i++){
        printf("class : %d\n",stdClass[i]);
        printf("\tstudent name : %s\n",stdName[i]);
        for(int j=0;j<3;j++){
            printf("\t\tsubject %d marks : %d\n",j+1,subjects[i][j]);
        }
    }
}