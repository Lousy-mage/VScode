#include <iostream>
using namespace std;

class height{
    private:
    int feets;
    float inches;

    public:
    height():feets(0),inches(0){}
    height(int a, float b):feets(a),inches(b){}
    void display(){
        cout<<feets<<"\t"<<inches<<endl;
    }
    int operator>(height d){
        if((feets<d.feets)&&(inches<d.inches)){
            return 1;
        }
        else
            return 0;
    }
};
int main(){
    height h(4,5.2);
    height f(5,6.1);
    h.display();
    f.display();
    if(h>f)
        cout<<"h is greater\n";
    else
        cout<<"f is greater\n";
    return 0;
}