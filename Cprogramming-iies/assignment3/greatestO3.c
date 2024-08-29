#include <stdio.h>

int main(){
    // greatest of 3
    int a,b,c;
    printf("enter 3 numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b){
        if (a>c)
            printf("%d is the greatest\n",a);
        else
            printf("%d is the greatest\n",c);
    }
    else if (b>a){
        if(b>c)
            printf("%d is the greates\n",b);
        else
            printf("%d is the greates\n",c);
    }
    else
        printf("%d is the greates\n",c);

    return 0;
}