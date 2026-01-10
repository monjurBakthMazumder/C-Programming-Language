// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int mn = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < mn)
        {
            mn = a[i];
        }
    }

    int freq = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == mn)
        {
            freq++;
        }
    }

    if (freq % 2 == 1)
        printf("Lucky\n");
    else
        printf("Unlucky\n");

    return 0;
}
