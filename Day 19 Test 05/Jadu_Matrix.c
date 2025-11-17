// problem Link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-programming-a-batch-08/challenges/magical-tree-3

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
                if (i != j && i + j != r - 1)
                {
                    if (arr[i][j] != 0)
                    {
                        is_diagonal = false;
                        printf("NO\n");
                        return 0;
                    }
                }
                else
                {
                    if (arr[i][j] != 1)
                    {
                        is_diagonal = false;
                        printf("NO\n");
                        return 0;
                    }
                }
        }
        if (is_diagonal)
        {
            printf("YES\n");
        }
    }
    else
    {

        printf("NO\n");
    }

    return 0;
}
