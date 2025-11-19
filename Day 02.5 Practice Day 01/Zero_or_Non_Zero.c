// Problem link: https://www.hackerrank.com/contests/introduction-to-c-programming-a-module-2-5-a-practice-day-1/challenges/zero-or-non-zero

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N == 0)
        printf("Zero");
    else
        printf("Non Zero");

    return 0;
}
