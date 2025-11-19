// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

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

    int value;
    scanf("%d", &value);
    int position = -1;

    for (int i = 0; i < n; i++)
    {
        if (value == arr[i])
        {
            position = i;
            break;
        }
    }
    printf("%d", position);
    return 0;
}