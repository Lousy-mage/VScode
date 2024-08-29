#include <stdio.h>

int main(){
    // simple interest= p*r*t/100
    float s,p,r,t;
    printf("Enter the Principal : ");
    scanf("%f",&p);

    printf("Enter the interest rate per annum : ");
    scanf("%f",&r);

    printf("Enter the time in years : ");
    scanf("%f",&t);

    s=(p*r*t)/100;

    printf("simple interest is : %.2f\n",s);
    return 0;
}