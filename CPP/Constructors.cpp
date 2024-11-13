#include <iostream>
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

        Rectangle(int l=1, int b=1)
        {
            setLength(l);
            setBreadth(b);
        }
        Rectangle(Rectangle &r)
        {
            length=r.length;
            breadth=r.breadth;
        }

        void setLength(int l)
        {
          if(l>0)
            length=l;
          else 
            length=1;
        }
        void setBreadth(int b)
        {
            if(b>0)
                breadth=b;
            else
                breadth=1;
        }

};

int main()
{
    Rectangle r(10,5);
    Rectangle r2(r);

    cout<<r2.area()<<endl;

    return 0;
}