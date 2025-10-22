// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

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
    int min_number_position = 0;
    int max_number = INT_MIN;
    int max_number_position = 0;
    for (int i = 0; i < n; i++)
    {
        if (min_number > arr[i])
        {
            min_number = arr[i];
            min_number_position = i;
        }
        if (max_number < arr[i])
        {
            max_number = arr[i];
            max_number_position = i;
        }
    }

    arr[min_number_position] = max_number;
    arr[max_number_position] = min_number;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}