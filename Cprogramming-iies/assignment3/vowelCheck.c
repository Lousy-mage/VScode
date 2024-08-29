#include <stdio.h>

int main(){
    // odd or even
    char a;
    printf("enter an alphabet : ");
    scanf("%c",&a);
    if (a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u')
        printf("vowel\n");
    else
        printf("consonent\n");
    return 0;
}