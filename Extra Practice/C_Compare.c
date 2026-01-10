// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C

#include <stdio.h>
#include <string.h>

int main()
{
    char X[21], Y[21];

    scanf("%s %s", X, Y);

    if (strcmp(X, Y) <= 0)
        printf("%s\n", X);
    else
        printf("%s\n", Y);

    return 0;
}
