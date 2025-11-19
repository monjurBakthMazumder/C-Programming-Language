#include <stdio.h>

int main()
{
    // Declare an array named 'arr' of type int (integer)
    // The size of the array is 5 — it can store 5 integer values
    int arr[5];

    // Visually, it looks like this in memory:
    // Index:   0    1    2    3    4
    // Value: [ _ , _ , _ , _ , _ ]
    // Each blank (_) represents an element that can hold an integer value.

    // Example of assigning values to each element:
    arr[0] = 10;  // store 10 at index 0
    arr[1] = 20;  // store 20 at index 1
    arr[2] = 30;  // store 30 at index 2
    arr[3] = 40;  // store 40 at index 3
    arr[4] = 50;  // store 50 at index 4

    // Example of accessing (reading) array elements:
    printf("%d\n", arr[0]); // prints 10
    printf("%d\n", arr[4]); // prints 50

    // ⚡ Important points about arrays in C:
    // 1️⃣ Indexing starts from 0 (not 1).
    // 2️⃣ You must specify the size when declaring an array.
    // 3️⃣ All elements must be of the same data type.
    // 4️⃣ You can access or modify an element using its index.

    return 0;
}
