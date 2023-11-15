#include "iostream"
using namespace std;

class Circle
{
    private:
    int radius;

    public:
    void setRadius(int radius){
        this->radius=radius;
    }
    int getRadius(){
        return radius;
    }
};

class Utility
{
    public:
    double calcArea(Circle c){
        int r=c.getRadius();
        return 3.14*r*r;
    }
};

int main()
{
    int radius=0;
    cout<<"enter radius in cm "<<endl;
    cin>>radius;
    Circle c;
    c.setRadius(radius);
    Utility c1;
    cout<<"Circle area= "<<c1.calcArea(c)<<"cm^2"<<endl;

    return 0;
}