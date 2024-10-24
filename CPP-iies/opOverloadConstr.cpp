#include <iostream>
using namespace std;

class opr{
    public:
    template<typename A>
    void fun(A a,A b,A c,A d){
        cout<<a+b+c+d<<endl;
    }
    void fun(){
        cout<<"hello\n";
    }
    void fun(int a){
        cout<<a<<endl;
    }
    void fun(float a,float b,float c=25){
        cout<<a*b*c<<endl;
    }
};
int main(){
    opr op;
    op.fun(1.2,2.40,3.3,4.5);
    op.fun();
    op.fun(34);
    op.fun(12.3,45.3);
    return 0;
}
