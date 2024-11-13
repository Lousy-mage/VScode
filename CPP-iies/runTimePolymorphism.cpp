// #include <iostream>
// using namespace std;

// class dem1{
//     public:
//     virtual void fun(){
//         cout<<"hello world\n";
//     }
// };
// class dem2: public dem1{
//     public:
//     void fun(){
//         cout<<"Hello nihal\n";
//     }
// };
// class dem3: public dem2{
//     public:
//     void fun(){
//         cout<<"Hello all\n";
//     }
// };

// int main(){
//     dem1 a;
//     dem2 b;
//     dem3 c;
//     dem1 *d;
//     d=&a;
//         d->fun();
//     d=&b;
//         d->fun();
//     d=&c;
//         d->fun();
//     return 0;
// }

#include <iostream>
using namespace std;

class Numbers{
    
    public:
    int a=12;
    int b=5;
    // Numbers(int a, int b){
    //     this->a=a;
    //     this->b=b;
    // }
    virtual void sum(){
        cout<<"sum= "<<a+b<<endl;
    }
};
class Number: public Numbers{
    public:
    void sum(){
        cout<<"product= "<<a*b<<endl;
    }
};
int main(){
    Numbers n;
    Number x;
    Numbers *y;
    y=&n;
    y->sum();
    y=&x;
    y->sum();
    return 0;
}