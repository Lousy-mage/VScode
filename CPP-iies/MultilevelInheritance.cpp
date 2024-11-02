// #include <iostream>
// using namespace std;

// class Base{
//     public:
//     int a=20;
// };
// class sub1: public Base{
//     public:
//     int b=25;
//     void fun(){
//         cout<<"sum is "<<a+b<<endl;
//     }
// };
// class sub2: public sub1{
//     public:
//     int c=30;
//     void fun(){
//         cout<<"sum is "<<a+b+c<<endl;
//     }
// };

// int main(){
//     sub1 s2;
//     sub2 s;
//     s.fun();
//     s2.fun();
//     return 0;
// }

#include <iostream>
using namespace std;

class jnrResearcher{
    public:
    int labCode=1234;
    void Access(){
        cout<<"\njunior's Access:\n";
        cout<<"lab code "<<labCode<<endl;
    }
};
class snrResearcher: public jnrResearcher{
    public:
    int confResearchCode=8499;
    void Access(){
        cout<<"\nsenior researcher's Access:\n";
        cout<<"lab code "<<labCode<<endl;
        cout<<"confidential data "<<confResearchCode<<endl;
    }
};
class ceo:public snrResearcher{
    public:
    int topClassified=98453;
    void Access(){
        cout<<"\nCEO's Access:\n";
        cout<<"lab code "<<labCode<<endl;
        cout<<"confidential data "<<confResearchCode<<endl;
        cout<<"top Classified data "<<topClassified<<endl;
    }
};
int main(){
    jnrResearcher j;
    snrResearcher s;
    ceo c;
    j.Access();
    s.Access();
    c.Access();
    return 0;
}