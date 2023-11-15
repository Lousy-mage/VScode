#include "iostream"
using namespace std;
int division(int a, int b)
{
    if(b==0)
        throw 1;
    return a/b;
}

int main()
{   
    int a=20,b=0,c;
    try
    {  
        c=division(a,b);
        cout<<c<<endl;
    }
    catch(int c)
    {
        cout<<"Zero error....ERROR "<<c<<endl;
    }
    
  

    return 0;
}