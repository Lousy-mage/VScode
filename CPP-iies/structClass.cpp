#include <iostream>
using namespace std;

struct student{
    int id;
    string name;
}s;
class demo:public student{
    public:
    void edit(){
        cout<<" name :";
        cin>>s.name;
        cout<<" id :";
        cin>>s.id;
    }

};
int main(){
    demo d;
    d.edit();
    return 0;
}