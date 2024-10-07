#include <stdio.h>
int main(){
    int n,t,i,j,num;
    printf("input : ");
    scanf("%d",&n);
    t=n+1;
    num=1;
    for (i=1;i<=n;i++){
        for(j=i; j<=n; j++){
            
            if (j==i)
                printf("%4d",i);
            else{
                num=num+t;
                printf("%4d",num);
            }
            // printf("   ");
            t--;
        }
        printf("\n");
        t=n+1;
        num=i+1;
    }
    return 0;
}