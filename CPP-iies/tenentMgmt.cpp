#include <iostream>
#include <unistd.h>
#define MAX_ROOMS 5

using namespace std;

// class Tenent{
//     public:
//     string name;
//     int roomNo;
//     bool paid;
    
// };
// class Rooms: public Tenent{
//     public:
//     int share;
//     Rooms(){
        
//         cout<<"name: ";
//         cin>>name;
//         cout<<"room no: ";
//         cin>>roomNo;
//         cout<<"paid: ";
//         cin>>paid;
//         cout<<"no.of tenents: ";
//         cin>>share;
//     }

//     void info(){
//         cout<<"name : "<<name<<endl;
//         cout<<"room no: "<<roomNo<<endl;
//         cout<<"paid: "<<(paid?"True":"False")<<endl;
//         cout<<"no of tenents: "<<share<<endl;
//         cout<<"---------------\n"<<endl;
//     }
// };

// int main(){
//     Rooms r, r1, r2;
//     system("clear");
//     r.info();
//     r1.info();
//     r2.info();
//     return 0;
// }

class Rooms{
    int RoomNo;
    int NoTenents;
    
};

int main(){
    char option;
    do{
        system(echo -ne "\033]11;#FF0000\033]10;#008000\033\\")
        cout<<"[1] view room details\n";
        cout<<"[2] edit room details\n";
        cout<<"[e] exit\n";


    }while (option!='e');
    return 0;
}