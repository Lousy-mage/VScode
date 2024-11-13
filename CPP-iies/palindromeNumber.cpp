/* Without arguments, without return */

// #include <iostream>
// using namespace std;

// void palindrome(){
//     int num;
//     cout<<"enter a number\n";
//     cin>>num;
//     int temp=num;
//     int rev=0;
//     while(num){
//         rev=(rev*10)+(num%10);
//         num/=10;
//     }
//     if(rev==temp)
//         cout<<temp<<" is palindrome\n";
//     else
//         cout<<temp<<" is not plaindrome\n";
// }

// int main(){
//     palindrome();
//     return 0;
// }

/* With argument without return */

// #include <iostream>
// using namespace std;

// void palindrome(int num){
//     int temp=num;
//     int rev=0;
//     while(num){
//         rev=(rev*10)+(num%10);
//         num/=10;
//     }
//     if(temp==rev)
//         cout<<temp<<" is palindrome\n";
//     else
//         cout<<temp<<" is not palindrome\n";
// }

// int main(){
//     int num;
//     cout<<"Enter a number\n";
//     cin>>num;
//     palindrome(num);
//     return 0;
// }

/* Without argument, with return */

// #include <iostream>
// using namespace std;

// class number{
//     int num;
//     public:
//     number(int n){
//         num=n;
//     }
//     friend getnum();
//     int palindrome(){
//     int rev=0;
//     int temp=num;
//     while(temp){
//         rev=(rev*10)+(temp%10);
//         temp/=10;
//     }
//     return rev;
// }
// };
// void getnum(){
//     cout<<"Enter a number\n";
//     int n;
//     cin>>n;
//     number num1(n);
// }


// int main(){
//     getnum();
//     int rev=palindrome();
//     if(rev==num1.num)
//         cout<<" palindrome\n";
//     else
//         cout<<" not plindrome/n";

//     return 0;
// }

/* With argument with return */

#include <iostream>
using namespace std;

int palindrome(int *num){
    int temp=*num;
    int rev=0;
    while (temp)
    {
        rev=(rev*10)+(temp%10);
        temp/=10;
    }
    return rev;
}

int main(){
    cout<<"Enter a number\n";
    int num;
    cin>>num;
    int rev=palindrome(&num);
    if(rev==num){
        cout<<"palindrome\n";
    }
    else{
        cout<<"not palindrome\n";
    }
    return 0;
}

