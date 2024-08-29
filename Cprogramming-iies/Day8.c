#include <stdio.h>

int main(){
    // int a,b;
    // char o;
    // printf("enter 2 numbers: ");
    // scanf("%d%d",&a,&b);
    // if(a>=b){
    //     if(a>b){
    //         printf("%d > %d\n",a,b);
    //     }
    //     else{
    //         printf("%d == %d\n",a,b);
    //     }
    // }
    // else
    //     printf("%d < %d\n",a,b);
    // printf("Enter A : \n");
    // scanf("%d",&a);
    // printf("Enter A : \n");
    // scanf("%d",&b);
    // printf("1. Addition(+)\n2.Subtraction(-)\n3. Multiplication(*)\n");
    // printf("choose an operation : \n");
    // fflush(stdin);
    // scanf(" %c",&o);

    // switch(o){
    //     case '+':
    //         printf("%d + %d = %d\n",a,b,a+b);
    //         break;
    //     case '-':
    //         printf("%d - %d = %d\n",a,b,a-b);
    //         break;
    //     case '*':
    //         printf("%d * %d = %d\n",a,b,a*b);
    //         break;
    //     default:
    //         printf("invalid option\n");
    // }
    int a,b,c,d;
    printf("enter marks od sub1 : ");
    scanf("%d",&a);
    printf("\nenter marks od sub2 : ");
    scanf("%d",&b);
    printf("\nenter marks od sub3 : ");
    scanf("%d",&c);
    printf("\nenter marks od sub4 : ");
    scanf("%d",&d);
    int total, avg, grade;
    total=a+b+c+d;
    avg=total/4;
    grade=avg/10;
    printf("total = %d\naverge = %d\n",total,avg);
    if(a>=40&&b>=40&&c>=40&&d>=40){
        switch(grade){
            case 10:
            case 9:
                printf("grade: A\n");
                break;
            case 8:
                printf("grade: B\n");
                break;
            case 7:
                printf("grade: C\n");
                break;
            case 6:
                printf("grade: D\n");
                break;
            default:
                printf("grade: E\n");
        }
        printf("Pass\n");
    }
    else
        printf("Fail\n");
    return 0;
}