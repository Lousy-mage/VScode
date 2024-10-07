#include <stdio.h>
int minArr(int *arr,int len);
int maxArr(int *arr,int len);
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

    int min =minArr(arr,n);
    int max =maxArr(arr,n);
    printf("%d is the minimum element\n",min);
    printf("%d is the maximum element\n",max);
    return 0;
}
int minArr(int *arr, int len){
    for(int i=0;i<len;i++){
        if(arr[0]>arr[i]){
            arr[0]=arr[i];
        }
    }
    return arr[0];
}
int maxArr(int *arr, int len){
    for(int i=0;i<len;i++){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    return arr[0];
}