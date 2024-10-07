// #include <stdio.h>

// int main(){
//     FILE *ptr;
//     ptr = fopen("/home/mage/VScode/Cprogramming-iies/FilesInC/newfile.m","a");
//     if ( ptr != NULL ){
//         printf("file opened\n");
//         fputs("1. ",ptr);
//         for(int i=0;i<10;i++)
//             fputs("HELLO\n",ptr);
//         printf("data added\n");
//     }
//     else{
//         printf("file not opened\n");
//     }
//     fclose(ptr);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main(){
//     FILE *ptr;
//     char c;
//     ptr = fopen("/home/mage/VScode/Cprogramming-iies/FilesInC/test.text","w");
//     if(ptr!=NULL){
//         printf("file opened\n");
//         while((c=fgetc(ptr))!=EOF){
//             printf("%c",c);
//         }
//         printf("\n")
//     }
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//     FILE *ptr;
//     int i=0; float f=0;
//     char s[10];
//     ptr = fopen("/home/mage/VScode/Cprogramming-iies/FilesInC/test1.text","r");
//     if(ptr!=NULL){
//         printf("file opened\n");
//         fscanf(ptr,"%d %f %s",&i,&f,&s);
//         printf("%d %.2f %s\n",i,f,s);
//     }
//     else{
//         printf("file not opened");
//     }
//     fclose(ptr);
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *s_f, *d_f;
    char s_p[100], d_p[100];
    char buffer[1024];
    size_t bytesRead;
    printf("enter source image path: ");
    scanf("%s",s_p);

    printf("enter the destination image path: ");
    scanf("%s", d_p);

    s_f= fopen(s_p, "rb");
    if (s_f == NULL){
        printf("error: could not open source file\n");
        return 1;
    }
    d_f = fopen(d_p, "wb");
    if(d_f == NULL){
        printf("error: could not open destination path\n");
        fclose(s_f);
        return 1;
    }

    while((bytesRead=fread(buffer,1,sizeof(buffer),s_f))>0){
        fwrite(buffer,1,bytesRead,d_f);
    }
    fclose(s_f);
    fclose(d_f);
    printf("file successfully copied.\n");
    return 0;
}