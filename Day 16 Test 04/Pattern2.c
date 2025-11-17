#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        int number = 0;
        for (int j = 0; j < star; j++)
        {
            printf("%d", star -j  );
        }
        printf("\n");
        star += 1;
        space--;
    }

    return 0;
}