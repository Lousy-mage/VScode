#include <iostream>
using namespace std;

int main(){
    int arr[]={23, 45, 68, 90,65,43};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len;i++)
        arr[0]+=arr[i];
    cout<<"sum= "<<arr[0]<<endl;
}