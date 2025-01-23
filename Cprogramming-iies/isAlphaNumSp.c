#include <stdio.h>
#include <stdlib.h>

void checkChar(char character){
    if(character >= 48 && character <= 57) printf("%c is a Number\n",character);
    else if((character >= 65 && character <= 90) || (character >=97 && character <= 122 )) printf("%c is an Alphabet\n",character);
    else if(!(character >= 0 && character <= 31)) printf("%c is a special symbol\n",character);
    else printf("You have not entered a number nor an alphabet nor a special character\n");
    system("pause");
}

int main(){
    while (1)
    {
    char character;
    printf("Enter a character:\t");
    scanf(" %c",&character);
    checkChar(character);
    }
    
}