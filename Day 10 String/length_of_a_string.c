#include <stdio.h>

int main()
{
    char s[101];
    fgets(s, 101 , stdin);
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d", count);
    return 0;
}