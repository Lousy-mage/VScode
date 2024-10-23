// #include <iostream>
// using namespace std;

// class demo{
//     public:
//     int a=20;
//     int b=90;
//     void foo(){
//         cout<<a<<" "<<b<<endl;
//     }
// };
// int main(){
//     demo d;
//     demo *p;
//     p=new demo;
//     p->foo();
//     delete p;
//     return 0;
// }

#include <iostream>
class rectangle{
    int len;
    int bre;
    
    public:
    rectangle(){
        len=20;
        bre=7;
    }
    void area(){
        std::cout<<(len*bre)<<std::endl;
    }
};

int main(){
    rectangle r1,r2,r3;
    r1.area();
    
    return 0;
}