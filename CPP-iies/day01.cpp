// #include <iostream>
// #include <float.h>
// using namespace std;

// int main(){
//     float a=89.122;
//     cout<<"a is "<<a<<endl;
// }

#include <iostream>
using namespace std;

int main(){
    int a=10,b=2;
    cout<<"enter an num1"<<endl;
    cin>>a;
    cout<<"enter an num2"<<endl;
    cin>>b;
    cout<<"enter an operation"<<endl;
    char op;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<(a+b)<<endl;
        break;
    case '-':
        cout<<(a-b)<<endl;
        break;
    case '/':
        cout<<(a/b)<<endl;
        break;
    case '%':
        cout<<(a%b)<<endl;
        break;
    case '*':
        cout<<(a*b)<<endl;
        break;
    default:
        break;
    }
}

