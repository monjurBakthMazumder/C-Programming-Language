#include <stdio.h>

int main()
{
    int n;
    // Step 1: Take the number of elements as input
    scanf("%d", &n);

    // Step 2: Declare an integer array with 'n' elements
    // This array will store all the numbers entered by the user
    int arr[n];

    // Step 3: Initialize a variable to store the sum
    int sum = 0;

    // Step 4: Take input for all array elements
    for (int i = 0; i < n; i++)
    {
        // Each number entered by the user is stored in arr[i]
        scanf("%d", &arr[i]);
    }

    // Step 5: Add all elements of the array together
    for (int i = 0; i < n; i++)
    {
        // sum = sum + arr[i];
        sum += arr[i];
    }

    // Step 6: Print the total sum of the array
    printf("%d ", sum);

    // Example:
    // Input:
    // 5
    // 10 20 30 40 50
    //
    // Calculation:
    // sum = 10 + 20 + 30 + 40 + 50 = 150
    //
    // Output:
    // 150

    // 🔍 Summary:
    // ➤ arr[i] represents the i-th value stored in the array.
    // ➤ We used a loop to access each element one by one.
    // ➤ sum += arr[i] adds each number to the total.
    // ➤ Arrays make it easy to store and process multiple values at once.

    return 0;
}
