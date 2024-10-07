#include <stdio.h>
#include <string.h>
void comp(char str[30],char str1[30]){
    int com=0;
    int len=strlen(str),len1=strlen(str1);
    if(len==len1){
        for(int i=0;i<len;i++){
            com+=str[i]-str1[i];
        }
        if(com==0)
            printf("the strings are same\n");
        else
            printf("the strings are not same\n");
    }
    else
        printf("the two strings are not same\n");
}

int main(){
    char str1[30];
    printf("Enter a string: ");
    fgets(str1,sizeof(str1),stdin);

    char str2[30];
    printf("Enter a string: ");
    fgets(str2,sizeof(str2),stdin);

    comp(str1,str2);
    

    return 0;
}