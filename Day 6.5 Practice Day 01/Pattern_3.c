// Problem Line: https://judge.phitron.io/topics/cm5z7wa3u0007p301xbzdqkuk/cm86d8btu009er001s04tfa7u?language=c_103

#include <stdio.h>

int main()
{
    int n;
    char c = 'A';
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", c + i);
        }
        printf("\n");
    }
    return 0;
}