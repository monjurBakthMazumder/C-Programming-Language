// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int floor = a / b;
    int ceil = floor;
    if (a % b > 0)
    {
        ceil++;
    }

    printf("floor %d / %d = %d\n", a, b, floor);
    printf("ceil %d / %d = %d\n", a, b, ceil);

    if ((a % b) * 2 >= b)
    {

        printf("round %d / %d = %d\n", a, b, (a / b) + 1);
    }
    else
    {
        printf("round %d / %d = %d\n", a, b, (a / b));
    }

    return 0;
}