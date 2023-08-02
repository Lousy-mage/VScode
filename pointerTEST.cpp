#include "iostream"
using namespace std;

int main(){
    int b=30;
   int *a= &b;
    cout<<*a<<" "<<a<<&b<<endl;
    return 0;
}