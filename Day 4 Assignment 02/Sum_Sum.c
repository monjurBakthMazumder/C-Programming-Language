// problem Link: https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-08/challenges/sum-sum-2

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

    int positive_sum = 0;
    int Negative_sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positive_sum += arr[i];
        }
        else
        {
            Negative_sum += arr[i];
        }
    }

    printf("%d %d", positive_sum, Negative_sum);

    return 0;
}