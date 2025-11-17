#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    // Input
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    bool is_diagonal = true;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                if (i+j != r-1)
                {
                    if (arr[i][j] != 0)
                    {
                        is_diagonal = false;
                        printf("This is not secondary diagonal matrix\n");
                        return 0;
                    }
                }
        }
        if (is_diagonal)
        {
            printf("This is secondary diagonal matrix\n");
        }
    }
    else
    {

        printf("This is not secondary diagonal matrix\n");
    }

    return 0;
}
