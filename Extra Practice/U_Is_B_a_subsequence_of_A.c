// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/U

#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N], B[M];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < M; i++)
    {
        scanf("%d", &B[i]);
    }

    int i = 0, j = 0;

    while (i < N && j < M)
    {
        if (A[i] == B[j])
        {
            j++;
        }
        i++;
    }

    if (j == M)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
