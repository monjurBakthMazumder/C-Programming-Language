#include <stdio.h>

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

        if (c == r)
    {
        printf("This is square matrix");
    }
    else
    {

        printf("This is not square matrix");
    }

    return 0;
}
