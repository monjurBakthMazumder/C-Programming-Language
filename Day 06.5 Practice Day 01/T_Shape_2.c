// Problem Line: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int space = n - i;

        for (space; space > 0; space--)
        {
            printf(" ");
        }
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}