#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    fgets(s, 101 , stdin);

    int size = strlen(s);
    printf("%d", size);

    return 0;
}