// #include <stdio.h>
// // #include <stdlib.h>

// int main(){
//     int a[2][3] = {1,2,3,4,5,6};
//     printf("%d %d\n", *(*(a+1)+2), *(*a+0)+2);
//     printf("%d\n",*(*(a+1)));

//     // system("pause");
//     getchar();
// }


/*sorting*/

#include <stdio.h>

int main() {
    int a[] = {72, 5, 19, 21, 11, 4};

    int len = sizeof(a)/sizeof(a[0]);

    for(int j = 0; j<len ; j++){
        for(int i = 0; i<len-1; i++){
            if(a[i]>a[i+1]){
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }

    for(int i = 0; i<len; i++){
            printf("%d ",a[i]);
    }
    getchar();
}