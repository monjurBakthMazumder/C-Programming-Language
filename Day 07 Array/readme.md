# 🧮 Understanding Arrays in C

This repository contains **easy-to-understand C programs** that explain **arrays** — from basic declaration to input, output, reverse printing, sum calculation, and initialization.

Every example comes with **step-by-step explanations** and visualizations to help beginners understand how arrays work in memory.

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

### 🟦 1. **array_basics.c**

**Concept:** Declaring and assigning array values manually

```c
int arr[5];     // Declares an array with 5 elements
arr[0] = 10;    // Assign value 10 to first element
arr[1] = 20;    // Assign value 20 to second element
...
```

**Explanation:**

- Arrays must have a **fixed size** when declared.
- Indexing starts at `0` and ends at `size - 1`.
- You can **access and modify** any element using its index.

---

### 🟩 2. **array_input_and_output.c**

**Concept:** Taking user input and printing array values

```c
int arr[5];
for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);  // Take input for each element
}
for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]); // Print each element
}
```

**Example:**

```
Input: 10 20 30 40 50
Output: 10 20 30 40 50
```

**Explanation:**

- Use a **loop** to take inputs instead of writing 5 separate `scanf()` statements.
- Use another **loop** to print all values.
- `&arr[i]` is used to get the **memory address** where the value should be stored.

---

### 🟨 3. **array_initialization.c**

**Concept:** Initializing an array during declaration

```c
int arr[5] = {1, 2, 3, 4, 5};
```

**Output:**

```
1 2 3 4 5
```

**Explanation:**

- You can assign values **directly** when creating the array.
- Helps avoid using **extra input code**.
- The array can now be used immediately for processing or printing.

---

### 🟧 4. **printing_reverse_of_an_array.c**

**Concept:** Printing array values in reverse order

```c
int n;
scanf("%d", &n);       // Number of elements
int arr[n];
for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);  // Take input
}
for (int i = n - 1; i >= 0; i--) {
    printf("%d ", arr[i]); // Print from last to first
}
```

**Example:**

```
Input: 5
10 20 30 40 50
Output: 50 40 30 20 10
```

**Explanation:**

- Uses a **Variable Length Array (VLA)** — array size decided at runtime.
- Reversing is easy by starting from the **last index** and decrementing the loop.
- Useful for problems where **reverse order** is required.

---

### 🟥 5. **sum_of_all_values_of_array.c**

**Concept:** Summing all array elements

```c
int n;
scanf("%d", &n);
int arr[n];
int sum = 0;
for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}
for (int i = 0; i < n; i++) {
    sum += arr[i]; // Add each element to sum
}
printf("%d", sum);
```

**Example:**

```
Input: 5
10 20 30 40 50
Output: 150
```

**Explanation:**

- The loop `sum += arr[i];` adds each element to a running total.
- Arrays allow easy calculation on multiple values without creating many variables.

---

## 🔍 Key Concepts

| Concept               | Explanation                                                   |
| --------------------- | ------------------------------------------------------------- |
| Array Declaration     | `int arr[5];` declares an integer array of size 5.            |
| Array Initialization  | Assign values while declaring: `int arr[5] = {1,2,3,4,5};`    |
| Indexing              | First element is `arr[0]`, last is `arr[size-1]`.             |
| Looping with Arrays   | For input, output, sum, or processing all elements.           |
| Variable Length Array | Size of array can be input at runtime (C99).                  |
| Reverse Access        | Start from last index and go backward for reverse operations. |

---

## ⚙️ How to Compile and Run

```bash
# Compile
gcc array_input_and_output.c -o array_input_and_output

# Run
./array_input_and_output
```

- Replace the filename to run other programs.
- Ensure you are using a **C99 compatible compiler** for Variable Length Arrays.

---

## 🏁 Summary

- Arrays store **multiple values of the same type**.
- Indexing starts from **0**, not 1.
- Loops make **input, output, and processing** easier.
- With arrays, we can perform tasks like **sum, reverse, and initialization** efficiently.
- Arrays are **foundational** for learning advanced topics like **2D arrays, sorting, and searching**.

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
