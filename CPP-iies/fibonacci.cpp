#include <iostream>
using namespace std;
int cnt=0;
class fib{
    int a=0;
    int b=1;
    int c=0;
    public:
    fib(){
        cnt++;
        if(c==1){
            cout<<a<<" ";
        }
        else if(c==2){
            cout<<b<<" ";
        }
        else{
            c=a+b;
            a=b;
            b=c;
            cout<<c<<" ";
        }

    }
};
int main(){
    fib x1,x2,x3,x4;
}