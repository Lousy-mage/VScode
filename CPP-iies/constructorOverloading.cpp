#include <iostream>
#include <float.h>
using namespace std;
// template <typename t>
class demo{
    int a=0;
    int b=0;
    float f1=0;
    float f2=0;
    public:
    demo(int a){
        this->a=a;
    }
    demo(int a, int b){
        this->a=a;
        this->b=b;
    }
    demo(float f1, float f2){
        this->f1=f1;
        this->f2=f2;
    }
    void show(){
        cout<<a<<" "<<b<<endl;
    }
    void showf(){
        cout<<f1<<" "<<f2<<endl;
    }
};
int main(){
    demo d(34);
    d.show();
    demo d1(12,34);
    d1.show();
    demo d3(23.4f,45.66f);
    d3.showf();
    return 0;
}