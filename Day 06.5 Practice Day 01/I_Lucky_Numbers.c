// Problem Line: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int first_digit = n / 10;
    int second_digit = n % 10;

    if (second_digit == 0 || first_digit % second_digit == 0 || second_digit % first_digit == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}