// #include <iostream>
// using namespace std;

// class base1{
//     public:
//     int a=10;
//     void fun(){
//         cout<<a<<endl;
//     }
// };
// class base2{
//     public:
//     int b=20;
//     void fun(){
//         cout<<b<<endl;
//     }
// };
// class sub:public base1, public base2{
//     public:
//     void fun(){
//         cout<<a<<" "<<b<<endl;
//     }
// };
// int main(){
//     sub s;
//     s.fun();
//     return 0;
// }

#include <iostream>
using namespace std;

class Mother{
    public:
    string eye="brown";
    void show(){
        cout<<eye<<endl;
    }
};
class Father{
    public:
    string hair="blond";
    void show(){
        cout<<hair<<endl;
    }
};
class Child: public Mother, public Father{
    public:
    void show(){
        cout<<"eye: "<<eye<<endl;
        cout<<"hair: "<<hair<<endl;
    }
};

int main(){
    Child c;
    c.show();
}
/*
How to make child inherit features when parents have same feature sets, inheritance should be random.
*/