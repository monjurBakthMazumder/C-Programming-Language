// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n < 2)
    {
        printf("%d\n", -1);
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}