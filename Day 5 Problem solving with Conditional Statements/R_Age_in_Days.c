// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int years = 0;
    int months = 0;
    int days = 0;

    years = n / 365;

    n = n - (365 * years);

    months = n / 30;

    n = n - (30 * months);

    days = n;

    printf("%d years\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);

    return 0;
}