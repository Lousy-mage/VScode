#include "stdio.h"
#include "string.h"
void upper(char str[30]){
    int len=strlen(str);
    for(int i=0;i<len;i++){
        int n = str[i];
        if(n>=97&&n<=122)
            str[i]-=32;
        else
            continue;
    }
    printf("%s\n",str);
}

void lower(char str[30]){
    int len=strlen(str);
    for(int i=0;i<len;i++){
        int n=str[i];
        if(n>=65&&n<=90)
            str[i]+=32;
        else
            continue;
    }
    printf("%s\n",str);
}

void slen(char str[30]){
    int i=0,len;
    while(str[i]!=0){
        i++;
    }
    len=i;
    printf("length is %d\n",len);
}

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

void sub(char str[30], char str1[30]) {
    int len = strlen(str);
    int len1 = strlen(str1);
    if (len >= len1) {
        int i, j;
        for (i = 0; i <= len - len1; i++) {
            for (j = 0; j < len1; j++) {
                if (str[i + j] != str1[j]) {
                    break;
            }   }
            if (j == len1) {
                printf("str1 is a substring\n");
                return;
            }   
        }
    }
    printf("str1 is not a substring\n");
}

int main(){
    char str[30]="hello peeps";
    char str1[30]="hello gooys";
    char str2[30]="peeps";
    upper(str);
    lower(str);
    slen(str);
    comp(str,str1);
    sub(str,str2);
}