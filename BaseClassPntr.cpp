#include "iostream"
using namespace std;

class Base
{
    public :
    void fun1(){
        cout <<"fun1 of base"<<endl;
    }
    
};
class Derived: public Base
{
    public:
    void fun2() {
        cout<<"fun2 of derived"<<endl;
    }
};

int main()
{
    Derived d;
    Base *p=&d;
    p->fun1();
    //p->fun2();   //fun2 is in derived class but pointer points to Base class //so won't execute
    //d.fun1();
    //d.fun2();

    return 0;
}