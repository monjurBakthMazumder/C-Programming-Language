// Problem Link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/farmers-1

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {

        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        int new_time = (M1 * D) / (M1 + M2);

        int rest_time = D - new_time;

        printf("%d\n", rest_time);
    }

    return 0;
}