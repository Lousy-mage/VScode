#include <stdio.h>
int main(){
    int arr[]={54,34,65,78,93,63,52,75,32,74};
    int len=sizeof(arr)/sizeof(arr[0]);

    int max1=arr[0];
    int max2=arr[1];

    if (max2>max1) {
        int temp=max1;
        max1=max2;
        max2=temp;
    }
    for (int i=2; i<len; i++) {
        if (arr[i]>max1) {
            max2=max1;
            max1=arr[i];
        } else if (arr[i]>max2 && arr[i]!=max1) {
            max2=arr[i];
        }
    }

    printf("Product of max elements: %d x %d = %d\n",max1,max2,max1*max2);
    return 0;
}
