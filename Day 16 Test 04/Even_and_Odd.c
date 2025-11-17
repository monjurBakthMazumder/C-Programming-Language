#include <stdio.h>
#include <string.h>

void odd_even()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int positive = 0, negative = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }
    printf("%d %d", positive, negative);
}
int main()
{
    odd_even();
    return 0;
}