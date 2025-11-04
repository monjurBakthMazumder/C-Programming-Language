
# 🔧 Functions & Math Operations in C

This repository contains **simple and beginner-friendly C programs** that demonstrate how to use **functions** and **built-in math operations**.

You will learn how to:

* Define and call functions
* Pass arguments to functions
* Return values from functions
* Use common **math functions** like `ceil`, `floor`, `round`, `sqrt`, `pow`, and `abs`

These examples will help you understand **code modularity** and **reusable logic** in C.

---

## 🧠 What is a Function in C?

A **function** is a block of code that performs a specific task. Functions help in:

* **Reusability** — Write once, use multiple times
* **Modularity** — Break programs into smaller, manageable parts
* **Readability** — Organize code logically

**Syntax:**

```c
return_type function_name(parameters) {
    // function body
}
```

---

## 📂 Programs in This Project

### 🟦 1. **sum_void_no_args.c**

**Concept:** Function with **no arguments** and **void return type**.

```c
#include <stdio.h>

void sum() {
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = a + b;
    printf("%d ", ans);
}

int main() {
    sum();
    return 0;
}
```

**Example Input:**

```
3 5
```

**Output:**

```
8
```

**Explanation:**
The function `sum()` reads input and prints the sum directly. No values are returned.

---

### 🟩 2. **sum_void_with_args.c**

**Concept:** Function with **arguments** but **void return type**.

```c
#include <stdio.h>

void sum(int a, int b) {
    int ans = a + b;
    printf("%d ", ans);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}
```

**Input:**

```
4 6
```

**Output:**

```
10
```

**Explanation:**
The function receives input values as arguments, computes the sum, and prints it. No value is returned.

---

### 🟨 3. **sum_return_no_args.c**

**Concept:** Function with **no arguments** but **returns a value**.

```c
#include <stdio.h>

int sum() {
    int a, b;
    scanf("%d %d", &a, &b);
    return a + b;
}

int main() {
    int result = sum();
    printf("%d ", result);
    return 0;
}
```

**Input:**

```
7 2
```

**Output:**

```
9
```

**Explanation:**
The function reads input internally and **returns the sum**, which is then printed in `main()`.

---

### 🟥 4. **sum_return_with_args.c**

**Concept:** Function with **arguments** and **returns a value**.

```c
#include <stdio.h>

int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int result = sum(a, b);
    printf("%d", result);
    return 0;
}
```

**Input:**

```
5 8
```

**Output:**

```
13
```

**Explanation:**
The function takes input values as arguments, calculates the sum, and **returns it** to be printed in `main()`.

---

### 🟪 5. **math_functions.c**

**Concept:** Demonstrates **common math functions** in C using `<math.h>`.

```c
#include <stdio.h>
#include <math.h>

int main() {
    int ans1 = ceil(3.5);
    printf("%d\n", ans1);

    int ans2 = floor(3.5);
    printf("%d\n", ans2);

    int ans3 = round(3.5);
    printf("%d\n", ans3);

    double ans4 = sqrt(3);
    printf("%lf\n", ans4);

    int ans5 = pow(3, 2);
    printf("%d\n", ans5);

    int ans = abs(-3);
    printf("%d\n", ans);

    return 0;
}
```

**Output:**

```
4
3
4
1.732051
9
3
```

**Explanation of Functions:**

| Function    | Description                      |
| ----------- | -------------------------------- |
| `ceil(x)`   | Returns the smallest integer ≥ x |
| `floor(x)`  | Returns the largest integer ≤ x  |
| `round(x)`  | Rounds x to the nearest integer  |
| `sqrt(x)`   | Returns the square root of x     |
| `pow(x, y)` | Returns x raised to the power y  |
| `abs(x)`    | Returns the absolute value of x  |

---

## 🔑 Key Concepts

| Concept        | Description                                         |
| -------------- | --------------------------------------------------- |
| Function       | A reusable block of code to perform a specific task |
| Arguments      | Values passed to a function for computation         |
| Return Value   | The output that a function gives back to the caller |
| Math Functions | Built-in C functions for mathematical calculations  |

---

## ⚙️ How to Compile and Run

```bash
# Compile any program
gcc sum_void_no_args.c -o sum

# Run
./sum
```

Replace the filename with other programs like `sum_return_with_args.c` or `math_functions.c`.

---

## 🏁 Summary

* Functions help in **modular and reusable code**.
* They can have **arguments**, **return values**, both, or neither.
* Math functions from `<math.h>` allow for common calculations like rounding, powers, and square roots.
* Understanding functions is essential for **clean and maintainable C programs**.

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