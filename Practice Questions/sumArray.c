#include <stdio.h>

int main(){
    int Arr[]={12,57,89,65,37,48,90,23};
    int len = sizeof(Arr)/sizeof(Arr[0]);

    for(int i=1;i<len;i++){
        Arr[0]+=Arr[i];
    }
    printf("sum is %d\n",Arr[0]);
    return 0;
}