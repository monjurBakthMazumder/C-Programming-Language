// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

#include <stdio.h>

int main()
{
    int a, b, c;
    char s, q;
    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    if (s == '+')
    {
        if (a + b == c)
        {

            printf("Yes");
        }
        else
        {

            printf("%d", a + b);
        }
    }
    if (s == '-')
    {
        if (a - b == c)
        {

            printf("Yes");
        }
        else
        {

            printf("%d", a - b);
        }
    }
    if (s == '*')
    {
        if (a * b == c)
        {

            printf("Yes");
        }
        else
        {

            printf("%d", a * b);
        }
    }
    return 0;
}
