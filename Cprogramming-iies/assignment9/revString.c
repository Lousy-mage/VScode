#include "stdio.h"
#include "string.h"
int main(){
    char temp;
    char str[30]="entha vro!";
    int length = strlen(str);
    int left = 0, right = length - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
    printf("%s\n",str);
}