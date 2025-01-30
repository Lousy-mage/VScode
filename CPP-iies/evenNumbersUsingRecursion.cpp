// Print even numbers using recursion

#include <iostream>
using namespace std;

void evenNumbers(int num){
    if(num<0) return;
    if(num%2 == 0)  cout<<num<<" ";
    evenNumbers(num-1);
}

int main(){
    int num;
    cout<<"Enter upto which number to print: ";
    cin>>num;

    evenNumbers(num);
    // for(int i = 0; i <= num; i++){
    //     cout<<evenNumbers(i)<<"\t";
    // }
    cout<<endl;
    return 0;
}