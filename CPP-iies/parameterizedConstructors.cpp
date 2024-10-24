#include <iostream>
using namespace std;
class demo{
    int a,b;
    public:
    demo(){
        a=10;
        b=17;
    }
    demo(int a, int b){
        this->a=a;
        this->b=b;
    }
    // demo(demo &d){//this doesn't work
    // //also always pass reference
    //     demo t;
    //     t.a=d.a;
    //     t.b=d.b;
    // }
    demo (demo &d){//always pass reference with copy constructor
        a=d.a+1;
        b=d.b+1;
    }
    void show(){
        cout<<a<<" "<<b<<endl;
    }
    ~demo(){}
};
int main(){
    demo f;
    demo d(15,10);
    demo s(d);
    f.show();
    d.show();
    s.show();
    return 0;
}