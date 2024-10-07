#include <stdio.h>

void set_bit(unsigned int *num, int pos) {
    *num |= (1 << pos);
}

void clear_bit(unsigned int *num, int pos) {
    *num &= ~(1 << pos);
}

int check_bit(unsigned int num, int pos) {
    return num&(1 << pos);
}

void flip_bit(unsigned int *num, int pos) {
    *num ^= (1 << pos);
}

int main() {
    unsigned int number;
    int position;
    int choice;

    printf("Enter a number: ");
    scanf("%u", &number);

    do {
        printf("\nChoose an operation:\n");
        printf("1. Set a bit\n");
        printf("2. Clear a bit\n");
        printf("3. Check a bit\n");
        printf("4. Flip a bit\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the position to set: ");
                scanf("%d", &position);
                set_bit(&number, position);
                printf("Number after setting bit: %u\n", number);
                break;
            case 2:
                printf("Enter the position to clear: ");
                scanf("%d", &position);
                clear_bit(&number, position);
                printf("Number after clearing bit: %u\n", number);
                break;
            case 3:
                printf("Enter the position to check: ");
                scanf("%d", &position);
                if (check_bit(number, position)) {
                    printf("Bit at position %d is set.\n", position);
                } else {
                    printf("Bit at position %d is not set.\n", position);
                }
                break;
            case 4:
                printf("Enter the position to flip: ");
                scanf("%d", &position);
                flip_bit(&number, position);
                printf("Number after flipping bit: %u\n", number);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}