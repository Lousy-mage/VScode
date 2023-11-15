/*
Friend functions can access public, protected, private data members
eg:- in class, define---- friend void func()

Static data members are allocated memory once and shared by all objects of the same class.
eg:- static int count;
- can be used in 3 ways:
    - used as a counter.
    - used as shared memory between objects.
    - used to provide information about class.

Static functions can also be declard. They can only access static data members.
eg:- static getCount(){....}
*/

#include "iostream"
using namespace std;
//int getOwner(int );
class Innova
{
    private:
    int owner;
    public:
        // Innova(int o=2020){owner=o;}
        static int price;
        static int getPrice(){
            return price;
        }
    friend int getOwner();
    // int getOwner(){
    //     return owner;
    // }
};
int getOwner()
{   
    Innova i;
    i.owner=2929290;
    return i.owner;
}
int Innova::price=15;

int main()
{   
    Innova i1,i2;
    cout<<i1.price<<endl;
    cout<<i2.price<<endl;

    cout<<Innova::getPrice()<<endl;
    cout<<getOwner()<<endl;
    

    return 0;
}