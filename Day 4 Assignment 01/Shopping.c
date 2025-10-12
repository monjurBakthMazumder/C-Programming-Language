// Problem link: https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-08/challenges/shopping-13

#include <stdio.h>

int main()
{
    int  n;
    scanf("%d", &n);
    if(n <= 1000){
        printf("Bad luck!\n");
    }
    else{
        if(n < 1500){
            printf("I will buy Punjabi");
        }else{
            printf("I will buy Punjabi\n");
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    return 0;
}