// #include <iostream>
// using namespace std;
// inline void fun(){
//     for(int i=0;i<5;i++)
//         cout<<i<<endl;
// }
// int main(){
//     fun();
// }

#include <iostream>
using namespace std;

void fun(int n){
    while(n){
        cout<<n<<endl;
        fun(n-1);
    }
    return;
}
int main(){
    fun(5);
}


// #include <iostream>
// using namespace std;
// inline void fun(){
//     static int num=25;
//     cout<<num<<endl;
// }
// int main(){
//     fun();
// }

// #include <iostream>
// using namespace std;
// inline void fun(int option){
//     switch (option)
//     {
//     case 1:
//         cout<<"Hello\n";
//         break;
//     case 2:
//         cout<<"World\n";
//         break;
//     case 3:
//         cout<<"India\n";
//         break;    
//     default:
//         break;
//     }
// }
// int main(){
//     fun(3);
// }