#include <stdio.h>
#include <stdlib.h>

void isLeap(int year){
    if(year%4 == 0 ){
        if(year%100 == 0){
            if(year%400 == 0) printf("%d is a Leap year\n",year);
            else printf("%d is not a Leap year\n",year);
        }
        else printf("%d is a Leap year\n",year);
    }
    else printf("%d is not a Leap year\n",year);
}

int main(){
    while(1){
        int year;
        printf("Enter a year:  ");
        scanf(" %d",&year);
        isLeap(year);
    }
    return 0;
}