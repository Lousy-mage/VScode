/*
create overloaded funtions to
- find maximum of two integers
- find maximum of two float
- find maximum of three integers
*/

#include <iostream>
#include <float.h>
using namespace std;
void max(int a, int b){
    if(a<b){
        cout<<a<<" is maximum\n";
    }
    else if(a>b){
        cout<<b<<" is maximum\n";
    }
    else{
        cout<<a<<" and "<<b<<"are equal\n";
    }
}
void max(float a, float b){
    if(a<b){
        cout<<a<<" is maximum\n";
    }
    else if(a>b){
        cout<<b<<" is maximum\n";
    }
    else{
        cout<<a<<" and "<<b<<"are equal\n";
    }
}
void max(int a, int b, int c){
    if(a>b&&a>c){
        cout<<a<<" is maximum\n";
    }
    else if(a>b&&a<c){
        cout<<c<<" is maximum\n";
    }
    else{
        cout<<b<<" is maximum\n";
    }
}
int main(){
    max(23,45);
    max(34.34f,45.34f);
    max(23,54,12);
    return 0;
}

/*

We want to calcu;ate the total marks of each student of a class in physics, chemistry and mathematics
and the average marks of the class. the number of students int he class are entered nby the user.
Create a class named marks with data members for all number, name, and marks. Create three other 
classes inheriting the Marks class, namely physics, chemistry, and mathematics. Which are used to
define marks in individual subject of each student. Roll number of each student will be generate
automatically.

*/


/*
We want to store the information of different vehicles. Create a class named Vehicle with two data 
member named milage and price. Create its two subclasses

*/