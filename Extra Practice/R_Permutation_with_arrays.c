// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int A[n], B[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    for (int i = 0; i < n; i++)
        scanf("%d", &B[i]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] > A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (B[i] > B[j])
            {
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    int ok = 1;
    for (int i = 0; i < n; i++)
    {
        if (A[i] != B[i])
        {
            ok = 0;
            break;
        }
    }

    if (ok)
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}
