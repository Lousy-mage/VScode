#include <stdio.h>

int sumArr(int *arr,int n);

int main(){
    int n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Entered array : ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");

    int sum=sumArr(arr,n);
    printf("sum is: %d\n",sum);
    return 0;
}

int sumArr(int *arr,int n){
    for(int i=1;i<n;i++){
        arr[0]+=arr[i];
    }
    return arr[0];
}