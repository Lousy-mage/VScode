#include <stdio.h>

int main() {
    // Arithmetic operators
    int a = 10, b = 5;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    printf("Arithmetic operations:\n");
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, difference);
    printf("%d * %d = %d\n", a, b, product);
    printf("%d / %d = %d\n", a, b, quotient);
    printf("%d %% %d = %d\n", a, b, remainder);

    // Logical operators
    int x = 1, y = 0;
    int andResult = x && y;
    int orResult = x || y;
    int notResult = !x;

    printf("\nLogical operations:\n");
    printf("%d && %d = %d\n", x, y, andResult);
    printf("%d || %d = %d\n", x, y, orResult);
    printf("!%d = %d\n", x, notResult);

    printf("\nTruth table for AND operator:\n");
    printf("x  y  x && y\n");
    printf("0  0  0\n");
    printf("0  1  0\n");
    printf("1  0  0\n");
    printf("1  1  1\n");

    printf("\nTruth table for OR operator:\n");
    printf("x  y  x || y\n");
    printf("0  0  0\n");
    printf("0  1  1\n");
    printf("1  0  1\n");
    printf("1  1  1\n");

    printf("\nTruth table for NOT operator:\n");
    printf("x  !x\n");
    printf("0  1\n");
    printf("1  0\n");

    // Relational operators
    int p = 15, q = 20;
    int greaterThan = p > q;
    int lessThan = p < q;
    int greaterThanOrEqual = p >= q;
    int lessThanOrEqual = p <= q;
    int equal = p == q;
    int notEqual = p != q;

    printf("\nRelational operations:\n");
    printf("%d > %d = %d\n", p, q, greaterThan);
    printf("%d < %d = %d\n", p, q, lessThan);
    printf("%d >= %d = %d\n", p, q, greaterThanOrEqual);
    printf("%d <= %d = %d\n", p, q, lessThanOrEqual);
    printf("%d == %d = %d\n", p, q, equal);
    printf("%d != %d = %d\n", p, q, notEqual);

    // Assignment operators
    printf("\nAssignment operations:\n");
    int c = 10;
    c += 5; // equivalent to c = c + 5
    printf("c += 5 =%d\n", c);
    c -= 3; // equivalent to c = c - 3
    printf("c -= 3 =%d\n", c);
    c *= 2; // equivalent to c = c * 2
    printf("c *= 4 =%d\n", c);
    c /= 4; // equivalent to c = c / 4
    printf("c /= 4 =%d\n", c);
    c %= 3; // equivalent to c = c % 3
    printf("c %= 3 =%d\n", c);


    // Bitwise operators
    int num1 = 10, num2 = 15;
    int andBitwise = num1 & num2;
    int orBitwise = num1 | num2;
    int xorBitwise = num1 ^ num2;
    int leftShift = num1 << 2;
    int rightShift = num1 >> 2;
    int notBitwise = ~num1;

    printf("\nBitwise operations:\n");
    printf("%d & %d = %d\n", num1, num2, andBitwise);
    printf("%d | %d = %d\n", num1, num2, orBitwise);
    printf("%d ^ %d = %d\n", num1, num2, xorBitwise);
    printf("%d << 2 = %d\n", num1, leftShift);
    printf("%d >> 2 = %d\n", num1, rightShift);
    printf("~%d = %d\n", num1, notBitwise);

    return 0;
}