#include <stdio.h>

// Function to calculate the factorial of 'n'
long long factorial(int n) {
    // 1. **Base Case:** Stop condition for the recursion.
    if (n == 0 || n == 1) {
        return 1;
    }
    // 2. **Recursive Step:** Calls itself with a smaller problem (n-1).
    else {
        // Example: factorial(3) returns 3 * factorial(2)
        // factorial(2) returns 2 * factorial(1)
        // factorial(1) returns 1 (Base Case)
        return n * factorial(n - 1); 
    }
}

int main() {
    int num = 4;
    printf("Factorial of %d is %lld\n", num, factorial(num)); 
    // Output: Factorial of 4 is 24 (4 * 3 * 2 * 1)
    return 0;
}