#include <stdio.h>

int main(){
    // Airthmetic operators
    // + - / * %

    int a=20,b=30;
    printf("------Arithmetic operations------\n");

    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%.2f / %.2f = %.2f\n",(float)a,(float)b,(float)a/b);
    printf("%d %% %d = %d\n\n\n",a,b,a%b);


    // Relational operator
    // < <= > >= !=
    printf("------Relational operations------\n");

    printf("%d <  %d = %d\n",a,b,a<b);
    printf("%d >  %d = %d\n",a,b,a>b);
    printf("%d <= %d = %d\n",a,b,a<=b);
    printf("%d >= %d = %d\n",a,b,a>=b);
    printf("%d == %d = %d\n",a,b,a==b);
    printf("%d != %d = %d\n\n\n",a,b,a!=b);

    // Logical operations
    // && || ^ !     
    printf("------Logical operations------\n\n\n");
    
    printf("------LOGICAL AND------\n");
    printf("%d AND  %d = %d\n",0,0,0&&0);
    printf("%d AND  %d = %d\n",0,1,0&&1);
    printf("%d AND  %d = %d\n",1,0,1&&0);
    printf("%d AND  %d = %d\n\n\n",1,1,1&&1);
    printf("------LOGICAL OR------\n");
    printf("%d  OR  %d = %d\n",0,0,0||0);
    printf("%d  OR  %d = %d\n",0,1,0||1);
    printf("%d  OR  %d = %d\n",1,0,1||0);
    printf("%d  OR  %d = %d\n\n\n",1,1,1||1);   
    printf("------LOGICAL NOT------\n");
    printf("!%d  NOT   %d\n",0,!0);
    printf("!%d  NOT   %d\n",1,!1);

    //Assignment operators
    printf("------Assignment operations------\n");

    a+=b;
    printf("a+=b--> %d\n",a);
    a-=b;
    printf("a-=b--> %d\n",a);
    a*=b;
    printf("a*=b--> %d\n",a);
    a/=b;
    printf("a/=b--> %d\n",a);
    a%=b;
    printf("a%=b--> %d\n\n\n",a);

    //Bitwise operators

    printf("------Bitwise operations------\n");

    printf("%d <<  %d = %d\n",a,b,a<<b);
    printf("%d >>  %d = %d\n",a,b,a>>b);
    printf("%d &  %d = %d\n",a,b,a&b);
    printf("%d | %d = %d\n",a,b,a|b);
    printf("%d ^ %d = %d\n",a,b,a^b);
    printf("~ %d = %d\n",a,~a);


    return 0;
}