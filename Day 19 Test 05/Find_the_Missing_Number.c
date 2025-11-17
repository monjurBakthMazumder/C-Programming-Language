// problem Link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-08/challenges/find-the-missing-number-11-3

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        long long int sum = a * b * c;

        if (m == 0)
        {
            printf("%d\n", 0);
        }
        else if(sum == 0){
            printf("%d\n", -1);
        }
        else if (m % sum == 0)
        {
            long long int missing_number = m / sum;
            printf("%lld\n", missing_number);
        }
        else
        {
            printf("%d\n", -1);
        }
    }

    return 0;
}