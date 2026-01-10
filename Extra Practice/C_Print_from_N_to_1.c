// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include <stdio.h>

void printNumbers(int N)
{
    if (N == 0)
        return;

    printf("%d", N);

    if (N > 1)
        printf(" ");

    printNumbers(N - 1);
}

int main()
{
    int N;
    scanf("%d", &N);

    printNumbers(N);

    printf("\n");
    return 0;
}
