// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y

#include <stdio.h>

int main()
{
    int N;

    if (scanf("%d", &N) != 1)
    {
        return 1;
    }

    long long a = 0;
    long long b = 1;
    long long next;

    for (int i = 1; i <= N; i++)
    {
        if (i == 1)
        {
            printf("%lld", a);
        }
        else if (i == 2)
        {
            printf(" %lld", b);
        }
        else
        {
            next = a + b;

            printf(" %lld", next);
            a = b;
            b = next;
        }
    }

    printf("\n");

    return 0;
}