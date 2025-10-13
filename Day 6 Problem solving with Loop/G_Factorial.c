// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int val;
        scanf("%d", &val);

        long long fac = 1;
        for (int j = 1; j <= val; j++)
        {
            fac *= j;
        }
        printf("%lld\n", fac);
    }

    return 0;
}