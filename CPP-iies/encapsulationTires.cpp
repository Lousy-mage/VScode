#include <iostream>
#include <unistd.h>
using namespace std;

class Tires{
    int MaxAirF=10;
    int MaxAirB=15;
    int Front;
    int Back;
    public:
    Tires(){
        Front = getFront();
        Back = getBack();
    }
    int getFront(){
        int front;
        cout<<"Enter the air in front tire\n";
        cin>>front;
        return front;
    }
    int getBack(){
        int back;
        cout<<"Enter the air in back tire\n";
        cin>>back;
        return back;
    }
    void setFront(){
        Front=10;
    }
    void setBack(){
        Back=15;
    }
    void fillTires(){
        if (Front<MaxAirF){
            cout<<"Filling Back Tire ";
            
            for(int i=Front;i<=MaxAirF;i++){
                cout<<". ";
                sleep(1);
            }
            setFront();
            cout<<"\nFront tire is now Full"<<endl;
        }
        else{
            cout<<"\nFront tire is already full\n";
        }
        // sleep(3);
        if (Back<MaxAirB){
            cout<<"\nFilling Back Tire ";
            
            for(int i=Back;i<=MaxAirB;i++){
                cout<<". ";
                sleep(1);
            }
            setBack();
            cout<<"\nBack tire is now Full"<<endl;
        }
        else{
            cout<<"\nBack air is already Full\n";
        }
        // sleep(3);
    }

};

int main(){
    Tires t;
    t.fillTires();
    return 0;
}