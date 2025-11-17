// problem Link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-08/challenges/matrix-38

#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int j = 0; j < c; j++)
    {
        printf("%d ", arr[r - 1][j]);
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        printf("%d ", arr[i][c - 1]);
    }

    return 0;
}
