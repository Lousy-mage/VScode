// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int *p, n, i;
//     printf("enter the value of n: ");
//     scanf("%d",&n);
//     p=(int *) malloc(n* sizeof(int));
//     printf("enter the value: ");
//     for(i=0; i<n; i++){
//         scanf("%d",&p[i]);
//     }
//     free(p);
//     p=NULL;
//     printf("\n");
//     for(i=0;i<n;i++){
//         printf("%d\t",p[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int *ptr=(int *) malloc(5*sizeof(int));
//     if(ptr==NULL){
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     for(int i=0;i<5;i++){
//         ptr[i]=i*2;
//     }

//     for(int i=0;i<5;i++){
//         printf("%d ",ptr[i]);
//     }

//     printf("\n");

//     ptr=(int *) realloc(ptr, 10*sizeof(int));
//     if(ptr==NULL){
//         printf("MEMROY reallocation failed\n");
//         return 1;
//     }
//     for(int i=0;i<10;i++){
//         ptr[i]=i*2;
//     }

//     printf("values stored in allocated memory(after realloc): \n");
//     for(int i=0; i<10; i++){
//         printf("%d ",ptr[i]);
//     }

//     printf("\n");

//     free(ptr);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p,n,i,m;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter the value : ");
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d\n",*(p+i));
    }

    printf("enter the new value of m: ");
    scanf("%d",&m);
    p=(int*) realloc(p,m*sizeof(int));
    for(i=n;i<m;i++){
        scanf("%d",&p[i]);
    }
    printf("\n");
    for(i=0;i<m;i++){
        printf("%d\n",*(p+i));
    }
    free(p);
    p=NULL;
    
    return 0;
}
