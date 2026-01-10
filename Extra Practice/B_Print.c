// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B

#include <stdio.h>

void printNumbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i > 1)
            printf(" ");
        printf("%d", i);
    }
    printf("\n");
}

int main()
{
    int N;
    scanf("%d", &N);

    printNumbers(N);

    return 0;
}
