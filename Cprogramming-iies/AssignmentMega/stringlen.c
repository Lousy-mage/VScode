#include <stdio.h>
int slen(char str[30]){
    int i=0,len;
    while(str[i]!='\0'){
        i++;
    }
    len=i-1;
    return len;
}

int main(){
    char str[30];
    printf("enter string: ");
    fgets(str,sizeof(str),stdin);
    printf("%s\n",str);
    int len=slen(str);
    printf("length = %d\n",len);
    return 0;
}