#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("enter marks of sub1 : ");
    scanf("%d",&a);
    printf("\nenter marks of sub2 : ");
    scanf("%d",&b);
    printf("\nenter marks of sub3 : ");
    scanf("%d",&c);
    printf("\nenter marks of sub4 : ");
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