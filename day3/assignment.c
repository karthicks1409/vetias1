#include <stdio.h>

int main() {
    int a, b;

    // Simple assignment
    a = 10;
    printf("Value of a: %d\n", a);

    // Add and assign
    b = 5;
    b += a; // Equivalent to b = b + a
    printf("Value of b after +=: %d\n", b);

    // Subtract and assign
    b -= a; // Equivalent to b = b - a
    printf("Value of b after -=: %d\n", b);

    // Multiply and assign
    b *= a; // Equivalent to b = b * a
    printf("Value of b after *=: %d\n", b);

    // Divide and assign
    b /= a; // Equivalent to b = b / a
    printf("Value of b after /=: %d\n", b);

    // Modulus and assign
    b %= 3; // Equivalent to b = b % 3
    printf("Value of b after %%=: %d\n", b);

    return 0;
}