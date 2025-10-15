// Problem Line: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L

#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    int limit;
    int GCD;

    if (x > y)
    {
        limit = x;
    }
    else
    {
        limit = y;
    }

    for (int i = 1; i <= limit; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            GCD = i;
        }
    }

    printf("%d", GCD);
    return 0;
}