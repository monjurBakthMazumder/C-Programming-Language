// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

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
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (sum < 0)
    {
        sum = -sum;
    }
    printf("%lld", sum);
    return 0;
}