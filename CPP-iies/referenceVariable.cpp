#include <iostream>
using namespace std;

int main(){
    int a=20;
    int &b=a;
    cout<<"&a= "<<&a<<endl;
    cout<<"&a= "<<&a<<endl;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;

    a++;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;

    b++;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;

}