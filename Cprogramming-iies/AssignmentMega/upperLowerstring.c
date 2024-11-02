#include <stdio.h>
#include <string.h>

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
int main(){
    char str1[30];
    printf("Enter a string: ");
    fgets(str1,sizeof(str1),stdin);
    upper(str1);
    lower(str1);
    return 0;
}
