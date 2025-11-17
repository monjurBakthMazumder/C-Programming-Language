#include <stdio.h>

int main()
{
    int x =10;
    printf("%p\n", &x);
    printf("%d\n", x);

    int* ptr;
    ptr = &x;
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    printf("%d\n", *ptr);

    *ptr = 20;

    ptr = &x;
    printf("%p\n", ptr);
    printf("%p\n", &ptr);
    printf("%d\n", *ptr);

    
    return 0;
}