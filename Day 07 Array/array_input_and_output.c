#include <stdio.h>

int main()
{
    // Step 1: Declare an integer array named 'arr' with 5 elements
    int arr[5];

    // Step 2: Take input for each element of the array using a loop
    // The loop runs from index 0 to 4 (total 5 times)
    for (int i = 0; i < 5; i++)
    {
        // scanf() stores the user input at the address of arr[i]
        // '&arr[i]' means the memory location of the i-th element
        scanf("%d", &arr[i]);
    }

    // Step 3: Print all the elements of the array
    // Another loop runs from 0 to 4 to access and display each value
    for (int i = 0; i < 5; i++)
    {
        // Print the i-th element with a space after it
        printf("%d ", arr[i]);
    }

    // Example:
    // Input: 10 20 30 40 50
    // Output: 10 20 30 40 50

    // Summary:
    // ➤ arr[0] → first element
    // ➤ arr[1] → second element
    // ➤ arr[2] → third element
    // ➤ arr[3] → fourth element
    // ➤ arr[4] → fifth element

    return 0;
}
