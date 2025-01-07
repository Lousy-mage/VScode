#include <stdio.h>
#include <stdlib.h>
int i;
void getInt(int *arr, int n){
    for(i=0; i<n;i++){
        printf("Enter array element %d: \n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n");
}

void display(int *arr, int n){
     printf("Entered 5 array elements are: \n");
    for(i=0; i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nn = %d\n",n);

}

void change(int *arr, int n){
    printf("setting first element as 28 and length of array as 35...\n");
    arr[0]=28;
    n=35;
}

int main(){
    int n;
    printf("Enter the number of integers to store\n");
    scanf("%d",&n);

    int arr[n];

    getInt(arr,n);
    display(arr,n);

    printf("Lets check if it's pass by value or pass by address\n");
    change(arr,n);
    display(arr,n);
    
    system("pause");
    return 0;
}