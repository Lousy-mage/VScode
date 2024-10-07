#include <stdio.h>
void revArr(int *arr,int len);
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

    revArr(arr,n);
    return 0;
}

void revArr(int *arr,int len){
    int temp;
    for(int i=0;i<(len-1)/2;i++){
        temp=arr[i];
        arr[i]= arr[len-1-i];
        arr[len-1-i]=temp;
    }
    printf("Reversed array : ");
    for(int i=0;i<len;i++)
        printf("%d ",arr[i]);
    printf("\n");
}