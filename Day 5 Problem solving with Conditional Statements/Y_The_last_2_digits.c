// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y

#include <stdio.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    int last_two_digit = (int)(((a % 100) * (b % 100) % 100 * (c % 100) % 100 * (d % 100)) % 100);

    printf("%02d", last_two_digit);
    return 0;
}
