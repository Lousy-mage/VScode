#include "iostream"
using namespace std;

void sum(int a, int b)
{
    cout<<a+b<<endl;
}
void sum(float a, float b)
{
    cout<<a+b<<endl;
}
void sum(int a, int b, int c)
{
    cout<<a+b+c<<endl;
}
int main()
{
    int x=10,y=19,z=26;
    float v=1.73f,w=3.14f;
    sum(x,y);
    sum(v,w);
    sum(x,y,z);
    return 0;
}