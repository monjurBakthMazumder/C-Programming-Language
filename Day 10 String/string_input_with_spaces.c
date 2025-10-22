#include <stdio.h>
#include<string.h>

int main()
{
    char s[25];
    // gets(s);
    fgets(s, 24 , stdin);
    printf("%s", s);

    return 0;
}