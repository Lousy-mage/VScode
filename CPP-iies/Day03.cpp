/* Function overloading */


// #include <iostream>
// #include <float.h>
// #define PI 3.14
// using namespace std;
// //rectangle
// int area(int length, int breadth){
//     return length*breadth;
// }
// //triangle
// float area(int height, int base,bool isTriangle){
//     float area=(base*height)/2;
//     return area;
// }
// //circle
// float area(float radius){
//     return PI*radius*radius;
// }
// int main(){
//     cout<<"area of rectangle "<<area(5,2)<<endl;
//     cout<<"area of triangle "<<area(5,3,1)<<endl;
//     cout<<"area of circle "<<area(3)<<endl;
// }



/* Default arguments */


// #include <iostream>
// using namespace std;


// void fun(int i,int j=0, int k=0){
//     if(k==0){
//         if(j==0)
//             cout<<i<<endl;
//         else
//             cout<<i<<" "<<j<<endl;
//     }
//     else
//         cout<<i<<" "<<j<<" "<<k<<endl;
// }
// int main(){
//     fun(1,2);
//     fun(1,2,3);
//     fun(1);
// }


/* Arithmetic operations using default arguments*/

// #include <iostream>
// using namespace std;
// void operation(int num1,int num2,char op='+'){
//     switch (op){
//         case '+':
//             cout<<(num1+num2)<<endl;
//             break;
//         case '-':
//             cout<<(num1-num2)<<endl;
//             break;
//         case '/':
//             cout<<((float)num1/(float)num2)<<endl;
//             break;
//         case '*':
//             cout<<(num1*num2)<<endl;
//             break;
//         default :
//             cout<<"error choosing operation\n";
//             break;
//     }
// }
// int main(){
//     operation(1,2);
//     operation(1,2,'+');
//     operation(1,2,'-');
//     operation(1,2,'/');
//     operation(1,2,'*');
// }