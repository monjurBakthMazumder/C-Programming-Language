#include <stdio.h>

int main() {
    int marks;

    scanf("%d", &marks);

    if (marks >= 40) { // first condition
        printf("You passed!\n");

        if (marks >= 80) {
            printf("Grade: A+\n");
        } 
        else if (marks >= 70) {
            printf("Grade: A\n");
        } 
        else if (marks >= 60) {
            printf("Grade: B\n");
        } 
        else {
            printf("Grade: C\n");
        }

    } else { // if first condition is false
        printf("You failed. \nGrade: F\n");
    }

    return 0;
}
