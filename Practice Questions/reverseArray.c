#include <stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<(len/2);i++){
        int temp=arr[i];
        arr[i]=arr[len-1-i];
        arr[len-1-i]=temp;
    }
    printf(" the reversed array is:\n");
    for(int i=0; i<len;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}