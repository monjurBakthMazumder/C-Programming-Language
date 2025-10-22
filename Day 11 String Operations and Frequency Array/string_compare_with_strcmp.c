#include <stdio.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    int val = strcmp(a, b);

    if (val == 0)
    {
        printf("Equal");
    }
    else if (val > 0)
    {
        printf("B is Small");
    }
    else if (val < 0)
    {
        printf("A is Small");
    }

    return 0;
}