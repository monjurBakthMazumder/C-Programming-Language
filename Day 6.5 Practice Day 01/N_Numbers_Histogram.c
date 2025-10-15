// Problem Line: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N

#include <stdio.h>

int main()
{
    char s;
    scanf("%c", &s);
    int n;
    scanf("%d", &n);
    int m;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &m);
        for (int j = 1; j <= m; j++)
        {
            printf("%c", s);
        }
        printf("\n");
    }
    return 0;
}