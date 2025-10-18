// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O

#include <stdio.h>

int main()
{
    int a, b;
    char s;
    scanf("%d%c%d", &a, &s, &b);

    if (s == '*')
    {
        printf("%d", a * b);
    }
    if (s == '/')
    {
        printf("%d", a / b);
    }
    if (s == '+')
    {
        printf("%d", a + b);
    }
    if (s == '-')
    {
        printf("%d", a - b);
    }

    return 0;
}
