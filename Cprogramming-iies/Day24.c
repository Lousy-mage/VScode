#include <stdio.h>
#include <string.h>
/* Array of pointers */
// int main(){
    // int a=10,b=20,c=30;
    // int *ptr[3];
    // ptr[0]=&a;
    // ptr[1]=&b;
    // ptr[2]=&c;
    // for(int i=0;i<3;i++){
        // printf("%d\n",*ptr[i]);
    // }
    // return 0;
// }

// int main(){
//     char *ptr[]= {"Aromal","Aswin","Mushu"};
//     for(int i=0;i<3;i++){
//         printf("%s\n",ptr[i]);
//     }
// }


struct stu{
    char name[30];
    int roll;
    long int phone;
};

int main(){
    // int n;
    // printf("Enter Total no.of students in class : ");
    // scanf("%d",&n);
    // struct stu class1[n];
    // for(int i=0;i<n;i++){
    //     printf("\nEnter student %d details:\n",i+1);
    //     printf("Enter Name\n");
    //     getchar();//can replace fflush by catching the 'enter' value.
    //     fgets(class1[i].name,30,stdin);
    //     printf("Enter Roll\n");
    //     scanf("%d",&class1[i].roll);
    //     printf("Enter Phone\n");
    //     scanf("%ld",&class1[i].phone);
    // }


    struct stu class1[2]={"Nihal",19,90887738,
                            "Navas",23,983647289};

    strcpy(class1[0].name,"Naaima");    
    for(int i=0;i<2;i++){
        printf("\nName : %s\n",class1[i].name);
        printf("Roll : %d\n",class1[i].roll);
        printf("Phone : %ld\n",class1[i].phone);
        printf("\n");
    }
    return 0;
}