#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= (i * 2 - 1); j++)
        {
            if(i % 2 == 0){
                printf("-");
            }else{
                printf("#");
            }
        }
        printf("\n");
    }
    int star = (n*2)-1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = star; j > 2; j--)
        {
            int sum = n + i;
             if(sum % 2 == 0){
                printf("-");
            }else{
                printf("#");
            }
        }
        printf("\n");
        star-=2;
    }

    return 0;
}