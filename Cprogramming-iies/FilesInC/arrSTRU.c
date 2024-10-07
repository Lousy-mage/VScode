// #include <stdio.h>
// #include <string.h>
// int main(){
//     FILE *ptr;
//     char line[100];
//     ptr = fopen("/home/mage/VScode/Cprogramming-iies/FilesInC/test1.text","r");
//     if(ptr!=NULL){
//         printf("error opening file\n");
//         return 1;
//     }
//     while (fgets(line,sizeof(line),ptr)!=NULL){
//         printf("%s",line);
//     }
//     fclose(ptr);
//     return 0;
// }



#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[20];
    long int phone;
};

int main(){
    FILE *ptr;
    int n;
    printf("enter number of students: ");
    scanf("%d",&n);
    struct student s[n];
    char line[200];
    ptr = fopen("/home/mage/VScode/Cprogramming-iies/FilesInC/test1.csv","w");
    if(ptr!=NULL){

        for(int i=0; i<n; i++){
            printf("enter student name: ");
            scanf("%s",s[i].name);
            printf("enter id: ");
            scanf("%d",&s[i].id);
            printf("enter phone num: ");
            scanf("%ld",&s[i].phone);
        }
        for(int i=0; i<n; i++){
        fprintf(ptr,"%s\t%d\t%ld\n",s[i].name,s[i].id,s[i].phone);
        }
        for(int i=0; i<n; i++){
        printf("Name: %s\nId: %d\nP.no: %ld\n",s[i].name,s[i].id,s[i].phone);
        }
    }
    fclose(ptr);
/*   Read from file and print to console   */
    ptr = fopen("/home/mage/VScode/Cprogramming-iies/FilesInC/test1.csv","r");
    if(ptr!=NULL){
        while(fgets(line,sizeof(line),ptr)!=NULL){
        printf("%s\n",line);
        }
    }
    else{
        printf("file not open\n");
    }
    fclose(ptr);
    
    return 0;
}