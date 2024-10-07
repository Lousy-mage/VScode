#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4,1,5,5, 5, 1, 5, 6, 7};
    int len = sizeof(a) / sizeof(a[0]),count=0;
    int b[len];

    for (int i = 0; i < len; i++) {
        int isDuplicate = 0;
        for (int j = i + 1; j < len; j++) {
            if (a[i] == a[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (isDuplicate) {
            if(a[i]!=b[count]){
                b[count]=a[i];
                if(b[count]!=b[count-1])
                    count++;
            }
        }

    }
    for(int i=0;i<count;i++){
        printf("%d ",b[i]);
    }
    printf("\n");

    return 0;
}