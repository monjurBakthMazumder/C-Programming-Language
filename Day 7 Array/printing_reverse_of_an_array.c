#include <stdio.h>

int main()
{
    int n;
    // Step 1: Take the size of the array from the user
    // This tells how many elements the array will store
    scanf("%d", &n);

    // Step 2: Declare an array of size 'n'
    // This is called a Variable Length Array (VLA)
    // It allows you to create an array with a size given at runtime
    int arr[n];

    // Step 3: Take 'n' inputs and store them in the array
    for (int i = 0; i < n; i++)
    {
        // Each input value is stored in arr[i]
        // Example: if n = 5 and user inputs 10 20 30 40 50
        // then arr = [10, 20, 30, 40, 50]
        scanf("%d", &arr[i]);
    }

    // Step 4: Print the array elements in reverse order
    // Start from the last index (n-1) and go down to index 0
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    // Example:
    // Input:
    // 5
    // 10 20 30 40 50
    //
    // Output:
    // 50 40 30 20 10

    // 🔍 Summary of array concepts:
    // ➤ Arrays store multiple values of the same data type.
    // ➤ Indexing starts from 0 and ends at (n - 1).
    // ➤ You can access elements in any order using their index.
    // ➤ Here, we used reverse indexing to print elements backward.

    return 0;
}
