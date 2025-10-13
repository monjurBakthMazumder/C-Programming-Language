// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int sum = 0;
        if (x < y)
        {
            for (++x; x < y; x++)
            {
                if (x % 2 != 0)
                {
                    sum += x;
                }
            }
        }
        else if (x > y)
        {
            for (++y; y < x; y++)
            {
                if (y % 2 != 0)
                {
                    sum += y;
                }
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}