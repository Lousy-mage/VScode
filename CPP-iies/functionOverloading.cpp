#include <iostream>
using namespace std;
void fun(){
    cout<<"Hello\n";
}
void fun(int a, int b){
    cout<<a<<"+"<<b<<"= "<<a+b<<endl;
}
void fun(int a, int b, int c){
    cout<<((a>b)?((a>c)?c:a):((b>c)?b:c))<<endl;
}
int main(){
    fun();
    fun(10,20);
    fun(2,6,5);
}