#include "stdio.h"
int main(){
    // int a[10][10]={{1,2,3},{4,5,6},{7,8,9}};
    // printf("ARRAY:  \n");
    // for(int i = 0;i<3;++i){
    //     for(int j=0;j<3;++j){
    //         printf("%d   ",a[i][j]);
    //     }
    //     printf("\n");
    // }
    // int a[2][2][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    // for(int i=0;i<2;i++){
    //     printf("the %d array is : \n",i+1);
    //     for(int j=0;j<2;j++){
    //         for(int k=0;k<3;k++){
    //             printf("%d  ",a[i][j][k]);
    //         }
    //         printf("\n");
    //     }
    // }
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("%d\n",*(a[0]));
}