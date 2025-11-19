// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

#include <stdio.h>
#include <limits.h>

int main()
{
    int x, val;
    // int max = INT_MAX;
    int max = INT_MIN;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        scanf("%d", &val);
        if (val > max)
        {
            max = val;
        }
    }

    printf("%d", max);
    return 0;
}