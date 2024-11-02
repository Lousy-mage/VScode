#include <iostream>
using namespace std;
const int a=10;

class marks{
    int arr[a];
    public:
    marks(){
        for(int i=0; i<a;i++){
            arr[i]=i+1;
        }
    }
    int operator[](int i){
        if(i<a){
            return arr[i];
        }
        else{
            cout<<"Index out of bounds"<<endl;
            exit(0);
        }
    }
    void display(){
        for(int i=0;i<a;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    marks a1;
    cout<<"element at index 5: "<<a1[5]<<endl;
    return 0;
}