// Problem Line: https://judge.phitron.io/topics/cm5z7wa3u0007p301xbzdqkuk/cm86cvm49008sr001t3j3mzp6?language=c_103

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}