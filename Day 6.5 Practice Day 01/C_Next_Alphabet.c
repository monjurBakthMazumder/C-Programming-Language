// Problem Line: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C

#include <stdio.h>

int main()
{
    char x;
    scanf("%c", &x);

    if (x == 122)
    {
        printf("%c", 'a');
    }
    else
    {
        printf("%c", ++x);
    }

    return 0;
}