#include "stdio.h"
#include <string.h>
#include "unistd.h"
int main(){
    char a[20]="BRUHgetSomeSleep",b[20]="BRUH";
    printf("%s\n",strstr(a,b));
    // printf("enter your first name: ");
    // fgets(a,sizeof(a),stdin);
    // printf("enter your first name: ");
    // fgets(a,sizeof(a),stdin);
    // strupr(a);
    // printf("%s\n",a);
    // printf("%d\n",sizeof(a));
    // for(int i=0;i<strlen(a);i++){
    //     printf("%c\n",a[i]);
    // }
    // scanf("%s",&a);
    // scanf("%s",&a[strlen(a)]);
    // scanf("%s",&a[strlen(a)]);
    // printf("%s\n",a);
    if(strstr(a,b)){
        printf("sub\n");
    }
    else
        printf("not sub\n");

    // printf("\awelcome\b\b\bto iies\n");
    // for(int i=1;i<=100;i++){
    //     printf("%d\r",i);
    //     sleep(1);
    // }

}