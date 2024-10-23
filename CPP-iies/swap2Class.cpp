#include <iostream>
using namespace std;

class Swap{
    int a,b;
    public:
    Swap(int x,int y){
        a=x;
        b=y;
    }
    void sswap(){
            int c=a;
            a=b;
            b=c;
            cout<<"swapped numbers: "<<a<<" "<<b<<endl;
    }
};
int main(){
    int a,b;
    cout<<"enter two numbers\n";
    cin>>a>>b;
    Swap s(a,b);
    s.sswap();

    return 0;
}