#include "stdio.h"
int main(){
    printf("how many elements? ");
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)
        scanf("%d",&a[i]);
    for(int i=0;i<n;++i)
        printf("element %d : %d\n",i,a[i]);
    // for(int i=0;i<5;++i)
    //     printf("%d\n",i[a+1]);

}