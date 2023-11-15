#include "iostream"
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;
    
    
    public:
    //Constructors:
    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &r1);
    
    //Accessors:
    int getLength();
    int getBreadth();
    
    //Mutators:
    int setLength();
    int setBreadth();

    //Facilitators:
    int area();
    int perimeter();

    //Inquiry:
    bool isSquare();

    //Destructor;
    ~Rectangle(); //For deallocation of an object
};

Rectangle::Rectangle(int l, int b)
{
    length=l;
    breadth=b;
}
//do this for all functions.
//refer video again if needed.

int main()
{
    return 0;
}