// Problem Line: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int small;
    int big;
    if (a > b)
    {
        small = b;
        big = a;
    }
    else
    {

        small = a;
        big = b;
    }

    int count = 0;

    for (small; small <= big; small++)
    {
        bool lucky = true;
        int x = small;
        while (x != 0)
        {
            if (x % 10 != 4 && x % 10 != 7)
            {
                lucky = false;
                break;
            }
            x /= 10;
        }

        if (lucky)
        {
            if (count == 0)
            {

                printf("%d", small);
            }
            else
            {
                printf(" %d", small);
            }
            count++;
        }
    }
    if (count == 0)
    {
        printf("%d", -1);
    }

    return 0;
}