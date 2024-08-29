/*
Assignment 1
--------------

arithmetic operator ^
relational operator ^
assignment operator ^
logical operator ^
bitwise operator 

******** Write in assignment book *********
*/


#include <stdio.h>

int main(){
    int a,b,c;
    // a=5;b=8;
    //  printf("%.21Lf\n",(long double)b/a);
    // c=20;
    // printf("%d \n", c);
    // printf("%d\n",c++); //print c then increment
    // printf("%d\n",c);
    // printf("%d \n", c);
    // printf("%d\n",++c); // increment c then print
    // printf("%d\n",c);
    a=10;b=5;c=0;
    // printf("%d <  %d = %d\n",a,b,a<b);
    // printf("%d >  %d = %d\n",a,b,a>b);
    // printf("%d <= %d = %d\n",a,b,a<=b);
    // printf("%d >= %d = %d\n",a,b,a>=b);
    // printf("%d =  %d = %d\n",a,b,a==b);
    // printf("%d != %d = %d\n",a,b,a!=b);
    // printf("------LOGICAL AND------\n");
    // printf("%d AND  %d = %d\n",a<b,a<b,(a<b)&&(a<b));
    // printf("%d AND  %d = %d\n",a<=b,a<b,(a<=b)&&(a<b));
    // printf("%d AND  %d = %d\n",a<b,a<=b,(a<b)&&(a<=b));
    // printf("%d AND  %d = %d\n\n\n",a<=b,a<=b,(a<=b)&&(a<=b));
    // printf("------LOGICAL OR------\n");
    // printf("%d  OR  %d = %d\n",a<b,a<b,(a<b)||(a<b));
    // printf("%d  OR  %d = %d\n",a<=b,a<b,(a<=b)||(a<b));
    // printf("%d  OR  %d = %d\n",a<b,a<=b,(a<b)||(a<=b));
    // printf("%d  OR  %d = %d\n\n\n",a<=b,a<=b,(a<=b)||(a<=b));
    // printf("------LOGICAL NOT------\n");
    // printf("!%d  NOT   %d\n",a<b,!(a<b));
    // printf("!%d  NOT   %d\n",a<=b,!(a<=b));
    a+=b;
    printf("%d\n",a);
    a-=b;
    printf("%d\n",a);
    a*=b;
    printf("%d\n",a);
    a/=b;
    printf("%d\n",a);
    a%=b;
    printf("%d\n",a);

    return 0;
}