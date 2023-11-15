#include "iostream"
using namespace std;
//
//Use "virtual" befor return type to make an abstract function
//so, when Innova or swift is called, car's function doesn't get activated....
//but the "start" function from car remain a template of sort...
//classes with Virtual functions are called Abstract class
//if a class has only virtual function, it is call "Interface"
//
class Car
{
    public:
         virtual void start()=0; //now this is called a "pure virtual function"
    //    virtual void start()
    //     {
    //         cout <<"car started"<<endl;

    //     }
};
class Innova: public Car
{
    public:
        void start()
        {
            cout <<"innova started"<<endl;
        }
};
class Swift: public Car
{
    public:
        void start()
        {
            cout <<"swift started"<<endl;

        }
};

int main()
{
    Car *p=new Innova();
    p->start();
    p=new Swift();
    p->start();
    return 0;
}