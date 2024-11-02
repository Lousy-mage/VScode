#include <iostream>
using namespace std;

class Fib{
    private:
    int a=0;
    int b=1;
    int c;
    int n;
    public:
    Fib(int num){
        n=num;
    }
    void show(){
        for(int i=0;i<=n;i++){
            if(i==0){
                cout<<a<<" ";
            }
            else if(i==1){
                cout<<b<<" ";
            }
            else{
                c=a+b;
                a=b;
                b=c;
                cout<<c<<" ";
            }
        }
    }
};
int main(){
    Fib f(5);
    f.show();
}