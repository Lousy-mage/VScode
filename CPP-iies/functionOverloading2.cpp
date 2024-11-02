#include <iostream>
#include <float.h>
using namespace std;

void func(){
    cout<<"hello World\n";
}
void func(int r, int s){
    cout<<r+s<<endl;
}
void func(float p, float q){
    cout<<p/q<<endl;
}
int main(){
    func();
    func(2.09f,0.34f);
    func(23,56);
    return 0;
}