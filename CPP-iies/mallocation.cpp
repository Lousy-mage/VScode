// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int main(){
//     int *ptr,n=5;
//     ptr = (int*)malloc(n*sizeof(int));
//     for(int i=0;i<5;i++){
//         cin>>ptr[i];
//     }
//     for(int i=0;i<5;i++){
//         cout<<*ptr;
//         ptr++;
//     }
//     delete[] ptr;
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int *p;
    int temp;
    p=new int[5];
    cout<<"enter the value"<<endl;
    for(int i=0; i<5;i++)
        cin>>p[i];
    for (int i = 0, j = 5 - 1; i < j; ++i, --j) {
        int temp = p[i];
        p[i] = p[j];
        p[j] = temp;
    }   
    for(int i=0;i<5;i++)
        cout<<"*p= "<<p[i]<<endl;
    delete[] p;
}