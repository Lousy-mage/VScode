/*
    Q, Compare 2 structures.
    A, it is not possible to compare two user-defined datatypes but the elements can be compared
*/

#include <stdio.h>
#include <unistd.h>
struct Test{
    int num1;
    char char1;
};

// int compare(Test *e1, Test *e2){
//     int result;
//     result=e1-e2;
//     return result;
// }

int main(){
    int result;
    struct Test t1 = {1, 'a'};
    struct Test t2 = {2, 'b'};
    // result=compare(&t1,&t2);
    // result = t1-t2;  // error
    result = t1.num1 - t2.num1;

    if(result==0){
        printf("Structures are same\n");
    }
    else printf("Structures are not same\n");
    return 0;
}
