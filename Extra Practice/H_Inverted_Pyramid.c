// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/H

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

void printInvertedPyramid(int current, int N)
{
    if (current > N)
        return; 

    printSpaces(current - 1);

    printStars(2 * (N - current + 1) - 1);

    printf("\n");

    printInvertedPyramid(current + 1, N);
}

int main()
{
    int N;
    scanf("%d", &N);

    printInvertedPyramid(1, N);

    return 0;
}
