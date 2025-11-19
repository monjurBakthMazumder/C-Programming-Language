#include <stdio.h>

int main() {
    int a = 5, b = 10;

    // Logical AND
    printf("(a < b) && (b > 0) : %d\n", (a < b) && (b > 0));  // true && true = 1
    printf("(a > b) && (b > 0) : %d\n", (a > b) && (b > 0));  // false && true = 0

    // Logical OR
    printf("(a > b) || (b > 0) : %d\n", (a > b) || (b > 0));  // false || true = 1
    printf("(a > b) || (b < 0) : %d\n", (a > b) || (b < 0));  // false || false = 0

    // Logical NOT
    printf("!(a == b) : %d\n", !(a == b));  // !(false) = true (1)
    printf("!(a < b)  : %d\n", !(a < b));   // !(true) = false (0)

    return 0;
}
