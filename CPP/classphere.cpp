#include "iostream"
#include "math.h"
using namespace std;

class sphere
{
    public:
    float diameter;
    float radius()
    {
        return diameter/2;
    }
    float circumference()
    {
        return 2*3.14f*radius()*radius();
    }
    float surface()
    {
        return 4*3.14f*radius()*radius();
    }
    float volume()
    {
        return (4/3)*3.14f*radius()*radius()*radius();
    }
};

/*int main()
{
    sphere s1;
    s1.diameter=25.0f;
    cout<<"radius of s1 : "<<s1.radius()<<endl;
    cout<<"circumference of s1 : "<<s1.circumference()<<endl;
    cout<<"surface area of s1 : "<<s1.surface()<<endl;
    cout<<"volume of s1 : "<<s1.volume()<<endl;
    return 0;

}*/

int main()
{
    sphere r1;
    sphere *ptr=new sphere;
    ptr=&r1;
    ptr->diameter=25;
    cout<<ptr->surface()<<endl;
    cout<<ptr->volume()<<endl;
    return 0;
}