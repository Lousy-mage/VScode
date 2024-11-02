#include <iostream>
using namespace std;

class demo{
    int num=10;
    public:
    int n=20;
    friend void show(demo);
};
void show(demo d){
    cout<<d.num<<endl;
    cout<<d.n<<endl;
}
int main(){
    demo d;
    show(d);
    return 0;
}