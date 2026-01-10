// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D

#include <stdio.h>

void printDigits(int N)
{
    if (N < 10)
    {
        printf("%d", N);
        return;
    }

    printDigits(N / 10);
    printf(" %d", N % 10);
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);

        printDigits(N);
        printf("\n");
    }

    return 0;
}
