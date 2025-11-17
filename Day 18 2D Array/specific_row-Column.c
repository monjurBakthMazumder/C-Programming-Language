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

    int specific_row;
    scanf("%d", &specific_row);

    for (int j = 0; j < c; j++)
    {
        printf("%d ", arr[specific_row][j]);
    }
    printf("\n");
    int specific_col;
    scanf("%d", &specific_col);

    for (int i = 0; i < r; i++)
    {
        printf("%d ", arr[i][specific_col]);
    }

    return 0;
}
