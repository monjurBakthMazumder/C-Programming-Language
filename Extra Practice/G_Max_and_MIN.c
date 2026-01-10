// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G

#include <stdio.h>

// Function to find min and max of an array
void findMinMax(int arr[], int n, int *min, int *max)
{
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int minVal, maxVal;
    findMinMax(A, N, &minVal, &maxVal);

    printf("%d %d\n", minVal, maxVal);

    return 0;
}
