// Problem Link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/count-me-2-1

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
    int divided_by_2 = 0;
    int divided_by_3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            divided_by_2++;
        }
        else if (arr[i] % 3 == 0)
        {
            divided_by_3++;
        }
    }

    printf("%d %d", divided_by_2, divided_by_3);

    return 0;
}