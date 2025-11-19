// Problem Link: https://codeforces.com/contest/1560/problem/A

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int k = arr[i];
        int count = 0, num = 0;

        while (count < k)
        {
            num++;
            if (num % 3 != 0 && num % 10 != 3)
            {
                count++;
            }
        }

        printf("%d\n", num);
    }

    return 0;
}
