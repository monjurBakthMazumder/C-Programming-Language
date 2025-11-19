// Problem Line: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U

#include <stdio.h>

int main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    int sum = 0;

    int big_digit, small_digit;
    if (a > b)
    {
        big_digit = a;
        small_digit = b;
    }
    else
    {

        big_digit = b;
        small_digit = a;
    }

    for (int i = 1; i <= n; i++)
    {
        int digit_sum = 0;
        int digit = i;
        while (digit != 0)
        {
            digit_sum += (digit % 10);
            digit /= 10;
        }
        if (small_digit <= digit_sum && digit_sum <= big_digit)
        {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}