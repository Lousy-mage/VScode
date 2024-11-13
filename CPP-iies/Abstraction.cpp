/*  It is just a fancy way of saying "write a function to only display specific things for specific occasions".
*/

#include <iostream>
#include <unistd.h>
using namespace std;

class participant{
    string name = "nihal";
    int age = 22;
    float weight = 89.1;
    string belt = "Blue";
    public:
    void fullDetail(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"weight: "<<weight<<endl;
        cout<<"belt: "<<belt<<endl;
    }
    void kataQualification(){
        cout<<"belt: "<<belt<<endl;
    }
    void kumiteQualification(){
        cout<<"age: "<<age<<endl;
        cout<<"belt: "<<belt<<endl;
        cout<<"weight: "<<weight<<endl;
    }
};
int main(){
    participant p;
    int op;
    do{
        cout<<"choose options:\n";
        cout<<"[1] full details\n";
        cout<<"[2] kata qualification\n";
        cout<<"[3] kumite qualification\n";
        cout<<"[4] exit\n";
        cin>>op;

        switch (op)
        {
        case 1:
            cout<<"full details\n";
            cout<<"================\n";
            p.fullDetail();
            sleep(3);
            break;
        case 2:
            cout<<"kata details\n";
            cout<<"================\n";
            p.kataQualification();
            sleep(3);
            break;
        case 3:
            cout<<"kumite details\n";
            cout<<"================\n";
            p.kumiteQualification();
            sleep(3);
            break;
        case 4:
            cout<<"Exiting.....\n";
            sleep(3);
            break;
        
        default:
            cout<<"error\n";
            sleep(3);
            break;
        }
    }while(op!=4);
    return 0;
}