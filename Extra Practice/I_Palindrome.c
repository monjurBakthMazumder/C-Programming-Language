// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

#include <stdio.h>

void processNumber(int n)
{
    int original_n = n;
    int reversed_n = 0;
    int temp = n;

    while (temp > 0)
    {
        int remainder = temp % 10;
        reversed_n = reversed_n * 10 + remainder;
        temp /= 10;
    }

    printf("%d\n", reversed_n);

    if (original_n == reversed_n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    int N;
    if (scanf("%d", &N) != 1)
    {
        return 1;
    }

    processNumber(N);

    return 0;
}