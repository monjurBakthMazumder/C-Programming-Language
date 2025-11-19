// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int small, middle, big;

    if (x > y)
    {
        if (x > z)
        {
            big = x;
            if (y > z)
            {
                middle = y;
                small = z;
            }
            else
            {
                middle = z;
                small = y;
            }
        }
        else
        {
            big = z;
            middle = x;
            small = y;
        }
    }
    else if (y > z)
    {
        big = y;
        if (x > z)
        {
            middle = x;
            small = z;
        }
        else
        {
            middle = z;
            small = x;
        }
    }
    else
    {
        big = z;
        if (x > y)
        {
            middle = x;
            small = y;
        }
        else
        {
            middle = y;
            small = x;
        }
    }

    printf("%d\n", small);
    printf("%d\n", middle);
    printf("%d\n", big);
    printf("\n");
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}