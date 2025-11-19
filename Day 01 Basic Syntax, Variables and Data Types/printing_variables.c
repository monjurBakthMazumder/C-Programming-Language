#include <stdio.h>

int main() {
    // Integer variable
    int age = 25;

    // Float variable
    float height = 5.9;

    // Double variable
    double gpa = 3.75678;

    // Character variable
    char grade = 'A';

    // String (array of chars)
    char name[] = "Monjur";

    // Printing variables individually
    printf("Age: %d years\n", age);
    printf("Height: %.1f feet\n", height);
    printf("GPA: %.2f\n", gpa);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);

    // Printing multiple variables in a single line
    printf("%s is %d years old, %.1f feet tall, and has a GPA of %.2f with grade %c.\n", 
            name, age, height, gpa, grade);

    return 0;
}
