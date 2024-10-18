// #include <stdio.h>
// int main(){
//     FILE *ptr;
//     ptr=fopen("/home/mage/VScode/Cprogramming-iies/seek.txt","w+");
//     fputs("iies bangalore",ptr);

//     fseek(ptr, 8, SEEK_SET);
//     printf("%d\n",ftell(ptr));
//     rewind(ptr);
//     printf("%d\n",ftell(ptr));

//     fclose(ptr);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     FILE *ptr;
//     char line[250];
//     ptr = fopen("/home/mage/VScode/Cprogramming-iies/test01.txt","w+");
//     fputs("iies bangalore",ptr);

//     fseek(ptr, 8, SEEK_SET);
//     printf("%d\n",ftell(ptr));
//     fputs("koramangala",ptr);
//     rewind(ptr);
//     printf("%d\n",ftell(ptr));
//     fgets(line,250,ptr);
//     printf("%s\n",line);
//     fgets(line,250,ptr);
//     printf("%s",line);
//     printf("\n");
//     fclose(ptr);
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(){

//     FILE *ptr;
//     char line[250];
//     ptr=fopen("/home/mage/VScode/Cprogramming-iies/test01.txt","w");
//     fputs("hello world\nWelcome everyone",ptr);
//     fclose(ptr);
//     system("kate /home/mage/VScode/Cprogramming-iies/test01.txt");
//     ptr=fopen("/home/mage/VScode/Cprogramming-iies/test01.txt","r");
//     while (fgets(line,sizeof(line),ptr)!=NULL)
//         printf("%s",line);
//     fclose(ptr);
// }

// #include <stdio.h>
// #include <stdbool.h>
// int main(){
//     bool isEven = true;
//     bool isOdd = false;

//     if (isEven){
//         printf("even\n");
//     }
//     else{
//         printf("odd");
//     }
//     return 0;

// }

#include <stdio.h>
#include <stdarg.h>

int sum(int num_args,...){
    int total=0;
    va_list args;
    va_start(args,num_args);

    for(int i=0; i<num_args;i++){
        total+=va_arg(args,int);
    }
    va_end(args);
    return total;
}

int main(){
    int result = sum(4,10,20,30,40);
    printf("sum: %d\n",result);
    return 0;
}

