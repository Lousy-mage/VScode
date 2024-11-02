// #include <iostream>
// using namespace std;

// class person1{
//     public:
//     void disp(){
//         cout<<"Function of Parent Class\n";
//     }
// };
// class person2: public person1{
//     public:
//     void disp(){
//         cout<<"function of Child Class";
//     }
// };

// int main(){
//     // person2 obj = person1();   //error
//     // person2 obj;
//     person1 obj;
//     obj.person1::disp();
//     return 0;
// }



#include <iostream>
using namespace std;

struct student
{
    /* data */
};

class demo{
    protected:
    int a;
    int b;

    public:
    demo(int x, int y){
        a=x;
        b=y;
    }
    void disp(){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    demo d(10,25);
    demo d = demo(10,25); //pure constructor invocation explicitly
    d.disp();
    return 0;
}
