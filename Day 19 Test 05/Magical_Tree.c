// problem Link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-08/challenges/magical-tree-3

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= ((n / 2 + 1) + 5); i++)
    {
        for (int j = ((n / 2 + 1) + 5); j > i; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < (i * 2) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}