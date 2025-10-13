
#include <stdio.h>

int main() {

    // Outer loop controls the number of rows
    // Here, it will run 5 times (for i = 1 to 5)
    for (int i = 1; i <= 5; i++) {

        // Inner loop controls the number of stars printed in each row
        // For every row 'i', it prints 'i' number of stars
        for (int j = 1; j <= i; j++) {
            printf("* "); // print a star followed by a space
        }

        printf("\n"); // move to the next line after each row
    }

    return 0; // end of program
}
