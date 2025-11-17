// problem Link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-08/challenges/difference-array

#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);
    while (t--)
    {
        int n;

        scanf("%d", &n);
        int arr1[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }

        int arr2[n];

        for (int i = 0; i < n; i++)
        {
            arr2[i] = arr1[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((arr2[i] > arr2[j]))
                {
                    int temp = arr2[i];
                    arr2[i] = arr2[j];
                    arr2[j] = temp;
                }
            }
        }

        int arr3[n];

        for (int i = 0; i < n; i++)
        {
            int result = arr1[i] - arr2[i];
            if (result < 0)
            {
                arr3[i] = -(result);
            }
            else
            {
                arr3[i] = result;
            }
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr3[i]);
        }
        printf("\n");
    }

    return 0;
}