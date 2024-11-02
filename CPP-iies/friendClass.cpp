#include <iostream>
using namespace std;

class demo{
    public:
    int a=10;
    void fun(){
        cout<<"hii"<<endl;
    }
    friend class demoo;
};

class demoo{
    public:
    void aa(){
        demo d;
        cout<<"hello"<<endl;
        d.fun();
    }
};

int main(){
    demoo de;
    de.aa();
    return 0;
}