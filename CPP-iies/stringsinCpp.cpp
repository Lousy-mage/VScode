#include <iostream>
#include<cstring>
using namespace std;
int main(){
    string a ="nihal navas k M";
    string b ="navas";
    int c= a.find("k");
    a.replace(a.find("k"),c,"kadakathakath ");
    cout<<a<<endl;
}