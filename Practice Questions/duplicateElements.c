#include <stdio.h>

int main(){
    int arr[]={1,2,3,4,1,2};
    int len=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    int b[len/2];

    for(int i=0;i<len;i++){
        int isDuplicate=0;
        for(int j=i+1;j<len;j++){
            if(arr[i]==arr[j]){
                isDuplicate =1;
                break;
            }
        }
        if(isDuplicate){
            if(arr[i]!=b[count]){
                b[count]=arr[i];
                if(b[count]!=b[count-1]){
                    count++;
                }
            }
        }
    }

    for(int i=0;i<count;i++){
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;
}