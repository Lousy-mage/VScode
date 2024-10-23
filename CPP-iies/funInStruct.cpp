#include <iostream>
#pragma pack(1)
using namespace std;

struct stu
{
    char c;
    int n;
    float d;
    int b;
    void name(){
        cout<<"name: nihal navas\n";
    }
}s;

int main(){
    s.name();
    cout<<sizeof(stu)<<endl;
    return 0;
}