#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int money=500;
    cout<<"how much money do you have?\n";
    cin>>money;
    if(money>=300){
        cout<<"baa mandhi kazhikka\n";
    }
    else if(money>=100){
        cout<<"oru chaya kudikka\n";
    }
    else{
        cout<<"poda my dear friendeee!\n";
    }
}