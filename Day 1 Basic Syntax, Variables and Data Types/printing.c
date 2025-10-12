#include <stdio.h>

int main() {
    // Printing text
    printf("Hello! Welcome to C Programming.\n");

    // Printing numbers directly
    printf("The sum of 2 + 3 is %d\n", 2 + 3);

    // Using variables
    int age = 20;
    float height = 5.8;
    char grade = 'A';

    printf("Age: %d years\n", age);         // %d for integers
    printf("Height: %.1f feet\n", height);  // %.1f for float with 1 decimal
    printf("Grade: %c\n", grade);           // %c for character

    // Printing multiple variables in one line
    printf("Student info: Age=%d, Height=%.1f, Grade=%c\n", age, height, grade);

    return 0;
}
