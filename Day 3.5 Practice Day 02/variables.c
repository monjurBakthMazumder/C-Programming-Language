// Problem link: https://www.hackerrank.com/contests/introduction-to-c-programming-a-module-3-5-a-practice-day-2/challenges/variables-6-4

#include <stdio.h>

int main()
{
    int A;
    long long B;
    float C;
    char D;

    scanf("%d", &A);
    scanf("%lld", &B);
    scanf("%f", &C);
    scanf(" %c", &D);

    printf("%d\n", A);
    printf("%lld\n", B);
    printf("%.2f\n", C);
    printf("%c\n", D);

    return 0;
}
