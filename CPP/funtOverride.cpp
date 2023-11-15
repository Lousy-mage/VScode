#include "iostream"
using namespace std;

class Base
{
    public:
    void display() {
        cout<<"display from Base"<<endl;

    }
};

class derived: public Base
{
    public:
    // void display() { //make sure to have the same parameters as the prev. functn. to override
    //     cout<<"display from derived"<<endl;
    // } //else

    void display(int x){
        cout<<"display from derived, "<<x<<endl;
    }
};

int main()
{
    //Base d;
    derived d;
    d.Base::display(); //this to call base and,
    d.display(29); //this to call the derived
    return 0;
}