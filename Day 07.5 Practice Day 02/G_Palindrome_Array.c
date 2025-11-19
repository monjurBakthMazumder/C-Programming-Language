// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");

    return 0;
}