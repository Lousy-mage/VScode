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

        // constructors:

            // Rectangle()
            // {
            //     length=1;
            //     breadth=1;
            // }
        Rectangle(int l=1, int b=1) //default arguments help reduce code size
        {
            setLength(l);
            setBreadth(b);
        }
        Rectangle(Rectangle &r)
        {
            length=r.length;
            breadth=r.breadth;
        }



        // functions
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
    //Rectangle r;    //Non-Argument
    Rectangle r(10,5); //Argument
    Rectangle r2(r);

    cout<<r2.area()<<endl;

    return 0;
}