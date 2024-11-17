/* Shallow Copy */
#include <iostream>
using namespace std;
class demo{
    private:
    int *a;
    public:
    demo(int b){
        a=new int;
        *a=b;
    }
    demo(demo &c){
        a=c.a;
    }
    void dispalyData(){
        cout<<"Data: "<<*a<<endl;
    }
    void updata(int u){
        *a=u;
    }
};
int main(){
    demo x(10);
    demo y=x;
    x.dispalyData();
    y.dispalyData();
    x.updata(3);
    x.dispalyData();
    y.dispalyData();
    y.updata(2);
    x.dispalyData();
    y.dispalyData();
    return 0;
}

/* Deep Copy */
// #include <iostream>
// #include <cstring>
// using namespace std;
// class demo{
//     private:
//     string *a;
//     public:
//     demo(string b){
//         a=new string;
//         *a=b;
//     }
//     demo(demo &c){
//         a=new string(*c.a);
//     }
//     void dispalyData(){
//         cout<<"Data: "<<*a<<endl;
//     }
//     void updata(string u){
//         *a=*a+u;
//     }
// };
// int main(){
//     demo x("nihal ");
//     //copy
//     demo y=x;
//     x.dispalyData();
//     y.dispalyData();
//     //update first
//     x.updata("navas");
//     x.dispalyData();
//     y.dispalyData();
//     //update second
//     y.updata("K M");
//     x.dispalyData();
//     y.dispalyData();
//     return 0;
// }