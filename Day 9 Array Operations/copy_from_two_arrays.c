#include <stdio.h>

int main()
{
    int n1, n2;

    scanf("%d", &n1);
    int arr1[n1];

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &n2);
    int arr2[n2];

    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int mergedArray[n1 + n2];

    for (int i = 0; i < n1; i++)
    {
        mergedArray[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        mergedArray[n1 + i] = arr2[i];
    }

    printf("Merged Array: ");
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", mergedArray[i]);
    }

    return 0;
}
