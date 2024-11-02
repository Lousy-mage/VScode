// #include <iostream>
// using namespace std;
// int main(){
    
//     int n=0xFF;
//     n = n&~(1<<2);
//     n = n&~(1<<6);

//     cout<<n<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    char c=-120;
    int n=(c>>7)&1;
    cout<<n<<endl;
    return 0;
}