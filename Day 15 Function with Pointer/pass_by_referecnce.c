#include <stdio.h>

void fun(int *p)
{
    *p = 50;
}

int main()
{
    int x = 20;
    fun(&x);
    printf("main function er x ar address %p\n", &x);
    printf("%d\n", x);
    return 0;
}