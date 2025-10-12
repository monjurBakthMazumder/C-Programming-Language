// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C

#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d * %d = %lld\n", x, y, (long long)x * y);
    printf("%d - %d = %d", x, y, x - y);

    return 0;
}