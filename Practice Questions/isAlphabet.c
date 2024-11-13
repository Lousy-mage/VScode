#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int checkAlpha(char string[]) {
    int len = strlen(string);
    for (int i = 0; i < len; i++) {
        if (!((string[i] >= 'A' && string[i] <= 'Z') || 
              (string[i] >= 'a' && string[i] <= 'z') || 
              string[i] == ' ')) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char p[50];
    printf("Enter a string:\n");
    fgets(p, sizeof(p), stdin);
    p[strcspn(p, "\n")] = '\0';

    printf("%s\n", p);
    int flag = checkAlpha(p);
    if (flag == 0) {
        printf("The given string contains only alphabets\n");
    } else {
        printf("The given string contains other characters\n");
    }
    return 0;
}
