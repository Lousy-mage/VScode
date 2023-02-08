#include "iostream"
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        int area()
        {
            return length*breadth;
        }
        int perimeter()
        {
            return 2*(length+breadth);
        }

    //constructors:

     Rectangle(int length,int breadth)
        {
         this->length=length;
         this->breadth=breadth;
        }
};

int main()
{
    Rectangle r(20,3);
    cout<<r.area()<<endl;
    return 0;
}