// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F

#include <stdio.h>

int main()
{
    long long int n, m;
    scanf("%lld %lld", &n, &m);

    long long int last_digit_of_first_digit = n % 10;
    long long int last_digit_of_second_digit = m % 10;

    printf("%lld", last_digit_of_first_digit + last_digit_of_second_digit);
    return 0;
}