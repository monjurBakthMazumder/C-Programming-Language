# 🧮 Array Operations in C

This repository contains **beginner-friendly C programs** that demonstrate **basic array operations and variable swapping**.  
You will learn how to **insert, delete, reverse arrays**, and **swap variables** step by step with easy-to-understand examples.

---

## 🧠 What is an Array?

An **array** is a collection of variables of the **same type**, stored in **contiguous memory locations**.  
Instead of creating multiple variables like `int a, b, c, d;`, you can store all of them in a single array.

**Visual Example:**

```c
int arr[5] = {10, 20, 30, 40, 50};
```

Memory representation:

| Index | 0   | 1   | 2   | 3   | 4   |
| ----- | --- | --- | --- | --- | --- |
| Value | 10  | 20  | 30  | 40  | 50  |

- `arr[0]` → 10
- `arr[1]` → 20
- `arr[4]` → 50

✅ **Advantages of arrays**:

1. Store multiple values using a single variable name.
2. Easy to process values using **loops**.
3. Efficient memory usage.

---

## 📂 Programs in This Project

### 🟦 1. **delete_element.c**

**Concept:** Delete an element from a specific index in an array

```c
int n;
scanf("%d", &n);
int arr[n + 1];
for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}
int idx;
scanf("%d", &idx);

for (int i = idx; i < n - 1; i++) {
    arr[i] = arr[i + 1];
}

for (int i = 0; i < n - 1; i++) {
    printf("%d ", arr[i]);
}
```

**Example Input:**

```
5
10 20 30 40 50
2
```

**Example Output:**

```
10 20 40 50
```

**Explanation:**

- Elements after the deleted index are **shifted left**.
- Array size effectively decreases by one.

---

### 🟩 2. **insert_element.c**

**Concept:** Insert a value at a specific index in an array

```c
int n;
scanf("%d", &n);
int arr[n + 1];
for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}
int idx, val;
scanf("%d %d", &idx, &val);

for (int i = n; i >= idx + 1; i--) {
    arr[i] = arr[i - 1];
}

arr[idx] = val;

for (int i = 0; i <= n; i++) {
    printf("%d ", arr[i]);
}
```

**Example Input:**

```
5
10 20 30 40 50
2 25
```

**Example Output:**

```
10 20 25 30 40 50
```

**Explanation:**

- Elements after the insertion index are **shifted right**.
- New value is inserted at the desired index.

---

### 🟨 3. **reverse_array_for_loop.c**

**Concept:** Reverse an array using a `for` loop

```c
int n;
scanf("%d", &n);
int arr[n];
for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}

for (int i = 0, j = n - 1; i < j; i++, j--) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}
```

**Example Input:**

```
5
1 2 3 4 5
```

**Example Output:**

```
5 4 3 2 1
```

**Explanation:**

- Swap first element with last, second with second last, etc.
- Use `for` loop with two pointers for easy reversal.

---

### 🟧 4. **reverse_array_while_loop.c**

**Concept:** Reverse an array using a `while` loop

```c
int n;
scanf("%d", &n);
int arr[n];
for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}

int i = 0, j = n - 1;
while (i < j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
}

for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
}
```

**Example Input:**

```
4
10 20 30 40
```

**Example Output:**

```
40 30 20 10
```

**Explanation:**

- Works similarly to the `for` loop method.
- `while` loop keeps swapping until the two pointers meet.

---

### 🟥 5. **swap_two_variables.c**

**Concept:** Swap two variables using a temporary variable

```c
int a = 10, b = 20;
int temp = a;
a = b;
b = temp;
printf("A = %d\n", a);
printf("B = %d", b);
```

**Example Output:**

```
A = 20
B = 10
```

**Explanation:**

- Temporary variable stores the value of `a`.
- Then `b` is assigned to `a`, and the temp value to `b`.

---

### 🟪 6. **copy_from_two_arrays.c**

**Concept:** Copy elements from two arrays into a single array

```c
#include <stdio.h>

int main() {
    int n1, n2;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    printf("Enter elements of first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    printf("Enter elements of second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge arrays into a new array
    int mergedArray[n1 + n2];
    for (int i = 0; i < n1; i++) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        mergedArray[n1 + i] = arr2[i];
    }

    // Print merged array
    printf("Merged Array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedArray[i]);
    }

    return 0;
}
```

**Example Input:**

```
Enter size of first array: 3
Enter elements of first array: 1 2 3
Enter size of second array: 2
Enter elements of second array: 4 5
```

**Example Output:**

```
Merged Array: 1 2 3 4 5
```

**Explanation:**

- A new array of size `n1 + n2` is created.
- Elements of the first array are copied first.
- Then elements of the second array are added **after** the first array.
- The merged array now contains all elements in order.

## 🔍 Key Concepts

| Concept             | Explanation                                                   |
| ------------------- | ------------------------------------------------------------- |
| Array Declaration   | `int arr[5];` declares an integer array of size 5.            |
| Array Insertion     | Shift elements right and assign new value.                    |
| Array Deletion      | Shift elements left to remove a value.                        |
| Reverse Array       | Swap elements from ends towards the center.                   |
| Merging Arrays      | Combine two arrays into a single array by copying elements.   |
| Swapping Variables  | Use a temporary variable to exchange values of two variables. |
| Looping with Arrays | For input, output, processing, or reversing elements.         |

---

## ⚙️ How to Compile and Run

```bash
# Compile
gcc delete_element.c -o delete_element

# Run
./delete_element
```

- Replace the filename to run other programs like `insert_element.c` or `copy_from_two_arrays.c`.
- Ensure you are using a **C99 compatible compiler** for Variable Length Arrays (VLA).

---

## 🏁 Summary

- Arrays store **multiple values of the same type**.
- Indexing starts from **0**.
- Loops make **input, output, insertion, deletion, reversal, and merging** easy.
- Swapping variables is a **basic but essential operation**.
- Arrays are **foundational** for advanced topics like **sorting, searching, and multidimensional arrays**.

---

# Author

**Md Monjur Bakth Mazumder**  
**Software Engineer | Lead Frontend Developer**

Software Engineer & Lead Frontend Developer at [Qrinux](https://www.qrinux.com/)  
Software Engineer & Lead Frontend Developer at [Boom Box E-Solutions](https://www.boomboxesolutions.com/)

📧 [Email me](mailto:md.monjurmbm2001@gmail.com)  
🌐 [Portfolio](https://mdmonjurbakthmazumder.netlify.app)

Passionate about building clean, maintainable, and scalable applications

### ⭐ If you find this helpful, don’t forget to **star** the repository!
