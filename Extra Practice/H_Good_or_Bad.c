// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H

#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char S[100005];
        scanf("%s", S);

        int n = strlen(S);
        int flag = 0;

        for (int i = 0; i < n - 2; i++)
        {
            if ((S[i] == '0' && S[i + 1] == '1' && S[i + 2] == '0') ||
                (S[i] == '1' && S[i + 1] == '0' && S[i + 2] == '1'))
            {
                flag = 1;
                break;
            }
        }

        if (flag)
            printf("Good\n");
        else
            printf("Bad\n");
    }

    return 0;
}
