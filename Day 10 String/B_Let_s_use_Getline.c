// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B

#include <stdio.h>

int main()
{
    char s[1000001];
    fgets(s, 1000001 , stdin);
    int count = 0;
    for (int i = 0; s[i] != '\\'; i++)
    {
        printf("%c", s[i]);
    }
    return 0;
}