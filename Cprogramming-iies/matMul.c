// #include <stdio.h>
// int main(){
//     start:
//     int rowA,colA,rowB,colB;
//     printf("enter number of rows of matrix A: ");
//     scanf("%d",&rowA);
//     printf("enter number of columns of matrix A: ");
//     scanf("%d",&colA);
//     printf("enter number of rows of matrix B: ");
//     scanf("%d",&rowB);
//     printf("enter number of columns of matrix B: ");
//     scanf("%d",&colB);
//     if(colA!=rowB){
//         printf("no.of columns of A should be equal to rows of B\n");
//         goto start;
//     }
//     int a[rowA][colA],b[rowB][colB],c[rowA][colB];
//      printf("enter elements for A : \n");
//     for(int i=0;i<rowA;++i){
//         for(int j=0;j<colA;++j){
//             scanf("%d",&a[i][j]);
//         }
//     }
//      printf("enter elements for B : \n");
//     for(int i=0;i<rowB;++i){
//         for(int j=0;j<colB;++j){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     printf("product of a and b is : \n");
//     for(int i=0;i<rowA;++i){
//         for(int j=0;j<colB;++j){
//             c[i][j]=0;
//             for(int k=0;k<colB;++k){
//                 c[i][j]+=a[i][k]*b[k][j];
//             }
//         }
//     }
//     for(int i=0;i<rowA;++i){
//         for(int j=0;j<colB;++j){
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
/*
1 2 3
4 5 6

1 2
3 4
5 6

*/

#include <stdio.h>

int main() {
    start:
    int rowA, colA, rowB, colB;
    printf("enter number of rows of matrix A: ");
    scanf("%d", &rowA);
    printf("enter number of columns of matrix A: ");
    scanf("%d", &colA);
    printf("enter number of rows of matrix B: ");
    scanf("%d", &rowB);
    printf("enter number of columns of matrix B: ");
    scanf("%d", &colB);

    if (colA != rowB) {
        printf("no.of columns of A should be equal to rows of B\n");
        goto start;
    }

    int a[rowA][colA], b[rowB][colB], c[rowA][colB];

    printf("enter elements for a : \n");
    for (int i = 0; i < rowA; ++i) {
        for (int j = 0; j < colA; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter elements for b : \n"); // Corrected input for matrix B
    for (int i = 0; i < rowB; ++i) {
        for (int j = 0; j < colB; ++j) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("product of a and b is : \n");
    for (int i = 0; i < rowA; ++i) {
        for (int j = 0; j < colB; ++j) { // Corrected loop condition
            c[i][j] = 0;
            for (int k = 0; k < colB; ++k) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < rowA; ++i) {
        for (int j = 0; j < colB; ++j) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}