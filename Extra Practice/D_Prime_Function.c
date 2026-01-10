// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D

#include <stdio.h>
#include <math.h>

int isPrime(long long n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;

    long long i;
    for (i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long long N;
        scanf("%lld", &N);

        if (isPrime(N))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
