#include <stdio.h>

int main() {
    // Integer variable
    int age = 20;
    printf("Age: %d years\n", age);

    // Float variable
    float height = 5.8;
    printf("Height: %.1f feet\n", height);

    // Character variable
    char grade = 'A';
    printf("Grade: %c\n", grade);

    // Double variable (for more precision)
    double gpa = 3.75678;
    printf("GPA: %.2f\n", gpa);  // print only 2 decimal places

    // Multiple variable declaration
    int a = 5, b = 10, sum;
    sum = a + b;
    printf("Sum of %d and %d is %d\n", a, b, sum);

    // Updating variable value
    age = 21;
    printf("Updated Age: %d years\n", age);

    return 0;
}
