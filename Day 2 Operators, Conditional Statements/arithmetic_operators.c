#include <stdio.h>

int main() {
    int a = 10, b = 3;

    printf("a + b = %d\n", a + b);  // Addition
    printf("a - b = %d\n", a - b);  // Subtraction
    printf("a * b = %d\n", a * b);  // Multiplication
    printf("a / b = %d\n", a / b);  // Division (integer division)
    printf("a %% b = %d\n", a % b); // Modulus (%% to print % sign)

    // Increment and Decrement examples
    int x = 5;

    printf("x = %d\n", x);
    printf("x++ = %d\n", x++);  // Post-increment: use then increase
    printf("After x++ -> x = %d\n", x);
    printf("++x = %d\n", ++x);  // Pre-increment: increase then use

    printf("x-- = %d\n", x--);  // Post-decrement: use then decrease
    printf("After x-- -> x = %d\n", x);
    printf("--x = %d\n", --x);  // Pre-decrement: decrease then use

    return 0;
}
