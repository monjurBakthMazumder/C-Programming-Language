// Problem link: https://www.hackerrank.com/contests/introduction-to-c-programming-a-module-2-5-a-practice-day-1/challenges/multiple-or-not

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a % b == 0 || b % a == 0)
        printf("Yes");
    else
        printf("No");

    return 0;
}
