#include <iostream>
#include <math.h>
using namespace std;

class rectangle{
    private:
        int length;
        int breadth;
        void area(){
            cout<<"area is "<<(length*breadth)<<endl;
        }
        void perimeter(){
            cout<<"perimeter is "<<(2*(length+breadth))<<endl;
        }
        void diagonal(){
            float dia=sqrt((length*length)+(breadth*breadth));
            cout<<"diagonal is "<<dia<<endl;
        }
    public:
        rectangle(){
            length=getLength();
            breadth=getBreadth();
        }
        int getLength(){
            int len;
            cout<<"Enter the length\n";
            cin>>len;
            return len;
        }
        int getBreadth(){
            int bre;
            cout<<"Enter the breadth\n";
            cin>>bre;
            return bre;
        }
        void findArea(){
            area();
        }
        void findPerimeter(){
            perimeter();
        }
        void findDiagonal(){
            diagonal();
        }
};
int main(){
    rectangle r;
    int op;
    do{
        cout<<"choose operation\n";
        cout<<"[1] Area\n";
        cout<<"[2] Perimeter\n";
        cout<<"[3] Diagonal\n";
        cout<<"[4] Exit\n";
        cin>>op;
        switch (op)
        {
        case 1:
            r.findArea();
            break;
        case 2:
            r.findPerimeter();
            break;
        case 3:
            r.findDiagonal();
            break;
        case 4:
            cout<<"Exiting\n";
            break;
        default:
            cout<<"error\n";
            break;
        }
    }while (op!=4);
    
    return 0;
}