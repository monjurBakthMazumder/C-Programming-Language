// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P

#include <stdio.h>

int main()
{
    int A;
    scanf("%d ", &A);
    if ((A / 1000) % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}