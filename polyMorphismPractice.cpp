#include "iostream"
using namespace std;

/*
    Write classes to demonstrate polymorphism
    Base class: shape
    Derived class: Rectangle, circle
*/

class Shape
{
    public:
        virtual void area()=0;
        virtual void peremeter()=0;

};
class Rectangle: public Shape
{
    private:
        float length;
        float breadth;

    public:

    Rectangle(int l=10, int b=20){
        length=l;
        breadth=b;
    }
        void area()
        {
            cout<<"area of rectangle = "<<length*breadth<<endl;
        }
        void peremeter()
        {
            cout<<"peremeter or rectangle = "<<2*(length+breadth)<<endl;
        }
};

class Circle: public Shape
{
    private:
        float radius;
    public:
    Circle(float r=3.5){
        radius =r;
    }
    void area()
    {
        cout<<"area of circle is = "<<3.1425*radius*radius<<endl;
    
    }
    void peremeter()
    {
        cout<<"cicumference of circle is = "<<2*3.1425*radius<<endl;
    }
};


int main(){
    Shape *s=new Rectangle(5,3);
    s->area();
    s->peremeter();

    s=new Circle(3.45); // no need for redeclaration like ----Shape *s=new Circle(3.45)-----
    s->area();
    s->peremeter();


    // Rectangle r;
    // r.area();
    // r.peremeter();
    // Circle c;
    // c.area();
    // c.peremeter();

    return 0;
}
