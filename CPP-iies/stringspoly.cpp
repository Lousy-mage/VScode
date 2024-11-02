// #include <iostream>
// #include <cstring>
// using namespace std;

// class name{
//     string s;
//     public:
//     name(string str):s(str){}
//     void display(){
//         cout<<s<<endl;
//     }
//     name operator+(name& st){
//         return name(s + st.s);
//     }
    
// };

// int main(){
//     name n("nihal");
//     name m("navas");
//     name k=n+m;
//     k.display();
//     return 0;
// }


#include <iostream>
#include <cstring>
using namespace std;

class name{
    char s[30];
    public:
    name(char str[]){
        strcpy(s,str);
    }
    void display(){
        cout<<s<<endl;
    }
    name operator+(name& st){
        name temp("");
        if(strlen(s)+strlen(st.s)<50){
            strcpy(temp.s,s);
            strcat(temp.s,st.s);
        }
        return temp;
    }
    
};

int main(){
    name n("nihal");
    name m(" navas");
    name k=n+m;
    k.display();
    return 0;
}