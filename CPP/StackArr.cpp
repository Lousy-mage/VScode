#include "iostream"
using namespace std;

#define MAX 10
class Stack {
    int top;

    public :
    int arr[MAX];
    Stack(){
        top= -1;
    }
    void push(int item);
    int pop();
    int peek();
    
};

/* Insert item */
void Stack::push(int item){
    if (top>=(MAX-1))
        cout<<"\nStack overflow";
    else{
        arr[++top]=item;
        cout<<"\n"<<"element added "<<item;
    }
}

/* Remove item */
int Stack::pop()
{
    if (top<0){
        cout<<"\nStack underflow";
        return -1;
    }
    else{
        int item = arr[top--];
        return item;
    }
}

/* Retrieve top-most element */
int Stack::peek(){
    if (top<0){
        cout<<"\nStack underflow";
        return -1;
    }
    else {
        int item = arr[top];
        return item;
    }
}

/* Example driver program */

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    int value = st.pop();

    if (value!= -1){
        cout<<"\nDeleted element "<<value;
    }

    int top= st.peek();

    if(top!= -1){
        cout<<"\n Top element"<<top;
    }

    return 0;
}