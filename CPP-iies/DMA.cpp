/* malloc */

// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int main(){
//     int *ptr=(int*)malloc(5*sizeof(int));
//     cout<<"enter 5 elements: ";
//     for(int i=0;i<5;i++){
//         cin>>ptr[i];
//     }
//     cout<<"\nElements are:\n";
//     for(int i=0;i<5;i++){
//         cout<<ptr[i]<<" ";
//     }
//     cout<<endl;
//     free(ptr);
//     return 0;
// }

/* calloc: aka Contiguous memory allocation */

// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int main(){
//     int n=6;
//     int *ptr = (int*) calloc (n, sizeof(int));
//     cout<<"enter "<<n<<" values\n";
//     for(int i=0;i<n;i++){
//         cin>>ptr[i];
//     }
//     cout<<"values are\n";
//     for(int i=0;i<n;i++){
//         cout<<ptr[i]<<" ";
//     }
//     cout<<endl;
//     free(ptr);
//     return 0;
// }

/* realloc */

// #include <iostream>
// #include <stdlib.h>
// using namespace std;

// int main(){
//     int n=6;
//     int *ptr = (int*) calloc (n, sizeof(int));
//     cout<<"enter "<<n<<" values\n";
//     for(int i=0;i<n;i++){
//         cin>>ptr[i];
//     }
//     n=7;
//     ptr=(int*)realloc(ptr,(n,sizeof(int)));
//     ptr[n-1]=7;
//     cout<<"values are\n";
//     for(int i=0;i<n;i++){
//         cout<<ptr[i]<<" ";
//     }

//     cout<<endl;
//     free(ptr);
//     return 0;
// }

/* Allocaating a single character in heap */

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int n=1;
    char *ptr = (char*) calloc (n, sizeof(char));
    cout<<"enter a character\n";
    
    cin>>ptr;
    cout<<"\ncharacter is\n";
    cout<<ptr<<endl;
    free(ptr);
    return 0;
}