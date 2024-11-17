// #include <iostream>
// using namespace std;

// int main(){
//     int age;
//     cout<<"Enter your age\n";
//     cin>>age;

//     try{
//         if(age>=18){
//             cout<<"You are eligible for vote"<<endl;
//         }
//         else
//             throw(age);
//     }
//     catch(int age){
//         cout<<"You are not eligible for vote"<<endl;
//     }
//     return 0;

// }

/*  Example 2  */


// #include <iostream>
// using namespace std;

// class experience{
//     int exp;
//     public:
//     experience(){
//         int a;
//         cout<<"Enter experience\n";
//         cin>>a;
//         exp=a;
//     }
//     void checkEligible(){
//         try{
//             if (exp>=2){
//                 cout<<"You are eligible for job\n";
//             }
//             else
//                 throw(exp);
//         }
//         catch(int exp){
//         cout<<"You are not eligible for job\n";
//     }
//     }
// };
// int main(){
//     experience E;
//     E.checkEligible();
//     return 0;
// }

/*    Example 3    */

// #include <iostream>
// #include <stdexcept>

// using namespace std;

// class Student {
//     private:
//     string name;
//     float marks;
//     public:
//     Student(string n, float g){
//         name = n;
//         marks = g;
//     }
//     void show(){
//         if (marks < 60.0f){
//             throw runtime_error("student is not eligible");
//         }
//         cout<<name<<"'s Marks is "<<marks<<endl;
//     }
// };

// int main(){
//     string n;
//     float g;

//     cout<<"enter student's name: ";
//     getline(cin,n);
//     cout<<"Enter Student's marks: ";
//     cin>>g;

//     Student s(n,g);

//     try{
//         s.show();
//     }
//     catch(runtime_error t){
//         cout<<"Error: "<<t.what()<<endl;
//     }

//     return 0;
// }

/*     Example 4      */

#include <iostream>
using namespace std;
int division(int a, int b)
{
    if(b==0)
        throw 1;
    return a/b;
}

int main(){   
    int a=20,b=0,c;
    try
    {  
        c=division(a,b);
        cout<<c<<endl;
    }
    catch(int c)
    {
        cout<<"Zero error....ERROR "<<c<<endl;
    }
    return 0;
}