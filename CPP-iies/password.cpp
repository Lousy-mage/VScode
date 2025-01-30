#include <iostream>
using namespace std;

class Password{
    int password = 2000;
    public:
    void checkPass(int pass){
        if(pass == password){
            cout<<"login Successful\n";
            return;
        }
        cout<<"login Failed\n";
    }

};


int main(){
    Password p;
    int passcode;
    cout<<"Enter password: ";
    cin>>passcode;

    p.checkPass(passcode);
    return 0;
}