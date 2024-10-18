#include <iostream>
using namespace std;

int main(){
    int a=1;
    char* p=(char*)&a;
    if(p){
        cout<<"little endian\n";
    }
    else{
        cout<<"big endian\n";
    }
}