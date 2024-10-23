// #include<iostream>
// using namespace std;
// template <typename T>
// void fun(T a, T b){
//     cout<<a<<"\t"<<b<<endl;
// }
// int main(){
//     fun(1,2);
//     fun('a','b');
//     fun("hello","world");
//     fun(32.4f,35.2f);
// }

#include <iostream>
using namespace std;

template<typename t>
void swap(t a,t b){
    cout<<a<<" "<<b<<endl;
    t c=a;
    a=b;
    b=c;
    cout<<a<<" "<<b<<endl;
}
int main(){
    swap(23,78);
}