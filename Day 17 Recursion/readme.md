# 🔁 Recursion in C

This repository contains simple and beginner-friendly C programs that demonstrate how **recursion** works.
You will learn:

* What recursion is
* How the **call stack** works
* Printing numbers using recursion
* Working with arrays recursively
* Understanding how recursive functions execute step-by-step

---

## 🧠 What is Recursion?

**Recursion** is a process where a function **calls itself** to solve a problem.

A recursive function has two parts:

1. **Base Case** — When the recursion stops
2. **Recursive Case** — When the function calls itself again

### 🔹 General Structure

```c
return_type function_name(parameters) {
    if (base condition) {
        return;
    }
    // recursive call
    function_name(smaller_problem);
}
```

Recursion solves big problems by breaking them into smaller versions of the same problem.

---

## 🧱 How the Call Stack Works

Every time a function is called:

* A new frame is pushed onto the **call stack**
* Variables inside that function stay within that frame
* When the function finishes, its frame is popped from the stack

For a recursive function:

```
fun(5)
 └─ fun(4)
      └─ fun(3)
           └─ fun(2)
                └─ fun(1)
                     └─ base case
```

Execution returns back step-by-step (unwinding the stack).

---

# 📂 Programs in This Project

---

## 🟦 1. Print from 1 to N using Recursion

```c
#include <stdio.h>

void print1toN(int n) {
    if (n == 0) return;
    print1toN(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    scanf("%d", &n);
    print1toN(n);
    return 0;
}
```

### ✔ Example

Input: `5`
Output:

```
1 2 3 4 5
```

---

## 🟩 2. Print from N to 1 using Recursion

```c
#include <stdio.h>

void printNto1(int n) {
    if (n == 0) return;
    printf("%d ", n);
    printNto1(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printNto1(n);
    return 0;
}
```

### Output:

```
5 4 3 2 1
```

---

## 🟨 3. Print from N to 1 (Reverse Way — Backtracking)

```c
#include <stdio.h>

void printReverse(int n) {
    if (n == 0) return;
    printReverse(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    scanf("%d", &n);
    printReverse(n);
    return 0;
}
```

### Output:

```
1 2 3 4 5
```

**Explanation:**
You print while **coming back** from recursion (stack unwinding).

---

## 🟧 4. Printing an Array Using Recursion

```c
#include <stdio.h>

void printArray(int a[], int i, int n) {
    if (i == n) return;
    printf("%d ", a[i]);
    printArray(a, i + 1, n);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printArray(a, 0, n);
    return 0;
}
```

### Input:

```
5
10 20 30 40 50
```

### Output:

```
10 20 30 40 50
```

---

# 🔑 Key Concepts of Recursion

| Concept        | Description                                        |
| -------------- | -------------------------------------------------- |
| Base Case      | Condition where recursion stops                    |
| Recursive Case | Function calls itself                              |
| Call Stack     | Stores function calls in LIFO order                |
| Stack Overflow | Happens when recursion never reaches the base case |
| Backtracking   | Code executes while returning from recursion       |

---

# ⚙️ How to Compile and Run

```bash
gcc filename.c -o app
./app
```

---

# 🏁 Summary

* Recursion is a function calling itself
* Every call creates a new frame in the **call stack**
* Must always include a **base case**
* Useful for solving problems like printing, array processing, tree/graph traversal, factorials, Fibonacci, etc.
* Helps break big problems into smaller ones

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