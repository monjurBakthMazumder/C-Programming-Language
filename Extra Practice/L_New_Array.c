// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L

#include <stdio.h>

void createNewArray(int N, int A[], int B[], int C[])
{
    for (int i = 0; i < N; i++)
    {
        C[i] = B[i];
        C[i + N] = A[i];
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    int A[N], B[N], C[2 * N];

    for (int i = 0; i < N; i++)
        scanf("%d", &A[i]);
    for (int i = 0; i < N; i++)
        scanf("%d", &B[i]);

    createNewArray(N, A, B, C);

    for (int i = 0; i < 2 * N; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", C[i]);
    }
    printf("\n");

    return 0;
}
