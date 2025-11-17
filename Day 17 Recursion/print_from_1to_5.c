#include <stdio.h>

void hello(int i)
{
    if (i == 6)
    {
        return;
    }
    printf("%d", i);
    hello(i++);
}

int main()
{
    int i = 1;
    hello(i);
    return 0;
}