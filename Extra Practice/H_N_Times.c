// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H

#include <stdio.h>

void printCharNTimes(int N, char C)
{
    for (int i = 0; i < N; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%c", C);
    }
    printf("\n");
}

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        char C;
        scanf("%d %c", &N, &C);
        getchar();
        printCharNTimes(N, C);
    }

    return 0;
}
