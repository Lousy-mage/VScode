#include <stdio.h>
#include <string.h>

void paliStr(char *str, int length) {
    char rev[length];
    for (int i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }

    if (strcmp(str, rev) == 0) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
}

int main() {
    char str[30];
    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);
    paliStr(str, length);

    return 0;
}