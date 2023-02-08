#include "iostream"
using namespace std;

int max(int x,int y, int z)
{
    if (x>y && x>z) return x;
    else if (y>z) return y;
    else return z;
}

int main()
{
    int a=100,b=35,c=20,r;
    r=max(a,b,c);
    cout<<r<<" is the greatest"<<endl;
    return 0;
}