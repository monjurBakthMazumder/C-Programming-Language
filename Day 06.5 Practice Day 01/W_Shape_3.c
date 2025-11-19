// Problem Line: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

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
    for (int i = n, j = 0; n > 0; n--, j++)
    {
        for (int space = 0; space < j; space++)
        {
            printf(" ");
        }
        for (int k = (n * 2); k <= (k * 2) - 2; k--)
        {
            printf("*");
        }
        // printf("* %d", n);
        printf("\n");
    }

    return 0;
}