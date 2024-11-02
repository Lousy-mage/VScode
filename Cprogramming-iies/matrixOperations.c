#include "stdio.h"
int main(){
    //implement proper matrix multiplication capable of matrix of different orders
    int rowA,colA,rowB,colB;
    printf("enter number of rows: ");
    scanf("%d",&row);
    printf("enter number of columns: ");
    scanf("%d",&col);

    /*      Scanning       */
    int a[row][col],b[row][col],c[row][col];
    printf("enter elements for a : \n");
    for(int i=0;i<row;++i){
        for(int j=0;j<col;++j){
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter elements for b : \n");
    for(int i=0;i<row;++i){
        for(int j=0;j<col;++j){
            scanf("%d",&b[i][j]);
        }
    }

    /*      Calculating   sum  */
    // printf("sum is: \n");
    // for(int i =0;i<row;++i){
    //     for(int j=0;j<col;++j){
    //         a[i][j]+=b[i][j];
    //     }
    //     for(int j=0;j<col;++j){
    //         printf("%d  ",a[i][j]);
    //     }
        // for(int j=0;j<col;++j){
        //     printf("%d  ",a[i][j]);
        // }
        // printf("\t");
        // for(int j=0;j<col;++j){
        //     printf("%d  ",b[i][j]);
        // }
        // printf("\n");
    //}
    /*   calculating transpose    */

    // printf("transpose of a is : \n");
    // for(int i=0;i<col;++i){
    //     for(int j=0;j<row;++j){
    //         printf("%d ",a[j][i]);
    //     }
    //     printf("\n");
    // }

    /*    product of matrix
    n=a[i][j]*
    s[i][j]=n
    
         */
    printf("product of a and b is : \n");
    for(int i=0;i<row;++i){
        for(int j=0;j<col;++j){
            c[i][j]=0;
            for(int k=0;k<col;++k){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    for(int i=0;i<row;++i){
        for(int j=0;j<col;++j){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}
/*
1 2 4
1 3 6
6 9 4


4 2 1
6 8 9
5 4 2

correct output:
36 34 27 
52 50 40 
98 100 95

*/
