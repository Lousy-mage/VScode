#include <stdio.h>
void check(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        printf("%c is a vowel\n",c);
    }
    else
        printf("%c is a consonent\n",c);
}
int main(){
    printf("enter a character\n");
    char ch;
    scanf("%c",&ch);
    check(ch);
    return 0;
}