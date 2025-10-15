// Problem Line: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = i * 4; j < ((i * 4) + 3); j++)
        {
            printf("%d ", j + 1);
        }
        printf("PUM\n");
    }
    return 0;
}