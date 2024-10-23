#include <iostream>
#include <cstring>
using namespace std;

struct student
{
    int id;
    long int num;
    string name;
};
student s1={1234,8086897423,"nihal"};
int main(){
    cout<<"name: "<<s1.name<<endl;
    cout<<"id: "<<s1.id<<endl;
    cout<<"phone: "<<s1.num<<endl;
}