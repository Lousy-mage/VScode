#include "iostream"
using namespace std;
int search(int A[],int n,int key)
{
    for(int i=0;i<n;i++)
        if(key==A[i])
            return i;
    return -1;
}

int main()
{
    int A[]={10,20,30,40,50,60,70,80,90,100,200};
    int k;
    cout<<"Enter an element "<<endl;
    cin>>k;
    int n=sizeof(A)/sizeof(A[0]);
    int index=search(A,n,k);
    //cout<<n<<endl;
    cout<<"Found at : "<<index<<endl;
    return 0;
}