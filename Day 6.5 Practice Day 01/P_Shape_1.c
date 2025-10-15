// Problem Line: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (n; n > 0; n--)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}