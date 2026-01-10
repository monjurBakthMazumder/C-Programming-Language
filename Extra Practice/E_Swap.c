// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);

    swap(&X, &Y);

    printf("%d %d\n", X, Y);

    return 0;
}
