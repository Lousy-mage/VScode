// #include <iostream>
// using namespace std;

// class parent{
//     public:
//     string f_name="Navas";
//     string l_name="Kadakathakath";
//     void showP(){
//         cout<<f_name<<" "<<l_name<<endl;
//     }
// };
// class child: public parent{
//     public:
//     string f_name="Nihal";
//     void showC(){
//         cout<<f_name<<" "<<l_name<<endl;
//     }
// };

// int main(){
//     child c1;
//     c1.showC();
// }

#include <iostream>
using namespace std;

class BaseNo{
    public:
    int num1=20;
    int num2=30;
    void sumShow(){
        cout<<"sum= "<<(num1+num2)<<endl;
    }
};
class NewNo: public BaseNo{
    public:
    int num2=45;
    void sumShow(){
        cout<<"sum= "<<(num1+num2)<<endl;
    }
};

int main(){
    BaseNo b;
    b.sumShow();
    NewNo n;
    n.sumShow();
    return 0;
}