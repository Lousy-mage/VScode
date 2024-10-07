#include "stdio.h"
#include "string.h"
void revStr(char *str, int length){
    char temp;
    for(int i=0;i<=(length-1)/2;i++) {
        temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }
    
}
int main(){
    char str[30];
    printf("enter a string: ");
    fgets(str,sizeof(str),stdin);
    int length = strlen(str);
    revStr(str,length-1);
    printf("%s\n",str);
    return 0;
}