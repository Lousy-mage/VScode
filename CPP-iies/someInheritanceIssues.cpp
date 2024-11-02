#include <iostream>
using namespace std;

class grandparents{
    public:
    void fun(){
        cout<<"hello\n";
    }
};
class parent{
    public:
    void fun(){
        cout<<"hii\n";
    }
};
class son: public grandparents, public parent{

};
int main(){
    son s;
    s.parent::fun();
    s.grandparents::fun();
    return 0;
}