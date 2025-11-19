// Problem Line: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R

#include <stdio.h>

int main()
{
    int x, y;
    while (scanf("%d %d", &x, &y))
    {
        if (x < 1 || y < 1)
        {
            return 0;
        }
        int big, small;
        if (x > y)
        {
            big = x;
            small = y;
        }
        else
        {

            big = y;
            small = x;
        }
        int sum = 0;
        for (small; small <= big; small++)
        {
            printf("%d ", small);
            sum += small;
        }
        printf("sum =%d\n", sum);
    }

    return 0;
}