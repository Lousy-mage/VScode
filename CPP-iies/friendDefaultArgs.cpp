#include <iostream>
using namespace std;

class rectangle{
    int length;
    int breadth;
    public:
    rectangle(int len, int bre){
        length=len;
        breadth=bre;
    }
    friend void area(int len=1, int bre=1);
};
void area(int len, int bre){
    
}
int main(){
    return 0;
}