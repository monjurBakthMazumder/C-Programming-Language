#include <stdio.h>

int main()
{
    // Step 1: Declare and initialize an array
    // Here, 'arr' is an integer array of size 5
    // The array is initialized with the values {1, 2, 3, 4, 5}
    int arr[5] = {1, 2, 3, 4, 5};

    // The array looks like this in memory:
    // Index:   0   1   2   3   4
    // Value:  [1,  2,  3,  4,  5]

    // Step 2: Use a loop to print all array elements
    for (int i = 0; i < 5; i++)
    {
        // arr[i] accesses each element using its index
        printf("%d ", arr[i]);
    }

    // Output:
    // 1 2 3 4 5

    // 🔍 Summary:
    // ➤ Array initialization means assigning values while declaring it.
    // ➤ arr[0] = 1, arr[1] = 2, arr[2] = 3, arr[3] = 4, arr[4] = 5.
    // ➤ You don’t need to use scanf() when you already initialize values.
    // ➤ The loop simply prints the values stored in each index.

    return 0;
}
