// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/G

#include <stdio.h>

void printSpaces(int n)
{
    if (n == 0)
        return;
    printf(" ");
    printSpaces(n - 1);
}

void printStars(int n)
{
    if (n == 0)
        return;
    printf("*");
    printStars(n - 1);
}

void printPyramid(int current, int N)
{
    if (current > N)
        return;

    printSpaces(N - current);

    printStars(2 * current - 1);

    printf("\n");

    printPyramid(current + 1, N);
}

int main()
{
    int N;
    scanf("%d", &N);

    printPyramid(1, N);

    return 0;
}
