// Problem Link: https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-programming-a-batch-08/challenges/count-me-2-2

#include <stdio.h>

int main()
{
    char s[100001];
    scanf("%s", s);

    int consonants = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            consonants++;
        }
    }

    printf("%d", consonants);

    return 0;
}