#include <stdio.h>

int main() {
    // Declaring two integer variables and initializing them with 5
    int a = 5, b = 5;

    // Variables to store results
    int preResult, postResult;

    /*
        -------------------------------------
        🔹 PRE-INCREMENT OPERATOR: ++a
        -------------------------------------
        - It increases the value of 'a' first,
          then uses the updated value in the expression.
        - So, 'a' becomes 6 before it is assigned to preResult.
    */
    preResult = ++a;  // a = 6, preResult = 6

    /*
        -------------------------------------
        🔹 POST-INCREMENT OPERATOR: b++
        -------------------------------------
        - It uses the current value of 'b' first,
          then increases it by 1 after the expression is evaluated.
        - So, 'postResult' gets 5, but 'b' becomes 6 after this line.
    */
    postResult = b++; // b = 6 (after increment), postResult = 5

    // Displaying results for better understanding
    printf("After pre-increment:\n");
    printf("a = %d, preResult = %d\n", a, preResult);

    printf("\nAfter post-increment:\n");
    printf("b = %d, postResult = %d\n", b, postResult);

    /*
        -------------------------------------
        🔍 Summary:
        -------------------------------------
        Pre-increment (++a): Increments first, then uses the value.
        Post-increment (a++): Uses the value first, then increments.
    */

    return 0;
}
