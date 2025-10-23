// Problem Link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/count-me-3

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[10001];
        scanf("%s", s);

        int capital_alphabets = 0;
        int small_alphabets = 0;
        int digits = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                capital_alphabets++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                small_alphabets++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                digits++;
            }
        }

        printf("%d %d %d\n", capital_alphabets, small_alphabets, digits);
    }

    return 0;
}