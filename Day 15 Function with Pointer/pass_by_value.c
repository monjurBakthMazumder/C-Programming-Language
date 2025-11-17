#include <stdio.h>

void fun (int x){
    x =50;
    printf("main function er x ar address %p\n", &x);
    printf("%d\n", x);
}

int main()
{
    int x = 20;
    fun(x);
    printf("main function er x ar address %p\n", &x);
    printf("%d\n", x);
    return 0;
}