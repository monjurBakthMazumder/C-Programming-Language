// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min_number = INT_MAX;
    int min_number_position;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min_number)
        {
            min_number = arr[i];
            min_number_position = i + 1;
        }
    }

    printf("%d %d", min_number, min_number_position);
    return 0;
}