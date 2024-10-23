#include <iostream>
int count=0;
class num{
    public:
    num(){
        count++;
    }
};
int main(){
    num x,x1,x2,x3;
    std::cout<<count<<std::endl;
}
