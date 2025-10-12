#include <stdio.h>

int main() {
    // Integer input
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);  // & tells C where to store the input
    printf("You are %d years old.\n", age);

    // Float input
    float height;
    printf("Enter your height in feet: ");
    scanf("%f", &height);
    printf("Your height is %.2f feet.\n", height);

    // Character input
    char grade;
    printf("Enter your grade (A-F): ");
    scanf(" %c", &grade); // note the space before %c
    printf("Your grade is %c.\n", grade);

    // String input
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name); // Reads a single word
    printf("Hello, %s!\n", name);

    return 0;
}
