// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

#include <stdio.h>

void printNumbers(int N)
{
    if (N == 0)
        return;
    printNumbers(N - 1);
    printf("%d\n", N);
}

int main()
{
    int N;
    scanf("%d", &N);

    printNumbers(N);

    return 0;
}
