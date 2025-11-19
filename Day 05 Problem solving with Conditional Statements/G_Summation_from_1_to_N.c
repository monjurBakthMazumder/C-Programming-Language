// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G

#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int sum = n * (n + 1) / 2;

    printf("%lld", sum);
    return 0;
}