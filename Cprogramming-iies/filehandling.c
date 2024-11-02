#include <stdio.h>
#define FILE_NAME "/home/mage/VScode/Cprogramming-iies/newfile.txt"

void writeToFile(){
    FILE *file = fopen(FILE_NAME,"w");
    if(file!=NULL){
        fputs("Hello world",file);
    }
    fclose(file);
}
void readFile(){
    FILE *file = fopen(FILE_NAME,"r");
    char buffer[256];
    if(file!=NULL){
        fgets(buffer,sizeof(buffer),file);
        printf("%s\n",buffer);
    }
    fclose(file);
}
int main(){
    writeToFile();
    readFile();
    return 0;
}