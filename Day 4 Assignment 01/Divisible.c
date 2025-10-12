// Problem link: https://www.hackerrank.com/contests/assignment-01-a-introduction-to-c-programming-a-batch-08/challenges/divisible-4

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}