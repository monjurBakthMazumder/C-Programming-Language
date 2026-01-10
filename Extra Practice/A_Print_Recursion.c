// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

#include <stdio.h>

void printRecursion(int N)
{
    if (N == 0)
        return;
    printf("I love Recursion\n");
    printRecursion(N - 1);
}

int main()
{
    int N;
    scanf("%d", &N);

    printRecursion(N);

    return 0;
}
