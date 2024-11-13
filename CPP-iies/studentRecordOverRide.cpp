// #include <iostream>
// #include <cstring>
// using namespace std;

// class College{// pure virtual or abstract class
//     public:
//     virtual void show()=0;
// };
// class Student: public College{
//     public:
//     string name="nihal";
//     string father="navas";
//     string mother="shajila";

//     // Student(string a, string b, string c){
//     //     name=a;
//     //     father=b;
//     //     mother=c;
//     // }

//     virtual void show(){
//         cout<<"Student Name: "<<name<<endl;
//         cout<<"Father's Name: "<<father<<endl;
//         cout<<"Mother's Name: "<<mother<<endl;
//     }
// };

// class Marks: public Student{
//     public:
//     int sub1=23;
//     int sub2=24;
//     int sub3=25;
//     // Marks(int a, int b, int c){
//     //     sub1=a;
//     //     sub2=b;
//     //     sub3=c;
//     // }
//     void show(){
//         cout<<"Subject 1 mark: "<<sub1<<endl;
//         cout<<"Subject 2 mark: "<<sub2<<endl;
//         cout<<"Subject 3 mark: "<<sub3<<endl;
//     }
// };
// int main(){
//     Student s;
//     Marks m;

//     Student *n;
//     n=&s;
//     n->show();
//     n=&m;
//     n->show();
//     return 0;
// }


#include <iostream>
using namespace std;

class HandGuns{ //Abstract class
    public:
    virtual void show()=0;//Pure Virtual Function
};
class InflamatoryAegis: public HandGuns{
    public:
    int damage=34;
    int fireRate=7;
    int reloadSpeed=9;
    int accuracy=97;
    void show(){
        cout<<"\nInflamatory Aegis"<<endl;
        cout<<"--------------------------\n";
        cout<<"damage: "<<damage<<endl;
        cout<<"fire rate: "<<fireRate<<endl;
        cout<<"reload speed: "<<reloadSpeed<<endl;
        cout<<"accuracy: "<<accuracy<<endl;
    }
};

class DesertEagle:public HandGuns{
    public:
    int damage=27;
    int fireRate=12;
    int reloadSpeed=5;
    int accuracy=98;
    void show(){
        cout<<"\nDesert Eagle"<<endl;
        cout<<"--------------------------\n";
        cout<<"damage: "<<damage<<endl;
        cout<<"fire rate: "<<fireRate<<endl;
        cout<<"reload speed: "<<reloadSpeed<<endl;
        cout<<"accuracy: "<<accuracy<<endl;
    }
};
class SharpShooterBane:public HandGuns{
    public:
    int damage=63;
    int fireRate=4;
    int reloadSpeed=15;
    int accuracy=60;
    void show(){
        cout<<"\nSharp Shooter's Bane"<<endl;
        cout<<"--------------------------\n";
        cout<<"damage: "<<damage<<endl;
        cout<<"fire rate: "<<fireRate<<endl;
        cout<<"reload speed: "<<reloadSpeed<<endl;
        cout<<"accuracy: "<<accuracy<<endl;
    }
};

int main(){
    InflamatoryAegis g1;
    DesertEagle g2;
    SharpShooterBane g3;
    HandGuns *g;
    g=&g1;
    g->show();
    g=&g2;
    g->show();
    g=&g3;
    g->show();
    return 0;
}