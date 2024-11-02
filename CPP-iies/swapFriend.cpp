#include <iostream>
using namespace std;

class demo{
    public:
    int a=10;
    int b=20;
    demo(int a,int b){
        this->a=a;
        this->b=b;
    }
    friend void swap(demo);
};
void swap(demo d){
    int temp=a;
    a=b;
    b=temp;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
}
int main(){
    demo d1(20,30);
    swap(d1);
    return 0;
}