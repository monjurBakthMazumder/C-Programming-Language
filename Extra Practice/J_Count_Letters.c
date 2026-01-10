// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

#include <stdio.h>
#include <string.h>

int main()
{
    char S[10000001];
    scanf("%s", S);

    int freq[26] = {0};

    int n = strlen(S);
    for (int i = 0; i < n; i++)
    {
        freq[S[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c : %d\n", 'a' + i, freq[i]);
        }
    }

    return 0;
}
