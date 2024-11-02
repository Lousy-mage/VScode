// #include <iostream>
// using namespace std;
// class demo{
//     public:
//     int a=10;
//     int b=20;
//     void operator++(int){
//         a+=5;
//     }
// };
// int main(){
//     demo d1;
//     demo d2;
//     demo d3;
//     d3++;
//     cout<<d3.a<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class demo{
//     int a;
//     public:
//     demo(){
//         a=10;
//     }
//     demo operator*(demo &d){
//         demo res;
//         res.a = a * d.a;
//         return res;
//     }
//     void display(){
//         cout<<"a= "<<a<<endl;
//     }
// };
// int main(){
//     demo d1,d2;
//     demo d3=d1*d2;
//     d3.display();
//     return 0;
// }

#include <iostream>
using namespace std;

class demo{
    
    public:
    int a=10;
    demo(){
        --a;
    }
    demo operator==(demo &d){
        demo res;
        res.a = a == d.a;
        return res;
    }
    void display(){
        cout<<"a= "<<a<<endl;
    }
};
int main(){
    demo d1,d2;
    demo d3=d1==d2;
    cout<<d1.a<<endl;
    cout<<d2.a<<endl;
    d3.display();
    return 0;
}