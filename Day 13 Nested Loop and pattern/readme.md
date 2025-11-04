
# 🔁 Nested Loops in C

This repository contains **beginner-friendly C programs** that demonstrate how to use **nested loops** to create patterns, sort arrays, and perform logical operations such as pair sum checks.

Each program highlights how **inner and outer loops** interact to produce different behaviors, from printing shapes to comparing elements.

---

## 🧠 What Are Nested Loops?

A **nested loop** means placing one loop **inside another**.
The **outer loop** controls the number of rows or iterations, while the **inner loop** performs repeated operations within each outer iteration.

**Syntax:**

```c
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        // inner loop body
    }
}
```

---

## 📂 Programs in This Project

### 🟦 1. **pyramid_pattern_1.c**

**Concept:** Print a centered pyramid pattern using nested loops.

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        for (int j = 1; j <= (i * 2 - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
```

**Example Input:**

```
4
```

**Output:**

```
   *
  ***
 *****
*******
```

---

### 🟩 2. **pyramid_pattern_2.c**

**Concept:** Same pyramid pattern logic using variables `star` and `space` for clarity.

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int star = 1, space = n - 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= space; j++) printf(" ");
        for (int j = 1; j <= star; j++) printf("*");
        printf("\n");
        star += 2;
        space--;
    }
    return 0;
}
```

**Output:**

```
   *
  ***
 *****
*******
```

---

### 🟨 3. **array_sort_nested_loop.c**

**Concept:** Sort an array in ascending order using nested loops (basic selection/bubble logic).

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
```

**Example Input:**

```
5
4 2 9 1 7
```

**Output:**

```
1 2 4 7 9
```

---

### 🟧 4. **right_triangle_pattern.c**

**Concept:** Print a right-aligned increasing triangle pattern.

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
```

**Example Output:**

```
*
**
***
****
```

---

### 🟥 5. **inverted_triangle_pattern.c**

**Concept:** Print a decreasing triangle pattern using nested loops.

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
```

**Example Output:**

```
****
***
**
*
```

---

### 🟪 6. **left_aligned_pyramid.c**

**Concept:** Print a left-aligned pyramid with increasing stars and decreasing spaces.

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int star = 1, space = n - 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= space; j++) printf(" ");
        for (int j = 1; j <= star; j++) printf("*");
        printf("\n");
        star++;
        space--;
    }
    return 0;
}
```

**Example Output:**

```
   *
  **
 ***
****
```

---

### 🟫 7. **pair_sum_check.c**

**Concept:** Check if any two elements in the array sum up to a target value `x`.

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int x;
    scanf("%d", &x);

    int flag = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((arr[i] + arr[j]) == x) {
                flag = 1;
                printf("YES %d + %d = %d\n", arr[i], arr[j], arr[i] + arr[j]);
            }
        }
    }
    if (flag == 0) printf("NO");
    return 0;
}
```

**Example Input:**

```
5
4 9 3 2 5
8
```

**Example Output:**

```
YES 3 + 5 = 8
```

---

## 🔑 Key Concepts

| Concept          | Description                                                        |
| ---------------- | ------------------------------------------------------------------ |
| Nested Loop      | A loop inside another loop for repeated inner operations.          |
| Pattern Printing | Using loops to print geometric shapes like triangles and pyramids. |
| Sorting          | Comparing and swapping elements using nested iteration.            |
| Pair Sum         | Checking combinations of array elements for a specific sum.        |

---

## ⚙️ How to Compile and Run

```bash
# Compile any program
gcc pyramid_pattern_1.c -o pyramid

# Run
./pyramid
```

Replace the filename with the desired program (e.g., `array_sort_nested_loop.c`).

---

## 🏁 Summary

* Nested loops are powerful for **repetition within repetition**.
* They are essential for **pattern printing**, **sorting algorithms**, and **multi-dimensional problems**.
* Understanding how inner and outer loops interact helps you design **efficient and structured logic**.

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
