#include <iostream>
using namespace std;
void swap(int a, int b){
    int c=a;
    a=b;
    b=c;
    cout<<"By Val\t"<<a<<"\t"<<b<<endl;
}
void swapa(int *a, int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
void swapr(int &a, int &b){
    int c=a;
    a=b;
    b=c;
    cout<<"By Ref\t"<<a<<"\t"<<b<<endl;
}
int main(){
    int a=10,b=20;
    cout<<"OG Val\t"<<a<<"\t"<<b<<endl;
    int *p=&a, *q=&b;
    swap(a,b);
    swapa(p,q);
    swapr(a,b);
    cout<<"By Add\t"<<a<<"\t"<<b<<endl;
}