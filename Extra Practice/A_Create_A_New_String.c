// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A

#include <stdio.h>
#include <string.h>

int main()
{
    char S[1001], T[1001];

    scanf("%s", S);
    scanf("%s", T);

    printf("%lu %lu\n", strlen(S), strlen(T));

    printf("%s %s\n", S, T);

    return 0;
}
