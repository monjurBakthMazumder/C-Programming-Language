// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char s[n + 1];
    scanf("%s", s);

    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += s[i] - '0'; 
    }

    printf("%lld\n", sum);

    return 0;
}
